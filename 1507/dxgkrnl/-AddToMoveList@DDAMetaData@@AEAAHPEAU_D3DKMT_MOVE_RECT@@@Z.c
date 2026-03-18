/*
 * XREFs of ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1C0156F84
 * Callers:
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C015801C (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00D2128 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C015819C (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 */

__int64 __fastcall DDAMetaData::AddToMoveList(DDAMetaData *this, struct _D3DKMT_MOVE_RECT *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  _QWORD *Buffer; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _D3DKMT_PRESENT_RGNS v12; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_DWORD *)this + 11);
  v5 = *((_DWORD *)this + 10);
  if ( v4 >= v5 )
  {
    v12.DirtyRectCount = 1;
    *(_QWORD *)&v12.MoveRectCount = 0LL;
    v12.pMoveRects = 0LL;
    v12.pDirtyRects = &a2->DestRect;
    if ( !(unsigned int)DDAMetaData::ProcessNewDirtyRects(this, &v12) )
    {
      v8 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v8 + 24) = 1009LL;
      goto LABEL_9;
    }
  }
  else
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) / 0x18u == v4 )
    {
      if ( v4 + 4 < v5 )
        v5 = v4 + 4;
    }
    else
    {
      v5 = v4 + 1;
    }
    Buffer = AUTOEXPANDALLOCATION::GetBuffer(*((void ***)this + 6), 24 * v5, 1);
    if ( !Buffer )
    {
      v8 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v8 + 24) = v5;
LABEL_9:
      WdLogEvent5_WdError(v8);
      return 0LL;
    }
    v10 = 3LL * *((unsigned int *)this + 11);
    *(_OWORD *)&Buffer[v10] = *(_OWORD *)&a2->SourcePoint.x;
    Buffer[v10 + 2] = *(_QWORD *)&a2->DestRect.right;
    ++*((_DWORD *)this + 11);
  }
  return 1LL;
}

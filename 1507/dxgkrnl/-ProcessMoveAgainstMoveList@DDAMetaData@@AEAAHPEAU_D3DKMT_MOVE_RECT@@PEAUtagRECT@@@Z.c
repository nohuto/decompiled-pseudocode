/*
 * XREFs of ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C015801C
 * Callers:
 *     ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0158244 (-ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 * Callees:
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0156E40 (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1C0156F84 (-AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z.c)
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C015819C (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 *     ?RectsOverlap@@YA?AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z @ 0x1C0158E94 (-RectsOverlap@@YA-AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessMoveAgainstMoveList(
        DDAMetaData *this,
        struct _D3DKMT_MOVE_RECT *a2,
        struct tagRECT *a3)
{
  unsigned int v3; // ebp
  __int64 v6; // r14
  RECT *p_DestRect; // r12
  UINT v8; // r8d
  int v9; // ecx
  UINT v10; // ecx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r13d
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int128 v24; // xmm0
  __int64 v25; // rcx
  struct _D3DKMT_PRESENT_RGNS v26; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  v6 = **((_QWORD **)this + 6);
  if ( *((_DWORD *)this + 11) )
  {
    p_DestRect = &a2->DestRect;
    while ( 1 )
    {
      v8 = *(_DWORD *)(v6 + 4);
      v9 = *(_DWORD *)v6 + *(_DWORD *)(v6 + 16) - *(_DWORD *)(v6 + 8);
      v26.DirtyRectCount = *(_DWORD *)v6;
      LODWORD(v26.pDirtyRects) = v9;
      v10 = v8 + *(_DWORD *)(v6 + 20) - *(_DWORD *)(v6 + 12);
      *(&v26.DirtyRectCount + 1) = v8;
      HIDWORD(v26.pDirtyRects) = v10;
      v11 = RectsOverlap(p_DestRect, v6 + 8, 0LL);
      v14 = RectsOverlap(v12, &v26, v13);
      v16 = RectsOverlap(a3, v6 + 8, v15);
      if ( v11 || v14 || v16 )
        break;
      ++v3;
      v6 += 24LL;
      if ( v3 >= *((_DWORD *)this + 11) )
        goto LABEL_7;
    }
    if ( !(unsigned int)DDAMetaData::AddToDirtyList(this, (struct tagRECT *)(v6 + 8)) )
    {
      v18 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v18 + 24) = 893LL;
      goto LABEL_11;
    }
    v21 = (__int64 *)*((_QWORD *)this + 6);
    v26.pDirtyRects = p_DestRect;
    v22 = *v21;
    v23 = 3LL * (unsigned int)--*((_DWORD *)this + 11);
    v24 = *(_OWORD *)(v22 + 24LL * *((unsigned int *)this + 11));
    *(_QWORD *)&v26.MoveRectCount = 0LL;
    v26.pMoveRects = 0LL;
    *(_OWORD *)v6 = v24;
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(v22 + 8 * v23 + 16);
    v26.DirtyRectCount = 1;
    if ( !(unsigned int)DDAMetaData::ProcessNewDirtyRects(this, &v26) )
    {
      v18 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v18 + 24) = 901LL;
      goto LABEL_11;
    }
    return 1LL;
  }
  else
  {
LABEL_7:
    if ( !(unsigned int)DDAMetaData::AddToMoveList(this, a2) )
    {
      v18 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v18 + 24) = 918LL;
LABEL_11:
      WdLogEvent5_WdError(v18);
      return 0LL;
    }
    return 1LL;
  }
}

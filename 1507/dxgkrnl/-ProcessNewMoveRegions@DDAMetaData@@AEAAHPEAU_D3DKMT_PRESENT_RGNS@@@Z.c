/*
 * XREFs of ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0158244
 * Callers:
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C0157078 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1C0157F7C (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C015801C (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessNewMoveRegions(DDAMetaData *this, struct _D3DKMT_PRESENT_RGNS *a2)
{
  D3DKMT_MOVE_RECT *pMoveRects; // rbx
  UINT v3; // edi
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v11; // [rsp+28h] [rbp-30h] BYREF

  pMoveRects = (D3DKMT_MOVE_RECT *)a2->pMoveRects;
  v3 = 0;
  result = 1LL;
  if ( a2->MoveRectCount )
  {
    while ( 1 )
    {
      v11.left = pMoveRects->SourcePoint.x;
      v11.right = pMoveRects->SourcePoint.x + pMoveRects->DestRect.right - pMoveRects->DestRect.left;
      v11.top = pMoveRects->SourcePoint.y;
      v11.bottom = pMoveRects->SourcePoint.y + pMoveRects->DestRect.bottom - pMoveRects->DestRect.top;
      result = DDAMetaData::ProcessMoveAgainstDirtyList(this, pMoveRects, &v11, &v10);
      if ( !(_DWORD)result )
        break;
      if ( v10 )
      {
        result = DDAMetaData::ProcessMoveAgainstMoveList(this, pMoveRects, &v11);
        if ( !(_DWORD)result )
        {
          v9 = WdLogNewEntry5_WdError(v8);
          *(_QWORD *)(v9 + 24) = 675LL;
          goto LABEL_9;
        }
      }
      ++v3;
      ++pMoveRects;
      if ( v3 >= a2->MoveRectCount )
        return result;
    }
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = 662LL;
LABEL_9:
    WdLogEvent5_WdError(v9);
    return 0LL;
  }
  return result;
}

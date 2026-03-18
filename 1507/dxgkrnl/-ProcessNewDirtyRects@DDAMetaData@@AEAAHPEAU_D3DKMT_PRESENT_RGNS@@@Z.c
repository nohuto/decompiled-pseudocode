/*
 * XREFs of ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C015819C
 * Callers:
 *     ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1C0156F84 (-AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C0157078 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1C0157F7C (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C015801C (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0157D48 (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0157EA8 (-ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessNewDirtyRects(
        DDAMetaData *this,
        struct _D3DKMT_PRESENT_RGNS *a2,
        __int64 a3,
        __int64 a4)
{
  struct tagRECT *pDirtyRects; // rsi
  UINT v5; // edi
  __int64 v8; // rcx
  struct tagRECT *v9; // rsi
  UINT v10; // edi
  __int64 v11; // rcx
  __int64 v13; // rax

  pDirtyRects = (struct tagRECT *)a2->pDirtyRects;
  v5 = 0;
  if ( a2->DirtyRectCount )
  {
    while ( (unsigned int)DDAMetaData::ProcessDirtyRectAgainstMoveList(this, pDirtyRects) )
    {
      ++v5;
      ++pDirtyRects;
      if ( v5 >= a2->DirtyRectCount )
        goto LABEL_4;
    }
    v13 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v13 + 24) = 697LL;
  }
  else
  {
LABEL_4:
    v9 = (struct tagRECT *)a2->pDirtyRects;
    v10 = 0;
    if ( !a2->DirtyRectCount )
      return 1LL;
    while ( (unsigned int)DDAMetaData::ProcessDirtyRectAgainstDirtyList(this, v9, a3, a4) )
    {
      ++v10;
      ++v9;
      if ( v10 >= a2->DirtyRectCount )
        return 1LL;
    }
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = v10;
    *(_QWORD *)(v13 + 32) = v9;
  }
  WdLogEvent5_WdError(v13);
  return 0LL;
}

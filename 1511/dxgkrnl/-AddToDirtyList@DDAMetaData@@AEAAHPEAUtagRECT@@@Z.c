/*
 * XREFs of ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C015B158
 * Callers:
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C015C060 (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C015C1C0 (-ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C015C334 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1C015B4D0 (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C015B850 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DDAMetaData::AddToDirtyList(DDAMetaData *this, struct tagRECT *a2)
{
  unsigned int v4; // r8d
  unsigned int v5; // edi
  struct tagRECT *DirtyRectData; // rcx
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rax

  if ( !*((_QWORD *)this + 8) )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = *((_DWORD *)this + 5);
    if ( v4 < v5 )
    {
      if ( (unsigned int)(((unsigned __int64)*(unsigned int *)(*((_QWORD *)this + 4) + 12LL) - 36) >> 4) == v4 )
      {
        if ( v4 + 8 < v5 )
          v5 = v4 + 8;
      }
      else
      {
        v5 = v4 + 1;
      }
      DirtyRectData = DDAMetaData::GetDirtyRectData(this, v5);
      if ( !DirtyRectData )
      {
        v7 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v7 + 24) = v5;
LABEL_10:
        WdLogEvent5_WdError(v7);
        return 0LL;
      }
      DirtyRectData[(*((_DWORD *)this + 6))++] = *a2;
      return 1LL;
    }
    if ( !(unsigned int)DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(this) )
    {
      v10 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v10 + 24) = 1067LL;
LABEL_15:
      v7 = v10;
      goto LABEL_10;
    }
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
          *((_QWORD *)this + 9),
          (unsigned int)a2->left,
          (unsigned int)a2->top,
          (unsigned int)a2->right,
          a2->bottom);
  if ( !v12 )
  {
    v10 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v10 + 24) = 1076LL;
    goto LABEL_15;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
         *((_QWORD *)this + 8),
         *((_QWORD *)this + 8),
         *((_QWORD *)this + 9),
         2LL) )
  {
    return 1LL;
  }
  v14 = WdLogNewEntry5_WdError(v13);
  *(_QWORD *)(v14 + 24) = 1082LL;
  WdLogEvent5_WdError(v14);
  return v12;
}

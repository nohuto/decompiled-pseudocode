/*
 * XREFs of ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1C01571B8
 * Callers:
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0156E40 (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0157D48 (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C0157538 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(DDAMetaData *this)
{
  __int64 v2; // rax
  bool v3; // zf
  struct tagRECT *DirtyRectData; // rax
  int v5; // esi
  LONG *i; // rdi
  __int64 v7; // rcx
  unsigned int v8; // ebp
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  *((_QWORD *)this + 8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 7) + 80LL))(
                            0LL,
                            0LL,
                            0LL,
                            0LL);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 7) + 80LL))(0LL, 0LL, 0LL, 0LL);
  v3 = *((_QWORD *)this + 8) == 0LL;
  *((_QWORD *)this + 9) = v2;
  if ( !v3 && v2 )
  {
    DirtyRectData = DDAMetaData::GetDirtyRectData(this, *((_DWORD *)this + 6));
    v5 = 0;
    if ( !*((_DWORD *)this + 6) )
      return 1LL;
    for ( i = &DirtyRectData->right; ; i += 4 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
             *((_QWORD *)this + 9),
             (unsigned int)*(i - 2),
             (unsigned int)*(i - 1),
             (unsigned int)*i,
             i[1]);
      if ( !v8 )
        break;
      if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
              *((_QWORD *)this + 8),
              *((_QWORD *)this + 8),
              *((_QWORD *)this + 9),
              2LL) )
      {
        v11 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v11 + 24) = 632LL;
        WdLogEvent5_WdError(v11);
        return v8;
      }
      if ( (unsigned int)++v5 >= *((_DWORD *)this + 6) )
        return 1LL;
    }
    v12 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v12 + 24) = 626LL;
    WdLogEvent5_WdError(v12);
  }
  return 0LL;
}

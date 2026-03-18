/*
 * XREFs of ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x1C0157460
 * Callers:
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0157D48 (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1C0157F7C (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C0157538 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 *     ?RectsOverlap@@YA?AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z @ 0x1C0158E94 (-RectsOverlap@@YA-AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z.c)
 */

__int64 __fastcall DDAMetaData::DoesRectOverlapWithExistingDirty(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v6; // esi
  struct tagRECT *DirtyRectData; // rdx
  __int64 result; // rax
  struct tagRECT *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax

  if ( *(_QWORD *)(a1 + 64) )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int))(*(_QWORD *)(a1 + 56) + 96LL))(
           *(_QWORD *)(a1 + 72),
           *a2,
           a2[1],
           a2[2],
           a2[3])
      && (v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(a1 + 56) + 104LL))(
                  *(_QWORD *)(a1 + 72),
                  *(_QWORD *)(a1 + 72),
                  *(_QWORD *)(a1 + 64),
                  1LL)) != 0 )
    {
      if ( v12 == 1 )
        return 0LL;
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v11 + 24) = a2;
      WdLogEvent5_WdError(v11);
    }
    return 3LL;
  }
  v6 = 0;
  DirtyRectData = DDAMetaData::GetDirtyRectData((DDAMetaData *)a1, *(_DWORD *)(a1 + 24));
  if ( !*(_DWORD *)(a1 + 24) )
    return 0LL;
  while ( 1 )
  {
    result = RectsOverlap(a2, DirtyRectData, a3);
    if ( (_DWORD)result )
      break;
    ++v6;
    DirtyRectData = v9 + 1;
    if ( v6 >= *(_DWORD *)(a1 + 24) )
      return 0LL;
  }
  return result;
}

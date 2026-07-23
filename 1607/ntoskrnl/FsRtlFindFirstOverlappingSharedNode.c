/*
 * XREFs of FsRtlFindFirstOverlappingSharedNode @ 0x1400C33DC
 * Callers:
 *     FsRtlPrivateInsertSharedLock @ 0x1400C2E34 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleShared @ 0x1400C31AC (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1400C3C94 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlCheckNoSharedConflict @ 0x1401B8918 (FsRtlCheckNoSharedConflict.c)
 *     FsRtlGetNextFileLock @ 0x1401B8A04 (FsRtlGetNextFileLock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlFindFirstOverlappingSharedNode(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _BYTE *a5)
{
  __int64 v7; // rbx
  unsigned __int64 v8; // r11
  __int64 v9; // rdx
  _QWORD *v10; // r8
  unsigned __int64 v11; // rax

  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v7 = 0LL;
  if ( !a1 )
  {
LABEL_16:
    v9 = v7;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v8 = *a2;
    v9 = a1 - 24;
    v10 = *(_QWORD **)(a1 - 24);
    if ( *(_QWORD *)(a1 - 24 + 16) < *a2 )
      break;
    v11 = v10[1];
    if ( !v11 && !v10[2] )
      break;
    if ( v11 <= *a3 && (*a3 != -1LL || v8) )
    {
      if ( v11 <= v8 )
        goto LABEL_15;
      v7 = a1 - 24;
    }
    if ( a4 )
      *a4 = a1;
    if ( a5 )
      *a5 = 1;
    a1 = *(_QWORD *)(a1 + 8);
LABEL_14:
    if ( !a1 )
      goto LABEL_15;
  }
  if ( v10[6] != *a3 || v10[1] != v8 )
  {
    if ( a4 )
      *a4 = a1;
    if ( a5 )
      *a5 = 0;
    a1 = *(_QWORD *)(a1 + 16);
    goto LABEL_14;
  }
LABEL_15:
  if ( !a1 )
    goto LABEL_16;
LABEL_17:
  if ( v9 )
    return v9 + 24;
  else
    return 0LL;
}

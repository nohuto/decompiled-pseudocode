/*
 * XREFs of FsRtlFindFirstOverlappingExclusiveNode @ 0x1400CEAA4
 * Callers:
 *     FsRtlCheckNoExclusiveConflict @ 0x1400014F0 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1400CDD14 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1400CE170 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1400CE950 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1400CEA30 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlGetNextFileLock @ 0x1401434E4 (FsRtlGetNextFileLock.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FsRtlFindFirstOverlappingExclusiveNode(
        _QWORD *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _BYTE *a5)
{
  _QWORD *v7; // r11
  unsigned __int64 v8; // r10
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8

  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v7 = 0LL;
  if ( !a1 )
    return v7;
  while ( 1 )
  {
    v8 = a1[8];
    v9 = a1;
    v10 = *a2;
    if ( v8 >= *a2 )
    {
      v11 = a1[3];
      if ( v11 || a1[4] )
        break;
    }
    if ( v8 != *a3 || a1[3] != v10 )
    {
      if ( a4 )
        *a4 = a1;
      if ( a5 )
        *a5 = 0;
      a1 = (_QWORD *)a1[2];
      goto LABEL_20;
    }
    v7 = a1;
    if ( a4 )
      *a4 = a1;
    if ( a5 )
      *a5 = 0;
LABEL_13:
    a1 = (_QWORD *)a1[1];
LABEL_20:
    if ( !a1 )
      goto LABEL_21;
  }
  if ( v11 > *a3 || *a3 == -1LL && !v10 )
  {
LABEL_9:
    if ( a4 )
      *a4 = a1;
    if ( a5 )
      *a5 = 1;
    goto LABEL_13;
  }
  if ( v11 > v10 )
  {
    v7 = a1;
    goto LABEL_9;
  }
LABEL_21:
  if ( !a1 )
    return v7;
  return v9;
}

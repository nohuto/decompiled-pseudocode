/*
 * XREFs of FsRtlFindFirstOverlappingSharedNode @ 0x140105568
 * Callers:
 *     FsRtlCheckNoSharedConflict @ 0x140104318 (FsRtlCheckNoSharedConflict.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140104EB8 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleShared @ 0x1401052C0 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x140105F7C (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlGetNextFileLock @ 0x140131104 (FsRtlGetNextFileLock.c)
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
LABEL_12:
    v9 = v7;
    goto LABEL_13;
  }
  do
  {
    v8 = *a2;
    v9 = a1 - 24;
    v10 = *(_QWORD **)(a1 - 24);
    if ( *(_QWORD *)(a1 - 24 + 16) >= *a2 )
    {
      v11 = v10[1];
      if ( v11 || v10[2] )
      {
        if ( v11 <= *a3 && (*a3 != -1LL || v8) )
        {
          if ( v11 <= v8 )
            break;
          v7 = a1 - 24;
        }
        if ( a4 )
          *a4 = a1;
        if ( a5 )
          *a5 = 1;
        a1 = *(_QWORD *)(a1 + 8);
        continue;
      }
    }
    if ( v10[6] == *a3 && v10[1] == v8 )
      break;
    if ( a4 )
      *a4 = a1;
    if ( a5 )
      *a5 = 0;
    a1 = *(_QWORD *)(a1 + 16);
  }
  while ( a1 );
  if ( !a1 )
    goto LABEL_12;
LABEL_13:
  if ( v9 )
    return v9 + 24;
  else
    return 0LL;
}

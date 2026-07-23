/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x1800C1F20
 * Callers:
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800C4084 (RtlpQueryCriticalSectionOwnerInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlTryAcquireSRWLockShared @ 0x180070C50 (RtlTryAcquireSRWLockShared.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800EA538 (RtlIsAnyDebuggerPresent.c)
 */

HANDLE __cdecl RtlQueryCriticalSectionOwner(HANDLE EventHandle)
{
  char v1; // dl
  char v2; // r15
  bool v4; // si
  void *v5; // rbx
  _UNKNOWN **v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // rdx

  v2 = v1;
  v4 = 0;
  v5 = 0LL;
  if ( !EventHandle || !RtlTryAcquireSRWLockShared(&RtlCriticalSectionLock) )
    return 0LL;
  v7 = (_UNKNOWN **)RtlCriticalSectionList;
  v8 = RtlCriticalSectionList;
  while ( v7 != &RtlCriticalSectionList )
  {
    if ( !*((_WORD *)v7 - 8) )
    {
      v9 = (__int64)*(v7 - 1);
      if ( v2 )
      {
        if ( (_BYTE *)v9 == (char *)EventHandle - 8 )
        {
          v5 = *(void **)(v9 + 16);
          break;
        }
      }
      else if ( *(HANDLE *)(v9 + 24) == EventHandle )
      {
        v5 = *(void **)(v9 + 16);
        break;
      }
    }
    v7 = (_UNKNOWN **)*v7;
    if ( v7 == v8 )
      break;
    if ( v4 )
      v8 = (_QWORD *)*v8;
    v4 = !v4;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  return v5;
}

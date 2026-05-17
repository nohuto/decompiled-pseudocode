/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x1800CBC40
 * Callers:
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800CD6D4 (RtlpQueryCriticalSectionOwnerInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007B490 (RtlTryAcquireSRWLockShared.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800EE648 (RtlIsAnyDebuggerPresent.c)
 */

__int64 __fastcall RtlQueryCriticalSectionOwner(__int64 a1, char a2)
{
  bool v4; // si
  __int64 v5; // rbx
  _UNKNOWN **v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // rdx

  v4 = 0;
  v5 = 0LL;
  if ( !a1 || !RtlTryAcquireSRWLockShared(&RtlCriticalSectionLock) )
    return 0LL;
  v7 = (_UNKNOWN **)RtlCriticalSectionList;
  v8 = RtlCriticalSectionList;
  while ( v7 != &RtlCriticalSectionList )
  {
    if ( !*((_WORD *)v7 - 8) )
    {
      v9 = (__int64)*(v7 - 1);
      if ( a2 )
      {
        if ( v9 == a1 - 8 )
        {
          v5 = *(_QWORD *)(v9 + 16);
          break;
        }
      }
      else if ( *(_QWORD *)(v9 + 24) == a1 )
      {
        v5 = *(_QWORD *)(v9 + 16);
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

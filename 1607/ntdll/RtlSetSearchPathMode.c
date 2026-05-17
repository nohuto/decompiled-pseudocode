/*
 * XREFs of RtlSetSearchPathMode @ 0x1800069D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInvalidatePathCache @ 0x180008EF0 (RtlpInvalidatePathCache.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlSetSearchPathMode(int a1)
{
  int v2; // ebx
  __int64 v3; // rdi

  if ( (a1 & 0xFFFE7FFE) != 0 )
    return 3221225485LL;
  if ( (a1 & 1) == 0 )
  {
    if ( (a1 & 0x18000) == 0x10000 )
      goto LABEL_4;
    return 3221225485LL;
  }
  if ( (a1 & 0x10000) != 0 )
    return 3221225485LL;
LABEL_4:
  RtlAcquireSRWLockExclusive(&unk_180153340);
  if ( (_bittest(&RtlpSearchPathMode, 0xFu) & ((a1 & 0x8000) == 0)) != 0 )
  {
    v2 = -1073741790;
  }
  else
  {
    RtlpSearchPathMode = a1;
    v2 = 0;
  }
  RtlReleaseSRWLockExclusive(&unk_180153340);
  if ( v2 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v3 = RtlpInvalidatePathCache(&RtlpSearchPath);
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v3);
  }
  return (unsigned int)v2;
}

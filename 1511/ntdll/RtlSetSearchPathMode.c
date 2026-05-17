/*
 * XREFs of RtlSetSearchPathMode @ 0x1800844C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpInvalidatePathCache @ 0x180084570 (RtlpInvalidatePathCache.c)
 */

__int64 __fastcall RtlSetSearchPathMode(int a1, char *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rdi

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
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_180146210, a2, a3, a4);
  if ( (_bittest(&RtlpSearchPathMode, 0xFu) & ((a1 & 0x8000) == 0)) != 0 )
  {
    v5 = -1073741790;
  }
  else
  {
    RtlpSearchPathMode = a1;
    v5 = 0;
  }
  RtlReleaseSRWLockExclusive(&qword_180146210);
  if ( v5 >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpCachedPathLock, v6, v7, v8);
    v9 = RtlpInvalidatePathCache(&RtlpSearchPath);
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v9 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  }
  return (unsigned int)v5;
}

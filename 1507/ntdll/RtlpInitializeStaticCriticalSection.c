/*
 * XREFs of RtlpInitializeStaticCriticalSection @ 0x1800770E4
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x180035210 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpInitializeStaticCriticalSection(_QWORD *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 *v7; // rcx

  v4 = a1[4];
  if ( (v4 & 0x2FFFFFF) == 0x2000000 )
    v4 |= 0x7D0uLL;
  if ( NtCurrentPeb()->NumberOfProcessors == 1 )
    v4 = (unsigned int)v4 & 0xFF000000;
  RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock, a2, a3, a4);
  v6 = *a1 + 16LL;
  if ( !*(_QWORD *)v6 )
  {
    a1[4] = v4;
    v7 = (__int64 *)off_180143120;
    *(_QWORD *)v6 = &RtlCriticalSectionList;
    *(_QWORD *)(v6 + 8) = v7;
    if ( (_UNKNOWN **)*v7 != &RtlCriticalSectionList )
      __fastfail(3u);
    *v7 = v6;
    off_180143120 = (_UNKNOWN **)v6;
  }
  return RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
}

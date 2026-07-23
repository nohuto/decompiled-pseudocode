/*
 * XREFs of RtlpInitializeStaticCriticalSection @ 0x180087464
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x180019B88 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpInitializeStaticCriticalSection(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 *v4; // rcx

  v1 = a1[4];
  if ( (v1 & 0x2FFFFFF) == 0x2000000 )
    v1 |= 0x7D0uLL;
  if ( NtCurrentPeb()->NumberOfProcessors == 1 )
    v1 = (unsigned int)v1 & 0xFF000000;
  RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
  v3 = *a1 + 16LL;
  if ( !*(_QWORD *)v3 )
  {
    a1[4] = v1;
    v4 = (__int64 *)off_18014C618[0];
    if ( *(_UNKNOWN ***)off_18014C618[0] != &RtlCriticalSectionList )
      __fastfail(3u);
    *(_QWORD *)v3 = &RtlCriticalSectionList;
    *(_QWORD *)(v3 + 8) = v4;
    *v4 = v3;
    off_18014C618[0] = (_UNKNOWN *)v3;
  }
  RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
}

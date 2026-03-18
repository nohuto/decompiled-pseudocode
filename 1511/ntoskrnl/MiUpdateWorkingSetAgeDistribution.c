/*
 * XREFs of MiUpdateWorkingSetAgeDistribution @ 0x1400BAC08
 * Callers:
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     MiUnlockVa @ 0x140021744 (MiUnlockVa.c)
 *     MiTrimThisWsle @ 0x1400B6290 (MiTrimThisWsle.c)
 *     MiReleaseWsle @ 0x1400BAAFC (MiReleaseWsle.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x1400E42B4 (MiReplaceWorkingSetEntryLarge.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x1401D812C (MiReplaceWorkingSetEntrySmall.c)
 * Callees:
 *     <none>
 */

volatile signed __int64 *__fastcall MiUpdateWorkingSetAgeDistribution(__int64 a1, int a2, __int64 a3)
{
  volatile signed __int64 *result; // rax

  if ( a2 )
  {
    result = (volatile signed __int64 *)(unsigned int)(a2 - 1);
    *(_QWORD *)(a1 + 8LL * (_QWORD)result + 40) += a3;
    if ( a2 == 7 )
      return MiVolunteerForTrimFirst(a1, a3);
  }
  return result;
}

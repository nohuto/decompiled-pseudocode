/*
 * XREFs of MiUpdateWorkingSetAgeDistribution @ 0x1400BA3CC
 * Callers:
 *     MiTrimThisWsle @ 0x1400164E0 (MiTrimThisWsle.c)
 *     MiUnlockVa @ 0x1400B88A0 (MiUnlockVa.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x1400FEB54 (MiReplaceWorkingSetEntryLarge.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x1401E9D18 (MiReplaceWorkingSetEntrySmall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateWorkingSetAgeDistribution(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = (unsigned int)(a2 - 1);
    *(_QWORD *)(a1 + 8 * result + 40) += a3;
    if ( a2 == 7 )
      return MiVolunteerForTrimFirst(a1, a3);
  }
  return result;
}

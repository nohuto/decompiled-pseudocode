/*
 * XREFs of MiUpdateWorkingSetAgeDistribution @ 0x1400BC53C
 * Callers:
 *     MiTrimThisWsle @ 0x140016960 (MiTrimThisWsle.c)
 *     MiUnlockVa @ 0x1400BAA10 (MiUnlockVa.c)
 *     NtLockVirtualMemory @ 0x1400BAEC8 (NtLockVirtualMemory.c)
 *     MiActOnPte @ 0x1400BBC88 (MiActOnPte.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x140100DD4 (MiReplaceWorkingSetEntryLarge.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x1401E9EEC (MiReplaceWorkingSetEntrySmall.c)
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

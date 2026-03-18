/*
 * XREFs of MiUpdateWorkingSetAgeDistribution @ 0x1400808F0
 * Callers:
 *     MiUnlockVa @ 0x14007C98C (MiUnlockVa.c)
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x140080B2C (MiReplaceWorkingSetEntryLarge.c)
 *     MiTrimThisWsle @ 0x140081700 (MiTrimThisWsle.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x14021AF0C (MiReplaceWorkingSetEntrySmall.c)
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

/*
 * XREFs of MiStoreChargeReservedPages @ 0x14013C7AC
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B650 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiChargeResident @ 0x140103450 (MiChargeResident.c)
 */

__int64 __fastcall MiStoreChargeReservedPages(int *a1)
{
  if ( (unsigned int)MiChargeCommit((__int64)a1, 0x20uLL, 3) )
  {
    if ( (unsigned int)MiChargeResident(a1, 0x20uLL, 0LL) )
    {
      a1[1] |= 8u;
      return 1LL;
    }
    MiReturnCommit((__int64)a1, 0x20uLL);
  }
  return 0LL;
}

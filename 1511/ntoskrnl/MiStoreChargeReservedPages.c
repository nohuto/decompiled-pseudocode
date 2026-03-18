/*
 * XREFs of MiStoreChargeReservedPages @ 0x14013312C
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 */

__int64 __fastcall MiStoreChargeReservedPages(int *a1)
{
  if ( (unsigned int)MiChargeCommit((unsigned __int64)a1, 0x20uLL, 3uLL) )
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

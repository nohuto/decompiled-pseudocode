/*
 * XREFs of MiStoreChargeReservedPages @ 0x14013CD1C
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
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

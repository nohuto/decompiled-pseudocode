/*
 * XREFs of BgpFwLibraryDestroy @ 0x1406DC6A0
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1406DA5E8 (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x1406DE2B0 (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14011E4C8 (BgpFwFreeMemory.c)
 *     BgpFwInitializeReservePool @ 0x1406D9BF0 (BgpFwInitializeReservePool.c)
 *     ResFwBackgroundTransition @ 0x1406D9C2C (ResFwBackgroundTransition.c)
 *     BgpFwLibraryDisable @ 0x1406DC74C (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x1406DC910 (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  __int64 v1; // rcx

  BgpFoDestroy(0LL);
  if ( qword_1402D4C28 )
  {
    BgpFoDestroy(qword_1402D4C28);
    v1 = qword_1402D4C28;
    if ( *(_QWORD *)qword_1402D4C28 && (*(_DWORD *)(qword_1402D4C28 + 12) & 1) == 0 )
    {
      BgpFwFreeMemory(*(_QWORD *)qword_1402D4C28);
      v1 = qword_1402D4C28;
    }
    BgpFwFreeMemory(v1);
    qword_1402D4C28 = 0LL;
  }
  if ( qword_1402D4BE0 )
  {
    BgpFwFreeMemory(qword_1402D4BE0);
    qword_1402D4BE0 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_1402D4C30 = 0LL;
    qword_1402D4C48 = 0LL;
    qword_1402D4C40 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2);
  dword_1402D4BB0 = 0;
  return 0LL;
}

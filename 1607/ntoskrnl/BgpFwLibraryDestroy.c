/*
 * XREFs of BgpFwLibraryDestroy @ 0x140728770
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140725E8C (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x14072A2C4 (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     BgpFwInitializeReservePool @ 0x1407257D8 (BgpFwInitializeReservePool.c)
 *     ResFwBackgroundTransition @ 0x140725ACC (ResFwBackgroundTransition.c)
 *     BgpFwLibraryDisable @ 0x140728834 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x1407289F8 (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  __int64 v1; // rcx

  BgpFoDestroy(0LL);
  if ( qword_1402FA028 )
  {
    BgpFoDestroy(qword_1402FA028);
    v1 = qword_1402FA028;
    if ( *(_QWORD *)qword_1402FA028 && (*(_DWORD *)(qword_1402FA028 + 12) & 1) == 0 )
    {
      BgpFwFreeMemory(*(_QWORD *)qword_1402FA028);
      v1 = qword_1402FA028;
    }
    BgpFwFreeMemory(v1);
    qword_1402FA028 = 0LL;
  }
  if ( qword_1402F9FC0 )
  {
    BgpFwFreeMemory(qword_1402F9FC0);
    qword_1402F9FC0 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_1402FA030 = 0LL;
    qword_1402FA048 = 0LL;
    qword_1402FA040 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2);
  dword_1402F9F90 = 0;
  return 0LL;
}

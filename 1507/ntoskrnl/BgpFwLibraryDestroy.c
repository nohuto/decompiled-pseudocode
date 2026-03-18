/*
 * XREFs of BgpFwLibraryDestroy @ 0x14075F6E8
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14075D630 (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x140761330 (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 *     BgpFwInitializeReservePool @ 0x14075CC38 (BgpFwInitializeReservePool.c)
 *     ResFwBackgroundTransition @ 0x14075CC74 (ResFwBackgroundTransition.c)
 *     BgpFwLibraryDisable @ 0x14075F794 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x14075F958 (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  __int64 v1; // rcx

  BgpFoDestroy(0LL);
  if ( qword_140323D68 )
  {
    BgpFoDestroy(qword_140323D68);
    v1 = qword_140323D68;
    if ( *(_QWORD *)qword_140323D68 && (*(_DWORD *)(qword_140323D68 + 12) & 1) == 0 )
    {
      BgpFwFreeMemory(*(_QWORD *)qword_140323D68);
      v1 = qword_140323D68;
    }
    BgpFwFreeMemory(v1);
    qword_140323D68 = 0LL;
  }
  if ( qword_140323D20 )
  {
    BgpFwFreeMemory(qword_140323D20);
    qword_140323D20 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140323D70 = 0LL;
    qword_140323D88 = 0LL;
    qword_140323D80 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2);
  dword_140323CF0 = 0;
  return 0LL;
}

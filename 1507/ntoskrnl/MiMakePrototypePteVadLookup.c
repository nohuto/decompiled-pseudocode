/*
 * XREFs of MiMakePrototypePteVadLookup @ 0x140225C48
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiSplitPrivatePage @ 0x140008EC0 (MiSplitPrivatePage.c)
 *     MiSetReadOnlyOnSectionView @ 0x140031070 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteVadLookup(char a1)
{
  return MiSwizzleInvalidPte(32 * (a1 & 0x1F | 0xFFFFFFFFF8000020uLL));
}

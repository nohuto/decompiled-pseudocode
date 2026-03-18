/*
 * XREFs of MiMakePrototypePteVadLookup @ 0x1401F2768
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000CE40 (MiSetReadOnlyOnSectionView.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiResolveSharedZeroFault @ 0x140042000 (MiResolveSharedZeroFault.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiSplitPrivatePage @ 0x1400988C0 (MiSplitPrivatePage.c)
 *     MiFillPteWithProto @ 0x1400A0F24 (MiFillPteWithProto.c)
 *     MiExpandSharedZeroCluster @ 0x1400B9458 (MiExpandSharedZeroCluster.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiFreeWsleList @ 0x1400E3AD0 (MiFreeWsleList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteVadLookup(char a1)
{
  return MiSwizzleInvalidPte(32 * (a1 & 0x1F | 0xFFFFFFFFF8000020uLL));
}

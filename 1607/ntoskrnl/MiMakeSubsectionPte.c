/*
 * XREFs of MiMakeSubsectionPte @ 0x1401F25A8
 * Callers:
 *     MiPurgeImageSection @ 0x1401EA6D4 (MiPurgeImageSection.c)
 *     MiInitializeFileOnlyPfn @ 0x1401ED710 (MiInitializeFileOnlyPfn.c)
 *     MiInitializePrototypePtes @ 0x1404A2E54 (MiInitializePrototypePtes.c)
 *     MiBuildImageControlArea @ 0x1405065E4 (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x140506B60 (MiParseImageSectionHeaders.c)
 *     MiAllocatePerSessionProtos @ 0x1406618FC (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}

/*
 * XREFs of MiMakeSubsectionPte @ 0x1401F277C
 * Callers:
 *     MiPurgeImageSection @ 0x1401EA8A8 (MiPurgeImageSection.c)
 *     MiInitializeFileOnlyPfn @ 0x1401ED8E4 (MiInitializeFileOnlyPfn.c)
 *     MiInitializePrototypePtes @ 0x1404B8A74 (MiInitializePrototypePtes.c)
 *     MiBuildImageControlArea @ 0x140523584 (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x140523B00 (MiParseImageSectionHeaders.c)
 *     MiAllocatePerSessionProtos @ 0x140661818 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}

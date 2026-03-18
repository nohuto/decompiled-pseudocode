/*
 * XREFs of MiMakeSubsectionPte @ 0x140225C5C
 * Callers:
 *     MiPurgeImageSection @ 0x14021C698 (MiPurgeImageSection.c)
 *     MiInitializePrototypePtes @ 0x1404B24A0 (MiInitializePrototypePtes.c)
 *     MiBuildImageControlArea @ 0x1404FC19C (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x1404FC730 (MiParseImageSectionHeaders.c)
 *     MiAllocatePerSessionProtos @ 0x1406A30B8 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}

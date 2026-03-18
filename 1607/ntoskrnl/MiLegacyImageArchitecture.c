/*
 * XREFs of MiLegacyImageArchitecture @ 0x1400FDD94
 * Callers:
 *     MiCreateImageFileMap @ 0x1405229BC (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x140524330 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}

/*
 * XREFs of EngGetCurrentCodePage @ 0x1C00128B0
 * Callers:
 *     bInitializeEUDC @ 0x1C000EF50 (bInitializeEUDC.c)
 *     cUnicodeRangesSupported @ 0x1C000F81C (cUnicodeRangesSupported.c)
 *     bLoadTTF @ 0x1C0010AF4 (bLoadTTF.c)
 *     bComputeIFISIZE @ 0x1C00120E4 (bComputeIFISIZE.c)
 *     vFillIFICharsets @ 0x1C0012E80 (vFillIFICharsets.c)
 *     vFill_IFIMETRICS @ 0x1C00130A4 (vFill_IFIMETRICS.c)
 *     GetCodePageFromSpecId @ 0x1C02451B0 (GetCodePageFromSpecId.c)
 *     IsCurrentCodePageDBCS @ 0x1C0245208 (IsCurrentCodePageDBCS.c)
 * Callees:
 *     <none>
 */

void __stdcall EngGetCurrentCodePage(PUSHORT OemCodePage, PUSHORT AnsiCodePage)
{
  RtlGetDefaultCodePage(AnsiCodePage, OemCodePage);
}

/*
 * XREFs of EngGetCurrentCodePage @ 0x1C0125210
 * Callers:
 *     cUnicodeRangesSupported @ 0x1C0124DBC (cUnicodeRangesSupported.c)
 *     bInitializeEUDC @ 0x1C013CD50 (bInitializeEUDC.c)
 *     bLoadTTF @ 0x1C01425E4 (bLoadTTF.c)
 *     vFill_IFIMETRICS @ 0x1C0157904 (vFill_IFIMETRICS.c)
 *     vFillIFICharsets @ 0x1C015837C (vFillIFICharsets.c)
 *     bComputeIFISIZE @ 0x1C0158AD0 (bComputeIFISIZE.c)
 *     GetCodePageFromSpecId @ 0x1C0245020 (GetCodePageFromSpecId.c)
 *     IsCurrentCodePageDBCS @ 0x1C0245078 (IsCurrentCodePageDBCS.c)
 * Callees:
 *     <none>
 */

void __stdcall EngGetCurrentCodePage(PUSHORT OemCodePage, PUSHORT AnsiCodePage)
{
  RtlGetDefaultCodePage(AnsiCodePage, OemCodePage);
}

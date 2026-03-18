/*
 * XREFs of EngGetCurrentCodePage @ 0x1C0018130
 * Callers:
 *     cUnicodeRangesSupported @ 0x1C0017CFC (cUnicodeRangesSupported.c)
 *     bLoadTTF @ 0x1C00207C4 (bLoadTTF.c)
 *     bInitializeEUDC @ 0x1C0107FB0 (bInitializeEUDC.c)
 *     vFill_IFIMETRICS @ 0x1C0155298 (vFill_IFIMETRICS.c)
 *     vFillIFICharsets @ 0x1C0155D1C (vFillIFICharsets.c)
 *     bComputeIFISIZE @ 0x1C01564B4 (bComputeIFISIZE.c)
 *     GetCodePageFromSpecId @ 0x1C02411B0 (GetCodePageFromSpecId.c)
 *     IsCurrentCodePageDBCS @ 0x1C0241208 (IsCurrentCodePageDBCS.c)
 * Callees:
 *     <none>
 */

void __stdcall EngGetCurrentCodePage(PUSHORT OemCodePage, PUSHORT AnsiCodePage)
{
  RtlGetDefaultCodePage(AnsiCodePage, OemCodePage);
}

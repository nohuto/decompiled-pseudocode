/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C003A6FC
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C007F000 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreConvertMemToRedirectionDC @ 0x1C009B164 (GreConvertMemToRedirectionDC.c)
 *     GreGetDxRgn @ 0x1C0260F50 (GreGetDxRgn.c)
 *     GreHintDxUpdate @ 0x1C026152C (GreHintDxUpdate.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C02626A0 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C02628E0 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C0263380 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C02633D0 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0263450 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0263500 (DxgkEngIsRedirectionDC.c)
 *     DxgkEngLockVisRgn @ 0x1C0263540 (DxgkEngLockVisRgn.c)
 *     GreWatchVisRgnChange @ 0x1C0291584 (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0293A00 (GreConvertRedirectionToMemDC.c)
 *     GreSetPaletteEntries @ 0x1C02B1470 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02B1950 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

MDCOBJA *__fastcall MDCOBJA::MDCOBJA(MDCOBJA *this, HDC a2)
{
  HDC v3; // rax

  v3 = a2;
  LOBYTE(a2) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = HmgShareLock(v3, a2);
  return this;
}

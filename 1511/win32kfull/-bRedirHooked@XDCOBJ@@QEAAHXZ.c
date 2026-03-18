/*
 * XREFs of ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0263BDC
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0044190 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     NtGdiTransparentBlt @ 0x1C00F0040 (NtGdiTransparentBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XDCOBJ::bRedirHooked(XDCOBJ *this)
{
  struct PDEV *v1; // rcx

  v1 = *(struct PDEV **)(*(_QWORD *)this + 48LL);
  return v1 == gpRedirDev || v1 == gpBmpDev;
}

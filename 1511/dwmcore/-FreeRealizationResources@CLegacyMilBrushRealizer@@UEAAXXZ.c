/*
 * XREFs of ?FreeRealizationResources@CLegacyMilBrushRealizer@@UEAAXXZ @ 0x18008A460
 * Callers:
 *     ?FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ @ 0x18005D400 (-FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ.c)
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18005D460 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PE.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CLegacyMilBrushRealizer::FreeRealizationResources(CLegacyMilBrushRealizer *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 12);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 12) = 0LL;
  }
}

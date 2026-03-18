/*
 * XREFs of ?FreeRealizationResources@CBrushRealizer@@UEAAXXZ @ 0x180081340
 * Callers:
 *     ?FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ @ 0x1800834C0 (-FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ.c)
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x180083520 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelFo.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CBrushRealizer::FreeRealizationResources(CBrushRealizer *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 12);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 12) = 0LL;
  }
}

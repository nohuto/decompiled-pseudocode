/*
 * XREFs of ?CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x180031C78
 * Callers:
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180031CC8 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x18014D290 (-CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CHwBitmapColorSource::CheckAndSetReusableSources(
        CHwBitmapColorSource *this,
        struct CHwBitmapColorSource *a2)
{
  struct CHwBitmapColorSource *v2; // rdi
  CMILRefCountBase *v4; // rcx
  struct CHwBitmapColorSource *v5; // rbx

  v2 = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct CHwBitmapColorSource *))a2)(a2);
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 33);
  if ( v4 )
  {
    CMILRefCountBase::Release(v4);
    *((_QWORD *)this + 33) = 0LL;
  }
  if ( v2 )
  {
    do
    {
      v5 = (struct CHwBitmapColorSource *)*((_QWORD *)v2 + 33);
      *((_QWORD *)v2 + 33) = 0LL;
      CHwBitmapColorSource::CheckAndSetReusableSource(this, v2);
      CMILRefCountBase::Release(v2);
      v2 = v5;
    }
    while ( v5 );
  }
}

/*
 * XREFs of ?AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z @ 0x18014D1DC
 * Callers:
 *     ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x18008BC6C (-GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorS.c)
 *     ?AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x18014B7F4 (-AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CHwBitmapColorSource::AddToReusableRealizationSourceList(
        CHwBitmapColorSource *this,
        struct CHwBitmapColorSource **a2)
{
  CMILRefCountBase *v4; // rcx

  v4 = (CMILRefCountBase *)*((_QWORD *)this + 33);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  *((_QWORD *)this + 33) = *a2;
  *a2 = this;
  (**(void (__fastcall ***)(CHwBitmapColorSource *))this)(this);
}

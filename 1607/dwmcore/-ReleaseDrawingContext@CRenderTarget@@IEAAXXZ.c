/*
 * XREFs of ?ReleaseDrawingContext@CRenderTarget@@IEAAXXZ @ 0x1800B828C
 * Callers:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x180073ED4 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?Initialize@CRenderTarget@@MEAAJXZ @ 0x1800B8490 (-Initialize@CRenderTarget@@MEAAJXZ.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800B9BB4 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800BB910 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CRenderTarget::ReleaseDrawingContext(CRenderTarget *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 18);
  if ( v2 )
  {
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v2 + 8));
    *((_QWORD *)this + 18) = 0LL;
  }
}

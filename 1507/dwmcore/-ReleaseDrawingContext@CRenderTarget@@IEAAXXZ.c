/*
 * XREFs of ?ReleaseDrawingContext@CRenderTarget@@IEAAXXZ @ 0x180058508
 * Callers:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18004A980 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x180058538 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?Initialize@CRenderTarget@@MEAAJXZ @ 0x180058690 (-Initialize@CRenderTarget@@MEAAJXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800ED270 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CRenderTarget::ReleaseDrawingContext(CRenderTarget *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v2 + 8));
    *((_QWORD *)this + 9) = 0LL;
  }
}

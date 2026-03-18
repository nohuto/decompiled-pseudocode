/*
 * XREFs of ?ReleaseDrawingContext@CRenderTarget@@IEAAXXZ @ 0x1800AD24C
 * Callers:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18007BED8 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800AD304 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?Initialize@CRenderTarget@@MEAAJXZ @ 0x1800AD450 (-Initialize@CRenderTarget@@MEAAJXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B7D20 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
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

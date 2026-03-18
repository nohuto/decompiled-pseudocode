/*
 * XREFs of ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ @ 0x18008DB90
 * Callers:
 *     ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@WCI@EAAJXZ @ 0x180099D70 (-NotifyInvalidDisplaySet@CDesktopRenderTarget@@WCI@EAAJXZ.c)
 * Callees:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800495FC (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::NotifyInvalidDisplaySet(CDesktopRenderTarget *this)
{
  CDisplaySet *v2; // rcx

  CDesktopRenderTarget::ReleaseRenderTargets((CDesktopRenderTarget *)((char *)this - 40));
  v2 = (CDisplaySet *)*((_QWORD *)this + 19);
  if ( v2 )
  {
    CDisplaySet::Release(v2);
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_BYTE *)this + 144) = 1;
  return 0LL;
}

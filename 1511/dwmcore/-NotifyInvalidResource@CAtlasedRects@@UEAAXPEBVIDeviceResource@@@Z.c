/*
 * XREFs of ?NotifyInvalidResource@CAtlasedRects@@UEAAXPEBVIDeviceResource@@@Z @ 0x180132BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseD2DCommandList@CAtlasedRects@@AEAAXXZ @ 0x1800F8FBC (-ReleaseD2DCommandList@CAtlasedRects@@AEAAXXZ.c)
 */

void __fastcall CAtlasedRects::NotifyInvalidResource(CAtlasedRects *this, const struct IDeviceResource *a2)
{
  char *v2; // rdi

  v2 = (char *)this - 40;
  CAtlasedRects::ReleaseD2DCommandList((CAtlasedRects *)((char *)this - 40));
  (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 56LL))(v2);
}

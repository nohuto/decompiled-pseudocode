/*
 * XREFs of ?NotifyInvalidResource@CAtlasedRects@@UEAAXPEBVIDeviceResource@@@Z @ 0x180155320
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseD2DCommandList@CAtlasedRects@@AEAAXXZ @ 0x18010DFE8 (-ReleaseD2DCommandList@CAtlasedRects@@AEAAXXZ.c)
 */

void __fastcall CAtlasedRects::NotifyInvalidResource(CAtlasedRects *this, const struct IDeviceResource *a2)
{
  char *v2; // rbx

  v2 = (char *)this - 112;
  CAtlasedRects::ReleaseD2DCommandList((CAtlasedRects *)((char *)this - 112));
  (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 56LL))(v2);
}

/*
 * XREFs of ?NotifyInvalidResource@CAtlasedRects@@UEAAXPEBVIDeviceResource@@@Z @ 0x18011C030
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseD2DCommandList@CAtlasedRects@@AEAAXXZ @ 0x1800DC6E4 (-ReleaseD2DCommandList@CAtlasedRects@@AEAAXXZ.c)
 */

void __fastcall CAtlasedRects::NotifyInvalidResource(CAtlasedRects *this, const struct IDeviceResource *a2)
{
  char *v2; // rdi

  v2 = (char *)this - 40;
  CAtlasedRects::ReleaseD2DCommandList((CAtlasedRects *)((char *)this - 40));
  (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 56LL))(v2);
}

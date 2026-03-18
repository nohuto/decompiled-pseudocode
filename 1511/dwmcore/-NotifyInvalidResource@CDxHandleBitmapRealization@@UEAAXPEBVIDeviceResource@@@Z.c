/*
 * XREFs of ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180032BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x180030800 (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180083410 (-NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CDxHandleBitmapRealization::NotifyInvalidResource(
        CDxHandleBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 54);
  if ( v2 && (const struct IDeviceResource *)(v2 + 16) == a2 )
  {
    (*(void (__fastcall **)(char *))(*((_QWORD *)this - 3) + 120LL))((char *)this - 24);
    CBitmapRealization::NotifyInvalidResource(this, a2);
  }
  else
  {
    CD2DBitmapCache::ClearCache((CDxHandleBitmapRealization *)((char *)this - 24));
  }
}

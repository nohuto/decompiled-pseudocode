/*
 * XREFs of ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x18018FE90
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x18009F84C (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180191850 (-NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CDxHandleBitmapRealization::NotifyInvalidResource(
        CDxHandleBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 49);
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

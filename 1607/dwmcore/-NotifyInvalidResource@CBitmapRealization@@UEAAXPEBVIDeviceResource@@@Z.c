/*
 * XREFs of ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180191850
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x18018FE90 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180191360 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x18010EEB8 (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 */

void __fastcall CBitmapRealization::NotifyInvalidResource(CBitmapRealization *this, const struct IDeviceResource *a2)
{
  int v2; // edi
  char *v3; // rbx
  void (__fastcall ***v6)(_QWORD, const struct IDeviceResource *); // rcx

  v2 = *((_DWORD *)this + 92);
  v3 = (char *)this - 24;
  CBitmapRealization::InvalidateDecodeBitmap((CBitmapRealization *)((char *)this - 24), 1);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))(v3);
  while ( v2 > 0 )
  {
    v6 = *(void (__fastcall ****)(_QWORD, const struct IDeviceResource *))(*((_QWORD *)this + 43)
                                                                         + 8LL * (unsigned int)(v2 - 1));
    (**v6)(v6, a2);
    --v2;
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3);
}

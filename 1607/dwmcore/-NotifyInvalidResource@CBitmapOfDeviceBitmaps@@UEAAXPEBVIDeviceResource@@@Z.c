/*
 * XREFs of ?NotifyInvalidResource@CBitmapOfDeviceBitmaps@@UEAAXPEBVIDeviceResource@@@Z @ 0x180179CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x1800940EC (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmapOfDeviceBitmaps::NotifyInvalidResource(
        CBitmapOfDeviceBitmaps *this,
        const struct IDeviceResource *a2)
{
  int v2; // edi
  CBitmapOfDeviceBitmaps *v3; // rbx
  void (__fastcall ***v6)(_QWORD, const struct IDeviceResource *); // rcx

  v2 = *((_DWORD *)this + 70);
  v3 = (CBitmapOfDeviceBitmaps *)((char *)this - 264);
  CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)((char *)this - 264));
  while ( v2 > 0 )
  {
    v6 = *(void (__fastcall ****)(_QWORD, const struct IDeviceResource *))(*((_QWORD *)this + 32)
                                                                         + 8LL * (unsigned int)(v2 - 1));
    (**v6)(v6, a2);
    --v2;
  }
  CBitmapOfDeviceBitmaps::CleanupInvalidSources(v3);
  CMILCOMBase::InternalRelease(v3);
}

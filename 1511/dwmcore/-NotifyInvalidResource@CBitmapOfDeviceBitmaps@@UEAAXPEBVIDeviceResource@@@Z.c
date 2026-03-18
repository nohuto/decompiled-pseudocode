/*
 * XREFs of ?NotifyInvalidResource@CBitmapOfDeviceBitmaps@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801494C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x18008AB4C (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 */

void __fastcall CBitmapOfDeviceBitmaps::NotifyInvalidResource(
        CBitmapOfDeviceBitmaps *this,
        const struct IDeviceResource *a2)
{
  int v2; // ebp
  CBitmapOfDeviceBitmaps *v3; // rsi

  v2 = *((_DWORD *)this + 70);
  v3 = (CBitmapOfDeviceBitmaps *)((char *)this - 264);
  CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)((char *)this - 264));
  while ( v2 > 0 )
  {
    (***(void (__fastcall ****)(_QWORD, const struct IDeviceResource *))(*((_QWORD *)this + 32)
                                                                       + 8LL * (unsigned int)(v2 - 1)))(
      *(_QWORD *)(*((_QWORD *)this + 32) + 8LL * (unsigned int)(v2 - 1)),
      a2);
    --v2;
  }
  CBitmapOfDeviceBitmaps::CleanupInvalidSources(v3);
  CMILCOMBase::InternalRelease(v3);
}

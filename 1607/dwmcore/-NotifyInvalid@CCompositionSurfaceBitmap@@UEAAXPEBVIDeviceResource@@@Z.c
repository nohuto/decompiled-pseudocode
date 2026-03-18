/*
 * XREFs of ?NotifyInvalid@CCompositionSurfaceBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180142A20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::NotifyInvalid(
        CCompositionSurfaceBitmap *this,
        const struct IDeviceResource *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 50);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, const struct IDeviceResource *))(*(_QWORD *)v3 + 16LL))(v3, a2);
    *((_QWORD *)this + 50) = 0LL;
  }
  CCommandListBitmapRepresentation::ReleaseAllCommandListRepresentations((CCompositionSurfaceBitmap *)((char *)this + 16));
}

/*
 * XREFs of ?NotifyInvalid@CCompositionSurfaceBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x18002E260
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CCompositionSurfaceBitmap::NotifyInvalid(
        CCompositionSurfaceBitmap *this,
        const struct IDeviceResource *a2)
{
  __int64 v2; // rsi

  v2 = *((_QWORD *)this + 49);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD, const struct IDeviceResource *))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 49), a2);
    *((_QWORD *)this + 49) = 0LL;
  }
  CCommandListBitmapRepresentation::ReleaseAllCommandListRepresentations((CCompositionSurfaceBitmap *)((char *)this + 16));
}

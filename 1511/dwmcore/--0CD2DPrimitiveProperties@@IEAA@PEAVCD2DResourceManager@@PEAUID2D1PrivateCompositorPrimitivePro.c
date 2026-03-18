/*
 * XREFs of ??0CD2DPrimitiveProperties@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18000FDDC
 * Callers:
 *     ?Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@PEAPEAV1@@Z @ 0x18001DD60 (-Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitive.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180027830 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 */

CD2DPrimitiveProperties *__fastcall CD2DPrimitiveProperties::CD2DPrimitiveProperties(
        CD2DPrimitiveProperties *this,
        struct CD2DResourceManager *a2,
        struct ID2D1PrivateCompositorPrimitiveProperties *a3)
{
  CD2DResource::CD2DResource(this, a2);
  *((_QWORD *)this + 13) = a3;
  *((_QWORD *)this + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)this = &CD2DEffect::`vftable'{for `CMILCOMBase'};
  if ( a3 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorPrimitiveProperties *))(*(_QWORD *)a3 + 8LL))(a3);
  return this;
}

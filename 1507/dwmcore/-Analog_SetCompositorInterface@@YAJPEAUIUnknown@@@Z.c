/*
 * XREFs of ?Analog_SetCompositorInterface@@YAJPEAUIUnknown@@@Z @ 0x180125F50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ @ 0x1801042EC (-InternalRelease@-$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Analog_SetCompositorInterface(struct IUnknown *a1)
{
  unsigned int v2; // edi

  if ( a1 )
    ((void (__fastcall *)(struct IUnknown *))a1->lpVtbl->AddRef)(a1);
  Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease(&qword_180195FD0);
  v2 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_8f3dc001_1944_4bbc_a210_86b01c74783f,
         &qword_180195FD0);
  ((void (__fastcall *)(struct IUnknown *))a1->lpVtbl->Release)(a1);
  return v2;
}

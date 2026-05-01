/*
 * XREFs of ?AddRef@CImmersiveWindowFactory@@UEAAKXZ @ 0x18002B680
 * Callers:
 *     ?AddRef@CImmersiveWindowFactory@@WDI@EAAKXZ @ 0x18002C6B0 (-AddRef@CImmersiveWindowFactory@@WDI@EAAKXZ.c)
 *     ?AddRef@CImmersiveWindowFactory@@W7EAAKXZ @ 0x18002C770 (-AddRef@CImmersiveWindowFactory@@W7EAAKXZ.c)
 *     ?AddRef@CImmersiveWindowFactory@@WCI@EAAKXZ @ 0x18002C7A0 (-AddRef@CImmersiveWindowFactory@@WCI@EAAKXZ.c)
 *     ?AddRef@CImmersiveWindowFactory@@WII@EAAKXZ @ 0x18002C800 (-AddRef@CImmersiveWindowFactory@@WII@EAAKXZ.c)
 *     ?AddRef@CImmersiveWindowFactory@@WDA@EAAKXZ @ 0x18002C880 (-AddRef@CImmersiveWindowFactory@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CImmersiveWindowFactory::AddRef(CImmersiveWindowFactory *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveWindowFactoryBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(this);
}

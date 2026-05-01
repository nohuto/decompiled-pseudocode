/*
 * XREFs of ?Release@CImmersiveWindowFactory@@UEAAKXZ @ 0x18002B670
 * Callers:
 *     ?Release@CImmersiveWindowFactory@@WDI@EAAKXZ @ 0x18002C660 (-Release@CImmersiveWindowFactory@@WDI@EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@W7EAAKXZ @ 0x18002C710 (-Release@CImmersiveWindowFactory@@W7EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WCI@EAAKXZ @ 0x18002C720 (-Release@CImmersiveWindowFactory@@WCI@EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WII@EAAKXZ @ 0x18002C730 (-Release@CImmersiveWindowFactory@@WII@EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WDA@EAAKXZ @ 0x18002C7C0 (-Release@CImmersiveWindowFactory@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CImmersiveWindowFactory::Release(CImmersiveWindowFactory *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveWindowFactoryBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}

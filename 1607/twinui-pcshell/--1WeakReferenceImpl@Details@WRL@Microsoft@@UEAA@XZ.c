/*
 * XREFs of ??1WeakReferenceImpl@Details@WRL@Microsoft@@UEAA@XZ @ 0x180018360
 * Callers:
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18002C100 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@WRL.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::WeakReferenceImpl::~WeakReferenceImpl(
        Microsoft::WRL::Details::WeakReferenceImpl *this)
{
  *(_QWORD *)this = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
  *((_DWORD *)this + 4) = -1073741823;
  *((_DWORD *)this + 3) = -1073741823;
}

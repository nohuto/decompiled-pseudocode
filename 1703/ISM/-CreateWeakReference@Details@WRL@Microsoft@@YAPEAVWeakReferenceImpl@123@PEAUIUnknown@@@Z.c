/*
 * XREFs of ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x18004F1A8
 * Callers:
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@UISpatialGraphDriverClient@Holographic@Internal@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18004FB10 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@UISpatialGraphDriverClient@Holographic@Interna.c)
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@UISpatialInteractionDevice@@U?$InterfaceList@U?$CloakedIid@UISpatialInteractionDevicePrivate@@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800638C0 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@UISpatialInteractionDevice@@U-$InterfaceList@U.c)
 * Callees:
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x18004FFFC (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA-AV.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

struct Microsoft::WRL::Details::WeakReferenceImpl *__fastcall Microsoft::WRL::Details::CreateWeakReference(
        Microsoft::WRL::Details *this,
        struct IUnknown *a2)
{
  __int64 *v2; // rax
  __int64 v3; // rbx
  volatile signed __int32 *v4; // rcx
  Microsoft::WRL::Details *v6; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = this;
  v2 = (__int64 *)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::WeakReferenceImpl,IUnknown * &>(&v7, &v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 32LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (struct Microsoft::WRL::Details::WeakReferenceImpl *)v3;
}

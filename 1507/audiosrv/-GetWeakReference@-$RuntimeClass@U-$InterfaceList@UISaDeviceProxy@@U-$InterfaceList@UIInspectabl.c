/*
 * XREFs of ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@UISaDeviceProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18002A980
 * Callers:
 *     ??$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z @ 0x18002A868 (--$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z.c)
 * Callees:
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x180028C5C (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA-AV.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A200 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18002A350 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A7970 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Micr.c)
 *     ?InternalAddRef@?$RuntimeClass@U?$InterfaceList@UIVolumeLimitTracker@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A94A0 (-InternalAddRef@-$RuntimeClass@U-$InterfaceList@UIVolumeLimitTracker@@VNil@Details@WRL@Microsoft.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISaDeviceProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetWeakReference(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  signed __int64 v5; // rdi
  __int64 v6; // r10
  Microsoft::WRL::Details::WeakReferenceImpl **v7; // rax
  volatile int *v8; // rdx
  __int64 v9; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl *v10; // rcx
  unsigned __int64 v12; // rdx
  bool i; // zf
  signed __int64 v14; // rax
  signed __int64 v15; // rdi
  Microsoft::WRL::Details::WeakReferenceImpl *v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+48h] [rbp+10h]
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  *a2 = 0LL;
  v17 = v2;
  v5 = v2;
  if ( v2 >= 0 )
  {
    v18 = a1 - 16;
    v7 = Microsoft::WRL::Details::Make<Microsoft::WRL::Details::WeakReferenceImpl,IUnknown * &>(&v16, &v18);
    v9 = (__int64)*v7;
    *v7 = 0LL;
    v10 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        v10,
        v8);
    }
    if ( !v9 )
      return 2147942414LL;
    *(_DWORD *)(v9 + 16) = v5;
    v12 = (v9 >> 1) | 0x8000000000000000uLL;
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v12, v5);
    for ( i = v5 == v14; ; i = v14 == v15 )
    {
      v15 = v14;
      if ( i )
        break;
      if ( v14 < 0 )
      {
        Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
          (Microsoft::WRL::Details::WeakReferenceImpl *)v9,
          1);
        v9 = 2 * v15;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef(2 * v15);
        break;
      }
      *(_DWORD *)(v9 + 16) = v14;
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v12, v14);
    }
    *a2 = v9;
  }
  else
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVolumeLimitTracker,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::InternalAddRef(2 * v2);
    *a2 = v6;
  }
  return 0LL;
}

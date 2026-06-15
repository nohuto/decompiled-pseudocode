/*
 * XREFs of ??$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z @ 0x18002523C
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180023AC0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024E60 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@UISaDeviceProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x180025130 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@UISaDeviceProxy@@U-$InterfaceList@UIInspectabl.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<ISaDeviceProxy>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall **v2)(_QWORD, GUID *, __int64 *); // rax
  int v4; // ebx
  __int64 (__fastcall *v5)(__int64, __int64 *); // rax
  int WeakReference; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // [rsp+40h] [rbp+20h] BYREF
  __int64 v15; // [rsp+50h] [rbp+30h] BYREF

  v2 = *a1;
  v15 = 0LL;
  v4 = (*v2)(a1, &GUID_00000038_0000_0000_c000_000000000046, &v15);
  if ( v4 >= 0 )
  {
    v14 = 0LL;
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL);
    if ( v5 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISaDeviceProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetWeakReference )
      WeakReference = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISaDeviceProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetWeakReference(
                        v15,
                        &v14);
    else
      WeakReference = v5(v15, &v14);
    v7 = v14;
    v4 = WeakReference;
    if ( WeakReference >= 0 )
    {
      v8 = v14;
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v7 = v14;
      }
      v9 = *a2;
      *a2 = v8;
      if ( v9 )
      {
        v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL);
        if ( v12 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v9);
        else
          ((void (__fastcall *)(__int64, __int64))v12)(v9, v7);
        v7 = v14;
      }
      v4 = 0;
    }
    if ( v7 )
    {
      v14 = 0LL;
      v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL);
      if ( v13 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v7);
      else
        v13(v7);
    }
  }
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v4;
}

/*
 * XREFs of ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18002A750
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800294F0 (-GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 * Callees:
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x180029F70 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIIns.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A200 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<IStreamGroupProxy>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        Microsoft::WRL::Details::WeakReferenceImpl **a2)
{
  __int64 (__fastcall **v2)(_QWORD, GUID *, __int64 *); // rax
  int v4; // edi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rdi
  int WeakReference; // eax
  volatile int *v7; // rdx
  Microsoft::WRL::Details::WeakReferenceImpl *v8; // rsi
  Microsoft::WRL::Details::WeakReferenceImpl *v9; // rdi
  Microsoft::WRL::Details::WeakReferenceImpl *v10; // rbx
  __int64 (__fastcall *v11)(Microsoft::WRL::Details::WeakReferenceImpl *, volatile int *); // rbx
  __int64 v12; // rsi
  Microsoft::WRL::Details::WeakReferenceImpl *v14; // [rsp+40h] [rbp+20h] BYREF
  __int64 v15; // [rsp+50h] [rbp+30h] BYREF

  v2 = *a1;
  v15 = 0LL;
  v4 = (*v2)(a1, &GUID_00000038_0000_0000_c000_000000000046, &v15);
  if ( v4 >= 0 )
  {
    v14 = 0LL;
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL);
    if ( v5 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetWeakReference )
      WeakReference = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetWeakReference(
                        v15,
                        (__int64 *)&v14);
    else
      WeakReference = v5(v15, (__int64 *)&v14);
    v8 = v14;
    v4 = WeakReference;
    if ( WeakReference >= 0 )
    {
      v9 = v14;
      if ( v14 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v14 + 8LL))(v14);
        v8 = v14;
      }
      v10 = *a2;
      *a2 = v9;
      if ( v10 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v10 + 16LL))(v10);
        v8 = v14;
      }
      v4 = 0;
    }
    if ( v8 )
    {
      v14 = 0LL;
      v11 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, volatile int *))(*(_QWORD *)v8 + 16LL);
      if ( v11 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
          v8,
          v7);
      else
        ((void (__fastcall *)(Microsoft::WRL::Details::WeakReferenceImpl *))v11)(v8);
    }
  }
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v4;
}

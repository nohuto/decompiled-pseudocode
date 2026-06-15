/*
 * XREFs of ??1?$ComPtr@VGraphStreamingResourceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x140026AA0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_GraphStreamingResourceManager_GraphStreamingResourceManager__::_1_::dtor$0 @ 0x14001ADB0 (_Microsoft--WRL--Details--MakeAndInitialize_GraphStreamingResourceManager_GraphStreamingResource.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400048F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@U-$InterfaceList@UIAudioStreamingResourceReg.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<GraphStreamingResourceManager>::~ComPtr<GraphStreamingResourceManager>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 (__fastcall *v2)(volatile signed __int32 *); // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    v2 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 16LL);
    if ( v2 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v1);
    else
      return v2(v1);
  }
  return result;
}

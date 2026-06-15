/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400048F0
 * Callers:
 *     ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x140004834 (--$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphS.c)
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140004D34 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x140019D90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@U-$InterfaceList@UIAudioStreami_ea_140019D90.c)
 *     ??1?$ComPtr@VGraphStreamingResourceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x140026AA0 (--1-$ComPtr@VGraphStreamingResourceManager@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ??_EGraphStreamingResourceManager@@UEAAPEAXI@Z @ 0x140009550 (--_EGraphStreamingResourceManager@@UEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v1; // edi
  void *(__fastcall *v3)(GraphStreamingResourceManager *__hidden, unsigned int); // rsi

  v1 = _InterlockedDecrement(a1 + 5);
  if ( !v1 )
  {
    if ( a1 )
    {
      v3 = *(void *(__fastcall **)(GraphStreamingResourceManager *__hidden, unsigned int))(*(_QWORD *)a1 + 24LL);
      if ( v3 == GraphStreamingResourceManager::`vector deleting destructor' )
        GraphStreamingResourceManager::`vector deleting destructor'((GraphStreamingResourceManager *)a1, 1u);
      else
        v3((GraphStreamingResourceManager *)a1, 1u);
    }
    if ( *(_QWORD *)g_hSqmSession.Data4 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)g_hSqmSession.Data4 + 16LL))(*(_QWORD *)g_hSqmSession.Data4);
  }
  return v1;
}

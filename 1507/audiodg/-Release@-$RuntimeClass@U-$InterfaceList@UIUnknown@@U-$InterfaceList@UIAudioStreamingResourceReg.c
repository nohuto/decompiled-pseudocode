/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140015260
 * Callers:
 *     ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x14001519C (--$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphS.c)
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140015388 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x140019DF0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@U-$InterfaceList@UIAudioStreami_ea_140019DF0.c)
 * Callees:
 *     ??_EGraphStreamingResourceManager@@UEAAPEAXI@Z @ 0x14000C3A0 (--_EGraphStreamingResourceManager@@UEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x140027364 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 */

unsigned int __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        GraphStreamingResourceManager *this)
{
  unsigned int result; // eax
  unsigned int v3; // edi
  GraphStreamingResourceManager *(__fastcall *v4)(GraphStreamingResourceManager *, char); // rsi

  result = ATL::SafeDecrementReferenceMultiThread((int *)this + 5);
  v3 = result;
  if ( !result )
  {
    if ( this )
    {
      v4 = *(GraphStreamingResourceManager *(__fastcall **)(GraphStreamingResourceManager *, char))(*(_QWORD *)this
                                                                                                  + 24LL);
      if ( v4 == GraphStreamingResourceManager::`vector deleting destructor' )
        GraphStreamingResourceManager::`vector deleting destructor'(this, result + 1);
      else
        v4(this, 1);
    }
    if ( *(_QWORD *)g_hSqmSession.Data4 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)g_hSqmSession.Data4 + 16LL))(*(_QWORD *)g_hSqmSession.Data4);
    return v3;
  }
  return result;
}

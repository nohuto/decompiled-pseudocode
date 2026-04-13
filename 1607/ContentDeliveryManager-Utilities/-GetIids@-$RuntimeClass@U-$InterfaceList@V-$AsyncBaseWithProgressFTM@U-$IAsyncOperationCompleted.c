/*
 * XREFs of ?GetIids@?$RuntimeClass@U?$InterfaceList@V?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@U?$InterfaceList@U?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$InterfaceList@UIAsyncOperationLocal@Internal@Windows@@U?$InterfaceList@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIAsyncFireCompletion@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800455B0
 * Callers:
 *     ?GetIids@?$RuntimeClass@U?$InterfaceList@V?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@U?$InterfaceList@U?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$InterfaceList@UIAsyncOperationLocal@Internal@Windows@@U?$InterfaceList@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIAsyncFireCompletion@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WJA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800485F0 (-GetIids@-$RuntimeClass@U-$InterfaceList@V-$AsyncBaseWithProgressFTM@U-$IAsyncOpera_ea_1800485F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentSubscription *>,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IAsyncOperation<ContentManagement::TargetedContent::TargetedContentSubscription *>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::IAsyncOperationLocal,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Internal::IAsyncDeferral>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Internal::IComPoolTask>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Internal::IAsyncFireCompletion>,Microsoft::WRL::Details::Nil>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = GUID_00000036_0000_0000_c000_000000000046;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_056677ef_7e5c_55dd_9949_94b09922f64f;
    v6[3] = GUID_7a900af8_b975_45f7_8c93_3ae17df5c5d0;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}

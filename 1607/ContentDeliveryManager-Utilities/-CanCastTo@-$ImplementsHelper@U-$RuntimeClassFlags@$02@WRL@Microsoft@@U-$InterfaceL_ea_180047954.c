/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@V?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@U?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$InterfaceList@UIAsyncOperationLocal@Internal@Windows@@U?$InterfaceList@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIAsyncFireCompletion@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$0A@$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180047954
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@V?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@U?$InterfaceList@U?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$InterfaceList@UIAsyncOperationLocal@Internal@Windows@@U?$InterfaceList@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIAsyncFireCompletion@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180045640 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@V-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCo.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIAsyncOperationLocal@Internal@Windows@@U?$InterfaceList@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIAsyncFireCompletion@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180017638 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceList@UIAsyncOp.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentSubscription *>,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IAsyncOperation<ContentManagement::TargetedContent::TargetedContentSubscription *>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::IAsyncOperationLocal,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Internal::IAsyncDeferral>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Internal::IComPoolTask>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Internal::IAsyncFireCompletion>,Microsoft::WRL::Details::Nil>>>>>>>,0,1>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = a1;
  if ( *a2 == 54
    && a2[1] == *(_DWORD *)&GUID_00000036_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000036_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000036_0000_0000_c000_000000000046.Data4[4]
    || (a1 += 64LL, *a2 == -1796592748)
    && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4]
    || *a2 == 3
    && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    result = 0LL;
  }
  else
  {
    result = 2147500034LL;
  }
  if ( (int)result < 0 )
  {
    v5 = v3 + 136;
    if ( *a2 == 56
      && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
      || (v5 = v3 + 144, *a2 == 90601455)
      && a2[1] == *(_DWORD *)&GUID_056677ef_7e5c_55dd_9949_94b09922f64f.Data2
      && a2[2] == *(_DWORD *)GUID_056677ef_7e5c_55dd_9949_94b09922f64f.Data4
      && a2[3] == *(_DWORD *)&GUID_056677ef_7e5c_55dd_9949_94b09922f64f.Data4[4] )
    {
      *a3 = v5;
      return 0LL;
    }
    else
    {
      return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::IAsyncOperationLocal,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Internal::IAsyncDeferral>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Internal::IComPoolTask>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Internal::IAsyncFireCompletion>,Microsoft::WRL::Details::Nil>>>>,1,0>::CanCastTo(
               v3 + 152,
               a2,
               a3);
    }
  }
  return result;
}

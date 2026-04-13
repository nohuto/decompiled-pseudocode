/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@UIAsyncAction@Foundation@Windows@@U?$InterfaceList@UIAsyncOperationLocal@Internal@Windows@@U?$InterfaceList@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180020C58
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@V?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@U?$InterfaceList@UIAsyncAction@Foundation@Windows@@U?$InterfaceList@UIAsyncOperationLocal@Internal@Windows@@U?$InterfaceList@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001BC90 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@V-$AsyncBaseWithProgressFTM@UIAsyncActionComplet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IAsyncAction,Microsoft::WRL::Details::InterfaceList<Windows::Internal::IAsyncOperationLocal,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Internal::IAsyncDeferral>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Internal::IComPoolTask>,Microsoft::WRL::Details::Nil>>>>>,1,0>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == 56
    && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
    || (a1 += 8LL, *a2 == 1516535814)
    && a2[1] == *(_DWORD *)&GUID_5a648006_843a_4da9_865b_9d26e5dfad7b.Data2
    && a2[2] == *(_DWORD *)GUID_5a648006_843a_4da9_865b_9d26e5dfad7b.Data4
    && a2[3] == *(_DWORD *)&GUID_5a648006_843a_4da9_865b_9d26e5dfad7b.Data4[4]
    || (a1 += 8LL, *a2 == 2056260344)
    && a2[1] == *(_DWORD *)&GUID_7a900af8_b975_45f7_8c93_3ae17df5c5d0.Data2
    && a2[2] == *(_DWORD *)GUID_7a900af8_b975_45f7_8c93_3ae17df5c5d0.Data4
    && a2[3] == *(_DWORD *)&GUID_7a900af8_b975_45f7_8c93_3ae17df5c5d0.Data4[4]
    || (a1 += 8LL, *a2 == 1605706821)
    && a2[1] == *(_DWORD *)&GUID_5fb52445_1407_4f25_9aa4_ac25bb3a9606.Data2
    && a2[2] == *(_DWORD *)GUID_5fb52445_1407_4f25_9aa4_ac25bb3a9606.Data4
    && a2[3] == *(_DWORD *)&GUID_5fb52445_1407_4f25_9aa4_ac25bb3a9606.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == 1204800526
    && a2[1] == *(_DWORD *)&GUID_47cfcc0e_6012_43ca_81a9_ab7bc86ad5d4.Data2
    && a2[2] == *(_DWORD *)GUID_47cfcc0e_6012_43ca_81a9_ab7bc86ad5d4.Data4
    && a2[3] == *(_DWORD *)&GUID_47cfcc0e_6012_43ca_81a9_ab7bc86ad5d4.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}

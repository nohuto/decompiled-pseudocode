/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIHapticsTimerProvider@SpatialInteractionDevices@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@UITimerElapsedHandler@Threading@System@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$0A@$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18009B95C
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIHapticsTimerProvider@SpatialInteractionDevices@@U?$InterfaceList@UITimerElapsedHandler@Threading@System@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009B3A0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIHapticsTimerProvider@SpatialInteractionDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<SpatialInteractionDevices::IHapticsTimerProvider,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,0,0>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // eax

  if ( *a2 == 694223755
    && a2[1] == *(_DWORD *)&GUID_2961038b_b15c_4430_90c9_29048094d5ef.Data2
    && a2[2] == *(_DWORD *)GUID_2961038b_b15c_4430_90c9_29048094d5ef.Data4
    && a2[3] == *(_DWORD *)&GUID_2961038b_b15c_4430_90c9_29048094d5ef.Data4[4]
    || (a1 += 8LL, *a2 == 56)
    && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
    || (a1 += 8LL, *a2 == -89217433)
    && a2[1] == *(_DWORD *)&GUID_faaea667_fbeb_49cb_adb2_71184c556e43.Data2
    && a2[2] == *(_DWORD *)GUID_faaea667_fbeb_49cb_adb2_71184c556e43.Data4
    && a2[3] == *(_DWORD *)&GUID_faaea667_fbeb_49cb_adb2_71184c556e43.Data4[4]
    || (a1 += 8LL, *a2 == -1796592748)
    && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    if ( *a2 == 3
      && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
    {
      v4 = 1;
      *a3 = a1;
    }
    else
    {
      v4 = 0;
    }
    return v4 == 0 ? 0x80004002 : 0;
  }
}

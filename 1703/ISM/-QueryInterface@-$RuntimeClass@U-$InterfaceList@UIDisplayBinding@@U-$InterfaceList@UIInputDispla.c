/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIDisplayBinding@@U?$InterfaceList@UIInputDisplay@@U?$InterfaceList@UIPropertyChangedListener@Input@@U?$InterfaceList@UIInputDisplayOrientationListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018070
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIDisplayBinding@@U?$InterfaceList@UIInputDisplay@@U?$InterfaceList@UIPropertyChangedListener@Input@@U?$InterfaceList@UIInputDisplayOrientationListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800199F0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIDisplayBinding@@U-$InterfaceList@_ea_1800199F0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIDisplayBinding@@U?$InterfaceList@UIInputDisplay@@U?$InterfaceList@UIPropertyChangedListener@Input@@U?$InterfaceList@UIInputDisplayOrientationListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019A80 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIDisplayBinding@@U-$InterfaceList@_ea_180019A80.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIDisplayBinding@@U?$InterfaceList@UIInputDisplay@@U?$InterfaceList@UIPropertyChangedListener@Input@@U?$InterfaceList@UIInputDisplayOrientationListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019B70 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIDisplayBinding@@U-$InterfaceList@_ea_180019B70.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDisplayBinding,Microsoft::WRL::Details::InterfaceList<IInputDisplay,Microsoft::WRL::Details::InterfaceList<Input::IPropertyChangedListener,Microsoft::WRL::Details::InterfaceList<IInputDisplayOrientationListener,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == -243691530
      && a2[1] == *(_DWORD *)&GUID_f1798ff6_a596_4193_b735_afad9d3d8348.Data2
      && a2[2] == *(_DWORD *)GUID_f1798ff6_a596_4193_b735_afad9d3d8348.Data4
      && a2[3] == *(_DWORD *)&GUID_f1798ff6_a596_4193_b735_afad9d3d8348.Data4[4]
      || (a1 += 8LL, *a2 == 982681041)
      && a2[1] == *(_DWORD *)&GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754.Data2
      && a2[2] == *(_DWORD *)GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754.Data4
      && a2[3] == *(_DWORD *)&GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
      goto LABEL_28;
    }
    v5 = a1 + 8;
    if ( *a2 == -111829527
      && a2[1] == *(_DWORD *)&GUID_f9559de9_2964_497f_a4b8_c6a332fb4356.Data2
      && a2[2] == *(_DWORD *)GUID_f9559de9_2964_497f_a4b8_c6a332fb4356.Data4
      && a2[3] == *(_DWORD *)&GUID_f9559de9_2964_497f_a4b8_c6a332fb4356.Data4[4] )
    {
      *a3 = v5;
    }
    else
    {
      if ( *a2 != -585894354
        || a2[1] != *(_DWORD *)&GUID_dd13f62e_ce97_4472_8332_b9b519f13e07.Data2
        || a2[2] != *(_DWORD *)GUID_dd13f62e_ce97_4472_8332_b9b519f13e07.Data4
        || a2[3] != *(_DWORD *)&GUID_dd13f62e_ce97_4472_8332_b9b519f13e07.Data4[4] )
      {
        v4 = -2147467262;
LABEL_27:
        if ( v4 < 0 )
          return (unsigned int)v4;
LABEL_28:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)v4;
      }
      *a3 = v5 + 8;
    }
    v4 = 0;
    goto LABEL_27;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}

/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIAppManager@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800041B0
 * Callers:
 *     ?QueryInterface@AppManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003470 (-QueryInterface@AppManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIAppManager@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180006070 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_180006070.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIAppManager@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800060D0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_1800060D0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIAppManager@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800060E0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_1800060E0.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IAppManager,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  int v5; // esi
  __int64 v6; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_9;
  }
  if ( *a2 != -1350114592 || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
    goto LABEL_15;
  if ( a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      *a3 = a1;
LABEL_14:
      v5 = 0;
      goto LABEL_37;
    }
LABEL_15:
    v6 = a1 + 8;
    if ( *a2 == -1796592748
      && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
    {
      goto LABEL_19;
    }
    if ( *a2 == 3
      && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = v6;
    }
    else
    {
      v6 = a1 + 32;
      if ( *a2 == 56
        && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
LABEL_19:
        *a3 = v6;
        goto LABEL_14;
      }
      if ( *a2 != 98579433
        || a2[1] != *(_DWORD *)&GUID_05e033e9_71df_4144_a1c6_a80806e71984.Data2
        || a2[2] != *(_DWORD *)GUID_05e033e9_71df_4144_a1c6_a80806e71984.Data4
        || a2[3] != *(_DWORD *)&GUID_05e033e9_71df_4144_a1c6_a80806e71984.Data4[4] )
      {
        v5 = -2147467262;
LABEL_36:
        if ( v5 < 0 )
          return (unsigned int)v5;
LABEL_37:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)v5;
      }
      *a3 = a1 + 40;
    }
    v5 = 0;
    goto LABEL_36;
  }
LABEL_9:
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}

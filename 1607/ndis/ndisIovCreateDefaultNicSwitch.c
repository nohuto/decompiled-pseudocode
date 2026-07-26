/*
 * XREFs of ndisIovCreateDefaultNicSwitch @ 0x1C00AC004
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000A5A0 (ndisQuerySetMiniport.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C001B5AC (ndisIovNicSwitchWithoutIovSupported.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisIovFinalizeNicSwitch @ 0x1C00685E8 (ndisIovFinalizeNicSwitch.c)
 *     ndisIovInitializeNicSwitch @ 0x1C0068A68 (ndisIovInitializeNicSwitch.c)
 *     NdisCloseConfiguration @ 0x1C009F840 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00A0980 (NdisOpenConfigurationEx.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C00A93E0 (NdisOpenConfigurationKeyByName.c)
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D876C (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIovReadSwitchConfiguration @ 0x1C00D9420 (ndisIovReadSwitchConfiguration.c)
 */

__int64 __fastcall ndisIovCreateDefaultNicSwitch(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int SwitchConfiguration; // ebx
  PVOID v3; // rsi
  PVOID v4; // r14
  char v5; // r15
  __int64 v6; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax
  NDIS_STATUS v10; // eax
  _NDIS_NIC_SWITCH_CAPABILITIES *v11; // r8
  unsigned int MaxNumVFs; // eax
  bool v13; // zf
  __int64 v14; // r8
  int v15; // r9d
  int v16; // eax
  int Status; // [rsp+30h] [rbp-D0h] BYREF
  PVOID SubKeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  PVOID ConfigurationHandle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v21; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v22; // [rsp+58h] [rbp-A8h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[248]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v25[4]; // [rsp+180h] [rbp+80h] BYREF
  _OWORD v26[35]; // [rsp+190h] [rbp+90h] BYREF

  memset(&ConfigObject, 0, sizeof(ConfigObject));
  SwitchConfiguration = 0;
  v3 = 0LL;
  ConfigurationHandle = 0LL;
  v4 = 0LL;
  SubKeyHandle = 0LL;
  memset(v26, 0, 0x228uLL);
  memset(v24, 0, sizeof(v24));
  v22 = 0LL;
  v5 = 0;
  memset(v25, 0, 12);
  v21 = 0LL;
  P = 0LL;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_q(0xAu, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, (__int64)a1);
  if ( !ndisIovNicSwitchWithoutIovSupported((__int64)a1) )
  {
    SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
    if ( SriovCurrentCapabilities )
    {
      if ( (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
      {
        NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities;
        if ( NicSwitchCurrentCapabilities
          && NicSwitchCurrentCapabilities->Header.Revision >= 2u
          && NicSwitchCurrentCapabilities->Header.Size >= 0x74u )
        {
          if ( !NicSwitchCurrentCapabilities->MaxNumSwitches )
          {
            SwitchConfiguration = -1073741637;
            goto LABEL_5;
          }
          SwitchConfiguration = ndisIovInitializeNicSwitch(v6, (__int64)v26, &v22, &v21, &P);
          if ( SwitchConfiguration )
            goto LABEL_30;
          ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
          ConfigObject.NdisHandle = a1;
          ConfigObject.Flags = 0;
          v10 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
          v3 = ConfigurationHandle;
          SwitchConfiguration = v10;
          Status = v10;
          if ( v10 )
            goto LABEL_30;
          NdisOpenConfigurationKeyByName(&Status, ConfigurationHandle, &NicSwitchDefaultSwitchStr, &SubKeyHandle);
          SwitchConfiguration = Status;
          v4 = SubKeyHandle;
          if ( Status )
            goto LABEL_30;
          LODWORD(v26[0]) = 36176512;
          SwitchConfiguration = ndisIovReadSwitchConfiguration(SubKeyHandle);
          if ( SwitchConfiguration )
            goto LABEL_30;
          if ( *((_QWORD *)&v26[0] + 1) != 1LL )
          {
            SwitchConfiguration = -1073676267;
            goto LABEL_30;
          }
          v11 = a1->NicSwitchCurrentCapabilities;
          MaxNumVFs = DWORD1(v26[33]);
          if ( DWORD1(v26[33]) > v11->MaxNumVFs )
            MaxNumVFs = v11->MaxNumVFs;
          DWORD1(v26[33]) = MaxNumVFs;
          DWORD2(v26[33]) = v11->MaxNumVPorts;
          HIDWORD(v26[33]) = v11->NdisReserved7;
          v13 = ndisIovHWvRSSSupported(a1) == 0;
          v16 = 1;
          if ( !v13 )
            v16 = *(_DWORD *)(v14 + 128);
          DWORD1(v26[34]) = v16;
          LODWORD(v26[34]) = *(_DWORD *)(v14 + 52) - v15;
          memset(v24, 0, sizeof(v24));
          *(_DWORD *)&v24[88] |= 8u;
          *(_QWORD *)&v24[104] = &ndisIntReqGeneric;
          *(_DWORD *)v24 = 15466902;
          *(_QWORD *)&v24[40] = v26;
          *(_QWORD *)&v24[4] = 12LL;
          *(_DWORD *)&v24[32] = 66103;
          *(_QWORD *)&v24[52] = 552LL;
          *(_DWORD *)&v24[48] = 552;
          SwitchConfiguration = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v24, 0LL, 0LL);
          if ( SwitchConfiguration )
            goto LABEL_30;
          v5 = 1;
          SwitchConfiguration = ndisIovFinalizeNicSwitch((__int64)a1, v26, (__int64)v22, (__int64)v21, P);
        }
        else
        {
          SwitchConfiguration = -1073741637;
        }
        if ( !SwitchConfiguration )
        {
LABEL_36:
          if ( v4 )
            NdisCloseConfiguration(v4);
          if ( v3 )
            NdisCloseConfiguration(v3);
          goto LABEL_5;
        }
        if ( v5 )
        {
          v25[0] = 786816;
          v25[2] = 0;
          memset(v24, 0, sizeof(v24));
          *(_DWORD *)&v24[88] |= 8u;
          *(_QWORD *)&v24[104] = &ndisIntReqGeneric;
          *(_DWORD *)v24 = 15466902;
          *(_QWORD *)&v24[40] = v25;
          *(_DWORD *)&v24[32] = 66105;
          *(_DWORD *)&v24[48] = 12;
          *(_QWORD *)&v24[4] = 1LL;
          ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v24, 0LL, 0LL);
        }
LABEL_30:
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v21 )
          ExFreePoolWithTag(v21, 0);
        if ( v22 )
          ExFreePoolWithTag(v22, 0);
        goto LABEL_36;
      }
    }
  }
LABEL_5:
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qD(0xBu, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, (__int64)a1, SwitchConfiguration);
  return SwitchConfiguration;
}

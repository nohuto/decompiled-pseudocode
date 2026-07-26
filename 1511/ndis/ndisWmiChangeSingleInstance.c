/*
 * XREFs of ndisWmiChangeSingleInstance @ 0x1C00CEB60
 * Callers:
 *     ndisWMIDispatch @ 0x1C009EDDC (ndisWMIDispatch.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00059C8 (ndisQuerySetMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisWmiGetGuid @ 0x1C001A910 (ndisWmiGetGuid.c)
 *     ndisMDereferenceIfBlock @ 0x1C001DC98 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C001DD3C (ndisMReferenceIfBlock.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001EBA8 (ndisCancelMediaDisconnectTimer.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001FF1C (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0024B88 (ndisSetMediaDisconnectTimer.c)
 *     ndisCancelWaitWake @ 0x1C0024E7C (ndisCancelWaitWake.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_jqxqqq @ 0x1C004084C (Template_jqxqqq.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C0046DDC (ndisUpdateAndIndicatePMCapabilities.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     NdisCloseConfiguration @ 0x1C009D130 (NdisCloseConfiguration.c)
 *     NdisOpenConfiguration @ 0x1C009E460 (NdisOpenConfiguration.c)
 *     ndisWmiFindInstanceName @ 0x1C009F330 (ndisWmiFindInstanceName.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A581C (ndisInitializeNetPnPEvent.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00AA4DC (ndisMiniportPMParametersUpdated.c)
 *     ndisWakeUpDevice @ 0x1C00C546C (ndisWakeUpDevice.c)
 *     ndisWmiSetPMAdminConfig @ 0x1C00C55D4 (ndisWmiSetPMAdminConfig.c)
 *     NdisWriteConfiguration @ 0x1C00C6E70 (NdisWriteConfiguration.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00D1140 (ndisNDKHandleWmiChangeRequest.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E0B98 (ndisPnPNotifyAllTransports.c)
 *     ndisReferenceMiniportByName @ 0x1C00E30F8 (ndisReferenceMiniportByName.c)
 *     ndisDereferenceVcPtr @ 0x1C00F3C4C (ndisDereferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiChangeSingleInstance(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  PVOID v4; // r13
  int InstanceName; // edi
  _NDIS_BIND_PATHS *BindPaths; // rcx
  __int64 v7; // rdx
  __int16 v8; // r9
  _DWORD *v9; // r14
  unsigned __int16 v10; // cx
  int v11; // ecx
  unsigned int v12; // r12d
  __int64 v13; // rsi
  unsigned int v14; // edi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int PnPFlags; // ecx
  unsigned int PnPCapabilities; // eax
  unsigned int WSyncFlags; // edx
  __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // eax
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int8 ifDeviceWakeUpEnable; // r9
  _NDIS_IF_BLOCK *v31; // rcx
  void *v32; // rcx
  unsigned int v33; // r12d
  __int64 v34; // rcx
  int SetMiniport; // esi
  int v36; // eax
  int Status; // [rsp+58h] [rbp-A8h] BYREF
  PVOID ConfigurationHandle; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+68h] [rbp-98h]
  unsigned int v40; // [rsp+6Ch] [rbp-94h]
  __int64 v41; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING Keyword; // [rsp+80h] [rbp-80h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v45[248]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v46; // [rsp+1B0h] [rbp+B0h] BYREF
  int v47; // [rsp+1B8h] [rbp+B8h]
  _NDIS_PNP_CAPABILITIES *p_PMCapabilities61; // [rsp+1C0h] [rbp+C0h]
  int v49; // [rsp+1C8h] [rbp+C8h]

  ConfigurationHandle = 0LL;
  v39 = 0;
  P = 0LL;
  Status = 0;
  v40 = 0;
  v41 = 0LL;
  Keyword.Buffer = L"PnPCapabilities";
  *(_DWORD *)&Keyword.Length = 2097182;
  if ( (unsigned __int8)byte_1C0083719 >= 4u )
    WPP_SF_q(0x31u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(a2 + 44) & 0x80u) != 0 )
  {
    v4 = 0LL;
LABEL_9:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
      ndisReferenceMiniportByName(BindPaths->Paths);
LABEL_11:
    ndisWmiGetGuid(&ConfigurationHandle, (__int64)a1, (_QWORD *)(a2 + 24), 0);
    v9 = ConfigurationHandle;
    if ( !ConfigurationHandle )
    {
      if ( (unsigned __int8)byte_1C0083719 < 2u )
      {
LABEL_15:
        InstanceName = -1073741811;
        goto LABEL_123;
      }
      v10 = v8 + 51;
LABEL_14:
      WPP_SF_q(v10, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
      goto LABEL_15;
    }
    v11 = *((_DWORD *)ConfigurationHandle + 6);
    if ( (v11 & 0x40000000) != 0 )
    {
      if ( (unsigned __int8)byte_1C0083719 >= 2u )
        WPP_SF_q(0x34u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
      InstanceName = -1073741637;
      goto LABEL_123;
    }
    v12 = *(_DWORD *)(a2 + 60);
    v13 = a2 + *(unsigned int *)(a2 + 56);
    if ( !v12 )
    {
      if ( (unsigned __int8)byte_1C0083719 < 2u )
        goto LABEL_15;
      v10 = 53;
      goto LABEL_14;
    }
    if ( (v11 & 0x200) != 0 )
    {
      if ( v12 < 0x20 || *(_QWORD *)(v13 + 8) != a1->NetLuid.Value )
        goto LABEL_15;
      v14 = 32;
      Status = *(_DWORD *)(v13 + 4);
      v41 = *(_QWORD *)(v13 + 16);
      v39 = *(_DWORD *)(v13 + 24);
    }
    else
    {
      v14 = v40;
    }
    if ( !v4 && (v11 & 0x20000000) != 0 )
    {
      InstanceName = 0;
      if ( v12 == 4 && *(_DWORD *)v13 > 1u )
        goto LABEL_32;
      v16 = *(_QWORD *)ConfigurationHandle - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
      if ( *(_QWORD *)ConfigurationHandle == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
        v16 = *((_QWORD *)ConfigurationHandle + 1) - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
      if ( !v16 )
      {
        LOBYTE(v7) = *(_BYTE *)v13;
        InstanceName = ndisNDKHandleWmiChangeRequest(a1, v7);
        goto LABEL_33;
      }
      v17 = *(_QWORD *)ConfigurationHandle - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
      if ( *(_QWORD *)ConfigurationHandle == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
        v17 = *((_QWORD *)ConfigurationHandle + 1) - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
      if ( !v17 )
      {
        PnPFlags = a1->PnPFlags;
        if ( (PnPFlags & 0x8001) == 1 && !a1->AoAc )
        {
          a1->PnPCapabilities &= ~0x10000000u;
          PnPCapabilities = a1->PnPCapabilities;
          if ( !*(_BYTE *)v13 )
          {
            a1->PMCurrentParameters.WakeUpFlags &= ~1u;
            a1->PnPFlags = PnPFlags & 0xFFFFFFDF;
            a1->PnPCapabilities = PnPCapabilities | 0x18;
            ndisCancelMediaDisconnectTimer((__int64)a1);
            if ( a1->CurrentDevicePowerState != PowerDeviceD0
              && (a1->Flags & 0x20000000) == 0
              && (a1->WSyncFlags & 8) != 0 )
            {
              if ( (unsigned __int8)byte_1C0083715 >= 4u )
                WPP_SF_q(0x36u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
              InstanceName = ndisWakeUpDevice((__int64)a1);
            }
            goto LABEL_57;
          }
          WSyncFlags = a1->WSyncFlags;
          if ( (WSyncFlags & 0x10) == 0 )
            a1->PnPFlags = PnPFlags | 0x20;
          a1->PnPCapabilities = PnPCapabilities & 0xFFFFFFF7;
          if ( (WSyncFlags & 8) != 0 )
          {
            a1->PMCurrentParameters.WakeUpFlags |= 1u;
            if ( a1->MediaConnectState == MediaConnectStateDisconnected )
              ndisSetMediaDisconnectTimer((__int64)a1);
LABEL_57:
            ndisMiniportPMParametersUpdated((__int64)a1);
            goto LABEL_82;
          }
LABEL_83:
          ndisUpdateAndIndicatePMCapabilities((__int64)a1);
          NdisOpenConfiguration(&Status, &ConfigurationHandle, a1->ConfigurationHandle);
          if ( Status >= 0 )
          {
            v28 = a1->PnPCapabilities;
            ParameterValue.ParameterType = NdisParameterInteger;
            ParameterValue.ParameterData.IntegerData = v28;
            NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
            NdisCloseConfiguration(ConfigurationHandle);
          }
          ndisInitializeNetPnPEvent(&v46, 0LL);
          v47 = 7;
          p_PMCapabilities61 = &a1->PMCapabilities61;
          v49 = 4;
          ndisPnPNotifyAllTransports(a1);
          if ( ndisMReferenceIfBlock((__int64)a1, 0x10u) )
          {
            IfBlock = a1->IfBlock;
            ifDeviceWakeUpEnable = IfBlock->ifDeviceWakeUpEnable;
            IfBlock->ifDeviceWakeUpEnable = a1->PMCapabilities61.Flags & 1;
            v31 = a1->IfBlock;
            if ( ifDeviceWakeUpEnable != v31->ifDeviceWakeUpEnable )
              ndisNsiScheduleIfBlockRodChangeNotification((__int64)v31, (__int64)&v31->ifDeviceWakeUpEnable, 1, 641);
            ndisMDereferenceIfBlock((__int64)a1, MPIFREF_WMI);
          }
          goto LABEL_33;
        }
        goto LABEL_81;
      }
      v21 = *(_QWORD *)ConfigurationHandle - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
      if ( *(_QWORD *)ConfigurationHandle == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
        v21 = *((_QWORD *)ConfigurationHandle + 1) - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
      if ( v21 )
      {
        v25 = *(_QWORD *)ConfigurationHandle - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
        if ( *(_QWORD *)ConfigurationHandle == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
          v25 = *((_QWORD *)ConfigurationHandle + 1) - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
        if ( v25 )
        {
          v27 = *(_QWORD *)ConfigurationHandle - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
          if ( *(_QWORD *)ConfigurationHandle == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
            v27 = *((_QWORD *)ConfigurationHandle + 1) - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
          if ( !v27 )
          {
            InstanceName = ndisWmiSetPMAdminConfig(a1, v13);
            goto LABEL_82;
          }
          if ( (unsigned __int8)byte_1C0083719 >= 2u )
            WPP_SF_q(0x37u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
LABEL_81:
          InstanceName = -1073741808;
LABEL_82:
          if ( InstanceName < 0 )
            goto LABEL_33;
          goto LABEL_83;
        }
        if ( (a1->PnPFlags & 0x4000001) == 0x4000001
          && (unsigned int)(a1->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
        {
          a1->PnPCapabilities &= ~0x10000000u;
          v26 = a1->PnPCapabilities;
          if ( *(_BYTE *)v13 )
            v24 = v26 | 0x100;
          else
            v24 = v26 & 0xFFFFFEFF;
LABEL_65:
          a1->PnPCapabilities = v24;
          goto LABEL_83;
        }
      }
      else
      {
        v22 = a1->PnPFlags;
        if ( (v22 & 0x4000001) == 0x4000001 && !a1->AoAc )
        {
          a1->PnPCapabilities &= ~0x10000000u;
          v23 = a1->PnPCapabilities;
          if ( !*(_BYTE *)v13 )
          {
            a1->PnPFlags = v22 & 0xFFFFFFBF;
            a1->PnPCapabilities = v23 | 0x10;
            ndisCancelWaitWake((__int64)a1);
            goto LABEL_83;
          }
          a1->PnPFlags = v22 | 0x40;
          v24 = v23 & 0xFFFFFFEF;
          goto LABEL_65;
        }
      }
LABEL_32:
      InstanceName = -1073741808;
      goto LABEL_33;
    }
    if ( (v11 & 1) == 0 )
    {
      if ( (unsigned __int8)byte_1C0083719 >= 2u )
        WPP_SF_q(0x38u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
      goto LABEL_92;
    }
    if ( *((_DWORD *)ConfigurationHandle + 4) == 66076 && (v12 != 4 || (*(_DWORD *)v13 & 0xFFFFF000) != 0) )
    {
LABEL_92:
      InstanceName = -1073741808;
      goto LABEL_123;
    }
    memset(v45, 0, sizeof(v45));
    *(_DWORD *)&v45[88] |= 8u;
    v32 = &ndisIntReqWmi;
    v33 = v12 - v14;
    *(_QWORD *)&v45[104] = &ndisIntReqWmi;
    *(_DWORD *)v45 = 15466902;
    *(_DWORD *)&v45[32] = *((_DWORD *)ConfigurationHandle + 4);
    *(_DWORD *)&v45[8] = Status;
    *(_DWORD *)&v45[4] = 1;
    *(_QWORD *)&v45[40] = v13 + v14;
    *(_QWORD *)&v45[16] = v41;
    if ( !v41 )
      v32 = *(void **)&v45[24];
    *(_QWORD *)&v45[24] = v32;
    *(_DWORD *)&v45[48] = v33;
    *(_DWORD *)&v45[12] = v39;
    SetMiniport = ndisQuerySetMiniport(a1, v4, (struct _NDIS_OID_REQUEST *)v45, 0LL, 0LL);
    if ( SetMiniport == -1071448017 )
    {
      if ( (v9[6] & 0x200) != 0 )
        goto LABEL_102;
      SetMiniport = 0;
    }
    if ( !SetMiniport )
    {
      InstanceName = 0;
      goto LABEL_123;
    }
LABEL_102:
    if ( (unsigned __int8)byte_1C0083719 >= 2u )
      WPP_SF_q(0x39u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
      Template_jqxqqq(
        v34,
        &ChangeInformationFailed,
        &a1->InterfaceGuid,
        (unsigned __int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        SetMiniport,
        145,
        0);
    if ( (v9[6] & 0x200) != 0 )
    {
      if ( (SetMiniport & 0xC0010000) == 0xC0010000 )
        SetMiniport = (unsigned __int16)SetMiniport | 0xC0230000;
    }
    else if ( SetMiniport != 259 && SetMiniport != -2147483643 )
    {
      v36 = -1073741823;
      if ( SetMiniport != -1073741823 && SetMiniport != -1073741670 && SetMiniport != -1073741637 )
      {
        if ( SetMiniport == -1073676266 )
        {
          InstanceName = -1073741789;
        }
        else if ( SetMiniport == -1073676268 )
        {
          InstanceName = -1073741306;
        }
        else
        {
          if ( SetMiniport == -1073676267 )
            v36 = -1073741811;
          InstanceName = v36;
        }
        goto LABEL_123;
      }
    }
    InstanceName = SetMiniport;
LABEL_123:
    if ( v4 )
      ndisDereferenceVcPtr(v4);
    goto LABEL_33;
  }
  InstanceName = ndisWmiFindInstanceName(
                   &P,
                   (__int64)a1,
                   (wchar_t *)(*(unsigned int *)(a2 + 48) + a2 + 2),
                   *(_WORD *)(*(unsigned int *)(a2 + 48) + a2));
  if ( InstanceName >= 0 )
  {
    v4 = P;
    if ( P )
      goto LABEL_11;
    goto LABEL_9;
  }
  if ( (unsigned __int8)byte_1C0083719 >= 2u )
    WPP_SF_q(0x32u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
LABEL_33:
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0083719 >= 4u )
    WPP_SF_qD(0x3Au, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1, InstanceName);
  return (unsigned int)InstanceName;
}

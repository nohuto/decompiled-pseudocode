/*
 * XREFs of ndisWmiChangeSingleInstance @ 0x1C00D4BB0
 * Callers:
 *     ndisWMIDispatch @ 0x1C00A883C (ndisWMIDispatch.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000A5A0 (ndisQuerySetMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisCancelWaitWake @ 0x1C0012DFC (ndisCancelWaitWake.c)
 *     ndisWmiGetGuid @ 0x1C00178A4 (ndisWmiGetGuid.c)
 *     ndisMDereferenceIfBlock @ 0x1C0017D0C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0017DB0 (ndisMReferenceIfBlock.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C00183D8 (ndisCancelMediaDisconnectTimer.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C0019F2C (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0020040 (ndisSetMediaDisconnectTimer.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxqqq @ 0x1C004439C (Template_jqxqqq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004AE24 (ndisUpdateAndIndicatePMCapabilities.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     NdisWriteConfiguration @ 0x1C009D980 (NdisWriteConfiguration.c)
 *     NdisCloseConfiguration @ 0x1C009F840 (NdisCloseConfiguration.c)
 *     NdisOpenConfiguration @ 0x1C00A0B20 (NdisOpenConfiguration.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A866C (ndisInitializeNetPnPEvent.c)
 *     ndisWmiFindInstanceName @ 0x1C00A9DA0 (ndisWmiFindInstanceName.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00B12E8 (ndisMiniportPMParametersUpdated.c)
 *     ndisWakeUpDevice @ 0x1C00CAF20 (ndisWakeUpDevice.c)
 *     ndisWmiSetPMAdminConfig @ 0x1C00CB074 (ndisWmiSetPMAdminConfig.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00D7164 (ndisNDKHandleWmiChangeRequest.c)
 *     ndisReferenceMiniportByName @ 0x1C00E81F0 (ndisReferenceMiniportByName.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E90B8 (ndisPnPNotifyAllTransports.c)
 *     ndisDereferenceVcPtr @ 0x1C00F9C38 (ndisDereferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiChangeSingleInstance(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  PVOID v4; // r13
  int InstanceName; // edi
  _NDIS_BIND_PATHS *BindPaths; // rcx
  __int64 v7; // rdx
  __int16 v8; // r9
  __int64 v9; // r14
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
  int Status[4]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v38; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h]
  UNICODE_STRING Keyword; // [rsp+80h] [rbp-80h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v43[248]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v44; // [rsp+1B0h] [rbp+B0h] BYREF
  int v45; // [rsp+1B8h] [rbp+B8h]
  _NDIS_PNP_CAPABILITIES *p_PMCapabilities61; // [rsp+1C0h] [rbp+C0h]
  int v47; // [rsp+1C8h] [rbp+C8h]

  P = 0LL;
  memset(Status, 0, sizeof(Status));
  v38 = 0;
  v40 = 0LL;
  Keyword.Buffer = L"PnPCapabilities";
  *(_DWORD *)&Keyword.Length = 2097182;
  if ( (unsigned __int8)byte_1C00895D9 >= 4u )
    WPP_SF_q(0x31u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(a2 + 44) & 0x80u) != 0 )
  {
    v4 = 0LL;
LABEL_9:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
      ndisReferenceMiniportByName(BindPaths->Paths);
LABEL_11:
    ndisWmiGetGuid(&Status[2], (__int64)a1, (_QWORD *)(a2 + 24), 0);
    v9 = *(_QWORD *)&Status[2];
    if ( !*(_QWORD *)&Status[2] )
    {
      if ( (unsigned __int8)byte_1C00895D9 < 2u )
      {
LABEL_15:
        InstanceName = -1073741811;
        goto LABEL_123;
      }
      v10 = v8 + 51;
LABEL_14:
      WPP_SF_q(v10, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
      goto LABEL_15;
    }
    v11 = *(_DWORD *)(*(_QWORD *)&Status[2] + 24LL);
    if ( (v11 & 0x40000000) != 0 )
    {
      if ( (unsigned __int8)byte_1C00895D9 >= 2u )
        WPP_SF_q(0x34u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
      InstanceName = -1073741637;
      goto LABEL_123;
    }
    v12 = *(_DWORD *)(a2 + 60);
    v13 = a2 + *(unsigned int *)(a2 + 56);
    if ( !v12 )
    {
      if ( (unsigned __int8)byte_1C00895D9 < 2u )
        goto LABEL_15;
      v10 = 53;
      goto LABEL_14;
    }
    if ( (v11 & 0x200) != 0 )
    {
      if ( v12 < 0x20 || *(_QWORD *)(v13 + 8) != a1->NetLuid.Value )
        goto LABEL_15;
      v14 = 32;
      Status[0] = *(_DWORD *)(v13 + 4);
      v40 = *(_QWORD *)(v13 + 16);
      Status[1] = *(_DWORD *)(v13 + 24);
    }
    else
    {
      v14 = v38;
    }
    if ( !v4 && (v11 & 0x20000000) != 0 )
    {
      InstanceName = 0;
      if ( v12 == 4 && *(_DWORD *)v13 > 1u )
        goto LABEL_32;
      v16 = **(_QWORD **)&Status[2] - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
      if ( **(_QWORD **)&Status[2] == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
        v16 = *(_QWORD *)(*(_QWORD *)&Status[2] + 8LL) - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
      if ( !v16 )
      {
        LOBYTE(v7) = *(_BYTE *)v13;
        InstanceName = ndisNDKHandleWmiChangeRequest(a1, v7);
        goto LABEL_33;
      }
      v17 = **(_QWORD **)&Status[2] - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
      if ( **(_QWORD **)&Status[2] == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
        v17 = *(_QWORD *)(*(_QWORD *)&Status[2] + 8LL) - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
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
              if ( (unsigned __int8)byte_1C00895D5 >= 4u )
                WPP_SF_q(0x36u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
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
          NdisOpenConfiguration(Status, (PNDIS_HANDLE)&Status[2], a1->ConfigurationHandle);
          if ( Status[0] >= 0 )
          {
            v28 = a1->PnPCapabilities;
            ParameterValue.ParameterType = NdisParameterInteger;
            ParameterValue.ParameterData.IntegerData = v28;
            NdisWriteConfiguration(Status, *(NDIS_HANDLE *)&Status[2], &Keyword, &ParameterValue);
            NdisCloseConfiguration(*(NDIS_HANDLE *)&Status[2]);
          }
          ndisInitializeNetPnPEvent(&v44, 0LL);
          v45 = 7;
          p_PMCapabilities61 = &a1->PMCapabilities61;
          v47 = 4;
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
      v21 = **(_QWORD **)&Status[2] - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
      if ( **(_QWORD **)&Status[2] == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
        v21 = *(_QWORD *)(*(_QWORD *)&Status[2] + 8LL) - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
      if ( v21 )
      {
        v25 = **(_QWORD **)&Status[2] - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
        if ( **(_QWORD **)&Status[2] == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
          v25 = *(_QWORD *)(*(_QWORD *)&Status[2] + 8LL) - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
        if ( v25 )
        {
          v27 = **(_QWORD **)&Status[2] - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
          if ( **(_QWORD **)&Status[2] == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
            v27 = *(_QWORD *)(*(_QWORD *)&Status[2] + 8LL) - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
          if ( !v27 )
          {
            InstanceName = ndisWmiSetPMAdminConfig(a1, v13);
            goto LABEL_82;
          }
          if ( (unsigned __int8)byte_1C00895D9 >= 2u )
            WPP_SF_q(0x37u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
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
      if ( (unsigned __int8)byte_1C00895D9 >= 2u )
        WPP_SF_q(0x38u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
      goto LABEL_92;
    }
    if ( *(_DWORD *)(*(_QWORD *)&Status[2] + 16LL) == 66076 && (v12 != 4 || (*(_DWORD *)v13 & 0xFFFFF000) != 0) )
    {
LABEL_92:
      InstanceName = -1073741808;
      goto LABEL_123;
    }
    memset(v43, 0, sizeof(v43));
    *(_DWORD *)&v43[88] |= 8u;
    v32 = &ndisIntReqWmi;
    v33 = v12 - v14;
    *(_QWORD *)&v43[104] = &ndisIntReqWmi;
    *(_DWORD *)v43 = 15466902;
    *(_DWORD *)&v43[32] = *(_DWORD *)(*(_QWORD *)&Status[2] + 16LL);
    *(_DWORD *)&v43[8] = Status[0];
    *(_DWORD *)&v43[4] = 1;
    *(_QWORD *)&v43[40] = v13 + v14;
    *(_QWORD *)&v43[16] = v40;
    if ( !v40 )
      v32 = *(void **)&v43[24];
    *(_QWORD *)&v43[24] = v32;
    *(_DWORD *)&v43[48] = v33;
    *(_DWORD *)&v43[12] = Status[1];
    SetMiniport = ndisQuerySetMiniport(a1, v4, (struct _NDIS_OID_REQUEST *)v43, 0LL, 0LL);
    if ( SetMiniport == -1071448017 )
    {
      if ( (*(_DWORD *)(v9 + 24) & 0x200) != 0 )
        goto LABEL_102;
      SetMiniport = 0;
    }
    if ( !SetMiniport )
    {
      InstanceName = 0;
      goto LABEL_123;
    }
LABEL_102:
    if ( (unsigned __int8)byte_1C00895D9 >= 2u )
      WPP_SF_q(0x39u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
      Template_jqxqqq(
        v34,
        &ChangeInformationFailed,
        &a1->InterfaceGuid,
        (unsigned __int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        SetMiniport,
        144,
        0);
    if ( (*(_DWORD *)(v9 + 24) & 0x200) != 0 )
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
  if ( (unsigned __int8)byte_1C00895D9 >= 2u )
    WPP_SF_q(0x32u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
LABEL_33:
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00895D9 >= 4u )
    WPP_SF_qD(0x3Au, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1, InstanceName);
  return (unsigned int)InstanceName;
}

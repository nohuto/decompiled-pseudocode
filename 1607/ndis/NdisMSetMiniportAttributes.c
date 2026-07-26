/*
 * XREFs of NdisMSetMiniportAttributes @ 0x1C00AEC30
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C001A06C (TraceLoggingProviderEnabled.c)
 *     ndisMSetGeneralAttributes @ 0x1C001E518 (ndisMSetGeneralAttributes.c)
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C00223F8 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 *     ?NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C0072B60 (-NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIB.c)
 *     ?NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C0072E00 (-NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTR.c)
 *     ?NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C0072EE4 (-NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_AT.c)
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00A7088 (ndisUpdateNoPauseOnSuspend.c)
 *     ndisMSetOffloadAttributes @ 0x1C00B1D10 (ndisMSetOffloadAttributes.c)
 *     ndisMSetReceiveFilterAttributes @ 0x1C00B2864 (ndisMSetReceiveFilterAttributes.c)
 *     ndisMSetNicSwitchAttributes @ 0x1C00B2A98 (ndisMSetNicSwitchAttributes.c)
 *     ndisMSetHDSplitAttributes @ 0x1C00B2E4C (ndisMSetHDSplitAttributes.c)
 *     ndisMSetNative802_11Attributes @ 0x1C00D15F8 (ndisMSetNative802_11Attributes.c)
 *     ndisMSetQosAttributes @ 0x1C00D16A4 (ndisMSetQosAttributes.c)
 *     ndisMSetSriovAttributes @ 0x1C00D1860 (ndisMSetSriovAttributes.c)
 *     ndisMSetNDKAttributes @ 0x1C00D6F48 (ndisMSetNDKAttributes.c)
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C00E0238 (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 *     NdisMSetAttributesEx @ 0x1C00E84E0 (NdisMSetAttributesEx.c)
 */

NDIS_STATUS __stdcall NdisMSetMiniportAttributes(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MINIPORT_ADAPTER_ATTRIBUTES MiniportAttributes)
{
  int Type; // ebp
  NDIS_STATUS v5; // ebx
  int v6; // r15d
  PVOID PoolWithTag; // rax
  NDIS_STATUS v8; // eax
  ULONG v10; // ebx
  unsigned int Flags; // eax
  unsigned __int8 v12; // al
  UCHAR Revision; // al
  USHORT Size; // cx
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  unsigned __int64 MaxXmitLinkSpeed; // r9
  unsigned __int64 XmitLinkSpeed; // rax
  struct _NDIS_OFFLOAD *DefaultOffloadConfiguration; // rbp
  struct _NDIS_OFFLOAD *HardwareOffloadCapabilities; // r14
  UCHAR v22; // dl
  const struct _TlgProvider_t *v23; // rcx
  ULONGLONG v24; // r8
  UCHAR v25; // dl
  const struct _TlgProvider_t *v26; // rcx
  ULONGLONG v27; // r8
  unsigned __int8 v28; // al
  NDIS_INTERFACE_TYPE AdapterType[2]; // [rsp+20h] [rbp-28h]

  Type = MiniportAttributes->Header.Type;
  v5 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(
      0x6Fu,
      &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids,
      (__int64)NdisMiniportHandle,
      MiniportAttributes->Header.Type);
  v6 = Type;
  if ( Type == 158 )
  {
    v10 = 544;
    if ( (*(_BYTE *)(*((_QWORD *)NdisMiniportHandle + 477) + 26LL) & 1) != 0 )
      v10 = 560;
    if ( (MiniportAttributes->AddDeviceRegistrationAttributes.Flags & 1) != 0 )
      *((_DWORD *)NdisMiniportHandle + 31) |= 0x200000u;
    if ( (MiniportAttributes->AddDeviceRegistrationAttributes.Flags & 2) != 0 )
      *((_DWORD *)NdisMiniportHandle + 31) |= 0x400000u;
    Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
    if ( (Flags & 4) != 0 )
      v10 |= 0x80u;
    if ( (Flags & 8) != 0 )
      v10 |= 0x100u;
    if ( (Flags & 0x10) != 0 )
      v10 |= 0x400u;
    if ( (Flags & 0x20) != 0 )
      v10 |= 0x40u;
    if ( (Flags & 0x40) != 0 )
      v10 |= 8u;
    if ( (Flags & 0x100) != 0 )
    {
      *((_DWORD *)NdisMiniportHandle + 468) |= 0x80000000;
      ndisUpdateNoPauseOnSuspend((__int64)NdisMiniportHandle);
    }
    if ( (MiniportAttributes->AddDeviceRegistrationAttributes.Flags & 0x200) != 0 )
      *((_DWORD *)NdisMiniportHandle + 468) |= 0x200u;
    if ( (MiniportAttributes->AddDeviceRegistrationAttributes.Flags & 0x400) != 0
      || (v12 = *((_BYTE *)NdisMiniportHandle + 32), v12 <= 6u)
      && (v12 != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x1Eu) )
    {
      *((_DWORD *)NdisMiniportHandle + 30) |= 0x400u;
    }
    NdisMSetAttributesEx(
      NdisMiniportHandle,
      MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext,
      MiniportAttributes->RegistrationAttributes.CheckForHangTimeInSeconds,
      v10,
      MiniportAttributes->RegistrationAttributes.InterfaceType);
    if ( (MiniportAttributes->AddDeviceRegistrationAttributes.Flags & 0x80u) != 0 )
    {
      *((_DWORD *)NdisMiniportHandle + 31) |= 0x80u;
      *((_DWORD *)NdisMiniportHandle + 30) &= ~0x10000u;
    }
    else
    {
      *((_DWORD *)NdisMiniportHandle + 30) |= 0x10000u;
    }
    v5 = 0;
    goto LABEL_8;
  }
  if ( Type != 159 )
  {
    switch ( Type )
    {
      case 160:
        MaxXmitLinkSpeed = 0LL;
        XmitLinkSpeed = 0LL;
        DefaultOffloadConfiguration = 0LL;
        HardwareOffloadCapabilities = 0LL;
        if ( MiniportAttributes->Header.Size >= 0x28u )
        {
          DefaultOffloadConfiguration = MiniportAttributes->OffloadAttributes.DefaultOffloadConfiguration;
          HardwareOffloadCapabilities = MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities;
          MaxXmitLinkSpeed = MiniportAttributes->GeneralAttributes.MaxXmitLinkSpeed;
          XmitLinkSpeed = MiniportAttributes->GeneralAttributes.XmitLinkSpeed;
        }
        v5 = ndisMSetOffloadAttributes(
               NdisMiniportHandle,
               DefaultOffloadConfiguration,
               HardwareOffloadCapabilities,
               MaxXmitLinkSpeed,
               XmitLinkSpeed);
        if ( !v5 && TraceLoggingProviderEnabled(v23, v22, v24) )
          NdisTraceLoggingOffloads(
            (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
            HardwareOffloadCapabilities,
            DefaultOffloadConfiguration);
        goto LABEL_8;
      case 161:
        v8 = ndisMSetNative802_11Attributes(NdisMiniportHandle, MiniportAttributes);
        goto LABEL_7;
      case 164:
        *((_QWORD *)NdisMiniportHandle + 521) = MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext;
        goto LABEL_8;
      case 175:
        Revision = MiniportAttributes->Header.Revision;
        if ( Revision )
        {
          Size = MiniportAttributes->Header.Size;
          if ( Size >= 0x10u && (Size >= 0x30u || Revision != 2) && (Revision < 3u || Size >= 0x50u) )
          {
            v15 = *((_BYTE *)NdisMiniportHandle + 32);
            if ( v15 <= 6u && (v15 != 6 || !*((_BYTE *)NdisMiniportHandle + 33)) )
              goto LABEL_83;
            v5 = ndisMSetHDSplitAttributes(
                   NdisMiniportHandle,
                   MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext);
            if ( v5 < 0 )
              goto LABEL_8;
            if ( MiniportAttributes->Header.Revision >= 2u )
            {
              v16 = *((_BYTE *)NdisMiniportHandle + 32);
              if ( v16 <= 6u && (v16 != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x14u) )
                goto LABEL_83;
              if ( MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities )
              {
                if ( MiniportAttributes->GeneralAttributes.MaxXmitLinkSpeed )
                {
                  v5 = ndisMSetReceiveFilterAttributes(NdisMiniportHandle, MiniportAttributes);
                  if ( v5 < 0 )
                    goto LABEL_8;
                }
              }
              if ( MiniportAttributes->Header.Revision >= 2u )
              {
                v17 = *((_BYTE *)NdisMiniportHandle + 32);
                if ( v17 <= 6u && (v17 != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x14u) )
                  goto LABEL_83;
                if ( MiniportAttributes->GeneralAttributes.XmitLinkSpeed )
                {
                  if ( MiniportAttributes->GeneralAttributes.MaxRcvLinkSpeed )
                  {
                    v5 = ndisMSetNicSwitchAttributes(NdisMiniportHandle, MiniportAttributes);
                    if ( v5 < 0 )
                      goto LABEL_8;
                  }
                }
              }
            }
            if ( MiniportAttributes->Header.Revision < 3u )
              goto LABEL_8;
            v28 = *((_BYTE *)NdisMiniportHandle + 32);
            if ( v28 > 6u || v28 == 6 && *((_BYTE *)NdisMiniportHandle + 33) >= 0x1Eu )
            {
              if ( !MiniportAttributes->GeneralAttributes.RcvLinkSpeed
                || !MiniportAttributes->Native_802_11_Attributes.WFDAttributes
                || (v5 = ndisMSetSriovAttributes(NdisMiniportHandle, MiniportAttributes), v5 >= 0) )
              {
                if ( MiniportAttributes->HardwareAssistAttributes.HardwareQosCapabilities )
                {
                  if ( MiniportAttributes->GeneralAttributes.PowerManagementCapabilities )
                  {
                    v5 = ndisMSetQosAttributes(NdisMiniportHandle, MiniportAttributes);
                    if ( v5 >= 0 )
                    {
                      NdisTraceLoggingQosHardwareOffloads(
                        (const struct _TlgProvider_t *)NdisMiniportHandle,
                        MiniportAttributes);
                      NdisTraceLoggingQosConfigOffloads(
                        (const struct _TlgProvider_t *)NdisMiniportHandle,
                        MiniportAttributes);
                    }
                  }
                }
              }
              goto LABEL_8;
            }
LABEL_83:
            v5 = -1073741637;
            goto LABEL_8;
          }
        }
        break;
      case 179:
        v5 = ndisMSetNDKAttributes(NdisMiniportHandle, MiniportAttributes);
        if ( !v5 && TraceLoggingProviderEnabled(v26, v25, v27) )
          NdisTraceLoggingNDKCapabilities((const struct _TlgProvider_t *)NdisMiniportHandle, MiniportAttributes);
        goto LABEL_8;
      case 197:
        v8 = ndisMSetPacketDirectAttributes(NdisMiniportHandle, MiniportAttributes);
        goto LABEL_7;
    }
    v5 = -1073741811;
    goto LABEL_8;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, MiniportAttributes->Header.Size, 0x2020444Eu);
  *((_QWORD *)NdisMiniportHandle + 344) = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, MiniportAttributes, MiniportAttributes->Header.Size);
    v8 = ndisMSetGeneralAttributes(
           (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
           *((_QWORD *)NdisMiniportHandle + 344));
LABEL_7:
    v5 = v8;
    goto LABEL_8;
  }
  v5 = -1073741670;
LABEL_8:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    AdapterType[0] = v5;
    WPP_SF_qdD(
      0x70u,
      &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids,
      (__int64)NdisMiniportHandle,
      v6,
      *(_QWORD *)AdapterType);
  }
  return v5;
}

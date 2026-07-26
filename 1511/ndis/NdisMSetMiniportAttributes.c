/*
 * XREFs of NdisMSetMiniportAttributes @ 0x1C009A930
 * Callers:
 *     <none>
 * Callees:
 *     ndisMSetGeneralAttributes @ 0x1C0017278 (ndisMSetGeneralAttributes.c)
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C0017764 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1C001860C (TraceLoggingProviderEnabled.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     ?NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C006DC64 (-NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIB.c)
 *     ?NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C006DF04 (-NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTR.c)
 *     ?NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C006DFE8 (-NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_AT.c)
 *     ndisMSetReceiveFilterAttributes @ 0x1C0099730 (ndisMSetReceiveFilterAttributes.c)
 *     ndisMSetNicSwitchAttributes @ 0x1C0099964 (ndisMSetNicSwitchAttributes.c)
 *     ndisMSetSriovAttributes @ 0x1C0099C80 (ndisMSetSriovAttributes.c)
 *     ndisMSetHDSplitAttributes @ 0x1C009A444 (ndisMSetHDSplitAttributes.c)
 *     ndisMSetOffloadAttributes @ 0x1C009A5AC (ndisMSetOffloadAttributes.c)
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00A540C (ndisUpdateNoPauseOnSuspend.c)
 *     ndisMSetNative802_11Attributes @ 0x1C00CBBE0 (ndisMSetNative802_11Attributes.c)
 *     ndisMSetQosAttributes @ 0x1C00CBC8C (ndisMSetQosAttributes.c)
 *     ndisMSetNDKAttributes @ 0x1C00D0EFC (ndisMSetNDKAttributes.c)
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C00DA378 (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 *     NdisMSetAttributesEx @ 0x1C00E2D50 (NdisMSetAttributesEx.c)
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
  unsigned __int8 v18; // al
  _WORD *MaxXmitLinkSpeed; // r9
  _WORD *XmitLinkSpeed; // rax
  struct _NDIS_OFFLOAD *DefaultOffloadConfiguration; // rbp
  _NDIS_OFFLOAD *HardwareOffloadCapabilities; // r14
  UCHAR v23; // dl
  const struct _TlgProvider_t *v24; // rcx
  ULONGLONG v25; // r8
  UCHAR v26; // dl
  const struct _TlgProvider_t *v27; // rcx
  ULONGLONG v28; // r8
  NDIS_INTERFACE_TYPE AdapterType[2]; // [rsp+20h] [rbp-28h]

  Type = MiniportAttributes->Header.Type;
  v5 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(
      0x6Fu,
      &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids,
      (__int64)NdisMiniportHandle,
      MiniportAttributes->Header.Type);
  v6 = Type;
  switch ( Type )
  {
    case 158:
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
        ndisUpdateNoPauseOnSuspend(NdisMiniportHandle);
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
      break;
    case 159:
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, MiniportAttributes->Header.Size, 0x2020444Eu);
      *((_QWORD *)NdisMiniportHandle + 344) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v5 = -1073741670;
        break;
      }
      memmove(PoolWithTag, MiniportAttributes, MiniportAttributes->Header.Size);
      v8 = ndisMSetGeneralAttributes(
             (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
             *((_QWORD *)NdisMiniportHandle + 344));
LABEL_11:
      v5 = v8;
      break;
    case 160:
      MaxXmitLinkSpeed = 0LL;
      XmitLinkSpeed = 0LL;
      DefaultOffloadConfiguration = 0LL;
      HardwareOffloadCapabilities = 0LL;
      if ( MiniportAttributes->Header.Size >= 0x28u )
      {
        DefaultOffloadConfiguration = MiniportAttributes->OffloadAttributes.DefaultOffloadConfiguration;
        HardwareOffloadCapabilities = MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities;
        MaxXmitLinkSpeed = (_WORD *)MiniportAttributes->GeneralAttributes.MaxXmitLinkSpeed;
        XmitLinkSpeed = (_WORD *)MiniportAttributes->GeneralAttributes.XmitLinkSpeed;
      }
      v5 = ndisMSetOffloadAttributes(
             (__int64)NdisMiniportHandle,
             (__int64)DefaultOffloadConfiguration,
             HardwareOffloadCapabilities,
             MaxXmitLinkSpeed,
             XmitLinkSpeed);
      if ( !v5 && TraceLoggingProviderEnabled(v24, v23, v25) )
        NdisTraceLoggingOffloads(
          (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
          HardwareOffloadCapabilities,
          DefaultOffloadConfiguration);
      break;
    case 161:
      v8 = ndisMSetNative802_11Attributes(NdisMiniportHandle, MiniportAttributes);
      goto LABEL_11;
    case 164:
      *((_QWORD *)NdisMiniportHandle + 521) = MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext;
      break;
    case 175:
      Revision = MiniportAttributes->Header.Revision;
      if ( !Revision )
        goto LABEL_80;
      Size = MiniportAttributes->Header.Size;
      if ( Size < 0x10u || Revision == 2 && Size < 0x30u )
        goto LABEL_80;
      if ( Size < 0x50u && Revision >= 3u )
        goto LABEL_80;
      v15 = *((_BYTE *)NdisMiniportHandle + 32);
      if ( v15 <= 6u && (v15 != 6 || !*((_BYTE *)NdisMiniportHandle + 33)) )
        goto LABEL_89;
      v5 = ndisMSetHDSplitAttributes(
             (__int64)NdisMiniportHandle,
             (__int64)MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext);
      if ( v5 < 0 )
        break;
      if ( MiniportAttributes->Header.Revision >= 2u )
      {
        v16 = *((_BYTE *)NdisMiniportHandle + 32);
        if ( v16 <= 6u && (v16 != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x14u) )
          goto LABEL_89;
        if ( MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities )
        {
          if ( MiniportAttributes->GeneralAttributes.MaxXmitLinkSpeed )
          {
            v5 = ndisMSetReceiveFilterAttributes((__int64)NdisMiniportHandle, (__int64)MiniportAttributes);
            if ( v5 < 0 )
              break;
          }
        }
        if ( MiniportAttributes->Header.Revision >= 2u )
        {
          v17 = *((_BYTE *)NdisMiniportHandle + 32);
          if ( v17 <= 6u && (v17 != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x14u) )
            goto LABEL_89;
          if ( MiniportAttributes->GeneralAttributes.XmitLinkSpeed )
          {
            if ( MiniportAttributes->GeneralAttributes.MaxRcvLinkSpeed )
            {
              v5 = ndisMSetNicSwitchAttributes((void **)NdisMiniportHandle, (__int64)MiniportAttributes);
              if ( v5 < 0 )
                break;
            }
          }
        }
      }
      if ( MiniportAttributes->Header.Revision < 3u )
        break;
      v18 = *((_BYTE *)NdisMiniportHandle + 32);
      if ( v18 > 6u || v18 == 6 && *((_BYTE *)NdisMiniportHandle + 33) >= 0x1Eu )
      {
        if ( !MiniportAttributes->GeneralAttributes.RcvLinkSpeed
          || !MiniportAttributes->Native_802_11_Attributes.WFDAttributes
          || (v5 = ndisMSetSriovAttributes((__int64)NdisMiniportHandle, (__int64)MiniportAttributes), v5 >= 0) )
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
                NdisTraceLoggingQosConfigOffloads((const struct _TlgProvider_t *)NdisMiniportHandle, MiniportAttributes);
              }
            }
          }
        }
        break;
      }
LABEL_89:
      v5 = -1073741637;
      break;
    case 179:
      v5 = ndisMSetNDKAttributes((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle);
      if ( !v5 && TraceLoggingProviderEnabled(v27, v26, v28) )
        NdisTraceLoggingNDKCapabilities((const struct _TlgProvider_t *)NdisMiniportHandle, MiniportAttributes);
      break;
    case 197:
      v8 = ndisMSetPacketDirectAttributes(NdisMiniportHandle, MiniportAttributes);
      goto LABEL_11;
    default:
LABEL_80:
      v5 = -1073741811;
      break;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    AdapterType[0] = v5;
    WPP_SF_qdD(
      0x70u,
      &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids,
      (__int64)NdisMiniportHandle,
      v6,
      *(_QWORD *)AdapterType);
  }
  return v5;
}

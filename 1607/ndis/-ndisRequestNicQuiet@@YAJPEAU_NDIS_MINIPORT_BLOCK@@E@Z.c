/*
 * XREFs of ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00DCEDC
 * Callers:
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D278 (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006E444 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000A5A0 (ndisQuerySetMiniport.c)
 *     ndisCancelWaitWake @ 0x1C0012DFC (ndisCancelWaitWake.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C006CE04 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C006EC2C (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ndisRequestDeviceLowPower @ 0x1C009C64C (ndisRequestDeviceLowPower.c)
 *     ndisRequestWaitWake @ 0x1C00B2CB4 (ndisRequestWaitWake.c)
 */

__int64 __fastcall ndisRequestNicQuiet(struct _NDIS_MINIPORT_BLOCK *MiniportAdapterHandle, char a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rsi
  enum _DEVICE_POWER_STATE DeviceWake; // r15d
  unsigned int PnPFlags; // eax
  __int128 v7; // xmm0
  unsigned int SupportedWakeUpEvents; // eax
  int v9; // ecx
  int SetMiniport; // edi
  int v11; // edi
  unsigned int v12; // edi
  _BYTE v14[248]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v15[20]; // [rsp+130h] [rbp+30h] BYREF

  AoAc = MiniportAdapterHandle->AoAc;
  memset(v14, 0, sizeof(v14));
  memset(v15, 0, sizeof(v15));
  DeviceWake = PowerDeviceD3;
  ndisCancelWaitWake((__int64)MiniportAdapterHandle);
  PnPFlags = MiniportAdapterHandle->PnPFlags;
  if ( (PnPFlags & 0x20) != 0
    && (PnPFlags & 0x40) != 0
    && (unsigned int)(MiniportAdapterHandle->DeviceCaps.DeviceWake - 2) <= 2
    && AoAc->RemoteWakeEnabled )
  {
    v7 = *(_OWORD *)&MiniportAdapterHandle->PMCurrentParameters.Header.Type;
    DeviceWake = MiniportAdapterHandle->DeviceCaps.DeviceWake;
    *(_DWORD *)&v15[16] = MiniportAdapterHandle->PMCurrentParameters.MediaSpecificWakeUpEvents;
    SupportedWakeUpEvents = MiniportAdapterHandle->PMAdvertisedCapabilities.SupportedWakeUpEvents;
    v9 = 0;
    *(_OWORD *)v15 = v7;
    if ( (SupportedWakeUpEvents & 2) != 0 )
      v9 = 2;
    *(_DWORD *)v15 = 1311360;
    *(_DWORD *)&v15[12] = v9;
    if ( (SupportedWakeUpEvents & 1) != 0 )
      *(_DWORD *)&v15[12] = v9 | 1;
    memset(v14, 0, sizeof(v14));
    *(_DWORD *)&v14[88] |= 8u;
    *(_DWORD *)&v14[8] = 0;
    *(_QWORD *)&v14[104] = &ndisIntReqGeneric;
    *(_DWORD *)v14 = 15466902;
    *(_QWORD *)&v14[40] = v15;
    *(_DWORD *)&v14[32] = -50265847;
    *(_DWORD *)&v14[4] = 1;
    *(_DWORD *)&v14[48] = 20;
    SetMiniport = ndisQuerySetMiniport(MiniportAdapterHandle, 0LL, (struct _NDIS_OID_REQUEST *)v14, 0LL, 0LL);
    if ( SetMiniport )
    {
      NdisUnexpectedAoAcError(MiniportAdapterHandle, 0x58Au);
      if ( (unsigned __int8)byte_1C00895D5 >= 2u )
        WPP_SF_dq(0x18u, &WPP_1f3fc036deb630b8c59945bf71e899eb_Traceguids, SetMiniport, MiniportAdapterHandle);
    }
    v11 = ndisRequestWaitWake((char *)MiniportAdapterHandle, (PREQUEST_POWER_COMPLETE)ndisNicQuietWaitWakeCallback);
    if ( v11 != 259 )
    {
      NdisUnexpectedAoAcError(MiniportAdapterHandle, 0x596u);
      if ( (unsigned __int8)byte_1C00895D5 >= 2u )
        WPP_SF_dq(0x19u, &WPP_1f3fc036deb630b8c59945bf71e899eb_Traceguids, v11, MiniportAdapterHandle);
    }
  }
  ndisUpdateMiniportCsTrafficStatistics(MiniportAdapterHandle, 1);
  v12 = ndisRequestDeviceLowPower(
          (const struct _TlgProvider_t *)MiniportAdapterHandle,
          DeviceWake,
          (PREQUEST_POWER_COMPLETE)ndisNicQuietRequestComplete,
          MiniportAdapterHandle,
          NdisMEventDx_NicQuiet);
  if ( v12 == 259 )
  {
    v12 = 0;
    if ( a2 )
      KeWaitForSingleObject(&AoAc->PowerSuspendCompleteEvent, Executive, 0, 0, 0LL);
  }
  else
  {
    NdisUnexpectedAoAcError(MiniportAdapterHandle, 0x5B5u);
    if ( (unsigned __int8)byte_1C00895D5 >= 2u )
      WPP_SF_dq(0x1Au, &WPP_1f3fc036deb630b8c59945bf71e899eb_Traceguids, v12, MiniportAdapterHandle);
  }
  return v12;
}

/*
 * XREFs of ndisIfUpdateInterfaceOnInitialize @ 0x1C0013B84
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisIfGetRcvAddressFromMiniport @ 0x1C00139C0 (ndisIfGetRcvAddressFromMiniport.c)
 *     ndisIfSetInterfaceState @ 0x1C0017AB8 (ndisIfSetInterfaceState.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C0019F2C (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     memcmp @ 0x1C00270A0 (memcmp.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C00446D4 (WPP_SF_qqqL.c)
 *     ndisNsiSyncMiniportMediaConnectStateNotification @ 0x1C009EC60 (ndisNsiSyncMiniportMediaConnectStateNotification.c)
 *     NdisCloseConfiguration @ 0x1C009F840 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00A0620 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00A0980 (NdisOpenConfigurationEx.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00A1A7C (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00C3DBC (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00C3E60 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnInitialize(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        __int64 a3)
{
  unsigned int IntegerData; // edi
  bool v7; // r13
  unsigned int v8; // ebx
  KIRQL v9; // al
  unsigned int SlotNumber; // ecx
  int v11; // ebx
  _IF_PHYSICAL_ADDRESS_LH *p_ifPhysAddress; // rcx
  unsigned __int16 v13; // di
  int v14; // eax
  int v15; // eax
  __int16 v16; // ax
  unsigned __int16 v17; // ax
  int v18; // ecx
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // ax
  _NDIS_MEDIUM v21; // eax
  char v22; // di
  _NDIS_PHYSICAL_MEDIUM v23; // eax
  KIRQL v24; // al
  KIRQL v25; // bl
  int Status; // [rsp+30h] [rbp-30h] BYREF
  PVOID ConfigurationHandle; // [rsp+38h] [rbp-28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+40h] [rbp-20h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int8 ifDeviceWakeUpEnable; // [rsp+A0h] [rbp+40h]
  KIRQL NewIrql; // [rsp+B8h] [rbp+58h]

  ConfigurationHandle = 0LL;
  LOBYTE(IntegerData) = 0;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qqq(180LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, a2, a3);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  v7 = 1;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v8 = Status;
  if ( !Status )
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NdisDeviceTypeStr, NdisParameterInteger);
    if ( !Status )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    Status = 0;
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    a2->PhysicalLocation.BusNumber = a1->BusNumber;
    SlotNumber = a1->SlotNumber;
    a2->PhysicalLocation.FunctionNumber = -1;
    a2->PhysicalLocation.SlotNumber = SlotNumber;
    a2->AccessType = *(_DWORD *)(a3 + 168);
    a2->DirectionType = *(_DWORD *)(a3 + 172);
    a2->ifConnectorPresent = *(_BYTE *)(a3 + 182);
    a2->ConnectionType = *(_DWORD *)(a3 + 176);
    a2->ifMtu = *(_DWORD *)(a3 + 16);
    a2->Flags = 0;
    NewIrql = v9;
    a2->Flags = (a1->PnPFlags & 0x200000) != 0;
    if ( (a1->PnPFlags & 0x8000000) != 0 )
      a2->Flags |= 2u;
    v11 = 32;
    if ( (a1->PnPFlags & 0x400000) != 0 )
      a2->Flags |= 0x20u;
    if ( (IntegerData & 1) != 0 )
      a2->Flags |= 0x40u;
    if ( (a1->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a1->FilterPnPFlags & 0x200) != 0 )
      a2->Flags |= 0x100u;
    p_ifPhysAddress = &a2->ifPhysAddress;
    a2->ifFlags = a2->Flags;
    v13 = *(_WORD *)(a3 + 92);
    if ( a2->ifPhysAddress.Length == v13 )
    {
      v14 = v13;
      if ( v13 >= 0x20u )
        v14 = 32;
      if ( !memcmp(a2->ifPhysAddress.Address, (const void *)(a3 + 126), v14) )
      {
        v15 = v13;
        if ( v13 >= 0x20u )
          v15 = 32;
        v7 = memcmp(a2->PermanentPhysAddress.Address, (const void *)(a3 + 94), v15) != 0;
      }
      p_ifPhysAddress = &a2->ifPhysAddress;
    }
    v16 = v13;
    if ( v13 >= 0x20u )
      v16 = 32;
    p_ifPhysAddress->Length = v16;
    v17 = *(_WORD *)(a3 + 92);
    v18 = v17;
    if ( v17 >= 0x20u )
      v18 = 32;
    memmove(a2->ifPhysAddress.Address, (const void *)(a3 + 126), v18);
    v19 = *(_WORD *)(a3 + 92);
    if ( v19 >= 0x20u )
      v19 = 32;
    a2->PermanentPhysAddress.Length = v19;
    v20 = *(_WORD *)(a3 + 92);
    if ( v20 < 0x20u )
      v11 = v20;
    memmove(a2->PermanentPhysAddress.Address, (const void *)(a3 + 94), v11);
    a2->XmitLinkSpeed = *(_QWORD *)(a3 + 32);
    a2->RcvLinkSpeed = *(_QWORD *)(a3 + 48);
    a2->MediaConnectState = *(_DWORD *)(a3 + 56);
    a2->MediaDuplexState = *(_DWORD *)(a3 + 60);
    a2->SupportedStatistics = *(_DWORD *)(a3 + 184);
    v21 = *(_DWORD *)(a3 + 8);
    if ( a2->MediaType == v21 )
    {
      v22 = 0;
    }
    else
    {
      a2->MediaType = v21;
      v22 = 1;
    }
    v23 = *(_DWORD *)(a3 + 12);
    if ( a2->PhysicalMediumType != v23 )
    {
      a2->PhysicalMediumType = v23;
      v22 = 1;
    }
    ifDeviceWakeUpEnable = a2->ifDeviceWakeUpEnable;
    a2->ifDeviceWakeUpEnable = a1->PMCapabilities61.Flags & 1;
    KeReleaseSpinLock(&ndisIfListLock, NewIrql);
    if ( a2->Source == NdisIfBlockSourcePersistedNetSetup )
    {
      if ( (v22 || v7) && (int)ndisIfWriteBackPersistedInterface(a2) < 0 )
      {
        v8 = -1073741823;
        goto LABEL_40;
      }
    }
    else
    {
      if ( v22 )
      {
        Status = ndisIfUpdatePersistedInterfaceInfo(
                   (unsigned __int8 *)&a2->NetLuid,
                   8u,
                   0x434u,
                   (unsigned __int8 *)&a2->MediaType);
        v8 = Status;
        if ( Status )
          goto LABEL_40;
      }
      if ( v7 )
      {
        Status = ndisIfUpdatePersistedInterfaceInfo(
                   (unsigned __int8 *)&a2->NetLuid,
                   0x44u,
                   0x440u,
                   (unsigned __int8 *)&a2->ifPhysAddress);
        v8 = Status;
        if ( Status )
          goto LABEL_40;
      }
    }
    v24 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 2245477;
    v25 = v24;
    ndisIfSetInterfaceState(a1);
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v25);
    ndisNsiSyncMiniportOperStatusNotification(a1);
    ndisNsiSyncMiniportMediaConnectStateNotification(a1);
    ndisIfGetRcvAddressFromMiniport((__int64)a1);
    if ( ifDeviceWakeUpEnable != a2->ifDeviceWakeUpEnable )
      ndisNsiScheduleIfBlockRodChangeNotification(a2, &a2->ifDeviceWakeUpEnable, 1LL, 641LL);
    v8 = Status;
  }
LABEL_40:
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qqqL(181LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, a2, a3, v8);
  return v8;
}

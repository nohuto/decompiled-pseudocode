/*
 * XREFs of ndisIfUpdateInterfaceOnInitialize @ 0x1C001F5D8
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisIfGetRcvAddressFromMiniport @ 0x1C00106C0 (ndisIfGetRcvAddressFromMiniport.c)
 *     ndisIfSetInterfaceState @ 0x1C001DA38 (ndisIfSetInterfaceState.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001FF1C (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     memcmp @ 0x1C0026B00 (memcmp.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0040C54 (WPP_SF_qqqL.c)
 *     NdisCloseConfiguration @ 0x1C009D130 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C009DFB0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C009E2C0 (NdisOpenConfigurationEx.c)
 *     ndisNsiSyncMiniportMediaConnectStateNotification @ 0x1C00A92C0 (ndisNsiSyncMiniportMediaConnectStateNotification.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00A930C (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00BF074 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00BF118 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnInitialize(struct _TlgProvider_t *a1, struct _NDIS_IF_BLOCK *a2, __int64 a3)
{
  unsigned int IntegerData; // edi
  bool v7; // r13
  unsigned int v8; // ebx
  KIRQL v9; // al
  unsigned int LevelPlus1; // ecx
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
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qqq(180LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1, a2, a3);
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
    a2->PhysicalLocation.BusNumber = HIDWORD(a1[58].AnnotationFunc);
    LevelPlus1 = a1[59].LevelPlus1;
    a2->PhysicalLocation.FunctionNumber = -1;
    a2->PhysicalLocation.SlotNumber = LevelPlus1;
    a2->AccessType = *(_DWORD *)(a3 + 168);
    a2->DirectionType = *(_DWORD *)(a3 + 172);
    a2->ifConnectorPresent = *(_BYTE *)(a3 + 182);
    a2->ConnectionType = *(_DWORD *)(a3 + 176);
    a2->ifMtu = *(_DWORD *)(a3 + 16);
    a2->Flags = 0;
    NewIrql = v9;
    a2->Flags = (HIDWORD(a1[1].AnnotationFunc) & 0x200000) != 0;
    if ( (HIDWORD(a1[1].AnnotationFunc) & 0x8000000) != 0 )
      a2->Flags |= 2u;
    v11 = 32;
    if ( (HIDWORD(a1[1].AnnotationFunc) & 0x400000) != 0 )
      a2->Flags |= 0x20u;
    if ( (IntegerData & 1) != 0 )
      a2->Flags |= 0x40u;
    if ( (HIDWORD(a1[1].AnnotationFunc) & 0x200000) != 0 && ndisAoAcCapable || (a1[42].LevelPlus1 & 0x200) != 0 )
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
    a2->ifDeviceWakeUpEnable = a1[15].KeywordAll & 1;
    KeReleaseSpinLock(&ndisIfListLock, NewIrql);
    if ( a2->Source == NdisIfBlockSourcePersistedNetSetup )
    {
      if ( (v22 || v7) && (int)ndisIfWriteBackPersistedInterface(a2) < 0 )
      {
        v8 = -1073741823;
        goto LABEL_41;
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
          goto LABEL_41;
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
          goto LABEL_41;
      }
    }
    v24 = KeAcquireSpinLockRaiseToDpc(&a1[1].RegHandle);
    a1[8].ProviderMetadataPtr = (const unsigned __int16 *)KeGetCurrentThread();
    a1[29].LevelPlus1 = 2245289;
    v25 = v24;
    ndisIfSetInterfaceState(a1, 0LL, v24);
    a1[8].ProviderMetadataPtr = 0LL;
    a1[29].LevelPlus1 = 0;
    KeReleaseSpinLock(&a1[1].RegHandle, v25);
    ndisNsiSyncMiniportOperStatusNotification(a1);
    ndisNsiSyncMiniportMediaConnectStateNotification(a1);
    ndisIfGetRcvAddressFromMiniport((__int64)a1);
    if ( ifDeviceWakeUpEnable != a2->ifDeviceWakeUpEnable )
      ndisNsiScheduleIfBlockRodChangeNotification(a2, &a2->ifDeviceWakeUpEnable, 1LL, 641LL);
    v8 = Status;
  }
LABEL_41:
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qqqL(181LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1, a2, a3, v8);
  return v8;
}

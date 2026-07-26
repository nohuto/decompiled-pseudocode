/*
 * XREFs of ndisMSetGeneralAttributes @ 0x1C001E518
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00AEC30 (NdisMSetMiniportAttributes.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisIfSetInterfaceState @ 0x1C0017AB8 (ndisIfSetInterfaceState.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisMSetRssCapabilities @ 0x1C00B2EC0 (ndisMSetRssCapabilities.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C00D057C (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall ndisMSetGeneralAttributes(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  __int64 v4; // rcx
  _NDIS_MEDIUM v5; // r8d
  KIRQL v6; // bp
  unsigned __int8 LinkStateIndicationFlags; // dl
  _NET_IF_MEDIA_CONNECT_STATE v8; // eax
  unsigned __int8 v9; // al
  __int64 v10; // rax
  bool v11; // zf
  unsigned int v12; // ecx
  __int64 MediaType; // rcx
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // eax
  bool v15; // cf
  unsigned int v16; // eax
  unsigned int *PoolWithTag; // rax
  __int128 v18; // xmm0
  int v19; // eax
  unsigned int *v20; // rax
  unsigned int v22; // eax
  struct _NDIS_PNP_CAPABILITIES *v23; // rcx
  __int64 v24; // rax
  unsigned int SupportedStatistics; // eax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(114LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
  if ( (a1->Flags & 0x80u) != 0 )
  {
    *(_WORD *)(a2 + 180) = a1->IfBlock->ifType;
    *(_DWORD *)(a2 + 8) = a1->IfBlock->MediaType;
    *(_DWORD *)(a2 + 12) = a1->IfBlock->PhysicalMediumType;
  }
  v4 = 0LL;
  if ( !(_DWORD)ndisMediumArraySize )
    return 3221291033LL;
  v5 = *(_DWORD *)(a2 + 8);
  do
  {
    if ( v5 == *((_DWORD *)ndisMediumArray + v4) )
      break;
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < (unsigned int)ndisMediumArraySize );
  if ( (unsigned int)v4 >= (unsigned int)ndisMediumArraySize )
    return 3221291033LL;
  a1->MediaType = v5;
  a1->MiniportMediaType = v5;
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  LinkStateIndicationFlags = a1->LinkStateIndicationFlags;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 728828;
  if ( (LinkStateIndicationFlags & 8) == 0 )
    a1->MiniportMediaConnectState = *(_DWORD *)(a2 + 56);
  if ( (LinkStateIndicationFlags & 0x10) == 0 )
  {
    a1->MiniportRcvLinkSpeed = *(_QWORD *)(a2 + 48);
    a1->MiniportXmitLinkSpeed = *(_QWORD *)(a2 + 32);
    a1->MiniportMediaDuplexState = *(_DWORD *)(a2 + 60);
    a1->MiniportAutoNegotiationFlags = *(_DWORD *)(a2 + 212);
  }
  if ( (LinkStateIndicationFlags & 1) == 0 )
  {
    v8 = *(_DWORD *)(a2 + 56);
    a1->MediaConnectState = v8;
    if ( v8 == MediaConnectStateConnected )
      a1->Flags |= 0x20000000u;
    else
      a1->Flags &= ~0x20000000u;
  }
  if ( (LinkStateIndicationFlags & 2) == 0 )
  {
    a1->RcvLinkSpeed = *(_QWORD *)(a2 + 48);
    a1->XmitLinkSpeed = *(_QWORD *)(a2 + 32);
  }
  if ( (LinkStateIndicationFlags & 4) == 0 )
    a1->MediaDuplexState = *(_DWORD *)(a2 + 60);
  ndisIfSetInterfaceState(a1, 0LL, v6);
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v6);
  a1->MP6SupportPM = 1;
  *(_QWORD *)&a1->PMCurrentParameters.Header.Type = 0LL;
  *(_QWORD *)&a1->PMCurrentParameters.EnabledProtocolOffloads = 0LL;
  a1->PMCurrentParameters.MediaSpecificWakeUpEvents = 0;
  v9 = *(_BYTE *)(a2 + 1);
  if ( v9 == 1 && (v23 = *(struct _NDIS_PNP_CAPABILITIES **)(a2 + 72)) != 0LL )
  {
    ndisConvertPnpCapabilitiesToPM(v23, &a1->PMHardwareCapabilities);
  }
  else if ( v9 >= 2u && (v10 = *(_QWORD *)(a2 + 216)) != 0 )
  {
    if ( *(_BYTE *)(v10 + 1) < 2u )
    {
      memset(&a1->PMHardwareCapabilities, 0, sizeof(a1->PMHardwareCapabilities));
      v24 = *(_QWORD *)(a2 + 216);
      *(_OWORD *)&a1->PMHardwareCapabilities.Header.Type = *(_OWORD *)v24;
      *(_OWORD *)&a1->PMHardwareCapabilities.MaxWoLPatternSize = *(_OWORD *)(v24 + 16);
      *(_OWORD *)&a1->PMHardwareCapabilities.NumArpOffloadIPv4Addresses = *(_OWORD *)(v24 + 32);
      a1->PMHardwareCapabilities.MinLinkChangeWakeUp = *(_DWORD *)(v24 + 48);
    }
    else
    {
      *(_OWORD *)&a1->PMHardwareCapabilities.Header.Type = *(_OWORD *)v10;
      *(_OWORD *)&a1->PMHardwareCapabilities.MaxWoLPatternSize = *(_OWORD *)(v10 + 16);
      *(_OWORD *)&a1->PMHardwareCapabilities.NumArpOffloadIPv4Addresses = *(_OWORD *)(v10 + 32);
      *(_QWORD *)&a1->PMHardwareCapabilities.MinLinkChangeWakeUp = *(_QWORD *)(v10 + 48);
      a1->PMHardwareCapabilities.MediaSpecificWakeUpEvents = *(_DWORD *)(v10 + 56);
    }
  }
  else if ( a1->MajorNdisVersion >= 6u )
  {
    a1->MP6SupportPM = 0;
  }
  if ( *(_QWORD *)(a2 + 160) )
    ndisMSetRssCapabilities(a1);
  v11 = (a1->DeviceFlags & 1) == 0;
  v12 = *(_DWORD *)(a2 + 84);
  a1->SupportedPacketFilters = v12;
  if ( !v11 )
    a1->SupportedPacketFilters = v12 | 0x20;
  MediaType = a1->MediaType;
  a1->MaxXmitLinkSpeed = *(_QWORD *)(a2 + 24);
  a1->MaxRcvLinkSpeed = *(_QWORD *)(a2 + 40);
  a1->MacOptions |= *(_DWORD *)(a2 + 80);
  if ( !(_DWORD)MediaType )
  {
    v22 = *(_DWORD *)(a2 + 64);
    if ( v22 > 0x200 )
      v22 = 512;
LABEL_72:
    a1->MiniportMaximumLookahead = v22;
    goto LABEL_39;
  }
  if ( (_DWORD)MediaType != 3 )
  {
    if ( (_DWORD)MediaType == 4
      || (int)MediaType > 8
      && ((int)MediaType <= 10 || (int)MediaType > 14 && ((int)MediaType <= 16 || (unsigned int)(MediaType - 18) <= 1)) )
    {
      a1->MiniportMaximumLookahead = *(_DWORD *)(a2 + 64);
    }
    if ( (int)MediaType < 20 )
      goto LABEL_39;
    v22 = *(_DWORD *)(a2 + 64);
    goto LABEL_72;
  }
  a1->MiniportMaximumLookahead = 512;
LABEL_39:
  if ( ((unsigned int)MediaType <= 0x13 && ndisMediaTypeCl[MediaType] || (_DWORD)MediaType == 3)
    && (a1->MacOptions & 0x80000001) == 0x80000001 )
  {
    a1->MiniportMaximumLookahead = 512;
  }
  if ( (int)MediaType >= 2
    && ((int)MediaType <= 8 || (int)MediaType > 9 && ((int)MediaType <= 15 || (_DWORD)MediaType == 17))
    || (int)MediaType >= 20 )
  {
    a1->PhysicalMediumType = NdisPhysicalMediumUnspecified;
  }
  else
  {
    a1->PhysicalMediumType = *(_DWORD *)(a2 + 12);
  }
  if ( (a1->MacOptions & 8) != 0 )
    a1->Flags |= 0x8000000u;
  if ( (_DWORD)MediaType )
  {
    if ( (_DWORD)MediaType == 16 )
      a1->MaximumLongAddresses = *(_DWORD *)(a2 + 88);
  }
  else
  {
    v15 = a1->MajorNdisVersion < 6u;
    a1->MaximumLongAddresses = *(_DWORD *)(a2 + 88);
    if ( !v15 && a1->PhysicalMediumType == NdisPhysicalMediumWirelessLan )
      return 3221225659LL;
  }
  if ( a1->PhysicalMediumType == NdisPhysicalMediumUnspecified )
  {
    PhysicalMediumType = a1->PhysicalMediumType;
    if ( a1->PhysicalMediumInInf == 14 )
      PhysicalMediumType = NdisPhysicalMedium802_3;
    a1->PhysicalMediumType = PhysicalMediumType;
  }
  v15 = a1->MajorNdisVersion < 6u;
  a1->MiniportPhysicalMediumType = a1->PhysicalMediumType;
  if ( v15 && (SupportedStatistics = a1->SupportedStatistics) != 0 )
    *(_DWORD *)(a2 + 184) = SupportedStatistics;
  else
    a1->SupportedStatistics = *(_DWORD *)(a2 + 184);
  a1->DataBackFillSize = *(_DWORD *)(a2 + 192);
  a1->ContextBackFillSize = *(_DWORD *)(a2 + 196);
  v16 = *(_DWORD *)(a2 + 208);
  if ( v16 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x6D61444Eu);
    a1->SupportedOidList = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a2 + 200), *(unsigned int *)(a2 + 208));
      a1->SupportedOidListLength = *(_DWORD *)(a2 + 208);
    }
  }
  v18 = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
  a1->TopFilterRestartAttributes.AccessType = *(_DWORD *)(a2 + 168);
  a1->TopFilterRestartAttributes.ConnectionType = *(_DWORD *)(a2 + 176);
  a1->TopFilterRestartAttributes.ContextBackFillSize = *(_DWORD *)(a2 + 196);
  a1->TopFilterRestartAttributes.DataBackFillSize = *(_DWORD *)(a2 + 192);
  a1->TopFilterRestartAttributes.Header = *(_NDIS_OBJECT_HEADER *)a2;
  a1->TopFilterRestartAttributes.LookaheadSize = *(_DWORD *)(a2 + 64);
  a1->TopFilterRestartAttributes.MacOptions = a1->MacOptions;
  a1->TopFilterRestartAttributes.MaxMulticastListSize = *(_DWORD *)(a2 + 88);
  a1->TopFilterRestartAttributes.MtuSize = *(_DWORD *)(a2 + 16);
  v19 = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
  *(_OWORD *)&a1->TopRecvScaleCapabilities.Header.Type = v18;
  *(_DWORD *)&a1->TopRecvScaleCapabilities.NumberOfIndirectionTableEntries = v19;
  a1->TopFilterRestartAttributes.RecvScaleCapabilities = &a1->TopRecvScaleCapabilities;
  a1->TopFilterRestartAttributes.SupportedPacketFilters = *(_DWORD *)(a2 + 84);
  a1->TopFilterRestartAttributes.SupportedStatistics = *(_DWORD *)(a2 + 184);
  a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = *(_QWORD *)(a2 + 24);
  a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = *(_QWORD *)(a2 + 40);
  if ( *(_DWORD *)(a2 + 208) || a1->MajorNdisVersion < 6u && a1->SupportedOidListLength )
  {
    if ( a1->MajorNdisVersion < 6u )
    {
      *(_DWORD *)(a2 + 208) = a1->SupportedOidListLength;
      *(_QWORD *)(a2 + 200) = a1->SupportedOidList;
    }
    v20 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned int *)(a2 + 208), 0x6D61444Eu);
    a1->TopFilterRestartAttributes.SupportedOidList = v20;
    if ( v20 )
    {
      memmove(v20, *(const void **)(a2 + 200), *(unsigned int *)(a2 + 208));
      a1->TopFilterRestartAttributes.SupportedOidListLength = *(_DWORD *)(a2 + 208);
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(115LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, 0LL);
  return 0LL;
}

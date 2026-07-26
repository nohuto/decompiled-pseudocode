/*
 * XREFs of ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A04A4
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00A0368 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0004888 (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000B444 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0011E40 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIovGetNicSwitchList @ 0x1C0016164 (ndisIovGetNicSwitchList.c)
 *     ndisReferenceOpenByHandle @ 0x1C001AC44 (ndisReferenceOpenByHandle.c)
 *     ndisReferenceProtocol @ 0x1C001BE60 (ndisReferenceProtocol.c)
 *     ndisIsMiniportStarted @ 0x1C001BE98 (ndisIsMiniportStarted.c)
 *     ndisDereferenceProtocol @ 0x1C001C678 (ndisDereferenceProtocol.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C001C7F0 (ndisIndicateInitialStateToBinding.c)
 *     ndisGetPortList @ 0x1C001E120 (ndisGetPortList.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004A588 (ndisBindUnbindPeriodicReceives.c)
 *     Template_jqxzq @ 0x1C005EEFC (Template_jqxzq.c)
 *     WPP_SF_ZZL @ 0x1C006AB24 (WPP_SF_ZZL.c)
 *     ndisNotifyBindFailure @ 0x1C0099B5C (ndisNotifyBindFailure.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C009ECD4 (ndisNotifyWmiBindUnbind.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00A0D68 (ndisIfQueryBindingMiniportIfIndex.c)
 *     ndisMDoMiniportOp @ 0x1C00ABE78 (ndisMDoMiniportOp.c)
 */

__int64 __fastcall ndisBindNdis6Protocol(struct _NDIS_MINIPORT_BLOCK *a1, _NDIS_PROTOCOL_BLOCK *this)
{
  _NDIS_PROTOCOL_BLOCK *v2; // rdi
  unsigned int Blink; // esi
  char v5; // r12
  __int64 v6; // rdx
  struct _KMUTANT *p_Mutex; // r15
  char v8; // r13
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _UNICODE_STRING *Paths; // r12
  UNICODE_STRING v11; // xmm0
  __int16 v12; // ax
  unsigned __int16 v13; // ax
  wchar_t *PoolWithTag; // rax
  unsigned __int8 MajorNdisVersion; // r8
  char v16; // dl
  __int16 v17; // ax
  unsigned int v18; // eax
  _NDIS_FILTER_BLOCK *HighestFilter; // rcx
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v24; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *v26; // rax
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  _NDIS_IF_BLOCK *v28; // rdx
  _NDIS_IF_BLOCK *v29; // rcx
  int v30; // eax
  struct _NDIS_MINIPORT_BLOCK *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  bool v34; // zf
  _NDIS_IF_BLOCK *IfBlock; // rcx
  char v37; // cl
  int v38; // edx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  char v40; // [rsp+40h] [rbp-C0h]
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-A8h] BYREF
  char v43; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _KEVENT BugCheckParameter3[6]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v46[40]; // [rsp+110h] [rbp+10h] BYREF

  v2 = this;
  memset(v46, 0, 312);
  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  Blink = 0;
  v40 = 0;
  v5 = 0;
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_qq(0x1Au, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, a1, this);
  if ( a1->MajorNdisVersion < 6u && (a1->LinkStateIndicationFlags & 1) == 0 )
  {
    LOBYTE(this) = 1;
    ndisMDoMiniportOp((_DWORD)a1, (_DWORD)this, 65812, (unsigned int)&v43, 4, 1, 1);
  }
  if ( ndisReferenceProtocol((__int64)v2, 8u) )
  {
    if ( !a1->EthDB )
    {
      Blink = -1073741823;
      if ( (unsigned __int8)byte_1C008370D >= 2u )
        WPP_SF_qq(0x1Bu, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, a1, v2);
      goto LABEL_65;
    }
    p_Mutex = &v2->Mutex;
    v8 = 1;
    KeWaitForSingleObject(&v2->Mutex, Executive, 0, 0, 0LL);
    ++v2->MutexOwnerCount;
    v2->MutexOwnerThread = KeGetCurrentThread();
    v2->MutexOwner = 3932828;
    if ( v2->Ref.Closing )
    {
LABEL_60:
      v34 = v2->MutexOwnerCount-- == 1;
      v2->MutexOwner = 0;
      if ( v34 )
        v2->MutexOwnerThread = 0LL;
      KeReleaseMutex(p_Mutex, 0);
      if ( v5 )
      {
        ndisMDereferenceOpenUnlocked((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink, 2u);
        BugCheckParameter3[0].Header.WaitListHead.Blink = 0LL;
      }
      if ( v8 && Blink )
        ndisNotifyBindFailure((__int64)a1, (__int64)v2);
LABEL_65:
      ndisDereferenceProtocol(v2, v6, 8u);
      goto LABEL_66;
    }
    if ( !ndisIsMiniportStarted(a1)
      || (PnPDeviceState = a1->PnPDeviceState, ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0)
      || PnPDeviceState == NdisPnPDeviceStopped )
    {
      v8 = 0;
      goto LABEL_60;
    }
    Paths = a1->BindPaths->Paths;
    v2->BindDeviceName = &a1->MiniportName;
    v2->RootDeviceName = Paths;
    RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
    Source = *Paths;
    v11 = Source;
    Source.MaximumLength -= ndisDeviceStr.Length;
    Source.Length = _mm_cvtsi128_si32((__m128i)v11) - ndisDeviceStr.Length;
    v12 = v2->Name.Length - ndisDeviceStr.Length;
    Source.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
    v13 = Paths->Length + DestinationString.Length + v12 + 2;
    Destination.Length = 0;
    Destination.MaximumLength = v13;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x2020444Eu);
    Destination.Buffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      v5 = 0;
      goto LABEL_59;
    }
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlCopyUnicodeString(&Destination, &v2->Name);
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    MajorNdisVersion = v2->MajorNdisVersion;
    LOBYTE(v46[0]) = -122;
    if ( MajorNdisVersion > 6u )
      goto LABEL_14;
    if ( MajorNdisVersion != 6 )
      goto LABEL_85;
    if ( v2->MinorNdisVersion >= 0x1Eu )
    {
LABEL_14:
      v16 = 4;
      v17 = 312;
      goto LABEL_15;
    }
    if ( v2->MinorNdisVersion >= 0x14u )
    {
      v16 = 3;
      v17 = 280;
      goto LABEL_15;
    }
    if ( v2->MinorNdisVersion )
    {
      v16 = 2;
      v17 = 256;
    }
    else
    {
LABEL_85:
      v16 = 1;
      v17 = 248;
    }
LABEL_15:
    WORD1(v46[0]) = v17;
    BYTE1(v46[0]) = v16;
    v46[1] = &Destination;
    v46[3] = a1->PhysicalDeviceObject;
    v18 = a1->MacOptions & 0x80000001;
    v46[2] = Paths;
    v46[30] = &a1->MiniportName;
    if ( v18 == -2147483647 )
      LODWORD(v46[4]) = 3;
    else
      LODWORD(v46[4]) = a1->MediaType;
    HighestFilter = a1->HighestFilter;
    if ( HighestFilter )
    {
      v46[6] = HighestFilter->XmitLinkSpeedIndicateUp;
      v46[8] = HighestFilter->RcvLinkSpeedIndicateUp;
      LODWORD(v46[9]) = HighestFilter->MediaConnectStateIndicateUp;
      MediaDuplexStateIndicateUp = HighestFilter->MediaDuplexStateIndicateUp;
    }
    else
    {
      IfBlock = a1->IfBlock;
      v46[6] = a1->XmitLinkSpeed;
      v46[8] = a1->RcvLinkSpeed;
      LODWORD(v46[9]) = IfBlock->MediaConnectState;
      MediaDuplexStateIndicateUp = IfBlock->MediaDuplexState;
    }
    HIDWORD(v46[9]) = MediaDuplexStateIndicateUp;
    HIDWORD(v46[4]) = a1->TopFilterRestartAttributes.MtuSize;
    v46[5] = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
    v46[7] = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
    LODWORD(v46[10]) = a1->TopFilterRestartAttributes.LookaheadSize;
    v46[12] = *(_QWORD *)&a1->TopFilterRestartAttributes.SupportedPacketFilters;
    HIDWORD(v46[17]) = a1->PhysicalMediumType;
    v46[18] = &a1->TopRecvScaleCapabilities;
    if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && v2->MinorNdisVersion >= 0x14u )
      v46[33] = &a1->PMAdvertisedCapabilities;
    else
      v46[11] = &a1->PMCapabilities61;
    Offload = a1->Offload;
    if ( Offload )
    {
      if ( Offload->SupportsTopOffload == 1 )
        v46[28] = &Offload->TopCapabilities;
      if ( Offload->SupportsTopTcpConnectionOffload == 1 )
        v46[29] = &Offload->TopTcpConnectionOffloadCapabilities;
    }
    HDSplitCurrentConfig = (_NDIS_HD_SPLIT_CURRENT_CONFIG *)v46[31];
    if ( a1->HDSplitCurrentConfig )
      HDSplitCurrentConfig = a1->HDSplitCurrentConfig;
    TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
    v46[31] = HDSplitCurrentConfig;
    v24 = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)v46[32];
    if ( TopReceiveFilterCurrentCapabilities )
      v24 = TopReceiveFilterCurrentCapabilities;
    TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
    v46[32] = v24;
    v26 = (_NDIS_NIC_SWITCH_CAPABILITIES *)v46[34];
    if ( TopNicSwitchCurrentCapabilities )
      v26 = TopNicSwitchCurrentCapabilities;
    v46[34] = v26;
    if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && v2->MinorNdisVersion >= 0x1Eu )
    {
      NDKBlock = ndisGetNDKBlock(a1);
      if ( NDKBlock )
      {
        v37 = *((_BYTE *)NDKBlock + 24);
        v46[36] = (char *)NDKBlock + 32;
        LOBYTE(v46[35]) = v37;
      }
      else
      {
        LOBYTE(v46[35]) = 0;
        v46[36] = 0LL;
      }
    }
    if ( (unsigned __int8)v16 >= 4u )
    {
      if ( a1->SriovCurrentCapabilities )
      {
        v46[37] = a1->SriovCurrentCapabilities;
        if ( (unsigned int)ndisIovGetNicSwitchList((__int64)a1, &v46[38]) )
          goto LABEL_74;
      }
    }
    v28 = a1->IfBlock;
    LOWORD(v46[13]) = v28->ifPhysAddress.Length;
    memmove((char *)&v46[13] + 2, v28->ifPhysAddress.Address, LOWORD(v46[13]));
    ndisIfQueryBindingMiniportIfIndex(
      (_DWORD)a1,
      (unsigned int)&v46[20],
      (unsigned int)&v46[19],
      (unsigned int)&v46[22],
      (__int64)&v46[21]);
    v29 = a1->IfBlock;
    HIDWORD(v46[22]) = a1->TopFilterRestartAttributes.AccessType;
    LODWORD(v46[23]) = v29->DirectionType;
    HIDWORD(v46[23]) = a1->TopFilterRestartAttributes.ConnectionType;
    LOWORD(v46[24]) = v29->ifType;
    BYTE2(v46[24]) = v29->ifConnectorPresent;
    v46[26] = *(_QWORD *)&a1->TopFilterRestartAttributes.DataBackFillSize;
    LODWORD(v46[27]) = a1->TopFilterRestartAttributes.MacOptions;
    HIDWORD(v46[27]) = v29->CompartmentId;
    if ( (unsigned int)ndisGetPortList((__int64)a1, &v46[25]) )
    {
      ExFreePoolWithTag(Destination.Buffer, 0);
LABEL_74:
      v5 = 0;
LABEL_59:
      p_Mutex = &v2->Mutex;
      goto LABEL_60;
    }
    *(_QWORD *)&BugCheckParameter3[0].Header.Lock = 0LL;
    BugCheckParameter3[0].Header.WaitListHead.Flink = (_LIST_ENTRY *)v2;
    BugCheckParameter3[1].Header.WaitListHead = (_LIST_ENTRY)Destination;
    *(_QWORD *)&BugCheckParameter3[1].Header.Lock = a1;
    *(_QWORD *)&BugCheckParameter3[2].Header.Lock = Paths;
    BugCheckParameter3[0].Header.WaitListHead.Blink = 0LL;
    KeInitializeEvent(&BugCheckParameter3[4], NotificationEvent, 0);
    v2->BindingAdapter = a1;
    v8 = 0;
    if ( (unsigned __int8)byte_1C008370D >= 4u )
      WPP_SF_q(0x59u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, (__int64)v2);
    v30 = v2->BindAdapterHandlerEx(v2->ProtocolDriverContext, BugCheckParameter3, (_NDIS_BIND_PARAMETERS *)v46);
    Blink = v30;
    if ( (unsigned __int8)byte_1C008370D >= 4u )
      WPP_SF_qD(0x5Au, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, (__int64)v2, v30);
    if ( Blink == 259 )
    {
      KeWaitForSingleObject(&BugCheckParameter3[4], Executive, 0, 0, 0LL);
      Blink = (unsigned int)BugCheckParameter3[3].Header.WaitListHead.Blink;
    }
    if ( Blink )
    {
LABEL_54:
      ExFreePoolWithTag(Destination.Buffer, 0);
      if ( (unsigned __int8)byte_1C008370D >= 4u )
      {
        LODWORD(Timeout) = Blink;
        WPP_SF_ZZL(0x1Cu, v32, (__int64 *)&v2->Name, (__int64 *)a1->pAdapterInstanceName, Timeout);
      }
      if ( (Microsoft_Windows_NDISEnableBits & 0x200) != 0 )
        Template_jqxzq(
          v33,
          &ProtocolBindStatus,
          &a1->InterfaceGuid,
          (unsigned __int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          v2->Name.Buffer,
          Blink);
      v5 = v40;
      goto LABEL_59;
    }
    if ( BugCheckParameter3[0].Header.WaitListHead.Blink )
    {
      if ( !ndisReferenceOpenByHandle((struct _NDIS_OPEN_BLOCK *)BugCheckParameter3[0].Header.WaitListHead.Blink, 2u) )
        KeBugCheckEx(
          0x7Cu,
          0x16uLL,
          (ULONG_PTR)v2,
          (ULONG_PTR)BugCheckParameter3,
          (ULONG_PTR)BugCheckParameter3[0].Header.WaitListHead.Blink);
      v40 = 1;
      ndisIndicateInitialStateToBinding((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink);
    }
    if ( MiniportSupportsReceiveThrottle(a1) )
    {
LABEL_53:
      ndisNotifyWmiBindUnbind((__int64)a1, (__int64)v2, 1u);
      goto LABEL_54;
    }
    if ( v2->IsIPv4 == 1 )
    {
      v38 = 0;
    }
    else if ( v2->IsIPv6 == 1 )
    {
      v38 = 1;
    }
    else
    {
      if ( v2->IsNdisTest6 != 1 )
        goto LABEL_53;
      v38 = 2;
    }
    ndisBindUnbindPeriodicReceives(v31, v38);
    goto LABEL_53;
  }
  Blink = -1073741823;
LABEL_66:
  if ( v46[25] )
    ExFreePoolWithTag((PVOID)v46[25], 0);
  if ( v46[38] )
    ExFreePoolWithTag((PVOID)v46[38], 0);
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_qq(0x1Du, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, a1, v2);
  return Blink;
}

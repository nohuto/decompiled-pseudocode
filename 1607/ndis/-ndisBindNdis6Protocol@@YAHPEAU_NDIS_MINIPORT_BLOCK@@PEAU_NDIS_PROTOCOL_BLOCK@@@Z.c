/*
 * XREFs of ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A8C44
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00A2EE4 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0010DE8 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReferenceProtocol @ 0x1C0015C20 (ndisReferenceProtocol.c)
 *     ndisDereferenceProtocol @ 0x1C00160E0 (ndisDereferenceProtocol.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0016864 (ndisIndicateInitialStateToBinding.c)
 *     ndisGetPortList @ 0x1C0017F28 (ndisGetPortList.c)
 *     ndisIsMiniportStarted @ 0x1C00180A4 (ndisIsMiniportStarted.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00184DC (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceOpenByHandle @ 0x1C0018A98 (ndisReferenceOpenByHandle.c)
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018D20 (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004EF18 (ndisBindUnbindPeriodicReceives.c)
 *     Template_jqxzq @ 0x1C0062EEC (Template_jqxzq.c)
 *     ndisIovGetNicSwitchList @ 0x1C00688D0 (ndisIovGetNicSwitchList.c)
 *     WPP_SF_ZZL @ 0x1C006F7C8 (WPP_SF_ZZL.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00A398C (ndisIfQueryBindingMiniportIfIndex.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00A92DC (ndisNotifyWmiBindUnbind.c)
 *     ndisMDoMiniportOp @ 0x1C00AFB04 (ndisMDoMiniportOp.c)
 *     ndisNotifyBindFailure @ 0x1C00B02F8 (ndisNotifyBindFailure.c)
 */

__int64 __fastcall ndisBindNdis6Protocol(struct _NDIS_MINIPORT_BLOCK *a1, _NDIS_PROTOCOL_BLOCK *this)
{
  int v4; // edx
  unsigned int Blink; // esi
  char v6; // r12
  __int64 v7; // rdx
  struct _KMUTANT *p_Mutex; // r15
  char v9; // r13
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _UNICODE_STRING *Paths; // r12
  UNICODE_STRING v12; // xmm0
  __int16 v13; // ax
  unsigned __int16 v14; // ax
  wchar_t *PoolWithTag; // rax
  unsigned __int8 MajorNdisVersion; // r8
  char v17; // dl
  __int16 v18; // ax
  unsigned int v19; // eax
  _NDIS_FILTER_BLOCK *HighestFilter; // rcx
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v25; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *v27; // rax
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  _NDIS_IF_BLOCK *v29; // rdx
  _NDIS_IF_BLOCK *v30; // rcx
  int v31; // eax
  struct _NDIS_MINIPORT_BLOCK *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  bool v36; // zf
  _NDIS_IF_BLOCK *IfBlock; // rcx
  char v39; // cl
  int v40; // edx
  char v41; // [rsp+40h] [rbp-C0h]
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-A8h] BYREF
  char v44; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _KEVENT BugCheckParameter3[6]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v47[40]; // [rsp+110h] [rbp+10h] BYREF

  memset(v47, 0, 0x138uLL);
  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  Blink = 0;
  v41 = 0;
  v6 = 0;
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_qq(0x1Au, &WPP_9d58b71ad31e34326812744187916088_Traceguids, a1, this);
  if ( a1->MajorNdisVersion < 6u && (a1->LinkStateIndicationFlags & 1) == 0 )
  {
    LOBYTE(v4) = 1;
    ndisMDoMiniportOp((_DWORD)a1, v4, 65812, (unsigned int)&v44, 4, 1, 1);
  }
  if ( ndisReferenceProtocol((__int64)this, 8u) )
  {
    if ( !a1->EthDB )
    {
      Blink = -1073741823;
      if ( (unsigned __int8)byte_1C00895CD >= 2u )
        WPP_SF_qq(0x1Bu, &WPP_9d58b71ad31e34326812744187916088_Traceguids, a1, this);
      goto LABEL_61;
    }
    p_Mutex = &this->Mutex;
    v9 = 1;
    KeWaitForSingleObject(&this->Mutex, Executive, 0, 0, 0LL);
    ++this->MutexOwnerCount;
    this->MutexOwnerThread = KeGetCurrentThread();
    this->MutexOwner = 3932863;
    if ( this->Ref.Closing )
    {
LABEL_56:
      v36 = this->MutexOwnerCount-- == 1;
      this->MutexOwner = 0;
      if ( v36 )
        this->MutexOwnerThread = 0LL;
      KeReleaseMutex(p_Mutex, 0);
      if ( v6 )
      {
        ndisMDereferenceOpenUnlocked((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink, 2u);
        BugCheckParameter3[0].Header.WaitListHead.Blink = 0LL;
      }
      if ( v9 && Blink )
        ndisNotifyBindFailure(a1, this);
LABEL_61:
      ndisDereferenceProtocol(this, v7, 8u);
      goto LABEL_62;
    }
    if ( !ndisIsMiniportStarted(a1)
      || (PnPDeviceState = a1->PnPDeviceState, ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0)
      || PnPDeviceState == NdisPnPDeviceStopped )
    {
      v9 = 0;
      goto LABEL_56;
    }
    Paths = a1->BindPaths->Paths;
    this->BindDeviceName = &a1->MiniportName;
    this->RootDeviceName = Paths;
    RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
    Source = *Paths;
    v12 = Source;
    Source.MaximumLength -= ndisDeviceStr.Length;
    Source.Length = _mm_cvtsi128_si32((__m128i)v12) - ndisDeviceStr.Length;
    v13 = this->Name.Length - ndisDeviceStr.Length;
    Source.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
    v14 = Paths->Length + DestinationString.Length + v13 + 2;
    Destination.Length = 0;
    Destination.MaximumLength = v14;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x2020444Eu);
    Destination.Buffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = 0;
      goto LABEL_55;
    }
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlCopyUnicodeString(&Destination, &this->Name);
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    MajorNdisVersion = this->MajorNdisVersion;
    LOBYTE(v47[0]) = -122;
    if ( MajorNdisVersion > 6u )
      goto LABEL_14;
    if ( MajorNdisVersion == 6 )
    {
      if ( this->MinorNdisVersion >= 0x1Eu )
      {
LABEL_14:
        v17 = 4;
        v18 = 312;
LABEL_15:
        WORD1(v47[0]) = v18;
        BYTE1(v47[0]) = v17;
        v47[1] = &Destination;
        v47[3] = a1->PhysicalDeviceObject;
        v19 = a1->MacOptions & 0x80000001;
        v47[2] = Paths;
        v47[30] = &a1->MiniportName;
        if ( v19 == -2147483647 )
          LODWORD(v47[4]) = 3;
        else
          LODWORD(v47[4]) = a1->MediaType;
        HighestFilter = a1->HighestFilter;
        if ( HighestFilter )
        {
          v47[6] = HighestFilter->XmitLinkSpeedIndicateUp;
          v47[8] = HighestFilter->RcvLinkSpeedIndicateUp;
          LODWORD(v47[9]) = HighestFilter->MediaConnectStateIndicateUp;
          MediaDuplexStateIndicateUp = HighestFilter->MediaDuplexStateIndicateUp;
        }
        else
        {
          IfBlock = a1->IfBlock;
          v47[6] = a1->XmitLinkSpeed;
          v47[8] = a1->RcvLinkSpeed;
          LODWORD(v47[9]) = IfBlock->MediaConnectState;
          MediaDuplexStateIndicateUp = IfBlock->MediaDuplexState;
        }
        HIDWORD(v47[9]) = MediaDuplexStateIndicateUp;
        HIDWORD(v47[4]) = a1->TopFilterRestartAttributes.MtuSize;
        v47[5] = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        v47[7] = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        LODWORD(v47[10]) = a1->TopFilterRestartAttributes.LookaheadSize;
        v47[12] = *(_QWORD *)&a1->TopFilterRestartAttributes.SupportedPacketFilters;
        HIDWORD(v47[17]) = a1->PhysicalMediumType;
        v47[18] = &a1->TopRecvScaleCapabilities;
        if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && this->MinorNdisVersion >= 0x14u )
          v47[33] = &a1->PMAdvertisedCapabilities;
        else
          v47[11] = &a1->PMCapabilities61;
        Offload = a1->Offload;
        if ( Offload )
        {
          if ( Offload->SupportsTopOffload == 1 )
            v47[28] = &Offload->TopCapabilities;
          if ( Offload->SupportsTopTcpConnectionOffload == 1 )
            v47[29] = &Offload->TopTcpConnectionOffloadCapabilities;
        }
        HDSplitCurrentConfig = (_NDIS_HD_SPLIT_CURRENT_CONFIG *)v47[31];
        if ( a1->HDSplitCurrentConfig )
          HDSplitCurrentConfig = a1->HDSplitCurrentConfig;
        TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
        v47[31] = HDSplitCurrentConfig;
        v25 = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)v47[32];
        if ( TopReceiveFilterCurrentCapabilities )
          v25 = TopReceiveFilterCurrentCapabilities;
        TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
        v47[32] = v25;
        v27 = (_NDIS_NIC_SWITCH_CAPABILITIES *)v47[34];
        if ( TopNicSwitchCurrentCapabilities )
          v27 = TopNicSwitchCurrentCapabilities;
        v47[34] = v27;
        if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && this->MinorNdisVersion >= 0x1Eu )
        {
          NDKBlock = ndisGetNDKBlock(a1);
          if ( NDKBlock )
          {
            v39 = *((_BYTE *)NDKBlock + 24);
            v47[36] = (char *)NDKBlock + 32;
            LOBYTE(v47[35]) = v39;
          }
          else
          {
            LOBYTE(v47[35]) = 0;
            v47[36] = 0LL;
          }
        }
        if ( (unsigned __int8)v17 < 4u
          || !a1->SriovCurrentCapabilities
          || (v47[37] = a1->SriovCurrentCapabilities, !(unsigned int)ndisIovGetNicSwitchList((__int64)a1, &v47[38])) )
        {
          v29 = a1->IfBlock;
          LOWORD(v47[13]) = v29->ifPhysAddress.Length;
          memmove((char *)&v47[13] + 2, v29->ifPhysAddress.Address, LOWORD(v47[13]));
          ndisIfQueryBindingMiniportIfIndex((__int64)a1, &v47[20], &v47[19], &v47[22], &v47[21]);
          v30 = a1->IfBlock;
          HIDWORD(v47[22]) = a1->TopFilterRestartAttributes.AccessType;
          LODWORD(v47[23]) = v30->DirectionType;
          HIDWORD(v47[23]) = a1->TopFilterRestartAttributes.ConnectionType;
          LOWORD(v47[24]) = v30->ifType;
          BYTE2(v47[24]) = v30->ifConnectorPresent;
          v47[26] = *(_QWORD *)&a1->TopFilterRestartAttributes.DataBackFillSize;
          LODWORD(v47[27]) = a1->TopFilterRestartAttributes.MacOptions;
          HIDWORD(v47[27]) = v30->CompartmentId;
          if ( !(unsigned int)ndisGetPortList((__int64)a1, &v47[25]) )
          {
            *(_QWORD *)&BugCheckParameter3[0].Header.Lock = 0LL;
            BugCheckParameter3[0].Header.WaitListHead.Flink = (_LIST_ENTRY *)this;
            BugCheckParameter3[1].Header.WaitListHead = (_LIST_ENTRY)Destination;
            *(_QWORD *)&BugCheckParameter3[1].Header.Lock = a1;
            *(_QWORD *)&BugCheckParameter3[2].Header.Lock = Paths;
            BugCheckParameter3[0].Header.WaitListHead.Blink = 0LL;
            KeInitializeEvent(&BugCheckParameter3[4], NotificationEvent, 0);
            this->BindingAdapter = a1;
            v9 = 0;
            if ( (unsigned __int8)byte_1C00895CD >= 4u )
              WPP_SF_q(0x59u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)this);
            v31 = this->BindAdapterHandlerEx(
                    this->ProtocolDriverContext,
                    BugCheckParameter3,
                    (_NDIS_BIND_PARAMETERS *)v47);
            Blink = v31;
            if ( (unsigned __int8)byte_1C00895CD >= 4u )
              WPP_SF_qD(0x5Au, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)this, v31);
            if ( Blink == 259 )
            {
              KeWaitForSingleObject(&BugCheckParameter3[4], Executive, 0, 0, 0LL);
              Blink = (unsigned int)BugCheckParameter3[3].Header.WaitListHead.Blink;
            }
            if ( Blink )
              goto LABEL_50;
            if ( BugCheckParameter3[0].Header.WaitListHead.Blink )
            {
              if ( !ndisReferenceOpenByHandle((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink, 2u) )
                KeBugCheckEx(
                  0x7Cu,
                  0x16uLL,
                  (ULONG_PTR)this,
                  (ULONG_PTR)BugCheckParameter3,
                  (ULONG_PTR)BugCheckParameter3[0].Header.WaitListHead.Blink);
              v41 = 1;
              ndisIndicateInitialStateToBinding((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink);
            }
            if ( MiniportSupportsReceiveThrottle(a1) )
            {
LABEL_49:
              LOBYTE(v33) = 1;
              ndisNotifyWmiBindUnbind(a1, this, v33);
LABEL_50:
              ExFreePoolWithTag(Destination.Buffer, 0);
              if ( (unsigned __int8)byte_1C00895CD >= 4u )
                WPP_SF_ZZL(0x1Cu, v34, &this->Name.Length);
              if ( (Microsoft_Windows_NDISEnableBits & 0x200) != 0 )
                Template_jqxzq(
                  v35,
                  &ProtocolBindStatus,
                  &a1->InterfaceGuid,
                  (unsigned __int64)&a1->InterfaceGuid,
                  a1->IfIndex,
                  a1->NetLuid.Value,
                  this->Name.Buffer,
                  Blink);
              v6 = v41;
              goto LABEL_55;
            }
            if ( this->IsIPv4 == 1 )
            {
              v40 = 0;
            }
            else if ( this->IsIPv6 == 1 )
            {
              v40 = 1;
            }
            else
            {
              if ( this->IsNdisTest6 != 1 )
                goto LABEL_49;
              v40 = 2;
            }
            ndisBindUnbindPeriodicReceives(v32, v40);
            goto LABEL_49;
          }
          ExFreePoolWithTag(Destination.Buffer, 0);
        }
        v6 = 0;
LABEL_55:
        p_Mutex = &this->Mutex;
        goto LABEL_56;
      }
      if ( this->MinorNdisVersion >= 0x14u )
      {
        v17 = 3;
        v18 = 280;
        goto LABEL_15;
      }
      if ( this->MinorNdisVersion )
      {
        v17 = 2;
        v18 = 256;
        goto LABEL_15;
      }
    }
    v17 = 1;
    v18 = 248;
    goto LABEL_15;
  }
  Blink = -1073741823;
LABEL_62:
  if ( v47[25] )
    ExFreePoolWithTag((PVOID)v47[25], 0);
  if ( v47[38] )
    ExFreePoolWithTag((PVOID)v47[38], 0);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_qq(0x1Du, &WPP_9d58b71ad31e34326812744187916088_Traceguids, a1, this);
  return Blink;
}

/*
 * XREFs of ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001C1B0
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0061D5C (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002A60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisReleaseRWLock @ 0x1C0008FC0 (NdisReleaseRWLock.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C00094A0 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0009770 (ndisSortNetBufferLists.c)
 *     NdisAcquireRWLockRead @ 0x1C000AB30 (NdisAcquireRWLockRead.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000CCF0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C002028C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     ndisIndicateAllNetBufferLists @ 0x1C0022618 (ndisIndicateAllNetBufferLists.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00228B4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0022A48 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisIndicateToPmodeOpens @ 0x1C0022E84 (ndisIndicateToPmodeOpens.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0022F44 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnPeriodicReceives @ 0x1C00230E4 (ndisReturnPeriodicReceives.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00231B0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00231FC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferListsWithLock(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        int NewIrql)
{
  char v5; // r13
  struct _NDIS_FILTER_BLOCK *v7; // r15
  unsigned __int64 RcvLinkSpeedIndicateUp; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  _DWORD *v12; // rdi
  struct _NET_BUFFER_LIST *v13; // r14
  unsigned int Number; // esi
  _LIST_ENTRY *Blink; // r8
  __int64 v16; // rdx
  __int64 Flink_low; // r9
  __int64 v18; // rcx
  char *v19; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rcx
  _QWORD *v21; // r13
  _QWORD *v22; // rsi
  __int64 v23; // rdx
  int v24; // r8d
  __int64 PoolWithTag; // rax
  void (__fastcall *v26)(void *, _NET_BUFFER_LIST *); // rsi
  int v27; // r12d
  unsigned int v28; // r15d
  __int64 v29; // r14
  struct _NET_BUFFER_LIST *v30; // rdx
  unsigned int v31; // r9d
  int v32; // r12d
  unsigned int v33; // r13d
  unsigned int v34; // r14d
  unsigned int v35; // esi
  __int64 v36; // r8
  int v37; // r14d
  __int64 v38; // rdx
  BOOL v39; // esi
  unsigned int v40; // eax
  struct _NET_BUFFER_LIST *v41; // rcx
  void (__fastcall *TcpOffloadEventHandler)(void *, unsigned int, unsigned int); // r14
  void (*v43)(void); // r10
  void (__fastcall *TcpOffloadDisconnectCompleteHandler)(void *, _NET_BUFFER_LIST *); // r11
  bool v45; // zf
  unsigned int v46; // ecx
  struct _NET_BUFFER_LIST **v47; // r15
  void (__fastcall *v48)(void *, unsigned int, unsigned int); // r13
  __int64 v49; // rsi
  char v50; // r12
  struct _NET_BUFFER_LIST *v51; // r9
  void (*v52)(void); // rdi
  void (__fastcall *v53)(void *, _NET_BUFFER_LIST *); // r13
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v55; // r9
  struct _NET_BUFFER_LIST *v56; // rbx
  KSPIN_LOCK *v57; // rcx
  signed __int32 v58[6]; // [rsp+8h] [rbp-D1h] BYREF
  unsigned int v59; // [rsp+28h] [rbp-B1h]
  unsigned int v60; // [rsp+30h] [rbp-A9h]
  unsigned int ChildRefCount; // [rsp+38h] [rbp-A1h]
  struct _LOCK_STATE_EX LockState; // [rsp+48h] [rbp-91h] BYREF
  int v63; // [rsp+4Ch] [rbp-8Dh]
  int v64; // [rsp+50h] [rbp-89h]
  unsigned int v65; // [rsp+54h] [rbp-85h]
  void (__fastcall *v66)(void *, _NET_BUFFER_LIST *); // [rsp+58h] [rbp-81h]
  void (*v67)(void); // [rsp+60h] [rbp-79h]
  unsigned int v68; // [rsp+68h] [rbp-71h]
  unsigned __int64 v69; // [rsp+70h] [rbp-69h]
  char *v70; // [rsp+78h] [rbp-61h]
  struct NDIS_PCW_CONTEXT v71; // [rsp+80h] [rbp-59h] BYREF
  _QWORD v72[4]; // [rsp+98h] [rbp-41h] BYREF
  char v73[8]; // [rsp+B8h] [rbp-21h] BYREF
  void (__fastcall *v74)(void *, unsigned int, unsigned int); // [rsp+C0h] [rbp-19h]
  void (__fastcall *v75)(void *, _NET_BUFFER_LIST *); // [rsp+C8h] [rbp-11h]
  void (*v76)(void); // [rsp+D0h] [rbp-9h]
  struct _NET_BUFFER_LIST *v77; // [rsp+D8h] [rbp-1h]
  int v78; // [rsp+E0h] [rbp+7h]
  __int64 v79; // [rsp+E4h] [rbp+Bh]
  BOOL v80; // [rsp+ECh] [rbp+13h]
  KIRQL NewIrqla; // [rsp+158h] [rbp+7Fh]

  v5 = NewIrql;
  LockState.Flags = 0;
  *(_WORD *)&LockState.OldIrql = 515;
  v7 = a1;
  RcvLinkSpeedIndicateUp = a1->RcvLinkSpeedIndicateUp;
  v69 = RcvLinkSpeedIndicateUp;
  v10 = NewIrql & 1;
  v64 = NewIrql & 1;
  if ( (NewIrql & 1) != 0 )
  {
    v11 = *(_QWORD *)(RcvLinkSpeedIndicateUp + 288);
    LODWORD(v10) = KeGetPcr()->Prcb.Number;
    LockState.Flags = 1;
    v12 = *(_DWORD **)(v11 + 8 * v10 + 32);
    ++*v12;
    _InterlockedOr(v58, 0);
    if ( !KeTestSpinLock((PKSPIN_LOCK)(v11 + 8)) && *v12 == 1 && *(struct _KTHREAD **)(v11 + 16) != KeGetCurrentThread() )
    {
      *v12 = 0;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 8));
      ++*v12;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v11 + 8));
    }
    LockState.LockState = 3;
  }
  else
  {
    NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(RcvLinkSpeedIndicateUp + 288), &LockState, 0);
  }
  v13 = 0LL;
  v68 = 0;
  LOBYTE(v63) = 0;
  if ( (v64 || KeGetCurrentIrql() == 2)
    && WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink
    && (Number = KeGetPcr()->Prcb.Number,
        Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink,
        v16 = 131LL * Number,
        v68 = Number,
        Flink_low = LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[v16].Flink),
        (unsigned int)Flink_low < 3) )
  {
    LOBYTE(v63) = 1;
    v18 = v16 * 16 + 696 * Flink_low;
    v19 = (char *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Blink + v18;
    LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[v16].Flink) = Flink_low + 1;
    v70 = (char *)&Blink->Blink + v18;
  }
  else
  {
    PoolWithTag = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
    v70 = (char *)PoolWithTag;
    v19 = (char *)PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( (unsigned __int8)byte_1C008530B >= 2u )
        PoolWithTag = WPP_SF_(10LL, &WPP_abea78df5d3bc502c1918c83347dcce9_Traceguids);
      goto LABEL_32;
    }
  }
  Alignment = a2;
  v21 = (_QWORD *)v7->RcvLinkSpeedIndicateUp;
  v19[692] = 0;
  LODWORD(v67) = NewIrql & 2;
  if ( (NewIrql & 2) == 0 )
  {
    do
    {
      v13 = Alignment;
      Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
  v22 = (_QWORD *)v21[41];
  if ( v22 && *(_BYTE *)(v22[3] + 56LL) >= 6u )
  {
    ndisMIndicateNetBufferListsToOpen(v22, a2, a3, a4, NewIrql);
    *((_QWORD *)v19 + 8) = 0LL;
    *((_DWORD *)v19 + 20) = 0;
LABEL_31:
    v5 = NewIrql;
    goto LABEL_32;
  }
  *((_DWORD *)v19 + 11) = a4;
  *((_QWORD *)v19 + 3) = a2;
  *((_QWORD *)v19 + 1) = v21;
  *((_DWORD *)v19 + 4) = NewIrql;
  *(_QWORD *)v19 = v7;
  *((_QWORD *)v19 + 4) = v13;
  *((_DWORD *)v19 + 10) = a3;
  ndisSortNetBufferLists((__int64 *)v19);
  HIDWORD(PoolWithTag) = 0;
  if ( *((_QWORD *)v19 + 8) || *((_DWORD *)v19 + 172) )
  {
    if ( !*v21 || a3 )
    {
      v24 = 1;
      v19[692] = 1;
    }
    else
    {
      PoolWithTag = ndisIndicateXlatedPacketsToNdis5Protocols(v19);
      v24 = 1;
    }
    if ( !v22 )
    {
      v26 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))v21[1];
      if ( v26 )
      {
        v27 = *((_DWORD *)v19 + 4) | 2;
        v28 = *((_DWORD *)v19 + 172);
        do
        {
          v29 = 0LL;
          v66 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)v26 + 53);
          do
          {
            v30 = *(struct _NET_BUFFER_LIST **)&v19[40 * v29 + 64];
            v31 = *(_DWORD *)&v19[40 * v29 + 80];
            v29 = (unsigned int)(v29 + 1);
            if ( v30 )
            {
              ndisMIndicateNetBufferListsToOpen(v26, v30, *((_DWORD *)v19 + 10), v31, v27);
              v24 = 1;
            }
          }
          while ( (unsigned int)v29 <= v28 );
          HIDWORD(PoolWithTag) = HIDWORD(v66);
          v26 = v66;
        }
        while ( v66 );
        v7 = a1;
      }
      v23 = v21[2];
      if ( v23 )
      {
        if ( (_DWORD)v67 )
        {
          PoolWithTag = ndisIndicateAllNetBufferLists(v19);
        }
        else
        {
          v32 = *((_DWORD *)v19 + 4);
          v33 = *((_DWORD *)v19 + 10);
          v34 = *((_DWORD *)v19 + 172);
          if ( *(_DWORD *)(*(_QWORD *)v19 + 2252LL) )
            ndisIndicateToPmodeOpens(v19);
          HIDWORD(PoolWithTag) = 0;
          v35 = 1;
          if ( v34 )
          {
            do
            {
              v36 = v35++;
              ndisMIndicateNetBufferListsToOpen(
                *(_QWORD **)&v19[40 * v36 + 56],
                *(struct _NET_BUFFER_LIST **)&v19[40 * v36 + 64],
                v33,
                *(_DWORD *)&v19[40 * v36 + 80],
                v32);
            }
            while ( v35 <= v34 );
            v7 = a1;
          }
        }
      }
    }
    goto LABEL_31;
  }
  v5 = NewIrql;
LABEL_32:
  if ( (v5 & 2) != 0 )
    goto LABEL_56;
  if ( v19 )
  {
    if ( v19[692] )
    {
      a2 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v19 + 8);
      goto LABEL_36;
    }
LABEL_56:
    v37 = v64;
    goto LABEL_37;
  }
LABEL_36:
  v37 = v64;
  if ( a2 )
  {
    v71.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)v7->FilterInstanceName._p;
    v71.DatapathEventsMask = (unsigned int)v7->FilterFriendlyName;
    v39 = v64 != 0;
    v40 = *(_DWORD *)&v7->Ref.ReferenceCount;
    v41 = a2;
    v71.CurrentCpu = -1;
    v71.DatapathCyclesMask = v40;
    NewIrqla = 2;
    do
    {
      v41->Flags = v41->Flags & 0xFFFFFFF4 | 8;
      v41 = (struct _NET_BUFFER_LIST *)v41->Link.Alignment;
    }
    while ( v41 );
    PoolWithTag = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      PoolWithTag = ndisMarkNetBufferListCorrelationIdsAsUsed(a2, v23, v24);
    if ( LODWORD(v7[3].NextReturnNetBufferListsContext) )
    {
      PoolWithTag = ndisReturnPeriodicReceives(v7, a2);
      a2 = (struct _NET_BUFFER_LIST *)PoolWithTag;
    }
    if ( a2 )
    {
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          a2,
          0LL,
          (struct NDIS_NBL_TRACKER_HANDLE__ *)v7[2].TcpOffloadForwardCompleteHandler,
          0x87u,
          v39);
      if ( (v71.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( !v39 )
          NewIrqla = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v71, 5u);
      }
      TcpOffloadEventHandler = v7[2].TcpOffloadEventHandler;
      v43 = *(void (**)(void))&v7[2].IfIndex;
      TcpOffloadDisconnectCompleteHandler = v7[2].TcpOffloadDisconnectCompleteHandler;
      v67 = v43;
      v45 = *(_BYTE *)TcpOffloadEventHandler == 17;
      v66 = TcpOffloadDisconnectCompleteHandler;
      if ( v45 )
        goto LABEL_54;
      if ( !ndisIterativeDataPathDisabled && (v39 || KeGetCurrentIrql() == 2) )
      {
        v46 = KeGetPcr()->Prcb.Number;
        v47 = (struct _NET_BUFFER_LIST **)v72;
        HIDWORD(PoolWithTag) = 0;
        v65 = v46;
        v72[2] = 0LL;
        v72[0] = a2;
        v72[1] = a2;
        a2->Scratch = 0LL;
        a2->ChildRefCount = v39;
        while ( *(_BYTE *)TcpOffloadEventHandler == 5 )
        {
          if ( !*v47 )
            goto LABEL_55;
          v48 = TcpOffloadEventHandler;
          HIDWORD(PoolWithTag) = 0;
          v49 = *((_QWORD *)TcpOffloadEventHandler + 53) + 96LL * v46;
          v50 = *(_BYTE *)(v49 + 88);
          *(_BYTE *)(v49 + 88) = 1;
          v51 = *v47;
          *v47 = 0LL;
          if ( v51 )
          {
            v52 = v67;
            v53 = v66;
            do
            {
              Scratch = (struct _NET_BUFFER_LIST *)v51->Scratch;
              ChildRefCount = v51->ChildRefCount;
              v60 = 0;
              v59 = 0;
              v51->ChildRefCount = 0;
              ndisCallReceiveCompleteHandler(TcpOffloadEventHandler, v52, v53, v51, v59, v60, ChildRefCount);
              v51 = Scratch;
            }
            while ( Scratch );
            v19 = v70;
            v48 = TcpOffloadEventHandler;
            v43 = v67;
            HIDWORD(PoolWithTag) = 0;
            TcpOffloadDisconnectCompleteHandler = v66;
          }
          *(_BYTE *)(v49 + 88) = 0;
          if ( v50 )
          {
            *(_BYTE *)(v49 + 88) = 1;
            break;
          }
          v43 = (void (*)(void))*((_QWORD *)v48 + 66);
          v47 = (struct _NET_BUFFER_LIST **)(v49 + 72);
          TcpOffloadDisconnectCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)v48 + 67);
          TcpOffloadEventHandler = (void (__fastcall *)(void *, unsigned int, unsigned int))*((_QWORD *)TcpOffloadEventHandler
                                                                                            + 69);
          v67 = v43;
          v66 = TcpOffloadDisconnectCompleteHandler;
          v46 = v65;
        }
        v55 = *v47;
        if ( *v47 )
        {
          *v47 = 0LL;
          do
          {
            v56 = (struct _NET_BUFFER_LIST *)v55->Scratch;
            ChildRefCount = v55->ChildRefCount;
            v60 = 0;
            v59 = 0;
            v55->ChildRefCount = 0;
            ndisCallReceiveCompleteHandler(
              TcpOffloadEventHandler,
              v43,
              TcpOffloadDisconnectCompleteHandler,
              v55,
              v59,
              v60,
              ChildRefCount);
            v43 = v67;
            v55 = v56;
            TcpOffloadDisconnectCompleteHandler = v66;
          }
          while ( v56 );
        }
        goto LABEL_55;
      }
      if ( v7->Header.Type != 5 )
      {
LABEL_54:
        PoolWithTag = ((__int64 (__fastcall *)(void (__fastcall *)(void *, _NET_BUFFER_LIST *), struct _NET_BUFFER_LIST *, BOOL))v43)(
                        TcpOffloadDisconnectCompleteHandler,
                        a2,
                        v39);
      }
      else
      {
        v74 = TcpOffloadEventHandler;
        v75 = TcpOffloadDisconnectCompleteHandler;
        v79 = 3LL;
        v76 = v43;
        v77 = a2;
        v78 = 0;
        v80 = v39;
        PoolWithTag = ndisExpandStack(ndisDataPathExpandStackCallback, v73);
        if ( (int)PoolWithTag < 0 )
          ndisQueueStackExpansionFallbackNbls(v7, a2, 0);
      }
LABEL_55:
      if ( (v71.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v71, 5u, 0x12uLL);
        if ( NewIrqla != 2 )
          KeLowerIrql(NewIrqla);
      }
      goto LABEL_56;
    }
  }
LABEL_37:
  if ( (_BYTE)v63 )
  {
    HIDWORD(PoolWithTag) = HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
    --LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[131 * v68].Flink);
  }
  else if ( v19 )
  {
    ExFreePoolWithTag(v19, 0);
  }
  if ( v37 )
  {
    v38 = *(_QWORD *)(v69 + 288);
    if ( LockState.LockState == 3 )
    {
      LODWORD(PoolWithTag) = KeGetPcr()->Prcb.Number;
      --**(_DWORD **)(v38 + 8 * PoolWithTag + 32);
      if ( (LockState.Flags & 1) == 0 && LockState.OldIrql != 2 )
        KeLowerIrql(LockState.OldIrql);
    }
    else if ( LockState.LockState == 4 )
    {
      *(_QWORD *)(v38 + 16) = 0LL;
      v57 = (KSPIN_LOCK *)(v38 + 8);
      if ( (LockState.Flags & 1) != 0 )
        KeReleaseSpinLockFromDpcLevel(v57);
      else
        KeReleaseSpinLock(v57, LockState.OldIrql);
    }
  }
  else
  {
    NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v69 + 288), &LockState);
  }
}

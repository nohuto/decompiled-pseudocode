/*
 * XREFs of ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0021200
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001380 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 * Callees:
 *     ndisIndicateToPmodeOpens @ 0x1C0002178 (ndisIndicateToPmodeOpens.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C00029D0 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0002E60 (ndisSortNetBufferLists.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00040C0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisReleaseRWLock @ 0x1C00046F0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C000E820 (NdisAcquireRWLockRead.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000EF00 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011DA0 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0011DDC (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0025288 (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0048AF4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00526B0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0061CB4 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnPeriodicReceives @ 0x1C006324C (ndisReturnPeriodicReceives.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferListsWithLock(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        int NewIrql)
{
  char v5; // r15
  struct _NDIS_FILTER_BLOCK *v7; // r13
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
  _QWORD *v21; // r15
  _QWORD *v22; // rsi
  __int64 PoolWithTag; // rax
  struct _NET_BUFFER_LIST *v24; // rdx
  __int64 v25; // r8
  void (__fastcall *v26)(void *, _NET_BUFFER_LIST *); // rsi
  int v27; // r12d
  unsigned int v28; // r13d
  __int64 v29; // r14
  unsigned int v30; // r9d
  _QWORD *v31; // rsi
  int v32; // r15d
  unsigned int v33; // r12d
  unsigned int v34; // r14d
  unsigned int v35; // esi
  __int64 v36; // r8
  unsigned int v37; // r13d
  int v38; // r15d
  _QWORD *v39; // r12
  __int64 v40; // r14
  unsigned int v41; // r9d
  int v42; // r14d
  BOOL v43; // esi
  unsigned int v44; // eax
  struct _NET_BUFFER_LIST *v45; // rcx
  void (__fastcall *TcpOffloadEventHandler)(void *, unsigned int, unsigned int); // r14
  void (*v47)(void); // r10
  void (__fastcall *TcpOffloadDisconnectCompleteHandler)(void *, _NET_BUFFER_LIST *); // r11
  bool v49; // zf
  unsigned int v50; // ecx
  struct _NET_BUFFER_LIST **v51; // r15
  void (__fastcall *v52)(void *, unsigned int, unsigned int); // r13
  __int64 v53; // rsi
  char v54; // r12
  struct _NET_BUFFER_LIST *v55; // r9
  void (*v56)(void); // rdi
  void (__fastcall *v57)(void *, _NET_BUFFER_LIST *); // r13
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v59; // r9
  struct _NET_BUFFER_LIST *v60; // rbx
  __int64 v61; // rdx
  KSPIN_LOCK *v62; // rcx
  signed __int32 v63[6]; // [rsp+8h] [rbp-D1h] BYREF
  unsigned int v64; // [rsp+28h] [rbp-B1h]
  unsigned int v65; // [rsp+30h] [rbp-A9h]
  unsigned int ChildRefCount; // [rsp+38h] [rbp-A1h]
  struct _LOCK_STATE_EX LockState; // [rsp+48h] [rbp-91h] BYREF
  int v68; // [rsp+4Ch] [rbp-8Dh]
  int v69; // [rsp+50h] [rbp-89h]
  unsigned int v70; // [rsp+54h] [rbp-85h]
  void (__fastcall *v71)(void *, _NET_BUFFER_LIST *); // [rsp+58h] [rbp-81h]
  void (*v72)(void); // [rsp+60h] [rbp-79h]
  unsigned int v73; // [rsp+68h] [rbp-71h]
  unsigned __int64 v74; // [rsp+70h] [rbp-69h]
  char *v75; // [rsp+78h] [rbp-61h]
  struct NDIS_PCW_CONTEXT v76; // [rsp+80h] [rbp-59h] BYREF
  _QWORD v77[4]; // [rsp+98h] [rbp-41h] BYREF
  char v78[8]; // [rsp+B8h] [rbp-21h] BYREF
  void (__fastcall *v79)(void *, unsigned int, unsigned int); // [rsp+C0h] [rbp-19h]
  void (__fastcall *v80)(void *, _NET_BUFFER_LIST *); // [rsp+C8h] [rbp-11h]
  void (*v81)(void); // [rsp+D0h] [rbp-9h]
  struct _NET_BUFFER_LIST *v82; // [rsp+D8h] [rbp-1h]
  int v83; // [rsp+E0h] [rbp+7h]
  __int64 v84; // [rsp+E4h] [rbp+Bh]
  BOOL v85; // [rsp+ECh] [rbp+13h]
  KIRQL NewIrqla; // [rsp+158h] [rbp+7Fh]

  v5 = NewIrql;
  LockState.Flags = 0;
  *(_WORD *)&LockState.OldIrql = 515;
  v7 = a1;
  RcvLinkSpeedIndicateUp = a1->RcvLinkSpeedIndicateUp;
  v74 = RcvLinkSpeedIndicateUp;
  v10 = NewIrql & 1;
  v69 = NewIrql & 1;
  if ( (NewIrql & 1) != 0 )
  {
    v11 = *(_QWORD *)(RcvLinkSpeedIndicateUp + 288);
    LODWORD(v10) = KeGetPcr()->Prcb.Number;
    LockState.Flags = 1;
    v12 = *(_DWORD **)(v11 + 8 * v10 + 32);
    ++*v12;
    _InterlockedOr(v63, 0);
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
  v73 = 0;
  LOBYTE(v68) = 0;
  if ( (v69 || KeGetCurrentIrql() == 2)
    && WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink
    && (Number = KeGetPcr()->Prcb.Number,
        Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink,
        v16 = 131LL * Number,
        v73 = Number,
        Flink_low = LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[v16].Flink),
        (unsigned int)Flink_low < 3) )
  {
    LOBYTE(v68) = 1;
    v18 = v16 * 16 + 696 * Flink_low;
    v19 = (char *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Blink + v18;
    LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[v16].Flink) = Flink_low + 1;
    v75 = (char *)&Blink->Blink + v18;
  }
  else
  {
    PoolWithTag = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
    v75 = (char *)PoolWithTag;
    v19 = (char *)PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( (unsigned __int8)byte_1C008370B >= 2u )
        PoolWithTag = WPP_SF_(10LL, &WPP_abea78df5d3bc502c1918c83347dcce9_Traceguids, v25);
      goto LABEL_53;
    }
  }
  Alignment = a2;
  v21 = (_QWORD *)v7->RcvLinkSpeedIndicateUp;
  v19[692] = 0;
  LODWORD(v72) = NewIrql & 2;
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
    goto LABEL_18;
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
      v25 = 1LL;
      v19[692] = 1;
    }
    else
    {
      PoolWithTag = ndisIndicateXlatedPacketsToNdis5Protocols(v19);
      v25 = 1LL;
    }
    if ( v22 )
      goto LABEL_18;
    v26 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))v21[1];
    if ( v26 )
    {
      v27 = *((_DWORD *)v19 + 4) | 2;
      v28 = *((_DWORD *)v19 + 172);
      do
      {
        v29 = 0LL;
        v71 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)v26 + 53);
        do
        {
          v24 = *(struct _NET_BUFFER_LIST **)&v19[40 * v29 + 64];
          v30 = *(_DWORD *)&v19[40 * v29 + 80];
          v29 = (unsigned int)(v29 + 1);
          if ( v24 )
          {
            ndisMIndicateNetBufferListsToOpen(v26, v24, *((_DWORD *)v19 + 10), v30, v27);
            v25 = 1LL;
          }
        }
        while ( (unsigned int)v29 <= v28 );
        HIDWORD(PoolWithTag) = HIDWORD(v71);
        v26 = v71;
      }
      while ( v71 );
      v7 = a1;
    }
    v31 = (_QWORD *)v21[2];
    if ( !v31 )
      goto LABEL_18;
    v32 = *((_DWORD *)v19 + 4);
    if ( (_DWORD)v72 )
    {
      v37 = *((_DWORD *)v19 + 172);
      v38 = v32 | 2;
      do
      {
        v39 = (_QWORD *)v31[53];
        v40 = 0LL;
        do
        {
          v24 = *(struct _NET_BUFFER_LIST **)&v19[40 * v40 + 64];
          PoolWithTag = 5 * v40;
          v41 = *(_DWORD *)&v19[40 * v40 + 80];
          v40 = (unsigned int)(v40 + 1);
          if ( v24 )
          {
            ndisMIndicateNetBufferListsToOpen(v31, v24, *((_DWORD *)v19 + 10), v41, v38);
            v25 = 1LL;
          }
        }
        while ( (unsigned int)v40 <= v37 );
        v31 = v39;
      }
      while ( v39 );
    }
    else
    {
      v33 = *((_DWORD *)v19 + 10);
      v34 = *((_DWORD *)v19 + 172);
      if ( *(_DWORD *)(*(_QWORD *)v19 + 2252LL) )
        ndisIndicateToPmodeOpens((__int64)v19);
      HIDWORD(PoolWithTag) = 0;
      v35 = 1;
      if ( !v34 )
        goto LABEL_18;
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
    }
    v7 = a1;
LABEL_18:
    v5 = NewIrql;
    goto LABEL_53;
  }
  v5 = NewIrql;
LABEL_53:
  if ( (v5 & 2) != 0 )
    goto LABEL_97;
  if ( v19 )
  {
    if ( v19[692] )
    {
      a2 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v19 + 8);
      goto LABEL_57;
    }
LABEL_97:
    v42 = v69;
    goto LABEL_98;
  }
LABEL_57:
  v42 = v69;
  if ( a2 )
  {
    v76.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)v7->FilterInstanceName._p;
    v76.DatapathEventsMask = (unsigned int)v7->FilterFriendlyName;
    v43 = v69 != 0;
    v44 = *(_DWORD *)&v7->Ref.ReferenceCount;
    v45 = a2;
    v76.CurrentCpu = -1;
    v76.DatapathCyclesMask = v44;
    NewIrqla = 2;
    do
    {
      v45->Flags = v45->Flags & 0xFFFFFFF4 | 8;
      v45 = (struct _NET_BUFFER_LIST *)v45->Link.Alignment;
    }
    while ( v45 );
    PoolWithTag = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      PoolWithTag = ndisMarkNetBufferListCorrelationIdsAsUsed(a2, v24, v25);
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
          v43);
      if ( (v76.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( !v43 )
          NewIrqla = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v76);
      }
      TcpOffloadEventHandler = v7[2].TcpOffloadEventHandler;
      v47 = *(void (**)(void))&v7[2].IfIndex;
      TcpOffloadDisconnectCompleteHandler = v7[2].TcpOffloadDisconnectCompleteHandler;
      v72 = v47;
      v49 = *(_BYTE *)TcpOffloadEventHandler == 17;
      v71 = TcpOffloadDisconnectCompleteHandler;
      if ( v49 )
        goto LABEL_91;
      if ( !ndisIterativeDataPathDisabled && (v43 || KeGetCurrentIrql() == 2) )
      {
        v50 = KeGetPcr()->Prcb.Number;
        v51 = (struct _NET_BUFFER_LIST **)v77;
        HIDWORD(PoolWithTag) = 0;
        v70 = v50;
        v77[2] = 0LL;
        v77[0] = a2;
        v77[1] = a2;
        a2->Scratch = 0LL;
        a2->ChildRefCount = v43;
        while ( *(_BYTE *)TcpOffloadEventHandler == 5 )
        {
          if ( !*v51 )
            goto LABEL_94;
          v52 = TcpOffloadEventHandler;
          HIDWORD(PoolWithTag) = 0;
          v53 = *((_QWORD *)TcpOffloadEventHandler + 53) + 96LL * v50;
          v54 = *(_BYTE *)(v53 + 88);
          *(_BYTE *)(v53 + 88) = 1;
          v55 = *v51;
          *v51 = 0LL;
          if ( v55 )
          {
            v56 = v72;
            v57 = v71;
            do
            {
              Scratch = (struct _NET_BUFFER_LIST *)v55->Scratch;
              ChildRefCount = v55->ChildRefCount;
              v65 = 0;
              v64 = 0;
              v55->ChildRefCount = 0;
              ndisCallReceiveCompleteHandler(TcpOffloadEventHandler, v56, v57, v55, v64, v65, ChildRefCount);
              v55 = Scratch;
            }
            while ( Scratch );
            v19 = v75;
            v52 = TcpOffloadEventHandler;
            v47 = v72;
            HIDWORD(PoolWithTag) = 0;
            TcpOffloadDisconnectCompleteHandler = v71;
          }
          *(_BYTE *)(v53 + 88) = 0;
          if ( v54 )
          {
            *(_BYTE *)(v53 + 88) = 1;
            break;
          }
          v47 = (void (*)(void))*((_QWORD *)v52 + 66);
          v51 = (struct _NET_BUFFER_LIST **)(v53 + 72);
          TcpOffloadDisconnectCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)v52 + 67);
          TcpOffloadEventHandler = (void (__fastcall *)(void *, unsigned int, unsigned int))*((_QWORD *)TcpOffloadEventHandler
                                                                                            + 69);
          v72 = v47;
          v71 = TcpOffloadDisconnectCompleteHandler;
          v50 = v70;
        }
        v59 = *v51;
        if ( *v51 )
        {
          *v51 = 0LL;
          do
          {
            v60 = (struct _NET_BUFFER_LIST *)v59->Scratch;
            ChildRefCount = v59->ChildRefCount;
            v65 = 0;
            v64 = 0;
            v59->ChildRefCount = 0;
            ndisCallReceiveCompleteHandler(
              TcpOffloadEventHandler,
              v47,
              TcpOffloadDisconnectCompleteHandler,
              v59,
              v64,
              v65,
              ChildRefCount);
            v47 = v72;
            v59 = v60;
            TcpOffloadDisconnectCompleteHandler = v71;
          }
          while ( v60 );
        }
        goto LABEL_94;
      }
      if ( v7->Header.Type == 5 )
      {
        v79 = TcpOffloadEventHandler;
        v80 = TcpOffloadDisconnectCompleteHandler;
        v84 = 3LL;
        v81 = v47;
        v82 = a2;
        v83 = 0;
        v85 = v43;
        PoolWithTag = ndisExpandStack(ndisDataPathExpandStackCallback, v78);
        if ( (int)PoolWithTag < 0 )
          ndisQueueStackExpansionFallbackNbls(v7, a2, 0);
      }
      else
      {
LABEL_91:
        PoolWithTag = ((__int64 (__fastcall *)(void (__fastcall *)(void *, _NET_BUFFER_LIST *), struct _NET_BUFFER_LIST *, BOOL))v47)(
                        TcpOffloadDisconnectCompleteHandler,
                        a2,
                        v43);
      }
LABEL_94:
      if ( (v76.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v76);
        if ( NewIrqla != 2 )
          KeLowerIrql(NewIrqla);
      }
      goto LABEL_97;
    }
  }
LABEL_98:
  if ( (_BYTE)v68 )
  {
    HIDWORD(PoolWithTag) = HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
    --LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[131 * v73].Flink);
  }
  else if ( v19 )
  {
    ExFreePoolWithTag(v19, 0);
  }
  if ( v42 )
  {
    v61 = *(_QWORD *)(v74 + 288);
    if ( LockState.LockState == 3 )
    {
      LODWORD(PoolWithTag) = KeGetPcr()->Prcb.Number;
      --**(_DWORD **)(v61 + 8 * PoolWithTag + 32);
      if ( (LockState.Flags & 1) == 0 && LockState.OldIrql != 2 )
        KeLowerIrql(LockState.OldIrql);
    }
    else if ( LockState.LockState == 4 )
    {
      *(_QWORD *)(v61 + 16) = 0LL;
      v62 = (KSPIN_LOCK *)(v61 + 8);
      if ( (LockState.Flags & 1) != 0 )
        KeReleaseSpinLockFromDpcLevel(v62);
      else
        KeReleaseSpinLock(v62, LockState.OldIrql);
    }
  }
  else
  {
    NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v74 + 288), &LockState);
  }
}

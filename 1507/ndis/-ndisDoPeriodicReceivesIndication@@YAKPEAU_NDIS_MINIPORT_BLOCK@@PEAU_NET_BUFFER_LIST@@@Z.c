/*
 * XREFs of ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0061D5C
 * Callers:
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C0062B14 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisPeriodicReceivesWorker @ 0x1C0064280 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002A60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C00094A0 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0009770 (ndisSortNetBufferLists.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000CCF0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001C1B0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C002028C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
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

__int64 __fastcall ndisDoPeriodicReceivesIndication(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *Alignment)
{
  unsigned int v3; // r15d
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  struct _NET_BUFFER_LIST *v5; // rbx
  unsigned int v6; // r12d
  struct _NET_BUFFER_LIST *v7; // rax
  unsigned int v8; // r13d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Number; // r14d
  _LIST_ENTRY *Blink; // r8
  __int64 v12; // rdx
  __int64 Flink_low; // r9
  __int64 v14; // rcx
  char *v15; // rsi
  _X_FILTER *EthDB; // r15
  struct _NET_BUFFER_LIST *v17; // rcx
  struct _NET_BUFFER_LIST *v18; // rdx
  _NDIS_OPEN_BLOCK *SingleActiveOpen; // r14
  struct _NET_BUFFER_LIST *v20; // r8
  char *PoolWithTag; // rax
  _NDIS_OPEN_BLOCK *NoFTypeOpenList; // rbx
  unsigned int v23; // edi
  int v24; // r13d
  _NDIS_OPEN_BLOCK *FilterNextOpen; // r12
  unsigned int v26; // r14d
  __int64 v27; // rcx
  struct _NET_BUFFER_LIST *v28; // rdx
  int v29; // r15d
  unsigned int v30; // r12d
  unsigned int v31; // r14d
  unsigned int v32; // ebx
  __int64 v33; // r8
  _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rax
  struct _NET_BUFFER_LIST *v35; // rcx
  _NDIS_OBJECT_HEADER *ReturnNetBufferListsObject; // r14
  void (*ReturnNetBufferListsHandler)(void); // r10
  void *ReturnNetBufferListsContext; // r11
  unsigned int v39; // ecx
  struct _NET_BUFFER_LIST **v40; // r12
  struct _NET_BUFFER_LIST **p_Next; // rax
  struct _NET_BUFFER_LIST *j; // rcx
  _NDIS_OBJECT_HEADER *v43; // r13
  __int64 v44; // r15
  char v45; // al
  struct _NET_BUFFER_LIST *v46; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v48; // r9
  struct _NET_BUFFER_LIST *v49; // rbx
  unsigned int ChildRefCount; // [rsp+30h] [rbp-89h]
  unsigned int v52; // [rsp+30h] [rbp-89h]
  unsigned int v53; // [rsp+40h] [rbp-79h]
  int v54; // [rsp+44h] [rbp-75h]
  unsigned int v55; // [rsp+48h] [rbp-71h]
  unsigned int v56; // [rsp+4Ch] [rbp-6Dh]
  void (*v57)(void); // [rsp+50h] [rbp-69h]
  void *v58; // [rsp+58h] [rbp-61h]
  char *v59; // [rsp+60h] [rbp-59h]
  struct NDIS_PCW_CONTEXT v60; // [rsp+68h] [rbp-51h] BYREF
  struct _NET_BUFFER_LIST *v61; // [rsp+80h] [rbp-39h] BYREF
  struct _NET_BUFFER_LIST *v62; // [rsp+88h] [rbp-31h]
  __int64 v63; // [rsp+90h] [rbp-29h]
  char v64[8]; // [rsp+98h] [rbp-21h] BYREF
  _NDIS_OBJECT_HEADER *v65; // [rsp+A0h] [rbp-19h]
  void *v66; // [rsp+A8h] [rbp-11h]
  void (*v67)(void); // [rsp+B0h] [rbp-9h]
  struct _NET_BUFFER_LIST *v68; // [rsp+B8h] [rbp-1h]
  int v69; // [rsp+C0h] [rbp+7h]
  __int64 v70; // [rsp+C4h] [rbp+Bh]
  int v71; // [rsp+CCh] [rbp+13h]
  struct _NET_BUFFER_LIST *v73; // [rsp+128h] [rbp+6Fh]
  unsigned int i; // [rsp+130h] [rbp+77h]
  char v75; // [rsp+130h] [rbp+77h]
  char v76; // [rsp+138h] [rbp+7Fh]

  v3 = 0;
  v53 = 0;
  v4 = a1;
  do
  {
    v5 = Alignment;
    if ( !Alignment )
      break;
    v6 = (unsigned int)Alignment->ProtocolReserved[0];
    v7 = Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    v8 = 1;
    v73 = Alignment;
    v54 = 1;
    if ( Alignment )
    {
      do
      {
        if ( v6 != LODWORD(Alignment->ProtocolReserved[0]) )
          break;
        v7 = Alignment;
        ++v8;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      v54 = v8;
      v73 = Alignment;
    }
    v4->PeriodicReceiveQueue.NumNblsDequeued -= v8;
    v7->Link.Alignment = 0LL;
    if ( v4->MajorNdisVersion < 6u && (v4->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(&v4->Lock);
      v4->MiniportThread = KeGetCurrentThread();
      v4->LockDbg = 2494376;
      if ( v4->LockAcquired )
      {
        do
        {
          v4->MiniportThread = 0LL;
          v4->LockDbg = 0;
          KeReleaseSpinLockFromDpcLevel(&v4->Lock);
          for ( i = 0; i < 0x32; ++i )
            ;
          KeAcquireSpinLockAtDpcLevel(&v4->Lock);
          v4->MiniportThread = KeGetCurrentThread();
          v4->LockDbg = 2494377;
        }
        while ( v4->LockAcquired );
        v3 = v53;
      }
      v4->LockAcquired = 1;
      v4->LockDbgX = 2494377;
      CurrentThread = KeGetCurrentThread();
      v4->MiniportThread = 0LL;
      v4->LockDbg = 0;
      v4->LockThread = CurrentThread;
      KeReleaseSpinLockFromDpcLevel(&v4->Lock);
    }
    if ( !v4->InitMode )
    {
      v56 = 0;
      v75 = 0;
      if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
      {
        Number = KeGetPcr()->Prcb.Number;
        Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
        v12 = 131LL * Number;
        v56 = Number;
        Flink_low = LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[v12].Flink);
        if ( (unsigned int)Flink_low < 3 )
        {
          v75 = 1;
          v14 = v12 * 16 + 696 * Flink_low;
          v15 = (char *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Blink + v14;
          LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[v12].Flink) = Flink_low + 1;
          v59 = (char *)&Blink->Blink + v14;
LABEL_21:
          EthDB = v4->EthDB;
          v17 = v5;
          v15[692] = 0;
          do
          {
            v18 = v17;
            v17->Flags = v17->Flags & 0xFFFFFFF0 | 4;
            v17 = (struct _NET_BUFFER_LIST *)v17->Link.Alignment;
          }
          while ( v17 );
          SingleActiveOpen = EthDB->SingleActiveOpen;
          if ( SingleActiveOpen && SingleActiveOpen->ProtocolHandle->MajorNdisVersion >= 6u )
          {
            ndisMIndicateNetBufferListsToOpen(SingleActiveOpen, v5, v6, v8, 1);
            v20 = 0LL;
            *((_QWORD *)v15 + 8) = 0LL;
            *((_DWORD *)v15 + 20) = 0;
          }
          else
          {
            *((_QWORD *)v15 + 3) = v5;
            *((_QWORD *)v15 + 1) = EthDB;
            *((_DWORD *)v15 + 4) = 1;
            *(_QWORD *)v15 = v4;
            *((_QWORD *)v15 + 4) = v18;
            *((_DWORD *)v15 + 10) = v6;
            *((_DWORD *)v15 + 11) = v8;
            ndisSortNetBufferLists((__int64 *)v15);
            v20 = 0LL;
            if ( *((_QWORD *)v15 + 8) || *((_DWORD *)v15 + 172) )
            {
              if ( !EthDB->OpenList || v6 )
              {
                v15[692] = 1;
              }
              else
              {
                ndisIndicateXlatedPacketsToNdis5Protocols((__int64 *)v15);
                v20 = 0LL;
              }
              if ( !SingleActiveOpen )
              {
                NoFTypeOpenList = EthDB->NoFTypeOpenList;
                if ( NoFTypeOpenList )
                {
                  v23 = *((_DWORD *)v15 + 172);
                  v24 = *((_DWORD *)v15 + 4) | 2;
                  do
                  {
                    FilterNextOpen = NoFTypeOpenList->FilterNextOpen;
                    v26 = 0;
                    do
                    {
                      v27 = v26++;
                      v28 = *(struct _NET_BUFFER_LIST **)&v15[40 * v27 + 64];
                      if ( v28 )
                      {
                        ndisMIndicateNetBufferListsToOpen(
                          NoFTypeOpenList,
                          v28,
                          *((_DWORD *)v15 + 10),
                          *(_DWORD *)&v15[40 * v27 + 80],
                          v24);
                        v20 = 0LL;
                      }
                    }
                    while ( v26 <= v23 );
                    NoFTypeOpenList = FilterNextOpen;
                  }
                  while ( FilterNextOpen );
                  v4 = a1;
                }
                if ( EthDB->FTypeOpenList )
                {
                  v29 = *((_DWORD *)v15 + 4);
                  v30 = *((_DWORD *)v15 + 10);
                  v31 = *((_DWORD *)v15 + 172);
                  if ( *(_DWORD *)(*(_QWORD *)v15 + 2252LL) )
                  {
                    ndisIndicateToPmodeOpens((__int64)v15);
                    v20 = 0LL;
                  }
                  v32 = 1;
                  if ( v31 )
                  {
                    do
                    {
                      v33 = v32++;
                      ndisMIndicateNetBufferListsToOpen(
                        *(_QWORD **)&v15[40 * v33 + 56],
                        *(struct _NET_BUFFER_LIST **)&v15[40 * v33 + 64],
                        v30,
                        *(_DWORD *)&v15[40 * v33 + 80],
                        v29);
                    }
                    while ( v32 <= v31 );
                    v20 = 0LL;
                  }
                }
              }
            }
          }
          if ( v15[692] )
          {
            v5 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v15 + 8);
            goto LABEL_52;
          }
          goto LABEL_95;
        }
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
      v20 = 0LL;
      v59 = PoolWithTag;
      v15 = PoolWithTag;
      if ( PoolWithTag )
        goto LABEL_21;
      if ( (unsigned __int8)byte_1C008530B >= 2u )
      {
        WPP_SF_(0xAu, &WPP_abea78df5d3bc502c1918c83347dcce9_Traceguids);
        v20 = 0LL;
      }
LABEL_52:
      if ( !v5 )
        goto LABEL_95;
      PcwDataBlock = v4->PcwDataBlock;
      v35 = v5;
      v60.CurrentCpu = -1;
      v60.PcwBlock = PcwDataBlock;
      v60.DatapathEventsMask = v4->PcwDatapathEventMask;
      v60.DatapathCyclesMask = v4->PcwDatapathCycleMask;
      do
      {
        v35->Flags = v35->Flags & 0xFFFFFFF4 | 8;
        v35 = (struct _NET_BUFFER_LIST *)v35->Link.Alignment;
      }
      while ( v35 );
      if ( Microsoft_Windows_Networking_CorrelationEnabled )
        ndisMarkNetBufferListCorrelationIdsAsUsed(v5);
      if ( v4->PeriodicReceiveQueue.NblsAllocated != (_DWORD)v20 )
      {
        v5 = ndisReturnPeriodicReceives((__int64)v4, v5);
        v20 = 0LL;
      }
      if ( !v5 )
      {
LABEL_95:
        if ( v75 )
        {
          --LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[131 * v56].Flink);
        }
        else if ( v15 )
        {
          ExFreePoolWithTag(v15, 0);
        }
        Alignment = v73;
        v8 = v54;
        v3 = v53;
        goto LABEL_100;
      }
      if ( ndisNblTrackerMode != (_DWORD)v20 )
      {
        ndisNblTrackerTransferOwnershipInternal(v5, 0LL, v4->Next.ReturnNetBufferListsTracker, 0x87u, 1u);
        v20 = 0LL;
      }
      if ( (v60.DatapathCyclesMask & 0x20) != 0 )
        ndisPcwStartCycleCounter(&v60);
      ReturnNetBufferListsObject = v4->Next.ReturnNetBufferListsObject;
      ReturnNetBufferListsHandler = (void (*)(void))v4->Next.ReturnNetBufferListsHandler;
      ReturnNetBufferListsContext = v4->Next.ReturnNetBufferListsContext;
      v57 = ReturnNetBufferListsHandler;
      v58 = ReturnNetBufferListsContext;
      if ( ReturnNetBufferListsObject->Type == 17 )
        goto LABEL_90;
      if ( ndisIterativeDataPathDisabled == (_DWORD)v20 )
      {
        v39 = KeGetPcr()->Prcb.Number;
        v40 = &v61;
        p_Next = 0LL;
        v55 = v39;
        v61 = v20;
        v62 = 0LL;
        v63 = 0LL;
        if ( !v20 )
        {
          v61 = v5;
LABEL_74:
          v62 = v5;
          v5->Scratch = v20;
          v5->ChildRefCount = 1;
          goto LABEL_82;
        }
        if ( MEMORY[0x84] != 1 )
        {
          MEMORY[0x70] = v5;
          goto LABEL_74;
        }
        for ( j = (struct _NET_BUFFER_LIST *)MEMORY[0]; j; j = (struct _NET_BUFFER_LIST *)j->Link.Alignment )
          p_Next = &j->Next;
        *p_Next = v5;
        while ( 1 )
        {
          v39 = v55;
LABEL_82:
          if ( ReturnNetBufferListsObject->Type != 5 )
            break;
          if ( *v40 == v20 )
            goto LABEL_93;
          v43 = ReturnNetBufferListsObject;
          v44 = *(_QWORD *)&ReturnNetBufferListsObject[106].Type + 96LL * v39;
          v45 = *(_BYTE *)(v44 + 88);
          *(_BYTE *)(v44 + 88) = 1;
          v46 = *v40;
          v76 = v45;
          *v40 = v20;
          if ( v46 )
          {
            do
            {
              Scratch = (struct _NET_BUFFER_LIST *)v46->Scratch;
              ChildRefCount = v46->ChildRefCount;
              v46->ChildRefCount = (int)v20;
              ndisCallReceiveCompleteHandler(
                ReturnNetBufferListsObject,
                v57,
                v58,
                v46,
                (unsigned int)v20,
                (unsigned int)v20,
                ChildRefCount);
              v20 = 0LL;
              v46 = Scratch;
            }
            while ( Scratch );
            v4 = a1;
            v15 = v59;
            v45 = v76;
            ReturnNetBufferListsHandler = v57;
            ReturnNetBufferListsContext = v58;
          }
          *(_BYTE *)(v44 + 88) = (_BYTE)v20;
          if ( v45 )
          {
            *(_BYTE *)(v44 + 88) = 1;
            break;
          }
          ReturnNetBufferListsHandler = *(void (**)(void))&ReturnNetBufferListsObject[132].Type;
          v40 = (struct _NET_BUFFER_LIST **)(v44 + 72);
          ReturnNetBufferListsContext = *(void **)&ReturnNetBufferListsObject[134].Type;
          ReturnNetBufferListsObject = *(_NDIS_OBJECT_HEADER **)&ReturnNetBufferListsObject[138].Type;
          v57 = *(void (**)(void))&v43[132].Type;
          v58 = ReturnNetBufferListsContext;
        }
        v48 = *v40;
        if ( *v40 )
        {
          *v40 = v20;
          do
          {
            v49 = (struct _NET_BUFFER_LIST *)v48->Scratch;
            v52 = v48->ChildRefCount;
            v48->ChildRefCount = (int)v20;
            ndisCallReceiveCompleteHandler(
              ReturnNetBufferListsObject,
              ReturnNetBufferListsHandler,
              ReturnNetBufferListsContext,
              v48,
              (unsigned int)v20,
              (unsigned int)v20,
              v52);
            ReturnNetBufferListsHandler = v57;
            LODWORD(v20) = 0;
            ReturnNetBufferListsContext = v58;
            v48 = v49;
          }
          while ( v49 );
        }
        goto LABEL_93;
      }
      if ( v4->Header.Type == 5 )
      {
        v65 = v4->Next.ReturnNetBufferListsObject;
        v66 = ReturnNetBufferListsContext;
        v70 = 3LL;
        v67 = ReturnNetBufferListsHandler;
        v68 = v5;
        v69 = (int)v20;
        v71 = 1;
        if ( ndisExpandStack((void (*)(void *))ndisDataPathExpandStackCallback, v64) < 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v4, v5, 0);
      }
      else
      {
LABEL_90:
        ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, __int64))ReturnNetBufferListsHandler)(
          ReturnNetBufferListsContext,
          v5,
          1LL);
      }
LABEL_93:
      if ( (v60.DatapathCyclesMask & 0x20) != 0 )
        ndisPcwEndCycleCounter(&v60);
      goto LABEL_95;
    }
    ndisMDispatchReceiveNetBufferListsWithLock((struct _NDIS_FILTER_BLOCK *)v4, v5, v6, v8, 1);
LABEL_100:
    if ( v4->MajorNdisVersion < 6u && (v4->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(&v4->Lock);
      v4->LockAcquired = 0;
      *(_QWORD *)&v4->LockDbg = 0LL;
      v4->LockThread = 0LL;
      v4->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v4->Lock);
    }
    v4->PeriodicReceiveQueue.TrackingIndicated += v8;
    v3 += v8;
    v53 = v3;
  }
  while ( Alignment );
  return v3;
}

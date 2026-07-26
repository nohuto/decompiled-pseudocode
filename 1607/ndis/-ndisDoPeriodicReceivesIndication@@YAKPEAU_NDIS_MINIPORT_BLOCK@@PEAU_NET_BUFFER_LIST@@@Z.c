/*
 * XREFs of ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001160
 * Callers:
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C0065ED4 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisPeriodicReceivesWorker @ 0x1C0067110 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     ndisIndicateToPmodeOpens @ 0x1C0001E98 (ndisIndicateToPmodeOpens.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003810 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0003AE0 (ndisSortNetBufferLists.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00045B0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0010CD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0010D10 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0012AB0 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0012B0C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001D890 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00267B4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00267D0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026D64 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0026D78 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnPeriodicReceives @ 0x1C0026F18 (ndisReturnPeriodicReceives.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisDoPeriodicReceivesIndication(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *Alignment)
{
  unsigned int v3; // r12d
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  struct _NET_BUFFER_LIST *v5; // r14
  unsigned int v6; // esi
  struct _NET_BUFFER_LIST *v7; // rax
  unsigned int v8; // r13d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Number; // ebx
  struct _NDIS_RCV_TRACKER_ARRAY *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  char *v16; // r12
  _X_FILTER *EthDB; // r15
  struct _NET_BUFFER_LIST *v18; // rcx
  struct _NET_BUFFER_LIST *v19; // rdx
  _NDIS_OPEN_BLOCK *SingleActiveOpen; // rbx
  struct _NET_BUFFER_LIST *v21; // r8
  _NDIS_OPEN_BLOCK *NoFTypeOpenList; // rbx
  unsigned int v23; // edi
  int v24; // r13d
  _NDIS_OPEN_BLOCK *FilterNextOpen; // r14
  unsigned int v26; // esi
  __int64 v27; // rcx
  struct _NET_BUFFER_LIST *v28; // rdx
  int v29; // r14d
  unsigned int v30; // esi
  unsigned int v31; // ebx
  __int64 v32; // r8
  _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rax
  struct _NET_BUFFER_LIST *v34; // rcx
  NDIS_NBL_TRACKER_HANDLE__ *ReturnNetBufferListsTracker; // rbx
  __int64 v36; // r9
  char v37; // si
  struct _NET_BUFFER_LIST *v38; // r15
  struct _NET_BUFFER_LIST *v39; // r13
  unsigned __int64 v40; // rbx
  void *v41; // rdx
  _SLIST_HEADER *v42; // rsi
  unsigned __int64 v43; // r10
  void *Region; // rax
  unsigned __int64 v45; // r15
  bool v46; // al
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rbx
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  _NDIS_OBJECT_HEADER *ReturnNetBufferListsObject; // rsi
  void (*ReturnNetBufferListsHandler)(void); // r10
  void *ReturnNetBufferListsContext; // r11
  unsigned int v54; // ecx
  struct _NET_BUFFER_LIST **v55; // r15
  struct _NET_BUFFER_LIST *v56; // r9
  struct _NET_BUFFER_LIST *v57; // rbx
  _NDIS_OBJECT_HEADER *v58; // r13
  __int64 v59; // r14
  char v60; // al
  struct _NET_BUFFER_LIST *v61; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  char *PoolWithTag; // rax
  unsigned int v64; // [rsp+30h] [rbp-99h]
  unsigned int ChildRefCount; // [rsp+30h] [rbp-99h]
  char v66; // [rsp+40h] [rbp-89h]
  char v67; // [rsp+41h] [rbp-88h]
  unsigned int i; // [rsp+48h] [rbp-81h]
  struct _NET_BUFFER_LIST *v69; // [rsp+48h] [rbp-81h]
  unsigned int v70; // [rsp+48h] [rbp-81h]
  unsigned int v71; // [rsp+50h] [rbp-79h]
  int v72; // [rsp+54h] [rbp-75h]
  void *v73; // [rsp+58h] [rbp-71h]
  void *v74; // [rsp+58h] [rbp-71h]
  unsigned int v75; // [rsp+60h] [rbp-69h]
  void (*v76)(void); // [rsp+68h] [rbp-61h]
  char *v77; // [rsp+70h] [rbp-59h]
  struct NDIS_PCW_CONTEXT v78; // [rsp+78h] [rbp-51h] BYREF
  _QWORD v79[3]; // [rsp+90h] [rbp-39h] BYREF
  char v80[8]; // [rsp+A8h] [rbp-21h] BYREF
  _NDIS_OBJECT_HEADER *v81; // [rsp+B0h] [rbp-19h]
  void *v82; // [rsp+B8h] [rbp-11h]
  void (*v83)(void); // [rsp+C0h] [rbp-9h]
  struct _NET_BUFFER_LIST *v84; // [rsp+C8h] [rbp-1h]
  int v85; // [rsp+D0h] [rbp+7h]
  __int64 v86; // [rsp+D4h] [rbp+Bh]
  int v87; // [rsp+DCh] [rbp+13h]
  struct _NET_BUFFER_LIST *v89; // [rsp+138h] [rbp+6Fh]
  char v90; // [rsp+140h] [rbp+77h] BYREF
  char v91; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = 0;
  v71 = 0;
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
    v89 = Alignment;
    v72 = 1;
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
      v72 = v8;
      v89 = Alignment;
    }
    v4->PeriodicReceiveQueue.NumNblsDequeued -= v8;
    v7->Link.Alignment = 0LL;
    if ( v4->MajorNdisVersion < 6u && (v4->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(&v4->Lock);
      v4->MiniportThread = KeGetCurrentThread();
      v4->LockDbg = 2494384;
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
          v4->LockDbg = 2494385;
        }
        while ( v4->LockAcquired );
        v3 = v71;
      }
      v4->LockAcquired = 1;
      v4->LockDbgX = 2494385;
      CurrentThread = KeGetCurrentThread();
      v4->MiniportThread = 0LL;
      v4->LockDbg = 0;
      v4->LockThread = CurrentThread;
      KeReleaseSpinLockFromDpcLevel(&v4->Lock);
    }
    if ( !v4->InitMode )
    {
      v75 = 0;
      v66 = 0;
      if ( ndisPerProcRcvTrackers )
      {
        Number = KeGetPcr()->Prcb.Number;
        v12 = ndisPerProcRcvTrackers;
        v13 = 2096LL * Number;
        v75 = Number;
        v14 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v13);
        if ( (unsigned int)v14 < 3 )
        {
          v66 = 1;
          v15 = v13 + 696 * v14;
          v16 = (char *)ndisPerProcRcvTrackers + v15 + 8;
          *(_DWORD *)((char *)ndisPerProcRcvTrackers + v13) = v14 + 1;
          v77 = (char *)v12 + v15 + 8;
LABEL_26:
          EthDB = v4->EthDB;
          v18 = v5;
          v16[692] = 0;
          do
          {
            v19 = v18;
            v18->Flags = v18->Flags & 0xFFFFFFF0 | 4;
            v18 = (struct _NET_BUFFER_LIST *)v18->Link.Alignment;
          }
          while ( v18 );
          SingleActiveOpen = EthDB->SingleActiveOpen;
          if ( SingleActiveOpen && SingleActiveOpen->ProtocolHandle->MajorNdisVersion >= 6u )
          {
            ndisMIndicateNetBufferListsToOpen(SingleActiveOpen, v5, 1);
            v21 = 0LL;
            *((_QWORD *)v16 + 8) = 0LL;
            *((_DWORD *)v16 + 20) = 0;
          }
          else
          {
            *((_QWORD *)v16 + 3) = v5;
            *((_QWORD *)v16 + 1) = EthDB;
            *((_DWORD *)v16 + 4) = 1;
            *(_QWORD *)v16 = v4;
            *((_QWORD *)v16 + 4) = v19;
            *((_DWORD *)v16 + 10) = v6;
            *((_DWORD *)v16 + 11) = v8;
            ndisSortNetBufferLists(v16, v19, 0LL);
            v21 = 0LL;
            if ( *((_QWORD *)v16 + 8) || *((_DWORD *)v16 + 172) )
            {
              if ( !EthDB->OpenList || v6 )
              {
                v16[692] = 1;
              }
              else
              {
                ndisIndicateXlatedPacketsToNdis5Protocols(v16);
                v21 = 0LL;
              }
              if ( !SingleActiveOpen )
              {
                NoFTypeOpenList = EthDB->NoFTypeOpenList;
                if ( NoFTypeOpenList )
                {
                  v23 = *((_DWORD *)v16 + 172);
                  v24 = *((_DWORD *)v16 + 4) | 2;
                  do
                  {
                    FilterNextOpen = NoFTypeOpenList->FilterNextOpen;
                    v26 = 0;
                    do
                    {
                      v27 = v26++;
                      v28 = *(struct _NET_BUFFER_LIST **)&v16[40 * v27 + 64];
                      if ( v28 )
                      {
                        ndisMIndicateNetBufferListsToOpen(NoFTypeOpenList, v28, v24);
                        v21 = 0LL;
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
                  v29 = *((_DWORD *)v16 + 4);
                  v30 = *((_DWORD *)v16 + 172);
                  if ( *(_DWORD *)(*(_QWORD *)v16 + 2252LL) )
                  {
                    ndisIndicateToPmodeOpens(v16);
                    v21 = 0LL;
                  }
                  v31 = 1;
                  if ( v30 )
                  {
                    do
                    {
                      v32 = v31++;
                      ndisMIndicateNetBufferListsToOpen(
                        *(NDIS_HANDLE *)&v16[40 * v32 + 56],
                        *(struct _NET_BUFFER_LIST **)&v16[40 * v32 + 64],
                        v29);
                    }
                    while ( v31 <= v30 );
                    v21 = 0LL;
                  }
                }
              }
            }
          }
          if ( v16[692] )
          {
            v5 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v16 + 8);
            goto LABEL_50;
          }
          goto LABEL_93;
        }
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
      v21 = 0LL;
      v77 = PoolWithTag;
      v16 = PoolWithTag;
      if ( PoolWithTag )
        goto LABEL_26;
      if ( (unsigned __int8)byte_1C00895CB >= 2u )
      {
        WPP_SF_(10LL, &WPP_27a9f588cd63370d861f87f60b3f12b7_Traceguids, 0LL);
        v21 = 0LL;
      }
LABEL_50:
      if ( !v5 )
        goto LABEL_93;
      PcwDataBlock = v4->PcwDataBlock;
      v34 = v5;
      v78.CurrentCpu = -1;
      v78.PcwBlock = PcwDataBlock;
      v78.DatapathEventsMask = v4->PcwDatapathEventMask;
      v78.DatapathCyclesMask = v4->PcwDatapathCycleMask;
      do
      {
        v34->Flags = v34->Flags & 0xFFFFFFF4 | 8;
        v34 = (struct _NET_BUFFER_LIST *)v34->Link.Alignment;
      }
      while ( v34 );
      if ( Microsoft_Windows_Networking_CorrelationEnabled )
        ndisMarkNetBufferListCorrelationIdsAsUsed(v5);
      if ( v4->PeriodicReceiveQueue.NblsAllocated != (_DWORD)v21 )
      {
        v5 = (struct _NET_BUFFER_LIST *)ndisReturnPeriodicReceives(v4, v5);
        v21 = 0LL;
      }
      if ( !v5 )
      {
LABEL_93:
        if ( v66 )
        {
          --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v75);
        }
        else if ( v16 )
        {
          ExFreePoolWithTag(v16, 0);
        }
        Alignment = v89;
        v8 = v72;
        v3 = v71;
        goto LABEL_18;
      }
      if ( ndisNblTrackerMode )
      {
        ReturnNetBufferListsTracker = v4->Next.ReturnNetBufferListsTracker;
        v36 = 0LL;
        v37 = ndisNblTrackerEpoch;
        v38 = v21;
        v91 = 1;
        v39 = v21;
        v90 = 0;
        if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
        {
          ndisNblTrackerRecordEvent(v5, 0LL, 0x87u, ReturnNetBufferListsTracker, 1u);
          v21 = v39;
          v36 = 0LL;
        }
        v40 = (unsigned __int64)ReturnNetBufferListsTracker & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (v40 & 1) != 0 )
          v41 = *(void **)((v40 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        else
          v41 = (void *)v40;
        v73 = v41;
        if ( (v40 & 1) != 0 )
          v40 ^= ((unsigned __int8)v40 ^ (unsigned __int8)(2 * v37)) & 2;
        v42 = (_SLIST_HEADER *)v5;
        do
        {
          v43 = v42[22].Alignment;
          do
          {
            if ( v42[22].Alignment != v43 )
              break;
            if ( !v43 && v42[7].Region == v36 )
              v42[7].Region = ndisSourceHandleFromOwner(v36, v41, v21);
            if ( (v43 & 4) != 0 || (Region = (void *)v42[7].Region) == 0LL )
            {
              v42[22].Alignment = v40 | 4;
            }
            else if ( Region == v41 && v42[1].Region == v36 )
            {
              v21 = (struct _NET_BUFFER_LIST *)((char *)v21 + 1);
              v42[22].Alignment = 24LL;
              v38 = (struct _NET_BUFFER_LIST *)((char *)v38 + 1);
            }
            else
            {
              v38 = (struct _NET_BUFFER_LIST *)((char *)v38 + 1);
              v42[22].Alignment = v40;
            }
            v42 = (_SLIST_HEADER *)v42->Alignment;
          }
          while ( v42 );
          v69 = v21;
          if ( (v43 & 1) != 0 )
          {
            ndisNblTrackerUpdateOwnershipCount(v43, (char *)v39 - (char *)v38, &v91, &v90);
            v36 = 0LL;
          }
          v41 = v73;
          v39 = v38;
          v21 = v69;
        }
        while ( v42 );
        v45 = (char *)v38 - (char *)v69;
        v21 = 0LL;
        if ( (v40 & 1) != 0 && v45 )
        {
          v46 = v91;
          if ( !v91 && !v90 )
          {
            v90 = 1;
            v46 = KeGetCurrentIrql() == 2;
            v91 = v46;
          }
          v47 = v40;
          v48 = v40 & 0xFFFFFFFFFFFFFFF8uLL;
          v49 = 2 * ((v47 >> 1) & 1);
          if ( v46 )
          {
            v50 = (_QWORD *)(*(_QWORD *)(v48 + 8 * v49 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v50 += v45;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 8 * v49 + 48), v45);
          }
        }
      }
      if ( (v78.DatapathCyclesMask & 0x20) != 0 )
        ndisPcwStartCycleCounter(&v78, 5u);
      ReturnNetBufferListsObject = v4->Next.ReturnNetBufferListsObject;
      ReturnNetBufferListsHandler = (void (*)(void))v4->Next.ReturnNetBufferListsHandler;
      ReturnNetBufferListsContext = v4->Next.ReturnNetBufferListsContext;
      v76 = ReturnNetBufferListsHandler;
      v74 = ReturnNetBufferListsContext;
      if ( ReturnNetBufferListsObject->Type == 17 )
        goto LABEL_102;
      if ( ndisIterativeDataPathDisabled == (_DWORD)v21 )
      {
        v54 = KeGetPcr()->Prcb.Number;
        v55 = (struct _NET_BUFFER_LIST **)v79;
        v79[1] = v5;
        v70 = v54;
        v79[2] = 0LL;
        v79[0] = v5;
        v5->Scratch = v21;
        v5->ChildRefCount = 1;
        while ( ReturnNetBufferListsObject->Type == 5 )
        {
          if ( *v55 == v21 )
            goto LABEL_91;
          v58 = ReturnNetBufferListsObject;
          v59 = *(_QWORD *)&ReturnNetBufferListsObject[106].Type + 96LL * v54;
          v60 = *(_BYTE *)(v59 + 88);
          *(_BYTE *)(v59 + 88) = 1;
          v61 = *v55;
          v67 = v60;
          *v55 = v21;
          if ( v61 )
          {
            do
            {
              Scratch = (struct _NET_BUFFER_LIST *)v61->Scratch;
              ChildRefCount = v61->ChildRefCount;
              v61->ChildRefCount = (int)v21;
              ndisCallReceiveCompleteHandler(
                ReturnNetBufferListsObject,
                v76,
                v74,
                v61,
                (unsigned int)v21,
                (unsigned int)v21,
                ChildRefCount);
              v21 = 0LL;
              v61 = Scratch;
            }
            while ( Scratch );
            v4 = a1;
            v16 = v77;
            v60 = v67;
            ReturnNetBufferListsHandler = v76;
            ReturnNetBufferListsContext = v74;
          }
          *(_BYTE *)(v59 + 88) = (_BYTE)v21;
          if ( v60 )
          {
            *(_BYTE *)(v59 + 88) = 1;
            break;
          }
          ReturnNetBufferListsHandler = *(void (**)(void))&ReturnNetBufferListsObject[132].Type;
          v55 = (struct _NET_BUFFER_LIST **)(v59 + 72);
          ReturnNetBufferListsContext = *(void **)&ReturnNetBufferListsObject[134].Type;
          ReturnNetBufferListsObject = *(_NDIS_OBJECT_HEADER **)&ReturnNetBufferListsObject[138].Type;
          v54 = v70;
          v76 = *(void (**)(void))&v58[132].Type;
          v74 = ReturnNetBufferListsContext;
        }
        v56 = *v55;
        if ( *v55 )
        {
          *v55 = v21;
          do
          {
            v57 = (struct _NET_BUFFER_LIST *)v56->Scratch;
            v64 = v56->ChildRefCount;
            v56->ChildRefCount = (int)v21;
            ndisCallReceiveCompleteHandler(
              ReturnNetBufferListsObject,
              ReturnNetBufferListsHandler,
              ReturnNetBufferListsContext,
              v56,
              (unsigned int)v21,
              (unsigned int)v21,
              v64);
            ReturnNetBufferListsHandler = v76;
            LODWORD(v21) = 0;
            ReturnNetBufferListsContext = v74;
            v56 = v57;
          }
          while ( v57 );
        }
        goto LABEL_91;
      }
      if ( v4->Header.Type != 5 )
      {
LABEL_102:
        ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, __int64))ReturnNetBufferListsHandler)(
          ReturnNetBufferListsContext,
          v5,
          1LL);
      }
      else
      {
        v81 = v4->Next.ReturnNetBufferListsObject;
        v82 = ReturnNetBufferListsContext;
        v86 = 3LL;
        v83 = ReturnNetBufferListsHandler;
        v84 = v5;
        v85 = (int)v21;
        v87 = 1;
        if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v80) < 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v4, v5, 0);
      }
LABEL_91:
      if ( (v78.DatapathCyclesMask & 0x20) != 0 )
        ndisPcwEndCycleCounter(&v78, 5u, 0x12uLL);
      goto LABEL_93;
    }
    ndisMDispatchReceiveNetBufferListsWithLock(v4, v5, v6, v8, 1);
LABEL_18:
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
    v71 = v3;
  }
  while ( Alignment );
  return v3;
}

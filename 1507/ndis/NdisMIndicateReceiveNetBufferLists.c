/*
 * XREFs of NdisMIndicateReceiveNetBufferLists @ 0x1C00024B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002A60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000CCA0 (-ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C002028C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00228B4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0022A48 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00231B0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00231FC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C0047FB0 (ndisGenerateNetBufferListCorrelationIds.c)
 *     Template_qqqqqqqq @ 0x1C0062A3C (Template_qqqqqqqq.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisMIndicateReceiveNetBufferLists(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  KIRQL v5; // bl
  PNET_BUFFER_LIST v7; // r11
  char v8; // r14
  __int64 CurrentIrql; // rax
  __int64 v10; // rbx
  struct _NDIS_FILTER_BLOCK *v11; // rsi
  void (*NextIndicateReceiveNetBufferListsHandler)(void); // r12
  void *NextIndicateReceiveNetBufferListsContext; // r13
  __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // ecx
  unsigned int v17; // r15d
  unsigned int *v18; // r12
  __int64 v19; // rsi
  int v20; // r13d
  ULONG v21; // ecx
  unsigned int v22; // edx
  ULONG v23; // r10d
  unsigned int v24; // eax
  unsigned int v25; // ecx
  int v26; // r14d
  enum _NDIS_NBL_TRACKER_OWNERSHIP_EVENT v27; // r9d
  _QWORD *v28; // r15
  unsigned __int64 Alignment; // rcx
  struct _NDIS_FILTER_BLOCK *v30; // rdx
  __int64 v31; // rax
  char v32; // cl
  unsigned int v33; // ecx
  unsigned int v34; // edx
  unsigned int v35; // eax
  __int64 v36; // r15
  unsigned int v37; // ecx
  unsigned int v38; // edx
  unsigned int v39; // eax
  NDIS_PORT_NUMBER v40; // eax
  unsigned int v41; // r9d
  PNET_BUFFER_LIST i; // rax
  PNET_BUFFER_LIST v43; // rcx
  unsigned int j; // eax
  __int64 v45; // rax
  unsigned int Number; // ecx
  int v47; // r9d
  char v48; // [rsp+58h] [rbp-B0h]
  char v49; // [rsp+68h] [rbp-A0h]
  NDIS_PORT_NUMBER v50; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v51; // [rsp+6Ch] [rbp-9Ch]
  char v52; // [rsp+70h] [rbp-98h]
  ULONG v53; // [rsp+74h] [rbp-94h]
  __int64 v55; // [rsp+80h] [rbp-88h]
  struct NDIS_PCW_CONTEXT v56; // [rsp+90h] [rbp-78h] BYREF
  PNET_BUFFER_LIST v57; // [rsp+A8h] [rbp-60h] BYREF
  PNET_BUFFER_LIST v58; // [rsp+B0h] [rbp-58h]
  __int64 v59; // [rsp+B8h] [rbp-50h]
  __int64 v60; // [rsp+C0h] [rbp-48h]
  _BYTE v61[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-38h]
  void *v63; // [rsp+D8h] [rbp-30h]
  void (*v64)(void); // [rsp+E0h] [rbp-28h]
  PNET_BUFFER_LIST v65; // [rsp+E8h] [rbp-20h]
  NDIS_PORT_NUMBER v66; // [rsp+F0h] [rbp-18h]
  int v67; // [rsp+F4h] [rbp-14h]
  ULONG v68; // [rsp+F8h] [rbp-10h]
  ULONG v69; // [rsp+FCh] [rbp-Ch]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+100h] [rbp-8h] BYREF

  v5 = 2;
  v56.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 5);
  v7 = NetBufferList;
  v8 = ReceiveFlags;
  v56.DatapathEventsMask = *((_DWORD *)MiniportAdapterHandle + 12);
  v53 = NumberOfNetBufferLists;
  v50 = PortNumber;
  v49 = 2;
  v56.DatapathCyclesMask = *((_DWORD *)MiniportAdapterHandle + 20);
  v56.CurrentCpu = -1;
  if ( (v56.DatapathCyclesMask & 4) != 0 )
  {
    if ( (ReceiveFlags & 1) == 0 )
    {
      v5 = KfRaiseIrql(2u);
      v49 = v5;
    }
    ndisPcwStartCycleCounter(&v56, 2u);
    *(_QWORD *)&NumberOfNetBufferLists = v53;
  }
  if ( *((_BYTE *)MiniportAdapterHandle + 2672) )
  {
    *((_DWORD *)MiniportAdapterHandle + 679) += NumberOfNetBufferLists;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      ndisGenerateNetBufferListCorrelationIds(v7, NumberOfNetBufferLists);
      *(_QWORD *)&PortNumber = v50;
      *(_QWORD *)&NumberOfNetBufferLists = v53;
      v7 = NetBufferList;
    }
    if ( ndisNblTrackerMode )
    {
      v27 = NdisNblTrackerEvent_MiniportIndicatedResources;
      if ( (ReceiveFlags & 2) == 0 )
        v27 = NdisNblTrackerEvent_MiniportIndicated;
      ndisNblTrackerTransferOwnershipInternal(
        v7,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 517),
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 314),
        v27,
        (ReceiveFlags & 1) != 0);
      *(_QWORD *)&PortNumber = v50;
      *(_QWORD *)&NumberOfNetBufferLists = v53;
      v7 = NetBufferList;
    }
    HIDWORD(CurrentIrql) = -2176;
    v10 = MEMORY[0xFFFFF78000000320];
    v11 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 315);
    NextIndicateReceiveNetBufferListsHandler = (void (*)(void))*((_QWORD *)MiniportAdapterHandle + 329);
    NextIndicateReceiveNetBufferListsContext = (void *)*((_QWORD *)MiniportAdapterHandle + 313);
    if ( v11->Header.Type == 17 )
    {
      ((void (__fastcall *)(void *, PNET_BUFFER_LIST))NextIndicateReceiveNetBufferListsHandler)(
        NextIndicateReceiveNetBufferListsContext,
        v7);
    }
    else if ( (ReceiveFlags & 2) == 0
           && ndisIterativeDataPathDisabled == (ReceiveFlags & 2)
           && ((ReceiveFlags & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
    {
      LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
      v28 = &v57;
      v51 = CurrentIrql;
      v58 = 0LL;
      v59 = 0LL;
      v57 = v7;
      Alignment = v7->Link.Alignment;
      v58 = v7;
      v7->Scratch = 0LL;
      v7->ChildRefCount = ReceiveFlags;
      v7->Status = PortNumber;
      if ( Alignment )
      {
        *(_QWORD *)(Alignment + 112) = NumberOfNetBufferLists;
        CurrentIrql = (unsigned int)CurrentIrql;
      }
      if ( v11->Header.Type == 5 )
      {
        while ( *v28 )
        {
          v30 = v11;
          v31 = (__int64)&(*v11->IterativeDataPathTracker)[4 * CurrentIrql + 2];
          v60 = v31;
          v32 = *(_BYTE *)(v31 + 16);
          *(_BYTE *)(v31 + 16) = 1;
          *(_QWORD *)&NumberOfNetBufferLists = *v28;
          v52 = v32;
          *v28 = 0LL;
          if ( *(_QWORD *)&NumberOfNetBufferLists )
          {
            do
            {
              v33 = *(_DWORD *)(*(_QWORD *)&NumberOfNetBufferLists + 132LL);
              v34 = *(_DWORD *)(*(_QWORD *)&NumberOfNetBufferLists + 140LL);
              v55 = *(_QWORD *)(*(_QWORD *)&NumberOfNetBufferLists + 112LL);
              if ( **(_QWORD **)&NumberOfNetBufferLists )
                v35 = *(_DWORD *)(**(_QWORD **)&NumberOfNetBufferLists + 112LL);
              else
                v35 = 1;
              *(_DWORD *)(*(_QWORD *)&NumberOfNetBufferLists + 132LL) = 0;
              ndisCallReceiveHandler(
                v11,
                NextIndicateReceiveNetBufferListsHandler,
                NextIndicateReceiveNetBufferListsContext,
                *(struct _NET_BUFFER_LIST **)&NumberOfNetBufferLists,
                v34,
                v35,
                v33);
              *(_QWORD *)&NumberOfNetBufferLists = v55;
            }
            while ( v55 );
            v8 = ReceiveFlags;
            v30 = v11;
            v31 = v60;
            v32 = v52;
          }
          *(_BYTE *)(v31 + 16) = 0;
          if ( v32 )
          {
            *(_BYTE *)(v31 + 16) = 1;
            goto LABEL_42;
          }
          v11 = (struct _NDIS_FILTER_BLOCK *)v11->NextIndicateReceiveNetBufferListsObject;
          v28 = (_QWORD *)v31;
          NextIndicateReceiveNetBufferListsHandler = (void (*)(void))v30->NextIndicateReceiveNetBufferListsHandler;
          NextIndicateReceiveNetBufferListsContext = v30->NextIndicateReceiveNetBufferListsContext;
          CurrentIrql = v51;
          if ( v11->Header.Type != 5 )
            goto LABEL_42;
        }
      }
      else
      {
LABEL_42:
        *(_QWORD *)&NumberOfNetBufferLists = *v28;
        if ( *v28 )
        {
          *v28 = 0LL;
          do
          {
            v36 = *(_QWORD *)(*(_QWORD *)&NumberOfNetBufferLists + 112LL);
            v37 = *(_DWORD *)(*(_QWORD *)&NumberOfNetBufferLists + 132LL);
            v38 = *(_DWORD *)(*(_QWORD *)&NumberOfNetBufferLists + 140LL);
            if ( **(_QWORD **)&NumberOfNetBufferLists )
              v39 = *(_DWORD *)(**(_QWORD **)&NumberOfNetBufferLists + 112LL);
            else
              v39 = 1;
            *(_DWORD *)(*(_QWORD *)&NumberOfNetBufferLists + 132LL) = 0;
            ndisCallReceiveHandler(
              v11,
              NextIndicateReceiveNetBufferListsHandler,
              NextIndicateReceiveNetBufferListsContext,
              *(struct _NET_BUFFER_LIST **)&NumberOfNetBufferLists,
              v38,
              v39,
              v37);
            *(_QWORD *)&NumberOfNetBufferLists = v36;
          }
          while ( v36 );
        }
      }
    }
    else
    {
      v62 = *((_QWORD *)MiniportAdapterHandle + 315);
      v63 = NextIndicateReceiveNetBufferListsContext;
      v67 = 2;
      v64 = NextIndicateReceiveNetBufferListsHandler;
      v65 = v7;
      v68 = NumberOfNetBufferLists;
      v66 = PortNumber;
      v69 = ReceiveFlags;
      if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v61) < 0 )
      {
        *(_QWORD *)&NumberOfNetBufferLists = NetBufferList;
        for ( i = NetBufferList; i; i = (PNET_BUFFER_LIST)i->Link.Alignment )
          i->Status = -1073741670;
        v43 = NetBufferList;
        for ( j = 0; v43; ++j )
          v43 = (PNET_BUFFER_LIST)v43->Link.Alignment;
        _InterlockedExchangeAdd(&v11->DroppedReceiveNbls, j);
        if ( (ReceiveFlags & 2) == 0 )
          ndisQueueStackExpansionFallbackNbls(v11, NetBufferList, 0);
      }
    }
    v14 = (unsigned __int128)(ndisTimeIncrement * (MEMORY[0xFFFFF78000000320] - v10) * (__int128)0x346DC5D63886594BLL) >> 64;
    v15 = ndisTimeIncrement * (MEMORY[0xFFFFF78000000320] - v10) / 10000;
    v16 = v8 & 1;
    if ( (v8 & 1) == 0 && KeGetCurrentIrql() != 2 )
      goto LABEL_20;
    v17 = 512;
    v18 = (unsigned int *)(*((_QWORD *)MiniportAdapterHandle + 418) + (KeGetPcr()->Prcb.Number << 12));
    v19 = *v18;
    v20 = ndisPeriodicReceivesNblCounts[v19];
    if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
    {
      LOBYTE(v23) = v53;
      *(_QWORD *)&NumberOfNetBufferLists = 512LL;
    }
    else
    {
      *(_QWORD *)&PortNumber = WatchdogInformation.DpcTimeLimit;
      if ( WatchdogInformation.DpcTimeLimit )
      {
        v21 = WatchdogInformation.DpcTimeCount << 10;
        if ( WatchdogInformation.DpcTimeLimit == 1280 )
          v22 = v21 / 0x500;
        else
          v22 = v21 / WatchdogInformation.DpcTimeLimit;
        v23 = v53;
        HIDWORD(v14) = 0;
        v24 = v20 * (1024 - v22);
        LODWORD(v14) = v24 % v53;
        v17 = v24 / v53;
      }
      else
      {
        v23 = v53;
      }
      if ( WatchdogInformation.DpcWatchdogLimit )
      {
        *(_QWORD *)&PortNumber = WatchdogInformation.DpcWatchdogCount << 10;
        if ( WatchdogInformation.DpcWatchdogLimit == 7680 )
          v40 = PortNumber / 0x1E00;
        else
          v40 = PortNumber / WatchdogInformation.DpcWatchdogLimit;
        if ( v40 > 0x200 )
          v40 = 1024;
        HIDWORD(v14) = 0;
        v41 = v20 * (1024 - v40);
        if ( v41 )
        {
          LODWORD(v14) = v41 % v23;
          *(_QWORD *)&NumberOfNetBufferLists = v41 / v23;
        }
        else
        {
          LODWORD(v14) = 0 % v23;
          *(_QWORD *)&NumberOfNetBufferLists = 0 / v23;
        }
      }
      else
      {
        *(_QWORD *)&NumberOfNetBufferLists = 512LL;
      }
    }
    v25 = v19 + 1;
    if ( (unsigned int)(v19 + 1) >= 0xB || v17 >= 0x200 )
    {
      if ( !(_DWORD)v19 || v17 <= 0x300 )
      {
LABEL_19:
        v16 = v8 & 1;
LABEL_20:
        v26 = v8 & 2;
        if ( v26 && ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(
            NetBufferList,
            *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 314),
            *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 517),
            NdisNblTrackerEvent_ReturnedToMiniportResources,
            v16 != 0);
        if ( Microsoft_Windows_Networking_CorrelationEnabled && v26 )
          ndisMarkNetBufferListCorrelationIdsAsUsed(
            NetBufferList,
            v14,
            *(_QWORD *)&PortNumber,
            *(_QWORD *)&NumberOfNetBufferLists);
        v5 = v49;
        goto LABEL_23;
      }
      v25 = v19 - 1;
    }
    if ( v25 != 11 )
    {
      *v18 = v25;
      if ( (Microsoft_Windows_NDISEnableBits & 0x20000000000LL) != 0 )
      {
        v48 = NumberOfNetBufferLists;
        v45 = v25;
        Number = KeGetPcr()->Prcb.Number;
        v47 = (*((_QWORD *)MiniportAdapterHandle + 510) >> 24) & 0xFFFFFF;
        Template_qqqqqqqq(
          Number,
          v47,
          (_DWORD)MiniportAdapterHandle + 4064,
          v47,
          Number,
          v23,
          v15,
          ndisPeriodicReceivesNblCounts[v19],
          ndisPeriodicReceivesNblCounts[v45],
          v17,
          v48);
      }
    }
    goto LABEL_19;
  }
  if ( (ReceiveFlags & 2) == 0 )
    (*((void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, bool))MiniportAdapterHandle + 308))(
      *((_QWORD *)MiniportAdapterHandle + 294),
      v7,
      (ReceiveFlags & 1) != 0);
LABEL_23:
  if ( (v56.DatapathCyclesMask & 4) != 0 )
  {
    ndisPcwEndCycleCounter(&v56, 2u, 0xFuLL);
    if ( v5 != 2 )
      KeLowerIrql(v5);
  }
}

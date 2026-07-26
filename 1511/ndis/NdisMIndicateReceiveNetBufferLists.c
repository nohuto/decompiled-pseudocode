/*
 * XREFs of NdisMIndicateReceiveNetBufferLists @ 0x1C00039D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00040C0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000EE70 (-ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C0011BA0 (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011DA0 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0011DDC (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0025288 (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0048AF4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00526B0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     Template_qqqqqqqq @ 0x1C0061A1C (Template_qqqqqqqq.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisMIndicateReceiveNetBufferLists(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  NDIS_PORT_NUMBER v5; // esi
  unsigned int v9; // r15d
  __int64 v10; // rbx
  void (*NextIndicateReceiveNetBufferListsHandler)(void); // r10
  void *NextIndicateReceiveNetBufferListsContext; // r11
  struct _NDIS_FILTER_BLOCK *v13; // rdi
  char v14; // di
  struct _NET_BUFFER_LIST **v15; // r12
  unsigned __int64 v16; // rcx
  struct _NDIS_FILTER_BLOCK *v17; // rdx
  __int64 v18; // r14
  char v19; // al
  struct _NET_BUFFER_LIST *v20; // r9
  struct _NET_BUFFER_LIST *Scratch; // rsi
  unsigned int ChildRefCount; // ecx
  unsigned int NdisReserved2; // edx
  unsigned int v24; // eax
  struct _NET_BUFFER_LIST *v25; // r9
  struct _NET_BUFFER_LIST *v26; // rsi
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // eax
  PNET_BUFFER_LIST i; // rax
  PNET_BUFFER_LIST Alignment; // rax
  unsigned int j; // ecx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rbx
  int v36; // r12d
  ULONG v37; // esi
  unsigned int *v38; // r14
  __int64 v39; // rdi
  int v40; // r13d
  ULONG v41; // ecx
  ULONG v42; // eax
  NDIS_PORT_NUMBER v43; // r9d
  unsigned int v44; // ecx
  struct NDIS_NBL_TRACKER_HANDLE__ **v45; // rdi
  __int64 v46; // rax
  unsigned int Number; // ecx
  int v48; // r9d
  char v49; // [rsp+58h] [rbp-B0h]
  KIRQL v50; // [rsp+68h] [rbp-A0h]
  char v51; // [rsp+69h] [rbp-9Fh]
  NDIS_PORT_NUMBER v53; // [rsp+70h] [rbp-98h]
  void *v56; // [rsp+88h] [rbp-80h]
  void (*v57)(void); // [rsp+90h] [rbp-78h]
  _DWORD *v58; // [rsp+98h] [rbp-70h]
  struct NDIS_PCW_CONTEXT v59; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-50h]
  __int64 v61; // [rsp+C0h] [rbp-48h]
  PNET_BUFFER_LIST v62; // [rsp+C8h] [rbp-40h] BYREF
  PNET_BUFFER_LIST v63; // [rsp+D0h] [rbp-38h]
  __int64 v64; // [rsp+D8h] [rbp-30h]
  _BYTE v65[8]; // [rsp+E0h] [rbp-28h] BYREF
  struct _NDIS_FILTER_BLOCK *v66; // [rsp+E8h] [rbp-20h]
  void *v67; // [rsp+F0h] [rbp-18h]
  void (*v68)(void); // [rsp+F8h] [rbp-10h]
  PNET_BUFFER_LIST v69; // [rsp+100h] [rbp-8h]
  NDIS_PORT_NUMBER v70; // [rsp+108h] [rbp+0h]
  int v71; // [rsp+10Ch] [rbp+4h]
  ULONG v72; // [rsp+110h] [rbp+8h]
  ULONG v73; // [rsp+114h] [rbp+Ch]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+118h] [rbp+10h] BYREF

  v5 = PortNumber;
  v59.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 5);
  v59.DatapathEventsMask = *((_DWORD *)MiniportAdapterHandle + 12);
  v50 = 2;
  v59.DatapathCyclesMask = *((_DWORD *)MiniportAdapterHandle + 20);
  v59.CurrentCpu = -1;
  if ( (v59.DatapathCyclesMask & 4) != 0 )
  {
    if ( (ReceiveFlags & 1) == 0 )
      v50 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v59, 2u);
  }
  if ( *((_BYTE *)MiniportAdapterHandle + 2672) )
  {
    *((_DWORD *)MiniportAdapterHandle + 679) += NumberOfNetBufferLists;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisGenerateNetBufferListCorrelationIds(NetBufferList, NumberOfNetBufferLists);
    if ( ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferList,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 517),
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 314),
        (enum _NDIS_NBL_TRACKER_OWNERSHIP_EVENT)(((unsigned __int8)ReceiveFlags >> 1) & 1 | 0x80),
        ReceiveFlags & 1);
    v9 = 0;
    v10 = MEMORY[0xFFFFF78000000320];
    NextIndicateReceiveNetBufferListsHandler = (void (*)(void))*((_QWORD *)MiniportAdapterHandle + 329);
    NextIndicateReceiveNetBufferListsContext = (void *)*((_QWORD *)MiniportAdapterHandle + 313);
    v13 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 315);
    v61 = MEMORY[0xFFFFF78000000320];
    v57 = NextIndicateReceiveNetBufferListsHandler;
    v56 = NextIndicateReceiveNetBufferListsContext;
    if ( v13->Header.Type == 17 )
    {
      v14 = ReceiveFlags;
      ((void (__fastcall *)(void *, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG))NextIndicateReceiveNetBufferListsHandler)(
        NextIndicateReceiveNetBufferListsContext,
        NetBufferList,
        v5,
        NumberOfNetBufferLists,
        ReceiveFlags);
    }
    else
    {
      if ( (ReceiveFlags & 2) != 0
        || ndisIterativeDataPathDisabled
        || (ReceiveFlags & 1) == 0 && KeGetCurrentIrql() != 2 )
      {
        v73 = ReceiveFlags;
        v66 = v13;
        v67 = NextIndicateReceiveNetBufferListsContext;
        v71 = 2;
        v68 = NextIndicateReceiveNetBufferListsHandler;
        v69 = NetBufferList;
        v72 = NumberOfNetBufferLists;
        v70 = v5;
        if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v65) < 0 )
        {
          for ( i = NetBufferList; i; i = (PNET_BUFFER_LIST)i->Link.Alignment )
            i->Status = -1073741670;
          Alignment = NetBufferList;
          for ( j = 0; Alignment; ++j )
            Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
          _InterlockedExchangeAdd(&v13->DroppedReceiveNbls, j);
          if ( (ReceiveFlags & 2) == 0 )
            ndisQueueStackExpansionFallbackNbls(v13, NetBufferList, 0);
        }
      }
      else
      {
        PortNumber = KeGetPcr()->Prcb.Number;
        v15 = &v62;
        v53 = PortNumber;
        v63 = 0LL;
        v64 = 0LL;
        v62 = NetBufferList;
        NetBufferList->ChildRefCount = ReceiveFlags;
        v16 = NetBufferList->Link.Alignment;
        v63 = NetBufferList;
        NetBufferList->Scratch = 0LL;
        NetBufferList->Status = v5;
        if ( v16 )
          *(_QWORD *)(v16 + 112) = NumberOfNetBufferLists;
        if ( v13->Header.Type == 5 )
        {
          while ( *v15 )
          {
            v17 = v13;
            v18 = (__int64)&(*v13->IterativeDataPathTracker)[4 * PortNumber + 2];
            v60 = v18;
            v19 = *(_BYTE *)(v18 + 16);
            *(_BYTE *)(v18 + 16) = 1;
            v20 = *v15;
            v51 = v19;
            *v15 = 0LL;
            if ( v20 )
            {
              do
              {
                Scratch = (struct _NET_BUFFER_LIST *)v20->Scratch;
                ChildRefCount = v20->ChildRefCount;
                NdisReserved2 = v20->NdisReserved2;
                if ( v20->Link.Alignment )
                  v24 = *(_DWORD *)(v20->Link.Alignment + 112);
                else
                  v24 = 1;
                v20->ChildRefCount = 0;
                ndisCallReceiveHandler(v13, v57, v56, v20, NdisReserved2, v24, ChildRefCount);
                v20 = Scratch;
              }
              while ( Scratch );
              v10 = v61;
              v17 = v13;
              v18 = v60;
              NextIndicateReceiveNetBufferListsHandler = v57;
              NextIndicateReceiveNetBufferListsContext = v56;
              v19 = v51;
              *(_QWORD *)&PortNumber = v53;
            }
            *(_BYTE *)(v18 + 16) = 0;
            if ( v19 )
            {
              *(_BYTE *)(v18 + 16) = 1;
              goto LABEL_30;
            }
            v13 = (struct _NDIS_FILTER_BLOCK *)v13->NextIndicateReceiveNetBufferListsObject;
            v15 = (struct _NET_BUFFER_LIST **)v18;
            NextIndicateReceiveNetBufferListsHandler = (void (*)(void))v17->NextIndicateReceiveNetBufferListsHandler;
            NextIndicateReceiveNetBufferListsContext = v17->NextIndicateReceiveNetBufferListsContext;
            v57 = NextIndicateReceiveNetBufferListsHandler;
            v56 = NextIndicateReceiveNetBufferListsContext;
            if ( v13->Header.Type != 5 )
              goto LABEL_30;
          }
        }
        else
        {
LABEL_30:
          v25 = *v15;
          if ( *v15 )
          {
            *v15 = 0LL;
            do
            {
              v26 = (struct _NET_BUFFER_LIST *)v25->Scratch;
              v27 = v25->ChildRefCount;
              v28 = v25->NdisReserved2;
              if ( v25->Link.Alignment )
                v29 = *(_DWORD *)(v25->Link.Alignment + 112);
              else
                v29 = 1;
              v25->ChildRefCount = 0;
              ndisCallReceiveHandler(
                v13,
                NextIndicateReceiveNetBufferListsHandler,
                NextIndicateReceiveNetBufferListsContext,
                v25,
                v28,
                v29,
                v27);
              NextIndicateReceiveNetBufferListsHandler = v57;
              v25 = v26;
              NextIndicateReceiveNetBufferListsContext = v56;
            }
            while ( v26 );
          }
        }
      }
      v14 = ReceiveFlags;
    }
    v33 = ndisTimeIncrement * (MEMORY[0xFFFFF78000000320] - v10);
    v34 = (unsigned __int128)(v33 * (__int128)0x346DC5D63886594BLL) >> 64;
    v35 = v33 / 10000;
    v36 = v14 & 1;
    if ( (v14 & 1) != 0 || KeGetCurrentIrql() == 2 )
    {
      v37 = 512;
      v38 = (unsigned int *)(*((_QWORD *)MiniportAdapterHandle + 418) + (KeGetPcr()->Prcb.Number << 12));
      v39 = *v38;
      v40 = ndisPeriodicReceivesNblCounts[v39];
      v58 = &ndisPeriodicReceivesNblCounts[v39];
      if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
      {
        LOBYTE(v43) = 0;
      }
      else
      {
        *(_QWORD *)&PortNumber = 1024LL;
        if ( WatchdogInformation.DpcTimeLimit )
        {
          HIDWORD(v34) = 0;
          v41 = v40 * (1024 - (WatchdogInformation.DpcTimeCount << 10) / WatchdogInformation.DpcTimeLimit);
          LODWORD(v34) = v41 % NumberOfNetBufferLists;
          v37 = v41 / NumberOfNetBufferLists;
        }
        if ( WatchdogInformation.DpcWatchdogLimit )
        {
          v42 = (WatchdogInformation.DpcWatchdogCount << 10) / WatchdogInformation.DpcWatchdogLimit;
          if ( v42 > 0x200 )
            v42 = 1024;
          HIDWORD(v34) = 0;
          *(_QWORD *)&PortNumber = v40 * (1024 - v42);
          LODWORD(v34) = PortNumber % NumberOfNetBufferLists;
          v43 = PortNumber / NumberOfNetBufferLists;
        }
        else
        {
          LOBYTE(v43) = 0;
        }
      }
      v44 = v39 + 1;
      if ( (unsigned int)(v39 + 1) < 0xB && v37 < 0x200 )
        goto LABEL_61;
      if ( (_DWORD)v39 && v37 > 0x300 )
      {
        v44 = v39 - 1;
LABEL_61:
        v45 = (struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle;
        if ( v44 != 11 )
        {
          *v38 = v44;
          if ( (Microsoft_Windows_NDISEnableBits & 0x20000000000LL) != 0 )
          {
            v49 = v43;
            v46 = v44;
            Number = KeGetPcr()->Prcb.Number;
            v48 = (*((_QWORD *)MiniportAdapterHandle + 510) >> 24) & 0xFFFFFF;
            Template_qqqqqqqq(
              Number,
              v48,
              (_DWORD)MiniportAdapterHandle + 4064,
              v48,
              Number,
              NumberOfNetBufferLists,
              v35,
              *v58,
              ndisPeriodicReceivesNblCounts[v46],
              v37,
              v49);
          }
        }
        goto LABEL_65;
      }
    }
    v45 = (struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle;
LABEL_65:
    if ( (ReceiveFlags & 2) != 0 && ndisNblTrackerMode )
    {
      LOBYTE(v9) = v36 != 0;
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferList,
        v45[314],
        v45[517],
        NdisNblTrackerEvent_ReturnedToMiniportResources,
        v9);
    }
    if ( Microsoft_Windows_Networking_CorrelationEnabled && (ReceiveFlags & 2) != 0 )
      ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferList, v34, *(_QWORD *)&PortNumber);
    goto LABEL_73;
  }
  if ( (ReceiveFlags & 2) == 0 )
    (*((void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, bool))MiniportAdapterHandle + 308))(
      *((_QWORD *)MiniportAdapterHandle + 294),
      NetBufferList,
      (ReceiveFlags & 1) != 0);
LABEL_73:
  if ( (v59.DatapathCyclesMask & 4) != 0 )
  {
    ndisPcwEndCycleCounter(&v59, 2u, 0xFuLL);
    if ( v50 != 2 )
      KeLowerIrql(v50);
  }
}

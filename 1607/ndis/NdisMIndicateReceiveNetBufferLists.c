/*
 * XREFs of NdisMIndicateReceiveNetBufferLists @ 0x1C00025B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIndicateToPmodeOpens @ 0x1C0001E98 (ndisIndicateToPmodeOpens.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003810 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0003AE0 (ndisSortNetBufferLists.c)
 *     ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0003F00 (-ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003F60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00045B0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C0010AE4 (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0010CD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0010D10 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0012AB0 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0012B0C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00267B4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00267D0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026D64 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0026D78 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnPeriodicReceives @ 0x1C0026F18 (ndisReturnPeriodicReceives.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     Template_qqqqqqqq @ 0x1C0065DFC (Template_qqqqqqqq.c)
 */

void __stdcall NdisMIndicateReceiveNetBufferLists(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  KIRQL v5; // di
  NDIS_PORT_NUMBER v6; // r10d
  ULONG v7; // r11d
  NDIS_HANDLE v8; // r14
  unsigned int v9; // eax
  PNET_BUFFER_LIST v10; // r9
  char v11; // r12
  __int64 CurrentIrql; // rax
  struct _NET_BUFFER_LIST **v13; // rdi
  struct _NDIS_FILTER_BLOCK *v14; // rbx
  struct _NDIS_FILTER_BLOCK *v15; // r13
  void (*NextIndicateReceiveNetBufferListsHandler)(void); // rsi
  bool v17; // zf
  struct _NET_BUFFER_LIST *v18; // r15
  unsigned int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // rdx
  char *PoolWithTag; // rsi
  struct _NET_BUFFER_LIST *v23; // rdx
  _QWORD *RcvLinkSpeedIndicateUp; // r13
  struct _NET_BUFFER_LIST *v25; // rcx
  _QWORD *v26; // rbx
  _QWORD *v27; // r15
  unsigned int v28; // r12d
  int v29; // r14d
  __int64 v30; // rbx
  struct _NET_BUFFER_LIST *v31; // rdx
  _QWORD *v32; // rbx
  int v33; // r12d
  unsigned int v34; // r15d
  unsigned int j; // ebx
  __int64 v36; // rcx
  struct _NET_BUFFER_LIST *v37; // r10
  struct _NET_BUFFER_LIST *v38; // r15
  __int64 v39; // rbx
  int v40; // r13d
  unsigned int v41; // esi
  unsigned int *v42; // r15
  __int64 v43; // rdi
  int v44; // r12d
  ULONG v45; // ecx
  unsigned int v46; // edx
  unsigned int v47; // r10d
  unsigned int v48; // r9d
  unsigned int v49; // ecx
  int v50; // r12d
  enum _NDIS_NBL_TRACKER_OWNERSHIP_EVENT v51; // r9d
  struct _NET_BUFFER_LIST **v52; // r15
  unsigned __int64 Alignment; // rcx
  struct _NDIS_FILTER_BLOCK *v54; // r12
  __int64 v55; // r13
  char v56; // al
  struct _NET_BUFFER_LIST *v57; // r9
  struct _NDIS_FILTER_BLOCK *v58; // r14
  unsigned int ChildRefCount; // ecx
  unsigned int NdisReserved2; // edx
  unsigned int v61; // eax
  struct _NET_BUFFER_LIST *v62; // r9
  struct _NET_BUFFER_LIST *v63; // r15
  unsigned int v64; // ecx
  unsigned int v65; // edx
  unsigned int v66; // eax
  ULONG v67; // eax
  unsigned int v68; // r14d
  int v69; // r13d
  _QWORD *v70; // r12
  unsigned int v71; // r15d
  __int64 v72; // rcx
  struct _NET_BUFFER_LIST *v73; // rdx
  unsigned int v74; // edx
  __int64 v75; // r9
  struct _NET_BUFFER_LIST *v76; // rcx
  void *TcpOffloadDisconnectCompleteHandler; // rcx
  void (*v78)(void); // r12
  void (__fastcall *TcpOffloadEventHandler)(void *, unsigned int, unsigned int); // r13
  unsigned __int64 TcpOffloadForwardCompleteHandler; // rbx
  char v81; // r12
  __int64 v82; // r8
  __int64 v83; // r13
  __int64 v84; // r11
  unsigned __int64 v85; // rbx
  struct _NET_BUFFER_LIST **v86; // rdx
  _SLIST_HEADER *v87; // r12
  unsigned __int64 v88; // r10
  struct _NET_BUFFER_LIST **Region; // rax
  unsigned __int64 v90; // r13
  bool v91; // cl
  unsigned __int64 v92; // rdx
  _QWORD *v93; // rcx
  unsigned int v94; // r9d
  struct _NET_BUFFER_LIST **v95; // r8
  struct _NET_BUFFER_LIST **p_Next; // rax
  void (__fastcall *v97)(void *, unsigned int, unsigned int); // rdx
  __int64 v98; // r15
  char v99; // al
  struct _NET_BUFFER_LIST *v100; // r9
  void *v101; // r14
  struct _NET_BUFFER_LIST *v102; // rbx
  struct _NET_BUFFER_LIST *v103; // r9
  struct _NET_BUFFER_LIST *v104; // rbx
  __int64 v105; // rax
  struct _NDIS_FILTER_BLOCK *v106; // rbx
  struct _NET_BUFFER_LIST *v107; // rdx
  struct _NET_BUFFER_LIST *v108; // r9
  struct _NET_BUFFER_LIST *i; // rax
  unsigned int v110; // eax
  _SLIST_HEADER *v111; // rcx
  __int64 v112; // rax
  unsigned int Number; // ecx
  int v114; // r9d
  unsigned int v115; // [rsp+38h] [rbp-D0h]
  unsigned int v116; // [rsp+38h] [rbp-D0h]
  char v117; // [rsp+58h] [rbp-B0h]
  char v118; // [rsp+68h] [rbp-A0h] BYREF
  char v119; // [rsp+69h] [rbp-9Fh]
  bool v120; // [rsp+6Ah] [rbp-9Eh] BYREF
  char v121; // [rsp+6Bh] [rbp-9Dh]
  KIRQL v122; // [rsp+6Ch] [rbp-9Ch]
  _QWORD *v123; // [rsp+70h] [rbp-98h]
  __int64 v124; // [rsp+78h] [rbp-90h]
  struct _NDIS_FILTER_BLOCK *NextIndicateReceiveNetBufferListsContext; // [rsp+80h] [rbp-88h]
  struct _NET_BUFFER_LIST **v126; // [rsp+88h] [rbp-80h]
  struct _NET_BUFFER_LIST *v127; // [rsp+90h] [rbp-78h]
  unsigned int v128; // [rsp+98h] [rbp-70h]
  struct _NET_BUFFER_LIST *Scratch; // [rsp+A0h] [rbp-68h]
  void *v130; // [rsp+A8h] [rbp-60h]
  NDIS_HANDLE v131; // [rsp+B0h] [rbp-58h]
  struct NDIS_PCW_CONTEXT v132; // [rsp+B8h] [rbp-50h] BYREF
  PNET_BUFFER_LIST v133; // [rsp+D0h] [rbp-38h] BYREF
  PNET_BUFFER_LIST v134; // [rsp+D8h] [rbp-30h]
  __int64 v135; // [rsp+E0h] [rbp-28h]
  struct NDIS_PCW_CONTEXT v136; // [rsp+E8h] [rbp-20h] BYREF
  struct _NET_BUFFER_LIST *v137; // [rsp+100h] [rbp-8h] BYREF
  struct _NET_BUFFER_LIST *v138; // [rsp+108h] [rbp+0h]
  __int64 v139; // [rsp+110h] [rbp+8h]
  char v140[8]; // [rsp+118h] [rbp+10h] BYREF
  void (__fastcall *v141)(void *, unsigned int, unsigned int); // [rsp+120h] [rbp+18h]
  void *v142; // [rsp+128h] [rbp+20h]
  void (*v143)(void); // [rsp+130h] [rbp+28h]
  struct _NET_BUFFER_LIST *v144; // [rsp+138h] [rbp+30h]
  int v145; // [rsp+140h] [rbp+38h]
  __int64 v146; // [rsp+144h] [rbp+3Ch]
  unsigned int v147; // [rsp+14Ch] [rbp+44h]
  char v148[8]; // [rsp+150h] [rbp+48h] BYREF
  struct _NDIS_FILTER_BLOCK *v149; // [rsp+158h] [rbp+50h]
  struct _NDIS_FILTER_BLOCK *v150; // [rsp+160h] [rbp+58h]
  void (*v151)(void); // [rsp+168h] [rbp+60h]
  PNET_BUFFER_LIST v152; // [rsp+170h] [rbp+68h]
  NDIS_PORT_NUMBER v153; // [rsp+178h] [rbp+70h]
  int v154; // [rsp+17Ch] [rbp+74h]
  ULONG v155; // [rsp+180h] [rbp+78h]
  ULONG v156; // [rsp+184h] [rbp+7Ch]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+188h] [rbp+80h] BYREF

  v5 = 2;
  v6 = PortNumber;
  v136.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 5);
  v7 = NumberOfNetBufferLists;
  v136.DatapathEventsMask = *((_DWORD *)MiniportAdapterHandle + 12);
  v8 = MiniportAdapterHandle;
  v9 = *((_DWORD *)MiniportAdapterHandle + 20);
  LODWORD(v124) = NumberOfNetBufferLists;
  v10 = NetBufferList;
  LODWORD(v123) = PortNumber;
  v127 = NetBufferList;
  v131 = MiniportAdapterHandle;
  v121 = 2;
  v136.DatapathCyclesMask = v9;
  v136.CurrentCpu = -1;
  if ( (v9 & 4) != 0 )
  {
    if ( (ReceiveFlags & 1) == 0 )
    {
      v5 = KfRaiseIrql(2u);
      v121 = v5;
    }
    ndisPcwStartCycleCounter(&v136, 2u);
    v6 = (unsigned int)v123;
    v10 = v127;
  }
  if ( *((_BYTE *)v8 + 2672) )
  {
    *((_DWORD *)v8 + 679) += v7;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      ndisGenerateNetBufferListCorrelationIds(v10, v7);
      v6 = (unsigned int)v123;
      v7 = v124;
      v10 = v127;
    }
    v11 = ReceiveFlags;
    if ( ndisNblTrackerMode )
    {
      v51 = NdisNblTrackerEvent_MiniportIndicatedResources;
      if ( (ReceiveFlags & 2) == 0 )
        v51 = NdisNblTrackerEvent_MiniportIndicated;
      ndisNblTrackerTransferOwnershipInternal(
        v127,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)v8 + 517),
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)v8 + 314),
        v51,
        (ReceiveFlags & 1) != 0);
      v6 = (unsigned int)v123;
      v7 = v124;
      v10 = v127;
    }
    HIDWORD(CurrentIrql) = -2176;
    v13 = (struct _NET_BUFFER_LIST **)MEMORY[0xFFFFF78000000320];
    v14 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v8 + 315);
    v15 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v8 + 313);
    NextIndicateReceiveNetBufferListsHandler = (void (*)(void))*((_QWORD *)v8 + 329);
    v126 = (struct _NET_BUFFER_LIST **)MEMORY[0xFFFFF78000000320];
    v17 = v14->Header.Type == 17;
    NextIndicateReceiveNetBufferListsContext = v15;
    if ( !v17 )
    {
      if ( (ReceiveFlags & 2) == 0
        && ndisIterativeDataPathDisabled == (ReceiveFlags & 2)
        && ((ReceiveFlags & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
      {
        LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
        v52 = &v133;
        LODWORD(v123) = CurrentIrql;
        v134 = 0LL;
        v135 = 0LL;
        v133 = v10;
        Alignment = v10->Link.Alignment;
        v134 = v10;
        v10->Scratch = 0LL;
        v10->ChildRefCount = ReceiveFlags;
        v10->Status = v6;
        if ( Alignment )
        {
          *(_QWORD *)(Alignment + 112) = v7;
          CurrentIrql = (unsigned int)v123;
        }
        if ( v14->Header.Type == 5 )
        {
          while ( *v52 )
          {
            v54 = v14;
            v55 = (__int64)v14->IterativeDataPathTracker[CurrentIrql];
            v56 = *(_BYTE *)(v55 + 64);
            *(_BYTE *)(v55 + 64) = 1;
            v57 = *v52;
            v119 = v56;
            *v52 = 0LL;
            if ( v57 )
            {
              v58 = NextIndicateReceiveNetBufferListsContext;
              do
              {
                ChildRefCount = v57->ChildRefCount;
                NdisReserved2 = v57->NdisReserved2;
                Scratch = (struct _NET_BUFFER_LIST *)v57->Scratch;
                if ( v57->Link.Alignment )
                  v61 = *(_DWORD *)(v57->Link.Alignment + 112);
                else
                  v61 = 1;
                v57->ChildRefCount = 0;
                ndisCallReceiveHandler(
                  v14,
                  NextIndicateReceiveNetBufferListsHandler,
                  v58,
                  v57,
                  NdisReserved2,
                  v61,
                  ChildRefCount);
                v57 = Scratch;
              }
              while ( Scratch );
              v13 = v126;
              v54 = v14;
              v8 = v131;
              v56 = v119;
            }
            *(_BYTE *)(v55 + 64) = 0;
            if ( v56 )
            {
              *(_BYTE *)(v55 + 64) = 1;
LABEL_86:
              v15 = NextIndicateReceiveNetBufferListsContext;
              v11 = ReceiveFlags;
              goto LABEL_87;
            }
            v52 = (struct _NET_BUFFER_LIST **)(v55 + 48);
            v14 = (struct _NDIS_FILTER_BLOCK *)v14->NextIndicateReceiveNetBufferListsObject;
            NextIndicateReceiveNetBufferListsHandler = (void (*)(void))v54->NextIndicateReceiveNetBufferListsHandler;
            NextIndicateReceiveNetBufferListsContext = (struct _NDIS_FILTER_BLOCK *)v54->NextIndicateReceiveNetBufferListsContext;
            CurrentIrql = (unsigned int)v123;
            if ( v14->Header.Type != 5 )
              goto LABEL_86;
          }
          v11 = ReceiveFlags;
        }
        else
        {
LABEL_87:
          v62 = *v52;
          if ( *v52 )
          {
            *v52 = 0LL;
            do
            {
              v63 = (struct _NET_BUFFER_LIST *)v62->Scratch;
              v64 = v62->ChildRefCount;
              v65 = v62->NdisReserved2;
              if ( v62->Link.Alignment )
                v66 = *(_DWORD *)(v62->Link.Alignment + 112);
              else
                v66 = 1;
              v62->ChildRefCount = 0;
              ndisCallReceiveHandler(v14, NextIndicateReceiveNetBufferListsHandler, v15, v62, v65, v66, v64);
              v62 = v63;
            }
            while ( v63 );
            v8 = v131;
          }
        }
      }
      else
      {
        v149 = v14;
        v150 = v15;
        v154 = 2;
        v151 = NextIndicateReceiveNetBufferListsHandler;
        v152 = v10;
        v155 = v7;
        v153 = v6;
        v156 = ReceiveFlags;
        if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v148) < 0 )
        {
          v108 = v127;
          for ( i = v127; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
            i->Status = -1073741670;
          v110 = 0;
          v111 = (_SLIST_HEADER *)v108;
          if ( v108 )
          {
            do
            {
              v111 = (_SLIST_HEADER *)v111->Alignment;
              ++v110;
            }
            while ( v111 );
          }
          _InterlockedExchangeAdd(&v14->DroppedReceiveNbls, v110);
          if ( (ReceiveFlags & 2) == 0 )
            ndisQueueStackExpansionFallbackNbls(v14, v108, 0);
        }
      }
LABEL_46:
      v39 = ndisTimeIncrement * (MEMORY[0xFFFFF78000000320] - (_QWORD)v13) / 10000LL;
      v40 = v11 & 1;
      if ( (v11 & 1) == 0 && KeGetCurrentIrql() != 2 )
        goto LABEL_58;
      v41 = 512;
      v42 = (unsigned int *)(*((_QWORD *)v8 + 418) + (KeGetPcr()->Prcb.Number << 12));
      v128 = 512;
      v43 = *v42;
      v44 = ndisPeriodicReceivesNblCounts[v43];
      v126 = (struct _NET_BUFFER_LIST **)&ndisPeriodicReceivesNblCounts[v43];
      if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
      {
        LOBYTE(v47) = v124;
        LOBYTE(v48) = 0;
      }
      else
      {
        if ( WatchdogInformation.DpcTimeLimit )
        {
          v45 = WatchdogInformation.DpcTimeCount << 10;
          if ( WatchdogInformation.DpcTimeLimit == 1280 )
            v46 = v45 / 0x500;
          else
            v46 = v45 / WatchdogInformation.DpcTimeLimit;
          v47 = v124;
          v41 = v44 * (1024 - v46) / (unsigned int)v124;
        }
        else
        {
          v47 = v124;
        }
        if ( WatchdogInformation.DpcWatchdogLimit )
        {
          v67 = (WatchdogInformation.DpcWatchdogCount << 10) / WatchdogInformation.DpcWatchdogLimit;
          if ( v67 > 0x200 )
            v67 = 1024;
          v48 = v44 * (1024 - v67) / v47;
        }
        else
        {
          LOBYTE(v48) = v128;
        }
      }
      v49 = v43 + 1;
      if ( (unsigned int)(v43 + 1) >= 0xB || v41 >= 0x200 )
      {
        if ( !(_DWORD)v43 || v41 <= 0x300 )
        {
LABEL_57:
          v11 = ReceiveFlags;
LABEL_58:
          v50 = v11 & 2;
          if ( v50 && ndisNblTrackerMode )
            ndisNblTrackerTransferOwnershipInternal(
              v127,
              *((struct NDIS_NBL_TRACKER_HANDLE__ **)v8 + 314),
              *((struct NDIS_NBL_TRACKER_HANDLE__ **)v8 + 517),
              NdisNblTrackerEvent_ReturnedToMiniportResources,
              v40 != 0);
          if ( Microsoft_Windows_Networking_CorrelationEnabled && v50 )
            ndisMarkNetBufferListCorrelationIdsAsUsed(v127);
          v5 = v121;
          goto LABEL_61;
        }
        v49 = v43 - 1;
      }
      if ( v49 != 11 )
      {
        *v42 = v49;
        if ( (Microsoft_Windows_NDISEnableBits & 0x20000000000LL) != 0 )
        {
          v117 = v48;
          v112 = v49;
          Number = KeGetPcr()->Prcb.Number;
          v114 = (*((_QWORD *)v8 + 510) >> 24) & 0xFFFFFF;
          Template_qqqqqqqq(
            Number,
            v114,
            (_DWORD)v8 + 4064,
            v114,
            Number,
            v47,
            v39,
            *(_DWORD *)v126,
            ndisPeriodicReceivesNblCounts[v112],
            v41,
            v117);
        }
      }
      goto LABEL_57;
    }
    if ( (char *)NextIndicateReceiveNetBufferListsHandler != (char *)&ndisMTopReceiveNetBufferLists )
    {
      ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, ULONG))NextIndicateReceiveNetBufferListsHandler)(
        v15,
        v127,
        v6,
        v7,
        ReceiveFlags);
      goto LABEL_46;
    }
    if ( (v10->NblFlags & 0x8000) != 0 )
    {
      ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, ULONG))v15[2].PnPRef.RefCountTracker)(
        v15,
        v127,
        v6,
        v7,
        ReceiveFlags);
      goto LABEL_46;
    }
    if ( !BYTE1(v15[2].DirectOidRequestCount) )
    {
      (*(void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, ULONG))&v15[2].PnPRef.ReferenceCount)(
        v15,
        v127,
        v6,
        v7,
        ReceiveFlags);
      goto LABEL_46;
    }
    v128 = 0;
    v119 = 0;
    LODWORD(Scratch) = ReceiveFlags & 1;
    v18 = 0LL;
    if ( ((ReceiveFlags & 1) != 0 || KeGetCurrentIrql() == 2)
      && ndisPerProcRcvTrackers
      && (v19 = KeGetPcr()->Prcb.Number,
          v20 = 2096LL * v19,
          v128 = v19,
          v21 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v20),
          (unsigned int)v21 < 3) )
    {
      v119 = 1;
      PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v21 + v20 + 8;
      *(_DWORD *)((char *)ndisPerProcRcvTrackers + v20) = v21 + 1;
    }
    else
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
      if ( !PoolWithTag )
      {
        if ( (unsigned __int8)byte_1C00895CB >= 2u )
          WPP_SF_(10LL, &WPP_27a9f588cd63370d861f87f60b3f12b7_Traceguids, v20);
        goto LABEL_38;
      }
      v6 = (unsigned int)v123;
      v7 = v124;
    }
    v23 = v127;
    RcvLinkSpeedIndicateUp = (_QWORD *)v15->RcvLinkSpeedIndicateUp;
    LODWORD(v130) = ReceiveFlags & 2;
    v25 = v127;
    PoolWithTag[692] = 0;
    if ( (ReceiveFlags & 2) == 0 )
    {
      do
      {
        v18 = v25;
        v25->Flags = v25->Flags & 0xFFFFFFF0 | 4;
        v25 = (struct _NET_BUFFER_LIST *)v25->Link.Alignment;
      }
      while ( v25 );
    }
    v26 = (_QWORD *)RcvLinkSpeedIndicateUp[41];
    if ( v26 && *(_BYTE *)(v26[3] + 56LL) >= 6u )
    {
      ndisMIndicateNetBufferListsToOpen(v26, v23, ReceiveFlags);
      v15 = NextIndicateReceiveNetBufferListsContext;
      v37 = 0LL;
      *((_QWORD *)PoolWithTag + 8) = 0LL;
      *((_DWORD *)PoolWithTag + 20) = 0;
LABEL_39:
      if ( (v11 & 2) == 0 )
      {
        if ( !PoolWithTag )
        {
          v38 = v127;
          goto LABEL_43;
        }
        if ( PoolWithTag[692] )
        {
          v38 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
LABEL_43:
          if ( !v38 )
            goto LABEL_44;
          v74 = 0;
          LODWORD(v123) = 0;
          v75 = 1LL;
          if ( (_DWORD)Scratch )
          {
            v74 = 1;
            LODWORD(v123) = 1;
          }
          v76 = v38;
          v132.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)v15->FilterInstanceName._p;
          v132.DatapathEventsMask = (unsigned int)v15->FilterFriendlyName;
          v132.DatapathCyclesMask = *(_DWORD *)&v15->Ref.ReferenceCount;
          v122 = 2;
          v132.CurrentCpu = -1;
          do
          {
            v76->Flags = v76->Flags & 0xFFFFFFF4 | 8;
            v76 = (struct _NET_BUFFER_LIST *)v76->Link.Alignment;
          }
          while ( v76 );
          if ( Microsoft_Windows_Networking_CorrelationEnabled )
            ndisMarkNetBufferListCorrelationIdsAsUsed(v38);
          if ( LODWORD(v15[3].NextReturnNetBufferListsContext) )
          {
            v105 = ndisReturnPeriodicReceives(v15, v38);
            v74 = (unsigned int)v123;
            v37 = 0LL;
            v38 = (struct _NET_BUFFER_LIST *)v105;
            v75 = 1LL;
          }
          if ( !v38 )
            goto LABEL_44;
          if ( ndisNblTrackerMode )
          {
            TcpOffloadForwardCompleteHandler = (unsigned __int64)v15[2].TcpOffloadForwardCompleteHandler;
            v81 = ndisNblTrackerEpoch;
            v82 = (unsigned int)v37;
            if ( (v74 & 1) != 0 )
              v82 = (unsigned int)v75;
            v118 = 0;
            v83 = (__int64)v37;
            v84 = (__int64)v37;
            v120 = v82 & 1;
            v75 = (__int64)v37;
            if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
            {
              ndisNblTrackerRecordEvent(v38, 0LL, 0x87u, (void *)TcpOffloadForwardCompleteHandler, v82);
              v84 = v83;
              v75 = v83;
            }
            v85 = TcpOffloadForwardCompleteHandler & 0xFFFFFFFFFFFFFFFDuLL;
            if ( (v85 & 1) != 0 )
              v86 = *(struct _NET_BUFFER_LIST ***)((v85 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
            else
              v86 = (struct _NET_BUFFER_LIST **)v85;
            v126 = v86;
            if ( (v85 & 1) != 0 )
              v85 ^= ((unsigned __int8)v85 ^ (unsigned __int8)(2 * v81)) & 2;
            v87 = (_SLIST_HEADER *)v38;
            do
            {
              v88 = v87[22].Alignment;
              do
              {
                if ( v87[22].Alignment != v88 )
                  break;
                if ( !v88 && !v87[7].Region )
                  v87[7].Region = ndisSourceHandleFromOwner(0LL, v86, v82);
                if ( (v88 & 4) != 0 || (Region = (struct _NET_BUFFER_LIST **)v87[7].Region) == 0LL )
                {
                  v87[22].Alignment = v85 | 4;
                }
                else if ( Region != v86 || v87[1].Region )
                {
                  ++v83;
                  v87[22].Alignment = v85;
                }
                else
                {
                  ++v75;
                  v87[22].Alignment = 24LL;
                  ++v83;
                }
                v87 = (_SLIST_HEADER *)v87->Alignment;
              }
              while ( v87 );
              Scratch = (struct _NET_BUFFER_LIST *)v75;
              if ( (v88 & 1) != 0 )
              {
                ndisNblTrackerUpdateOwnershipCount(v88, v84 - v83, &v120, &v118);
                v86 = v126;
                v75 = (__int64)Scratch;
              }
              v84 = v83;
            }
            while ( v87 );
            v8 = v131;
            v90 = v83 - v75;
            if ( (v85 & 1) != 0 && v90 )
            {
              v91 = v120;
              if ( !v120 && !v118 )
              {
                v91 = KeGetCurrentIrql() == 2;
                v120 = v91;
              }
              v92 = (v85 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v85 >> 1) & 1);
              if ( v91 )
              {
                v93 = (_QWORD *)(*(_QWORD *)(v92 + 40) + (KeGetPcr()->Prcb.Number << 12));
                *v93 += v90;
              }
              else
              {
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v92 + 48), v90);
              }
            }
            v15 = NextIndicateReceiveNetBufferListsContext;
            v37 = 0LL;
            v74 = (unsigned int)v123;
          }
          if ( (v132.DatapathCyclesMask & 0x20) != 0 )
          {
            if ( (v74 & 1) == 0 )
              v122 = KfRaiseIrql(2u);
            ndisPcwStartCycleCounter(&v132, 5u);
            v74 = (unsigned int)v123;
            v37 = 0LL;
          }
          TcpOffloadDisconnectCompleteHandler = v15[2].TcpOffloadDisconnectCompleteHandler;
          v78 = *(void (**)(void))&v15[2].IfIndex;
          TcpOffloadEventHandler = v15[2].TcpOffloadEventHandler;
          v130 = TcpOffloadDisconnectCompleteHandler;
          if ( *(_BYTE *)TcpOffloadEventHandler == 17 )
            goto LABEL_118;
          if ( ndisIterativeDataPathDisabled || (v74 & 1) == 0 && KeGetCurrentIrql() != 2 )
          {
            v106 = NextIndicateReceiveNetBufferListsContext;
            if ( NextIndicateReceiveNetBufferListsContext->Header.Type == 5 )
            {
              v142 = TcpOffloadDisconnectCompleteHandler;
              v147 = v74;
              v141 = TcpOffloadEventHandler;
              v146 = 3LL;
              v143 = v78;
              v144 = v38;
              v145 = (int)v37;
              if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v140) < 0 )
                ndisQueueStackExpansionFallbackNbls(v106, v38, 0);
              goto LABEL_119;
            }
LABEL_118:
            ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, __int64))v78)(
              TcpOffloadDisconnectCompleteHandler,
              v38,
              v74,
              v75);
LABEL_119:
            if ( (v132.DatapathCyclesMask & 0x20) != 0 )
            {
              ndisPcwEndCycleCounter(&v132, 5u, 0x12uLL);
              if ( v122 != 2 )
                KeLowerIrql(v122);
            }
            v11 = ReceiveFlags;
            goto LABEL_44;
          }
          v94 = KeGetPcr()->Prcb.Number;
          v95 = &v137;
          p_Next = 0LL;
          LODWORD(Scratch) = v94;
          v137 = v37;
          v138 = 0LL;
          v139 = 0LL;
          v126 = &v137;
          if ( v37 )
          {
            if ( v74 == MEMORY[0x84] && (v74 & 6) == 0 )
            {
              v107 = (struct _NET_BUFFER_LIST *)MEMORY[0];
              if ( MEMORY[0] )
              {
                do
                {
                  p_Next = &v107->Next;
                  v107 = (struct _NET_BUFFER_LIST *)v107->Link.Alignment;
                }
                while ( v107 );
              }
              *p_Next = v38;
LABEL_155:
              if ( *(_BYTE *)TcpOffloadEventHandler == 5 )
              {
                while ( *v95 )
                {
                  v97 = TcpOffloadEventHandler;
                  v98 = 96LL * v94 + *((_QWORD *)TcpOffloadEventHandler + 53) + 72LL;
                  NextIndicateReceiveNetBufferListsContext = (struct _NDIS_FILTER_BLOCK *)v98;
                  v99 = *(_BYTE *)(v98 + 16);
                  *(_BYTE *)(v98 + 16) = 1;
                  v100 = *v95;
                  v118 = v99;
                  *v95 = v37;
                  if ( v100 )
                  {
                    v101 = v130;
                    do
                    {
                      v102 = (struct _NET_BUFFER_LIST *)v100->Scratch;
                      v115 = v100->ChildRefCount;
                      v100->ChildRefCount = 0;
                      ndisCallReceiveCompleteHandler(TcpOffloadEventHandler, v78, v101, v100, 0, 0, v115);
                      v100 = v102;
                    }
                    while ( v102 );
                    v8 = v131;
                    v97 = TcpOffloadEventHandler;
                    v98 = (__int64)NextIndicateReceiveNetBufferListsContext;
                    v37 = 0LL;
                    v95 = v126;
                    v99 = v118;
                  }
                  *(_BYTE *)(v98 + 16) = 0;
                  if ( v99 )
                  {
                    TcpOffloadDisconnectCompleteHandler = v130;
                    *(_BYTE *)(v98 + 16) = 1;
                    goto LABEL_163;
                  }
                  TcpOffloadEventHandler = (void (__fastcall *)(void *, unsigned int, unsigned int))*((_QWORD *)TcpOffloadEventHandler + 69);
                  v95 = (struct _NET_BUFFER_LIST **)v98;
                  TcpOffloadDisconnectCompleteHandler = (void *)*((_QWORD *)v97 + 67);
                  v78 = (void (*)(void))*((_QWORD *)v97 + 66);
                  v94 = (unsigned int)Scratch;
                  v17 = *(_BYTE *)TcpOffloadEventHandler == 5;
                  v130 = TcpOffloadDisconnectCompleteHandler;
                  v126 = (struct _NET_BUFFER_LIST **)v98;
                  if ( !v17 )
                    goto LABEL_163;
                }
              }
              else
              {
LABEL_163:
                v103 = *v95;
                if ( *v95 )
                {
                  *v95 = v37;
                  do
                  {
                    v104 = (struct _NET_BUFFER_LIST *)v103->Scratch;
                    v116 = v103->ChildRefCount;
                    v103->ChildRefCount = (int)v37;
                    ndisCallReceiveCompleteHandler(
                      TcpOffloadEventHandler,
                      v78,
                      TcpOffloadDisconnectCompleteHandler,
                      v103,
                      (unsigned int)v37,
                      (unsigned int)v37,
                      v116);
                    TcpOffloadDisconnectCompleteHandler = v130;
                    v103 = v104;
                    LODWORD(v37) = 0;
                  }
                  while ( v104 );
                }
              }
              goto LABEL_119;
            }
            MEMORY[0x70] = v38;
          }
          else
          {
            v137 = v38;
          }
          v138 = v38;
          v38->Scratch = v37;
          v38->ChildRefCount = v74;
          goto LABEL_155;
        }
      }
LABEL_44:
      if ( v119 )
      {
        --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v128);
      }
      else if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      goto LABEL_46;
    }
    *(_QWORD *)PoolWithTag = NextIndicateReceiveNetBufferListsContext;
    *((_QWORD *)PoolWithTag + 3) = v23;
    *((_QWORD *)PoolWithTag + 1) = RcvLinkSpeedIndicateUp;
    *((_DWORD *)PoolWithTag + 4) = ReceiveFlags;
    *((_QWORD *)PoolWithTag + 4) = v18;
    *((_DWORD *)PoolWithTag + 10) = v6;
    *((_DWORD *)PoolWithTag + 11) = v7;
    ndisSortNetBufferLists(PoolWithTag, v23, v20);
    if ( *((_QWORD *)PoolWithTag + 8) || *((_DWORD *)PoolWithTag + 172) )
    {
      if ( !*RcvLinkSpeedIndicateUp || (_DWORD)v123 )
        PoolWithTag[692] = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols(PoolWithTag);
      if ( !v26 )
      {
        v27 = (_QWORD *)RcvLinkSpeedIndicateUp[1];
        if ( v27 )
        {
          v28 = *((_DWORD *)PoolWithTag + 172);
          v29 = *((_DWORD *)PoolWithTag + 4) | 2;
          do
          {
            v30 = 0LL;
            v123 = (_QWORD *)v27[53];
            do
            {
              v31 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v30 + 64];
              v30 = (unsigned int)(v30 + 1);
              if ( v31 )
                ndisMIndicateNetBufferListsToOpen(v27, v31, v29);
            }
            while ( (unsigned int)v30 <= v28 );
            v27 = v123;
          }
          while ( v123 );
          v8 = v131;
        }
        v32 = (_QWORD *)RcvLinkSpeedIndicateUp[2];
        if ( v32 )
        {
          if ( (_DWORD)v130 )
          {
            v68 = *((_DWORD *)PoolWithTag + 172);
            v69 = *((_DWORD *)PoolWithTag + 4) | 2;
            do
            {
              v70 = (_QWORD *)v32[53];
              v71 = 0;
              do
              {
                v72 = v71++;
                v73 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v72 + 64];
                if ( v73 )
                  ndisMIndicateNetBufferListsToOpen(v32, v73, v69);
              }
              while ( v71 <= v68 );
              v32 = v70;
            }
            while ( v70 );
            v13 = v126;
            v8 = v131;
          }
          else
          {
            v33 = *((_DWORD *)PoolWithTag + 4);
            v34 = *((_DWORD *)PoolWithTag + 172);
            if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2252LL) )
              ndisIndicateToPmodeOpens((__int64)PoolWithTag);
            for ( j = 1; j <= v34; ++j )
            {
              v36 = j;
              ndisMIndicateNetBufferListsToOpen(
                *(NDIS_HANDLE *)&PoolWithTag[40 * v36 + 56],
                *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v36 + 64],
                v33);
            }
          }
        }
        v11 = ReceiveFlags;
      }
    }
    v15 = NextIndicateReceiveNetBufferListsContext;
LABEL_38:
    v37 = 0LL;
    goto LABEL_39;
  }
  if ( (ReceiveFlags & 2) == 0 )
    (*((void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, bool))v8 + 308))(
      *((_QWORD *)v8 + 294),
      v10,
      (ReceiveFlags & 1) != 0);
LABEL_61:
  if ( (v136.DatapathCyclesMask & 4) != 0 )
  {
    ndisPcwEndCycleCounter(&v136, 2u, 0xFuLL);
    if ( v5 != 2 )
      KeLowerIrql(v5);
  }
}

/*
 * XREFs of ndisMIndicateSplitNblChain @ 0x1C00667E8
 * Callers:
 *     ndisMIndicateReceiveNblsWithThrottling @ 0x1C00266C0 (ndisMIndicateReceiveNblsWithThrottling.c)
 * Callees:
 *     ndisIndicateToPmodeOpens @ 0x1C0001E98 (ndisIndicateToPmodeOpens.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003810 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0003AE0 (ndisSortNetBufferLists.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00045B0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0010CD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0010D10 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0012AB0 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0012B0C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00267B4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00267D0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026D64 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0026D78 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnPeriodicReceives @ 0x1C0026F18 (ndisReturnPeriodicReceives.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMIndicateSplitNblChain(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        BOOL a4,
        int a5,
        unsigned int a6)
{
  int v6; // r10d
  __int64 v7; // r9
  unsigned int v8; // r11d
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NDIS_FILTER_BLOCK *v10; // r12
  _QWORD *p_Alignment; // rcx
  int v12; // r8d
  struct _NET_BUFFER_LIST *v13; // r13
  unsigned int v14; // ebx
  __int64 v15; // r15
  unsigned int Number; // esi
  struct _NDIS_RCV_TRACKER_ARRAY *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rdi
  PVOID PoolWithTag; // rax
  struct _NET_BUFFER_LIST *v22; // rcx
  _QWORD *RcvLinkSpeedIndicateUp; // r14
  _QWORD *v24; // rsi
  _QWORD *v25; // rbx
  unsigned int v26; // r13d
  int v27; // r15d
  _QWORD *v28; // r12
  unsigned int v29; // esi
  __int64 v30; // rcx
  struct _NET_BUFFER_LIST *v31; // rdx
  _QWORD *v32; // rbx
  int v33; // r14d
  unsigned int v34; // r15d
  unsigned int v35; // esi
  __int64 v36; // r11
  unsigned int v37; // ebx
  __int64 v38; // r8
  unsigned int v39; // r12d
  int v40; // r14d
  _QWORD *v41; // r15
  unsigned int v42; // esi
  __int64 v43; // rcx
  struct _NET_BUFFER_LIST *v44; // rdx
  struct _NET_BUFFER_LIST *v45; // r14
  struct _NET_BUFFER_LIST *v46; // rcx
  unsigned int FilterFriendlyName; // eax
  BOOL v48; // r13d
  struct _NET_BUFFER_LIST *v49; // rax
  unsigned __int64 TcpOffloadForwardCompleteHandler; // rbx
  __int64 v51; // r15
  char v52; // si
  __int64 v53; // r12
  void (*v54)(void); // r8
  unsigned __int64 v55; // rbx
  void *v56; // rdx
  _SLIST_HEADER *v57; // rsi
  unsigned __int64 v58; // r10
  void *Region; // rax
  unsigned __int64 v60; // r15
  bool v61; // al
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rbx
  __int64 v64; // rdx
  _QWORD *v65; // rcx
  void (__fastcall *TcpOffloadEventHandler)(void *, unsigned int, unsigned int); // r15
  void (*v67)(void); // r10
  void (__fastcall *TcpOffloadDisconnectCompleteHandler)(void *, _NET_BUFFER_LIST *); // r11
  unsigned int v69; // ecx
  struct _NET_BUFFER_LIST **v70; // r12
  void (__fastcall *v71)(void *, unsigned int, unsigned int); // r14
  __int64 v72; // rsi
  char v73; // r13
  struct _NET_BUFFER_LIST *v74; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  __int64 v76; // rbx
  NTSTATUS v77; // eax
  _SLIST_HEADER *v78; // rax
  unsigned int ChildRefCount; // [rsp+38h] [rbp-B9h]
  unsigned int v80; // [rsp+38h] [rbp-B9h]
  KIRQL NewIrql; // [rsp+48h] [rbp-A9h]
  char NewIrql_1; // [rsp+49h] [rbp-A8h]
  int NewIrql_4; // [rsp+4Ch] [rbp-A5h]
  void (*v84)(void); // [rsp+50h] [rbp-A1h]
  void (*v85)(void); // [rsp+50h] [rbp-A1h]
  void *v86; // [rsp+58h] [rbp-99h]
  void (__fastcall *v87)(void *, _NET_BUFFER_LIST *); // [rsp+58h] [rbp-99h]
  unsigned int v88; // [rsp+60h] [rbp-91h]
  _BYTE v89[12]; // [rsp+64h] [rbp-8Dh]
  struct _NET_BUFFER_LIST *v90; // [rsp+70h] [rbp-81h]
  __int64 v91; // [rsp+78h] [rbp-79h]
  struct _NET_BUFFER_LIST *v92; // [rsp+80h] [rbp-71h]
  struct NDIS_PCW_CONTEXT v93; // [rsp+88h] [rbp-69h] BYREF
  _QWORD v94[3]; // [rsp+A8h] [rbp-49h] BYREF
  char v95[8]; // [rsp+C0h] [rbp-31h] BYREF
  void (__fastcall *v96)(void *, unsigned int, unsigned int); // [rsp+C8h] [rbp-29h]
  void (__fastcall *v97)(void *, _NET_BUFFER_LIST *); // [rsp+D0h] [rbp-21h]
  void (*v98)(void); // [rsp+D8h] [rbp-19h]
  struct _NET_BUFFER_LIST *v99; // [rsp+E0h] [rbp-11h]
  int v100; // [rsp+E8h] [rbp-9h]
  __int64 v101; // [rsp+ECh] [rbp-5h]
  BOOL v102; // [rsp+F4h] [rbp+3h]
  unsigned int v104; // [rsp+150h] [rbp+5Fh] BYREF
  unsigned int v105; // [rsp+158h] [rbp+67h]
  BOOL v106; // [rsp+160h] [rbp+6Fh] BYREF

  if ( a2 )
  {
    v106 = a4;
    v105 = a3;
    v6 = a5;
    v7 = 0LL;
    v8 = a3;
    v90 = a2;
    Alignment = a2;
    v10 = a1;
    p_Alignment = 0LL;
    v12 = a5 & 1;
    *(_DWORD *)&v89[8] = 0;
    *(_QWORD *)v89 = a5 & 1;
    NewIrql_4 = a5 & 2;
    do
    {
      v13 = Alignment;
      v92 = Alignment;
      v14 = v7;
      if ( a6 > (unsigned int)v7 )
      {
        do
        {
          if ( !Alignment )
            break;
          ++v14;
          p_Alignment = &Alignment->Link.Alignment;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( v14 < a6 );
        *(_QWORD *)&v89[4] = p_Alignment;
        v90 = Alignment;
      }
      *p_Alignment = v7;
      v15 = v7;
      v88 = v7;
      NewIrql_1 = v7;
      if ( (v12 || KeGetCurrentIrql() == 2)
        && ndisPerProcRcvTrackers != (struct _NDIS_RCV_TRACKER_ARRAY *)v7
        && (Number = KeGetPcr()->Prcb.Number,
            v17 = ndisPerProcRcvTrackers,
            v18 = 2096LL * Number,
            v88 = Number,
            v19 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v18),
            (unsigned int)v19 < 3) )
      {
        NewIrql_1 = 1;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v18) = v19 + 1;
        v20 = (__int64)v17 + 696 * v19 + v18 + 8;
        v91 = v20;
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
        v7 = 0LL;
        v91 = (__int64)PoolWithTag;
        v20 = (__int64)PoolWithTag;
        if ( !PoolWithTag )
        {
          if ( (unsigned __int8)byte_1C00895CB >= 2u )
          {
            WPP_SF_(0xAu, &WPP_27a9f588cd63370d861f87f60b3f12b7_Traceguids);
            v7 = 0LL;
          }
          goto LABEL_50;
        }
        v6 = a5;
        v8 = v105;
      }
      v22 = v13;
      RcvLinkSpeedIndicateUp = (_QWORD *)v10->RcvLinkSpeedIndicateUp;
      *(_BYTE *)(v20 + 692) = 0;
      if ( !NewIrql_4 )
      {
        do
        {
          v15 = (__int64)v22;
          v22->Flags = v22->Flags & 0xFFFFFFF0 | 4;
          v22 = (struct _NET_BUFFER_LIST *)v22->Link.Alignment;
        }
        while ( v22 );
      }
      v24 = (_QWORD *)RcvLinkSpeedIndicateUp[41];
      if ( v24 && *(_BYTE *)(v24[3] + 56LL) >= 6u )
      {
        ndisMIndicateNetBufferListsToOpen(v24, v13, v8, v14, v6);
        v7 = 0LL;
        *(_QWORD *)(v20 + 64) = 0LL;
        *(_DWORD *)(v20 + 80) = 0;
      }
      else
      {
        *(_QWORD *)(v20 + 24) = v13;
        *(_QWORD *)(v20 + 8) = RcvLinkSpeedIndicateUp;
        *(_DWORD *)(v20 + 16) = v6;
        *(_QWORD *)v20 = v10;
        *(_QWORD *)(v20 + 32) = v15;
        *(_DWORD *)(v20 + 40) = v8;
        *(_DWORD *)(v20 + 44) = v14;
        ndisSortNetBufferLists((__int64 *)v20);
        v7 = 0LL;
        if ( *(_QWORD *)(v20 + 64) || *(_DWORD *)(v20 + 688) )
        {
          if ( !*RcvLinkSpeedIndicateUp || v105 )
          {
            *(_BYTE *)(v20 + 692) = 1;
          }
          else
          {
            ndisIndicateXlatedPacketsToNdis5Protocols((__int64 *)v20);
            v7 = 0LL;
          }
          if ( !v24 )
          {
            v25 = (_QWORD *)RcvLinkSpeedIndicateUp[1];
            if ( v25 )
            {
              v26 = *(_DWORD *)(v20 + 688);
              v27 = *(_DWORD *)(v20 + 16) | 2;
              do
              {
                v28 = (_QWORD *)v25[53];
                v29 = 0;
                do
                {
                  v30 = v29++;
                  v31 = *(struct _NET_BUFFER_LIST **)(v20 + 40 * v30 + 64);
                  if ( v31 )
                    ndisMIndicateNetBufferListsToOpen(
                      v25,
                      v31,
                      *(unsigned int *)(v20 + 40),
                      *(_DWORD *)(v20 + 40 * v30 + 80),
                      v27);
                }
                while ( v29 <= v26 );
                v7 = 0LL;
                v25 = v28;
              }
              while ( v28 );
              v10 = a1;
              v13 = v92;
            }
            v32 = (_QWORD *)RcvLinkSpeedIndicateUp[2];
            if ( v32 )
            {
              v33 = *(_DWORD *)(v20 + 16);
              if ( !NewIrql_4 )
              {
                v34 = *(_DWORD *)(v20 + 40);
                v35 = *(_DWORD *)(v20 + 688);
                if ( *(_DWORD *)(*(_QWORD *)v20 + 2252LL) )
                {
                  ndisIndicateToPmodeOpens(v20);
                  v7 = 0LL;
                }
                v36 = 1LL;
                v37 = 1;
                if ( v35 )
                {
                  do
                  {
                    v38 = v37++;
                    ndisMIndicateNetBufferListsToOpen(
                      *(_QWORD **)(v20 + 40 * v38 + 56),
                      *(struct _NET_BUFFER_LIST **)(v20 + 40 * v38 + 64),
                      v34,
                      *(_DWORD *)(v20 + 40 * v38 + 80),
                      v33);
                    v36 = 1LL;
                  }
                  while ( v37 <= v35 );
                  v7 = 0LL;
                }
                goto LABEL_52;
              }
              v39 = *(_DWORD *)(v20 + 688);
              v40 = v33 | 2;
              do
              {
                v41 = (_QWORD *)v32[53];
                v42 = 0;
                do
                {
                  v43 = v42++;
                  v44 = *(struct _NET_BUFFER_LIST **)(v20 + 40 * v43 + 64);
                  if ( v44 )
                    ndisMIndicateNetBufferListsToOpen(
                      v32,
                      v44,
                      *(unsigned int *)(v20 + 40),
                      *(_DWORD *)(v20 + 40 * v43 + 80),
                      v40);
                }
                while ( v42 <= v39 );
                v7 = 0LL;
                v32 = v41;
              }
              while ( v41 );
            }
            v10 = a1;
          }
        }
      }
LABEL_50:
      if ( NewIrql_4 )
        goto LABEL_129;
      v36 = 1LL;
LABEL_52:
      if ( !v20 )
      {
        v45 = v13;
LABEL_56:
        if ( !v45 )
          goto LABEL_129;
        v46 = v45;
        v93.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)v10->FilterInstanceName._p;
        FilterFriendlyName = (unsigned int)v10->FilterFriendlyName;
        v48 = *(_DWORD *)v89 != 0;
        v93.CurrentCpu = -1;
        v93.DatapathEventsMask = FilterFriendlyName;
        v93.DatapathCyclesMask = *(_DWORD *)&v10->Ref.ReferenceCount;
        NewIrql = 2;
        do
        {
          v46->Flags = v46->Flags & 0xFFFFFFF4 | 8;
          v46 = (struct _NET_BUFFER_LIST *)v46->Link.Alignment;
        }
        while ( v46 );
        if ( Microsoft_Windows_Networking_CorrelationEnabled )
          ndisMarkNetBufferListCorrelationIdsAsUsed(v45);
        if ( LODWORD(v10[3].NextReturnNetBufferListsContext) != (_DWORD)v7 )
        {
          v49 = ndisReturnPeriodicReceives((__int64)v10, v45);
          v7 = 0LL;
          v45 = v49;
          v36 = 1LL;
        }
        if ( !v45 )
          goto LABEL_129;
        if ( ndisNblTrackerMode )
        {
          TcpOffloadForwardCompleteHandler = (unsigned __int64)v10[2].TcpOffloadForwardCompleteHandler;
          v51 = v7;
          v52 = ndisNblTrackerEpoch;
          v53 = v7;
          v54 = (void (*)(void))v7;
          LOBYTE(v104) = v7;
          LOBYTE(v106) = v36 & v48;
          if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
          {
            ndisNblTrackerRecordEvent(
              (unsigned __int64)v45,
              0LL,
              0x87u,
              TcpOffloadForwardCompleteHandler,
              (unsigned __int8)v36 & v48);
            v7 = 0LL;
            v54 = (void (*)(void))v53;
            v36 = 1LL;
          }
          v55 = TcpOffloadForwardCompleteHandler & 0xFFFFFFFFFFFFFFFDuLL;
          if ( (v36 & v55) != 0 )
            v56 = *(void **)((v55 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
          else
            v56 = (void *)v55;
          v86 = v56;
          if ( (v36 & v55) != 0 )
            v55 ^= ((unsigned __int8)v55 ^ (unsigned __int8)(2 * v52)) & 2;
          v57 = (_SLIST_HEADER *)v45;
          do
          {
            v58 = v57[22].Alignment;
            do
            {
              if ( v57[22].Alignment != v58 )
                break;
              if ( !v58 && v57[7].Region == v7 )
                v57[7].Region = ndisSourceHandleFromOwner(v7);
              if ( (v58 & 4) != 0 || (Region = (void *)v57[7].Region) == 0LL )
              {
                v57[22].Alignment = v55 | 4;
              }
              else if ( Region == v56 && v57[1].Region == v7 )
              {
                v54 = (void (*)(void))((char *)v54 + v36);
                v57[22].Alignment = 24LL;
                v51 += v36;
              }
              else
              {
                v51 += v36;
                v57[22].Alignment = v55;
              }
              v57 = (_SLIST_HEADER *)v57->Alignment;
            }
            while ( v57 );
            v84 = v54;
            if ( ((unsigned __int8)v58 & (unsigned __int8)v36) != 0 )
            {
              ndisNblTrackerUpdateOwnershipCount(v58, v53 - v51, &v106, &v104);
              v7 = 0LL;
              v36 = 1LL;
            }
            v56 = v86;
            v53 = v51;
            v54 = v84;
          }
          while ( v57 );
          v60 = v51 - (_QWORD)v84;
          if ( ((unsigned __int8)v55 & (unsigned __int8)v36) != 0 && v60 )
          {
            v61 = v106;
            if ( !v106 && (_BYTE)v104 == (_BYTE)v7 )
            {
              v61 = KeGetCurrentIrql() == 2;
              LOBYTE(v106) = v61;
            }
            v10 = a1;
            v62 = v55 >> 1;
            v63 = v55 & 0xFFFFFFFFFFFFFFF8uLL;
            v64 = 2 * (v36 & v62);
            if ( v61 )
            {
              v65 = (_QWORD *)(*(_QWORD *)(v63 + 8 * v64 + 40) + (KeGetPcr()->Prcb.Number << 12));
              *v65 += v60;
            }
            else
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v63 + 8 * v64 + 48), v60);
            }
          }
          else
          {
            v10 = a1;
          }
        }
        if ( (v93.DatapathCyclesMask & 0x20) != 0 )
        {
          if ( (v48 & (unsigned __int8)v36) == 0 )
            NewIrql = KfRaiseIrql(2u);
          ndisPcwStartCycleCounter(&v93);
          v7 = 0LL;
        }
        TcpOffloadEventHandler = v10[2].TcpOffloadEventHandler;
        v67 = *(void (**)(void))&v10[2].IfIndex;
        TcpOffloadDisconnectCompleteHandler = v10[2].TcpOffloadDisconnectCompleteHandler;
        v85 = v67;
        v87 = TcpOffloadDisconnectCompleteHandler;
        if ( *(_BYTE *)TcpOffloadEventHandler == 17 )
        {
LABEL_103:
          ((void (__fastcall *)(void (__fastcall *)(void *, _NET_BUFFER_LIST *), struct _NET_BUFFER_LIST *, bool))v67)(
            TcpOffloadDisconnectCompleteHandler,
            v45,
            *(_DWORD *)v89 != 0);
          goto LABEL_125;
        }
        if ( ndisIterativeDataPathDisabled == (_DWORD)v7 && (*(_DWORD *)v89 || KeGetCurrentIrql() == 2) )
        {
          v69 = KeGetPcr()->Prcb.Number;
          v70 = (struct _NET_BUFFER_LIST **)v94;
          v94[1] = v45;
          v104 = v69;
          v94[2] = 0LL;
          v94[0] = v45;
          v45->Scratch = (void *)v7;
          v45->ChildRefCount = v48;
          while ( *(_BYTE *)TcpOffloadEventHandler == 5 )
          {
            if ( *v70 == (struct _NET_BUFFER_LIST *)v7 )
              goto LABEL_121;
            v71 = TcpOffloadEventHandler;
            v72 = *((_QWORD *)TcpOffloadEventHandler + 53) + 96LL * v69;
            v73 = *(_BYTE *)(v72 + 88);
            *(_BYTE *)(v72 + 88) = 1;
            v74 = *v70;
            LOBYTE(v106) = v73;
            *v70 = 0LL;
            if ( v74 )
            {
              do
              {
                Scratch = (struct _NET_BUFFER_LIST *)v74->Scratch;
                ChildRefCount = v74->ChildRefCount;
                v74->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(TcpOffloadEventHandler, v85, v87, v74, 0, 0, ChildRefCount);
                v74 = Scratch;
              }
              while ( Scratch );
              v20 = v91;
              v73 = v106;
              v71 = TcpOffloadEventHandler;
              v67 = v85;
              TcpOffloadDisconnectCompleteHandler = v87;
            }
            v7 = 0LL;
            *(_BYTE *)(v72 + 88) = 0;
            if ( v73 )
            {
              *(_BYTE *)(v72 + 88) = 1;
              break;
            }
            v67 = (void (*)(void))*((_QWORD *)v71 + 66);
            v70 = (struct _NET_BUFFER_LIST **)(v72 + 72);
            TcpOffloadDisconnectCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)v71 + 67);
            TcpOffloadEventHandler = (void (__fastcall *)(void *, unsigned int, unsigned int))*((_QWORD *)TcpOffloadEventHandler
                                                                                              + 69);
            v69 = v104;
            v85 = v67;
            v87 = TcpOffloadDisconnectCompleteHandler;
          }
          v7 = (__int64)*v70;
          if ( !*v70 )
          {
LABEL_121:
            v10 = a1;
            goto LABEL_126;
          }
          *v70 = 0LL;
          do
          {
            v76 = *(_QWORD *)(v7 + 112);
            v80 = *(_DWORD *)(v7 + 132);
            *(_DWORD *)(v7 + 132) = 0;
            ndisCallReceiveCompleteHandler(
              TcpOffloadEventHandler,
              v67,
              TcpOffloadDisconnectCompleteHandler,
              (struct _NET_BUFFER_LIST *)v7,
              0,
              0,
              v80);
            v67 = v85;
            v7 = v76;
            TcpOffloadDisconnectCompleteHandler = v87;
          }
          while ( v76 );
          v10 = a1;
LABEL_125:
          v7 = 0LL;
        }
        else
        {
          if ( v10->Header.Type != 5 )
            goto LABEL_103;
          v96 = v10[2].TcpOffloadEventHandler;
          v97 = TcpOffloadDisconnectCompleteHandler;
          v101 = 3LL;
          v98 = v67;
          v99 = v45;
          v100 = v7;
          v102 = *(_DWORD *)v89 != 0;
          v77 = ndisExpandStack((void (*)(void *))ndisDataPathExpandStackCallback, v95);
          v7 = 0LL;
          if ( v77 < 0 )
          {
            ndisQueueStackExpansionFallbackNbls(v10, v45, 0);
            goto LABEL_125;
          }
        }
LABEL_126:
        if ( (v93.DatapathCyclesMask & 0x20) != 0 )
        {
          ndisPcwEndCycleCounter(&v93);
          if ( NewIrql != 2 )
          {
            KeLowerIrql(NewIrql);
            v7 = 0LL;
          }
        }
        goto LABEL_129;
      }
      if ( *(_BYTE *)(v20 + 692) )
      {
        v45 = *(struct _NET_BUFFER_LIST **)(v20 + 64);
        goto LABEL_56;
      }
LABEL_129:
      if ( NewIrql_1 == (_BYTE)v7 )
      {
        if ( v20 )
        {
          ExFreePoolWithTag((PVOID)v20, 0);
          v7 = 0LL;
        }
      }
      else
      {
        --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v88);
      }
      p_Alignment = *(_QWORD **)&v89[4];
      if ( NewIrql_4 == (_DWORD)v7 )
      {
        Alignment = v90;
      }
      else
      {
        if ( **(_QWORD **)&v89[4] != v7 )
        {
          v78 = (_SLIST_HEADER *)v92;
          do
          {
            p_Alignment = &v78->Alignment;
            *(_QWORD *)&v89[4] = v78;
            v78 = (_SLIST_HEADER *)v78->Alignment;
          }
          while ( v78 );
        }
        Alignment = v90;
        *p_Alignment = v90;
      }
      v12 = *(_DWORD *)v89;
      v6 = a5;
      v8 = v105;
    }
    while ( Alignment );
  }
}

/*
 * XREFs of ndisMIndicateSplitNblChain @ 0x1C00625A8
 * Callers:
 *     ndisMIndicateReceiveNblsWithThrottling @ 0x1C0026420 (ndisMIndicateReceiveNblsWithThrottling.c)
 * Callees:
 *     ndisIndicateToPmodeOpens @ 0x1C0002178 (ndisIndicateToPmodeOpens.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C00029D0 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0002E60 (ndisSortNetBufferLists.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00040C0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
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

void __fastcall ndisMIndicateSplitNblChain(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  int v6; // r10d
  struct _NET_BUFFER_LIST *Alignment; // rax
  unsigned int v8; // r11d
  struct _NDIS_FILTER_BLOCK *v9; // r13
  _SLIST_HEADER *v10; // rcx
  int v11; // r8d
  _LIST_ENTRY *v12; // rdx
  struct _NET_BUFFER_LIST *v13; // r12
  unsigned int v14; // ebx
  _LIST_ENTRY *v15; // r15
  unsigned int Number; // esi
  _LIST_ENTRY *Blink; // r8
  __int64 v18; // rdx
  __int64 Flink_low; // r9
  __int64 v20; // rcx
  char *v21; // rdi
  char *PoolWithTag; // rax
  struct _NET_BUFFER_LIST *v23; // rcx
  _QWORD *RcvLinkSpeedIndicateUp; // r14
  _QWORD *v25; // rsi
  _QWORD *v26; // rbx
  unsigned int v27; // r13d
  int v28; // r15d
  _QWORD *v29; // r12
  unsigned int v30; // esi
  __int64 v31; // rcx
  struct _NET_BUFFER_LIST *v32; // rdx
  _QWORD *v33; // rbx
  int v34; // r14d
  unsigned int v35; // r15d
  unsigned int v36; // esi
  unsigned int v37; // ebx
  __int64 v38; // r8
  unsigned int v39; // r12d
  int v40; // r14d
  _QWORD *v41; // r15
  unsigned int v42; // esi
  __int64 v43; // rcx
  struct _NET_BUFFER_LIST *v44; // rdx
  struct _NET_BUFFER_LIST *v45; // rbx
  struct _NET_BUFFER_LIST *v46; // rcx
  unsigned int FilterFriendlyName; // eax
  void (__fastcall *TcpOffloadEventHandler)(void *, unsigned int, unsigned int); // r14
  void (*v49)(void); // r10
  void (__fastcall *TcpOffloadDisconnectCompleteHandler)(void *, _NET_BUFFER_LIST *); // r11
  unsigned int v51; // ecx
  struct _NET_BUFFER_LIST **v52; // r15
  void (__fastcall *v53)(void *, unsigned int, unsigned int); // r13
  __int64 v54; // rsi
  char v55; // r12
  struct _NET_BUFFER_LIST *v56; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v58; // r9
  struct _NET_BUFFER_LIST *v59; // rbx
  NTSTATUS v60; // eax
  _SLIST_HEADER *v61; // rax
  unsigned int ChildRefCount; // [rsp+38h] [rbp-D0h]
  unsigned int v63; // [rsp+38h] [rbp-D0h]
  unsigned int v64; // [rsp+50h] [rbp-B8h]
  int v65; // [rsp+54h] [rbp-B4h]
  unsigned int v66; // [rsp+58h] [rbp-B0h]
  _SLIST_HEADER *v67; // [rsp+60h] [rbp-A8h]
  void (__fastcall *v68)(void *, _NET_BUFFER_LIST *); // [rsp+68h] [rbp-A0h]
  void (*v69)(void); // [rsp+70h] [rbp-98h]
  struct _NET_BUFFER_LIST *v70; // [rsp+78h] [rbp-90h]
  struct _NET_BUFFER_LIST *v71; // [rsp+80h] [rbp-88h]
  char *v72; // [rsp+88h] [rbp-80h]
  struct NDIS_PCW_CONTEXT v73; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v74[4]; // [rsp+A8h] [rbp-60h] BYREF
  char v75[8]; // [rsp+C8h] [rbp-40h] BYREF
  void (__fastcall *v76)(void *, unsigned int, unsigned int); // [rsp+D0h] [rbp-38h]
  void (__fastcall *v77)(void *, _NET_BUFFER_LIST *); // [rsp+D8h] [rbp-30h]
  void (*v78)(void); // [rsp+E0h] [rbp-28h]
  struct _NET_BUFFER_LIST *v79; // [rsp+E8h] [rbp-20h]
  int v80; // [rsp+F0h] [rbp-18h]
  __int64 v81; // [rsp+F4h] [rbp-14h]
  BOOL v82; // [rsp+FCh] [rbp-Ch]
  char v84; // [rsp+160h] [rbp+58h]
  KIRQL NewIrql; // [rsp+170h] [rbp+68h]

  if ( a2 )
  {
    v6 = a5;
    Alignment = a2;
    v71 = a2;
    v8 = a3;
    v9 = a1;
    v10 = 0LL;
    v67 = 0LL;
    v11 = a5 & 1;
    v65 = v11;
    v12 = 0LL;
    do
    {
      v13 = Alignment;
      v70 = Alignment;
      v14 = (unsigned int)v12;
      if ( a6 > (unsigned int)v12 )
      {
        do
        {
          if ( !Alignment )
            break;
          ++v14;
          v10 = (_SLIST_HEADER *)Alignment;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( v14 < a6 );
        v67 = v10;
        v71 = Alignment;
      }
      v10->Alignment = (unsigned __int64)v12;
      v15 = v12;
      v66 = (unsigned int)v12;
      v84 = (char)v12;
      if ( (v11 || KeGetCurrentIrql() == 2)
        && WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink != v12
        && (Number = KeGetPcr()->Prcb.Number,
            Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink,
            v18 = 131LL * Number,
            v66 = Number,
            Flink_low = LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[v18].Flink),
            (unsigned int)Flink_low < 3) )
      {
        v84 = 1;
        v20 = v18 * 16 + 696 * Flink_low;
        v21 = (char *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Blink + v20;
        LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[v18].Flink) = Flink_low + 1;
        v72 = (char *)&Blink->Blink + v20;
      }
      else
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
        v12 = 0LL;
        v72 = PoolWithTag;
        v21 = PoolWithTag;
        if ( !PoolWithTag )
        {
          if ( (unsigned __int8)byte_1C008370B >= 2u )
          {
            WPP_SF_(0xAu, &WPP_abea78df5d3bc502c1918c83347dcce9_Traceguids);
            v12 = 0LL;
          }
          goto LABEL_50;
        }
        v6 = a5;
        v8 = a3;
      }
      v23 = v13;
      RcvLinkSpeedIndicateUp = (_QWORD *)v9->RcvLinkSpeedIndicateUp;
      v21[692] = 0;
      if ( (a5 & 2) == 0 )
      {
        do
        {
          v15 = (_LIST_ENTRY *)v23;
          v23->Flags = v23->Flags & 0xFFFFFFF0 | 4;
          v23 = (struct _NET_BUFFER_LIST *)v23->Link.Alignment;
        }
        while ( v23 );
      }
      v25 = (_QWORD *)RcvLinkSpeedIndicateUp[41];
      if ( v25 && *(_BYTE *)(v25[3] + 56LL) >= 6u )
      {
        ndisMIndicateNetBufferListsToOpen(v25, v13, v8, v14, v6);
        v12 = 0LL;
        *((_QWORD *)v21 + 8) = 0LL;
        *((_DWORD *)v21 + 20) = 0;
        goto LABEL_50;
      }
      *((_QWORD *)v21 + 3) = v13;
      *((_QWORD *)v21 + 1) = RcvLinkSpeedIndicateUp;
      *((_DWORD *)v21 + 4) = v6;
      *(_QWORD *)v21 = v9;
      *((_QWORD *)v21 + 4) = v15;
      *((_DWORD *)v21 + 10) = v8;
      *((_DWORD *)v21 + 11) = v14;
      ndisSortNetBufferLists((__int64 *)v21);
      v12 = 0LL;
      if ( !*((_QWORD *)v21 + 8) && !*((_DWORD *)v21 + 172) )
        goto LABEL_50;
      if ( !*RcvLinkSpeedIndicateUp || a3 )
      {
        v21[692] = 1;
      }
      else
      {
        ndisIndicateXlatedPacketsToNdis5Protocols((__int64 *)v21);
        v12 = 0LL;
      }
      if ( v25 )
        goto LABEL_50;
      v26 = (_QWORD *)RcvLinkSpeedIndicateUp[1];
      if ( v26 )
      {
        v27 = *((_DWORD *)v21 + 172);
        v28 = *((_DWORD *)v21 + 4) | 2;
        do
        {
          v29 = (_QWORD *)v26[53];
          v30 = 0;
          do
          {
            v31 = v30++;
            v32 = *(struct _NET_BUFFER_LIST **)&v21[40 * v31 + 64];
            if ( v32 )
              ndisMIndicateNetBufferListsToOpen(v26, v32, *((_DWORD *)v21 + 10), *(_DWORD *)&v21[40 * v31 + 80], v28);
          }
          while ( v30 <= v27 );
          v12 = 0LL;
          v26 = v29;
        }
        while ( v29 );
        v9 = a1;
        v13 = v70;
      }
      v33 = (_QWORD *)RcvLinkSpeedIndicateUp[2];
      if ( !v33 )
        goto LABEL_49;
      v34 = *((_DWORD *)v21 + 4);
      if ( (a5 & 2) != 0 )
      {
        v39 = *((_DWORD *)v21 + 172);
        v40 = v34 | 2;
        do
        {
          v41 = (_QWORD *)v33[53];
          v42 = 0;
          do
          {
            v43 = v42++;
            v44 = *(struct _NET_BUFFER_LIST **)&v21[40 * v43 + 64];
            if ( v44 )
              ndisMIndicateNetBufferListsToOpen(v33, v44, *((_DWORD *)v21 + 10), *(_DWORD *)&v21[40 * v43 + 80], v40);
          }
          while ( v42 <= v39 );
          v12 = 0LL;
          v33 = v41;
        }
        while ( v41 );
LABEL_49:
        v13 = v70;
LABEL_50:
        if ( (a5 & 2) != 0 )
          goto LABEL_97;
        goto LABEL_51;
      }
      v35 = *((_DWORD *)v21 + 10);
      v36 = *((_DWORD *)v21 + 172);
      if ( *(_DWORD *)(*(_QWORD *)v21 + 2252LL) )
      {
        ndisIndicateToPmodeOpens((__int64)v21);
        v12 = 0LL;
      }
      v37 = 1;
      if ( v36 )
      {
        do
        {
          v38 = v37++;
          ndisMIndicateNetBufferListsToOpen(
            *(_QWORD **)&v21[40 * v38 + 56],
            *(struct _NET_BUFFER_LIST **)&v21[40 * v38 + 64],
            v35,
            *(_DWORD *)&v21[40 * v38 + 80],
            v34);
        }
        while ( v37 <= v36 );
        v12 = 0LL;
      }
LABEL_51:
      if ( !v21 )
      {
        v45 = v13;
LABEL_55:
        if ( !v45 )
          goto LABEL_97;
        v46 = v45;
        v73.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)v9->FilterInstanceName._p;
        FilterFriendlyName = (unsigned int)v9->FilterFriendlyName;
        v73.CurrentCpu = -1;
        v73.DatapathEventsMask = FilterFriendlyName;
        v73.DatapathCyclesMask = *(_DWORD *)&v9->Ref.ReferenceCount;
        NewIrql = 2;
        do
        {
          v46->Flags = v46->Flags & 0xFFFFFFF4 | 8;
          v46 = (struct _NET_BUFFER_LIST *)v46->Link.Alignment;
        }
        while ( v46 );
        if ( Microsoft_Windows_Networking_CorrelationEnabled )
          ndisMarkNetBufferListCorrelationIdsAsUsed(v45);
        if ( LODWORD(v9[3].NextReturnNetBufferListsContext) != (_DWORD)v12 )
        {
          v45 = (struct _NET_BUFFER_LIST *)ndisReturnPeriodicReceives(v9, v45);
          v12 = 0LL;
        }
        if ( !v45 )
          goto LABEL_97;
        if ( ndisNblTrackerMode != (_DWORD)v12 )
          ndisNblTrackerTransferOwnershipInternal(
            v45,
            0LL,
            (struct NDIS_NBL_TRACKER_HANDLE__ *)v9[2].TcpOffloadForwardCompleteHandler,
            0x87u,
            v65 != 0);
        if ( (v73.DatapathCyclesMask & 0x20) != 0 )
        {
          if ( (a5 & 1) == 0 )
            NewIrql = KfRaiseIrql(2u);
          ndisPcwStartCycleCounter(&v73);
        }
        TcpOffloadEventHandler = v9[2].TcpOffloadEventHandler;
        v49 = *(void (**)(void))&v9[2].IfIndex;
        TcpOffloadDisconnectCompleteHandler = v9[2].TcpOffloadDisconnectCompleteHandler;
        v69 = v49;
        v68 = TcpOffloadDisconnectCompleteHandler;
        if ( *(_BYTE *)TcpOffloadEventHandler == 17 )
        {
LABEL_70:
          ((void (__fastcall *)(void (__fastcall *)(void *, _NET_BUFFER_LIST *), struct _NET_BUFFER_LIST *, bool))v49)(
            TcpOffloadDisconnectCompleteHandler,
            v45,
            v65 != 0);
          goto LABEL_92;
        }
        v12 = 0LL;
        if ( !ndisIterativeDataPathDisabled && ((a5 & 1) != 0 || KeGetCurrentIrql() == 2) )
        {
          v51 = KeGetPcr()->Prcb.Number;
          v52 = (struct _NET_BUFFER_LIST **)v74;
          v64 = v51;
          v74[2] = 0LL;
          v74[0] = v45;
          v74[1] = v45;
          v45->Scratch = 0LL;
          v45->ChildRefCount = v65 != 0;
          if ( *(_BYTE *)TcpOffloadEventHandler == 5 )
          {
            while ( *v52 )
            {
              v53 = TcpOffloadEventHandler;
              v54 = *((_QWORD *)TcpOffloadEventHandler + 53) + 96LL * v51;
              v55 = *(_BYTE *)(v54 + 88);
              *(_BYTE *)(v54 + 88) = 1;
              v56 = *v52;
              *v52 = 0LL;
              if ( v56 )
              {
                do
                {
                  Scratch = (struct _NET_BUFFER_LIST *)v56->Scratch;
                  ChildRefCount = v56->ChildRefCount;
                  v56->ChildRefCount = 0;
                  ndisCallReceiveCompleteHandler(TcpOffloadEventHandler, v69, v68, v56, 0, 0, ChildRefCount);
                  v56 = Scratch;
                }
                while ( Scratch );
                v21 = v72;
                v53 = TcpOffloadEventHandler;
                v49 = v69;
                v12 = 0LL;
                TcpOffloadDisconnectCompleteHandler = v68;
              }
              *(_BYTE *)(v54 + 88) = 0;
              if ( v55 )
              {
                *(_BYTE *)(v54 + 88) = 1;
LABEL_83:
                v9 = a1;
                goto LABEL_84;
              }
              TcpOffloadEventHandler = (void (__fastcall *)(void *, unsigned int, unsigned int))*((_QWORD *)TcpOffloadEventHandler
                                                                                                + 69);
              v52 = (struct _NET_BUFFER_LIST **)(v54 + 72);
              v49 = (void (*)(void))*((_QWORD *)v53 + 66);
              TcpOffloadDisconnectCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)v53 + 67);
              v51 = v64;
              v69 = v49;
              v68 = TcpOffloadDisconnectCompleteHandler;
              if ( *(_BYTE *)TcpOffloadEventHandler != 5 )
                goto LABEL_83;
            }
            v9 = a1;
          }
          else
          {
LABEL_84:
            v58 = *v52;
            if ( *v52 )
            {
              *v52 = 0LL;
              do
              {
                v59 = (struct _NET_BUFFER_LIST *)v58->Scratch;
                v63 = v58->ChildRefCount;
                v58->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(
                  TcpOffloadEventHandler,
                  v49,
                  TcpOffloadDisconnectCompleteHandler,
                  v58,
                  0,
                  0,
                  v63);
                v49 = v69;
                v12 = 0LL;
                TcpOffloadDisconnectCompleteHandler = v68;
                v58 = v59;
              }
              while ( v59 );
            }
          }
        }
        else
        {
          if ( v9->Header.Type != 5 )
            goto LABEL_70;
          v80 = 0;
          v76 = TcpOffloadEventHandler;
          v77 = TcpOffloadDisconnectCompleteHandler;
          v81 = 3LL;
          v78 = v49;
          v79 = v45;
          v82 = v65 != 0;
          v60 = ndisExpandStack((void (*)(void *))ndisDataPathExpandStackCallback, v75);
          v12 = 0LL;
          if ( v60 < 0 )
          {
            ndisQueueStackExpansionFallbackNbls(v9, v45, 0);
LABEL_92:
            v12 = 0LL;
          }
        }
        if ( (v73.DatapathCyclesMask & 0x20) != 0 )
        {
          ndisPcwEndCycleCounter(&v73);
          if ( NewIrql != 2 )
            KeLowerIrql(NewIrql);
          v12 = 0LL;
        }
        goto LABEL_97;
      }
      if ( v21[692] )
      {
        v45 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v21 + 8);
        goto LABEL_55;
      }
LABEL_97:
      if ( v84 == (_BYTE)v12 )
      {
        if ( v21 )
        {
          ExFreePoolWithTag(v21, 0);
          v12 = 0LL;
        }
      }
      else
      {
        --LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[131 * v66].Flink);
      }
      v10 = v67;
      if ( (a5 & 2) == (_DWORD)v12 )
      {
        Alignment = v71;
      }
      else
      {
        if ( (_LIST_ENTRY *)v67->Alignment != v12 )
        {
          v61 = (_SLIST_HEADER *)v70;
          do
          {
            v10 = v61;
            v67 = v61;
            v61 = (_SLIST_HEADER *)v61->Alignment;
          }
          while ( v61 );
        }
        Alignment = v71;
        v10->Alignment = (unsigned __int64)v71;
      }
      v11 = a5 & 1;
      v6 = a5;
      v8 = a3;
    }
    while ( Alignment );
  }
}

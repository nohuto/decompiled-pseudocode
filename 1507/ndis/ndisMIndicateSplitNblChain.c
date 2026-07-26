/*
 * XREFs of ndisMIndicateSplitNblChain @ 0x1C0063AB0
 * Callers:
 *     ndisMIndicateReceiveNblsWithThrottling @ 0x1C0063A60 (ndisMIndicateReceiveNblsWithThrottling.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002A60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C00094A0 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0009770 (ndisSortNetBufferLists.c)
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
  _QWORD *v33; // rdx
  int v34; // r14d
  unsigned int v35; // r15d
  unsigned int v36; // esi
  unsigned int v37; // ebx
  __int64 v38; // r8
  struct _NET_BUFFER_LIST *v39; // rbx
  struct _NET_BUFFER_LIST *v40; // rcx
  unsigned int FilterFriendlyName; // eax
  void (__fastcall *TcpOffloadEventHandler)(void *, unsigned int, unsigned int); // r14
  void (*v43)(void); // r10
  void (__fastcall *TcpOffloadDisconnectCompleteHandler)(void *, _NET_BUFFER_LIST *); // r11
  unsigned int v45; // ecx
  struct _NET_BUFFER_LIST **v46; // r15
  void (__fastcall *v47)(void *, unsigned int, unsigned int); // r13
  __int64 v48; // rsi
  char v49; // r12
  struct _NET_BUFFER_LIST *v50; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v52; // r9
  struct _NET_BUFFER_LIST *v53; // rbx
  NTSTATUS v54; // eax
  _SLIST_HEADER *v55; // rax
  unsigned int ChildRefCount; // [rsp+38h] [rbp-D0h]
  unsigned int v57; // [rsp+38h] [rbp-D0h]
  unsigned int v58; // [rsp+50h] [rbp-B8h]
  int v59; // [rsp+54h] [rbp-B4h]
  unsigned int v60; // [rsp+58h] [rbp-B0h]
  _SLIST_HEADER *v61; // [rsp+60h] [rbp-A8h]
  void (__fastcall *v62)(void *, _NET_BUFFER_LIST *); // [rsp+68h] [rbp-A0h]
  void (*v63)(void); // [rsp+70h] [rbp-98h]
  struct _NET_BUFFER_LIST *v64; // [rsp+78h] [rbp-90h]
  struct _NET_BUFFER_LIST *v65; // [rsp+80h] [rbp-88h]
  char *v66; // [rsp+88h] [rbp-80h]
  struct NDIS_PCW_CONTEXT v67; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v68[4]; // [rsp+A8h] [rbp-60h] BYREF
  char v69[8]; // [rsp+C8h] [rbp-40h] BYREF
  void (__fastcall *v70)(void *, unsigned int, unsigned int); // [rsp+D0h] [rbp-38h]
  void (__fastcall *v71)(void *, _NET_BUFFER_LIST *); // [rsp+D8h] [rbp-30h]
  void (*v72)(void); // [rsp+E0h] [rbp-28h]
  struct _NET_BUFFER_LIST *v73; // [rsp+E8h] [rbp-20h]
  int v74; // [rsp+F0h] [rbp-18h]
  __int64 v75; // [rsp+F4h] [rbp-14h]
  BOOL v76; // [rsp+FCh] [rbp-Ch]
  char v78; // [rsp+160h] [rbp+58h]
  KIRQL NewIrql; // [rsp+170h] [rbp+68h]

  if ( a2 )
  {
    v6 = a5;
    Alignment = a2;
    v64 = a2;
    v8 = a3;
    v9 = a1;
    v10 = 0LL;
    v61 = 0LL;
    v11 = a5 & 1;
    v59 = v11;
    v12 = 0LL;
    do
    {
      v13 = Alignment;
      v65 = Alignment;
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
        v61 = v10;
        v64 = Alignment;
      }
      v10->Alignment = (unsigned __int64)v12;
      v15 = v12;
      v60 = (unsigned int)v12;
      v78 = (char)v12;
      if ( (v11 || KeGetCurrentIrql() == 2)
        && WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink != v12
        && (Number = KeGetPcr()->Prcb.Number,
            Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink,
            v18 = 131LL * Number,
            v60 = Number,
            Flink_low = LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[v18].Flink),
            (unsigned int)Flink_low < 3) )
      {
        v78 = 1;
        v20 = v18 * 16 + 696 * Flink_low;
        v21 = (char *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Blink + v20;
        LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[v18].Flink) = Flink_low + 1;
        v66 = (char *)&Blink->Blink + v20;
      }
      else
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
        v12 = 0LL;
        v66 = PoolWithTag;
        v21 = PoolWithTag;
        if ( !PoolWithTag )
        {
          if ( (unsigned __int8)byte_1C008530B >= 2u )
          {
            WPP_SF_(0xAu, &WPP_abea78df5d3bc502c1918c83347dcce9_Traceguids);
            v12 = 0LL;
          }
          goto LABEL_45;
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
        goto LABEL_45;
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
        goto LABEL_45;
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
        goto LABEL_45;
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
          v26 = v29;
        }
        while ( v29 );
        v9 = a1;
        v13 = v65;
      }
      v33 = (_QWORD *)RcvLinkSpeedIndicateUp[2];
      if ( !v33 )
        goto LABEL_44;
      if ( (a5 & 2) != 0 )
      {
        ndisIndicateAllNetBufferLists(v21, v33);
LABEL_44:
        v12 = 0LL;
LABEL_45:
        if ( (a5 & 2) != 0 )
          goto LABEL_92;
        goto LABEL_46;
      }
      v12 = 0LL;
      v34 = *((_DWORD *)v21 + 4);
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
LABEL_46:
      if ( !v21 )
      {
        v39 = v13;
LABEL_50:
        if ( !v39 )
          goto LABEL_92;
        v40 = v39;
        v67.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)v9->FilterInstanceName._p;
        FilterFriendlyName = (unsigned int)v9->FilterFriendlyName;
        v67.CurrentCpu = -1;
        v67.DatapathEventsMask = FilterFriendlyName;
        v67.DatapathCyclesMask = *(_DWORD *)&v9->Ref.ReferenceCount;
        NewIrql = 2;
        do
        {
          v40->Flags = v40->Flags & 0xFFFFFFF4 | 8;
          v40 = (struct _NET_BUFFER_LIST *)v40->Link.Alignment;
        }
        while ( v40 );
        if ( Microsoft_Windows_Networking_CorrelationEnabled )
          ndisMarkNetBufferListCorrelationIdsAsUsed(v39);
        if ( LODWORD(v9[3].NextReturnNetBufferListsContext) != (_DWORD)v12 )
        {
          v39 = ndisReturnPeriodicReceives((__int64)v9, v39);
          v12 = 0LL;
        }
        if ( !v39 )
          goto LABEL_92;
        if ( ndisNblTrackerMode != (_DWORD)v12 )
          ndisNblTrackerTransferOwnershipInternal(
            v39,
            0LL,
            (struct NDIS_NBL_TRACKER_HANDLE__ *)v9[2].TcpOffloadForwardCompleteHandler,
            0x87u,
            v59 != 0);
        if ( (v67.DatapathCyclesMask & 0x20) != 0 )
        {
          if ( (a5 & 1) == 0 )
            NewIrql = KfRaiseIrql(2u);
          ndisPcwStartCycleCounter(&v67);
        }
        TcpOffloadEventHandler = v9[2].TcpOffloadEventHandler;
        v43 = *(void (**)(void))&v9[2].IfIndex;
        TcpOffloadDisconnectCompleteHandler = v9[2].TcpOffloadDisconnectCompleteHandler;
        v63 = v43;
        v62 = TcpOffloadDisconnectCompleteHandler;
        if ( *(_BYTE *)TcpOffloadEventHandler == 17 )
        {
LABEL_65:
          ((void (__fastcall *)(void (__fastcall *)(void *, _NET_BUFFER_LIST *), struct _NET_BUFFER_LIST *, bool))v43)(
            TcpOffloadDisconnectCompleteHandler,
            v39,
            v59 != 0);
          goto LABEL_87;
        }
        v12 = 0LL;
        if ( !ndisIterativeDataPathDisabled && ((a5 & 1) != 0 || KeGetCurrentIrql() == 2) )
        {
          v45 = KeGetPcr()->Prcb.Number;
          v46 = (struct _NET_BUFFER_LIST **)v68;
          v58 = v45;
          v68[2] = 0LL;
          v68[0] = v39;
          v68[1] = v39;
          v39->Scratch = 0LL;
          v39->ChildRefCount = v59 != 0;
          if ( *(_BYTE *)TcpOffloadEventHandler == 5 )
          {
            while ( *v46 )
            {
              v47 = TcpOffloadEventHandler;
              v48 = *((_QWORD *)TcpOffloadEventHandler + 53) + 96LL * v45;
              v49 = *(_BYTE *)(v48 + 88);
              *(_BYTE *)(v48 + 88) = 1;
              v50 = *v46;
              *v46 = 0LL;
              if ( v50 )
              {
                do
                {
                  Scratch = (struct _NET_BUFFER_LIST *)v50->Scratch;
                  ChildRefCount = v50->ChildRefCount;
                  v50->ChildRefCount = 0;
                  ndisCallReceiveCompleteHandler(TcpOffloadEventHandler, v63, v62, v50, 0, 0, ChildRefCount);
                  v50 = Scratch;
                }
                while ( Scratch );
                v21 = v66;
                v47 = TcpOffloadEventHandler;
                v43 = v63;
                v12 = 0LL;
                TcpOffloadDisconnectCompleteHandler = v62;
              }
              *(_BYTE *)(v48 + 88) = 0;
              if ( v49 )
              {
                *(_BYTE *)(v48 + 88) = 1;
LABEL_78:
                v9 = a1;
                goto LABEL_79;
              }
              TcpOffloadEventHandler = (void (__fastcall *)(void *, unsigned int, unsigned int))*((_QWORD *)TcpOffloadEventHandler
                                                                                                + 69);
              v46 = (struct _NET_BUFFER_LIST **)(v48 + 72);
              v43 = (void (*)(void))*((_QWORD *)v47 + 66);
              TcpOffloadDisconnectCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)v47 + 67);
              v45 = v58;
              v63 = v43;
              v62 = TcpOffloadDisconnectCompleteHandler;
              if ( *(_BYTE *)TcpOffloadEventHandler != 5 )
                goto LABEL_78;
            }
            v9 = a1;
          }
          else
          {
LABEL_79:
            v52 = *v46;
            if ( *v46 )
            {
              *v46 = 0LL;
              do
              {
                v53 = (struct _NET_BUFFER_LIST *)v52->Scratch;
                v57 = v52->ChildRefCount;
                v52->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(
                  TcpOffloadEventHandler,
                  v43,
                  TcpOffloadDisconnectCompleteHandler,
                  v52,
                  0,
                  0,
                  v57);
                v43 = v63;
                v12 = 0LL;
                TcpOffloadDisconnectCompleteHandler = v62;
                v52 = v53;
              }
              while ( v53 );
            }
          }
        }
        else
        {
          if ( v9->Header.Type != 5 )
            goto LABEL_65;
          v74 = 0;
          v70 = TcpOffloadEventHandler;
          v71 = TcpOffloadDisconnectCompleteHandler;
          v75 = 3LL;
          v72 = v43;
          v73 = v39;
          v76 = v59 != 0;
          v54 = ndisExpandStack((void (*)(void *))ndisDataPathExpandStackCallback, v69);
          v12 = 0LL;
          if ( v54 < 0 )
          {
            ndisQueueStackExpansionFallbackNbls(v9, v39, 0);
LABEL_87:
            v12 = 0LL;
          }
        }
        if ( (v67.DatapathCyclesMask & 0x20) != 0 )
        {
          ndisPcwEndCycleCounter(&v67);
          if ( NewIrql != 2 )
            KeLowerIrql(NewIrql);
          v12 = 0LL;
        }
        goto LABEL_92;
      }
      if ( v21[692] )
      {
        v39 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v21 + 8);
        goto LABEL_50;
      }
LABEL_92:
      if ( v78 == (_BYTE)v12 )
      {
        if ( v21 )
        {
          ExFreePoolWithTag(v21, 0);
          v12 = 0LL;
        }
      }
      else
      {
        --LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[131 * v60].Flink);
      }
      v10 = v61;
      if ( (a5 & 2) == (_DWORD)v12 )
      {
        Alignment = v64;
      }
      else
      {
        if ( (_LIST_ENTRY *)v61->Alignment != v12 )
        {
          v55 = (_SLIST_HEADER *)v65;
          do
          {
            v10 = v55;
            v61 = v55;
            v55 = (_SLIST_HEADER *)v55->Alignment;
          }
          while ( v55 );
        }
        Alignment = v64;
        v10->Alignment = (unsigned __int64)v64;
      }
      v11 = a5 & 1;
      v6 = a5;
      v8 = a3;
    }
    while ( Alignment );
  }
}

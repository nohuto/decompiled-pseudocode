/*
 * XREFs of ndisMDispatchReceiveNetBufferLists @ 0x1C0001AE0
 * Callers:
 *     <none>
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

void __fastcall ndisMDispatchReceiveNetBufferLists(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int NewIrql)
{
  unsigned __int64 CurrentIrql; // rax
  char v6; // si
  int v7; // r13d
  unsigned int v8; // r10d
  struct _NET_BUFFER_LIST *v10; // rbx
  struct _NDIS_FILTER_BLOCK *v11; // r15
  struct _NET_BUFFER_LIST *v12; // r12
  __int64 Blink; // r8
  __int64 v14; // rdx
  __int64 Flink_low; // r9
  __int64 v16; // rcx
  char *v17; // rdi
  char *PoolWithTag; // rax
  __int64 v19; // rdx
  int v20; // r11d
  _QWORD *RcvLinkSpeedIndicateUp; // r13
  struct _NET_BUFFER_LIST *Alignment; // rcx
  __int64 v23; // rsi
  __int64 v24; // rsi
  unsigned int v25; // ebx
  int v26; // r15d
  __int64 v27; // r12
  unsigned int v28; // r14d
  __int64 v29; // rcx
  __int64 v30; // rsi
  int v31; // r12d
  unsigned int v32; // r13d
  unsigned int v33; // esi
  unsigned int v34; // r14d
  __int64 v35; // r8
  unsigned int v36; // r15d
  int v37; // r13d
  __int64 v38; // r12
  unsigned int v39; // r14d
  __int64 v40; // rcx
  unsigned int v41; // eax
  struct _NET_BUFFER_LIST *v42; // rcx
  void (__fastcall *TcpOffloadEventHandler)(void *, unsigned int, unsigned int); // r14
  void (__fastcall *TcpOffloadDisconnectCompleteHandler)(void *, _NET_BUFFER_LIST *); // r10
  void (*v45)(void); // r12
  unsigned int Number; // ecx
  struct _NET_BUFFER_LIST **v47; // r15
  void (__fastcall *v48)(void *, unsigned int, unsigned int); // r13
  __int64 v49; // rsi
  char v50; // al
  struct _NET_BUFFER_LIST *v51; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v53; // r9
  struct _NET_BUFFER_LIST *v54; // rbx
  unsigned int ChildRefCount; // [rsp+38h] [rbp-81h]
  unsigned int v56; // [rsp+38h] [rbp-81h]
  char v57; // [rsp+48h] [rbp-71h]
  unsigned int v58; // [rsp+4Ch] [rbp-6Dh]
  void (__fastcall *v59)(void *, _NET_BUFFER_LIST *); // [rsp+50h] [rbp-69h]
  unsigned int v60; // [rsp+58h] [rbp-61h]
  char *v62; // [rsp+68h] [rbp-51h]
  struct NDIS_PCW_CONTEXT v63; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v64[3]; // [rsp+88h] [rbp-31h] BYREF
  char v65[8]; // [rsp+A0h] [rbp-19h] BYREF
  void (__fastcall *v66)(void *, unsigned int, unsigned int); // [rsp+A8h] [rbp-11h]
  void (__fastcall *v67)(void *, _NET_BUFFER_LIST *); // [rsp+B0h] [rbp-9h]
  void (*v68)(void); // [rsp+B8h] [rbp-1h]
  struct _NET_BUFFER_LIST *v69; // [rsp+C0h] [rbp+7h]
  int v70; // [rsp+C8h] [rbp+Fh]
  __int64 v71; // [rsp+CCh] [rbp+13h]
  BOOL v72; // [rsp+D4h] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+57h] BYREF
  char v75; // [rsp+118h] [rbp+5Fh]
  KIRQL NewIrqla; // [rsp+138h] [rbp+7Fh]

  CurrentIrql = (unsigned __int64)&retaddr;
  v6 = NewIrql;
  v7 = NewIrql & 1;
  v60 = 0;
  v8 = a4;
  v57 = 0;
  v10 = a2;
  v11 = a1;
  v12 = 0LL;
  if ( (NewIrql & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
  {
    if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
    {
      LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
      Blink = (__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
      v14 = 131 * CurrentIrql;
      v60 = CurrentIrql;
      Flink_low = LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[131 * CurrentIrql].Flink);
      if ( (unsigned int)Flink_low < 3 )
      {
        v57 = 1;
        v16 = v14 * 16 + 696 * Flink_low;
        v17 = (char *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Blink + v16;
        LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[v14].Flink) = Flink_low + 1;
        v62 = (char *)(v16 + Blink + 8);
LABEL_10:
        RcvLinkSpeedIndicateUp = (_QWORD *)v11->RcvLinkSpeedIndicateUp;
        v17[692] = 0;
        Alignment = v10;
        if ( (NewIrql & 2) == 0 )
        {
          do
          {
            v12 = Alignment;
            Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
        }
        v23 = RcvLinkSpeedIndicateUp[41];
        if ( v23 && *(_BYTE *)(*(_QWORD *)(v23 + 24) + 56LL) >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v23, v10, a3, v8, NewIrql);
          v20 = 0;
          *((_QWORD *)v17 + 8) = 0LL;
          *((_DWORD *)v17 + 20) = 0;
        }
        else
        {
          *((_QWORD *)v17 + 3) = v10;
          *((_QWORD *)v17 + 1) = RcvLinkSpeedIndicateUp;
          *((_DWORD *)v17 + 4) = NewIrql;
          *(_QWORD *)v17 = v11;
          *((_QWORD *)v17 + 4) = v12;
          *((_DWORD *)v17 + 10) = a3;
          *((_DWORD *)v17 + 11) = v8;
          ndisSortNetBufferLists(v17, NewIrql, Blink);
          v20 = 0;
          if ( *((_QWORD *)v17 + 8) || *((_DWORD *)v17 + 172) )
          {
            if ( !*RcvLinkSpeedIndicateUp || a3 )
            {
              Blink = 1LL;
              v17[692] = 1;
            }
            else
            {
              ndisIndicateXlatedPacketsToNdis5Protocols(v17);
              v20 = 0;
              Blink = 1LL;
            }
            if ( !v23 )
            {
              v24 = RcvLinkSpeedIndicateUp[1];
              if ( v24 )
              {
                v25 = *((_DWORD *)v17 + 172);
                v26 = *((_DWORD *)v17 + 4) | 2;
                do
                {
                  v27 = *(_QWORD *)(v24 + 424);
                  v28 = 0;
                  do
                  {
                    v29 = v28++;
                    v19 = *(_QWORD *)&v17[40 * v29 + 64];
                    if ( v19 )
                    {
                      ndisMIndicateNetBufferListsToOpen(
                        v24,
                        v19,
                        *((unsigned int *)v17 + 10),
                        *(unsigned int *)&v17[40 * v29 + 80],
                        v26);
                      Blink = 1LL;
                    }
                  }
                  while ( v28 <= v25 );
                  v24 = v27;
                }
                while ( v27 );
                v10 = a2;
                v11 = a1;
              }
              v30 = RcvLinkSpeedIndicateUp[2];
              if ( v30 )
              {
                if ( (NewIrql & 2) != 0 )
                {
                  v36 = *((_DWORD *)v17 + 172);
                  v37 = *((_DWORD *)v17 + 4) | 2;
                  do
                  {
                    v38 = *(_QWORD *)(v30 + 424);
                    v39 = 0;
                    do
                    {
                      v40 = v39++;
                      v19 = *(_QWORD *)&v17[40 * v40 + 64];
                      if ( v19 )
                      {
                        ndisMIndicateNetBufferListsToOpen(
                          v30,
                          v19,
                          *((unsigned int *)v17 + 10),
                          *(unsigned int *)&v17[40 * v40 + 80],
                          v37);
                        Blink = 1LL;
                      }
                    }
                    while ( v39 <= v36 );
                    v30 = v38;
                  }
                  while ( v38 );
                  v11 = a1;
                }
                else
                {
                  v31 = *((_DWORD *)v17 + 4);
                  v32 = *((_DWORD *)v17 + 10);
                  v33 = *((_DWORD *)v17 + 172);
                  if ( *(_DWORD *)(*(_QWORD *)v17 + 2252LL) )
                    ndisIndicateToPmodeOpens(v17, v19, 1LL);
                  v34 = 1;
                  if ( v33 )
                  {
                    do
                    {
                      v35 = v34++;
                      ndisMIndicateNetBufferListsToOpen(
                        *(_QWORD *)&v17[40 * v35 + 56],
                        *(_QWORD *)&v17[40 * v35 + 64],
                        v32,
                        *(unsigned int *)&v17[40 * v35 + 80],
                        v31);
                    }
                    while ( v34 <= v33 );
                    v10 = a2;
                  }
                }
              }
              v20 = 0;
            }
          }
        }
        v7 = NewIrql & 1;
        v6 = NewIrql;
        goto LABEL_46;
      }
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
  v20 = 0;
  v62 = PoolWithTag;
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = a4;
    goto LABEL_10;
  }
  if ( (unsigned __int8)byte_1C008370B >= 2u )
  {
    WPP_SF_(10LL, &WPP_abea78df5d3bc502c1918c83347dcce9_Traceguids, Blink);
    v20 = 0;
  }
LABEL_46:
  if ( (v6 & 2) != 0 )
    goto LABEL_89;
  if ( v17 )
  {
    if ( !v17[692] )
      goto LABEL_89;
    v10 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v17 + 8);
  }
  if ( v10 )
  {
    v63.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)v11->FilterInstanceName._p;
    v63.DatapathEventsMask = (unsigned int)v11->FilterFriendlyName;
    v41 = *(_DWORD *)&v11->Ref.ReferenceCount;
    v42 = v10;
    v63.CurrentCpu = -1;
    v63.DatapathCyclesMask = v41;
    NewIrqla = 2;
    do
    {
      v42->Flags = v42->Flags & 0xFFFFFFF4 | 8;
      v42 = (struct _NET_BUFFER_LIST *)v42->Link.Alignment;
    }
    while ( v42 );
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisMarkNetBufferListCorrelationIdsAsUsed(v10, v19, Blink);
    if ( LODWORD(v11[3].NextReturnNetBufferListsContext) != v20 )
    {
      v10 = (struct _NET_BUFFER_LIST *)ndisReturnPeriodicReceives(v11, v10);
      v20 = 0;
    }
    if ( v10 )
    {
      if ( ndisNblTrackerMode != v20 )
        ndisNblTrackerTransferOwnershipInternal(
          v10,
          0LL,
          (struct NDIS_NBL_TRACKER_HANDLE__ *)v11[2].TcpOffloadForwardCompleteHandler,
          NdisNblTrackerEvent_ProtocolReturned,
          v7 != 0);
      if ( (v63.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( !v7 )
          NewIrqla = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v63, 5u);
      }
      TcpOffloadEventHandler = v11[2].TcpOffloadEventHandler;
      TcpOffloadDisconnectCompleteHandler = v11[2].TcpOffloadDisconnectCompleteHandler;
      v45 = *(void (**)(void))&v11[2].IfIndex;
      v59 = TcpOffloadDisconnectCompleteHandler;
      if ( *(_BYTE *)TcpOffloadEventHandler == 17 )
        goto LABEL_83;
      if ( !ndisIterativeDataPathDisabled && (v7 || KeGetCurrentIrql() == 2) )
      {
        Number = KeGetPcr()->Prcb.Number;
        v47 = (struct _NET_BUFFER_LIST **)v64;
        v58 = Number;
        v64[2] = 0LL;
        v64[0] = v10;
        v64[1] = v10;
        v10->Scratch = 0LL;
        v10->ChildRefCount = v7 != 0;
        while ( *(_BYTE *)TcpOffloadEventHandler == 5 )
        {
          if ( !*v47 )
            goto LABEL_86;
          v48 = TcpOffloadEventHandler;
          v49 = *((_QWORD *)TcpOffloadEventHandler + 53) + 96LL * Number;
          v50 = *(_BYTE *)(v49 + 88);
          *(_BYTE *)(v49 + 88) = 1;
          v51 = *v47;
          v75 = v50;
          *v47 = 0LL;
          if ( v51 )
          {
            do
            {
              Scratch = (struct _NET_BUFFER_LIST *)v51->Scratch;
              ChildRefCount = v51->ChildRefCount;
              v51->ChildRefCount = 0;
              ndisCallReceiveCompleteHandler(TcpOffloadEventHandler, v45, v59, v51, 0, 0, ChildRefCount);
              v51 = Scratch;
            }
            while ( Scratch );
            v17 = v62;
            TcpOffloadDisconnectCompleteHandler = v59;
            v48 = TcpOffloadEventHandler;
            v50 = v75;
          }
          *(_BYTE *)(v49 + 88) = 0;
          if ( v50 )
          {
            *(_BYTE *)(v49 + 88) = 1;
            break;
          }
          TcpOffloadDisconnectCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)v48 + 67);
          v47 = (struct _NET_BUFFER_LIST **)(v49 + 72);
          TcpOffloadEventHandler = (void (__fastcall *)(void *, unsigned int, unsigned int))*((_QWORD *)TcpOffloadEventHandler
                                                                                            + 69);
          v45 = (void (*)(void))*((_QWORD *)v48 + 66);
          v59 = TcpOffloadDisconnectCompleteHandler;
          Number = v58;
        }
        v53 = *v47;
        if ( *v47 )
        {
          *v47 = 0LL;
          do
          {
            v54 = (struct _NET_BUFFER_LIST *)v53->Scratch;
            v56 = v53->ChildRefCount;
            v53->ChildRefCount = 0;
            ndisCallReceiveCompleteHandler(
              TcpOffloadEventHandler,
              v45,
              TcpOffloadDisconnectCompleteHandler,
              v53,
              0,
              0,
              v56);
            TcpOffloadDisconnectCompleteHandler = v59;
            v53 = v54;
          }
          while ( v54 );
        }
        goto LABEL_86;
      }
      if ( v11->Header.Type == 5 )
      {
        v70 = 0;
        v66 = TcpOffloadEventHandler;
        v67 = TcpOffloadDisconnectCompleteHandler;
        v71 = 3LL;
        v68 = v45;
        v69 = v10;
        v72 = v7 != 0;
        if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v65) < 0 )
          ndisQueueStackExpansionFallbackNbls(v11, v10, 0);
      }
      else
      {
LABEL_83:
        ((void (__fastcall *)(void (__fastcall *)(void *, _NET_BUFFER_LIST *), struct _NET_BUFFER_LIST *, bool))v45)(
          TcpOffloadDisconnectCompleteHandler,
          v10,
          v7 != 0);
      }
LABEL_86:
      if ( (v63.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v63, 5u, 0x12uLL);
        if ( NewIrqla != 2 )
          KeLowerIrql(NewIrqla);
      }
    }
  }
LABEL_89:
  if ( v57 )
  {
    --LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[131 * v60].Flink);
  }
  else if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
  }
}

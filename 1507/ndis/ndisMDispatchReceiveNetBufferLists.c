/*
 * XREFs of ndisMDispatchReceiveNetBufferLists @ 0x1C00630C0
 * Callers:
 *     <none>
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

void __fastcall ndisMDispatchReceiveNetBufferLists(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        int NewIrql)
{
  unsigned __int64 CurrentIrql; // rax
  char v6; // si
  int v7; // r13d
  unsigned int v8; // r10d
  struct _NET_BUFFER_LIST *v10; // rbx
  struct _NDIS_FILTER_BLOCK *v11; // r15
  struct _NET_BUFFER_LIST *v12; // r12
  _LIST_ENTRY *Blink; // r8
  __int64 v14; // rdx
  __int64 Flink_low; // r9
  __int64 v16; // rcx
  char *v17; // rdi
  char *PoolWithTag; // rax
  int v19; // r11d
  _QWORD *RcvLinkSpeedIndicateUp; // r13
  struct _NET_BUFFER_LIST *Alignment; // rcx
  _QWORD *v22; // rsi
  _QWORD *v23; // rsi
  unsigned int v24; // ebx
  int v25; // r15d
  _QWORD *v26; // r12
  unsigned int v27; // r14d
  __int64 v28; // rcx
  struct _NET_BUFFER_LIST *v29; // rdx
  _QWORD *v30; // rdx
  int v31; // r12d
  unsigned int v32; // r13d
  unsigned int v33; // esi
  unsigned int v34; // r14d
  __int64 v35; // r8
  unsigned int v36; // eax
  struct _NET_BUFFER_LIST *v37; // rcx
  void (__fastcall *TcpOffloadEventHandler)(void *, unsigned int, unsigned int); // r14
  void (__fastcall *TcpOffloadDisconnectCompleteHandler)(void *, _NET_BUFFER_LIST *); // r10
  void (*v40)(void); // r12
  unsigned int Number; // ecx
  struct _NET_BUFFER_LIST **v42; // r15
  void (__fastcall *v43)(void *, unsigned int, unsigned int); // r13
  __int64 v44; // rsi
  char v45; // al
  struct _NET_BUFFER_LIST *v46; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v48; // r9
  struct _NET_BUFFER_LIST *v49; // rbx
  unsigned int ChildRefCount; // [rsp+38h] [rbp-81h]
  unsigned int v51; // [rsp+38h] [rbp-81h]
  char v52; // [rsp+48h] [rbp-71h]
  unsigned int v53; // [rsp+4Ch] [rbp-6Dh]
  void (__fastcall *v54)(void *, _NET_BUFFER_LIST *); // [rsp+50h] [rbp-69h]
  unsigned int v55; // [rsp+58h] [rbp-61h]
  char *v57; // [rsp+68h] [rbp-51h]
  struct NDIS_PCW_CONTEXT v58; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v59[3]; // [rsp+88h] [rbp-31h] BYREF
  char v60[8]; // [rsp+A0h] [rbp-19h] BYREF
  void (__fastcall *v61)(void *, unsigned int, unsigned int); // [rsp+A8h] [rbp-11h]
  void (__fastcall *v62)(void *, _NET_BUFFER_LIST *); // [rsp+B0h] [rbp-9h]
  void (*v63)(void); // [rsp+B8h] [rbp-1h]
  struct _NET_BUFFER_LIST *v64; // [rsp+C0h] [rbp+7h]
  int v65; // [rsp+C8h] [rbp+Fh]
  __int64 v66; // [rsp+CCh] [rbp+13h]
  BOOL v67; // [rsp+D4h] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+57h] BYREF
  char v70; // [rsp+118h] [rbp+5Fh]
  KIRQL NewIrqla; // [rsp+138h] [rbp+7Fh]

  CurrentIrql = (unsigned __int64)&retaddr;
  v6 = NewIrql;
  v7 = NewIrql & 1;
  v55 = 0;
  v8 = a4;
  v52 = 0;
  v10 = a2;
  v11 = a1;
  v12 = 0LL;
  if ( (NewIrql & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
  {
    if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
    {
      LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
      Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
      v14 = 131 * CurrentIrql;
      v55 = CurrentIrql;
      Flink_low = LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[131 * CurrentIrql].Flink);
      if ( (unsigned int)Flink_low < 3 )
      {
        v52 = 1;
        v16 = v14 * 16 + 696 * Flink_low;
        v17 = (char *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Blink + v16;
        LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[v14].Flink) = Flink_low + 1;
        v57 = (char *)&Blink->Blink + v16;
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
        v22 = (_QWORD *)RcvLinkSpeedIndicateUp[41];
        if ( v22 && *(_BYTE *)(v22[3] + 56LL) >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v22, v10, a3, v8, NewIrql);
          v19 = 0;
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
          ndisSortNetBufferLists((__int64 *)v17);
          v19 = 0;
          if ( *((_QWORD *)v17 + 8) || *((_DWORD *)v17 + 172) )
          {
            if ( !*RcvLinkSpeedIndicateUp || a3 )
            {
              v17[692] = 1;
            }
            else
            {
              ndisIndicateXlatedPacketsToNdis5Protocols((__int64 *)v17);
              v19 = 0;
            }
            if ( !v22 )
            {
              v23 = (_QWORD *)RcvLinkSpeedIndicateUp[1];
              if ( v23 )
              {
                v24 = *((_DWORD *)v17 + 172);
                v25 = *((_DWORD *)v17 + 4) | 2;
                do
                {
                  v26 = (_QWORD *)v23[53];
                  v27 = 0;
                  do
                  {
                    v28 = v27++;
                    v29 = *(struct _NET_BUFFER_LIST **)&v17[40 * v28 + 64];
                    if ( v29 )
                      ndisMIndicateNetBufferListsToOpen(
                        v23,
                        v29,
                        *((_DWORD *)v17 + 10),
                        *(_DWORD *)&v17[40 * v28 + 80],
                        v25);
                  }
                  while ( v27 <= v24 );
                  v23 = v26;
                }
                while ( v26 );
                v10 = a2;
                v11 = a1;
              }
              v30 = (_QWORD *)RcvLinkSpeedIndicateUp[2];
              if ( v30 )
              {
                if ( (NewIrql & 2) != 0 )
                {
                  ndisIndicateAllNetBufferLists(v17, v30);
                }
                else
                {
                  v31 = *((_DWORD *)v17 + 4);
                  v32 = *((_DWORD *)v17 + 10);
                  v33 = *((_DWORD *)v17 + 172);
                  if ( *(_DWORD *)(*(_QWORD *)v17 + 2252LL) )
                    ndisIndicateToPmodeOpens((__int64)v17);
                  v34 = 1;
                  if ( v33 )
                  {
                    do
                    {
                      v35 = v34++;
                      ndisMIndicateNetBufferListsToOpen(
                        *(_QWORD **)&v17[40 * v35 + 56],
                        *(struct _NET_BUFFER_LIST **)&v17[40 * v35 + 64],
                        v32,
                        *(_DWORD *)&v17[40 * v35 + 80],
                        v31);
                    }
                    while ( v34 <= v33 );
                    v11 = a1;
                  }
                }
              }
              v19 = 0;
            }
          }
        }
        v7 = NewIrql & 1;
        v6 = NewIrql;
        goto LABEL_40;
      }
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
  v19 = 0;
  v57 = PoolWithTag;
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = a4;
    goto LABEL_10;
  }
  if ( (unsigned __int8)byte_1C008530B >= 2u )
  {
    WPP_SF_(0xAu, &WPP_abea78df5d3bc502c1918c83347dcce9_Traceguids);
    v19 = 0;
  }
LABEL_40:
  if ( (v6 & 2) != 0 )
    goto LABEL_83;
  if ( v17 )
  {
    if ( !v17[692] )
      goto LABEL_83;
    v10 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v17 + 8);
  }
  if ( v10 )
  {
    v58.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)v11->FilterInstanceName._p;
    v58.DatapathEventsMask = (unsigned int)v11->FilterFriendlyName;
    v36 = *(_DWORD *)&v11->Ref.ReferenceCount;
    v37 = v10;
    v58.CurrentCpu = -1;
    v58.DatapathCyclesMask = v36;
    NewIrqla = 2;
    do
    {
      v37->Flags = v37->Flags & 0xFFFFFFF4 | 8;
      v37 = (struct _NET_BUFFER_LIST *)v37->Link.Alignment;
    }
    while ( v37 );
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisMarkNetBufferListCorrelationIdsAsUsed(v10);
    if ( LODWORD(v11[3].NextReturnNetBufferListsContext) != v19 )
    {
      v10 = ndisReturnPeriodicReceives((__int64)v11, v10);
      v19 = 0;
    }
    if ( v10 )
    {
      if ( ndisNblTrackerMode != v19 )
        ndisNblTrackerTransferOwnershipInternal(
          v10,
          0LL,
          (struct NDIS_NBL_TRACKER_HANDLE__ *)v11[2].TcpOffloadForwardCompleteHandler,
          0x87u,
          v7 != 0);
      if ( (v58.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( !v7 )
          NewIrqla = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v58);
      }
      TcpOffloadEventHandler = v11[2].TcpOffloadEventHandler;
      TcpOffloadDisconnectCompleteHandler = v11[2].TcpOffloadDisconnectCompleteHandler;
      v40 = *(void (**)(void))&v11[2].IfIndex;
      v54 = TcpOffloadDisconnectCompleteHandler;
      if ( *(_BYTE *)TcpOffloadEventHandler == 17 )
        goto LABEL_77;
      if ( !ndisIterativeDataPathDisabled && (v7 || KeGetCurrentIrql() == 2) )
      {
        Number = KeGetPcr()->Prcb.Number;
        v42 = (struct _NET_BUFFER_LIST **)v59;
        v53 = Number;
        v59[2] = 0LL;
        v59[0] = v10;
        v59[1] = v10;
        v10->Scratch = 0LL;
        v10->ChildRefCount = v7 != 0;
        while ( *(_BYTE *)TcpOffloadEventHandler == 5 )
        {
          if ( !*v42 )
            goto LABEL_80;
          v43 = TcpOffloadEventHandler;
          v44 = *((_QWORD *)TcpOffloadEventHandler + 53) + 96LL * Number;
          v45 = *(_BYTE *)(v44 + 88);
          *(_BYTE *)(v44 + 88) = 1;
          v46 = *v42;
          v70 = v45;
          *v42 = 0LL;
          if ( v46 )
          {
            do
            {
              Scratch = (struct _NET_BUFFER_LIST *)v46->Scratch;
              ChildRefCount = v46->ChildRefCount;
              v46->ChildRefCount = 0;
              ndisCallReceiveCompleteHandler(TcpOffloadEventHandler, v40, v54, v46, 0, 0, ChildRefCount);
              v46 = Scratch;
            }
            while ( Scratch );
            v17 = v57;
            TcpOffloadDisconnectCompleteHandler = v54;
            v43 = TcpOffloadEventHandler;
            v45 = v70;
          }
          *(_BYTE *)(v44 + 88) = 0;
          if ( v45 )
          {
            *(_BYTE *)(v44 + 88) = 1;
            break;
          }
          TcpOffloadDisconnectCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)v43 + 67);
          v42 = (struct _NET_BUFFER_LIST **)(v44 + 72);
          TcpOffloadEventHandler = (void (__fastcall *)(void *, unsigned int, unsigned int))*((_QWORD *)TcpOffloadEventHandler
                                                                                            + 69);
          v40 = (void (*)(void))*((_QWORD *)v43 + 66);
          v54 = TcpOffloadDisconnectCompleteHandler;
          Number = v53;
        }
        v48 = *v42;
        if ( *v42 )
        {
          *v42 = 0LL;
          do
          {
            v49 = (struct _NET_BUFFER_LIST *)v48->Scratch;
            v51 = v48->ChildRefCount;
            v48->ChildRefCount = 0;
            ndisCallReceiveCompleteHandler(
              TcpOffloadEventHandler,
              v40,
              TcpOffloadDisconnectCompleteHandler,
              v48,
              0,
              0,
              v51);
            TcpOffloadDisconnectCompleteHandler = v54;
            v48 = v49;
          }
          while ( v49 );
        }
        goto LABEL_80;
      }
      if ( v11->Header.Type == 5 )
      {
        v65 = 0;
        v61 = TcpOffloadEventHandler;
        v62 = TcpOffloadDisconnectCompleteHandler;
        v66 = 3LL;
        v63 = v40;
        v64 = v10;
        v67 = v7 != 0;
        if ( ndisExpandStack((void (*)(void *))ndisDataPathExpandStackCallback, v60) < 0 )
          ndisQueueStackExpansionFallbackNbls(v11, v10, 0);
      }
      else
      {
LABEL_77:
        ((void (__fastcall *)(void (__fastcall *)(void *, _NET_BUFFER_LIST *), struct _NET_BUFFER_LIST *, bool))v40)(
          TcpOffloadDisconnectCompleteHandler,
          v10,
          v7 != 0);
      }
LABEL_80:
      if ( (v58.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v58);
        if ( NewIrqla != 2 )
          KeLowerIrql(NewIrqla);
      }
    }
  }
LABEL_83:
  if ( v52 )
  {
    --LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[131 * v55].Flink);
  }
  else if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
  }
}

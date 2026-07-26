/*
 * XREFs of ndisMTopReceiveNetBufferLists @ 0x1C0002240
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

void __fastcall ndisMTopReceiveNetBufferLists(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 CurrentIrql; // rax
  struct _NET_BUFFER_LIST *v8; // r13
  __int64 v9; // r15
  char v10; // bl
  struct _NET_BUFFER_LIST *v11; // rbp
  int v12; // r12d
  _LIST_ENTRY *Blink; // r9
  unsigned __int64 v14; // r8
  __int64 Flink_low; // rdx
  unsigned __int64 v16; // rcx
  char *v17; // rdi
  _QWORD *v18; // r12
  struct _NET_BUFFER_LIST *Alignment; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rsi
  unsigned int v23; // ebp
  int v24; // r14d
  __int64 v25; // r15
  __int64 v26; // rbx
  __int64 v27; // r9
  __int64 v28; // rsi
  int v29; // ebp
  unsigned int v30; // r14d
  unsigned int v31; // esi
  unsigned int i; // ebx
  __int64 v33; // r8
  unsigned int v34; // ebp
  int v35; // r14d
  __int64 v36; // r15
  __int64 v37; // rbx
  __int64 v38; // r9
  struct _NET_BUFFER_LIST *v39; // rcx
  BOOL v40; // ebx
  __int64 v41; // rax
  void (*v42)(void); // r15
  _QWORD *v43; // rsi
  void *v44; // r12
  struct _NET_BUFFER_LIST **v45; // r14
  _QWORD *v46; // r13
  __int64 v47; // rbp
  char v48; // al
  struct _NET_BUFFER_LIST *v49; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v51; // r9
  struct _NET_BUFFER_LIST *v52; // rbx
  unsigned int ChildRefCount; // [rsp+30h] [rbp-C8h]
  unsigned int v54; // [rsp+30h] [rbp-C8h]
  char v55; // [rsp+40h] [rbp-B8h]
  unsigned int v56; // [rsp+44h] [rbp-B4h]
  unsigned int v57; // [rsp+48h] [rbp-B0h]
  char *PoolWithTag; // [rsp+50h] [rbp-A8h]
  struct NDIS_PCW_CONTEXT v59; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v60[3]; // [rsp+70h] [rbp-88h] BYREF
  char v61[8]; // [rsp+88h] [rbp-70h] BYREF
  __int64 v62; // [rsp+90h] [rbp-68h]
  void *v63; // [rsp+98h] [rbp-60h]
  void (*v64)(void); // [rsp+A0h] [rbp-58h]
  struct _NET_BUFFER_LIST *v65; // [rsp+A8h] [rbp-50h]
  int v66; // [rsp+B0h] [rbp-48h]
  __int64 v67; // [rsp+B4h] [rbp-44h]
  BOOL v68; // [rsp+BCh] [rbp-3Ch]
  char v70; // [rsp+100h] [rbp+8h]
  KIRQL v71; // [rsp+108h] [rbp+10h]

  v8 = a2;
  v9 = a1;
  if ( (a2->NblFlags & 0x8000) != 0 )
  {
    (*(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *))(a1 + 2152))(a1, a2);
    return;
  }
  if ( !*(_BYTE *)(a1 + 2673) )
  {
    (*(void (__fastcall **)(__int64))(a1 + 2144))(a1);
    return;
  }
  v10 = a5;
  v11 = 0LL;
  v12 = a5 & 1;
  v57 = 0;
  v55 = 0;
  if ( (a5 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
  {
    if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
    {
      LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
      Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
      v14 = 2096 * CurrentIrql;
      v57 = CurrentIrql;
      Flink_low = LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[131 * CurrentIrql].Flink);
      if ( (unsigned int)Flink_low < 3 )
      {
        v55 = 1;
        v16 = v14 + 696 * Flink_low;
        v17 = (char *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Blink + v16;
        LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[v14 / 0x10].Flink) = Flink_low + 1;
        PoolWithTag = (char *)&Blink->Blink + v16;
LABEL_9:
        v18 = *(_QWORD **)(v9 + 400);
        v17[692] = 0;
        Alignment = v8;
        if ( (a5 & 2) == 0 )
        {
          do
          {
            v11 = Alignment;
            Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
        }
        v20 = v18[41];
        if ( v20 && *(_BYTE *)(*(_QWORD *)(v20 + 24) + 56LL) >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v20, v8, a3, a4, a5);
          v10 = a5;
          v12 = a5 & 1;
          *((_QWORD *)v17 + 8) = 0LL;
          *((_DWORD *)v17 + 20) = 0;
        }
        else
        {
          *((_QWORD *)v17 + 3) = v8;
          *((_QWORD *)v17 + 1) = v18;
          *((_DWORD *)v17 + 4) = a5;
          *(_QWORD *)v17 = v9;
          *((_QWORD *)v17 + 4) = v11;
          *((_DWORD *)v17 + 10) = a3;
          *((_DWORD *)v17 + 11) = a4;
          ndisSortNetBufferLists(v17, a5, v14);
          if ( *((_QWORD *)v17 + 8) || *((_DWORD *)v17 + 172) )
          {
            if ( !*v18 || a3 )
              v17[692] = 1;
            else
              ndisIndicateXlatedPacketsToNdis5Protocols(v17);
            if ( !v20 )
            {
              v22 = v18[1];
              if ( v22 )
              {
                v23 = *((_DWORD *)v17 + 172);
                v24 = *((_DWORD *)v17 + 4) | 2;
                do
                {
                  v25 = *(_QWORD *)(v22 + 424);
                  v26 = 0LL;
                  do
                  {
                    v21 = *(_QWORD *)&v17[40 * v26 + 64];
                    v27 = *(unsigned int *)&v17[40 * v26 + 80];
                    v26 = (unsigned int)(v26 + 1);
                    if ( v21 )
                      ndisMIndicateNetBufferListsToOpen(v22, v21, *((unsigned int *)v17 + 10), v27, v24);
                  }
                  while ( (unsigned int)v26 <= v23 );
                  v22 = v25;
                }
                while ( v25 );
              }
              v28 = v18[2];
              if ( v28 )
              {
                if ( (a5 & 2) != 0 )
                {
                  v34 = *((_DWORD *)v17 + 172);
                  v35 = *((_DWORD *)v17 + 4) | 2;
                  do
                  {
                    v36 = *(_QWORD *)(v28 + 424);
                    v37 = 0LL;
                    do
                    {
                      v21 = *(_QWORD *)&v17[40 * v37 + 64];
                      v38 = *(unsigned int *)&v17[40 * v37 + 80];
                      v37 = (unsigned int)(v37 + 1);
                      if ( v21 )
                        ndisMIndicateNetBufferListsToOpen(v28, v21, *((unsigned int *)v17 + 10), v38, v35);
                    }
                    while ( (unsigned int)v37 <= v34 );
                    v28 = v36;
                  }
                  while ( v36 );
                }
                else
                {
                  v29 = *((_DWORD *)v17 + 4);
                  v30 = *((_DWORD *)v17 + 10);
                  v31 = *((_DWORD *)v17 + 172);
                  if ( *(_DWORD *)(*(_QWORD *)v17 + 2252LL) )
                    ndisIndicateToPmodeOpens((__int64)v17);
                  for ( i = 1; i <= v31; ++i )
                  {
                    v33 = i;
                    ndisMIndicateNetBufferListsToOpen(
                      *(_QWORD *)&v17[40 * v33 + 56],
                      *(_QWORD *)&v17[40 * v33 + 64],
                      v30,
                      *(unsigned int *)&v17[40 * v33 + 80],
                      v29);
                  }
                }
              }
              v9 = a1;
            }
          }
          v12 = a5 & 1;
          v10 = a5;
        }
        goto LABEL_46;
      }
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
  v17 = PoolWithTag;
  if ( PoolWithTag )
    goto LABEL_9;
  if ( (unsigned __int8)byte_1C008370B >= 2u )
    WPP_SF_(10LL, &WPP_abea78df5d3bc502c1918c83347dcce9_Traceguids, v14);
LABEL_46:
  if ( (v10 & 2) == 0 )
  {
    if ( !v17 )
      goto LABEL_50;
    if ( v17[692] )
    {
      v8 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v17 + 8);
LABEL_50:
      if ( !v8 )
        goto LABEL_88;
      v71 = 2;
      v59.CurrentCpu = -1;
      v39 = v8;
      v40 = v12 != 0;
      v59.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v9 + 40);
      v59.DatapathEventsMask = *(_DWORD *)(v9 + 48);
      v59.DatapathCyclesMask = *(_DWORD *)(v9 + 80);
      do
      {
        v39->Flags = v39->Flags & 0xFFFFFFF4 | 8;
        v39 = (struct _NET_BUFFER_LIST *)v39->Link.Alignment;
      }
      while ( v39 );
      v41 = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
      if ( Microsoft_Windows_Networking_CorrelationEnabled )
        v41 = ndisMarkNetBufferListCorrelationIdsAsUsed(v8, v21, v14);
      if ( *(_DWORD *)(v9 + 3272) )
      {
        v41 = ndisReturnPeriodicReceives(v9, v8);
        v8 = (struct _NET_BUFFER_LIST *)v41;
      }
      if ( !v8 )
        goto LABEL_88;
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v8,
          0LL,
          *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v9 + 2544),
          NdisNblTrackerEvent_ProtocolReturned,
          v12 != 0);
      if ( (v59.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( !v12 )
          v71 = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v59, 5u);
      }
      v42 = *(void (**)(void))(v9 + 2648);
      v43 = *(_QWORD **)(a1 + 2552);
      v44 = *(void **)(a1 + 2536);
      if ( *(_BYTE *)v43 == 17 )
        goto LABEL_82;
      if ( !ndisIterativeDataPathDisabled )
      {
        if ( v40 || (v41 = KeGetCurrentIrql(), (_BYTE)v41 == 2) )
        {
          LODWORD(v41) = KeGetPcr()->Prcb.Number;
          v45 = (struct _NET_BUFFER_LIST **)v60;
          v56 = v41;
          v60[2] = 0LL;
          v60[0] = v8;
          v60[1] = v8;
          v8->Scratch = 0LL;
          v8->ChildRefCount = v40;
          if ( *(_BYTE *)v43 == 5 )
          {
            while ( *v45 )
            {
              v46 = v43;
              v47 = v43[53] + 96 * v41;
              v48 = *(_BYTE *)(v47 + 88);
              *(_BYTE *)(v47 + 88) = 1;
              v49 = *v45;
              v70 = v48;
              *v45 = 0LL;
              if ( v49 )
              {
                do
                {
                  Scratch = (struct _NET_BUFFER_LIST *)v49->Scratch;
                  ChildRefCount = v49->ChildRefCount;
                  v49->ChildRefCount = 0;
                  ndisCallReceiveCompleteHandler(v43, v42, v44, v49, 0, 0, ChildRefCount);
                  v49 = Scratch;
                }
                while ( Scratch );
                v17 = PoolWithTag;
                v48 = v70;
              }
              *(_BYTE *)(v47 + 88) = 0;
              if ( v48 )
              {
                *(_BYTE *)(v47 + 88) = 1;
                goto LABEL_77;
              }
              v43 = (_QWORD *)v43[69];
              v45 = (struct _NET_BUFFER_LIST **)(v47 + 72);
              v42 = (void (*)(void))v46[66];
              v44 = (void *)v46[67];
              v41 = v56;
              if ( *(_BYTE *)v43 != 5 )
                goto LABEL_77;
            }
          }
          else
          {
LABEL_77:
            v51 = *v45;
            if ( *v45 )
            {
              *v45 = 0LL;
              do
              {
                v52 = (struct _NET_BUFFER_LIST *)v51->Scratch;
                v54 = v51->ChildRefCount;
                v51->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(v43, v42, v44, v51, 0, 0, v54);
                v51 = v52;
              }
              while ( v52 );
            }
          }
          goto LABEL_85;
        }
      }
      if ( *(_BYTE *)a1 == 5 )
      {
        v62 = *(_QWORD *)(a1 + 2552);
        v63 = v44;
        v67 = 3LL;
        v64 = v42;
        v65 = v8;
        v66 = 0;
        v68 = v40;
        if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v61) < 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)a1, v8, 0);
      }
      else
      {
LABEL_82:
        ((void (__fastcall *)(_QWORD, struct _NET_BUFFER_LIST *, BOOL))v42)(*(_QWORD *)(a1 + 2536), v8, v40);
      }
LABEL_85:
      if ( (v59.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v59, 5u, 0x12uLL);
        if ( v71 != 2 )
          KeLowerIrql(v71);
      }
    }
  }
LABEL_88:
  if ( v55 )
  {
    --LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[131 * v57].Flink);
  }
  else if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
  }
}

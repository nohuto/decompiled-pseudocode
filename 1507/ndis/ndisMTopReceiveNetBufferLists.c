/*
 * XREFs of ndisMTopReceiveNetBufferLists @ 0x1C00090E0
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

void __fastcall ndisMTopReceiveNetBufferLists(__int64 a1, struct _NET_BUFFER_LIST *a2, int a3, int a4, int a5)
{
  struct _NET_BUFFER_LIST *v7; // r15
  __int64 v8; // r14
  char v9; // r13
  struct _NET_BUFFER_LIST *v10; // rsi
  unsigned int Number; // edi
  __int64 v12; // r8
  __int64 Flink_low; // rdx
  char *PoolWithTag; // rbx
  _QWORD *v15; // r14
  struct _NET_BUFFER_LIST *Alignment; // rcx
  _QWORD *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rsi
  unsigned int v21; // ebp
  int v22; // r13d
  _QWORD *v23; // r12
  __int64 v24; // rdi
  struct _NET_BUFFER_LIST *v25; // rdx
  int v26; // ebp
  unsigned int v27; // edi
  unsigned int i; // esi
  __int64 v29; // r8
  struct _NET_BUFFER_LIST *v30; // rdx
  int v31; // edi
  KIRQL v32; // r12
  struct _NET_BUFFER_LIST *v33; // rcx
  void (*v34)(void); // rbp
  void *v35; // r14
  _QWORD *v36; // rsi
  unsigned int v37; // ecx
  struct _NET_BUFFER_LIST **v38; // r12
  struct _NET_BUFFER_LIST **p_Next; // rax
  struct _NET_BUFFER_LIST *v40; // rcx
  _QWORD *v41; // r13
  __int64 v42; // r15
  char v43; // al
  struct _NET_BUFFER_LIST *v44; // r9
  struct _NET_BUFFER_LIST *Scratch; // rdi
  struct _NET_BUFFER_LIST *v46; // r9
  struct _NET_BUFFER_LIST *v47; // rdi
  unsigned int ChildRefCount; // [rsp+30h] [rbp-C8h]
  unsigned int v49; // [rsp+30h] [rbp-C8h]
  char v50; // [rsp+40h] [rbp-B8h]
  int v51; // [rsp+44h] [rbp-B4h]
  unsigned int v52; // [rsp+44h] [rbp-B4h]
  unsigned int v53; // [rsp+48h] [rbp-B0h]
  struct NDIS_PCW_CONTEXT v54; // [rsp+50h] [rbp-A8h] BYREF
  struct _NET_BUFFER_LIST *v55; // [rsp+70h] [rbp-88h] BYREF
  struct _NET_BUFFER_LIST *v56; // [rsp+78h] [rbp-80h]
  __int64 v57; // [rsp+80h] [rbp-78h]
  char v58[8]; // [rsp+88h] [rbp-70h] BYREF
  _QWORD *v59; // [rsp+90h] [rbp-68h]
  void *v60; // [rsp+98h] [rbp-60h]
  void (*v61)(void); // [rsp+A0h] [rbp-58h]
  struct _NET_BUFFER_LIST *v62; // [rsp+A8h] [rbp-50h]
  int v63; // [rsp+B0h] [rbp-48h]
  __int64 v64; // [rsp+B4h] [rbp-44h]
  BOOL v65; // [rsp+BCh] [rbp-3Ch]
  char v67; // [rsp+100h] [rbp+8h]
  char v68; // [rsp+108h] [rbp+10h]

  v7 = a2;
  v8 = a1;
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
  v9 = a5;
  v10 = 0LL;
  v53 = 0;
  v50 = 0;
  if ( ((a5 & 1) != 0 || KeGetCurrentIrql() == 2)
    && WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink
    && (Number = KeGetPcr()->Prcb.Number,
        v12 = 131LL * Number,
        v53 = Number,
        Flink_low = LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[v12].Flink),
        (unsigned int)Flink_low < 3) )
  {
    v50 = 1;
    PoolWithTag = (char *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Blink + 696 * Flink_low + v12 * 16;
    LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[v12].Flink) = Flink_low + 1;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
    if ( !PoolWithTag )
    {
      if ( (unsigned __int8)byte_1C008530B >= 2u )
        WPP_SF_(10LL, &WPP_abea78df5d3bc502c1918c83347dcce9_Traceguids);
      goto LABEL_30;
    }
  }
  v15 = *(_QWORD **)(v8 + 400);
  PoolWithTag[692] = 0;
  Alignment = v7;
  if ( (a5 & 2) == 0 )
  {
    do
    {
      v10 = Alignment;
      Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
  v17 = (_QWORD *)v15[41];
  if ( !v17 || *(_BYTE *)(v17[3] + 56LL) < 6u )
  {
    *(_QWORD *)PoolWithTag = a1;
    *((_QWORD *)PoolWithTag + 3) = v7;
    *((_QWORD *)PoolWithTag + 1) = v15;
    *((_DWORD *)PoolWithTag + 4) = a5;
    *((_QWORD *)PoolWithTag + 4) = v10;
    *((_DWORD *)PoolWithTag + 10) = a3;
    *((_DWORD *)PoolWithTag + 11) = a4;
    ndisSortNetBufferLists(PoolWithTag);
    if ( *((_QWORD *)PoolWithTag + 8) || *((_DWORD *)PoolWithTag + 172) )
    {
      if ( !*v15 || a3 )
        PoolWithTag[692] = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols(PoolWithTag);
      if ( !v17 )
      {
        v20 = (_QWORD *)v15[1];
        if ( v20 )
        {
          v21 = *((_DWORD *)PoolWithTag + 172);
          v22 = *((_DWORD *)PoolWithTag + 4) | 2;
          do
          {
            v23 = (_QWORD *)v20[53];
            v24 = 0LL;
            do
            {
              v25 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v24 + 64];
              v19 = *(unsigned int *)&PoolWithTag[40 * v24 + 80];
              v24 = (unsigned int)(v24 + 1);
              if ( v25 )
                ndisMIndicateNetBufferListsToOpen(v20, v25, v22);
            }
            while ( (unsigned int)v24 <= v21 );
            v20 = v23;
          }
          while ( v23 );
          v9 = a5;
        }
        if ( v15[2] )
        {
          if ( (a5 & 2) != 0 )
          {
            ndisIndicateAllNetBufferLists(PoolWithTag);
          }
          else
          {
            v26 = *((_DWORD *)PoolWithTag + 4);
            v27 = *((_DWORD *)PoolWithTag + 172);
            if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2252LL) )
              ndisIndicateToPmodeOpens(PoolWithTag);
            for ( i = 1; i <= v27; ++i )
            {
              v29 = i;
              ndisMIndicateNetBufferListsToOpen(
                *(NDIS_HANDLE *)&PoolWithTag[40 * v29 + 56],
                *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v29 + 64],
                v26);
            }
          }
        }
      }
    }
    v8 = a1;
LABEL_30:
    v30 = 0LL;
    goto LABEL_31;
  }
  ndisMIndicateNetBufferListsToOpen(v17, v7, a5);
  v8 = a1;
  v30 = 0LL;
  *((_QWORD *)PoolWithTag + 8) = 0LL;
  *((_DWORD *)PoolWithTag + 20) = 0;
LABEL_31:
  if ( (v9 & 2) == 0 )
  {
    if ( !PoolWithTag )
    {
LABEL_35:
      if ( !v7 )
        goto LABEL_36;
      v51 = a5 & 1;
      v31 = v51 != 0;
      v32 = 2;
      v54.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v8 + 40);
      v33 = v7;
      v54.DatapathEventsMask = *(_DWORD *)(v8 + 48);
      v54.DatapathCyclesMask = *(_DWORD *)(v8 + 80);
      v68 = 2;
      v54.CurrentCpu = -1;
      do
      {
        v33->Flags = v33->Flags & 0xFFFFFFF4 | 8;
        v33 = (struct _NET_BUFFER_LIST *)v33->Link.Alignment;
      }
      while ( v33 );
      if ( Microsoft_Windows_Networking_CorrelationEnabled )
        ndisMarkNetBufferListCorrelationIdsAsUsed(v7, 0LL, v18, v19);
      if ( *(_DWORD *)(v8 + 3272) )
      {
        v7 = (struct _NET_BUFFER_LIST *)ndisReturnPeriodicReceives(v8, v7);
        v30 = 0LL;
      }
      if ( !v7 )
        goto LABEL_36;
      if ( ndisNblTrackerMode )
      {
        ndisNblTrackerTransferOwnershipInternal(
          v7,
          0LL,
          *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v8 + 2544),
          0x87u,
          v51 != 0);
        v30 = 0LL;
      }
      if ( (v54.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( (a5 & 1) == 0 )
        {
          v32 = KfRaiseIrql(2u);
          v68 = v32;
        }
        ndisPcwStartCycleCounter(&v54, 5u);
        v30 = 0LL;
      }
      v34 = *(void (**)(void))(v8 + 2648);
      v35 = *(void **)(v8 + 2536);
      v36 = *(_QWORD **)(a1 + 2552);
      if ( *(_BYTE *)v36 == 17 )
        goto LABEL_51;
      if ( ndisIterativeDataPathDisabled || (a5 & 1) == 0 && KeGetCurrentIrql() != 2 )
      {
        if ( *(_BYTE *)a1 == 5 )
        {
          v63 = (int)v30;
          v59 = v36;
          v60 = v35;
          v64 = 3LL;
          v61 = v34;
          v62 = v7;
          v65 = v51 != 0;
          if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v58) < 0 )
            ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)a1, v7, 0);
          goto LABEL_52;
        }
LABEL_51:
        ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, bool))v34)(v35, v7, v51 != 0);
LABEL_52:
        if ( (v54.DatapathCyclesMask & 0x20) != 0 )
        {
          ndisPcwEndCycleCounter(&v54, 5u, 0x12uLL);
          if ( v32 != 2 )
            KeLowerIrql(v32);
        }
        goto LABEL_36;
      }
      v37 = KeGetPcr()->Prcb.Number;
      v38 = &v55;
      p_Next = 0LL;
      v52 = v37;
      v55 = v30;
      v56 = 0LL;
      v57 = 0LL;
      if ( v30 )
      {
        if ( v31 == MEMORY[0x84] )
        {
          v40 = (struct _NET_BUFFER_LIST *)MEMORY[0];
          if ( MEMORY[0] )
          {
            do
            {
              p_Next = &v40->Next;
              v40 = (struct _NET_BUFFER_LIST *)v40->Link.Alignment;
            }
            while ( v40 );
          }
          v37 = v52;
          *p_Next = v7;
          goto LABEL_78;
        }
        MEMORY[0x70] = v7;
      }
      else
      {
        v55 = v7;
      }
      v56 = v7;
      v7->Scratch = v30;
      v7->ChildRefCount = v31;
LABEL_78:
      if ( *(_BYTE *)v36 == 5 )
      {
        while ( *v38 )
        {
          v41 = v36;
          v42 = v36[53] + 96LL * v37;
          v43 = *(_BYTE *)(v42 + 88);
          *(_BYTE *)(v42 + 88) = 1;
          v44 = *v38;
          v67 = v43;
          *v38 = v30;
          if ( v44 )
          {
            do
            {
              Scratch = (struct _NET_BUFFER_LIST *)v44->Scratch;
              ChildRefCount = v44->ChildRefCount;
              v44->ChildRefCount = 0;
              ndisCallReceiveCompleteHandler(v36, v34, v35, v44, 0, 0, ChildRefCount);
              v44 = Scratch;
            }
            while ( Scratch );
            v43 = v67;
            v41 = v36;
            v30 = 0LL;
          }
          *(_BYTE *)(v42 + 88) = 0;
          if ( v43 )
          {
            *(_BYTE *)(v42 + 88) = 1;
            goto LABEL_87;
          }
          v36 = (_QWORD *)v36[69];
          v38 = (struct _NET_BUFFER_LIST **)(v42 + 72);
          v34 = (void (*)(void))v41[66];
          v35 = (void *)v41[67];
          v37 = v52;
          if ( *(_BYTE *)v36 != 5 )
            goto LABEL_87;
        }
      }
      else
      {
LABEL_87:
        v46 = *v38;
        if ( *v38 )
        {
          *v38 = v30;
          do
          {
            v47 = (struct _NET_BUFFER_LIST *)v46->Scratch;
            v49 = v46->ChildRefCount;
            v46->ChildRefCount = (int)v30;
            ndisCallReceiveCompleteHandler(v36, v34, v35, v46, (unsigned int)v30, (unsigned int)v30, v49);
            v46 = v47;
            LODWORD(v30) = 0;
          }
          while ( v47 );
        }
      }
      v32 = v68;
      goto LABEL_52;
    }
    if ( PoolWithTag[692] )
    {
      v7 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
      goto LABEL_35;
    }
  }
LABEL_36:
  if ( v50 )
  {
    --LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[131 * v53].Flink);
  }
  else if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
}

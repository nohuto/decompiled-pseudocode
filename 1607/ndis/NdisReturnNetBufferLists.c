/*
 * XREFs of NdisReturnNetBufferLists @ 0x1C0004140
 * Callers:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003810 (ndisMIndicateNetBufferListsToOpen.c)
 * Callees:
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00045B0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0010CD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0010D10 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0012B0C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00267B4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00267D0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026D64 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ndisReturnPeriodicReceives @ 0x1C0026F18 (ndisReturnPeriodicReceives.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0067948 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

void __stdcall NdisReturnNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  KIRQL v3; // r15
  __int64 v5; // rdi
  unsigned int DatapathEventsMask; // ebx
  struct _NET_BUFFER_LIST *v9; // r8
  PNET_BUFFER_LIST v10; // rax
  _QWORD *v11; // r14
  void (*v12)(void); // r15
  void *v13; // r12
  struct NDIS_NBL_TRACKER_HANDLE__ *v14; // rdx
  unsigned __int64 v15; // rbx
  struct _NET_BUFFER_LIST *v16; // r14
  char v17; // r12
  struct _NET_BUFFER_LIST *v18; // r10
  char v19; // r15
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r9
  PNET_BUFFER_LIST v22; // r8
  struct _NET_BUFFER_LIST *v23; // r12
  unsigned __int64 v24; // rdx
  struct NDIS_NBL_TRACKER_HANDLE__ *v25; // r11
  void *SourceHandle; // rax
  char v27; // r11
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r9
  _QWORD *v30; // rcx
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rdx
  _QWORD *v33; // rcx
  unsigned int Number; // ecx
  struct _NET_BUFFER_LIST **v35; // rdi
  PNET_BUFFER_LIST *v36; // rax
  _QWORD *v37; // r13
  __int64 v38; // rsi
  char v39; // al
  struct _NET_BUFFER_LIST *v40; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v42; // r9
  struct _NET_BUFFER_LIST *v43; // rbx
  PNET_BUFFER_LIST Alignment; // rax
  unsigned int i; // r9d
  __int64 v46; // rax
  _QWORD *v47; // rdx
  unsigned int ChildRefCount; // [rsp+38h] [rbp-D0h]
  unsigned int v49; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v50; // [rsp+48h] [rbp-C0h]
  unsigned int v51; // [rsp+48h] [rbp-C0h]
  struct NDIS_PCW_CONTEXT v52; // [rsp+50h] [rbp-B8h] BYREF
  struct NDIS_NBL_TRACKER_HANDLE__ *v53; // [rsp+68h] [rbp-A0h]
  struct NDIS_PCW_CONTEXT v54; // [rsp+70h] [rbp-98h] BYREF
  PNET_BUFFER_LIST v55; // [rsp+90h] [rbp-78h] BYREF
  PNET_BUFFER_LIST v56; // [rsp+98h] [rbp-70h]
  __int64 v57; // [rsp+A0h] [rbp-68h]
  char v58[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-58h]
  void *v60; // [rsp+B8h] [rbp-50h]
  void (*v61)(void); // [rsp+C0h] [rbp-48h]
  PNET_BUFFER_LIST v62; // [rsp+C8h] [rbp-40h]
  int v63; // [rsp+D0h] [rbp-38h]
  __int64 v64; // [rsp+D4h] [rbp-34h]
  ULONG v65; // [rsp+DCh] [rbp-2Ch]
  char v66; // [rsp+128h] [rbp+20h]
  char v67; // [rsp+130h] [rbp+28h]
  char v68; // [rsp+130h] [rbp+28h]
  KIRQL v69; // [rsp+140h] [rbp+38h]

  v3 = 2;
  v5 = *((_QWORD *)NdisBindingHandle + 2);
  v66 = 2;
  DatapathEventsMask = *(_DWORD *)(v5 + 48);
  v52.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
  v52.DatapathCyclesMask = *(_DWORD *)(v5 + 80);
  v52.DatapathEventsMask = DatapathEventsMask;
  v9 = 0LL;
  v52.CurrentCpu = -1;
  if ( (DatapathEventsMask & 0x180028) != 0 || (v52.DatapathCyclesMask & 0x10) != 0 )
  {
    if ( (ReturnFlags & 1) == 0 )
    {
      v3 = KfRaiseIrql(2u);
      v66 = v3;
      v9 = 0LL;
    }
    if ( (DatapathEventsMask & 8) != 0 )
    {
      ndisPcwAddEvent(&v52, 3uLL, 1uLL);
      DatapathEventsMask = v52.DatapathEventsMask;
      v9 = 0LL;
    }
    if ( !v3 && (DatapathEventsMask & 0x80000) != 0 )
    {
      ndisPcwAddEvent(&v52, 0x1BuLL, 1uLL);
      DatapathEventsMask = v52.DatapathEventsMask;
      v9 = 0LL;
    }
    if ( (DatapathEventsMask & 0x100020) != 0 )
    {
      Alignment = NetBufferLists;
      for ( i = 0; Alignment; ++i )
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      if ( (DatapathEventsMask & 0x20) != 0 )
      {
        ndisPcwAddEvent(&v52, 5uLL, i);
        DatapathEventsMask = v52.DatapathEventsMask;
        v9 = 0LL;
      }
      if ( !v3 && (DatapathEventsMask & 0x100000) != 0 )
      {
        ndisPcwAddEvent(&v52, 0x1CuLL, i);
        v9 = 0LL;
      }
    }
    if ( (v52.DatapathCyclesMask & 0x10) != 0 )
    {
      ndisPcwStartCycleCounter(&v52, 4u);
    }
    else if ( v3 != 2 )
    {
      KeLowerIrql(v3);
      v9 = 0LL;
    }
  }
  v54.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
  v54.DatapathEventsMask = *(_DWORD *)(v5 + 48);
  v54.DatapathCyclesMask = *(_DWORD *)(v5 + 80);
  v10 = NetBufferLists;
  v69 = 2;
  for ( v54.CurrentCpu = -1; v10; v10 = (PNET_BUFFER_LIST)v10->Link.Alignment )
    v10->Flags = v10->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists);
  if ( *(_DWORD *)(v5 + 3272) )
  {
    NetBufferLists = (PNET_BUFFER_LIST)ndisReturnPeriodicReceives(v5, NetBufferLists);
    v9 = 0LL;
  }
  if ( NetBufferLists )
  {
    if ( ndisNblTrackerMode )
    {
      v14 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisBindingHandle + 85);
      v15 = *(_QWORD *)(v5 + 2544);
      v16 = v9;
      v17 = ndisNblTrackerEpoch;
      v18 = v9;
      v53 = v14;
      v67 = 0;
      v19 = ReturnFlags & 1;
      if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      {
        ndisNblTrackerRecordEvent(NetBufferLists, v14, 0x87u, (void *)v15, ReturnFlags & 1);
        v18 = v16;
      }
      v20 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( (v20 & 1) != 0 )
        v21 = *(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      else
        v21 = v20;
      v50 = v21;
      if ( (v20 & 1) != 0 )
        v20 ^= ((unsigned __int8)v20 ^ (unsigned __int8)(2 * v17)) & 2;
      v22 = NetBufferLists;
      v23 = v16;
      do
      {
        v24 = (unsigned __int64)v22->NetBufferListInfo[26];
        v25 = v53;
        do
        {
          if ( v22->NetBufferListInfo[26] != (void *)v24 )
            break;
          if ( !v24 && !v22->SourceHandle )
          {
            v46 = ndisSourceHandleFromOwner((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFFDuLL, 0LL, v22);
            v22->SourceHandle = (void *)v46;
          }
          if ( (v24 & 4) != 0 || (SourceHandle = v22->SourceHandle) == 0LL )
          {
            v22->NetBufferListInfo[26] = (void *)(v20 | 4);
          }
          else if ( SourceHandle != (void *)v21 || v22->ParentNetBufferList )
          {
            v16 = (struct _NET_BUFFER_LIST *)((char *)v16 + 1);
            v22->NetBufferListInfo[26] = (void *)v20;
          }
          else
          {
            v23 = (struct _NET_BUFFER_LIST *)((char *)v23 + 1);
            v22->NetBufferListInfo[26] = (void *)24;
            v16 = (struct _NET_BUFFER_LIST *)((char *)v16 + 1);
          }
          v22 = (PNET_BUFFER_LIST)v22->Link.Alignment;
        }
        while ( v22 );
        v27 = v67;
        v28 = (char *)v18 - (char *)v16;
        if ( (v24 & 1) != 0 && v28 )
        {
          if ( !v19 && !v67 )
          {
            v27 = 1;
            v67 = 1;
            v19 = KeGetCurrentIrql() == 2;
          }
          v29 = (v24 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v24 >> 1) & 1);
          if ( v19 )
          {
            v30 = (_QWORD *)(*(_QWORD *)(v29 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v30 += v28;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 48), v28);
          }
          v21 = v50;
        }
        v18 = v16;
      }
      while ( v22 );
      v31 = (char *)v16 - (char *)v23;
      if ( (v20 & 1) != 0 && v31 )
      {
        if ( !v19 && !v27 )
          v19 = KeGetCurrentIrql() == 2;
        v32 = (v20 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v20 >> 1) & 1);
        if ( v19 )
        {
          v33 = (_QWORD *)(*(_QWORD *)(v32 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v33 += v31;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 48), v31);
        }
      }
      v9 = 0LL;
    }
    if ( (v54.DatapathCyclesMask & 0x20) != 0 )
    {
      if ( (ReturnFlags & 1) == 0 )
        v69 = KfRaiseIrql(2u);
      ndisPcwStartCycleCounter(&v54, 5u);
    }
    v11 = *(_QWORD **)(v5 + 2552);
    v12 = *(void (**)(void))(v5 + 2648);
    v13 = *(void **)(v5 + 2536);
    if ( *(_BYTE *)v11 == 17 )
      goto LABEL_12;
    if ( ndisIterativeDataPathDisabled || (ReturnFlags & 1) == 0 && KeGetCurrentIrql() != 2 )
    {
      if ( *(_BYTE *)v5 == 5 )
      {
        v59 = *(_QWORD *)(v5 + 2552);
        v60 = v13;
        v64 = 3LL;
        v61 = v12;
        v62 = NetBufferLists;
        v63 = (int)v9;
        v65 = ReturnFlags;
        if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v58) < 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v5, NetBufferLists, 0);
        goto LABEL_13;
      }
LABEL_12:
      (*(void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, _QWORD))(v5 + 2648))(
        *(_QWORD *)(v5 + 2536),
        NetBufferLists,
        ReturnFlags);
LABEL_13:
      if ( (v54.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v54, 5u, 0x12uLL);
        if ( v69 != 2 )
          KeLowerIrql(v69);
      }
      v3 = v66;
      goto LABEL_15;
    }
    Number = KeGetPcr()->Prcb.Number;
    v35 = &v55;
    v36 = 0LL;
    v51 = Number;
    v55 = v9;
    v56 = 0LL;
    v57 = 0LL;
    if ( v9 )
    {
      if ( ReturnFlags == MEMORY[0x84] && (ReturnFlags & 6) == 0 )
      {
        v47 = (_QWORD *)MEMORY[0];
        if ( MEMORY[0] )
        {
          do
          {
            v36 = (PNET_BUFFER_LIST *)v47;
            v47 = (_QWORD *)*v47;
          }
          while ( v47 );
        }
        *v36 = NetBufferLists;
LABEL_53:
        if ( *(_BYTE *)v11 == 5 )
        {
          while ( *v35 )
          {
            v37 = v11;
            v38 = v11[53] + 96LL * Number;
            v39 = *(_BYTE *)(v38 + 88);
            *(_BYTE *)(v38 + 88) = 1;
            v40 = *v35;
            v68 = v39;
            *v35 = v9;
            if ( v40 )
            {
              do
              {
                Scratch = (struct _NET_BUFFER_LIST *)v40->Scratch;
                ChildRefCount = v40->ChildRefCount;
                v40->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(v11, v12, v13, v40, 0, 0, ChildRefCount);
                v40 = Scratch;
              }
              while ( Scratch );
              v39 = v68;
              v37 = v11;
              v9 = 0LL;
            }
            *(_BYTE *)(v38 + 88) = 0;
            if ( v39 )
            {
              *(_BYTE *)(v38 + 88) = 1;
              goto LABEL_60;
            }
            v11 = (_QWORD *)v11[69];
            v35 = (struct _NET_BUFFER_LIST **)(v38 + 72);
            v12 = (void (*)(void))v37[66];
            v13 = (void *)v37[67];
            Number = v51;
            if ( *(_BYTE *)v11 != 5 )
              goto LABEL_60;
          }
        }
        else
        {
LABEL_60:
          v42 = *v35;
          if ( *v35 )
          {
            *v35 = v9;
            do
            {
              v43 = (struct _NET_BUFFER_LIST *)v42->Scratch;
              v49 = v42->ChildRefCount;
              v42->ChildRefCount = (int)v9;
              ndisCallReceiveCompleteHandler(v11, v12, v13, v42, (unsigned int)v9, (unsigned int)v9, v49);
              v42 = v43;
              LODWORD(v9) = 0;
            }
            while ( v43 );
          }
        }
        goto LABEL_13;
      }
      MEMORY[0x70] = NetBufferLists;
    }
    else
    {
      v55 = NetBufferLists;
    }
    v56 = NetBufferLists;
    NetBufferLists->Scratch = v9;
    NetBufferLists->ChildRefCount = ReturnFlags;
    goto LABEL_53;
  }
LABEL_15:
  if ( (v52.DatapathCyclesMask & 0x10) != 0 )
  {
    ndisPcwEndCycleCounter(&v52, 4u, 0x11uLL);
    if ( v3 != 2 )
      KeLowerIrql(v3);
  }
}

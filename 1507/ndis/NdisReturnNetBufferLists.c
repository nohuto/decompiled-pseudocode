/*
 * XREFs of NdisReturnNetBufferLists @ 0x1C000A000
 * Callers:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C00094A0 (ndisMIndicateNetBufferListsToOpen.c)
 * Callees:
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000CCF0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C002028C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00228B4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0022A48 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0022E70 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ndisReturnPeriodicReceives @ 0x1C00230E4 (ndisReturnPeriodicReceives.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00231B0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00231FC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C00649F8 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisReturnNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  __int64 v3; // r9
  KIRQL v4; // r15
  __int64 v6; // rdi
  PNET_BUFFER_LIST v7; // r14
  unsigned int DatapathEventsMask; // ebx
  struct _NET_BUFFER_LIST *v9; // r10
  PNET_BUFFER_LIST v10; // rcx
  _QWORD *v11; // rsi
  void (*v12)(void); // r15
  void *v13; // r12
  struct NDIS_NBL_TRACKER_HANDLE__ *v14; // rdx
  struct _NET_BUFFER_LIST *v15; // r13
  unsigned __int64 v16; // rbx
  struct _NET_BUFFER_LIST *v17; // rsi
  char v18; // r12
  struct _NET_BUFFER_LIST *v19; // r9
  char v20; // r10
  char v21; // r15
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r11
  struct NDIS_NBL_TRACKER_HANDLE__ *v24; // r12
  _SLIST_HEADER *v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 Region; // rax
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // r9
  _QWORD *v30; // rcx
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rdx
  _QWORD *v33; // rcx
  unsigned int Number; // ecx
  struct _NET_BUFFER_LIST **v35; // rdi
  PNET_BUFFER_LIST *v36; // rax
  _QWORD *v37; // r13
  __int64 v38; // r14
  char v39; // al
  struct _NET_BUFFER_LIST *v40; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v42; // r9
  struct _NET_BUFFER_LIST *v43; // rbx
  KIRQL v44; // al
  _SLIST_HEADER *Alignment; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rdx
  unsigned int ChildRefCount; // [rsp+38h] [rbp-D0h]
  unsigned int v50; // [rsp+38h] [rbp-D0h]
  struct NDIS_PCW_CONTEXT v51; // [rsp+48h] [rbp-C0h] BYREF
  struct NDIS_NBL_TRACKER_HANDLE__ *v52; // [rsp+60h] [rbp-A8h]
  struct NDIS_PCW_CONTEXT v53; // [rsp+68h] [rbp-A0h] BYREF
  PNET_BUFFER_LIST v54; // [rsp+80h] [rbp-88h] BYREF
  PNET_BUFFER_LIST v55; // [rsp+88h] [rbp-80h]
  __int64 v56; // [rsp+90h] [rbp-78h]
  char v57[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-60h]
  void *v59; // [rsp+B0h] [rbp-58h]
  void (*v60)(void); // [rsp+B8h] [rbp-50h]
  PNET_BUFFER_LIST v61; // [rsp+C0h] [rbp-48h]
  int v62; // [rsp+C8h] [rbp-40h]
  __int64 v63; // [rsp+CCh] [rbp-3Ch]
  ULONG v64; // [rsp+D4h] [rbp-34h]
  char v65; // [rsp+128h] [rbp+20h]
  KIRQL v66; // [rsp+130h] [rbp+28h]
  ULONG v67; // [rsp+138h] [rbp+30h]
  struct _NET_BUFFER_LIST *v68; // [rsp+140h] [rbp+38h]
  char v69; // [rsp+140h] [rbp+38h]

  v67 = ReturnFlags;
  v4 = 2;
  v6 = *((_QWORD *)NdisBindingHandle + 2);
  v7 = NetBufferLists;
  v65 = 2;
  v51.CurrentCpu = -1;
  DatapathEventsMask = *(_DWORD *)(v6 + 48);
  v51.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v6 + 40);
  v51.DatapathCyclesMask = *(_DWORD *)(v6 + 80);
  v51.DatapathEventsMask = DatapathEventsMask;
  v9 = 0LL;
  if ( (DatapathEventsMask & 0x180028) != 0 || (v51.DatapathCyclesMask & 0x10) != 0 )
  {
    if ( (ReturnFlags & 1) == 0 )
    {
      v44 = KfRaiseIrql(2u);
      *(_QWORD *)&ReturnFlags = v67;
      v9 = 0LL;
      v4 = v44;
      v65 = v44;
    }
    if ( (DatapathEventsMask & 8) != 0 )
    {
      ndisPcwAddEvent(&v51, 3uLL, 1uLL);
      DatapathEventsMask = v51.DatapathEventsMask;
      v9 = 0LL;
      *(_QWORD *)&ReturnFlags = v67;
    }
    if ( !v4 && (DatapathEventsMask & 0x80000) != 0 )
    {
      ndisPcwAddEvent(&v51, 0x1BuLL, 1uLL);
      DatapathEventsMask = v51.DatapathEventsMask;
      v9 = 0LL;
      *(_QWORD *)&ReturnFlags = v67;
    }
    if ( (DatapathEventsMask & 0x100020) != 0 )
    {
      Alignment = (_SLIST_HEADER *)v7;
      v3 = 0LL;
      if ( v7 )
      {
        do
        {
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          v3 = (unsigned int)(v3 + 1);
        }
        while ( Alignment );
      }
      if ( (DatapathEventsMask & 0x20) != 0 )
      {
        ndisPcwAddEvent(&v51, 5uLL, (unsigned int)v3);
        DatapathEventsMask = v51.DatapathEventsMask;
        v9 = 0LL;
        *(_QWORD *)&ReturnFlags = v67;
      }
      if ( !v4 && (DatapathEventsMask & 0x100000) != 0 )
      {
        ndisPcwAddEvent(&v51, 0x1CuLL, (unsigned int)v3);
        *(_QWORD *)&ReturnFlags = v67;
        v9 = 0LL;
      }
    }
    if ( (v51.DatapathCyclesMask & 0x10) != 0 )
    {
      ndisPcwStartCycleCounter(&v51, 4u);
    }
    else
    {
      if ( v4 == 2 )
        goto LABEL_2;
      KeLowerIrql(v4);
      *(_QWORD *)&ReturnFlags = v67;
    }
    v9 = 0LL;
  }
LABEL_2:
  v10 = v7;
  v53.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v6 + 40);
  v53.DatapathEventsMask = *(_DWORD *)(v6 + 48);
  v53.DatapathCyclesMask = *(_DWORD *)(v6 + 80);
  v66 = 2;
  for ( v53.CurrentCpu = -1; v10; v10 = (PNET_BUFFER_LIST)v10->Link.Alignment )
    v10->Flags = v10->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v7, NetBufferLists, *(_QWORD *)&ReturnFlags, v3);
  if ( *(_DWORD *)(v6 + 3272) )
  {
    v46 = ndisReturnPeriodicReceives(v6, v7);
    ReturnFlags = v67;
    v7 = (PNET_BUFFER_LIST)v46;
    v9 = 0LL;
  }
  if ( v7 )
  {
    if ( ndisNblTrackerMode )
    {
      v14 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisBindingHandle + 85);
      v15 = v9;
      v16 = *(_QWORD *)(v6 + 2544);
      v17 = v9;
      v18 = ndisNblTrackerEpoch;
      v19 = v9;
      v20 = 0;
      v52 = v14;
      v21 = ReturnFlags & 1;
      if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      {
        ndisNblTrackerRecordEvent(v7, v14, 0x87u, (void *)v16, ReturnFlags & 1);
        v20 = 0;
        v19 = v17;
      }
      v22 = v16 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( (v22 & 1) != 0 )
        v23 = *(_QWORD *)((v22 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      else
        v23 = v22;
      if ( (v22 & 1) != 0 )
        v22 ^= ((unsigned __int8)v22 ^ (unsigned __int8)(2 * v18)) & 2;
      v24 = v52;
      v25 = (_SLIST_HEADER *)v7;
      do
      {
        v26 = v25[22].Alignment;
        do
        {
          if ( v25[22].Alignment != v26 )
            break;
          if ( !v26 && !v25[7].Region )
          {
            v47 = ndisSourceHandleFromOwner((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFFDuLL, 0LL, v25);
            v25[7].Region = v47;
          }
          if ( (v26 & 4) != 0 || (Region = v25[7].Region) == 0 )
          {
            v25[22].Alignment = v22 | 4;
          }
          else if ( Region != v23 || v25[1].Region )
          {
            v17 = (struct _NET_BUFFER_LIST *)((char *)v17 + 1);
            v25[22].Alignment = v22;
          }
          else
          {
            v19 = (struct _NET_BUFFER_LIST *)((char *)v19 + 1);
            v25[22].Alignment = 24LL;
            v17 = (struct _NET_BUFFER_LIST *)((char *)v17 + 1);
          }
          v25 = (_SLIST_HEADER *)v25->Alignment;
        }
        while ( v25 );
        v28 = (char *)v15 - (char *)v17;
        v68 = v19;
        if ( (v26 & 1) != 0 && v28 )
        {
          if ( !v21 && !v20 )
          {
            v20 = 1;
            v21 = KeGetCurrentIrql() == 2;
          }
          v29 = (v26 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v26 >> 1) & 1);
          if ( v21 )
          {
            v30 = (_QWORD *)(*(_QWORD *)(v29 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v30 += v28;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 48), v28);
          }
          v19 = v68;
        }
        v15 = v17;
      }
      while ( v25 );
      v31 = (char *)v17 - (char *)v19;
      if ( (v22 & 1) != 0 && v31 )
      {
        if ( !v21 && !v20 )
          v21 = KeGetCurrentIrql() == 2;
        ReturnFlags = v67;
        v32 = (v22 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v22 >> 1) & 1);
        if ( v21 )
        {
          v33 = (_QWORD *)(*(_QWORD *)(v32 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v33 += v31;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 48), v31);
        }
      }
      else
      {
        ReturnFlags = v67;
      }
      v9 = 0LL;
    }
    if ( (v53.DatapathCyclesMask & 0x20) != 0 )
    {
      if ( (ReturnFlags & 1) == 0 )
        v66 = KfRaiseIrql(2u);
      ndisPcwStartCycleCounter(&v53, 5u);
      v9 = 0LL;
    }
    v11 = *(_QWORD **)(v6 + 2552);
    v12 = *(void (**)(void))(v6 + 2648);
    v13 = *(void **)(v6 + 2536);
    if ( *(_BYTE *)v11 == 17 )
      goto LABEL_12;
    if ( ndisIterativeDataPathDisabled || (ReturnFlags & 1) == 0 && KeGetCurrentIrql() != 2 )
    {
      if ( *(_BYTE *)v6 == 5 )
      {
        v58 = *(_QWORD *)(v6 + 2552);
        v59 = v13;
        v63 = 3LL;
        v60 = v12;
        v61 = v7;
        v62 = (int)v9;
        v64 = ReturnFlags;
        if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v57) < 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v6, v7, 0);
        goto LABEL_13;
      }
LABEL_12:
      (*(void (__fastcall **)(_QWORD, PNET_BUFFER_LIST))(v6 + 2648))(*(_QWORD *)(v6 + 2536), v7);
LABEL_13:
      if ( (v53.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v53, 5u, 0x12uLL);
        if ( v66 != 2 )
          KeLowerIrql(v66);
      }
      v4 = v65;
      goto LABEL_15;
    }
    Number = KeGetPcr()->Prcb.Number;
    v35 = &v54;
    v36 = 0LL;
    LODWORD(v52) = Number;
    v54 = v9;
    v55 = 0LL;
    v56 = 0LL;
    if ( v9 )
    {
      if ( ReturnFlags == MEMORY[0x84] && (ReturnFlags & 6) == 0 )
      {
        v48 = (_QWORD *)MEMORY[0];
        if ( MEMORY[0] )
        {
          do
          {
            v36 = (PNET_BUFFER_LIST *)v48;
            v48 = (_QWORD *)*v48;
          }
          while ( v48 );
        }
        *v36 = v7;
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
            v69 = v39;
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
              v39 = v69;
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
            Number = (unsigned int)v52;
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
              v50 = v42->ChildRefCount;
              v42->ChildRefCount = (int)v9;
              ndisCallReceiveCompleteHandler(v11, v12, v13, v42, (unsigned int)v9, (unsigned int)v9, v50);
              v42 = v43;
              LODWORD(v9) = 0;
            }
            while ( v43 );
          }
        }
        goto LABEL_13;
      }
      MEMORY[0x70] = v7;
    }
    else
    {
      v54 = v7;
    }
    v55 = v7;
    v7->Scratch = v9;
    v7->ChildRefCount = ReturnFlags;
    goto LABEL_53;
  }
LABEL_15:
  if ( (v51.DatapathCyclesMask & 0x10) != 0 )
  {
    ndisPcwEndCycleCounter(&v51, 4u, 0x11uLL);
    if ( v4 != 2 )
      KeLowerIrql(v4);
  }
}

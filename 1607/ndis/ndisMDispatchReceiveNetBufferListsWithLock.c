/*
 * XREFs of ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001D890
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001160 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 * Callees:
 *     ndisIndicateToPmodeOpens @ 0x1C0001E98 (ndisIndicateToPmodeOpens.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003810 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0003AE0 (ndisSortNetBufferLists.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00045B0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisReleaseRWLock @ 0x1C000DF90 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C000E320 (NdisAcquireRWLockRead.c)
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

void __fastcall ndisMDispatchReceiveNetBufferListsWithLock(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        int NewIrql)
{
  char v5; // r14
  struct _NET_BUFFER_LIST *v6; // r13
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // rsi
  _DWORD *v13; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _NET_BUFFER_LIST *v15; // rsi
  struct _NDIS_RCV_TRACKER_ARRAY *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdi
  void (*v20)(void); // r14
  struct _NET_BUFFER_LIST *Alignment; // rcx
  _QWORD *v22; // rbx
  __int64 PoolWithTag; // rax
  struct _NET_BUFFER_LIST *v24; // r9
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
  unsigned int v36; // ebx
  __int64 v37; // r8
  int v38; // esi
  __int64 v39; // rdx
  unsigned int v40; // r12d
  int v41; // r14d
  _QWORD *v42; // r15
  unsigned int v43; // esi
  __int64 v44; // rcx
  struct _NET_BUFFER_LIST *v45; // rdx
  struct _NET_BUFFER_LIST *v46; // r9
  struct _NET_BUFFER_LIST *v47; // rbx
  void (*v48)(void); // r10
  void *v49; // r11
  __int64 v50; // rbx
  __int64 v51; // r11
  struct _NET_BUFFER_LIST *v52; // rcx
  BOOL v53; // r12d
  unsigned __int64 v54; // rbx
  struct _NET_BUFFER_LIST *v55; // r14
  char v56; // si
  struct _NET_BUFFER_LIST *v57; // r15
  struct _NET_BUFFER_LIST *v58; // r8
  unsigned __int64 v59; // rbx
  void *v60; // rdx
  _SLIST_HEADER *v61; // rsi
  unsigned __int64 v62; // r10
  void *Region; // rax
  unsigned __int64 v64; // r14
  bool v65; // al
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rbx
  __int64 v68; // rdx
  _QWORD *v69; // rcx
  _QWORD *v70; // rsi
  bool v71; // zf
  unsigned int Number; // ecx
  struct _NET_BUFFER_LIST **v73; // r15
  _QWORD *v74; // r13
  __int64 v75; // r14
  char v76; // r12
  struct _NET_BUFFER_LIST *v77; // r9
  void (*v78)(void); // rdi
  void *v79; // r13
  struct _NET_BUFFER_LIST *Scratch; // rbx
  __int64 v81; // r8
  KSPIN_LOCK *v82; // rcx
  signed __int32 v83[8]; // [rsp+8h] [rbp-C1h] BYREF
  unsigned int v84; // [rsp+28h] [rbp-A1h]
  unsigned int v85; // [rsp+30h] [rbp-99h]
  unsigned int ChildRefCount; // [rsp+38h] [rbp-91h]
  struct _LOCK_STATE_EX LockState; // [rsp+48h] [rbp-81h] BYREF
  bool v88; // [rsp+4Ch] [rbp-7Dh] BYREF
  char v89; // [rsp+4Dh] [rbp-7Ch] BYREF
  char v90; // [rsp+4Eh] [rbp-7Bh]
  int v91; // [rsp+50h] [rbp-79h]
  void *v92; // [rsp+58h] [rbp-71h]
  struct _NET_BUFFER_LIST *v93; // [rsp+60h] [rbp-69h]
  void (*v94)(void); // [rsp+68h] [rbp-61h]
  unsigned int v95; // [rsp+70h] [rbp-59h]
  __int64 v96; // [rsp+78h] [rbp-51h]
  __int64 v97; // [rsp+80h] [rbp-49h]
  struct NDIS_PCW_CONTEXT v98; // [rsp+88h] [rbp-41h] BYREF
  _QWORD v99[3]; // [rsp+A8h] [rbp-21h] BYREF
  char v100[8]; // [rsp+C0h] [rbp-9h] BYREF
  _QWORD *v101; // [rsp+C8h] [rbp-1h]
  void *v102; // [rsp+D0h] [rbp+7h]
  void (*v103)(void); // [rsp+D8h] [rbp+Fh]
  struct _NET_BUFFER_LIST *v104; // [rsp+E0h] [rbp+17h]
  int v105; // [rsp+E8h] [rbp+1Fh]
  __int64 v106; // [rsp+ECh] [rbp+23h]
  BOOL v107; // [rsp+F4h] [rbp+2Bh]
  KIRQL NewIrqla; // [rsp+148h] [rbp+7Fh]

  v5 = NewIrql;
  LockState.Flags = 0;
  v6 = a2;
  v92 = a2;
  *(_WORD *)&LockState.OldIrql = 515;
  v7 = a1;
  v9 = *(_QWORD *)(a1 + 400);
  v10 = NewIrql & 1;
  v97 = v9;
  v91 = NewIrql & 1;
  if ( (NewIrql & 1) != 0 )
  {
    v12 = *(_QWORD *)(v9 + 288);
    LODWORD(v10) = KeGetPcr()->Prcb.Number;
    LockState.Flags = 1;
    v13 = *(_DWORD **)(v12 + 8 * v10 + 32);
    ++*v13;
    _InterlockedOr(v83, 0);
    if ( !KeTestSpinLock((PKSPIN_LOCK)(v12 + 8)) && *v13 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v12 + 16) != CurrentThread )
      {
        *v13 = 0;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 8));
        ++*v13;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v12 + 8));
      }
    }
    v7 = a1;
    LockState.LockState = 3;
  }
  else
  {
    NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v9 + 288), &LockState, 0);
  }
  v15 = 0LL;
  v95 = 0;
  v90 = 0;
  if ( v91 || (CurrentThread = (struct _KTHREAD *)KeGetCurrentIrql(), (_BYTE)CurrentThread == 2) )
  {
    if ( ndisPerProcRcvTrackers )
    {
      LODWORD(CurrentThread) = KeGetPcr()->Prcb.Number;
      v16 = ndisPerProcRcvTrackers;
      v17 = 2096LL * (_QWORD)CurrentThread;
      v95 = (unsigned int)CurrentThread;
      v18 = *((unsigned int *)ndisPerProcRcvTrackers + 524 * (_QWORD)CurrentThread);
      if ( (unsigned int)v18 < 3 )
      {
        v90 = 1;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v17) = v18 + 1;
        v19 = (__int64)v16 + 696 * v18 + v17 + 8;
        v96 = v19;
        goto LABEL_8;
      }
    }
  }
  PoolWithTag = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
  v24 = 0LL;
  v96 = PoolWithTag;
  v19 = PoolWithTag;
  if ( PoolWithTag )
  {
LABEL_8:
    v20 = *(void (**)(void))(v7 + 400);
    Alignment = v6;
    v94 = v20;
    LODWORD(v93) = NewIrql & 2;
    *(_BYTE *)(v19 + 692) = 0;
    if ( (NewIrql & 2) == 0 )
    {
      do
      {
        v15 = Alignment;
        Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
    }
    v22 = (_QWORD *)*((_QWORD *)v20 + 41);
    if ( v22 && *(_BYTE *)(v22[3] + 56LL) >= 6u )
    {
      ndisMIndicateNetBufferListsToOpen(v22, v6, a3, a4, NewIrql);
      v24 = 0LL;
      *(_QWORD *)(v19 + 64) = 0LL;
      *(_DWORD *)(v19 + 80) = 0;
      goto LABEL_32;
    }
    *(_QWORD *)v19 = a1;
    *(_QWORD *)(v19 + 24) = v6;
    *(_QWORD *)(v19 + 8) = v20;
    *(_DWORD *)(v19 + 16) = NewIrql;
    *(_QWORD *)(v19 + 32) = v15;
    *(_DWORD *)(v19 + 40) = a3;
    *(_DWORD *)(v19 + 44) = a4;
    PoolWithTag = ndisSortNetBufferLists((__int64 *)v19);
    v24 = 0LL;
    if ( !*(_QWORD *)(v19 + 64) && !*(_DWORD *)(v19 + 688) )
      goto LABEL_32;
    if ( !*(_QWORD *)v20 || a3 )
    {
      *(_BYTE *)(v19 + 692) = 1;
    }
    else
    {
      PoolWithTag = ndisIndicateXlatedPacketsToNdis5Protocols(v19);
      v24 = 0LL;
    }
    if ( v22 )
      goto LABEL_32;
    v25 = (_QWORD *)*((_QWORD *)v20 + 1);
    if ( v25 )
    {
      v26 = *(_DWORD *)(v19 + 688);
      v27 = *(_DWORD *)(v19 + 16) | 2;
      do
      {
        v28 = (_QWORD *)v25[53];
        v29 = 0;
        do
        {
          v30 = v29++;
          v31 = *(struct _NET_BUFFER_LIST **)(v19 + 40 * v30 + 64);
          PoolWithTag = 5 * v30;
          if ( v31 )
            ndisMIndicateNetBufferListsToOpen(
              v25,
              v31,
              *(unsigned int *)(v19 + 40),
              *(_DWORD *)(v19 + 40 * v30 + 80),
              v27);
        }
        while ( v29 <= v26 );
        v25 = v28;
      }
      while ( v28 );
      v6 = (struct _NET_BUFFER_LIST *)v92;
      v20 = v94;
    }
    v32 = (_QWORD *)*((_QWORD *)v20 + 2);
    if ( v32 )
    {
      v33 = *(_DWORD *)(v19 + 16);
      if ( (_DWORD)v93 )
      {
        v40 = *(_DWORD *)(v19 + 688);
        v41 = v33 | 2;
        do
        {
          v42 = (_QWORD *)v32[53];
          v43 = 0;
          do
          {
            v44 = v43++;
            v45 = *(struct _NET_BUFFER_LIST **)(v19 + 40 * v44 + 64);
            PoolWithTag = 5 * v44;
            if ( v45 )
              ndisMIndicateNetBufferListsToOpen(
                v32,
                v45,
                *(unsigned int *)(v19 + 40),
                *(_DWORD *)(v19 + 40 * v44 + 80),
                v41);
          }
          while ( v43 <= v40 );
          v32 = v42;
        }
        while ( v42 );
      }
      else
      {
        v34 = *(_DWORD *)(v19 + 40);
        v35 = *(_DWORD *)(v19 + 688);
        if ( *(_DWORD *)(*(_QWORD *)v19 + 2252LL) )
          ndisIndicateToPmodeOpens(v19);
        HIDWORD(PoolWithTag) = 0;
        v36 = 1;
        if ( !v35 )
          goto LABEL_31;
        do
        {
          v37 = v36++;
          ndisMIndicateNetBufferListsToOpen(
            *(_QWORD **)(v19 + 40 * v37 + 56),
            *(struct _NET_BUFFER_LIST **)(v19 + 40 * v37 + 64),
            v34,
            *(_DWORD *)(v19 + 40 * v37 + 80),
            v33);
        }
        while ( v36 <= v35 );
      }
      v6 = (struct _NET_BUFFER_LIST *)v92;
    }
LABEL_31:
    v24 = 0LL;
LABEL_32:
    v5 = NewIrql;
    goto LABEL_33;
  }
  if ( (unsigned __int8)byte_1C00895CB >= 2u )
  {
    PoolWithTag = WPP_SF_(10LL, &WPP_27a9f588cd63370d861f87f60b3f12b7_Traceguids, v81);
    v24 = 0LL;
  }
LABEL_33:
  if ( (v5 & 2) != 0 )
    goto LABEL_55;
  if ( v19 )
  {
    if ( *(_BYTE *)(v19 + 692) )
    {
      v6 = *(struct _NET_BUFFER_LIST **)(v19 + 64);
      goto LABEL_37;
    }
LABEL_55:
    v38 = v91;
    goto LABEL_38;
  }
LABEL_37:
  v38 = v91;
  if ( v6 )
  {
    v50 = a1;
    NewIrqla = 2;
    v51 = 1LL;
    v52 = v6;
    v53 = v91 != 0;
    v98.CurrentCpu = -1;
    v98.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
    v98.DatapathEventsMask = *(_DWORD *)(a1 + 48);
    v98.DatapathCyclesMask = *(_DWORD *)(a1 + 80);
    do
    {
      v52->Flags = v52->Flags & 0xFFFFFFF4 | 8;
      v52 = (struct _NET_BUFFER_LIST *)v52->Link.Alignment;
    }
    while ( v52 );
    PoolWithTag = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      PoolWithTag = ndisMarkNetBufferListCorrelationIdsAsUsed(v6);
    if ( *(_DWORD *)(a1 + 3272) != (_DWORD)v24 )
    {
      PoolWithTag = ndisReturnPeriodicReceives(a1, v6);
      v24 = 0LL;
      v6 = (struct _NET_BUFFER_LIST *)PoolWithTag;
      v51 = 1LL;
    }
    if ( v6 )
    {
      if ( ndisNblTrackerMode )
      {
        v54 = *(_QWORD *)(a1 + 2544);
        v55 = v24;
        v56 = ndisNblTrackerEpoch;
        v57 = v24;
        v58 = v24;
        v89 = (char)v24;
        v88 = v51 & v53;
        if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
        {
          ndisNblTrackerRecordEvent(v6, 0LL, 0x87u, (void *)v54, (unsigned __int8)v51 & v53);
          v24 = 0LL;
          v58 = v55;
          v51 = 1LL;
        }
        v59 = v54 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (v51 & v59) != 0 )
          v60 = *(void **)((v59 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        else
          v60 = (void *)v59;
        v92 = v60;
        if ( (v51 & v59) != 0 )
          v59 ^= ((unsigned __int8)v59 ^ (unsigned __int8)(2 * v56)) & 2;
        v61 = (_SLIST_HEADER *)v6;
        do
        {
          v62 = v61[22].Alignment;
          do
          {
            if ( v61[22].Alignment != v62 )
              break;
            if ( !v62 && (struct _NET_BUFFER_LIST *)v61[7].Region == v24 )
              v61[7].Region = ndisSourceHandleFromOwner(v24, v60, v58);
            if ( (v62 & 4) != 0 || (Region = (void *)v61[7].Region) == 0LL )
            {
              v61[22].Alignment = v59 | 4;
            }
            else if ( Region == v60 && (struct _NET_BUFFER_LIST *)v61[1].Region == v24 )
            {
              v58 = (struct _NET_BUFFER_LIST *)((char *)v58 + v51);
              v61[22].Alignment = 24LL;
              v55 = (struct _NET_BUFFER_LIST *)((char *)v55 + v51);
            }
            else
            {
              v55 = (struct _NET_BUFFER_LIST *)((char *)v55 + v51);
              v61[22].Alignment = v59;
            }
            v61 = (_SLIST_HEADER *)v61->Alignment;
          }
          while ( v61 );
          v93 = v58;
          if ( ((unsigned __int8)v62 & (unsigned __int8)v51) != 0 )
          {
            ndisNblTrackerUpdateOwnershipCount(v62, (char *)v57 - (char *)v55, &v88, &v89);
            v24 = 0LL;
            v51 = 1LL;
          }
          v60 = v92;
          v57 = v55;
          v58 = v93;
        }
        while ( v61 );
        v64 = (char *)v55 - (char *)v93;
        if ( ((unsigned __int8)v59 & (unsigned __int8)v51) != 0 && v64 )
        {
          v65 = v88;
          if ( !v88 && v89 == (_BYTE)v24 )
          {
            v65 = KeGetCurrentIrql() == 2;
            v88 = v65;
          }
          v66 = v59;
          v67 = v59 & 0xFFFFFFFFFFFFFFF8uLL;
          v68 = 2 * (v51 & (v66 >> 1));
          if ( v65 )
          {
            v69 = (_QWORD *)(*(_QWORD *)(v67 + 8 * v68 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v69 += v64;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v67 + 8 * v68 + 48), v64);
          }
        }
        v50 = a1;
      }
      if ( (v98.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( (v53 & (unsigned __int8)v51) == 0 )
          NewIrqla = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v98);
        v24 = 0LL;
      }
      v70 = *(_QWORD **)(v50 + 2552);
      v48 = *(void (**)(void))(v50 + 2648);
      v49 = *(void **)(v50 + 2536);
      v94 = v48;
      v71 = *(_BYTE *)v70 == 17;
      v92 = v49;
      if ( v71 )
        goto LABEL_101;
      if ( ndisIterativeDataPathDisabled == (_DWORD)v24 && (v53 || KeGetCurrentIrql() == 2) )
      {
        Number = KeGetPcr()->Prcb.Number;
        v73 = (struct _NET_BUFFER_LIST **)v99;
        HIDWORD(PoolWithTag) = 0;
        v99[1] = v6;
        LODWORD(v93) = Number;
        v99[2] = 0LL;
        v99[0] = v6;
        v6->Scratch = v24;
        v6->ChildRefCount = v53;
        while ( *(_BYTE *)v70 == 5 )
        {
          if ( *v73 == v24 )
            goto LABEL_54;
          v74 = v70;
          HIDWORD(PoolWithTag) = 0;
          v75 = v70[53] + 96LL * Number;
          v76 = *(_BYTE *)(v75 + 88);
          *(_BYTE *)(v75 + 88) = 1;
          v77 = *v73;
          *v73 = 0LL;
          if ( v77 )
          {
            v78 = v94;
            v79 = v92;
            do
            {
              Scratch = (struct _NET_BUFFER_LIST *)v77->Scratch;
              ChildRefCount = v77->ChildRefCount;
              v85 = 0;
              v84 = 0;
              v77->ChildRefCount = 0;
              ndisCallReceiveCompleteHandler(v70, v78, v79, v77, v84, v85, ChildRefCount);
              v77 = Scratch;
            }
            while ( Scratch );
            v19 = v96;
            v74 = v70;
            v48 = v94;
            v49 = v92;
          }
          v24 = 0LL;
          *(_BYTE *)(v75 + 88) = 0;
          if ( v76 )
          {
            *(_BYTE *)(v75 + 88) = 1;
            break;
          }
          v48 = (void (*)(void))v74[66];
          v73 = (struct _NET_BUFFER_LIST **)(v75 + 72);
          v49 = (void *)v74[67];
          v70 = (_QWORD *)v70[69];
          Number = (unsigned int)v93;
          v94 = v48;
          v92 = v49;
        }
        v46 = *v73;
        if ( *v73 )
        {
          *v73 = 0LL;
          do
          {
            v47 = (struct _NET_BUFFER_LIST *)v46->Scratch;
            ChildRefCount = v46->ChildRefCount;
            v85 = 0;
            v84 = 0;
            v46->ChildRefCount = 0;
            ndisCallReceiveCompleteHandler(v70, v48, v49, v46, v84, v85, ChildRefCount);
            v48 = v94;
            v46 = v47;
            v49 = v92;
          }
          while ( v47 );
        }
        goto LABEL_54;
      }
      if ( *(_BYTE *)v50 != 5 )
      {
LABEL_101:
        PoolWithTag = ((__int64 (__fastcall *)(void *, struct _NET_BUFFER_LIST *, BOOL))v48)(v49, v6, v53);
      }
      else
      {
        v101 = v70;
        v102 = v49;
        v106 = 3LL;
        v103 = v48;
        v104 = v6;
        v105 = (int)v24;
        v107 = v53;
        if ( ndisExpandStack(ndisDataPathExpandStackCallback, v100) < 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v50, v6, 0);
      }
LABEL_54:
      if ( (v98.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v98);
        if ( NewIrqla != 2 )
          KeLowerIrql(NewIrqla);
      }
      goto LABEL_55;
    }
  }
LABEL_38:
  if ( v90 )
  {
    HIDWORD(PoolWithTag) = HIDWORD(ndisPerProcRcvTrackers);
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v95);
  }
  else if ( v19 )
  {
    ExFreePoolWithTag((PVOID)v19, 0);
  }
  if ( v38 )
  {
    v39 = *(_QWORD *)(v97 + 288);
    if ( LockState.LockState == 3 )
    {
      LODWORD(PoolWithTag) = KeGetPcr()->Prcb.Number;
      --**(_DWORD **)(v39 + 8 * PoolWithTag + 32);
      if ( (LockState.Flags & 1) == 0 && LockState.OldIrql != 2 )
        KeLowerIrql(LockState.OldIrql);
    }
    else if ( LockState.LockState == 4 )
    {
      *(_QWORD *)(v39 + 16) = 0LL;
      v82 = (KSPIN_LOCK *)(v39 + 8);
      if ( (LockState.Flags & 1) != 0 )
        KeReleaseSpinLockFromDpcLevel(v82);
      else
        KeReleaseSpinLock(v82, LockState.OldIrql);
    }
  }
  else
  {
    NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v97 + 288), &LockState);
  }
}

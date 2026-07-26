/*
 * XREFs of ndisMDispatchReceiveNetBufferLists @ 0x1C0001870
 * Callers:
 *     <none>
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

void __fastcall ndisMDispatchReceiveNetBufferLists(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        int a3,
        int a4,
        unsigned int NewIrql)
{
  char v5; // bl
  struct _NET_BUFFER_LIST *v8; // r15
  __int64 CurrentIrql; // rax
  __int64 v10; // r14
  struct _NET_BUFFER_LIST *v11; // r12
  struct _NDIS_RCV_TRACKER_ARRAY *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  char *v16; // rdi
  _QWORD *v17; // r14
  struct _NET_BUFFER_LIST *Alignment; // rcx
  _QWORD *v19; // rbx
  struct _NET_BUFFER_LIST *v20; // r11
  _QWORD *v21; // rbx
  unsigned int v22; // r15d
  int v23; // r13d
  _QWORD *v24; // r12
  unsigned int v25; // esi
  __int64 v26; // rcx
  struct _NET_BUFFER_LIST *v27; // rdx
  _QWORD *v28; // rbx
  int v29; // r14d
  unsigned int v30; // esi
  unsigned int i; // ebx
  __int64 v32; // r9
  struct _NET_BUFFER_LIST *v33; // rcx
  unsigned int v34; // eax
  BOOL v35; // ebx
  __int64 v36; // rdx
  _QWORD *v37; // rsi
  void *v38; // r10
  void (*v39)(void); // r13
  unsigned int Number; // ecx
  struct _NET_BUFFER_LIST **v41; // r12
  struct _NET_BUFFER_LIST *v42; // r9
  struct _NET_BUFFER_LIST *v43; // rbx
  __int64 v44; // r8
  unsigned int v45; // r13d
  int v46; // r12d
  _QWORD *v47; // r14
  unsigned int v48; // esi
  __int64 v49; // rcx
  struct _NET_BUFFER_LIST *v50; // rdx
  char v51; // si
  char *v52; // r12
  BOOL v53; // ecx
  char *v54; // r8
  unsigned __int64 v55; // rbx
  unsigned int v56; // ecx
  struct _NET_BUFFER_LIST *v57; // r14
  unsigned __int64 v58; // rbx
  unsigned __int64 v59; // r13
  _SLIST_HEADER *v60; // rsi
  unsigned __int64 v61; // r10
  unsigned __int64 Region; // rax
  unsigned __int64 v63; // r14
  bool v64; // al
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rbx
  __int64 v67; // rdx
  _QWORD *v68; // rcx
  _QWORD *v69; // r15
  __int64 v70; // r14
  char v71; // al
  struct _NET_BUFFER_LIST *v72; // r9
  void *v73; // rdi
  struct _NET_BUFFER_LIST *Scratch; // rbx
  char *PoolWithTag; // rax
  __int64 v76; // rax
  unsigned int v77; // [rsp+38h] [rbp-71h]
  unsigned int ChildRefCount; // [rsp+38h] [rbp-71h]
  char v79; // [rsp+48h] [rbp-61h] BYREF
  char v80; // [rsp+49h] [rbp-60h] BYREF
  char v81; // [rsp+4Ah] [rbp-5Fh]
  int v82; // [rsp+4Ch] [rbp-5Dh]
  void *v83; // [rsp+50h] [rbp-59h]
  unsigned int v84; // [rsp+58h] [rbp-51h]
  char *v85; // [rsp+60h] [rbp-49h]
  struct NDIS_PCW_CONTEXT v86; // [rsp+68h] [rbp-41h] BYREF
  struct _NET_BUFFER_LIST *v87; // [rsp+80h] [rbp-29h]
  _QWORD v88[3]; // [rsp+88h] [rbp-21h] BYREF
  char v89[8]; // [rsp+A0h] [rbp-9h] BYREF
  _QWORD *v90; // [rsp+A8h] [rbp-1h]
  void *v91; // [rsp+B0h] [rbp+7h]
  void (*v92)(void); // [rsp+B8h] [rbp+Fh]
  struct _NET_BUFFER_LIST *v93; // [rsp+C0h] [rbp+17h]
  int v94; // [rsp+C8h] [rbp+1Fh]
  __int64 v95; // [rsp+CCh] [rbp+23h]
  BOOL v96; // [rsp+D4h] [rbp+2Bh]
  char v98; // [rsp+108h] [rbp+5Fh]
  KIRQL NewIrqla; // [rsp+128h] [rbp+7Fh]

  v5 = NewIrql;
  v87 = a2;
  v84 = 0;
  v81 = 0;
  v8 = a2;
  CurrentIrql = NewIrql & 1;
  v10 = a1;
  LODWORD(v83) = NewIrql & 1;
  v11 = 0LL;
  if ( (NewIrql & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
  {
    if ( ndisPerProcRcvTrackers )
    {
      LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
      v12 = ndisPerProcRcvTrackers;
      v13 = 2096 * CurrentIrql;
      v84 = CurrentIrql;
      v14 = *((unsigned int *)ndisPerProcRcvTrackers + 524 * CurrentIrql);
      if ( (unsigned int)v14 < 3 )
      {
        v81 = 1;
        v15 = v13 + 696 * v14;
        v16 = (char *)ndisPerProcRcvTrackers + v15 + 8;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v13) = v14 + 1;
        v85 = (char *)v12 + v15 + 8;
LABEL_5:
        v17 = *(_QWORD **)(v10 + 400);
        v16[692] = 0;
        v82 = NewIrql & 2;
        Alignment = v8;
        if ( (NewIrql & 2) == 0 )
        {
          do
          {
            v11 = Alignment;
            Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
        }
        v19 = (_QWORD *)v17[41];
        if ( v19 && *(_BYTE *)(v19[3] + 56LL) >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v19, v8, NewIrql);
          v20 = 0LL;
          *((_QWORD *)v16 + 8) = 0LL;
          *((_DWORD *)v16 + 20) = 0;
        }
        else
        {
          *(_QWORD *)v16 = a1;
          *((_QWORD *)v16 + 3) = v8;
          *((_QWORD *)v16 + 1) = v17;
          *((_DWORD *)v16 + 4) = NewIrql;
          *((_QWORD *)v16 + 4) = v11;
          *((_DWORD *)v16 + 10) = a3;
          *((_DWORD *)v16 + 11) = a4;
          ndisSortNetBufferLists(v16, NewIrql, v12);
          v20 = 0LL;
          if ( *((_QWORD *)v16 + 8) || *((_DWORD *)v16 + 172) )
          {
            if ( !*v17 || a3 )
            {
              v16[692] = 1;
            }
            else
            {
              ndisIndicateXlatedPacketsToNdis5Protocols(v16);
              v20 = 0LL;
            }
            if ( !v19 )
            {
              v21 = (_QWORD *)v17[1];
              if ( v21 )
              {
                v22 = *((_DWORD *)v16 + 172);
                v23 = *((_DWORD *)v16 + 4) | 2;
                do
                {
                  v24 = (_QWORD *)v21[53];
                  v25 = 0;
                  do
                  {
                    v26 = v25++;
                    v27 = *(struct _NET_BUFFER_LIST **)&v16[40 * v26 + 64];
                    if ( v27 )
                      ndisMIndicateNetBufferListsToOpen(v21, v27, v23);
                  }
                  while ( v25 <= v22 );
                  v21 = v24;
                }
                while ( v24 );
                v8 = v87;
              }
              v28 = (_QWORD *)v17[2];
              if ( v28 )
              {
                if ( v82 )
                {
                  v45 = *((_DWORD *)v16 + 172);
                  v46 = *((_DWORD *)v16 + 4) | 2;
                  do
                  {
                    v47 = (_QWORD *)v28[53];
                    v48 = 0;
                    do
                    {
                      v49 = v48++;
                      v50 = *(struct _NET_BUFFER_LIST **)&v16[40 * v49 + 64];
                      if ( v50 )
                        ndisMIndicateNetBufferListsToOpen(v28, v50, v46);
                    }
                    while ( v48 <= v45 );
                    v28 = v47;
                  }
                  while ( v47 );
                }
                else
                {
                  v29 = *((_DWORD *)v16 + 4);
                  v30 = *((_DWORD *)v16 + 172);
                  if ( *(_DWORD *)(*(_QWORD *)v16 + 2252LL) )
                    ndisIndicateToPmodeOpens(v16);
                  for ( i = 1; i <= v30; ++i )
                  {
                    v44 = i;
                    ndisMIndicateNetBufferListsToOpen(
                      *(NDIS_HANDLE *)&v16[40 * v44 + 56],
                      *(struct _NET_BUFFER_LIST **)&v16[40 * v44 + 64],
                      v29);
                  }
                }
              }
              v20 = 0LL;
            }
          }
        }
        v10 = a1;
        v5 = NewIrql;
        goto LABEL_28;
      }
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
  v20 = 0LL;
  v85 = PoolWithTag;
  v16 = PoolWithTag;
  if ( PoolWithTag )
    goto LABEL_5;
  if ( (unsigned __int8)byte_1C00895CB >= 2u )
  {
    WPP_SF_(10LL, &WPP_27a9f588cd63370d861f87f60b3f12b7_Traceguids, v12);
    v20 = 0LL;
  }
LABEL_28:
  if ( (v5 & 2) != 0 )
    goto LABEL_51;
  if ( v16 )
  {
    if ( !v16[692] )
      goto LABEL_51;
    v8 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v16 + 8);
  }
  if ( v8 )
  {
    v32 = 1LL;
    v86.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v10 + 40);
    v33 = v8;
    v34 = *(_DWORD *)(v10 + 48);
    v35 = (_DWORD)v83 != 0;
    v86.CurrentCpu = -1;
    v86.DatapathEventsMask = v34;
    v86.DatapathCyclesMask = *(_DWORD *)(v10 + 80);
    v82 = v35;
    NewIrqla = 2;
    do
    {
      v33->Flags = v33->Flags & 0xFFFFFFF4 | 8;
      v33 = (struct _NET_BUFFER_LIST *)v33->Link.Alignment;
    }
    while ( v33 );
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisMarkNetBufferListCorrelationIdsAsUsed(v8);
    if ( *(_DWORD *)(v10 + 3272) != (_DWORD)v20 )
    {
      v76 = ndisReturnPeriodicReceives(v10, v8);
      v20 = 0LL;
      v8 = (struct _NET_BUFFER_LIST *)v76;
      v32 = 1LL;
    }
    if ( v8 )
    {
      v36 = (unsigned int)ndisNblTrackerMode;
      if ( ndisNblTrackerMode )
      {
        v51 = ndisNblTrackerEpoch;
        v52 = (char *)v20;
        v53 = v35;
        v54 = (char *)v20;
        v55 = *(_QWORD *)(v10 + 2544);
        v56 = v32 & v53;
        v80 = (char)v20;
        v57 = v20;
        v79 = v32 & v56;
        if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
        {
          ndisNblTrackerRecordEvent(v8, 0LL, 0x87u, (void *)v55, v56);
          v20 = 0LL;
          v54 = v52;
          v32 = 1LL;
        }
        v58 = v55 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (v32 & v58) != 0 )
          v59 = *(_QWORD *)((v58 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        else
          v59 = v58;
        if ( (v32 & v58) != 0 )
          v58 ^= ((unsigned __int8)v58 ^ (unsigned __int8)(2 * v51)) & 2;
        v60 = (_SLIST_HEADER *)v8;
        do
        {
          v61 = v60[22].Alignment;
          do
          {
            if ( v60[22].Alignment != v61 )
              break;
            if ( !v61 && (struct _NET_BUFFER_LIST *)v60[7].Region == v20 )
              v60[7].Region = ndisSourceHandleFromOwner(v20, v36, v54);
            if ( (v61 & 4) != 0 || (Region = v60[7].Region) == 0 )
            {
              v60[22].Alignment = v58 | 4;
            }
            else if ( Region == v59 && (struct _NET_BUFFER_LIST *)v60[1].Region == v20 )
            {
              v54 += v32;
              v60[22].Alignment = 24LL;
              v57 = (struct _NET_BUFFER_LIST *)((char *)v57 + v32);
            }
            else
            {
              v57 = (struct _NET_BUFFER_LIST *)((char *)v57 + v32);
              v60[22].Alignment = v58;
            }
            v60 = (_SLIST_HEADER *)v60->Alignment;
          }
          while ( v60 );
          v83 = v54;
          if ( ((unsigned __int8)v61 & (unsigned __int8)v32) != 0 )
          {
            ndisNblTrackerUpdateOwnershipCount(v61, v52 - (char *)v57, &v79, &v80);
            v20 = 0LL;
            v32 = 1LL;
          }
          v54 = (char *)v83;
          v52 = (char *)v57;
        }
        while ( v60 );
        v63 = (char *)v57 - (_BYTE *)v83;
        if ( ((unsigned __int8)v58 & (unsigned __int8)v32) != 0 && v63 )
        {
          v64 = v79;
          if ( !v79 && v80 == (_BYTE)v20 )
          {
            v64 = KeGetCurrentIrql() == 2;
            v79 = v64;
          }
          v65 = v58;
          v66 = v58 & 0xFFFFFFFFFFFFFFF8uLL;
          v67 = 2 * (v32 & (v65 >> 1));
          if ( v64 )
          {
            v68 = (_QWORD *)(*(_QWORD *)(v66 + 8 * v67 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v68 += v63;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v66 + 8 * v67 + 48), v63);
          }
        }
        v10 = a1;
        v35 = v82;
      }
      if ( (v86.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( (v35 & (unsigned __int8)v32) == 0 )
          NewIrqla = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v86, 5u);
      }
      v37 = *(_QWORD **)(v10 + 2552);
      v38 = *(void **)(v10 + 2536);
      v39 = *(void (**)(void))(v10 + 2648);
      v83 = v38;
      if ( *(_BYTE *)v37 == 17 )
        goto LABEL_94;
      if ( ndisIterativeDataPathDisabled == (_DWORD)v20 && (v35 || KeGetCurrentIrql() == 2) )
      {
        Number = KeGetPcr()->Prcb.Number;
        v41 = (struct _NET_BUFFER_LIST **)v88;
        v88[1] = v8;
        v82 = Number;
        v88[2] = 0LL;
        v88[0] = v8;
        v8->Scratch = v20;
        v8->ChildRefCount = v35;
        while ( *(_BYTE *)v37 == 5 )
        {
          if ( *v41 == v20 )
            goto LABEL_50;
          v69 = v37;
          v70 = v37[53] + 96LL * Number;
          v71 = *(_BYTE *)(v70 + 88);
          *(_BYTE *)(v70 + 88) = 1;
          v72 = *v41;
          v98 = v71;
          *v41 = v20;
          if ( v72 )
          {
            v73 = v83;
            do
            {
              Scratch = (struct _NET_BUFFER_LIST *)v72->Scratch;
              ChildRefCount = v72->ChildRefCount;
              v72->ChildRefCount = (int)v20;
              ndisCallReceiveCompleteHandler(v37, v39, v73, v72, (unsigned int)v20, (unsigned int)v20, ChildRefCount);
              v20 = 0LL;
              v72 = Scratch;
            }
            while ( Scratch );
            v16 = v85;
            v38 = v83;
            v71 = v98;
          }
          *(_BYTE *)(v70 + 88) = (_BYTE)v20;
          if ( v71 )
          {
            *(_BYTE *)(v70 + 88) = 1;
            break;
          }
          v38 = (void *)v37[67];
          v41 = (struct _NET_BUFFER_LIST **)(v70 + 72);
          v37 = (_QWORD *)v37[69];
          v39 = (void (*)(void))v69[66];
          Number = v82;
          v83 = (void *)v69[67];
        }
        v42 = *v41;
        if ( *v41 )
        {
          *v41 = v20;
          do
          {
            v43 = (struct _NET_BUFFER_LIST *)v42->Scratch;
            v77 = v42->ChildRefCount;
            v42->ChildRefCount = (int)v20;
            ndisCallReceiveCompleteHandler(v37, v39, v38, v42, (unsigned int)v20, (unsigned int)v20, v77);
            v38 = v83;
            LODWORD(v20) = 0;
            v42 = v43;
          }
          while ( v43 );
        }
        goto LABEL_50;
      }
      if ( *(_BYTE *)v10 != 5 )
      {
LABEL_94:
        ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, BOOL))v39)(v38, v8, v35);
      }
      else
      {
        v90 = v37;
        v91 = v38;
        v95 = 3LL;
        v92 = v39;
        v93 = v8;
        v94 = (int)v20;
        v96 = v35;
        if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v89) < 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v10, v8, 0);
      }
LABEL_50:
      if ( (v86.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v86, 5u, 0x12uLL);
        if ( NewIrqla != 2 )
          KeLowerIrql(NewIrqla);
      }
    }
  }
LABEL_51:
  if ( v81 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v84);
  }
  else if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
  }
}

/*
 * XREFs of ndisMTopReceiveNetBufferLists @ 0x1C00031A0
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

void __fastcall ndisMTopReceiveNetBufferLists(__int64 a1, struct _NET_BUFFER_LIST *a2, int a3, int a4, int a5)
{
  bool v5; // zf
  struct _NET_BUFFER_LIST *v8; // r13
  __int64 v9; // r15
  _QWORD *v10; // rbx
  struct _NET_BUFFER_LIST *v11; // rsi
  __int64 CurrentIrql; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  char *PoolWithTag; // rdi
  _QWORD *v16; // r15
  struct _NET_BUFFER_LIST *Alignment; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rsi
  unsigned int v20; // r14d
  int v21; // r13d
  _QWORD *v22; // r12
  __int64 v23; // rbx
  struct _NET_BUFFER_LIST *v24; // rdx
  _QWORD *v25; // rbx
  int v26; // r14d
  unsigned int v27; // ebx
  unsigned int i; // esi
  __int64 v29; // r8
  struct _NET_BUFFER_LIST *v30; // r8
  unsigned int v31; // r12d
  int v32; // r15d
  _QWORD *v33; // r14
  __int64 v34; // rsi
  struct _NET_BUFFER_LIST *v35; // rdx
  unsigned int v36; // esi
  struct _NET_BUFFER_LIST *v37; // rcx
  void (*v38)(void); // r15
  _QWORD *v39; // r14
  void *v40; // r12
  unsigned __int64 v41; // rbx
  char v42; // r14
  __int64 v43; // rdx
  struct _NET_BUFFER_LIST *v44; // r15
  struct _NET_BUFFER_LIST *v45; // r11
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // r12
  _SLIST_HEADER *v48; // r14
  unsigned __int64 v49; // r10
  unsigned __int64 Region; // rax
  unsigned __int64 v51; // r15
  bool v52; // cl
  unsigned __int64 v53; // rdx
  _QWORD *v54; // rcx
  unsigned int Number; // ecx
  struct _NET_BUFFER_LIST **v56; // rdx
  struct _NET_BUFFER_LIST **v57; // rax
  _QWORD *v58; // r13
  __int64 v59; // rsi
  char v60; // al
  struct _NET_BUFFER_LIST *v61; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v63; // r9
  struct _NET_BUFFER_LIST *v64; // rbx
  struct _NET_BUFFER_LIST *v65; // rcx
  unsigned int ChildRefCount; // [rsp+38h] [rbp-81h]
  unsigned int v67; // [rsp+38h] [rbp-81h]
  char v68; // [rsp+48h] [rbp-71h] BYREF
  KIRQL v69; // [rsp+49h] [rbp-70h]
  char v70; // [rsp+4Ah] [rbp-6Fh]
  struct _NET_BUFFER_LIST **p_Next; // [rsp+50h] [rbp-69h]
  unsigned int v72; // [rsp+58h] [rbp-61h]
  struct _NET_BUFFER_LIST *v73; // [rsp+60h] [rbp-59h]
  struct NDIS_PCW_CONTEXT v74; // [rsp+68h] [rbp-51h] BYREF
  struct _NET_BUFFER_LIST *v75; // [rsp+80h] [rbp-39h] BYREF
  struct _NET_BUFFER_LIST *v76; // [rsp+88h] [rbp-31h]
  __int64 v77; // [rsp+90h] [rbp-29h]
  char v78[8]; // [rsp+98h] [rbp-21h] BYREF
  __int64 v79; // [rsp+A0h] [rbp-19h]
  void *v80; // [rsp+A8h] [rbp-11h]
  void (*v81)(void); // [rsp+B0h] [rbp-9h]
  struct _NET_BUFFER_LIST *v82; // [rsp+B8h] [rbp-1h]
  int v83; // [rsp+C0h] [rbp+7h]
  __int64 v84; // [rsp+C4h] [rbp+Bh]
  unsigned int v85; // [rsp+CCh] [rbp+13h]
  char v87; // [rsp+118h] [rbp+5Fh]
  unsigned int v88; // [rsp+120h] [rbp+67h] BYREF

  v5 = (a2->NblFlags & 0x8000) == 0;
  v73 = a2;
  v8 = a2;
  v9 = a1;
  if ( !v5 )
  {
    (*(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *))(a1 + 2152))(a1, a2);
    return;
  }
  if ( !*(_BYTE *)(a1 + 2673) )
  {
    (*(void (__fastcall **)(__int64))(a1 + 2144))(a1);
    return;
  }
  LODWORD(v10) = a5;
  v11 = 0LL;
  v72 = 0;
  v70 = 0;
  CurrentIrql = a5 & 1;
  LODWORD(p_Next) = a5 & 1;
  if ( ((a5 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2))
    && ndisPerProcRcvTrackers
    && (LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number,
        v13 = 2096 * CurrentIrql,
        v72 = CurrentIrql,
        v14 = *((unsigned int *)ndisPerProcRcvTrackers + 524 * CurrentIrql),
        (unsigned int)v14 < 3) )
  {
    v70 = 1;
    PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v14 + v13 + 8;
    *(_DWORD *)((char *)ndisPerProcRcvTrackers + v13) = v14 + 1;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
    if ( !PoolWithTag )
    {
      if ( (unsigned __int8)byte_1C00895CB >= 2u )
        WPP_SF_(10LL, &WPP_27a9f588cd63370d861f87f60b3f12b7_Traceguids, v13);
      goto LABEL_111;
    }
  }
  v16 = *(_QWORD **)(v9 + 400);
  PoolWithTag[692] = 0;
  v88 = (unsigned __int8)v10 & 2;
  Alignment = v8;
  v18 = (unsigned int)v10;
  if ( ((unsigned __int8)v10 & 2) == 0 )
  {
    do
    {
      v11 = Alignment;
      Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
  v10 = (_QWORD *)v16[41];
  if ( v10 && *(_BYTE *)(v10[3] + 56LL) >= 6u )
  {
    ndisMIndicateNetBufferListsToOpen(v10, v8, v18);
    LOBYTE(v10) = a5;
    v30 = 0LL;
    v9 = a1;
    *((_QWORD *)PoolWithTag + 8) = 0LL;
    *((_DWORD *)PoolWithTag + 20) = 0;
    goto LABEL_30;
  }
  *(_QWORD *)PoolWithTag = a1;
  *((_QWORD *)PoolWithTag + 3) = v8;
  *((_QWORD *)PoolWithTag + 1) = v16;
  *((_DWORD *)PoolWithTag + 4) = v18;
  *((_QWORD *)PoolWithTag + 4) = v11;
  *((_DWORD *)PoolWithTag + 10) = a3;
  *((_DWORD *)PoolWithTag + 11) = a4;
  ndisSortNetBufferLists(PoolWithTag, v18, v13);
  if ( !*((_QWORD *)PoolWithTag + 8) && !*((_DWORD *)PoolWithTag + 172) )
    goto LABEL_110;
  if ( !*v16 || a3 )
    PoolWithTag[692] = 1;
  else
    ndisIndicateXlatedPacketsToNdis5Protocols(PoolWithTag);
  if ( v10 )
  {
LABEL_110:
    v9 = a1;
    LOBYTE(v10) = a5;
LABEL_111:
    v30 = 0LL;
    goto LABEL_30;
  }
  v19 = (_QWORD *)v16[1];
  if ( v19 )
  {
    v20 = *((_DWORD *)PoolWithTag + 172);
    v21 = *((_DWORD *)PoolWithTag + 4) | 2;
    do
    {
      v22 = (_QWORD *)v19[53];
      v23 = 0LL;
      do
      {
        v24 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v23 + 64];
        v23 = (unsigned int)(v23 + 1);
        if ( v24 )
          ndisMIndicateNetBufferListsToOpen(v19, v24, v21);
      }
      while ( (unsigned int)v23 <= v20 );
      v19 = v22;
    }
    while ( v22 );
    v8 = v73;
  }
  v25 = (_QWORD *)v16[2];
  if ( v25 )
  {
    if ( v88 )
    {
      v31 = *((_DWORD *)PoolWithTag + 172);
      v32 = *((_DWORD *)PoolWithTag + 4) | 2;
      do
      {
        v33 = (_QWORD *)v25[53];
        v34 = 0LL;
        do
        {
          v35 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v34 + 64];
          v34 = (unsigned int)(v34 + 1);
          if ( v35 )
            ndisMIndicateNetBufferListsToOpen(v25, v35, v32);
        }
        while ( (unsigned int)v34 <= v31 );
        v25 = v33;
      }
      while ( v33 );
    }
    else
    {
      v26 = *((_DWORD *)PoolWithTag + 4);
      v27 = *((_DWORD *)PoolWithTag + 172);
      if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2252LL) )
        ndisIndicateToPmodeOpens((__int64)PoolWithTag);
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
  LOBYTE(v10) = a5;
  v30 = 0LL;
  v9 = a1;
LABEL_30:
  if ( ((unsigned __int8)v10 & 2) == 0 )
  {
    if ( !PoolWithTag )
    {
LABEL_34:
      if ( !v8 )
        goto LABEL_35;
      v36 = (_DWORD)p_Next != 0;
      v37 = v8;
      v74.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v9 + 40);
      v74.DatapathEventsMask = *(_DWORD *)(v9 + 48);
      v74.DatapathCyclesMask = *(_DWORD *)(v9 + 80);
      v69 = 2;
      v74.CurrentCpu = -1;
      do
      {
        v37->Flags = v37->Flags & 0xFFFFFFF4 | 8;
        v37 = (struct _NET_BUFFER_LIST *)v37->Link.Alignment;
      }
      while ( v37 );
      if ( Microsoft_Windows_Networking_CorrelationEnabled )
        ndisMarkNetBufferListCorrelationIdsAsUsed(v8);
      if ( *(_DWORD *)(v9 + 3272) )
      {
        v8 = (struct _NET_BUFFER_LIST *)ndisReturnPeriodicReceives(v9, v8);
        v30 = 0LL;
      }
      if ( !v8 )
        goto LABEL_35;
      if ( ndisNblTrackerMode )
      {
        v41 = *(_QWORD *)(v9 + 2544);
        v42 = ndisNblTrackerEpoch;
        v43 = (unsigned int)v30;
        if ( (v36 & 1) != 0 )
          v43 = 1LL;
        v68 = 0;
        v44 = v30;
        v45 = v30;
        LOBYTE(v88) = v43 & 1;
        if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
        {
          ndisNblTrackerRecordEvent(v8, 0LL, 0x87u, (void *)v41, v43);
          v45 = v44;
          v30 = v44;
        }
        v46 = v41 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (v46 & 1) != 0 )
          v47 = *(_QWORD *)((v46 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        else
          v47 = v46;
        if ( (v46 & 1) != 0 )
          v46 ^= ((unsigned __int8)v46 ^ (unsigned __int8)(2 * v42)) & 2;
        v48 = (_SLIST_HEADER *)v8;
        do
        {
          v49 = v48[22].Alignment;
          do
          {
            if ( v48[22].Alignment != v49 )
              break;
            if ( !v49 && !v48[7].Region )
              v48[7].Region = ndisSourceHandleFromOwner(0LL, v43, v30);
            if ( (v49 & 4) != 0 || (Region = v48[7].Region) == 0 )
            {
              v48[22].Alignment = v46 | 4;
            }
            else if ( Region != v47 || v48[1].Region )
            {
              v44 = (struct _NET_BUFFER_LIST *)((char *)v44 + 1);
              v48[22].Alignment = v46;
            }
            else
            {
              v30 = (struct _NET_BUFFER_LIST *)((char *)v30 + 1);
              v48[22].Alignment = 24LL;
              v44 = (struct _NET_BUFFER_LIST *)((char *)v44 + 1);
            }
            v48 = (_SLIST_HEADER *)v48->Alignment;
          }
          while ( v48 );
          p_Next = &v30->Next;
          if ( (v49 & 1) != 0 )
          {
            ndisNblTrackerUpdateOwnershipCount(v49, (char *)v45 - (char *)v44, &v88, &v68);
            v30 = (struct _NET_BUFFER_LIST *)p_Next;
          }
          v45 = v44;
        }
        while ( v48 );
        v51 = (char *)v44 - (char *)v30;
        if ( (v46 & 1) != 0 && v51 )
        {
          v52 = v88;
          if ( !(_BYTE)v88 && !v68 )
          {
            v52 = KeGetCurrentIrql() == 2;
            LOBYTE(v88) = v52;
          }
          v53 = (v46 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v46 >> 1) & 1);
          if ( v52 )
          {
            v54 = (_QWORD *)(*(_QWORD *)(v53 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v54 += v51;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v53 + 48), v51);
          }
        }
        v9 = a1;
        v30 = 0LL;
      }
      if ( (v74.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( (v36 & 1) == 0 )
          v69 = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v74, 5u);
      }
      v38 = *(void (**)(void))(v9 + 2648);
      v39 = *(_QWORD **)(a1 + 2552);
      v40 = *(void **)(a1 + 2536);
      if ( *(_BYTE *)v39 == 17 )
        goto LABEL_55;
      if ( ndisIterativeDataPathDisabled || (v36 & 1) == 0 && KeGetCurrentIrql() != 2 )
      {
        if ( *(_BYTE *)a1 == 5 )
        {
          v79 = *(_QWORD *)(a1 + 2552);
          v80 = v40;
          v84 = 3LL;
          v81 = v38;
          v82 = v8;
          v83 = (int)v30;
          v85 = v36;
          if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v78) < 0 )
            ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)a1, v8, 0);
          goto LABEL_56;
        }
LABEL_55:
        ((void (__fastcall *)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))v38)(*(_QWORD *)(a1 + 2536), v8, v36);
LABEL_56:
        if ( (v74.DatapathCyclesMask & 0x20) != 0 )
        {
          ndisPcwEndCycleCounter(&v74, 5u, 0x12uLL);
          if ( v69 != 2 )
            KeLowerIrql(v69);
        }
        goto LABEL_35;
      }
      Number = KeGetPcr()->Prcb.Number;
      v56 = &v75;
      v57 = 0LL;
      v88 = Number;
      v75 = v30;
      v76 = 0LL;
      v77 = 0LL;
      p_Next = &v75;
      if ( v30 )
      {
        if ( v36 == MEMORY[0x84] )
        {
          v65 = (struct _NET_BUFFER_LIST *)MEMORY[0];
          if ( MEMORY[0] )
          {
            do
            {
              v57 = &v65->Next;
              v65 = (struct _NET_BUFFER_LIST *)v65->Link.Alignment;
            }
            while ( v65 );
          }
          Number = v88;
          *v57 = v8;
LABEL_90:
          if ( *(_BYTE *)v39 == 5 )
          {
            while ( *v56 )
            {
              v58 = v39;
              v59 = v39[53] + 96LL * Number;
              v60 = *(_BYTE *)(v59 + 88);
              *(_BYTE *)(v59 + 88) = 1;
              v61 = *v56;
              v87 = v60;
              *v56 = v30;
              if ( v61 )
              {
                do
                {
                  Scratch = (struct _NET_BUFFER_LIST *)v61->Scratch;
                  ChildRefCount = v61->ChildRefCount;
                  v61->ChildRefCount = 0;
                  ndisCallReceiveCompleteHandler(v39, v38, v40, v61, 0, 0, ChildRefCount);
                  v61 = Scratch;
                }
                while ( Scratch );
                v56 = p_Next;
                v58 = v39;
                v60 = v87;
                v30 = 0LL;
              }
              *(_BYTE *)(v59 + 88) = 0;
              if ( v60 )
              {
                *(_BYTE *)(v59 + 88) = 1;
                goto LABEL_97;
              }
              v39 = (_QWORD *)v39[69];
              v56 = (struct _NET_BUFFER_LIST **)(v59 + 72);
              v38 = (void (*)(void))v58[66];
              v40 = (void *)v58[67];
              Number = v88;
              v5 = *(_BYTE *)v39 == 5;
              p_Next = (struct _NET_BUFFER_LIST **)(v59 + 72);
              if ( !v5 )
                goto LABEL_97;
            }
          }
          else
          {
LABEL_97:
            v63 = *v56;
            if ( *v56 )
            {
              *v56 = v30;
              do
              {
                v64 = (struct _NET_BUFFER_LIST *)v63->Scratch;
                v67 = v63->ChildRefCount;
                v63->ChildRefCount = (int)v30;
                ndisCallReceiveCompleteHandler(v39, v38, v40, v63, (unsigned int)v30, (unsigned int)v30, v67);
                v63 = v64;
                LODWORD(v30) = 0;
              }
              while ( v64 );
            }
          }
          goto LABEL_56;
        }
        MEMORY[0x70] = v8;
      }
      else
      {
        v75 = v8;
      }
      v76 = v8;
      v8->Scratch = v30;
      v8->ChildRefCount = v36;
      goto LABEL_90;
    }
    if ( PoolWithTag[692] )
    {
      v8 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
      goto LABEL_34;
    }
  }
LABEL_35:
  if ( v70 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v72);
  }
  else if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
}

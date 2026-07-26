/*
 * XREFs of ndisMIndicateNetBufferListsToOpen @ 0x1C0003810
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001160 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001870 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisIndicateToPmodeOpens @ 0x1C0001E98 (ndisIndicateToPmodeOpens.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00025B0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C00031A0 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001D890 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00667E8 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003F60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisReturnNetBufferLists @ 0x1C0004140 (NdisReturnNetBufferLists.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0010CD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0010D10 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0012AB0 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026D64 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ndisTraceRcv @ 0x1C004FBBC (ndisTraceRcv.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0067948 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

void __fastcall ndisMIndicateNetBufferListsToOpen(
        _QWORD *NdisBindingHandle,
        struct _NET_BUFFER_LIST *a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned int v7; // r11d
  KIRQL v8; // r9
  unsigned int v9; // ebx
  unsigned int v12; // r15d
  bool v13; // cl
  unsigned int Flags; // edx
  unsigned __int64 v15; // rax
  int v16; // r13d
  __int64 v17; // r8
  char v18; // r9
  unsigned __int64 v19; // rbx
  unsigned int v20; // r8d
  __int64 v21; // r11
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r8
  struct _NET_BUFFER_LIST *Alignment; // rdx
  __int64 v25; // r13
  void *v26; // r10
  void *SourceHandle; // rax
  unsigned __int64 v28; // r12
  bool v29; // cl
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 Clock; // rax
  __int64 v33; // rax
  KIRQL v34; // al
  int v35; // edx
  int v36; // edx
  __int16 v37; // ax
  __int64 v38; // rax
  KIRQL v39; // [rsp+30h] [rbp-50h]
  char v40; // [rsp+31h] [rbp-4Fh]
  struct NDIS_PCW_CONTEXT v41; // [rsp+38h] [rbp-48h] BYREF
  struct _NET_BUFFER_LIST *v42; // [rsp+50h] [rbp-30h]
  unsigned __int64 v43; // [rsp+58h] [rbp-28h]
  __int64 v44; // [rsp+60h] [rbp-20h]
  bool v45; // [rsp+C0h] [rbp+40h] BYREF
  char v46; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v47; // [rsp+D0h] [rbp+50h]
  unsigned int v48; // [rsp+D8h] [rbp+58h]

  v48 = a4;
  v47 = a3;
  v5 = NdisBindingHandle[2];
  v6 = 0LL;
  v7 = a4;
  v8 = 2;
  v9 = a3;
  v44 = 0LL;
  v12 = *(_DWORD *)(v5 + 48);
  v41.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
  v41.DatapathCyclesMask = *(_DWORD *)(v5 + 80);
  v41.DatapathEventsMask = v12;
  v41.CurrentCpu = -1;
  v39 = 2;
  v13 = a2->SourceHandle == NdisBindingHandle;
  Flags = a2->Flags;
  if ( (a2->NblFlags & 0x8000) != 0 && a2->NetBufferListInfo[5] == NdisBindingHandle )
  {
    v13 = 1;
  }
  else if ( !v13 )
  {
    goto LABEL_3;
  }
  if ( (Flags & 0x200) == 0 )
    goto LABEL_17;
LABEL_3:
  if ( *(_BYTE *)(v5 + 1998) && !*((_DWORD *)NdisBindingHandle + 108)
    || (NdisBindingHandle[54] & 0x10000) != 0 && !v13 && (Flags & 0x80u) != 0 )
  {
LABEL_17:
    if ( (a5 & 2) == 0 )
    {
      if ( (a5 & 1) != 0 )
        LODWORD(v6) = 1;
      NdisReturnNetBufferLists(NdisBindingHandle, a2, v6);
    }
    return;
  }
  if ( (_BYTE)dword_1C008AE58 )
  {
    v40 = 1;
    LOBYTE(a3) = (Flags & 0x200) != 0;
    Clock = WmiGetClock(0LL, 0LL, a3);
    v7 = v48;
    v8 = 2;
    v44 = Clock;
  }
  else
  {
    v40 = 0;
  }
  v15 = 1LL;
  v16 = a5;
  if ( ndisNblTrackerMode )
  {
    v18 = ndisNblTrackerEpoch;
    v19 = NdisBindingHandle[85];
    v20 = 133;
    LODWORD(v42) = ndisNblTrackerEpoch;
    if ( (a5 & 2) == 0 )
      v20 = 132;
    v21 = 0LL;
    v46 = 0;
    v45 = (a5 & 1) != 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(a2, (struct NDIS_NBL_TRACKER_HANDLE__ *)0x20, v20, (void *)v19, (a5 & 1) != 0);
      v18 = (char)v42;
      v21 = 0LL;
    }
    v22 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v22 & 1) != 0 )
      v23 = *(_QWORD *)((v22 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    else
      v23 = v22;
    v43 = v23;
    if ( (v22 & 1) != 0 )
      v22 ^= ((unsigned __int8)v22 ^ (unsigned __int8)(2 * v18)) & 2;
    Alignment = a2;
    v25 = 0LL;
    do
    {
      v26 = Alignment->NetBufferListInfo[26];
      do
      {
        if ( Alignment->NetBufferListInfo[26] != v26 )
          break;
        if ( !v26 && !Alignment->SourceHandle )
        {
          v33 = ndisSourceHandleFromOwner(32LL, Alignment, v23);
          Alignment->SourceHandle = (void *)v33;
        }
        if ( ((unsigned __int8)v26 & 4) != 0 || (SourceHandle = Alignment->SourceHandle) == 0LL )
        {
          Alignment->NetBufferListInfo[26] = (void *)(v22 | 4);
        }
        else if ( SourceHandle != (void *)v23 || Alignment->ParentNetBufferList )
        {
          ++v6;
          Alignment->NetBufferListInfo[26] = (void *)v22;
        }
        else
        {
          ++v25;
          Alignment->NetBufferListInfo[26] = (void *)24;
          ++v6;
        }
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      v42 = Alignment;
      if ( ((unsigned __int8)v26 & 1) != 0 )
      {
        ndisNblTrackerUpdateOwnershipCount(v26, v21 - v6, &v45, &v46);
        Alignment = v42;
        v23 = v43;
      }
      v21 = v6;
    }
    while ( Alignment );
    v28 = v6 - v25;
    v16 = a5;
    if ( (v22 & 1) != 0 && v28 )
    {
      v29 = v45;
      if ( !v45 && !v46 )
      {
        v29 = KeGetCurrentIrql() == 2;
        v45 = v29;
      }
      v7 = v48;
      v8 = 2;
      v30 = (v22 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v22 >> 1) & 1);
      v9 = v47;
      if ( v29 )
      {
        LOWORD(v12) = v41.DatapathEventsMask;
        v31 = (_QWORD *)(*(_QWORD *)(v30 + 40) + (KeGetPcr()->Prcb.Number << 12));
        *v31 += v28;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 48), v28);
        LOWORD(v12) = v41.DatapathEventsMask;
      }
    }
    else
    {
      v7 = v48;
      v8 = 2;
      v9 = v47;
    }
    v15 = 1LL;
  }
  if ( (v12 & 0x3014) != 0 || (v41.DatapathCyclesMask & 8) != 0 )
  {
    if ( (v16 & 1) == 0 )
    {
      v34 = KfRaiseIrql(2u);
      v7 = v48;
      v8 = v34;
      v39 = v34;
      v15 = 1LL;
    }
    if ( (v12 & 4) != 0 )
    {
      ndisPcwAddEvent(&v41, 2uLL, 1uLL);
      LOWORD(v12) = v41.DatapathEventsMask;
      v15 = (unsigned int)(v35 - 1);
    }
    if ( (v12 & 0x10) != 0 )
    {
      ndisPcwAddEvent(&v41, 4uLL, v7);
      LOWORD(v12) = v41.DatapathEventsMask;
      v15 = (unsigned int)(v36 - 3);
    }
    if ( (v16 & 2) != 0 )
    {
      if ( (v12 & 0x1000) != 0 )
      {
        ndisPcwAddEvent(&v41, 0x1DuLL, v15);
        LOWORD(v12) = v41.DatapathEventsMask;
      }
      if ( (v12 & 0x2000) != 0 )
        ndisPcwAddEvent(&v41, 0x1EuLL, v7);
    }
    if ( (v41.DatapathCyclesMask & 8) != 0 )
    {
      ndisPcwStartCycleCounter(&v41, 3u);
    }
    else if ( v8 != 2 )
    {
      KeLowerIrql(v8);
      v7 = v48;
    }
  }
  ((void (__fastcall *)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, int))NdisBindingHandle[68])(
    NdisBindingHandle[69],
    a2,
    v9,
    v7,
    v16);
  if ( (v41.DatapathCyclesMask & 8) != 0 )
  {
    ndisPcwEndCycleCounter(&v41, 3u, 0x10uLL);
    if ( v39 != 2 )
      KeLowerIrql(v39);
  }
  if ( (v16 & 2) != 0 && ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      a2,
      (struct NDIS_NBL_TRACKER_HANDLE__ *)NdisBindingHandle[85],
      *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v5 + 2544),
      NdisNblTrackerEvent_ProtocolReturnedResources,
      v16 & 1);
  if ( (_BYTE)dword_1C008AE58 )
    WmiGetClock(0LL, 0LL, v17);
  if ( v40 )
  {
    v37 = *((_WORD *)NdisBindingHandle + 126);
    if ( v37 == -8826 || v37 == 1544 || v37 == 8 )
    {
      v38 = WmiGetClock(0LL, 0LL, v17);
      ndisTraceRcv(v5, v38 - v44, v48);
    }
  }
}

/*
 * XREFs of ndisMIndicateNetBufferListsToOpen @ 0x1C00094A0
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C00090E0 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001C1B0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisIndicateAllNetBufferLists @ 0x1C0022618 (ndisIndicateAllNetBufferLists.c)
 *     ndisIndicateToPmodeOpens @ 0x1C0022E84 (ndisIndicateToPmodeOpens.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0061D5C (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00630C0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C0063AB0 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002A60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisReturnNetBufferLists @ 0x1C000A000 (NdisReturnNetBufferLists.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C000C614 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0022E70 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00231B0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00231FC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ndisTraceRcv @ 0x1C004A900 (ndisTraceRcv.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C00649F8 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

void __fastcall ndisMIndicateNetBufferListsToOpen(
        _QWORD *NdisBindingHandle,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // rdi
  __int64 v6; // r15
  unsigned int v7; // r11d
  KIRQL v8; // r9
  unsigned int v9; // ebx
  unsigned int v12; // r12d
  bool v13; // cl
  unsigned int Flags; // edx
  unsigned __int64 v15; // rax
  int v16; // r13d
  char v17; // r9
  unsigned __int64 v18; // rbx
  unsigned int v19; // r8d
  __int64 v20; // r11
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r8
  struct _NET_BUFFER_LIST *Alignment; // rdx
  __int64 v24; // r13
  void *v25; // r10
  void *SourceHandle; // rax
  unsigned __int64 v27; // r15
  bool v28; // cl
  unsigned __int64 v29; // rdx
  _QWORD *v30; // rcx
  __int64 Clock; // rax
  __int64 v32; // rax
  KIRQL v33; // al
  int v34; // edx
  int v35; // edx
  __int16 v36; // ax
  __int64 v37; // rax
  char v38; // [rsp+30h] [rbp-50h]
  KIRQL v39; // [rsp+31h] [rbp-4Fh]
  struct NDIS_PCW_CONTEXT v40; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v41; // [rsp+50h] [rbp-30h]
  struct _NET_BUFFER_LIST *v42; // [rsp+58h] [rbp-28h]
  __int64 v43; // [rsp+60h] [rbp-20h]
  bool v44; // [rsp+C0h] [rbp+40h] BYREF
  char v45; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v46; // [rsp+D0h] [rbp+50h]
  unsigned int v47; // [rsp+D8h] [rbp+58h]

  v47 = a4;
  v46 = a3;
  v5 = NdisBindingHandle[2];
  v6 = 0LL;
  v7 = a4;
  v8 = 2;
  v9 = a3;
  v43 = 0LL;
  v12 = *(_DWORD *)(v5 + 48);
  v40.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
  v40.DatapathCyclesMask = *(_DWORD *)(v5 + 80);
  v40.DatapathEventsMask = v12;
  v40.CurrentCpu = -1;
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
    goto LABEL_5;
LABEL_3:
  if ( *(_BYTE *)(v5 + 1998) && !*((_DWORD *)NdisBindingHandle + 108)
    || (NdisBindingHandle[54] & 0x10000) != 0 && !v13 && (Flags & 0x80u) != 0 )
  {
LABEL_5:
    if ( (a5 & 2) == 0 )
    {
      if ( (a5 & 1) != 0 )
        LODWORD(v6) = 1;
      NdisReturnNetBufferLists(NdisBindingHandle, a2, v6);
    }
    return;
  }
  if ( (_BYTE)dword_1C00870D8 )
  {
    v38 = 1;
    Clock = WmiGetClock(0LL, 0LL);
    v7 = v47;
    v8 = 2;
    v43 = Clock;
  }
  else
  {
    v38 = 0;
  }
  v15 = 1LL;
  v16 = a5;
  if ( ndisNblTrackerMode )
  {
    v17 = ndisNblTrackerEpoch;
    v18 = NdisBindingHandle[85];
    v19 = 133;
    LODWORD(v42) = ndisNblTrackerEpoch;
    if ( (a5 & 2) == 0 )
      v19 = 132;
    v41 = 0LL;
    v20 = 0LL;
    v45 = 0;
    v44 = (a5 & 1) != 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(a2, (struct NDIS_NBL_TRACKER_HANDLE__ *)0x20, v19, (void *)v18, (a5 & 1) != 0);
      v17 = (char)v42;
      v20 = 0LL;
    }
    v21 = v18 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v21 & 1) != 0 )
      v22 = *(_QWORD *)((v21 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    else
      v22 = v21;
    v41 = v22;
    if ( (v21 & 1) != 0 )
      v21 ^= ((unsigned __int8)v21 ^ (unsigned __int8)(2 * v17)) & 2;
    Alignment = a2;
    v24 = 0LL;
    do
    {
      v25 = Alignment->NetBufferListInfo[26];
      do
      {
        if ( Alignment->NetBufferListInfo[26] != v25 )
          break;
        if ( !v25 && !Alignment->SourceHandle )
        {
          v32 = ndisSourceHandleFromOwner(32LL, Alignment, v22);
          Alignment->SourceHandle = (void *)v32;
        }
        if ( ((unsigned __int8)v25 & 4) != 0 || (SourceHandle = Alignment->SourceHandle) == 0LL )
        {
          Alignment->NetBufferListInfo[26] = (void *)(v21 | 4);
        }
        else if ( SourceHandle != (void *)v22 || Alignment->ParentNetBufferList )
        {
          ++v6;
          Alignment->NetBufferListInfo[26] = (void *)v21;
        }
        else
        {
          ++v24;
          Alignment->NetBufferListInfo[26] = (void *)24;
          ++v6;
        }
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      v42 = Alignment;
      if ( ((unsigned __int8)v25 & 1) != 0 )
      {
        ndisNblTrackerUpdateOwnershipCount(v25, v20 - v6, &v44, &v45);
        Alignment = v42;
        v22 = v41;
      }
      v20 = v6;
    }
    while ( Alignment );
    v27 = v6 - v24;
    v16 = a5;
    if ( (v21 & 1) != 0 && v27 )
    {
      v28 = v44;
      if ( !v44 && !v45 )
      {
        v28 = KeGetCurrentIrql() == 2;
        v44 = v28;
      }
      v7 = v47;
      v8 = 2;
      v29 = (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v21 >> 1) & 1);
      v9 = v46;
      if ( v28 )
      {
        LOWORD(v12) = v40.DatapathEventsMask;
        v30 = (_QWORD *)(*(_QWORD *)(v29 + 40) + (KeGetPcr()->Prcb.Number << 12));
        *v30 += v27;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 48), v27);
        LOWORD(v12) = v40.DatapathEventsMask;
      }
    }
    else
    {
      v7 = v47;
      v8 = 2;
      v9 = v46;
    }
    v15 = 1LL;
  }
  if ( (v12 & 0x3014) != 0 || (v40.DatapathCyclesMask & 8) != 0 )
  {
    if ( (v16 & 1) == 0 )
    {
      v33 = KfRaiseIrql(2u);
      v7 = v47;
      v8 = v33;
      v39 = v33;
      v15 = 1LL;
    }
    if ( (v12 & 4) != 0 )
    {
      ndisPcwAddEvent(&v40, 2uLL, 1uLL);
      LOWORD(v12) = v40.DatapathEventsMask;
      v15 = (unsigned int)(v34 - 1);
    }
    if ( (v12 & 0x10) != 0 )
    {
      ndisPcwAddEvent(&v40, 4uLL, v7);
      LOWORD(v12) = v40.DatapathEventsMask;
      v15 = (unsigned int)(v35 - 3);
    }
    if ( (v16 & 2) != 0 )
    {
      if ( (v12 & 0x1000) != 0 )
      {
        ndisPcwAddEvent(&v40, 0x1DuLL, v15);
        LOWORD(v12) = v40.DatapathEventsMask;
      }
      if ( (v12 & 0x2000) != 0 )
        ndisPcwAddEvent(&v40, 0x1EuLL, v7);
    }
    if ( (v40.DatapathCyclesMask & 8) != 0 )
    {
      ndisPcwStartCycleCounter(&v40, 3u);
    }
    else if ( v8 != 2 )
    {
      KeLowerIrql(v8);
      v7 = v47;
    }
  }
  ((void (__fastcall *)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, int))NdisBindingHandle[68])(
    NdisBindingHandle[69],
    a2,
    v9,
    v7,
    v16);
  if ( (v40.DatapathCyclesMask & 8) != 0 )
  {
    ndisPcwEndCycleCounter(&v40, 3u, 0x10uLL);
    if ( v39 != 2 )
      KeLowerIrql(v39);
  }
  if ( (v16 & 2) != 0 && ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      a2,
      (struct NDIS_NBL_TRACKER_HANDLE__ *)NdisBindingHandle[85],
      *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v5 + 2544),
      0x88u,
      v16 & 1);
  if ( (_BYTE)dword_1C00870D8 )
    WmiGetClock(0LL, 0LL);
  if ( v38 )
  {
    v36 = *((_WORD *)NdisBindingHandle + 126);
    if ( v36 == -8826 || v36 == 1544 || v36 == 8 )
    {
      v37 = WmiGetClock(0LL, 0LL);
      ndisTraceRcv(v5, v37 - v43, v47);
    }
  }
}

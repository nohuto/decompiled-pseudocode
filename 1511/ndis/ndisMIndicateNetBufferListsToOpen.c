/*
 * XREFs of ndisMIndicateNetBufferListsToOpen @ 0x1C00029D0
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001380 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001AE0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisIndicateToPmodeOpens @ 0x1C0002178 (ndisIndicateToPmodeOpens.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002240 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0021200 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00625A8 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00040C0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C000452C (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011DA0 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0011DDC (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026A14 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ndisTraceRcv @ 0x1C004B1A0 (ndisTraceRcv.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0063588 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

void __fastcall ndisMIndicateNetBufferListsToOpen(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // r13
  struct _NET_BUFFER_LIST *v6; // r15
  unsigned int Flags; // r8d
  __int64 v8; // rsi
  bool v9; // zf
  _QWORD *v10; // rbx
  char v11; // cl
  unsigned int v12; // r12d
  KIRQL v13; // r14
  unsigned int v14; // eax
  __int64 v15; // r13
  unsigned __int64 v16; // rbx
  __int64 v17; // r14
  char v18; // di
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r15
  _SLIST_HEADER *v23; // rdi
  unsigned __int64 Alignment; // r10
  unsigned __int64 Region; // rax
  unsigned __int64 v26; // rsi
  bool v27; // cl
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rcx
  int v30; // edi
  unsigned __int64 v31; // r9
  unsigned int v32; // esi
  __int16 v33; // ax
  __int64 v34; // rax
  bool v35; // [rsp+30h] [rbp-40h] BYREF
  char v36; // [rsp+31h] [rbp-3Fh] BYREF
  char v37; // [rsp+32h] [rbp-3Eh]
  __int64 v38; // [rsp+38h] [rbp-38h]
  __int64 Clock; // [rsp+40h] [rbp-30h]
  struct NDIS_PCW_CONTEXT v40; // [rsp+48h] [rbp-28h] BYREF

  v5 = a1[2];
  v6 = a2;
  Flags = a2->Flags;
  v8 = 0LL;
  v9 = a2->SourceHandle == a1;
  v10 = a1;
  v38 = v5;
  v11 = v9;
  v12 = *(_DWORD *)(v5 + 48);
  v13 = 2;
  v40.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
  v9 = (a2->NblFlags & 0x8000) == 0;
  v14 = *(_DWORD *)(v5 + 80);
  Clock = 0LL;
  v40.DatapathEventsMask = v12;
  v40.DatapathCyclesMask = v14;
  v40.CurrentCpu = -1;
  if ( v9 || a2->NetBufferListInfo[5] != v10 )
  {
    if ( v11 != 1 )
      goto LABEL_6;
  }
  else
  {
    v11 = 1;
  }
  if ( (Flags & 0x200) == 0 )
    goto LABEL_11;
LABEL_6:
  if ( *(_BYTE *)(v5 + 1998) && !*((_DWORD *)v10 + 108) || (v10[54] & 0x10000) != 0 && !v11 && (Flags & 0x80u) != 0 )
  {
LABEL_11:
    if ( (a5 & 2) == 0 )
    {
      if ( (a5 & 1) != 0 )
        LODWORD(v8) = 1;
      NdisReturnNetBufferLists(v10, a2, v8);
    }
    return;
  }
  if ( (_BYTE)dword_1C0085018 )
  {
    v37 = 1;
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v37 = 0;
  }
  if ( ndisNblTrackerMode )
  {
    v15 = 0LL;
    v16 = v10[85];
    v17 = 0LL;
    v18 = ndisNblTrackerEpoch;
    v19 = a5 & 1;
    v36 = 0;
    v20 = ((unsigned __int8)a5 >> 1) & 1 | 0x84u;
    v35 = a5 & 1;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(v6, (struct NDIS_NBL_TRACKER_HANDLE__ *)0x20, v20, (void *)v16, v19);
    v21 = v16 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v21 & 1) != 0 )
      v22 = *(_QWORD *)((v21 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    else
      v22 = v21;
    if ( (v21 & 1) != 0 )
      v21 ^= ((unsigned __int8)v21 ^ (unsigned __int8)(2 * v18)) & 2;
    v23 = (_SLIST_HEADER *)a2;
    do
    {
      Alignment = v23[22].Alignment;
      do
      {
        if ( v23[22].Alignment != Alignment )
          break;
        if ( !Alignment && !v23[7].Region )
          v23[7].Region = ndisSourceHandleFromOwner(32LL, v19, v20);
        if ( (Alignment & 4) != 0 || (Region = v23[7].Region) == 0 )
        {
          v23[22].Alignment = v21 | 4;
        }
        else if ( Region != v22 || v23[1].Region )
        {
          ++v8;
          v23[22].Alignment = v21;
        }
        else
        {
          ++v17;
          v23[22].Alignment = 24LL;
          ++v8;
        }
        v23 = (_SLIST_HEADER *)v23->Alignment;
      }
      while ( v23 );
      if ( (Alignment & 1) != 0 )
        ndisNblTrackerUpdateOwnershipCount(Alignment, v15 - v8, &v35, &v36);
      v15 = v8;
    }
    while ( v23 );
    v26 = v8 - v17;
    if ( (v21 & 1) != 0 && v26 )
    {
      v27 = v35;
      if ( !v35 && !v36 )
      {
        v27 = KeGetCurrentIrql() == 2;
        v35 = v27;
      }
      v6 = a2;
      v5 = v38;
      v13 = 2;
      v28 = (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v21 >> 1) & 1);
      v10 = a1;
      if ( v27 )
      {
        LOWORD(v12) = v40.DatapathEventsMask;
        v29 = (_QWORD *)(*(_QWORD *)(v28 + 40) + (KeGetPcr()->Prcb.Number << 12));
        *v29 += v26;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 48), v26);
        LOWORD(v12) = v40.DatapathEventsMask;
      }
    }
    else
    {
      v5 = v38;
      v13 = 2;
      v6 = a2;
      v10 = a1;
    }
  }
  if ( (v12 & 0x3014) != 0 || (v40.DatapathCyclesMask & 8) != 0 )
  {
    v30 = a5;
    if ( (a5 & 1) == 0 )
      v13 = KfRaiseIrql(2u);
    v31 = 1LL;
    if ( (v12 & 4) != 0 )
    {
      ndisPcwAddEvent(&v40, 2uLL, 1uLL);
      LOWORD(v12) = v40.DatapathEventsMask;
    }
    v32 = a4;
    if ( (v12 & 0x10) != 0 )
    {
      ndisPcwAddEvent(&v40, 4uLL, a4);
      LOWORD(v12) = v40.DatapathEventsMask;
    }
    if ( (a5 & 2) != 0 )
    {
      if ( (v12 & 0x1000) != 0 )
      {
        ndisPcwAddEvent(&v40, 0x1DuLL, v31);
        LOWORD(v12) = v40.DatapathEventsMask;
      }
      if ( (v12 & 0x2000) != 0 )
        ndisPcwAddEvent(&v40, 0x1EuLL, a4);
    }
    if ( (v40.DatapathCyclesMask & 8) != 0 )
    {
      ndisPcwStartCycleCounter(&v40, 3u);
    }
    else if ( v13 != 2 )
    {
      KeLowerIrql(v13);
    }
  }
  else
  {
    v30 = a5;
    v32 = a4;
  }
  ((void (__fastcall *)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, int))v10[68])(v10[69], v6, a3, v32, v30);
  if ( (v40.DatapathCyclesMask & 8) != 0 )
  {
    ndisPcwEndCycleCounter(&v40, 3u, 0x10uLL);
    if ( v13 != 2 )
      KeLowerIrql(v13);
  }
  if ( (v30 & 2) != 0 && ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      v6,
      (struct NDIS_NBL_TRACKER_HANDLE__ *)v10[85],
      *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v5 + 2544),
      NdisNblTrackerEvent_ProtocolReturnedResources,
      v30 & 1);
  if ( (_BYTE)dword_1C0085018 )
    WmiGetClock(0LL, 0LL);
  if ( v37 )
  {
    v33 = *((_WORD *)v10 + 126);
    if ( v33 == -8826 || v33 == 1544 || v33 == 8 )
    {
      v34 = WmiGetClock(0LL, 0LL);
      ndisTraceRcv(v5, v34 - Clock, v32);
    }
  }
}

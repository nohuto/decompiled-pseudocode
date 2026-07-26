/*
 * XREFs of ndisMSendNBLToMiniportInternal @ 0x1C000DB00
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0004690 (NdisSendNetBufferLists.c)
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0004C40 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisMSendNBLToMiniport @ 0x1C000DAE0 (ndisMSendNBLToMiniport.c)
 *     ndisReplaySendNbls @ 0x1C006BD14 (ndisReplaySendNbls.c)
 * Callees:
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0010CD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0010D10 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ndisSetBusyAsync @ 0x1C0010E00 (ndisSetBusyAsync.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026D64 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ndisMLoopbackNetBufferLists @ 0x1C0055458 (ndisMLoopbackNetBufferLists.c)
 */

void __fastcall ndisMSendNBLToMiniportInternal(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  struct _NET_BUFFER_LIST *v5; // r14
  KIRQL v7; // bl
  __int64 v10; // r13
  void (__fastcall *v11)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r15
  unsigned __int64 v12; // rbx
  unsigned int v13; // ecx
  char v14; // dl
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r12
  __int64 v18; // r11
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r10
  char v21; // r15
  unsigned __int64 v22; // rdx
  void *SourceHandle; // rax
  unsigned __int64 v24; // r9
  char v25; // cl
  unsigned __int64 v26; // r8
  _QWORD *v27; // rcx
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  _SLIST_HEADER *Alignment; // rax
  char v33; // [rsp+40h] [rbp-68h]
  char v34; // [rsp+44h] [rbp-64h]
  void (__fastcall *v35)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+48h] [rbp-60h]
  struct NDIS_PCW_CONTEXT v36; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int8 v37; // [rsp+B0h] [rbp+8h]
  struct _NET_BUFFER_LIST *v38; // [rsp+B8h] [rbp+10h] BYREF

  v38 = a2;
  v5 = a2;
  v36.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  v7 = 2;
  v10 = *(_QWORD *)(a1 + 3816);
  v36.DatapathEventsMask = *(_DWORD *)(a1 + 48);
  v11 = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))(v10 + 184);
  v35 = v11;
  v36.DatapathCyclesMask = *(_DWORD *)(a1 + 80);
  v36.CurrentCpu = -1;
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_qq(42LL, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, a1, a2);
  if ( *(_DWORD *)(a1 + 1836)
    || (!*(_BYTE *)(a1 + 91) || *(_WORD *)(a1 + 1820) <= 1u && !*(_BYTE *)(a1 + 1999))
    && (a4 & 2) == 0
    && (*(_DWORD *)(a1 + 120) & 0x4000) == 0
    || (ndisMLoopbackNetBufferLists(a1, (_DWORD)v5, a3, a4, (__int64)&v38), (v5 = v38) != 0LL) )
  {
    if ( a5 || !*(_QWORD *)(a1 + 4512) )
      goto LABEL_9;
    v31 = 0LL;
    Alignment = (_SLIST_HEADER *)v5;
    if ( v5 )
    {
      do
      {
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        v31 = (unsigned int)(v31 + 1);
      }
      while ( Alignment );
    }
    if ( (unsigned __int8)ndisSetBusyAsync(a1, v31, 52LL, v5, a3) )
    {
LABEL_9:
      if ( ndisNblTrackerMode )
      {
        v12 = *(_QWORD *)(a1 + 4136);
        v13 = (a4 & 1) != 0;
        v14 = ndisNblTrackerEpoch;
        v15 = 0LL;
        v34 = ndisNblTrackerEpoch;
        v16 = (unsigned __int8)v13;
        v33 = 0;
        LOBYTE(v16) = (a4 & 1) != 0;
        v17 = 0LL;
        v18 = 0LL;
        v37 = v16;
        if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
        {
          ndisNblTrackerRecordEvent(v5, 0LL, 0x92u, (void *)v12, v13);
          v14 = v34;
          v15 = 0LL;
          v16 = v37;
          v18 = 0LL;
        }
        v19 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (v19 & 1) != 0 )
          v20 = *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        else
          v20 = v19;
        if ( (v19 & 1) != 0 )
          v19 ^= ((unsigned __int8)v19 ^ (unsigned __int8)(2 * v14)) & 2;
        if ( v5 )
        {
          v21 = 0;
          do
          {
            v22 = (unsigned __int64)v5->NetBufferListInfo[26];
            do
            {
              if ( v5->NetBufferListInfo[26] != (void *)v22 )
                break;
              if ( !v22 && !v5->SourceHandle )
                v5->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL, 0LL, v16);
              if ( (v22 & 4) != 0 || (SourceHandle = v5->SourceHandle) == 0LL )
              {
                v5->NetBufferListInfo[26] = (void *)(v19 | 4);
              }
              else if ( SourceHandle != (void *)v20 || v5->ParentNetBufferList )
              {
                ++v17;
                v5->NetBufferListInfo[26] = (void *)v19;
              }
              else
              {
                ++v18;
                v5->NetBufferListInfo[26] = (void *)24;
                ++v17;
              }
              v5 = (struct _NET_BUFFER_LIST *)v5->Link.Alignment;
            }
            while ( v5 );
            v24 = v15 - v17;
            if ( (v22 & 1) != 0 && v24 )
            {
              if ( (_BYTE)v16 || v21 )
              {
                v25 = v37;
              }
              else
              {
                v21 = 1;
                if ( KeGetCurrentIrql() == 2 )
                {
                  v25 = 1;
                  v37 = 1;
                }
                else
                {
                  v25 = 0;
                  v37 = 0;
                }
              }
              v26 = 16 * ((v22 >> 1) & 1) + (v22 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
              if ( v25 )
              {
                v27 = (_QWORD *)(*(_QWORD *)v26 + (KeGetPcr()->Prcb.Number << 12));
                *v27 += v24;
              }
              else
              {
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 8), v24);
              }
              v16 = v37;
            }
            v15 = v17;
          }
          while ( v5 );
          v5 = v38;
          v33 = v21;
          v11 = v35;
        }
        v28 = v17 - v18;
        if ( (v19 & 1) != 0 && v28 )
        {
          if ( !(_BYTE)v16 && !v33 )
            LOBYTE(v16) = KeGetCurrentIrql() == 2;
          v29 = (v19 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v19 >> 1) & 1);
          v7 = 2;
          if ( (_BYTE)v16 )
          {
            v5 = v38;
            v30 = (_QWORD *)(*(_QWORD *)(v29 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v30 += v28;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 48), v28);
            v5 = v38;
          }
        }
        else
        {
          v7 = 2;
        }
      }
      if ( SLOBYTE(v36.DatapathCyclesMask) < 0 )
      {
        if ( (a4 & 1) == 0 )
          v7 = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v36, 7u);
      }
      if ( ndisVerifierNdisDispatch && (*(_BYTE *)(v10 + 26) & 2) != 0 )
        ndisVerifierNdisDispatch->NdisMiniportSendNetBufferListsHandler(
          *(void **)(a1 + 24),
          v5,
          a3,
          a4,
          (void *)a1,
          *(void **)(a1 + 5024),
          v11);
      else
        v11(*(void **)(a1 + 24), v5, a3, a4);
      if ( SLOBYTE(v36.DatapathCyclesMask) < 0 )
      {
        ndisPcwEndCycleCounter(&v36, 7u, 0x14uLL);
        if ( v7 != 2 )
          KeLowerIrql(v7);
      }
    }
  }
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_qq(43LL, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, a1, v5);
}

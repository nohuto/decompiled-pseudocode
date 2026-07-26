/*
 * XREFs of ndisMSendNBLToMiniport @ 0x1C000E0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011DA0 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0011DDC (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ndisSetBusyAsync @ 0x1C0025818 (ndisSetBusyAsync.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     ndisMLoopbackNetBufferLists @ 0x1C0026550 (ndisMLoopbackNetBufferLists.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026A14 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMSendNBLToMiniport(__int64 a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, unsigned int a4)
{
  struct _NET_BUFFER_LIST *v4; // r14
  KIRQL v6; // bl
  __int64 v9; // r13
  unsigned int v10; // eax
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
  struct _NET_BUFFER_LIST *v34; // [rsp+48h] [rbp-60h] BYREF
  void (__fastcall *v35)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+50h] [rbp-58h]
  struct NDIS_PCW_CONTEXT v36; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int8 v37; // [rsp+B0h] [rbp+8h]
  char v38; // [rsp+B8h] [rbp+10h]

  v4 = a2;
  v36.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  v6 = 2;
  v9 = *(_QWORD *)(a1 + 3816);
  v36.DatapathEventsMask = *(_DWORD *)(a1 + 48);
  v10 = *(_DWORD *)(a1 + 80);
  v11 = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))(v9 + 184);
  v35 = v11;
  v34 = a2;
  v36.DatapathCyclesMask = v10;
  v36.CurrentCpu = -1;
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qq(42LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2);
  if ( *(_DWORD *)(a1 + 1836)
    || (!*(_BYTE *)(a1 + 91) || *(_WORD *)(a1 + 1820) <= 1u && !*(_BYTE *)(a1 + 1999))
    && (a4 & 2) == 0
    && (*(_DWORD *)(a1 + 120) & 0x4000) == 0
    || (ndisMLoopbackNetBufferLists(a1, (_DWORD)v4, a3, a4, (__int64)&v34), (v4 = v34) != 0LL) )
  {
    if ( !*(_QWORD *)(a1 + 4512) )
      goto LABEL_8;
    v31 = 0LL;
    Alignment = (_SLIST_HEADER *)v4;
    if ( v4 )
    {
      do
      {
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        v31 = (unsigned int)(v31 + 1);
      }
      while ( Alignment );
    }
    if ( (unsigned __int8)ndisSetBusyAsync(a1, v31, 52LL, v4, a3) )
    {
LABEL_8:
      if ( ndisNblTrackerMode )
      {
        v12 = *(_QWORD *)(a1 + 4136);
        v13 = (a4 & 1) != 0;
        v14 = ndisNblTrackerEpoch;
        v15 = 0LL;
        v33 = ndisNblTrackerEpoch;
        v16 = (unsigned __int8)v13;
        v38 = 0;
        LOBYTE(v16) = (a4 & 1) != 0;
        v17 = 0LL;
        v18 = 0LL;
        v37 = v16;
        if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
        {
          ndisNblTrackerRecordEvent(v4, 0LL, 0x92u, (void *)v12, v13);
          v14 = v33;
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
        if ( v4 )
        {
          v21 = 0;
          do
          {
            v22 = (unsigned __int64)v4->NetBufferListInfo[26];
            do
            {
              if ( v4->NetBufferListInfo[26] != (void *)v22 )
                break;
              if ( !v22 && !v4->SourceHandle )
                v4->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL, 0LL, v16);
              if ( (v22 & 4) != 0 || (SourceHandle = v4->SourceHandle) == 0LL )
              {
                v4->NetBufferListInfo[26] = (void *)(v19 | 4);
              }
              else if ( SourceHandle != (void *)v20 || v4->ParentNetBufferList )
              {
                ++v17;
                v4->NetBufferListInfo[26] = (void *)v19;
              }
              else
              {
                ++v18;
                v4->NetBufferListInfo[26] = (void *)24;
                ++v17;
              }
              v4 = (struct _NET_BUFFER_LIST *)v4->Link.Alignment;
            }
            while ( v4 );
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
          while ( v4 );
          v4 = v34;
          v38 = v21;
          v11 = v35;
        }
        v28 = v17 - v18;
        if ( (v19 & 1) != 0 && v28 )
        {
          if ( !(_BYTE)v16 && !v38 )
            LOBYTE(v16) = KeGetCurrentIrql() == 2;
          v29 = (v19 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v19 >> 1) & 1);
          v6 = 2;
          if ( (_BYTE)v16 )
          {
            v4 = v34;
            v30 = (_QWORD *)(*(_QWORD *)(v29 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v30 += v28;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 48), v28);
            v4 = v34;
          }
        }
        else
        {
          v6 = 2;
        }
      }
      if ( SLOBYTE(v36.DatapathCyclesMask) < 0 )
      {
        if ( (a4 & 1) == 0 )
          v6 = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v36, 7u);
      }
      if ( ndisVerifierNdisDispatch && (*(_BYTE *)(v9 + 26) & 2) != 0 )
        ndisVerifierNdisDispatch->NdisMiniportSendNetBufferListsHandler(
          *(void **)(a1 + 24),
          v4,
          a3,
          a4,
          (void *)a1,
          *(void **)(a1 + 5024),
          v11);
      else
        v11(*(void **)(a1 + 24), v4, a3, a4);
      if ( SLOBYTE(v36.DatapathCyclesMask) < 0 )
      {
        ndisPcwEndCycleCounter(&v36, 7u, 0x14uLL);
        if ( v6 != 2 )
          KeLowerIrql(v6);
      }
    }
  }
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qq(43LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, v4);
}

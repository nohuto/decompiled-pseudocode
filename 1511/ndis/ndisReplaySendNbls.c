/*
 * XREFs of ndisReplaySendNbls @ 0x1C0066B90
 * Callers:
 *     ndisSelectiveSuspendResumeOperations @ 0x1C00678CC (ndisSelectiveSuspendResumeOperations.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00040C0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011DA0 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0011DDC (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ndisSetBusyAsync @ 0x1C0025818 (ndisSetBusyAsync.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     ndisMLoopbackNetBufferLists @ 0x1C0026550 (ndisMLoopbackNetBufferLists.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026A14 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisReplaySendNbls(__int64 a1, struct _NET_BUFFER_LIST *a2)
{
  struct _NET_BUFFER_LIST *v2; // r15
  __int64 v3; // r14
  unsigned int v4; // r12d
  _NET_BUFFER_LIST *v5; // rsi
  _SLIST_HEADER *v6; // rdi
  unsigned int Scratch; // eax
  KIRQL v8; // di
  __int64 v9; // r13
  void (__fastcall *v10)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r12
  unsigned int v11; // eax
  _SLIST_HEADER *Alignment; // rax
  int v13; // edx
  unsigned __int64 v14; // rdi
  __int64 v15; // r15
  char v16; // r12
  __int64 v17; // r13
  __int64 v18; // r11
  bool v19; // r9
  unsigned __int64 v20; // rdi
  __int64 v21; // r8
  unsigned __int64 v22; // r10
  char v23; // r14
  unsigned __int64 v24; // rdx
  void *SourceHandle; // rax
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  _QWORD *v30; // rcx
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  __int64 v36; // r13
  KIRQL v37; // di
  _NDIS_PCW_DATA_BLOCK *v38; // rax
  void (__fastcall *v39)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r15
  _SLIST_HEADER *v40; // rax
  int v41; // edx
  char v42; // dl
  __int64 v43; // r15
  unsigned __int64 v44; // rdi
  __int64 v45; // r12
  __int64 v46; // r10
  bool v47; // r13
  char v48; // r9
  unsigned __int64 v49; // rdi
  __int64 v50; // r8
  unsigned __int64 v51; // r11
  unsigned __int64 v52; // rdx
  void *v53; // rax
  unsigned __int64 v54; // r12
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rdx
  __int64 v57; // r8
  _QWORD *v58; // rcx
  unsigned __int64 v59; // r15
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rdi
  __int64 v62; // rdx
  bool v63; // zf
  _QWORD *v64; // rcx
  unsigned int v65; // [rsp+40h] [rbp-59h]
  void (__fastcall *v66)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+48h] [rbp-51h]
  __int64 v67; // [rsp+48h] [rbp-51h]
  _NET_BUFFER_LIST *v68; // [rsp+50h] [rbp-49h] BYREF
  _NET_BUFFER_LIST *v69; // [rsp+58h] [rbp-41h] BYREF
  __int64 v70; // [rsp+60h] [rbp-39h]
  unsigned int v71; // [rsp+68h] [rbp-31h]
  struct NDIS_PCW_CONTEXT v72; // [rsp+70h] [rbp-29h] BYREF
  struct NDIS_PCW_CONTEXT v73; // [rsp+88h] [rbp-11h] BYREF
  struct _NET_BUFFER_LIST *v75; // [rsp+108h] [rbp+6Fh]
  char v76; // [rsp+110h] [rbp+77h]
  char v77; // [rsp+118h] [rbp+7Fh]
  void (__fastcall *v78)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+118h] [rbp+7Fh]

  v75 = a2;
  v2 = a2;
  v3 = a1;
  v4 = 0;
  v65 = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 4136), 0x92u, 0);
  while ( v2 )
  {
    Scratch = (unsigned int)v2->Scratch;
    v71 = Scratch;
    if ( !v5 )
      goto LABEL_76;
    if ( Scratch != v4 )
    {
      v73.CurrentCpu = -1;
      v6->Alignment = 0LL;
      v8 = 2;
      v9 = *(_QWORD *)(v3 + 3816);
      v73.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v3 + 40);
      v10 = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))(v9 + 184);
      v73.DatapathEventsMask = *(_DWORD *)(v3 + 48);
      v11 = *(_DWORD *)(v3 + 80);
      v66 = v10;
      v69 = v5;
      v70 = v9;
      v73.DatapathCyclesMask = v11;
      if ( (unsigned __int8)byte_1C008370A >= 4u )
        WPP_SF_qq(0x2Au, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, v3, v5);
      if ( *(_DWORD *)(v3 + 1836)
        || (!*(_BYTE *)(v3 + 91) || *(_WORD *)(v3 + 1820) <= 1u && !*(_BYTE *)(v3 + 1999))
        && (*(_DWORD *)(v3 + 120) & 0x4000) == 0
        || (ndisMLoopbackNetBufferLists(v3, (__int64 *)v5, v65, 0, &v69), (v5 = v69) != 0LL) )
      {
        if ( !*(_QWORD *)(v3 + 4512) )
          goto LABEL_18;
        Alignment = (_SLIST_HEADER *)v5;
        v13 = 0;
        if ( v5 )
        {
          do
          {
            Alignment = (_SLIST_HEADER *)Alignment->Alignment;
            ++v13;
          }
          while ( Alignment );
        }
        if ( ndisSetBusyAsync(v3, v13, 0x34u, (__int64)v5, v65) )
        {
LABEL_18:
          if ( ndisNblTrackerMode )
          {
            v14 = *(_QWORD *)(v3 + 4136);
            v15 = 0LL;
            v16 = ndisNblTrackerEpoch;
            v17 = 0LL;
            v77 = 0;
            v18 = 0LL;
            v19 = 0;
            if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
            {
              ndisNblTrackerRecordEvent((unsigned __int64)v5, 0LL, 0x92u, v14, 0);
              v19 = 0;
              v18 = 0LL;
            }
            v20 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
            v21 = 1LL;
            if ( (v20 & 1) != 0 )
              v22 = *(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
            else
              v22 = v20;
            if ( (v20 & 1) != 0 )
              v20 ^= ((unsigned __int8)v20 ^ (unsigned __int8)(2 * v16)) & 2;
            if ( v5 )
            {
              v23 = 0;
              do
              {
                v24 = (unsigned __int64)v5->NetBufferListInfo[26];
                do
                {
                  if ( v5->NetBufferListInfo[26] != (void *)v24 )
                    break;
                  if ( !v24 && !v5->SourceHandle )
                    v5->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL);
                  if ( (v24 & 4) != 0 || (SourceHandle = v5->SourceHandle) == 0LL )
                  {
                    v5->NetBufferListInfo[26] = (void *)(v20 | 4);
                  }
                  else if ( SourceHandle != (void *)v22 || v5->ParentNetBufferList )
                  {
                    v15 += v21;
                    v5->NetBufferListInfo[26] = (void *)v20;
                  }
                  else
                  {
                    v18 += v21;
                    v5->NetBufferListInfo[26] = (void *)24;
                    v15 += v21;
                  }
                  v5 = (_NET_BUFFER_LIST *)v5->Link.Alignment;
                }
                while ( v5 );
                v26 = v17 - v15;
                if ( ((unsigned __int8)v24 & (unsigned __int8)v21) != 0 && v26 )
                {
                  if ( !v19 && !v23 )
                  {
                    v23 = v21;
                    v19 = KeGetCurrentIrql() == 2;
                  }
                  v27 = v24;
                  v28 = v24 & 0xFFFFFFFFFFFFFFF8uLL;
                  v29 = 2 * ((v27 >> 1) & 1);
                  if ( v19 )
                  {
                    v30 = (_QWORD *)(*(_QWORD *)(v28 + 8 * v29 + 40) + (KeGetPcr()->Prcb.Number << 12));
                    *v30 += v26;
                  }
                  else
                  {
                    _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 8 * v29 + 48), v26);
                  }
                  v21 = 1LL;
                }
                v17 = v15;
              }
              while ( v5 );
              v5 = v69;
              v77 = v23;
              v3 = a1;
            }
            v31 = v15 - v18;
            if ( ((unsigned __int8)v20 & (unsigned __int8)v21) != 0 && v31 )
            {
              if ( !v19 && !v77 )
                v19 = KeGetCurrentIrql() == 2;
              v9 = v70;
              v32 = v20;
              v10 = v66;
              v33 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
              v34 = 2 * (v21 & (v32 >> 1));
              if ( v19 )
              {
                v35 = (_QWORD *)(*(_QWORD *)(v33 + 8 * v34 + 40) + (KeGetPcr()->Prcb.Number << 12));
                *v35 += v31;
              }
              else
              {
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 8 * v34 + 48), v31);
              }
              v5 = v69;
            }
            else
            {
              v10 = v66;
              v9 = v70;
            }
            v8 = 2;
            v2 = v75;
          }
          if ( SLOBYTE(v73.DatapathCyclesMask) < 0 )
          {
            v8 = KfRaiseIrql(2u);
            ndisPcwStartCycleCounter(&v73);
          }
          if ( ndisVerifierNdisDispatch && (*(_BYTE *)(v9 + 26) & 2) != 0 )
            ndisVerifierNdisDispatch->NdisMiniportSendNetBufferListsHandler(
              *(void **)(v3 + 24),
              v5,
              v65,
              0,
              (void *)v3,
              *(void **)(v3 + 5024),
              v10);
          else
            v10(*(void **)(v3 + 24), v5, v65, 0);
          if ( SLOBYTE(v73.DatapathCyclesMask) < 0 )
          {
            ndisPcwEndCycleCounter(&v73);
            if ( v8 != 2 )
              KeLowerIrql(v8);
          }
        }
      }
      if ( (unsigned __int8)byte_1C008370A >= 4u )
        WPP_SF_qq(0x2Bu, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, v3, v5);
      Scratch = v71;
      v5 = 0LL;
      v4 = v65;
    }
    if ( !v5 )
    {
LABEL_76:
      v5 = v2;
      v65 = Scratch;
      v4 = Scratch;
    }
    v6 = (_SLIST_HEADER *)v2;
    v2 = (struct _NET_BUFFER_LIST *)v2->Link.Alignment;
    v75 = v2;
  }
  v36 = *(_QWORD *)(v3 + 3816);
  v37 = 2;
  v38 = *(_NDIS_PCW_DATA_BLOCK **)(v3 + 40);
  v72.CurrentCpu = -1;
  v72.PcwBlock = v38;
  v39 = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))(v36 + 184);
  v72.DatapathEventsMask = *(_DWORD *)(v3 + 48);
  LODWORD(v38) = *(_DWORD *)(v3 + 80);
  v78 = v39;
  v68 = v5;
  v67 = v36;
  v72.DatapathCyclesMask = (unsigned int)v38;
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qq(0x2Au, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, v3, v5);
  if ( *(_DWORD *)(v3 + 1836)
    || (!*(_BYTE *)(v3 + 91) || *(_WORD *)(v3 + 1820) <= 1u && !*(_BYTE *)(v3 + 1999))
    && (*(_DWORD *)(v3 + 120) & 0x4000) == 0
    || (ndisMLoopbackNetBufferLists(v3, (__int64 *)v5, v4, 0, &v68), (v5 = v68) != 0LL) )
  {
    if ( !*(_QWORD *)(v3 + 4512) )
      goto LABEL_91;
    v40 = (_SLIST_HEADER *)v5;
    v41 = 0;
    if ( v5 )
    {
      do
      {
        v40 = (_SLIST_HEADER *)v40->Alignment;
        ++v41;
      }
      while ( v40 );
    }
    if ( ndisSetBusyAsync(v3, v41, 0x34u, (__int64)v5, v4) )
    {
LABEL_91:
      if ( ndisNblTrackerMode )
      {
        v42 = ndisNblTrackerEpoch;
        v43 = 0LL;
        v44 = *(_QWORD *)(v3 + 4136);
        v45 = 0LL;
        v76 = ndisNblTrackerEpoch;
        v46 = 0LL;
        v47 = 0;
        v48 = 0;
        if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
        {
          ndisNblTrackerRecordEvent((unsigned __int64)v5, 0LL, 0x92u, v44, 0);
          v42 = v76;
          v48 = 0;
          v46 = 0LL;
        }
        v49 = v44 & 0xFFFFFFFFFFFFFFFDuLL;
        v50 = 1LL;
        if ( (v49 & 1) != 0 )
          v51 = *(_QWORD *)((v49 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        else
          v51 = v49;
        if ( (v49 & 1) != 0 )
          v49 ^= ((unsigned __int8)v49 ^ (unsigned __int8)(2 * v42)) & 2;
        if ( v5 )
        {
          do
          {
            v52 = (unsigned __int64)v5->NetBufferListInfo[26];
            do
            {
              if ( v5->NetBufferListInfo[26] != (void *)v52 )
                break;
              if ( !v52 && !v5->SourceHandle )
                v5->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL);
              if ( (v52 & 4) != 0 || (v53 = v5->SourceHandle) == 0LL )
              {
                v5->NetBufferListInfo[26] = (void *)(v49 | 4);
              }
              else if ( v53 != (void *)v51 || v5->ParentNetBufferList )
              {
                v43 += v50;
                v5->NetBufferListInfo[26] = (void *)v49;
              }
              else
              {
                v46 += v50;
                v5->NetBufferListInfo[26] = (void *)24;
                v43 += v50;
              }
              v5 = (_NET_BUFFER_LIST *)v5->Link.Alignment;
            }
            while ( v5 );
            v54 = v45 - v43;
            if ( ((unsigned __int8)v52 & (unsigned __int8)v50) != 0 && v54 )
            {
              if ( !v47 && !v48 )
              {
                v48 = v50;
                v47 = KeGetCurrentIrql() == 2;
              }
              v55 = v52;
              v56 = v52 & 0xFFFFFFFFFFFFFFF8uLL;
              v57 = 2 * ((v55 >> 1) & 1);
              if ( v47 )
              {
                v58 = (_QWORD *)(*(_QWORD *)(v56 + 8 * v57 + 40) + (KeGetPcr()->Prcb.Number << 12));
                *v58 += v54;
              }
              else
              {
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v56 + 8 * v57 + 48), v54);
              }
              v50 = 1LL;
            }
            v45 = v43;
          }
          while ( v5 );
          v5 = v68;
        }
        v59 = v43 - v46;
        if ( ((unsigned __int8)v49 & (unsigned __int8)v50) != 0 && v59 )
        {
          if ( !v47 && !v48 )
            v47 = KeGetCurrentIrql() == 2;
          v60 = v49;
          v61 = v49 & 0xFFFFFFFFFFFFFFF8uLL;
          v62 = 2 * (v50 & (v60 >> 1));
          v63 = !v47;
          v36 = v67;
          if ( v63 )
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v61 + 8 * v62 + 48), v59);
          }
          else
          {
            v64 = (_QWORD *)(*(_QWORD *)(v61 + 8 * v62 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v64 += v59;
          }
          v5 = v68;
        }
        else
        {
          v36 = v67;
        }
        v39 = v78;
        v37 = 2;
      }
      if ( SLOBYTE(v72.DatapathCyclesMask) < 0 )
      {
        v37 = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v72);
      }
      if ( ndisVerifierNdisDispatch && (*(_BYTE *)(v36 + 26) & 2) != 0 )
        ndisVerifierNdisDispatch->NdisMiniportSendNetBufferListsHandler(
          *(void **)(v3 + 24),
          v5,
          v65,
          0,
          (void *)v3,
          *(void **)(v3 + 5024),
          v39);
      else
        v39(*(void **)(v3 + 24), v5, v65, 0);
      if ( SLOBYTE(v72.DatapathCyclesMask) < 0 )
      {
        ndisPcwEndCycleCounter(&v72);
        if ( v37 != 2 )
          KeLowerIrql(v37);
      }
    }
  }
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qq(0x2Bu, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, v3, v5);
}

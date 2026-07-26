/*
 * XREFs of NdisSendNetBufferLists @ 0x1C000B5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C000452C (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000E400 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011DA0 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0011DDC (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ndisMFakeSendNetBufferLists @ 0x1C0024CB0 (ndisMFakeSendNetBufferLists.c)
 *     ndisSetBusyAsync @ 0x1C0025818 (ndisSetBusyAsync.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     ndisMLoopbackNetBufferLists @ 0x1C0026550 (ndisMLoopbackNetBufferLists.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026A14 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C0051180 (ndisMSendNetBufferListsToPackets.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00526B0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C00541EC (ndisFLoopbackNetBufferLists.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0063588 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisSendNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  KIRQL v4; // r11
  struct _NET_BUFFER_LIST *v5; // r10
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned int DatapathEventsMask; // esi
  unsigned int v10; // r15d
  unsigned __int64 v11; // r9
  int v12; // ecx
  _DWORD *v13; // rcx
  struct _NET_BUFFER_LIST *v14; // rbx
  char v15; // r13
  KIRQL v16; // r14
  bool v17; // si
  unsigned int v18; // eax
  void (*NextSendNetBufferListsHandler)(void); // r10
  void *NextSendNetBufferListsContext; // r11
  struct _NDIS_FILTER_BLOCK *v21; // rdi
  unsigned int Number; // edx
  struct _NET_BUFFER_LIST **v23; // r14
  struct _NET_BUFFER_LIST *v24; // rax
  struct _NDIS_FILTER_BLOCK *v25; // r13
  __int64 v26; // rsi
  unsigned __int8 v27; // r12
  struct _NET_BUFFER_LIST *v28; // r9
  void (*v29)(void); // r13
  void *v30; // r12
  struct _NET_BUFFER_LIST *Scratch; // rbx
  bool v32; // zf
  struct _NET_BUFFER_LIST *v33; // r9
  struct _NET_BUFFER_LIST *v34; // rbx
  struct NDIS_NBL_TRACKER_HANDLE__ *v35; // r10
  unsigned __int64 v36; // rbx
  char v37; // r14
  bool v38; // r13
  void (*v39)(void); // r8
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // r9
  PNET_BUFFER_LIST Alignment; // r14
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r10
  struct _NET_BUFFER_LIST *v45; // r11
  void *SourceHandle; // rax
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rax
  struct _NET_BUFFER_LIST *v51; // rax
  int v52; // ecx
  KIRQL v53; // al
  _SLIST_HEADER *v54; // rcx
  unsigned int v55; // r9d
  _QWORD *Region; // rax
  int i; // edx
  void *v58; // rcx
  struct _NET_BUFFER_LIST *v59; // rsi
  KIRQL v60; // bl
  unsigned int v61; // eax
  void (*v62)(void); // r10
  unsigned int v63; // eax
  _SLIST_HEADER *v64; // rax
  __int64 v65; // rdx
  char v66; // dl
  char v67; // r10
  unsigned __int64 v68; // rbx
  __int64 v69; // r14
  __int64 v70; // r9
  unsigned __int64 v71; // r8
  char v72; // r13
  unsigned __int64 v73; // rbx
  unsigned __int64 v74; // r11
  unsigned __int64 v75; // rdx
  void *v76; // rax
  unsigned __int64 v77; // r9
  unsigned __int64 v78; // r8
  _QWORD *v79; // rcx
  unsigned __int64 v80; // r14
  unsigned __int64 v81; // rdx
  _QWORD *v82; // rcx
  unsigned int Context; // [rsp+28h] [rbp-E0h]
  unsigned int Contexta; // [rsp+28h] [rbp-E0h]
  unsigned int ChildRefCount; // [rsp+38h] [rbp-D0h]
  unsigned int v86; // [rsp+38h] [rbp-D0h]
  unsigned __int8 v87; // [rsp+48h] [rbp-C0h] BYREF
  char v88; // [rsp+49h] [rbp-BFh]
  bool v89; // [rsp+4Ah] [rbp-BEh]
  bool v90; // [rsp+4Bh] [rbp-BDh] BYREF
  char v91; // [rsp+4Ch] [rbp-BCh]
  KIRQL v92; // [rsp+4Dh] [rbp-BBh]
  void (*v93)(void); // [rsp+50h] [rbp-B8h]
  void *v94; // [rsp+58h] [rbp-B0h]
  struct _NET_BUFFER_LIST *v95; // [rsp+60h] [rbp-A8h] BYREF
  struct _NET_BUFFER_LIST *v96; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v97; // [rsp+70h] [rbp-98h]
  __int64 v98; // [rsp+78h] [rbp-90h]
  struct NDIS_PCW_CONTEXT v99; // [rsp+80h] [rbp-88h] BYREF
  struct NDIS_PCW_CONTEXT v100; // [rsp+98h] [rbp-70h] BYREF
  struct NDIS_PCW_CONTEXT v101; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v102[3]; // [rsp+C8h] [rbp-40h] BYREF
  char Parameter[8]; // [rsp+E0h] [rbp-28h] BYREF
  struct _NDIS_FILTER_BLOCK *v104; // [rsp+E8h] [rbp-20h]
  void *v105; // [rsp+F0h] [rbp-18h]
  void (*v106)(void); // [rsp+F8h] [rbp-10h]
  struct _NET_BUFFER_LIST *v107; // [rsp+100h] [rbp-8h]
  NDIS_PORT_NUMBER v108; // [rsp+108h] [rbp+0h]
  __int64 v109; // [rsp+10Ch] [rbp+4h]
  ULONG v110; // [rsp+114h] [rbp+Ch]
  NDIS_PORT_NUMBER v113; // [rsp+168h] [rbp+60h]

  v113 = PortNumber;
  v4 = 2;
  v5 = NetBufferLists;
  v6 = *((_QWORD *)NdisBindingHandle + 2);
  v7 = (unsigned __int64)NdisBindingHandle;
  v92 = 2;
  DatapathEventsMask = *(_DWORD *)(v6 + 48);
  v99.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v6 + 40);
  v99.DatapathCyclesMask = *(_DWORD *)(v6 + 80);
  v99.DatapathEventsMask = DatapathEventsMask;
  v99.CurrentCpu = -1;
  if ( (unsigned __int8)byte_1C008370A >= 4u )
  {
    WPP_SF_qq(70LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, NdisBindingHandle, v5);
    *(_QWORD *)&PortNumber = v113;
    v4 = 2;
    v5 = NetBufferLists;
    v7 = (unsigned __int64)NdisBindingHandle;
  }
  v10 = 0;
  v11 = 1LL;
  if ( ndisNblTrackerMode )
  {
    v35 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v7 + 680);
    v36 = *(_QWORD *)(v6 + 2568);
    v37 = ndisNblTrackerEpoch;
    LOBYTE(v7) = 0;
    v94 = v35;
    v93 = 0LL;
    v38 = (SendFlags & 1) != 0;
    v95 = 0LL;
    v90 = v38;
    v39 = 0LL;
    v87 = 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(NetBufferLists, v35, 0x8Fu, (void *)v36, (SendFlags & 1) != 0);
      v7 = v87;
      v39 = 0LL;
    }
    v40 = v36 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v40 & 1) != 0 )
      v41 = *(_QWORD *)((v40 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    else
      v41 = v40;
    v97 = v41;
    if ( (v40 & 1) != 0 )
      v40 ^= ((unsigned __int8)v40 ^ (unsigned __int8)(2 * v37)) & 2;
    v5 = NetBufferLists;
    Alignment = NetBufferLists;
    if ( NetBufferLists )
    {
      v43 = (unsigned __int64)v94;
      do
      {
        v44 = (unsigned __int64)Alignment->NetBufferListInfo[26];
        v45 = v95;
        do
        {
          if ( Alignment->NetBufferListInfo[26] != (void *)v44 )
            break;
          if ( !v44 && !Alignment->SourceHandle )
            Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(v43 & 0xFFFFFFFFFFFFFFFDuLL, v7, v39);
          if ( (v44 & 4) != 0 || (SourceHandle = Alignment->SourceHandle) == 0LL )
          {
            Alignment->NetBufferListInfo[26] = (void *)(v40 | 4);
          }
          else if ( SourceHandle != (void *)v41 || Alignment->ParentNetBufferList )
          {
            v39 = (void (*)(void))((char *)v39 + 1);
            Alignment->NetBufferListInfo[26] = (void *)v40;
          }
          else
          {
            v45 = (struct _NET_BUFFER_LIST *)((char *)v45 + 1);
            Alignment->NetBufferListInfo[26] = (void *)24;
            v39 = (void (*)(void))((char *)v39 + 1);
          }
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
        }
        while ( Alignment );
        v95 = v45;
        v96 = (struct _NET_BUFFER_LIST *)v39;
        if ( (v44 & 1) != 0 )
        {
          ndisNblTrackerUpdateOwnershipCount(v44, (char *)v93 - (char *)v39, &v90, &v87);
          v39 = (void (*)(void))v96;
          v41 = v97;
        }
        v93 = v39;
      }
      while ( Alignment );
      v38 = v90;
      LOBYTE(v7) = v87;
      v5 = NetBufferLists;
    }
    v47 = (char *)v39 - (char *)v95;
    if ( (v40 & 1) != 0 && v47 )
    {
      if ( !v38 && !(_BYTE)v7 )
      {
        v38 = KeGetCurrentIrql() == 2;
        v90 = v38;
      }
      v4 = 2;
      v48 = v40 & 0xFFFFFFFFFFFFFFF8uLL;
      v11 = 1LL;
      v49 = 16 * ((v40 >> 1) & 1);
      if ( !v38 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + v49 + 48), v47);
        DatapathEventsMask = v99.DatapathEventsMask;
        *(_QWORD *)&PortNumber = v113;
        goto LABEL_4;
      }
      DatapathEventsMask = v99.DatapathEventsMask;
      v50 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(v50 + *(_QWORD *)(v48 + v49 + 40)) += v47;
    }
    else
    {
      v11 = 1LL;
      v4 = 2;
    }
    *(_QWORD *)&PortNumber = v113;
  }
LABEL_4:
  if ( (DatapathEventsMask & 0x200140) != 0 || (v99.DatapathCyclesMask & 0x40) != 0 )
  {
    if ( (SendFlags & 1) == 0 )
    {
      v53 = KfRaiseIrql(2u);
      *(_QWORD *)&PortNumber = v113;
      v11 = 1LL;
      v5 = NetBufferLists;
      v4 = v53;
      v92 = v53;
    }
    if ( (DatapathEventsMask & 0x40) != 0 )
    {
      ndisPcwAddEvent(&v99, 6uLL, 1uLL);
      v5 = NetBufferLists;
      DatapathEventsMask = v99.DatapathEventsMask;
      *(_QWORD *)&PortNumber = v113;
    }
    if ( !v4 && (DatapathEventsMask & 0x200000) != 0 )
    {
      ndisPcwAddEvent(&v99, 0x19uLL, v11);
      v5 = NetBufferLists;
      DatapathEventsMask = v99.DatapathEventsMask;
      *(_QWORD *)&PortNumber = v113;
    }
    if ( (DatapathEventsMask & 0x400100) != 0 )
    {
      v54 = (_SLIST_HEADER *)v5;
      v55 = 0;
      if ( v5 )
      {
        do
        {
          Region = (_QWORD *)v54->Region;
          for ( i = 0; Region; ++i )
            Region = (_QWORD *)*Region;
          v54 = (_SLIST_HEADER *)v54->Alignment;
          v55 += i;
        }
        while ( v54 );
      }
      if ( (DatapathEventsMask & 0x100) != 0 )
      {
        ndisPcwAddEvent(&v99, 8uLL, v55);
        v5 = NetBufferLists;
        DatapathEventsMask = v99.DatapathEventsMask;
        *(_QWORD *)&PortNumber = v113;
      }
      if ( !v4 && (DatapathEventsMask & 0x400000) != 0 )
      {
        ndisPcwAddEvent(&v99, 0x1AuLL, v55);
        v5 = NetBufferLists;
        *(_QWORD *)&PortNumber = v113;
      }
    }
    if ( (v99.DatapathCyclesMask & 0x40) != 0 )
    {
      ndisPcwStartCycleCounter(&v99, 6u);
    }
    else
    {
      if ( v4 == 2 )
        goto LABEL_6;
      KeLowerIrql(v4);
      *(_QWORD *)&PortNumber = v113;
    }
    v5 = NetBufferLists;
  }
LABEL_6:
  v12 = *(_DWORD *)(v6 + 2676);
  if ( v12 )
  {
    v52 = v12 - 1;
    if ( v52 )
    {
      if ( v52 == 1 )
        ndisMSendNetBufferListsToPackets(v6, v5, *(_QWORD *)&PortNumber, SendFlags);
      else
        ndisMFakeSendNetBufferLists(v6, v5, *(_QWORD *)&PortNumber, SendFlags);
LABEL_29:
      v5 = NetBufferLists;
      goto LABEL_30;
    }
    v58 = *(void **)(v6 + 3816);
    v59 = v5;
    v60 = 2;
    v100.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v6 + 40);
    v61 = *(_DWORD *)(v6 + 48);
    v96 = v5;
    v62 = (void (*)(void))*((_QWORD *)v58 + 23);
    v100.DatapathEventsMask = v61;
    v63 = *(_DWORD *)(v6 + 80);
    v93 = v62;
    v94 = v58;
    v100.DatapathCyclesMask = v63;
    v100.CurrentCpu = -1;
    if ( (unsigned __int8)byte_1C008370A >= 4u )
    {
      WPP_SF_qq(42LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, v6, NetBufferLists);
      v58 = v94;
      v62 = v93;
      *(_QWORD *)&PortNumber = v113;
    }
    if ( !*(_DWORD *)(v6 + 1836)
      && (*(_BYTE *)(v6 + 91) && (*(_WORD *)(v6 + 1820) > 1u || *(_BYTE *)(v6 + 1999))
       || (SendFlags & 2) != 0
       || (*(_DWORD *)(v6 + 120) & 0x4000) != 0) )
    {
      ndisMLoopbackNetBufferLists(v6, (_DWORD)NetBufferLists, PortNumber, SendFlags, (__int64)&v96);
      v59 = v96;
      if ( !v96 )
        goto LABEL_166;
      v58 = v94;
      v62 = v93;
      *(_QWORD *)&PortNumber = v113;
    }
    if ( *(_QWORD *)(v6 + 4512) )
    {
      v64 = (_SLIST_HEADER *)v59;
      v65 = 0LL;
      if ( v59 )
      {
        do
        {
          v64 = (_SLIST_HEADER *)v64->Alignment;
          v65 = (unsigned int)(v65 + 1);
        }
        while ( v64 );
      }
      if ( !(unsigned __int8)ndisSetBusyAsync(v6, v65, 52LL, v59, PortNumber) )
        goto LABEL_166;
      v58 = v94;
      v62 = v93;
      *(_QWORD *)&PortNumber = v113;
    }
    if ( ndisNblTrackerMode )
    {
      v66 = ndisNblTrackerEpoch;
      v67 = 0;
      v68 = *(_QWORD *)(v6 + 4136);
      v69 = 0LL;
      v70 = 0LL;
      LODWORD(v98) = ndisNblTrackerEpoch;
      v71 = 0LL;
      v72 = SendFlags & 1;
      if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      {
        ndisNblTrackerRecordEvent(v59, 0LL, 0x92u, (void *)v68, SendFlags & 1);
        v66 = v98;
        v70 = 0LL;
        v67 = 0;
        v71 = 0LL;
      }
      v73 = v68 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( (v73 & 1) != 0 )
        v74 = *(_QWORD *)((v73 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      else
        v74 = v73;
      if ( (v73 & 1) != 0 )
        v73 ^= ((unsigned __int8)v73 ^ (unsigned __int8)(2 * v66)) & 2;
      if ( v59 )
      {
        do
        {
          v75 = (unsigned __int64)v59->NetBufferListInfo[26];
          do
          {
            if ( v59->NetBufferListInfo[26] != (void *)v75 )
              break;
            if ( !v75 && !v59->SourceHandle )
              v59->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL, 0LL, v71);
            if ( (v75 & 4) != 0 || (v76 = v59->SourceHandle) == 0LL )
            {
              v59->NetBufferListInfo[26] = (void *)(v73 | 4);
            }
            else if ( v76 != (void *)v74 || v59->ParentNetBufferList )
            {
              ++v69;
              v59->NetBufferListInfo[26] = (void *)v73;
            }
            else
            {
              ++v71;
              v59->NetBufferListInfo[26] = (void *)24;
              ++v69;
            }
            v59 = (struct _NET_BUFFER_LIST *)v59->Link.Alignment;
          }
          while ( v59 );
          v77 = v70 - v69;
          v97 = v71;
          if ( (v75 & 1) != 0 && v77 )
          {
            if ( !v72 && !v67 )
            {
              v67 = 1;
              v72 = KeGetCurrentIrql() == 2;
            }
            v78 = (v75 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v75 >> 1) & 1);
            if ( v72 )
            {
              v79 = (_QWORD *)(*(_QWORD *)(v78 + 40) + (KeGetPcr()->Prcb.Number << 12));
              *v79 += v77;
            }
            else
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v78 + 48), v77);
            }
            v71 = v97;
          }
          v70 = v69;
        }
        while ( v59 );
        v59 = v96;
      }
      v80 = v69 - v71;
      if ( (v73 & 1) != 0 && v80 )
      {
        if ( !v72 && !v67 )
          v72 = KeGetCurrentIrql() == 2;
        v62 = v93;
        *(_QWORD *)&PortNumber = v113;
        v81 = (v73 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v73 >> 1) & 1);
        v60 = 2;
        if ( v72 )
        {
          v59 = v96;
          v82 = (_QWORD *)(*(_QWORD *)(v81 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v82 += v80;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v81 + 48), v80);
          v59 = v96;
        }
      }
      else
      {
        *(_QWORD *)&PortNumber = v113;
        v60 = 2;
        v62 = v93;
      }
      v58 = v94;
    }
    if ( SLOBYTE(v100.DatapathCyclesMask) < 0 )
    {
      if ( (SendFlags & 1) == 0 )
        v60 = KfRaiseIrql(2u);
      ndisPcwStartCycleCounter(&v100, 7u);
      v62 = v93;
      v58 = v94;
    }
    if ( ndisVerifierNdisDispatch && (*((_BYTE *)v58 + 26) & 2) != 0 )
      ndisVerifierNdisDispatch->NdisMiniportSendNetBufferListsHandler(
        *(void **)(v6 + 24),
        v59,
        *(_QWORD *)&PortNumber,
        SendFlags,
        (void *)v6,
        *(void **)(v6 + 5024),
        (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))v62);
    else
      ((void (__fastcall *)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))v62)(
        *(_QWORD *)(v6 + 24),
        v59,
        *(_QWORD *)&PortNumber,
        SendFlags);
    if ( SLOBYTE(v100.DatapathCyclesMask) < 0 )
    {
      ndisPcwEndCycleCounter(&v100, 7u, 0x14uLL);
      if ( v60 != 2 )
        KeLowerIrql(v60);
    }
LABEL_166:
    if ( (unsigned __int8)byte_1C008370A >= 4u )
      WPP_SF_qq(43LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, v6, v59);
    goto LABEL_29;
  }
  v13 = *(_DWORD **)(v6 + 2576);
  v14 = v5;
  v95 = v5;
  if ( *(_BYTE *)v13 == 5
    && (v13[14] & 0x8000) != 0
    && !v13[84]
    && (*(_BYTE *)(v6 + 91) && (*(_WORD *)(v6 + 1820) > 1u || *(_BYTE *)(v6 + 1999))
     || (SendFlags & 2) != 0
     || (*(_DWORD *)(v6 + 120) & 0x4000) != 0) )
  {
    ndisFLoopbackNetBufferLists(v13, v5, (__int64)&v95);
    *(_QWORD *)&PortNumber = v113;
    v5 = NetBufferLists;
    v14 = v95;
  }
  if ( v14 )
  {
    v15 = 0;
    v16 = 2;
    v91 = 2;
    v88 = 0;
    v17 = *(_QWORD *)(v6 + 2560) == v6;
    v101.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v6 + 40);
    v101.DatapathEventsMask = *(_DWORD *)(v6 + 48);
    v18 = *(_DWORD *)(v6 + 80);
    v101.DatapathCyclesMask = v18;
    v89 = v17;
    v101.CurrentCpu = -1;
    if ( v17 && (v18 & 0x80u) != 0 )
    {
      if ( (SendFlags & 1) == 0 )
      {
        v15 = 1;
        v16 = KfRaiseIrql(2u);
        v91 = v16;
        v88 = 1;
      }
      ndisPcwStartCycleCounter(&v101, 7u);
    }
    NextSendNetBufferListsHandler = *(void (**)(void))(v6 + 2656);
    NextSendNetBufferListsContext = *(void **)(v6 + 2560);
    v21 = *(struct _NDIS_FILTER_BLOCK **)(v6 + 2576);
    v93 = NextSendNetBufferListsHandler;
    v94 = NextSendNetBufferListsContext;
    if ( v21->Header.Type == 17 )
    {
      ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))NextSendNetBufferListsHandler)(
        NextSendNetBufferListsContext,
        v14,
        *(_QWORD *)&PortNumber,
        SendFlags);
      goto LABEL_28;
    }
    if ( ndisIterativeDataPathDisabled || (SendFlags & 1) == 0 && KeGetCurrentIrql() != 2 )
    {
      v108 = PortNumber;
      v104 = v21;
      v105 = NextSendNetBufferListsContext;
      v109 = 0LL;
      v106 = NextSendNetBufferListsHandler;
      v107 = v14;
      v110 = SendFlags;
      if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
      {
        v51 = v14;
        do
        {
          v51->Status = -1073741670;
          v51 = (struct _NET_BUFFER_LIST *)v51->Link.Alignment;
        }
        while ( v51 );
        do
        {
          v14 = (struct _NET_BUFFER_LIST *)v14->Link.Alignment;
          ++v10;
        }
        while ( v14 );
        _InterlockedExchangeAdd(&v21->DroppedSendNbls, v10);
        ndisQueueStackExpansionFallbackNbls(v21, v95, 1u);
      }
      goto LABEL_28;
    }
    Number = KeGetPcr()->Prcb.Number;
    v23 = (struct _NET_BUFFER_LIST **)v102;
    LODWORD(v98) = Number;
    v102[2] = 0LL;
    v24 = v95;
    v102[0] = v95;
    v102[1] = v95;
    v95->Scratch = 0LL;
    v24->ChildRefCount = SendFlags;
    v24->Status = PortNumber;
    if ( v21->Header.Type == 5 )
    {
      while ( *v23 )
      {
        v25 = v21;
        v26 = (__int64)v21->IterativeDataPathTracker[Number];
        v27 = *(_BYTE *)(v26 + 16);
        *(_BYTE *)(v26 + 16) = 1;
        v28 = *v23;
        v87 = v27;
        *v23 = 0LL;
        if ( v28 )
        {
          v29 = v93;
          v30 = v94;
          do
          {
            Scratch = (struct _NET_BUFFER_LIST *)v28->Scratch;
            ChildRefCount = v28->ChildRefCount;
            Context = v28->NdisReserved2;
            v28->ChildRefCount = 0;
            ndisCallSendHandler(v21, v29, v30, v28, Context, 0, ChildRefCount);
            v28 = Scratch;
          }
          while ( Scratch );
          v27 = v87;
          v25 = v21;
          NextSendNetBufferListsHandler = v93;
          NextSendNetBufferListsContext = v94;
          Number = v98;
        }
        *(_BYTE *)(v26 + 16) = 0;
        if ( v27 )
        {
          *(_BYTE *)(v26 + 16) = 1;
LABEL_23:
          v15 = v88;
          v17 = v89;
          goto LABEL_24;
        }
        v21 = (struct _NDIS_FILTER_BLOCK *)v21->NextSendNetBufferListsObject;
        v23 = (struct _NET_BUFFER_LIST **)v26;
        NextSendNetBufferListsHandler = (void (*)(void))v25->NextSendNetBufferListsHandler;
        NextSendNetBufferListsContext = v25->NextSendNetBufferListsContext;
        v93 = NextSendNetBufferListsHandler;
        v32 = v21->Header.Type == 5;
        v94 = NextSendNetBufferListsContext;
        if ( !v32 )
          goto LABEL_23;
      }
      v17 = v89;
      v15 = v88;
    }
    else
    {
LABEL_24:
      v33 = *v23;
      if ( *v23 )
      {
        *v23 = 0LL;
        do
        {
          v34 = (struct _NET_BUFFER_LIST *)v33->Scratch;
          v86 = v33->ChildRefCount;
          Contexta = v33->NdisReserved2;
          v33->ChildRefCount = 0;
          ndisCallSendHandler(v21, NextSendNetBufferListsHandler, NextSendNetBufferListsContext, v33, Contexta, 0, v86);
          NextSendNetBufferListsHandler = v93;
          v33 = v34;
          NextSendNetBufferListsContext = v94;
        }
        while ( v34 );
        v16 = v91;
LABEL_28:
        if ( v17 )
        {
          if ( SLOBYTE(v101.DatapathCyclesMask) < 0 )
            ndisPcwEndCycleCounter(&v101, 7u, 0x14uLL);
          if ( v15 && v16 != 2 )
            KeLowerIrql(v16);
        }
        goto LABEL_29;
      }
    }
    v16 = v91;
    goto LABEL_28;
  }
LABEL_30:
  if ( (v99.DatapathCyclesMask & 0x40) != 0 )
  {
    ndisPcwEndCycleCounter(&v99, 6u, 0x13uLL);
    if ( v92 != 2 )
      KeLowerIrql(v92);
    v5 = NetBufferLists;
  }
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qq(71LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, NdisBindingHandle, v5);
}

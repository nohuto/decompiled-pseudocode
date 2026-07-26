/*
 * XREFs of NdisSendNetBufferLists @ 0x1C00016E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0002140 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002A60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C000C614 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000C670 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C002028C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     ndisMLoopbackNetBufferLists @ 0x1C00228D0 (ndisMLoopbackNetBufferLists.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0022A48 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0022E70 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00231B0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00231FC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ndisSetBusyAsync @ 0x1C0023238 (ndisSetBusyAsync.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C0050BE0 (ndisMSendNetBufferListsToPackets.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C0053DFC (ndisFLoopbackNetBufferLists.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C00649F8 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
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
  int Number; // edx
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
  void (*v35)(void); // r10
  unsigned __int64 v36; // rbx
  char v37; // r14
  bool v38; // r13
  struct _NET_BUFFER_LIST *v39; // r8
  struct _NET_BUFFER_LIST *v40; // r11
  unsigned __int64 v41; // rbx
  struct _NET_BUFFER_LIST *v42; // r9
  PNET_BUFFER_LIST Alignment; // r14
  void (*v44)(void); // r13
  struct _NET_BUFFER_LIST *v45; // rdi
  void *v46; // r10
  struct _NET_BUFFER_LIST *SourceHandle; // rax
  __int64 v48; // r11
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rax
  int v53; // ecx
  char v54; // r8
  int v55; // ecx
  struct _NET_BUFFER_LIST *j; // rax
  void (*v57)(void); // rcx
  unsigned int v58; // esi
  _QWORD *p_Alignment; // rdx
  struct _NDIS_OPEN_BLOCK *v60; // r14
  struct _NDIS_OPEN_BLOCK *v61; // r12
  _QWORD *v62; // r13
  struct _NET_BUFFER_LIST *v63; // rbx
  unsigned int v64; // edi
  struct _NDIS_OPEN_BLOCK *v65; // rcx
  struct _NET_BUFFER_LIST *v66; // rsi
  unsigned int v67; // ebx
  struct _NET_BUFFER_LIST *v68; // rax
  KIRQL v69; // al
  _SLIST_HEADER *v70; // rcx
  unsigned int v71; // r9d
  _QWORD *Region; // rax
  int i; // edx
  KIRQL v74; // al
  $C499D399BBA72F2528A00A318724AE5E *FirstNetBuffer; // rcx
  void (*v76)(void); // rcx
  struct _NET_BUFFER_LIST *v77; // rsi
  KIRQL v78; // bl
  unsigned int v79; // eax
  void *v80; // r10
  unsigned int v81; // eax
  _SLIST_HEADER *v82; // rax
  __int64 v83; // rdx
  char v84; // dl
  char v85; // r10
  unsigned __int64 v86; // rbx
  __int64 v87; // r14
  __int64 v88; // r9
  struct _NET_BUFFER_LIST *v89; // r8
  char v90; // r13
  unsigned __int64 v91; // rbx
  unsigned __int64 v92; // r11
  unsigned __int64 v93; // rdx
  void *v94; // rax
  unsigned __int64 v95; // r9
  unsigned __int64 v96; // r8
  _QWORD *v97; // rcx
  unsigned __int64 v98; // r14
  unsigned __int64 v99; // rdx
  _QWORD *v100; // rcx
  unsigned int NdisReserved2; // [rsp+28h] [rbp-E0h]
  unsigned int v102; // [rsp+28h] [rbp-E0h]
  unsigned int ChildRefCount; // [rsp+38h] [rbp-D0h]
  unsigned int v104; // [rsp+38h] [rbp-D0h]
  KIRQL v105; // [rsp+48h] [rbp-C0h]
  unsigned __int8 v106; // [rsp+49h] [rbp-BFh] BYREF
  bool v107; // [rsp+4Ah] [rbp-BEh] BYREF
  __int16 v108; // [rsp+4Bh] [rbp-BDh]
  void (*v109)(void); // [rsp+50h] [rbp-B8h]
  __int64 v110; // [rsp+58h] [rbp-B0h]
  void *v111; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v112; // [rsp+68h] [rbp-A0h]
  struct _NET_BUFFER_LIST *v113; // [rsp+70h] [rbp-98h] BYREF
  struct _NET_BUFFER_LIST *v114; // [rsp+78h] [rbp-90h] BYREF
  struct _NET_BUFFER_LIST *v115; // [rsp+80h] [rbp-88h]
  struct NDIS_PCW_CONTEXT v116; // [rsp+88h] [rbp-80h] BYREF
  struct NDIS_PCW_CONTEXT v117; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v118; // [rsp+B8h] [rbp-50h]
  struct NDIS_PCW_CONTEXT v119; // [rsp+C0h] [rbp-48h] BYREF
  struct NDIS_PCW_CONTEXT v120; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v121[3]; // [rsp+F0h] [rbp-18h] BYREF
  char v122[8]; // [rsp+108h] [rbp+0h] BYREF
  struct _NDIS_FILTER_BLOCK *v123; // [rsp+110h] [rbp+8h]
  void *v124; // [rsp+118h] [rbp+10h]
  void (*v125)(void); // [rsp+120h] [rbp+18h]
  struct _NET_BUFFER_LIST *v126; // [rsp+128h] [rbp+20h]
  NDIS_PORT_NUMBER v127; // [rsp+130h] [rbp+28h]
  __int64 v128; // [rsp+134h] [rbp+2Ch]
  ULONG v129; // [rsp+13Ch] [rbp+34h]
  NDIS_PORT_NUMBER v132; // [rsp+198h] [rbp+90h]

  v132 = PortNumber;
  v4 = 2;
  v5 = NetBufferLists;
  v6 = *((_QWORD *)NdisBindingHandle + 2);
  v7 = (unsigned __int64)NdisBindingHandle;
  v118 = v6;
  DatapathEventsMask = *(_DWORD *)(v6 + 48);
  v116.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v6 + 40);
  v116.DatapathCyclesMask = *(_DWORD *)(v6 + 80);
  LOBYTE(v110) = 2;
  v116.DatapathEventsMask = DatapathEventsMask;
  v116.CurrentCpu = -1;
  if ( (unsigned __int8)byte_1C008530A >= 4u )
  {
    WPP_SF_qq(70LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, NdisBindingHandle, v5);
    *(_QWORD *)&PortNumber = v132;
    v4 = 2;
    v5 = NetBufferLists;
    v7 = (unsigned __int64)NdisBindingHandle;
  }
  v10 = 0;
  v11 = 1LL;
  if ( ndisNblTrackerMode )
  {
    v35 = *(void (**)(void))(v7 + 680);
    v36 = *(_QWORD *)(v6 + 2568);
    v37 = ndisNblTrackerEpoch;
    LOBYTE(v7) = 0;
    v109 = v35;
    v114 = 0LL;
    v38 = (SendFlags & 1) != 0;
    v106 = 0;
    v107 = v38;
    v39 = 0LL;
    v40 = 0LL;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(
        NetBufferLists,
        (struct NDIS_NBL_TRACKER_HANDLE__ *)v35,
        0x8Fu,
        (void *)v36,
        (SendFlags & 1) != 0);
      v7 = v106;
      v39 = 0LL;
      v40 = 0LL;
    }
    v41 = v36 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v41 & 1) != 0 )
      v42 = *(struct _NET_BUFFER_LIST **)((v41 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    else
      v42 = (struct _NET_BUFFER_LIST *)v41;
    v115 = v42;
    if ( (v41 & 1) != 0 )
      v41 ^= ((unsigned __int8)v41 ^ (unsigned __int8)(2 * v37)) & 2;
    v5 = NetBufferLists;
    Alignment = NetBufferLists;
    if ( NetBufferLists )
    {
      v44 = v109;
      v45 = 0LL;
      do
      {
        v46 = Alignment->NetBufferListInfo[26];
        do
        {
          if ( Alignment->NetBufferListInfo[26] != v46 )
            break;
          if ( !v46 && !Alignment->SourceHandle )
            Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                                (unsigned __int64)v44 & 0xFFFFFFFFFFFFFFFDuLL,
                                                v7,
                                                v39);
          if ( ((unsigned __int8)v46 & 4) != 0
            || (SourceHandle = (struct _NET_BUFFER_LIST *)Alignment->SourceHandle) == 0LL )
          {
            Alignment->NetBufferListInfo[26] = (void *)(v41 | 4);
          }
          else if ( SourceHandle != v42 || Alignment->ParentNetBufferList )
          {
            v39 = (struct _NET_BUFFER_LIST *)((char *)v39 + 1);
            Alignment->NetBufferListInfo[26] = (void *)v41;
          }
          else
          {
            v45 = (struct _NET_BUFFER_LIST *)((char *)v45 + 1);
            Alignment->NetBufferListInfo[26] = (void *)24;
            v39 = (struct _NET_BUFFER_LIST *)((char *)v39 + 1);
          }
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
        }
        while ( Alignment );
        v48 = (char *)v40 - (char *)v39;
        v114 = v45;
        v113 = v39;
        if ( ((unsigned __int8)v46 & 1) != 0 )
        {
          ndisNblTrackerUpdateOwnershipCount(v46, v48, &v107, &v106);
          v39 = v113;
          v42 = v115;
        }
        v40 = v39;
      }
      while ( Alignment );
      v38 = v107;
      v6 = v118;
      LOBYTE(v7) = v106;
      v5 = NetBufferLists;
    }
    v49 = (char *)v39 - (char *)v114;
    if ( (v41 & 1) != 0 && v49 )
    {
      if ( !v38 && !(_BYTE)v7 )
      {
        v38 = KeGetCurrentIrql() == 2;
        v107 = v38;
      }
      v4 = 2;
      v50 = v41 & 0xFFFFFFFFFFFFFFF8uLL;
      v11 = 1LL;
      v51 = 16 * ((v41 >> 1) & 1);
      if ( !v38 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v50 + v51 + 48), v49);
        DatapathEventsMask = v116.DatapathEventsMask;
        *(_QWORD *)&PortNumber = v132;
        goto LABEL_4;
      }
      DatapathEventsMask = v116.DatapathEventsMask;
      v52 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(v52 + *(_QWORD *)(v50 + v51 + 40)) += v49;
    }
    else
    {
      v11 = 1LL;
      v4 = 2;
    }
    *(_QWORD *)&PortNumber = v132;
  }
LABEL_4:
  if ( (DatapathEventsMask & 0x200140) != 0 || (v116.DatapathCyclesMask & 0x40) != 0 )
  {
    if ( (SendFlags & 1) == 0 )
    {
      v69 = KfRaiseIrql(2u);
      *(_QWORD *)&PortNumber = v132;
      v11 = 1LL;
      v5 = NetBufferLists;
      v4 = v69;
      LOBYTE(v110) = v69;
    }
    if ( (DatapathEventsMask & 0x40) != 0 )
    {
      ndisPcwAddEvent(&v116, 6uLL, 1uLL);
      v5 = NetBufferLists;
      DatapathEventsMask = v116.DatapathEventsMask;
      *(_QWORD *)&PortNumber = v132;
    }
    if ( !v4 && (DatapathEventsMask & 0x200000) != 0 )
    {
      ndisPcwAddEvent(&v116, 0x19uLL, v11);
      v5 = NetBufferLists;
      DatapathEventsMask = v116.DatapathEventsMask;
      *(_QWORD *)&PortNumber = v132;
    }
    if ( (DatapathEventsMask & 0x400100) != 0 )
    {
      v70 = (_SLIST_HEADER *)v5;
      v71 = 0;
      if ( v5 )
      {
        do
        {
          Region = (_QWORD *)v70->Region;
          for ( i = 0; Region; ++i )
            Region = (_QWORD *)*Region;
          v70 = (_SLIST_HEADER *)v70->Alignment;
          v71 += i;
        }
        while ( v70 );
      }
      if ( (DatapathEventsMask & 0x100) != 0 )
      {
        ndisPcwAddEvent(&v116, 8uLL, v71);
        v5 = NetBufferLists;
        DatapathEventsMask = v116.DatapathEventsMask;
        *(_QWORD *)&PortNumber = v132;
      }
      if ( !v4 && (DatapathEventsMask & 0x400000) != 0 )
      {
        ndisPcwAddEvent(&v116, 0x1AuLL, v71);
        v5 = NetBufferLists;
        *(_QWORD *)&PortNumber = v132;
      }
      v11 = 1LL;
    }
    if ( (v116.DatapathCyclesMask & 0x40) != 0 )
    {
      ndisPcwStartCycleCounter(&v116, 6u);
    }
    else
    {
      if ( v4 == 2 )
        goto LABEL_6;
      KeLowerIrql(v4);
      *(_QWORD *)&PortNumber = v132;
    }
    v5 = NetBufferLists;
    v11 = 1LL;
  }
LABEL_6:
  v12 = *(_DWORD *)(v6 + 2676);
  if ( v12 )
  {
    v53 = v12 - 1;
    if ( v53 )
    {
      if ( v53 == 1 )
      {
        ndisMSendNetBufferListsToPackets(v6, v5, *(_QWORD *)&PortNumber, SendFlags);
LABEL_29:
        v5 = NetBufferLists;
        goto LABEL_30;
      }
      v54 = 0;
      LODWORD(v111) = 0;
      if ( (unsigned __int8)byte_1C008530A >= 4u )
      {
        WPP_SF_qq(77LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, v6, v5);
        v54 = (char)v111;
        v11 = 1LL;
        v5 = NetBufferLists;
      }
      v55 = *(_DWORD *)(v6 + 540);
      for ( j = v5; j; j = (struct _NET_BUFFER_LIST *)j->Link.Alignment )
        j->Status = v55;
      if ( (SendFlags & 1) != 0 )
      {
        v54 = v11;
        LODWORD(v111) = v11;
      }
      v57 = 0LL;
      v58 = *(_DWORD *)(v6 + 80);
      p_Alignment = 0LL;
      v117.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v6 + 40);
      v60 = 0LL;
      v61 = 0LL;
      v117.DatapathEventsMask = *(_DWORD *)(v6 + 48);
      v62 = 0LL;
      v109 = 0LL;
      v115 = 0LL;
      v113 = 0LL;
      LODWORD(v112) = 0;
      v117.DatapathCyclesMask = v58;
      v117.CurrentCpu = -1;
      v105 = 2;
      if ( (unsigned __int8)byte_1C008530A >= 4u )
      {
        WPP_SF_qq(68LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, v6, v5);
        v54 = (char)v111;
        v57 = 0LL;
        v5 = NetBufferLists;
        p_Alignment = 0LL;
      }
      v63 = v5;
      if ( ((v117.DatapathEventsMask & 0x280) != 0 || (v58 & 0x200) != 0) && (v54 & 1) == 0 )
      {
        v74 = KfRaiseIrql(2u);
        v54 = (char)v111;
        v57 = 0LL;
        v5 = NetBufferLists;
        p_Alignment = 0LL;
        v105 = v74;
      }
      if ( !v5 )
      {
LABEL_84:
        if ( ndisNblTrackerMode )
        {
          if ( (v54 & 1) != 0 )
            v10 = 1;
          ndisNblTrackerTransferOwnershipInternal(
            (struct _NET_BUFFER_LIST *)v57,
            0LL,
            v60->NblTracker,
            NdisNblTrackerEvent_SendCompletedToOpen,
            v10);
        }
        if ( SLOBYTE(v117.DatapathEventsMask) < 0 )
        {
          ndisPcwAddEvent(&v117, 7uLL, 1uLL);
          LOWORD(v58) = v117.DatapathCyclesMask;
        }
        if ( (v58 & 0x200) != 0 )
        {
          ndisPcwStartCycleCounter(&v117, 9u);
          LOWORD(v58) = v117.DatapathCyclesMask;
        }
        v67 = (unsigned int)v111;
        ((void (__fastcall *)(void *, void (*)(void), _QWORD, unsigned __int64))v60->ProtSendNetBufferListsComplete)(
          v60->SendCompleteNetBufferListsContext,
          v109,
          (unsigned int)v111,
          v11);
        if ( (v58 & 0x200) != 0 )
          ndisPcwEndCycleCounter(&v117, 9u, 0x16uLL);
        if ( v61 )
          ndisMSendCompleteNetBufferListsToOpen(v61, v115, v67, &v117);
        if ( (v117.DatapathEventsMask & 0x200) != 0 )
          ndisPcwAddEvent(&v117, 9uLL, (unsigned int)v112);
        if ( v105 != 2 )
          KeLowerIrql(v105);
        if ( (unsigned __int8)byte_1C008530A >= 4u )
        {
          WPP_SF_qq(69LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, v6, NetBufferLists);
          if ( (unsigned __int8)byte_1C008530A >= 4u )
            WPP_SF_qq(78LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, v6, NetBufferLists);
        }
        goto LABEL_29;
      }
      v64 = (unsigned int)v111;
      while ( 1 )
      {
        if ( (v117.DatapathEventsMask & 0x200) != 0 )
        {
          FirstNetBuffer = ($C499D399BBA72F2528A00A318724AE5E *)v63->FirstNetBuffer;
          v11 = 0LL;
          LODWORD(v112) = 0;
          if ( FirstNetBuffer )
          {
            do
            {
              FirstNetBuffer = ($C499D399BBA72F2528A00A318724AE5E *)FirstNetBuffer->Link.Alignment;
              v11 = (unsigned int)(v11 + 1);
            }
            while ( FirstNetBuffer );
            LODWORD(v112) = v11;
          }
        }
        v65 = (struct _NDIS_OPEN_BLOCK *)v63->SourceHandle;
        v66 = (struct _NET_BUFFER_LIST *)v63->Link.Alignment;
        v63->Link.Alignment = 0LL;
        if ( v65 == v60 )
          break;
        if ( v65 == v61 )
        {
          *p_Alignment = v63;
          p_Alignment = &v63->Link.Alignment;
          v113 = v63;
          goto LABEL_143;
        }
        if ( v60 )
        {
          p_Alignment = &v63->Link.Alignment;
          if ( v61 )
          {
            ndisMSendCompleteNetBufferListsToOpen(v65, v63, v64, &v117);
            p_Alignment = &v113->Link.Alignment;
          }
          else
          {
            v61 = v65;
            v115 = v63;
            v113 = v63;
          }
          goto LABEL_143;
        }
        v60 = v65;
        v109 = (void (*)(void))v63;
        v57 = (void (*)(void))v63;
        v62 = &v63->Link.Alignment;
LABEL_82:
        v63 = v66;
        if ( !v66 )
        {
          LOWORD(v58) = v117.DatapathCyclesMask;
          v6 = v118;
          v54 = (char)v111;
          goto LABEL_84;
        }
      }
      *v62 = v63;
      v62 = &v63->Link.Alignment;
LABEL_143:
      v57 = v109;
      goto LABEL_82;
    }
    v76 = *(void (**)(void))(v6 + 3816);
    v77 = v5;
    v78 = 2;
    v119.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v6 + 40);
    v79 = *(_DWORD *)(v6 + 48);
    v113 = v5;
    v80 = (void *)*((_QWORD *)v76 + 23);
    v119.DatapathEventsMask = v79;
    v81 = *(_DWORD *)(v6 + 80);
    v111 = v80;
    v109 = v76;
    v119.DatapathCyclesMask = v81;
    v119.CurrentCpu = -1;
    if ( (unsigned __int8)byte_1C008530A >= 4u )
    {
      WPP_SF_qq(42LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, v6, NetBufferLists);
      v76 = v109;
      v80 = v111;
      *(_QWORD *)&PortNumber = v132;
    }
    if ( !*(_DWORD *)(v6 + 1836)
      && (*(_BYTE *)(v6 + 91) && (*(_WORD *)(v6 + 1820) > 1u || *(_BYTE *)(v6 + 1999))
       || (SendFlags & 2) != 0
       || (*(_DWORD *)(v6 + 120) & 0x4000) != 0) )
    {
      ndisMLoopbackNetBufferLists(v6, (_DWORD)NetBufferLists, PortNumber, SendFlags, (__int64)&v113);
      v77 = v113;
      if ( !v113 )
        goto LABEL_216;
      v76 = v109;
      v80 = v111;
      *(_QWORD *)&PortNumber = v132;
    }
    if ( *(_QWORD *)(v6 + 4512) )
    {
      v82 = (_SLIST_HEADER *)v77;
      v83 = 0LL;
      if ( v77 )
      {
        do
        {
          v82 = (_SLIST_HEADER *)v82->Alignment;
          v83 = (unsigned int)(v83 + 1);
        }
        while ( v82 );
      }
      if ( !(unsigned __int8)ndisSetBusyAsync(v6, v83, 52LL, v77, PortNumber) )
        goto LABEL_216;
      v76 = v109;
      v80 = v111;
      *(_QWORD *)&PortNumber = v132;
    }
    if ( ndisNblTrackerMode )
    {
      v84 = ndisNblTrackerEpoch;
      v85 = 0;
      v86 = *(_QWORD *)(v6 + 4136);
      v87 = 0LL;
      v88 = 0LL;
      LODWORD(v112) = ndisNblTrackerEpoch;
      v89 = 0LL;
      v90 = SendFlags & 1;
      if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      {
        ndisNblTrackerRecordEvent(v77, 0LL, 0x92u, (void *)v86, SendFlags & 1);
        v84 = v112;
        v88 = 0LL;
        v85 = 0;
        v89 = 0LL;
      }
      v91 = v86 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( (v91 & 1) != 0 )
        v92 = *(_QWORD *)((v91 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      else
        v92 = v91;
      if ( (v91 & 1) != 0 )
        v91 ^= ((unsigned __int8)v91 ^ (unsigned __int8)(2 * v84)) & 2;
      if ( v77 )
      {
        do
        {
          v93 = (unsigned __int64)v77->NetBufferListInfo[26];
          do
          {
            if ( v77->NetBufferListInfo[26] != (void *)v93 )
              break;
            if ( !v93 && !v77->SourceHandle )
              v77->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL, 0LL, v89);
            if ( (v93 & 4) != 0 || (v94 = v77->SourceHandle) == 0LL )
            {
              v77->NetBufferListInfo[26] = (void *)(v91 | 4);
            }
            else if ( v94 != (void *)v92 || v77->ParentNetBufferList )
            {
              ++v87;
              v77->NetBufferListInfo[26] = (void *)v91;
            }
            else
            {
              v89 = (struct _NET_BUFFER_LIST *)((char *)v89 + 1);
              v77->NetBufferListInfo[26] = (void *)24;
              ++v87;
            }
            v77 = (struct _NET_BUFFER_LIST *)v77->Link.Alignment;
          }
          while ( v77 );
          v95 = v88 - v87;
          v115 = v89;
          if ( (v93 & 1) != 0 && v95 )
          {
            if ( !v90 && !v85 )
            {
              v85 = 1;
              v90 = KeGetCurrentIrql() == 2;
            }
            v96 = (v93 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v93 >> 1) & 1);
            if ( v90 )
            {
              v97 = (_QWORD *)(*(_QWORD *)(v96 + 40) + (KeGetPcr()->Prcb.Number << 12));
              *v97 += v95;
            }
            else
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v96 + 48), v95);
            }
            v89 = v115;
          }
          v88 = v87;
        }
        while ( v77 );
        v77 = v113;
      }
      v98 = v87 - (_QWORD)v89;
      if ( (v91 & 1) != 0 && v98 )
      {
        if ( !v90 && !v85 )
          v90 = KeGetCurrentIrql() == 2;
        v80 = v111;
        *(_QWORD *)&PortNumber = v132;
        v99 = (v91 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v91 >> 1) & 1);
        v78 = 2;
        if ( v90 )
        {
          v77 = v113;
          v100 = (_QWORD *)(*(_QWORD *)(v99 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v100 += v98;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v99 + 48), v98);
          v77 = v113;
        }
      }
      else
      {
        *(_QWORD *)&PortNumber = v132;
        v78 = 2;
        v80 = v111;
      }
      v76 = v109;
    }
    if ( SLOBYTE(v119.DatapathCyclesMask) < 0 )
    {
      if ( (SendFlags & 1) == 0 )
        v78 = KfRaiseIrql(2u);
      ndisPcwStartCycleCounter(&v119, 7u);
      v80 = v111;
      v76 = v109;
    }
    if ( ndisVerifierNdisDispatch && (*((_BYTE *)v76 + 26) & 2) != 0 )
      ndisVerifierNdisDispatch->NdisMiniportSendNetBufferListsHandler(
        *(void **)(v6 + 24),
        v77,
        *(_QWORD *)&PortNumber,
        SendFlags,
        (void *)v6,
        *(void **)(v6 + 5024),
        (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))v80);
    else
      ((void (__fastcall *)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))v80)(
        *(_QWORD *)(v6 + 24),
        v77,
        *(_QWORD *)&PortNumber,
        SendFlags);
    if ( SLOBYTE(v119.DatapathCyclesMask) < 0 )
    {
      ndisPcwEndCycleCounter(&v119, 7u, 0x14uLL);
      if ( v78 != 2 )
        KeLowerIrql(v78);
    }
LABEL_216:
    if ( (unsigned __int8)byte_1C008530A >= 4u )
      WPP_SF_qq(43LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, v6, v77);
    goto LABEL_29;
  }
  v13 = *(_DWORD **)(v6 + 2576);
  v14 = v5;
  v114 = v5;
  if ( *(_BYTE *)v13 == 5
    && (v13[14] & 0x8000) != 0
    && !v13[84]
    && (*(_BYTE *)(v6 + 91) && (*(_WORD *)(v6 + 1820) > 1u || *(_BYTE *)(v6 + 1999))
     || (SendFlags & 2) != 0
     || (*(_DWORD *)(v6 + 120) & 0x4000) != 0) )
  {
    ndisFLoopbackNetBufferLists(v13, v5, (__int64)&v114);
    *(_QWORD *)&PortNumber = v132;
    v5 = NetBufferLists;
    v14 = v114;
  }
  if ( v14 )
  {
    v15 = 0;
    v16 = 2;
    v105 = 2;
    v17 = *(_QWORD *)(v6 + 2560) == v6;
    v120.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v6 + 40);
    v120.DatapathEventsMask = *(_DWORD *)(v6 + 48);
    v18 = *(_DWORD *)(v6 + 80);
    v120.DatapathCyclesMask = v18;
    v108 = v17;
    v120.CurrentCpu = -1;
    if ( v17 && (v18 & 0x80u) != 0 )
    {
      if ( (SendFlags & 1) == 0 )
      {
        v15 = 1;
        v16 = KfRaiseIrql(2u);
        v105 = v16;
        HIBYTE(v108) = 1;
      }
      ndisPcwStartCycleCounter(&v120, 7u);
    }
    NextSendNetBufferListsHandler = *(void (**)(void))(v6 + 2656);
    NextSendNetBufferListsContext = *(void **)(v6 + 2560);
    v21 = *(struct _NDIS_FILTER_BLOCK **)(v6 + 2576);
    v109 = NextSendNetBufferListsHandler;
    v111 = NextSendNetBufferListsContext;
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
      v123 = v21;
      v124 = NextSendNetBufferListsContext;
      v128 = 0LL;
      v125 = NextSendNetBufferListsHandler;
      v126 = v14;
      v127 = PortNumber;
      v129 = SendFlags;
      if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v122) < 0 )
      {
        v68 = v14;
        do
        {
          v68->Status = -1073741670;
          v68 = (struct _NET_BUFFER_LIST *)v68->Link.Alignment;
        }
        while ( v68 );
        do
        {
          v14 = (struct _NET_BUFFER_LIST *)v14->Link.Alignment;
          ++v10;
        }
        while ( v14 );
        _InterlockedExchangeAdd(&v21->DroppedSendNbls, v10);
        ndisQueueStackExpansionFallbackNbls(v21, v114, 1u);
      }
      goto LABEL_28;
    }
    Number = KeGetPcr()->Prcb.Number;
    v23 = (struct _NET_BUFFER_LIST **)v121;
    LODWORD(v112) = Number;
    v121[2] = 0LL;
    v24 = v114;
    v121[0] = v114;
    v121[1] = v114;
    v114->Scratch = 0LL;
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
        v106 = v27;
        *v23 = 0LL;
        if ( v28 )
        {
          v29 = v109;
          v30 = v111;
          do
          {
            Scratch = (struct _NET_BUFFER_LIST *)v28->Scratch;
            ChildRefCount = v28->ChildRefCount;
            NdisReserved2 = v28->NdisReserved2;
            v28->ChildRefCount = 0;
            ndisCallSendHandler(v21, v29, v30, v28, NdisReserved2, 0, ChildRefCount);
            v28 = Scratch;
          }
          while ( Scratch );
          v27 = v106;
          v25 = v21;
          NextSendNetBufferListsHandler = v109;
          NextSendNetBufferListsContext = v111;
          Number = v112;
        }
        *(_BYTE *)(v26 + 16) = 0;
        if ( v27 )
        {
          *(_BYTE *)(v26 + 16) = 1;
LABEL_23:
          v15 = HIBYTE(v108);
          v17 = v108;
          goto LABEL_24;
        }
        v21 = (struct _NDIS_FILTER_BLOCK *)v21->NextSendNetBufferListsObject;
        v23 = (struct _NET_BUFFER_LIST **)v26;
        NextSendNetBufferListsHandler = (void (*)(void))v25->NextSendNetBufferListsHandler;
        NextSendNetBufferListsContext = v25->NextSendNetBufferListsContext;
        v109 = NextSendNetBufferListsHandler;
        v32 = v21->Header.Type == 5;
        v111 = NextSendNetBufferListsContext;
        if ( !v32 )
          goto LABEL_23;
      }
      v17 = v108;
      v15 = HIBYTE(v108);
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
          v104 = v33->ChildRefCount;
          v102 = v33->NdisReserved2;
          v33->ChildRefCount = 0;
          ndisCallSendHandler(v21, NextSendNetBufferListsHandler, NextSendNetBufferListsContext, v33, v102, 0, v104);
          NextSendNetBufferListsHandler = v109;
          v33 = v34;
          NextSendNetBufferListsContext = v111;
        }
        while ( v34 );
        v16 = v105;
LABEL_28:
        if ( v17 )
        {
          if ( SLOBYTE(v120.DatapathCyclesMask) < 0 )
            ndisPcwEndCycleCounter(&v120, 7u, 0x14uLL);
          if ( v15 && v16 != 2 )
            KeLowerIrql(v16);
        }
        goto LABEL_29;
      }
    }
    v16 = v105;
    goto LABEL_28;
  }
LABEL_30:
  if ( (v116.DatapathCyclesMask & 0x40) != 0 )
  {
    ndisPcwEndCycleCounter(&v116, 6u, 0x13uLL);
    if ( (_BYTE)v110 != 2 )
      KeLowerIrql(v110);
    v5 = NetBufferLists;
  }
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qq(71LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, NdisBindingHandle, v5);
}

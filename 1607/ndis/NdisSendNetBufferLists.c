/*
 * XREFs of NdisSendNetBufferLists @ 0x1C0004690
 * Callers:
 *     <none>
 * Callees:
 *     ndisMSendNBLToMiniportInternal @ 0x1C000DB00 (ndisMSendNBLToMiniportInternal.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0010CD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0010D10 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0012AB0 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ndisMFakeSendNetBufferLists @ 0x1C0024C20 (ndisMFakeSendNetBufferLists.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00267D0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C00268AC (ndisFLoopbackNetBufferLists.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026D64 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C0055D50 (ndisMSendNetBufferListsToPackets.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0067948 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

void __stdcall NdisSendNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  KIRQL v4; // r11
  __int64 v5; // rdi
  NDIS_PORT_NUMBER v6; // r13d
  NDIS_HANDLE v7; // r8
  unsigned int DatapathEventsMask; // esi
  unsigned int v10; // r14d
  int v11; // ecx
  _DWORD *v12; // rcx
  PNET_BUFFER_LIST v13; // rbx
  bool v14; // cl
  unsigned int v15; // eax
  struct _NDIS_FILTER_BLOCK *v16; // rsi
  void *NextSendNetBufferListsContext; // r10
  void (__fastcall *NextSendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r12
  unsigned int Number; // edx
  _NET_BUFFER_LIST **v20; // rdi
  struct _NET_BUFFER_LIST *v21; // rax
  struct _NDIS_FILTER_BLOCK *v22; // r13
  __int64 v23; // rbx
  char v24; // al
  _NET_BUFFER_LIST *v25; // rdx
  void *v26; // r13
  struct _VF_NDIS_DISPATCH_TABLE *v27; // rax
  __int64 ChildRefCount; // r9
  _NET_BUFFER_LIST *Scratch; // r15
  __int64 NdisReserved2; // r8
  bool v31; // zf
  _NET_BUFFER_LIST *v32; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v33; // rax
  __int64 v34; // r9
  _NET_BUFFER_LIST *v35; // rbx
  __int64 v36; // r8
  struct NDIS_NBL_TRACKER_HANDLE__ *v37; // r10
  unsigned __int64 v38; // rbx
  char v39; // r12
  char v40; // r9
  KIRQL v41; // cl
  struct _NET_BUFFER_LIST *v42; // r8
  unsigned __int64 v43; // rbx
  _SLIST_HEADER *v44; // r12
  __int64 v45; // r13
  unsigned __int64 Alignment; // r10
  unsigned __int64 v47; // rcx
  __int64 v48; // r11
  unsigned __int64 Region; // rax
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rdx
  __int64 v52; // rbx
  __int64 v53; // rax
  PNET_BUFFER_LIST v54; // rax
  int v55; // ecx
  __int64 v56; // rax
  KIRQL v57; // al
  PNET_BUFFER_LIST v58; // rcx
  unsigned int v59; // r9d
  $9AA51D7C58828BF91589D7C4AE47BC25 *FirstNetBuffer; // rax
  int i; // edx
  void *VerifierContext; // rcx
  void *v63; // rcx
  int Context; // [rsp+28h] [rbp-E0h]
  char v65; // [rsp+48h] [rbp-C0h] BYREF
  KIRQL v66; // [rsp+49h] [rbp-BFh] BYREF
  KIRQL v67; // [rsp+4Ah] [rbp-BEh]
  __int16 v68; // [rsp+4Bh] [rbp-BDh]
  KIRQL v69; // [rsp+4Dh] [rbp-BBh]
  struct _NET_BUFFER_LIST *v70; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v71; // [rsp+58h] [rbp-B0h]
  __int64 v72; // [rsp+60h] [rbp-A8h]
  struct NDIS_PCW_CONTEXT v73; // [rsp+68h] [rbp-A0h] BYREF
  struct _NET_BUFFER_LIST *v74; // [rsp+80h] [rbp-88h]
  __int64 v75; // [rsp+88h] [rbp-80h]
  struct NDIS_PCW_CONTEXT v76; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v77[3]; // [rsp+A8h] [rbp-60h] BYREF
  char Parameter[8]; // [rsp+C0h] [rbp-48h] BYREF
  struct _NDIS_FILTER_BLOCK *v79; // [rsp+C8h] [rbp-40h]
  void *v80; // [rsp+D0h] [rbp-38h]
  void (__fastcall *v81)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+D8h] [rbp-30h]
  PNET_BUFFER_LIST v82; // [rsp+E0h] [rbp-28h]
  NDIS_PORT_NUMBER v83; // [rsp+E8h] [rbp-20h]
  __int64 v84; // [rsp+ECh] [rbp-1Ch]
  ULONG v85; // [rsp+F4h] [rbp-14h]
  PNET_BUFFER_LIST v87; // [rsp+140h] [rbp+38h]

  v87 = NetBufferLists;
  v4 = 2;
  v5 = *((_QWORD *)NdisBindingHandle + 2);
  v6 = PortNumber;
  v7 = NdisBindingHandle;
  DatapathEventsMask = *(_DWORD *)(v5 + 48);
  v73.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
  v73.DatapathCyclesMask = *(_DWORD *)(v5 + 80);
  v69 = 2;
  v73.DatapathEventsMask = DatapathEventsMask;
  v73.CurrentCpu = -1;
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
  {
    WPP_SF_qq(70LL, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, NdisBindingHandle, NetBufferLists);
    NetBufferLists = v87;
    v4 = 2;
    v7 = NdisBindingHandle;
  }
  v10 = 0;
  if ( ndisNblTrackerMode )
  {
    v37 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)v7 + 85);
    v38 = *(_QWORD *)(v5 + 2568);
    v39 = ndisNblTrackerEpoch;
    v40 = 0;
    v75 = (__int64)v37;
    v74 = 0LL;
    v41 = (SendFlags & 1) != 0;
    v72 = 0LL;
    v67 = v41;
    v42 = 0LL;
    v66 = v41;
    v65 = 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(v87, v37, 0x8Fu, (void *)v38, (SendFlags & 1) != 0);
      v41 = v67;
      v42 = 0LL;
      v40 = v65;
    }
    v43 = v38 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v43 & 1) != 0 )
      v71 = *(_QWORD *)((v43 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    else
      v71 = v43;
    if ( (v43 & 1) != 0 )
      v43 ^= ((unsigned __int8)v43 ^ (unsigned __int8)(2 * v39)) & 2;
    NetBufferLists = v87;
    v44 = (_SLIST_HEADER *)v87;
    if ( v87 )
    {
      v45 = v75;
      do
      {
        Alignment = v44[22].Alignment;
        v47 = v71;
        v48 = v72;
        do
        {
          if ( v44[22].Alignment != Alignment )
            break;
          if ( !Alignment && !v44[7].Region )
          {
            v56 = ndisSourceHandleFromOwner(v45 & 0xFFFFFFFFFFFFFFFDuLL, NetBufferLists, v42);
            v47 = v71;
            v44[7].Region = v56;
          }
          if ( (Alignment & 4) != 0 || (Region = v44[7].Region) == 0 )
          {
            v44[22].Alignment = v43 | 4;
          }
          else if ( Region != v47 || v44[1].Region )
          {
            v42 = (struct _NET_BUFFER_LIST *)((char *)v42 + 1);
            v44[22].Alignment = v43;
          }
          else
          {
            ++v48;
            v44[22].Alignment = 24LL;
            v42 = (struct _NET_BUFFER_LIST *)((char *)v42 + 1);
          }
          v44 = (_SLIST_HEADER *)v44->Alignment;
        }
        while ( v44 );
        v72 = v48;
        v70 = v42;
        if ( (Alignment & 1) != 0 )
        {
          ndisNblTrackerUpdateOwnershipCount(Alignment, (char *)v74 - (char *)v42, &v66, &v65);
          v42 = v70;
        }
        v74 = v42;
      }
      while ( v44 );
      v41 = v66;
      v6 = PortNumber;
      v40 = v65;
      NetBufferLists = v87;
    }
    v50 = (unsigned __int64)v42 - v72;
    if ( (v43 & 1) != 0 && v50 )
    {
      if ( !v41 && !v40 )
      {
        v41 = KeGetCurrentIrql() == 2;
        v66 = v41;
      }
      v4 = 2;
      v51 = v43 & 0xFFFFFFFFFFFFFFF8uLL;
      v52 = 2 * ((v43 >> 1) & 1);
      if ( v41 )
      {
        DatapathEventsMask = v73.DatapathEventsMask;
        v53 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(v53 + *(_QWORD *)(v51 + 8 * v52 + 40)) += v50;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 8 * v52 + 48), v50);
        DatapathEventsMask = v73.DatapathEventsMask;
      }
      NetBufferLists = v87;
    }
    else
    {
      v4 = 2;
    }
  }
  if ( (DatapathEventsMask & 0x200140) != 0 || (v73.DatapathCyclesMask & 0x40) != 0 )
  {
    if ( (SendFlags & 1) == 0 )
    {
      v57 = KfRaiseIrql(2u);
      NetBufferLists = v87;
      v4 = v57;
      v69 = v57;
    }
    if ( (DatapathEventsMask & 0x40) != 0 )
    {
      ndisPcwAddEvent(&v73, 6uLL, 1uLL);
      DatapathEventsMask = v73.DatapathEventsMask;
      NetBufferLists = v87;
    }
    if ( !v4 && (DatapathEventsMask & 0x200000) != 0 )
    {
      ndisPcwAddEvent(&v73, 0x19uLL, 1uLL);
      DatapathEventsMask = v73.DatapathEventsMask;
      NetBufferLists = v87;
    }
    if ( (DatapathEventsMask & 0x400100) != 0 )
    {
      v58 = NetBufferLists;
      v59 = 0;
      if ( NetBufferLists )
      {
        do
        {
          FirstNetBuffer = ($9AA51D7C58828BF91589D7C4AE47BC25 *)v58->FirstNetBuffer;
          for ( i = 0; FirstNetBuffer; ++i )
            FirstNetBuffer = ($9AA51D7C58828BF91589D7C4AE47BC25 *)FirstNetBuffer->Link.Alignment;
          v58 = (PNET_BUFFER_LIST)v58->Link.Alignment;
          v59 += i;
        }
        while ( v58 );
        NetBufferLists = v87;
      }
      if ( (DatapathEventsMask & 0x100) != 0 )
      {
        ndisPcwAddEvent(&v73, 8uLL, v59);
        DatapathEventsMask = v73.DatapathEventsMask;
        NetBufferLists = v87;
      }
      if ( !v4 && (DatapathEventsMask & 0x400000) != 0 )
      {
        ndisPcwAddEvent(&v73, 0x1AuLL, v59);
        NetBufferLists = v87;
      }
    }
    if ( (v73.DatapathCyclesMask & 0x40) != 0 )
    {
      ndisPcwStartCycleCounter(&v73, 6u);
    }
    else
    {
      if ( v4 == 2 )
        goto LABEL_6;
      KeLowerIrql(v4);
    }
    NetBufferLists = v87;
  }
LABEL_6:
  v11 = *(_DWORD *)(v5 + 2676);
  if ( v11 )
  {
    v55 = v11 - 1;
    if ( v55 )
    {
      if ( v55 == 1 )
        ndisMSendNetBufferListsToPackets(v5, NetBufferLists, v6, SendFlags);
      else
        ndisMFakeSendNetBufferLists(v5, NetBufferLists, v6, SendFlags);
    }
    else
    {
      LOBYTE(Context) = 0;
      ndisMSendNBLToMiniportInternal(v5, NetBufferLists, v6, SendFlags, Context);
    }
LABEL_33:
    NetBufferLists = v87;
    goto LABEL_34;
  }
  v12 = *(_DWORD **)(v5 + 2576);
  v13 = NetBufferLists;
  v70 = NetBufferLists;
  if ( *(_BYTE *)v12 == 5
    && (v12[14] & 0x8000) != 0
    && !v12[84]
    && (*(_BYTE *)(v5 + 91) && (*(_WORD *)(v5 + 1820) > 1u || *(_BYTE *)(v5 + 1999))
     || (SendFlags & 2) != 0
     || (*(_DWORD *)(v5 + 120) & 0x4000) != 0) )
  {
    ndisFLoopbackNetBufferLists(v12, NetBufferLists, (__int64)&v70);
    NetBufferLists = v87;
    v13 = v70;
  }
  if ( v13 )
  {
    v67 = 2;
    v14 = *(_QWORD *)(v5 + 2560) == v5;
    v76.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
    v76.DatapathEventsMask = *(_DWORD *)(v5 + 48);
    v15 = *(_DWORD *)(v5 + 80);
    v76.DatapathCyclesMask = v15;
    v68 = v14;
    v76.CurrentCpu = -1;
    if ( v14 && (v15 & 0x80u) != 0 )
    {
      if ( (SendFlags & 1) == 0 )
      {
        v67 = KfRaiseIrql(2u);
        HIBYTE(v68) = 1;
      }
      ndisPcwStartCycleCounter(&v76, 7u);
    }
    v16 = *(struct _NDIS_FILTER_BLOCK **)(v5 + 2576);
    NextSendNetBufferListsContext = *(void **)(v5 + 2560);
    NextSendNetBufferListsHandler = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))(v5 + 2656);
    v71 = (unsigned __int64)NextSendNetBufferListsContext;
    if ( v16->Header.Type == 17 )
    {
      NextSendNetBufferListsHandler(NextSendNetBufferListsContext, v13, v6, SendFlags);
    }
    else if ( !ndisIterativeDataPathDisabled && ((SendFlags & 1) != 0 || KeGetCurrentIrql() == 2) )
    {
      Number = KeGetPcr()->Prcb.Number;
      v20 = (_NET_BUFFER_LIST **)v77;
      LODWORD(v72) = Number;
      v77[2] = 0LL;
      v21 = v70;
      v77[0] = v70;
      v77[1] = v70;
      v70->Scratch = 0LL;
      v21->ChildRefCount = SendFlags;
      v21->Status = v6;
      if ( v16->Header.Type == 5 )
      {
        while ( *v20 )
        {
          v22 = v16;
          v23 = (__int64)v16->IterativeDataPathTracker[Number];
          v75 = v23;
          v24 = *(_BYTE *)(v23 + 16);
          *(_BYTE *)(v23 + 16) = 1;
          v25 = *v20;
          v65 = v24;
          *v20 = 0LL;
          if ( v25 )
          {
            v26 = (void *)v71;
            do
            {
              v27 = ndisVerifierNdisDispatch;
              ChildRefCount = (unsigned int)v25->ChildRefCount;
              Scratch = (_NET_BUFFER_LIST *)v25->Scratch;
              NdisReserved2 = v25->NdisReserved2;
              v25->ChildRefCount = 0;
              if ( v27 && v16->Header.Type == 5 && (VerifierContext = v16->VerifierContext) != 0LL )
              {
                v27->NdisFilterSendNetBufferListsHandler(
                  v26,
                  v25,
                  NdisReserved2,
                  ChildRefCount,
                  VerifierContext,
                  NextSendNetBufferListsHandler);
              }
              else if ( (char *)NextSendNetBufferListsHandler == (char *)ndisMSendNBLToMiniport )
              {
                LOBYTE(Context) = 0;
                ndisMSendNBLToMiniportInternal(v26, v25, NdisReserved2, ChildRefCount, Context);
              }
              else
              {
                NextSendNetBufferListsHandler(v26, v25, NdisReserved2, ChildRefCount);
              }
              v25 = Scratch;
            }
            while ( Scratch );
            v23 = v75;
            v22 = v16;
            v24 = v65;
            NextSendNetBufferListsContext = (void *)v71;
          }
          *(_BYTE *)(v23 + 16) = 0;
          if ( v24 )
          {
            *(_BYTE *)(v23 + 16) = 1;
            goto LABEL_26;
          }
          v16 = (struct _NDIS_FILTER_BLOCK *)v16->NextSendNetBufferListsObject;
          v20 = (_NET_BUFFER_LIST **)v23;
          NextSendNetBufferListsContext = v22->NextSendNetBufferListsContext;
          NextSendNetBufferListsHandler = v22->NextSendNetBufferListsHandler;
          Number = v72;
          v31 = v16->Header.Type == 5;
          v71 = (unsigned __int64)NextSendNetBufferListsContext;
          if ( !v31 )
            goto LABEL_26;
        }
      }
      else
      {
LABEL_26:
        v32 = *v20;
        if ( *v20 )
        {
          *v20 = 0LL;
          do
          {
            v33 = ndisVerifierNdisDispatch;
            v34 = (unsigned int)v32->ChildRefCount;
            v35 = (_NET_BUFFER_LIST *)v32->Scratch;
            v36 = v32->NdisReserved2;
            v32->ChildRefCount = 0;
            if ( v33 && v16->Header.Type == 5 && (v63 = v16->VerifierContext) != 0LL )
            {
              v33->NdisFilterSendNetBufferListsHandler(
                NextSendNetBufferListsContext,
                v32,
                v36,
                v34,
                v63,
                NextSendNetBufferListsHandler);
            }
            else if ( (char *)NextSendNetBufferListsHandler == (char *)ndisMSendNBLToMiniport )
            {
              LOBYTE(Context) = 0;
              ndisMSendNBLToMiniportInternal(NextSendNetBufferListsContext, v32, v36, v34, Context);
            }
            else
            {
              NextSendNetBufferListsHandler(NextSendNetBufferListsContext, v32, v36, v34);
            }
            NextSendNetBufferListsContext = (void *)v71;
            v32 = v35;
          }
          while ( v35 );
        }
      }
    }
    else
    {
      v79 = v16;
      v80 = NextSendNetBufferListsContext;
      v84 = 0LL;
      v81 = NextSendNetBufferListsHandler;
      v82 = v13;
      v83 = v6;
      v85 = SendFlags;
      if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
      {
        v54 = v13;
        do
        {
          v54->Status = -1073741670;
          v54 = (PNET_BUFFER_LIST)v54->Link.Alignment;
        }
        while ( v54 );
        do
        {
          v13 = (PNET_BUFFER_LIST)v13->Link.Alignment;
          ++v10;
        }
        while ( v13 );
        _InterlockedExchangeAdd(&v16->DroppedSendNbls, v10);
        ndisQueueStackExpansionFallbackNbls(v16, v70, 1u);
      }
    }
    if ( (_BYTE)v68 )
    {
      if ( SLOBYTE(v76.DatapathCyclesMask) < 0 )
        ndisPcwEndCycleCounter(&v76, 7u, 0x14uLL);
      if ( HIBYTE(v68) && v67 != 2 )
        KeLowerIrql(v67);
    }
    goto LABEL_33;
  }
LABEL_34:
  if ( (v73.DatapathCyclesMask & 0x40) != 0 )
  {
    ndisPcwEndCycleCounter(&v73, 6u, 0x13uLL);
    if ( v69 != 2 )
      KeLowerIrql(v69);
    NetBufferLists = v87;
  }
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_qq(71LL, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, NdisBindingHandle, NetBufferLists);
}

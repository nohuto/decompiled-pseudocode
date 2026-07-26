/*
 * XREFs of ndisMOpenAdapter @ 0x1C00E7CD0
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005B088 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C00E75A0 (NdisOpenAdapterEx.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0016800 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     XNoteFilterOpenAdapter @ 0x1C0018B60 (XNoteFilterOpenAdapter.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0018BCC (ndisUpdateCheckForLoopbackFlag.c)
 *     ndisSetupNdis6OpenHandlers @ 0x1C0018BF4 (ndisSetupNdis6OpenHandlers.c)
 *     ethAllocateOpenMulticastBuffer @ 0x1C001965C (ethAllocateOpenMulticastBuffer.c)
 *     XRemoveBindingFromLists @ 0x1C001F4BC (XRemoveBindingFromLists.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 *     Template_jqxq @ 0x1C003EDD0 (Template_jqxq.c)
 *     WPP_SF_qqqL @ 0x1C00446D4 (WPP_SF_qqqL.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     WPP_SF_qqZddZ @ 0x1C005D374 (WPP_SF_qqZddZ.c)
 *     ndisDeQueueOpenOnMiniport @ 0x1C00EB410 (ndisDeQueueOpenOnMiniport.c)
 *     ndisDeQueueOpenOnProtocol @ 0x1C00EB574 (ndisDeQueueOpenOnProtocol.c)
 *     ndisSetOpenToTranslationMode @ 0x1C00F4520 (ndisSetOpenToTranslationMode.c)
 */

void __fastcall ndisMOpenAdapter(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v4; // r12
  _QWORD *v5; // rbp
  __int64 v6; // r15
  char v7; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // cl
  __int64 v14; // rcx
  KIRQL v15; // dl
  unsigned __int8 v16; // r15
  int OpenMulticastBuffer; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h]
  char v25; // [rsp+80h] [rbp+8h]

  v3 = *(_QWORD *)(a2 + 24);
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v25 = 0;
  v7 = 0;
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_qqq(0x25u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v3, a3, a2);
  if ( !ndisReferenceMiniport(a3, 0x2Eu) )
  {
    *a1 = -1073676286;
    goto LABEL_41;
  }
  if ( *(_BYTE *)(v3 + 56) < 6u )
  {
    v5 = *(_QWORD **)(a3 + 1848);
    if ( !v5 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x6D66444Eu);
      v5 = PoolWithTag;
      if ( !PoolWithTag )
      {
        *a1 = -1073741670;
LABEL_83:
        ndisDereferenceMiniport(a3);
        goto LABEL_41;
      }
      memset(PoolWithTag, 0, 0xC0uLL);
      *(_QWORD *)(a3 + 1848) = v5;
      v25 = 1;
    }
    *(_QWORD *)a2 = v5;
  }
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a3 + 24);
  *(_DWORD *)(a2 + 264) = *(unsigned __int16 *)(a3 + 592);
  KeInitializeSpinLock((PKSPIN_LOCK)(a2 + 232));
  ndisMReferenceOpen(a2);
  if ( *(_BYTE *)(a3 + 32) < 6u )
  {
    *(_QWORD *)(a2 + 272) = *(_QWORD *)(*(_QWORD *)(a3 + 3816) + 200LL);
    *(_QWORD *)(a2 + 288) = *(_QWORD *)(a3 + 1808);
    *(_QWORD *)(a2 + 280) = *(_QWORD *)(*(_QWORD *)(a3 + 3816) + 216LL);
  }
  *(_DWORD *)(a2 + 704) = *(unsigned __int8 *)(v3 + 56);
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 24) + 56LL) < 6u )
  {
    *(_QWORD *)(a2 + 112) = ndisMSendPacketCompleteToOpen;
    *(_QWORD *)(a2 + 776) = *(_QWORD *)(v3 + 240);
    *(_QWORD *)(a2 + 120) = *(_QWORD *)(v3 + 248);
    *(_QWORD *)(a2 + 128) = *(_QWORD *)(v3 + 264);
    *(_QWORD *)(a2 + 136) = *(_QWORD *)(v3 + 272);
    *(_QWORD *)(a2 + 200) = *(_QWORD *)(v3 + 256);
    *(_QWORD *)(a2 + 160) = *(_QWORD *)(v3 + 280);
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(v3 + 152);
    *(_QWORD *)(a2 + 784) = ndisCompleteOidRequestToRequest;
  }
  else
  {
    *(_QWORD *)(a2 + 152) = 0LL;
    *(_QWORD *)(a2 + 784) = ndisInvokeOidRequestComplete;
    *(_QWORD *)(a2 + 136) = ndisFakeMiniportCancelSendPackets;
  }
  *(_QWORD *)(a2 + 584) = *(_QWORD *)(v3 + 776);
  *(_QWORD *)(a2 + 592) = *(_QWORD *)(v3 + 784);
  *(_QWORD *)(a2 + 600) = *(_QWORD *)(v3 + 792);
  *(_QWORD *)(a2 + 608) = *(_QWORD *)(v3 + 800);
  *(_QWORD *)(a2 + 616) = *(_QWORD *)(v3 + 808);
  *(_QWORD *)(a2 + 624) = *(_QWORD *)(v3 + 816);
  *(_QWORD *)(a2 + 632) = *(_QWORD *)(v3 + 824);
  *(_QWORD *)(a2 + 640) = *(_QWORD *)(v3 + 832);
  *(_QWORD *)(a2 + 648) = *(_QWORD *)(v3 + 840);
  *(_QWORD *)(a2 + 656) = *(_QWORD *)(v3 + 848);
  *(_QWORD *)(a2 + 664) = *(_QWORD *)(v3 + 856);
  *(_QWORD *)(a2 + 672) = *(_QWORD *)(v3 + 864);
  *(_QWORD *)(a2 + 208) = *(_QWORD *)(v3 + 160);
  *(_QWORD *)(a2 + 216) = *(_QWORD *)(v3 + 168);
  *(_QWORD *)(a2 + 176) = ndisMReset;
  *(_QWORD *)(a2 + 528) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 184) = ndisLegacyRequest;
  *(_QWORD *)(a2 + 192) = ndisMOidRequest;
  *(_QWORD *)(a2 + 824) = ndisMDirectOidRequest;
  *(_QWORD *)(a2 + 104) = ndisMTransferData;
  *(_QWORD *)(a2 + 8) = a2;
  if ( *(_DWORD *)(a3 + 464) == 3 )
  {
    if ( (*(_DWORD *)(a3 + 120) & 0x20000) == 0 )
      *(_QWORD *)(a2 + 96) = ndisMWanSend;
  }
  else
  {
    *(_QWORD *)(a2 + 96) = ndisMSend;
  }
  *(_QWORD *)(a2 + 168) = *(_QWORD *)(a3 + 624);
  if ( *(_DWORD *)(a3 + 464) != 3 )
  {
LABEL_12:
    if ( (*(_DWORD *)(a3 + 120) & 0x20000) == 0 )
      goto LABEL_13;
    goto LABEL_54;
  }
  if ( (*(_DWORD *)(a3 + 120) & 0x20000) == 0 )
  {
    *(_QWORD *)(a2 + 96) = ndisMWanSend;
    goto LABEL_12;
  }
LABEL_54:
  v19 = *(_QWORD *)(a3 + 3816);
  if ( *(_BYTE *)(a3 + 32) >= 6u )
  {
    *(_QWORD *)(a2 + 1136) = *(_QWORD *)(v19 + 552);
    *(_QWORD *)(a2 + 1024) = *(_QWORD *)(*(_QWORD *)(a3 + 3816) + 504LL);
    v20 = *(_QWORD *)(*(_QWORD *)(a3 + 3816) + 200LL);
  }
  else
  {
    *(_QWORD *)(a2 + 1032) = *(_QWORD *)(v19 + 288);
    *(_QWORD *)(a2 + 1024) = *(_QWORD *)(*(_QWORD *)(a3 + 3816) + 248LL);
    v20 = *(_QWORD *)(*(_QWORD *)(a3 + 3816) + 296LL);
  }
  *(_QWORD *)(a2 + 296) = v20;
  *(_QWORD *)(a2 + 1096) = a2 + 1088;
  *(_QWORD *)(a2 + 1088) = a2 + 1088;
  *(_QWORD *)(a2 + 1112) = a2 + 1104;
  *(_QWORD *)(a2 + 1104) = a2 + 1104;
  if ( !*(_QWORD *)(a2 + 96) && !*(_QWORD *)(a2 + 168) )
  {
    *(_QWORD *)(a2 + 96) = ndisMRejectSend;
    *(_QWORD *)(a2 + 168) = ndisMRejectSendPackets;
  }
LABEL_13:
  v11 = *(_QWORD *)(a3 + 3816);
  if ( *(_BYTE *)(a3 + 32) < 6u )
    v12 = *(_QWORD *)(v11 + 296);
  else
    v12 = *(_QWORD *)(v11 + 200);
  *(_QWORD *)(a2 + 296) = v12;
  ndisSetupNdis6OpenHandlers(a2, v3, a3);
  if ( *(_BYTE *)(a3 + 32) < 6u || (v13 = 1, *(_BYTE *)(*(_QWORD *)(a2 + 24) + 56LL) >= 6u) )
    v13 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 24) + 56LL) < 6u && *(_BYTE *)(a3 + 1993) || v13 )
  {
    ndisSetOpenToTranslationMode(a2);
    v21 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6977444Eu);
    *(_QWORD *)(a2 + 800) = v21;
    if ( !v21 )
    {
      *a1 = -1073676281;
      goto LABEL_74;
    }
    *v21 = a3;
    *(_QWORD *)(*(_QWORD *)(a2 + 800) + 8LL) = ndisQueuedStatusUnbindAdapter;
  }
  *(_QWORD *)(a2 + 576) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 560) = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 568) = *(_QWORD *)(a2 + 296);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_qq(0x68u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a3, a2);
  v14 = *(unsigned int *)(a3 + 1520);
  if ( (((_DWORD)v14 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v14 == 3 )
  {
    if ( (unsigned __int8)byte_1C00895CD >= 4u )
      WPP_SF_qq(0x69u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a3, a2);
    if ( (Microsoft_Windows_NDISEnableBits & 0x200) != 0 )
      Template_jqxq(
        v14,
        &OpenFailedMiniportNotStarted,
        (const GUID *)(a3 + 4064),
        a3 + 4064,
        *(_DWORD *)(a3 + 4112),
        *(_QWORD *)(a3 + 4080),
        a2);
  }
  else
  {
    *(_QWORD *)(a2 + 392) = *(_QWORD *)(a3 + 56);
    ++*(_WORD *)(a3 + 1820);
    *(_QWORD *)(a3 + 56) = a2;
    ndisUpdateCheckForLoopbackFlag(a3);
    LOBYTE(v6) = 1;
  }
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
  {
    LODWORD(v22) = (unsigned __int8)v6;
    WPP_SF_qqd(0x6Au, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a3, a2, v22);
  }
  if ( !(_BYTE)v6 )
  {
    *a1 = -1073676281;
    goto LABEL_83;
  }
  v7 = 1;
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_qq(0x2Au, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a2, v3);
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 32));
  if ( *(_BYTE *)(v3 + 42) )
  {
    v16 = 0;
  }
  else
  {
    v16 = 1;
    *(_QWORD *)(a2 + 400) = *(_QWORD *)(v3 + 24);
    *(_QWORD *)(v3 + 24) = a2;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 32), v15);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
  {
    LODWORD(v22) = v16;
    WPP_SF_qqd(0x2Bu, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a2, v3, v22);
  }
  if ( !v16 )
  {
    v4 = 0;
    *a1 = -1073676281;
LABEL_79:
    ndisDeQueueOpenOnMiniport(a2, a3);
LABEL_80:
    if ( v4 )
      ndisDeQueueOpenOnProtocol(a2, v3);
    goto LABEL_83;
  }
  v6 = *(_QWORD *)(a3 + 400);
  v4 = 1;
  if ( v6 )
    XNoteFilterOpenAdapter(*(_QWORD *)(a3 + 400), a2);
  if ( !*(_DWORD *)(a3 + 464) )
  {
    OpenMulticastBuffer = ethAllocateOpenMulticastBuffer(v6, a2);
    *a1 = OpenMulticastBuffer;
    if ( OpenMulticastBuffer )
    {
      *a1 = -1073676281;
LABEL_76:
      if ( v6 )
        XRemoveBindingFromLists(v6, a2);
      goto LABEL_79;
    }
  }
  if ( *(_BYTE *)(v3 + 56) < 6u && v25 )
  {
    v5[10] = ndisMTransferData;
    v5[11] = ndisMReset;
    v5[12] = *(_QWORD *)(a2 + 184);
    v5[9] = *(_QWORD *)(a2 + 96);
  }
  *a1 = 0;
  if ( (unsigned __int8)byte_1C00895D0 >= 4u )
  {
    LODWORD(v24) = *(unsigned __int8 *)(v3 + 57);
    LODWORD(v23) = *(unsigned __int8 *)(v3 + 56);
    WPP_SF_qqZddZ(
      *(unsigned __int8 *)(v3 + 57),
      *(unsigned __int8 *)(v3 + 56),
      a3,
      a2,
      v3 + 72,
      v23,
      v24,
      *(_QWORD *)(a3 + 3912));
LABEL_74:
    if ( !*a1 )
      goto LABEL_41;
    if ( !v7 )
      goto LABEL_80;
    goto LABEL_76;
  }
LABEL_41:
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
  {
    LODWORD(v23) = *a1;
    WPP_SF_qqqL(0x27u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v3, a3, a2, v23);
  }
}

/*
 * XREFs of NdisMCmCreateVc @ 0x1C00F8B40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

NDIS_STATUS __stdcall NdisMCmCreateVc(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE MiniportVcContext,
        PNDIS_HANDLE NdisVcHandle)
{
  KSPIN_LOCK *PoolWithTag; // rax
  KSPIN_LOCK *v10; // rsi
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  _LIST_ENTRY *v15; // rax
  __int64 v16; // rax
  _LIST_ENTRY *v17; // rcx
  _LIST_ENTRY **p_Blink; // r14
  NDIS_STATUS v19; // ebp
  _LIST_ENTRY *v20; // rax
  _LIST_ENTRY *v21; // rax

  if ( !NdisAfHandle )
    return -1073741823;
  *NdisVcHandle = 0LL;
  PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6F63444Eu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memset(PoolWithTag, 0, 0x90uLL);
  KeInitializeSpinLock(v10 + 1);
  v11 = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x158uLL, 0x6F63444Eu);
  v12 = v11;
  if ( !v11 )
  {
    ExFreePoolWithTag(v10, 0);
    return -1073741670;
  }
  memset(v11, 0, 0x158uLL);
  KeInitializeSpinLock((PKSPIN_LOCK)&v12[1]);
  v12[12].Flink = (_LIST_ENTRY *)MiniportAdapterHandle;
  v13 = *((_QWORD *)MiniportAdapterHandle + 477);
  if ( *((_BYTE *)MiniportAdapterHandle + 32) < 6u )
  {
    v12[13].Flink = *(_LIST_ENTRY **)(v13 + 280);
    v12[15].Flink = 0LL;
  }
  else
  {
    v12[15].Flink = *(_LIST_ENTRY **)(v13 + 536);
  }
  v12[13].Blink = *(_LIST_ENTRY **)(*((_QWORD *)MiniportAdapterHandle + 477) + 512LL);
  v12[14].Flink = *(_LIST_ENTRY **)(*((_QWORD *)MiniportAdapterHandle + 477) + 520LL);
  v12[14].Blink = *(_LIST_ENTRY **)(*((_QWORD *)MiniportAdapterHandle + 477) + 528LL);
  v10[15] = (KSPIN_LOCK)MiniportAdapterHandle;
  v10[16] = (KSPIN_LOCK)MiniportVcContext;
  v12[12].Blink = (_LIST_ENTRY *)MiniportVcContext;
  v12[4].Blink = (_LIST_ENTRY *)v10;
  v12->Blink = (_LIST_ENTRY *)((char *)v10 + 4);
  v12[4].Flink = (_LIST_ENTRY *)NdisAfHandle;
  LODWORD(v12->Flink) = 1;
  v12[5].Flink = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 46);
  v12[8].Blink = 0LL;
  v10[2] = *((_QWORD *)NdisAfHandle + 46);
  v14 = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL);
  if ( *(_BYTE *)(v14 + 56) < 6u )
  {
    v10[6] = *(_QWORD *)(v14 + 304);
    v10[7] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 312LL);
  }
  else
  {
    v10[8] = *(_QWORD *)(v14 + 216);
    v10[9] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 208LL);
  }
  if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
  {
    v12[7].Flink = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 36);
    v12[7].Blink = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 41);
    v15 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 44);
  }
  else
  {
    v12[7].Flink = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 17);
    v12[7].Blink = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 22);
    v15 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 25);
  }
  v12[8].Flink = v15;
  if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
  {
    v12[10].Blink = *(_LIST_ENTRY **)(*((_QWORD *)NdisAfHandle + 4) + 96LL);
    v12[11].Flink = *(_LIST_ENTRY **)(*((_QWORD *)NdisAfHandle + 4) + 104LL);
    v16 = *((_QWORD *)NdisAfHandle + 4);
  }
  else
  {
    v12[10].Blink = *(_LIST_ENTRY **)(*((_QWORD *)NdisAfHandle + 3) + 96LL);
    v12[11].Flink = *(_LIST_ENTRY **)(*((_QWORD *)NdisAfHandle + 3) + 104LL);
    v16 = *((_QWORD *)NdisAfHandle + 3);
  }
  v17 = *(_LIST_ENTRY **)(v16 + 112);
  v12[9].Flink = (_LIST_ENTRY *)MiniportVcContext;
  v12[11].Blink = v17;
  v10[11] = (KSPIN_LOCK)MiniportVcContext;
  p_Blink = &v12[1].Blink;
  v19 = (*(__int64 (__fastcall **)(_QWORD, _LIST_ENTRY *, _LIST_ENTRY **))(*((_QWORD *)NdisAfHandle + 46) + 1040LL))(
          *((_QWORD *)NdisAfHandle + 47),
          v12,
          &v12[1].Blink);
  if ( v19 )
  {
    ExFreePoolWithTag(v10, 0);
    ExFreePoolWithTag(v12, 0);
    v12 = 0LL;
    goto LABEL_38;
  }
  v10[3] = (KSPIN_LOCK)*p_Blink;
  v12[6].Blink = *p_Blink;
  v12[6].Flink = *(_LIST_ENTRY **)(*((_QWORD *)NdisAfHandle + 46) + 1048LL);
  ExInterlockedInsertHeadList(
    (PLIST_ENTRY)(*((_QWORD *)NdisAfHandle + 46) + 1104LL),
    v12 + 2,
    (PKSPIN_LOCK)(*((_QWORD *)NdisAfHandle + 46) + 232LL));
  v10[5] = (KSPIN_LOCK)v12;
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 56LL) < 6u )
  {
    if ( LOBYTE(v12[12].Flink[2].Flink) >= 6u )
    {
      if ( (unsigned __int8)byte_1C00895DA >= 4u )
        WPP_SF_(0x20u, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids);
      v12[15].Blink = 0LL;
      v12[16].Flink = (_LIST_ENTRY *)ndisMCoSendNetBufferListsCompleteToNdisPackets;
      v12[16].Blink = (_LIST_ENTRY *)ndisCoSendPacketsToNetBufferLists;
      v20 = (_LIST_ENTRY *)ndisMCoIndicateReceiveNetBufferListsToNdisPacket;
      goto LABEL_32;
    }
    if ( (unsigned __int8)byte_1C00895DA >= 4u )
      WPP_SF_(0x21u, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids);
    v12[15].Blink = 0LL;
    v12[16].Blink = (_LIST_ENTRY *)ndisCoSendPacketsToNdisPackets;
    v12[17].Flink = (_LIST_ENTRY *)ndisMCoSendCompleteToNdisPacket;
    v21 = (_LIST_ENTRY *)ndisMCoIndicateReceiveNdisPacketToNdisPacket;
LABEL_36:
    v12[16].Flink = 0LL;
    v12[17].Blink = v21;
    v12[18].Flink = 0LL;
    goto LABEL_38;
  }
  if ( LOBYTE(v12[12].Flink[2].Flink) < 6u )
  {
    if ( (unsigned __int8)byte_1C00895DA >= 4u )
      WPP_SF_(0x1Fu, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids);
    v12[16].Blink = 0LL;
    v12[15].Blink = (_LIST_ENTRY *)ndisCoSendNetBufferListsToNdisPacket;
    v12[17].Flink = (_LIST_ENTRY *)ndisMCoSendCompleteToNetBufferLists;
    v21 = (_LIST_ENTRY *)ndisMCoIndicateReceiveNdisPacketToNetBufferLists;
    goto LABEL_36;
  }
  if ( (unsigned __int8)byte_1C00895DA >= 4u )
    WPP_SF_(0x1Eu, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids);
  v12[16].Blink = 0LL;
  v12[15].Blink = (_LIST_ENTRY *)ndisCoSendNetBufferListsToNetBufferLists;
  v12[16].Flink = (_LIST_ENTRY *)ndisMCoSendNetBufferListsCompleteToNetBufferLists;
  v20 = (_LIST_ENTRY *)ndisMCoIndicateReceiveNetBufferListsToNetBufferLists;
LABEL_32:
  v12[17].Blink = 0LL;
  v12[17].Flink = 0LL;
  v12[18].Flink = v20;
LABEL_38:
  *NdisVcHandle = v12;
  return v19;
}

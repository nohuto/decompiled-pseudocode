/*
 * XREFs of ndisMFreeSGList @ 0x1C0048020
 * Callers:
 *     ndisMAbortPackets @ 0x1C00136C4 (ndisMAbortPackets.c)
 *     ndisMAllocSGListS @ 0x1C0047B10 (ndisMAllocSGListS.c)
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C004E4C0 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C004E590 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C004FD30 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C00501D0 (ndisMDeferredSendSG.c)
 *     ndisMSendCompleteSG @ 0x1C0050C70 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0050E50 (ndisMSendCompleteX.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C00515E0 (ndisMSendPacketsSGToMiniport.c)
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x1C0024ABC (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMFreeSGList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  _SLIST_ENTRY *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  struct _MDL *v14; // rcx
  char *v15; // rbx

  v3 = *(unsigned __int16 *)(a2 + 42);
  v5 = *(_QWORD *)(a1 + 504);
  LOBYTE(a3) = 1;
  v6 = *(_QWORD *)(v3 + a2 + 80);
  *(_QWORD *)(v3 + a2 + 80) = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 8LL) + 96LL))(
    *(_QWORD *)(v5 + 24),
    v6,
    a3);
  v7 = *(_DWORD *)(a2 + 36);
  if ( (v7 & 0x2000) != 0 )
  {
    *(_DWORD *)(a2 + 36) = v7 & 0xFFFFDFFF;
    v8 = *(unsigned __int16 *)(a2 + 42);
    v9 = *(_SLIST_ENTRY **)(v8 + a2 + 72);
    *(_QWORD *)(v8 + a2 + 72) = 0LL;
    v10 = *(_QWORD *)(v5 + 64);
    v11 = KeGetPcr()->Prcb.Number + 1;
    if ( (unsigned int)v11 >= *(_DWORD *)v10 )
      v11 = (unsigned int)(*(_DWORD *)v10 - 1);
    v12 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 8 * v11);
    if ( !*(_BYTE *)(v12 + 112) )
      PplpLazyInitializeLookasideList(v10, *(_QWORD *)(*(_QWORD *)(v10 + 32) + 8 * v11));
    ++*(_DWORD *)(v12 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v12) < *(_WORD *)(v12 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v12, v9);
    }
    else
    {
      ++*(_DWORD *)(v12 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v12 + 56))(v9, v12);
    }
  }
  else if ( (v7 & 0x800) != 0 )
  {
    *(_DWORD *)(a2 + 36) = v7 & 0xFFFFF7FF;
    v13 = *(unsigned __int16 *)(a2 + 42);
    v14 = *(struct _MDL **)(v13 + a2 + 72);
    *(_QWORD *)(v13 + a2 + 72) = 0LL;
    v15 = (char *)v14->StartVa + v14->ByteOffset;
    IoFreeMdl(v14);
    ExFreePoolWithTag(v15, 0);
  }
}

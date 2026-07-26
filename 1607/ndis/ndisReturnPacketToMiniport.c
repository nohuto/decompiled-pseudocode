/*
 * XREFs of ndisReturnPacketToMiniport @ 0x1C0067498
 * Callers:
 *     NdisReturnPackets @ 0x1C005CF80 (NdisReturnPackets.c)
 *     ndisReturnNetBufferListsToPackets @ 0x1C0067360 (ndisReturnNetBufferListsToPackets.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001C7E0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ndisMQueueWorkItem @ 0x1C005E968 (ndisMQueueWorkItem.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0061DDC (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisReturnPacketToMiniport(__int64 a1, struct _NDIS_PACKET *a2)
{
  char v4; // si
  void (__fastcall *v5)(_QWORD, struct _NDIS_PACKET *); // r8
  struct _NDIS_STACK_RESERVED *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v6);
  if ( (*(_DWORD *)(a1 + 120) & 0x40000) != 0 )
    goto LABEL_7;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2492766;
  if ( !*(_BYTE *)(a1 + 89) )
  {
    *(_BYTE *)(a1 + 89) = 1;
    v4 = 1;
    *(_DWORD *)(a1 + 1860) = 2492767;
    *(_QWORD *)(a1 + 1864) = KeGetCurrentThread();
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x40000) != 0 || v4 )
  {
LABEL_7:
    v5 = *(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(a1 + 2168);
    *(_QWORD *)v6 = 0LL;
    --*(_DWORD *)&a2[-1].ProtocolReserved[4];
    if ( (a2[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&a2[-1].ProtocolReserved[4] == -1 )
      NDIS_FREE_XFER_DATA_PACKET(a2);
    else
      v5(*(_QWORD *)(a1 + 2176), a2);
    if ( (*(_DWORD *)(a1 + 120) & 0x8000) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 1828));
  }
  else
  {
    *(_QWORD *)v6 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 152) = a2;
    ndisMQueueWorkItem(a1, 2, 0LL);
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x40000) == 0 )
  {
    if ( v4 )
    {
      *(_DWORD *)(a1 + 1860) = 0;
      *(_QWORD *)(a1 + 1864) = 0LL;
      *(_BYTE *)(a1 + 89) = 0;
    }
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
  }
}

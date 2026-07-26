/*
 * XREFs of ndisIfDetachMiniportBlock @ 0x1C0012CF8
 * Callers:
 *     ndisCheckIfTypeMismatch @ 0x1C005D498 (ndisCheckIfTypeMismatch.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C009E470 (ndisIfRemoveIfBlockMiniportAssociation.c)
 * Callees:
 *     IFBLOCK_DECREMENT_REF @ 0x1C0014E64 (IFBLOCK_DECREMENT_REF.c)
 *     ndisMDereferenceIfBlock @ 0x1C0017D0C (ndisMDereferenceIfBlock.c)
 *     NdisFreeRefCount @ 0x1C001BCE0 (NdisFreeRefCount.c)
 */

void __fastcall ndisIfDetachMiniportBlock(__int64 a1)
{
  __int64 v1; // rsi
  KIRQL v3; // al
  __int64 v4; // rdx
  KIRQL v5; // al
  KIRQL v6; // bl
  void *v7; // rcx
  KIRQL v8; // bl
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 4096);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  *(_BYTE *)(v1 + 1403) = 0;
  *(_BYTE *)(a1 + 4088) = 0;
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v3);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  LOBYTE(v4) = -1;
  *(_QWORD *)(a1 + 4104) = &Event;
  ndisMDereferenceIfBlock(a1, v4);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  *(_QWORD *)(a1 + 4104) = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  *(_QWORD *)(a1 + 4096) = 0LL;
  v6 = v5;
  v7 = *(void **)(v1 + 1448);
  *(_QWORD *)(v1 + 1416) = 0LL;
  NdisFreeRefCount(v7);
  *(_QWORD *)(v1 + 1448) = 0LL;
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v6);
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF((PVOID)v1);
  KeReleaseSpinLock(&ndisIfListLock, v8);
}

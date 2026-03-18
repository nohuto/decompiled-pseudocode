/*
 * XREFs of IopInterlockedInsertTailList @ 0x14013FBA8
 * Callers:
 *     IoRegisterBootDriverReinitialization @ 0x140543320 (IoRegisterBootDriverReinitialization.c)
 *     IoRegisterDriverReinitialization @ 0x140543394 (IoRegisterDriverReinitialization.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall IopInterlockedInsertTailList(__int64 a1, _QWORD *a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rcx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = *(_QWORD **)(a1 + 8);
  *a2 = a1;
  a2[1] = v5;
  if ( *v5 != a1 )
    __fastfail(3u);
  *v5 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  KeReleaseQueuedSpinLock(0xAuLL, v4);
}

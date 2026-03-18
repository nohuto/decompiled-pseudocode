/*
 * XREFs of DequeueAndReadyContext @ 0x1C001F5E4
 * Callers:
 *     WriteCookAccess @ 0x1C001F3B0 (WriteCookAccess.c)
 *     SignalASLEvent @ 0x1C0047264 (SignalASLEvent.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C0003260 (InsertReadyQueue.c)
 *     ListRemoveHead @ 0x1C001F638 (ListRemoveHead.c)
 */

__int64 __fastcall DequeueAndReadyContext(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax

  v2 = 0LL;
  byte_1C005A0C8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v3 = ListRemoveHead(a1);
  if ( v3 )
  {
    v2 = v3 - 32;
    *(_QWORD *)(v3 - 32 + 56) = 0LL;
    InsertReadyQueue((PSLIST_ENTRY)(v3 - 32), 1);
  }
  KeReleaseSpinLock(&SpinLock, byte_1C005A0C8);
  return v2;
}

/*
 * XREFs of ExInterlockedInsertTailList @ 0x1400E23E0
 * Callers:
 *     CcCanIWrite @ 0x14002F540 (CcCanIWrite.c)
 *     IoWMIWriteEvent @ 0x1400E2250 (IoWMIWriteEvent.c)
 *     CcDeferWrite @ 0x1401A8E40 (CcDeferWrite.c)
 *     WheapWorkQueueAddItem @ 0x14021785C (WheapWorkQueueAddItem.c)
 *     IoInitializeTimer @ 0x14054EC5C (IoInitializeTimer.c)
 *     VfAllocateAdapterChannel @ 0x1406BA16C (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1406BA330 (VfAllocateAdapterChannelEx.c)
 *     VerifierExInterlockedInsertTailList @ 0x1406C03A8 (VerifierExInterlockedInsertTailList.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1400E2444 (ExpAcquireSpinLockDisabled.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // al
  _LIST_ENTRY *Flink; // rcx
  char v8; // dl
  PLIST_ENTRY result; // rax

  v6 = ExpAcquireSpinLockDisabled(Lock);
  Flink = ListHead->Flink;
  v8 = v6;
  result = ListHead->Blink;
  ListEntry->Flink = ListHead;
  ListEntry->Blink = result;
  if ( result->Flink != ListHead )
    __fastfail(3u);
  result->Flink = ListEntry;
  ListHead->Blink = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v8 )
    _enable();
  if ( Flink == result )
    return 0LL;
  return result;
}

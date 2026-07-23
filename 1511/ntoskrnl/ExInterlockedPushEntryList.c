/*
 * XREFs of ExInterlockedPushEntryList @ 0x14012F774
 * Callers:
 *     VerifierExInterlockedPushEntryList @ 0x1406C03B8 (VerifierExInterlockedPushEntryList.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1400E2444 (ExpAcquireSpinLockDisabled.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPushEntryList(
        PSINGLE_LIST_ENTRY ListHead,
        PSINGLE_LIST_ENTRY ListEntry,
        PKSPIN_LOCK Lock)
{
  bool v6; // al
  _SINGLE_LIST_ENTRY *Next; // rcx

  v6 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock, (__int64)ListEntry, (__int64)Lock);
  Next = ListHead->Next;
  ListEntry->Next = ListHead->Next;
  ListHead->Next = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v6 )
    _enable();
  return Next;
}

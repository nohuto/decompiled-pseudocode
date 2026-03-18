/*
 * XREFs of ExInterlockedPopEntryList @ 0x14012F6A8
 * Callers:
 *     VerifierExInterlockedPopEntryList @ 0x1406C03B0 (VerifierExInterlockedPopEntryList.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1400E2444 (ExpAcquireSpinLockDisabled.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPopEntryList(PSINGLE_LIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  __int64 v2; // r8
  bool v5; // cl
  PSINGLE_LIST_ENTRY result; // rax

  v5 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock, (__int64)Lock, v2);
  result = ListHead->Next;
  if ( ListHead->Next )
    ListHead->Next = result->Next;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v5 )
    _enable();
  return result;
}

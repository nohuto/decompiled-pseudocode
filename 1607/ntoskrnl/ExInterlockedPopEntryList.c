/*
 * XREFs of ExInterlockedPopEntryList @ 0x14022E600
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1400A614C (ExpAcquireSpinLockDisabled.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPopEntryList(PSINGLE_LIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  bool v4; // cl
  PSINGLE_LIST_ENTRY result; // rax

  v4 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock);
  result = ListHead->Next;
  if ( ListHead->Next )
    ListHead->Next = result->Next;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v4 )
    _enable();
  return result;
}

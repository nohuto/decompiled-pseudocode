/*
 * XREFs of ExInterlockedInsertHeadList @ 0x1400E237C
 * Callers:
 *     CcCanIWrite @ 0x14002F540 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1401A8E40 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x1406BC758 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x1406BDC1C (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x1406BE300 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1406BE384 (ViSpecialAllocateCommonBuffer.c)
 *     VerifierExInterlockedInsertHeadList @ 0x1406C03A0 (VerifierExInterlockedInsertHeadList.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1400E2444 (ExpAcquireSpinLockDisabled.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // al
  _LIST_ENTRY *Blink; // rcx
  char v8; // dl
  PLIST_ENTRY result; // rax

  v6 = ExpAcquireSpinLockDisabled(Lock);
  Blink = ListHead->Blink;
  v8 = v6;
  result = ListHead->Flink;
  ListEntry->Flink = ListHead->Flink;
  ListEntry->Blink = ListHead;
  if ( result->Blink != ListHead )
    __fastfail(3u);
  result->Blink = ListEntry;
  ListHead->Flink = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v8 )
    _enable();
  if ( result == Blink )
    return 0LL;
  return result;
}

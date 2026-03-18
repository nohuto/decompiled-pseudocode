/*
 * XREFs of ExInterlockedInsertHeadList @ 0x1400A7B70
 * Callers:
 *     CcCanIWrite @ 0x1400209F0 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1401B1A08 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x1407087CC (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x140709C74 (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x14070A358 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14070A3DC (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1400A7BD4 (ExpAcquireSpinLockDisabled.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // al
  struct _LIST_ENTRY *Blink; // rcx
  char v8; // dl
  PLIST_ENTRY result; // rax

  v6 = ExpAcquireSpinLockDisabled(Lock);
  Blink = ListHead->Blink;
  v8 = v6;
  result = ListHead->Flink;
  if ( ListHead->Flink->Blink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = result;
  ListEntry->Blink = ListHead;
  result->Blink = ListEntry;
  ListHead->Flink = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v8 )
    _enable();
  if ( result == Blink )
    return 0LL;
  return result;
}

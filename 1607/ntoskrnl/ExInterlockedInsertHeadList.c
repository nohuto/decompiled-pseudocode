/*
 * XREFs of ExInterlockedInsertHeadList @ 0x1400A60E8
 * Callers:
 *     CcCanIWrite @ 0x140020570 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1401B18EC (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x1407087FC (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x140709CA4 (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x14070A388 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14070A40C (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1400A614C (ExpAcquireSpinLockDisabled.c)
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

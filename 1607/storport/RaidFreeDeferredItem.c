/*
 * XREFs of RaidFreeDeferredItem @ 0x1C00183DC
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0018290 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterWmiDeferredRoutine @ 0x1C0039420 (RaidAdapterWmiDeferredRoutine.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaidFreeDeferredItem(union _SLIST_HEADER *a1, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)(unsigned int)_InterlockedCompareExchange(
                                         (volatile signed __int32 *)(a2 + 16),
                                         134684677,
                                         134684676);
  if ( (_DWORD)result != 134684676 )
  {
    *(_DWORD *)(a2 + 16) = 134684675;
    return ExpInterlockedPushEntrySList(a1 + 5, (PSLIST_ENTRY)a2);
  }
  return result;
}

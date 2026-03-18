/*
 * XREFs of PfpPrefetchSharedDeref @ 0x1404DD1A0
 * Callers:
 *     PfSnCleanupPrefetchHeader @ 0x1404DB060 (PfSnCleanupPrefetchHeader.c)
 *     PfpPrefetchRequestPerform @ 0x1404DC998 (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140630DFC (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpQueryFileExtentsRequest @ 0x140630EFC (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PfpPrefetchSharedDeref(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 v3; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 15, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}

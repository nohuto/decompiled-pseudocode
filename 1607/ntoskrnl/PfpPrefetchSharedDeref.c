/*
 * XREFs of PfpPrefetchSharedDeref @ 0x1403EDC40
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1403ECF84 (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x14050A4E0 (PfSnCleanupPrefetchHeader.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140669018 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpQueryFileExtentsRequest @ 0x140669118 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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

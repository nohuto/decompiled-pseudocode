/*
 * XREFs of RmpPolicyGetUsageLimitsAndMetricsForAcquire @ 0x18000482C
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001A274 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV-$list@V-$CC.c)
 * Callees:
 *     RmpPolicyGetCurrentUsageLimits @ 0x18000705C (RmpPolicyGetCurrentUsageLimits.c)
 *     RmpPolicyPopulateActivityHostMetrics @ 0x180007510 (RmpPolicyPopulateActivityHostMetrics.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpPolicyGetUsageLimitsAndMetricsForAcquire(int a1, __int64 a2, void *a3, __int64 a4)
{
  memset_0(a3, 0, 0x88uLL);
  RmpPolicyGetCurrentUsageLimits(a2, a2 + 64, a3, a4);
  RmpPolicyPopulateActivityHostMetrics(a1, 0, a2 + 1360, 67, (__int64)RmpPolicyFilterActivityHostWithFlags, 2LL);
  return RmpPolicyPopulateFastCommitUse(a4, *(unsigned int *)(a2 + 1396), *(_QWORD *)(a2 + 1360));
}

/*
 * XREFs of ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C0026A28
 * Callers:
 *     ndisInterruptDpc @ 0x1C0006D00 (ndisInterruptDpc.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C000A800 (ndisQueuedMiniportDpcWorkItem.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 */

void __fastcall __noreturn ndisReportRefcountImbalance(ULONG_PTR BugCheckParameter3, unsigned __int8 a2)
{
  ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, a2);
}

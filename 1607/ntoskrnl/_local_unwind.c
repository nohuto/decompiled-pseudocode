/*
 * XREFs of _local_unwind @ 0x14014D1B0
 * Callers:
 *     ExpTimerDpcRoutine @ 0x140001410 (ExpTimerDpcRoutine.c)
 *     IopTimerDispatch @ 0x1400017F4 (IopTimerDispatch.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1400A9690 (KiBalanceSetManagerDeferredRoutine.c)
 *     IopIrpStackProfilerDpcRoutine @ 0x1400A9E54 (IopIrpStackProfilerDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1400B3F20 (ExpTimeRefreshDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x1400B4244 (PopThermalZoneDpc.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x140126A90 (CmpEnableLazyFlushDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x1401351A8 (ExpTimeZoneDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x140135300 (ExpCenturyDpcRoutine.c)
 *     KiVerifyXcpt15 @ 0x1407772E0 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x1407B1760 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt1 @ 0x1407B18C4 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x1407B1904 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x1407B1944 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x1407B1984 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x1407B19C4 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x1407B1A10 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x1407B1A5C (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x1407B1AA8 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x1407B1AF4 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x1407B1C38 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x1407B1CA0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x1407B1CE8 (KiVerifyXcpt14.c)
 *     KiVerifyXcptFinally @ 0x1407B1D54 (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwindEx @ 0x1400F5660 (RtlUnwindEx.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  struct _CONTEXT ContextRecord; // [rsp+0h] [rbp-4D8h] BYREF

  RtlUnwindEx(a1, a2, 0LL, 0LL, &ContextRecord, 0LL);
}

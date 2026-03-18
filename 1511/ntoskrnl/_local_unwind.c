/*
 * XREFs of _local_unwind @ 0x140143D90
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x14000163C (ExpCenturyDpcRoutine.c)
 *     IopTimerDispatch @ 0x140001768 (IopTimerDispatch.c)
 *     IopIrpStackProfilerDpcRoutine @ 0x1400E8A9C (IopIrpStackProfilerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1400E9D60 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpTimerDpcRoutine @ 0x1400ED4E0 (ExpTimerDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x1400F2540 (ExpTimeZoneDpcRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x1400F2AA8 (CmpEnableLazyFlushDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x140103B8C (PopThermalZoneDpc.c)
 *     ExpTimeRefreshDpcRoutine @ 0x14012E69C (ExpTimeRefreshDpcRoutine.c)
 *     KiVerifyXcpt15 @ 0x14072D2A0 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x1407670E4 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt1 @ 0x140767248 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140767288 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x1407672C8 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140767308 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140767348 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140767394 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x1407673E0 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x14076742C (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140767478 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x1407675BC (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140767624 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x14076766C (KiVerifyXcpt14.c)
 *     KiVerifyXcptFinally @ 0x1407676D8 (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwindEx @ 0x140024DF0 (RtlUnwindEx.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  struct _CONTEXT ContextRecord; // [rsp+0h] [rbp-4D8h] BYREF

  RtlUnwindEx(a1, a2, 0LL, 0LL, &ContextRecord, 0LL);
}

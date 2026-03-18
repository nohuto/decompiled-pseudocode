/*
 * XREFs of _local_unwind @ 0x140171E10
 * Callers:
 *     IopIrpStackProfilerDpcRoutine @ 0x140125928 (IopIrpStackProfilerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140126044 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpTimerDpcRoutine @ 0x14012B7B8 (ExpTimerDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x14012F780 (PopThermalZoneDpc.c)
 *     IopTimerDispatch @ 0x140130388 (IopTimerDispatch.c)
 *     ExpCenturyDpcRoutine @ 0x1401311FC (ExpCenturyDpcRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x140133AE4 (CmpEnableLazyFlushDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1401397F8 (ExpTimeRefreshDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140139CAC (ExpTimeZoneDpcRoutine.c)
 *     KiVerifyXcpt15 @ 0x14079A2A0 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x1407D9D38 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt1 @ 0x1407D9E9C (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x1407D9EDC (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x1407D9F1C (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x1407D9F5C (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x1407D9F9C (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x1407D9FE8 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x1407DA034 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x1407DA080 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x1407DA0CC (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x1407DA210 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x1407DA278 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x1407DA2C0 (KiVerifyXcpt14.c)
 *     KiVerifyXcptFinally @ 0x1407DA32C (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwindEx @ 0x14001C500 (RtlUnwindEx.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  struct _CONTEXT ContextRecord; // [rsp+0h] [rbp-4D8h] BYREF

  RtlUnwindEx(a1, a2, 0LL, 0LL, &ContextRecord, 0LL);
}

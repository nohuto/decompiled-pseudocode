/*
 * XREFs of WPP_SF_qdd @ 0x1C002B014
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C002A4B0 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_222db84838ff3f85fffe5432ece91366_Traceguids);
}

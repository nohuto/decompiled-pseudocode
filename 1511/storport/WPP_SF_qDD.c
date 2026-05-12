/*
 * XREFs of WPP_SF_qdd @ 0x1C002790C
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C00149D0 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.ActiveThreadCount)(
           a1,
           43LL,
           &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids);
}

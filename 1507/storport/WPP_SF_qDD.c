/*
 * XREFs of WPP_SF_qdd @ 0x1C0025820
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0012980 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.ActiveThreadCount)(
           a1,
           43LL,
           &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids);
}

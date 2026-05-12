/*
 * XREFs of WPP_SF_dddd @ 0x1C002C3F0
 * Callers:
 *     StorPortDeviceBusy @ 0x1C0029E10 (StorPortDeviceBusy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_dddd(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.ActiveThreadCount)(
           a1,
           43LL,
           &WPP_a7c96fc4c7d54bab161cb0c6c8756061_Traceguids);
}

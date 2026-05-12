/*
 * XREFs of WPP_SF_qqDDD @ 0x1C0036280
 * Callers:
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C0011174 (RaidUnitHandleSpecialErrorConditions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqDDD(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.ActiveThreadCount)(
           a1,
           43LL,
           &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids);
}

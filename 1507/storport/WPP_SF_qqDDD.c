/*
 * XREFs of WPP_SF_qqDDD @ 0x1C0034708
 * Callers:
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000EE60 (RaidUnitHandleSpecialErrorConditions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqDDD(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.ActiveThreadCount)(
           a1,
           43LL,
           &WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids);
}

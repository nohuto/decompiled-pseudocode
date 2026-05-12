/*
 * XREFs of WPP_SF_qdddD @ 0x1C0027C8C
 * Callers:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C000EAC4 (RaidBusEnumeratorIssueSynchronousRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdddD(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.ActiveThreadCount)(
           a1,
           43LL,
           &WPP_db7eb2d060c35673e0bd52165bc92804_Traceguids);
}

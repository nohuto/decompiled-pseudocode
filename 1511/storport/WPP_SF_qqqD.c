/*
 * XREFs of WPP_SF_qqqD @ 0x1C0030100
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C0008C90 (RaidPowerPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqqD(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.ActiveThreadCount)(
           a1,
           43LL,
           &WPP_bd41b0a71fae7a1a3137e05edf146d17_Traceguids);
}

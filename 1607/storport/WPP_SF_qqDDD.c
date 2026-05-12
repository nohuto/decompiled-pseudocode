/*
 * XREFs of WPP_SF_qqDDD @ 0x1C0039334
 * Callers:
 *     RaUnitAsyncError @ 0x1C000C3A0 (RaUnitAsyncError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqDDD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids);
}

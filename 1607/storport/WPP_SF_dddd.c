/*
 * XREFs of WPP_SF_dddd @ 0x1C0030104
 * Callers:
 *     StorPortDeviceBusy @ 0x1C002D990 (StorPortDeviceBusy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_dddd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_adf5a490639137350fe391398fd0549f_Traceguids);
}

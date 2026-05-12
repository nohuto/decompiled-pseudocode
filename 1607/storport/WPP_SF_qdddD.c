/*
 * XREFs of WPP_SF_qdddD @ 0x1C002B30C
 * Callers:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0012A78 (RaidBusEnumeratorIssueSynchronousRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdddD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_0f528954af03336098861edcd0252264_Traceguids);
}

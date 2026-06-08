/*
 * XREFs of CpcReadFeedbackAcquireCallback @ 0x1C0002BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcReadFeedbackAcquireCallback(__int64 a1, __int64 (*a2)(void))
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(), __int64 (*)(void)))(qword_1C0009838 + 112))(
             *(_QWORD *)(qword_1C0009838 + 56),
             0LL,
             CpcAcquirePerformanceCallback,
             a2);
  if ( (int)result < 0 )
    return a2();
  return result;
}

/*
 * XREFs of CpcReadFeedback @ 0x1C00042A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcReadFeedback(__int64 (*a1)(void))
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(), __int64 (*)(void)))(qword_1C000E1A8 + 96))(
             *(_QWORD *)(qword_1C000E1A8 + 56),
             CpcReadFeedbackAcquireCallback,
             a1);
  if ( (int)result < 0 )
    return a1();
  return result;
}

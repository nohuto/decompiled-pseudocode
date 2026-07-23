/*
 * XREFs of KiIntRedirectQueueRequestOnProcessor @ 0x14000C00C
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14000BE60 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall KiIntRedirectQueueRequestOnProcessor(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  ULONG_PTR v3; // rdi
  __int64 result; // rax
  _DWORD v5[44]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = (unsigned int)BugCheckParameter3;
  v5[0] = 1310721;
  memset(&v5[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v5, (unsigned int)v3);
  result = HalRequestIpiSpecifyVector(0LL, v5, a2);
  if ( (int)result < 0 )
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x103uLL, v3, (int)result);
  return result;
}

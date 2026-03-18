/*
 * XREFs of HvlTerminateSecureThread @ 0x1405F6DC0
 * Callers:
 *     KeUnsecureThread @ 0x1401C3234 (KeUnsecureThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall HvlTerminateSecureThread(unsigned int a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  __int64 result; // rax
  unsigned __int8 v6[16]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v7; // [rsp+30h] [rbp-78h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = HvlpEnterIumSecureMode(1u, 9, a1, v6);
  KeLeaveCriticalRegion();
  result = v4;
  *a2 = v7;
  return result;
}

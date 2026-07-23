/*
 * XREFs of VslTerminateSecureThread @ 0x140620C10
 * Callers:
 *     KeUnsecureThread @ 0x1401D2E88 (KeUnsecureThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall VslTerminateSecureThread(unsigned int a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  __int64 result; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v7; // [rsp+30h] [rbp-78h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = VslpEnterIumSecureMode(1, 9LL, a1, (__int64)v6);
  KeLeaveCriticalRegion();
  result = v4;
  *a2 = v7;
  return result;
}

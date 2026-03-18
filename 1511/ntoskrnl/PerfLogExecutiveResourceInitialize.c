/*
 * XREFs of PerfLogExecutiveResourceInitialize @ 0x14021034C
 * Callers:
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1400D9F40 (ExReinitializeResourceLite.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall PerfLogExecutiveResourceInitialize(int a1, __int64 a2, int a3, int a4)
{
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD v6[3]; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+48h] [rbp-38h]
  int KernelStack; // [rsp+4Ch] [rbp-34h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  int v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+5Ch] [rbp-24h]
  _QWORD v12[2]; // [rsp+60h] [rbp-20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  v10 = a1;
  v9 = a2;
  v7 = a3;
  v11 = a4;
  memset(v6, 0, sizeof(v6));
  v12[1] = 48LL;
  KernelStack = (int)KeGetCurrentThread()[1].KernelStack;
  v12[0] = v6;
  return EtwTraceKernelEvent((int)v12, 1, 0x20020000u, 0x52Bu, 22026242);
}

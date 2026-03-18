/*
 * XREFs of HvlTerminateSecureThread @ 0x140670CD0
 * Callers:
 *     KeUnsecureThread @ 0x1401FF1F0 (KeUnsecureThread.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlTerminateSecureThread(unsigned int a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v4; // eax
  struct _KTHREAD *v5; // rdx
  unsigned int v6; // edi
  __int16 v7; // cx
  unsigned __int8 v9[16]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+30h] [rbp-78h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = HvlpEnterIumSecureMode(1u, 9, a1, v9);
  v5 = KeGetCurrentThread();
  v6 = v4;
  v7 = v5->KernelApcDisable + 1;
  v5->KernelApcDisable = v7;
  if ( !v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v5->ApcState.ApcListHead[0].Flink != &v5->152
    && !v5->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  *a2 = v10;
  return v6;
}

/*
 * XREFs of NtSubscribeWnfStateChange @ 0x140501E64
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140501F5C (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall NtSubscribeWnfStateChange(int a1, int a2, int a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // esi
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  __int64 v13; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = 0LL;
  if ( a4 )
  {
    ProbeForWrite(a4, 8uLL, 1u);
    *a4 = 0LL;
  }
  v9 = ExpWnfSubscribeWnfStateChange((unsigned __int64)&v13 & -(__int64)(a4 != 0LL), 0, a1, a2, 0LL, 0LL, a3, 1);
  if ( v9 >= 0 && a4 )
    *a4 = v13;
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v9;
}

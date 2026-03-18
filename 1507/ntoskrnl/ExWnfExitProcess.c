/*
 * XREFs of ExWnfExitProcess @ 0x140504364
 * Callers:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpWnfDeleteScopeById @ 0x1405043FC (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x140505720 (ExpWnfDeleteProcessContext.c)
 */

void __fastcall ExWnfExitProcess(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v4; // rcx
  struct _KTHREAD *v5; // rcx
  __int16 v6; // ax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = *(void **)(v7 + 1696);
  if ( v4 )
    ExpWnfDeleteProcessContext(v4);
  if ( a2 )
    ExpWnfDeleteScopeById(3LL, &v7);
  v5 = KeGetCurrentThread();
  v6 = v5->KernelApcDisable + 1;
  v5->KernelApcDisable = v6;
  if ( !v6
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v5->ApcState.ApcListHead[0].Flink != &v5->152
    && !v5->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}

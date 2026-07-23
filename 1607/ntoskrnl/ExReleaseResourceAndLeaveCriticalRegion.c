/*
 * XREFs of ExReleaseResourceAndLeaveCriticalRegion @ 0x140067C80
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 */

void __stdcall ExReleaseResourceAndLeaveCriticalRegion(PERESOURCE Resource)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int16 v5; // cx
  $2B8565053CDC740D4E4887693DD8AC9E *v6; // rcx

  ExpReleaseResourceForThreadLite((ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread());
  CurrentThread = KeGetCurrentThread();
  v5 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v5;
  if ( !v5 )
  {
    v6 = &CurrentThread->152;
    if ( ($2B8565053CDC740D4E4887693DD8AC9E *)v6->ApcState.ApcListHead[0].Flink != v6
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v6, v1, v2, v3);
    }
  }
}

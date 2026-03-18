/*
 * XREFs of ExReleaseResourceAndLeaveCriticalRegion @ 0x14003F830
 * Callers:
 *     VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot @ 0x1406C9748 (VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 */

void __stdcall ExReleaseResourceAndLeaveCriticalRegion(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  __int16 v2; // cx
  $E81C3296F15336D9BF9B2D43BB137B25 *v3; // rcx

  ExpReleaseResourceForThreadLite((ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread());
  CurrentThread = KeGetCurrentThread();
  v2 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v2;
  if ( !v2 )
  {
    v3 = &CurrentThread->152;
    if ( ($E81C3296F15336D9BF9B2D43BB137B25 *)v3->ApcState.ApcListHead[0].Flink != v3
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v3);
    }
  }
}

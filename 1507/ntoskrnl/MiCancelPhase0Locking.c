/*
 * XREFs of MiCancelPhase0Locking @ 0x1404F5498
 * Callers:
 *     MmResetDriverPaging @ 0x1404F523C (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x1404F5378 (MmPageEntireDriver.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiLockPagableSections @ 0x1407C9688 (MiLockPagableSections.c)
 */

void __fastcall MiCancelPhase0Locking(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int16 v3; // ax

  if ( (*(_DWORD *)(a1 + 104) & 0x400000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    if ( (*(_DWORD *)(a1 + 104) & 0x400000) != 0 )
    {
      MiLockPagableSections(a1, 0LL);
      *(_DWORD *)(a1 + 104) &= ~0x400000u;
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    v3 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v3;
    if ( !v3
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}

/*
 * XREFs of RtlpUnlockAtomTable @ 0x1404216C8
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14000FC20 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14010E670 (RtlDestroyLowBoxAtoms.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1405048B0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlDestroyAtomTable @ 0x14052836C (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x14054E7E4 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1406CBC90 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1406CBD70 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall RtlpUnlockAtomTable(__int64 a1)
{
  ULONG_PTR v1; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v3; // ax

  v1 = a1 + 8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(v1);
  CurrentThread = KeGetCurrentThread();
  v3 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v3;
  if ( !v3
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}

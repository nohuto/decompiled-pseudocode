/*
 * XREFs of PpmCheckCustomRun @ 0x1401399AC
 * Callers:
 *     PpmPerfLatencySensitivityHintWorker @ 0x140133D48 (PpmPerfLatencySensitivityHintWorker.c)
 *     PoLatencySensitivityHint @ 0x14013942C (PoLatencySensitivityHint.c)
 *     PopIntSteerSetMode @ 0x140167724 (PopIntSteerSetMode.c)
 *     PpmCheckApplyParkConstraints @ 0x14016791C (PpmCheckApplyParkConstraints.c)
 *     PpmCheckApplyResetNotification @ 0x14023F448 (PpmCheckApplyResetNotification.c)
 *     PpmParkSetLpiCap @ 0x1402427F8 (PpmParkSetLpiCap.c)
 *     PpmCheckApplyPerfConstraints @ 0x14058430C (PpmCheckApplyPerfConstraints.c)
 * Callees:
 *     PpmCheckStart @ 0x1400E71A0 (PpmCheckStart.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PpmCheckCustomRun(int a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v3; // ax

  PpmPerfPolicyLock = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  PpmCheckStart(a1);
  __writecr8(CurrentIrql);
  CurrentThread = KeGetCurrentThread();
  v3 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v3;
  if ( !v3 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
}

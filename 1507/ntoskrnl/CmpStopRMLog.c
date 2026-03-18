/*
 * XREFs of CmpStopRMLog @ 0x1404EF168
 * Callers:
 *     CmShutdownCmRM @ 0x1404EEDC4 (CmShutdownCmRM.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpLogCheckpoint @ 0x1404EEB78 (CmpLogCheckpoint.c)
 *     LockRMLog @ 0x1404F2704 (LockRMLog.c)
 */

void __fastcall CmpStopRMLog(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v5; // ax

  CmpLockRegistry();
  LockRMLog(a1);
  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( *(_QWORD *)(a1 + 96) )
    {
      CmpLogCheckpoint(a1, v2, 0, v3);
      ClfsDeleteMarshallingArea(*(PVOID *)(a1 + 96));
      *(_QWORD *)(a1 + 96) = 0LL;
    }
    if ( (PVOID)a1 != CmRmSystem && *(_QWORD *)(a1 + 16) == a1 + 16 )
      ClfsDeleteLogByPointer(*(PLOG_FILE_OBJECT *)(a1 + 88));
    ClfsCloseLogFileObject(*(PLOG_FILE_OBJECT *)(a1 + 88));
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  CurrentThread = KeGetCurrentThread();
  v5 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v5;
  if ( !v5
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  CmpUnlockRegistry();
}

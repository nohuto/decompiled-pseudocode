/*
 * XREFs of CmpTransWriteLog @ 0x1404F2470
 * Callers:
 *     CmLogTmRmAction @ 0x1404EF350 (CmLogTmRmAction.c)
 *     CmAddLogForAction @ 0x1404F1E20 (CmAddLogForAction.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     CmpLogCheckpoint @ 0x1404EEB78 (CmpLogCheckpoint.c)
 *     CmpComputeLogFillLevel @ 0x1404F2550 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x1404F266C (CmpDoTransWriteLogRecord.c)
 *     LockRMLog @ 0x1404F2704 (LockRMLog.c)
 *     CmpAddRemoveRMLogContainer @ 0x14065CDC8 (CmpAddRemoveRMLogContainer.c)
 */

__int64 __fastcall CmpTransWriteLog(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, PCLFS_LSN plsnFinish)
{
  int v6; // edi
  CLFS_LSN *v10; // rbp
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v15; // ax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0;
  LODWORD(v19) = 0;
  LockRMLog(a1);
  v10 = plsnFinish;
  while ( 1 )
  {
    v12 = CmpDoTransWriteLogRecord(a1, a2, a3, a4, v10);
    if ( v12 >= 0 )
      break;
    if ( v6 )
    {
      if ( v6 != 1 )
        goto LABEL_6;
LABEL_12:
      LODWORD(v19) = ++v6;
      if ( (int)CmpAddRemoveRMLogContainer(a1) < 0 )
        goto LABEL_6;
      CmpLogCheckpoint(a1, v17, 1, v18);
    }
    else
    {
      v6 = 1;
      LODWORD(v19) = 1;
      if ( (int)CmpLogCheckpoint(a1, v11, 1, v13) < 0 )
        goto LABEL_12;
    }
  }
  if ( (int)CmpComputeLogFillLevel(
              *(PLOG_FILE_OBJECT *)(a1 + 88),
              (PCLFS_LSN)(a1 + 120),
              v10,
              *(_DWORD *)(a1 + 72),
              *(_DWORD *)(a1 + 68),
              (__int64)&v19) >= 0
    && (unsigned int)v19 >= 0x50 )
  {
    CmpAddRemoveRMLogContainer(a1);
  }
LABEL_6:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  CurrentThread = KeGetCurrentThread();
  v15 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v12;
}

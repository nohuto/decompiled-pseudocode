/*
 * XREFs of CmpTransWriteLog @ 0x1404A1ACC
 * Callers:
 *     CmAddLogForAction @ 0x1404A1450 (CmAddLogForAction.c)
 *     CmLogTmRmAction @ 0x1404DA104 (CmLogTmRmAction.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     CmpComputeLogFillLevel @ 0x1404A1B88 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x1404A1CA4 (CmpDoTransWriteLogRecord.c)
 *     LockRMLog @ 0x1404A1D3C (LockRMLog.c)
 *     CmpLogCheckpoint @ 0x1404DA2D4 (CmpLogCheckpoint.c)
 *     CmpAddRemoveRMLogContainer @ 0x140605258 (CmpAddRemoveRMLogContainer.c)
 */

__int64 __fastcall CmpTransWriteLog(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, PCLFS_LSN plsnFinish)
{
  int v5; // edi
  CLFS_LSN *v10; // rbp
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  LODWORD(v20) = 0;
  LockRMLog();
  v10 = plsnFinish;
  while ( 1 )
  {
    v12 = CmpDoTransWriteLogRecord(a1, a2, a3, a4, v10);
    if ( v12 >= 0 )
      break;
    if ( v5 )
    {
      if ( v5 != 1 )
        goto LABEL_6;
LABEL_11:
      LODWORD(v20) = ++v5;
      if ( (int)CmpAddRemoveRMLogContainer(a1) < 0 )
        goto LABEL_6;
      LOBYTE(v19) = 1;
      CmpLogCheckpoint(a1, v18, v19);
    }
    else
    {
      v5 = 1;
      LOBYTE(v13) = 1;
      LODWORD(v20) = 1;
      if ( (int)CmpLogCheckpoint(a1, v11, v13) < 0 )
        goto LABEL_11;
    }
  }
  if ( (int)CmpComputeLogFillLevel(
              *(PLOG_FILE_OBJECT *)(a1 + 88),
              (PCLFS_LSN)(a1 + 120),
              v10,
              *(_DWORD *)(a1 + 72),
              *(_DWORD *)(a1 + 68),
              (__int64)&v20) >= 0
    && (unsigned int)v20 >= 0x50 )
  {
    CmpAddRemoveRMLogContainer(a1);
  }
LABEL_6:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
  return (unsigned int)v12;
}

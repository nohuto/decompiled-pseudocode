/*
 * XREFs of CmpTransWriteLog @ 0x140519ED8
 * Callers:
 *     CmLogTmRmAction @ 0x1404BD708 (CmLogTmRmAction.c)
 *     CmAddLogForAction @ 0x14051985C (CmAddLogForAction.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     CmpLogCheckpoint @ 0x1404BD8D8 (CmpLogCheckpoint.c)
 *     CmpComputeLogFillLevel @ 0x140519F94 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x14051A0B0 (CmpDoTransWriteLogRecord.c)
 *     LockRMLog @ 0x14051A148 (LockRMLog.c)
 *     CmpAddRemoveRMLogContainer @ 0x14060530C (CmpAddRemoveRMLogContainer.c)
 */

__int64 __fastcall CmpTransWriteLog(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, PCLFS_LSN plsnFinish)
{
  int v5; // edi
  CLFS_LSN *v10; // rbp
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rdx
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  LODWORD(v18) = 0;
  LockRMLog(a1);
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
      LODWORD(v18) = ++v5;
      if ( (int)CmpAddRemoveRMLogContainer(a1) < 0 )
        goto LABEL_6;
      CmpLogCheckpoint(a1, v17, 1);
    }
    else
    {
      v5 = 1;
      LODWORD(v18) = 1;
      if ( (int)CmpLogCheckpoint(a1, v11, 1) < 0 )
        goto LABEL_11;
    }
  }
  if ( (int)CmpComputeLogFillLevel(
              *(PLOG_FILE_OBJECT *)(a1 + 88),
              (PCLFS_LSN)(a1 + 120),
              v10,
              *(_DWORD *)(a1 + 72),
              *(_DWORD *)(a1 + 68),
              (__int64)&v18) >= 0
    && (unsigned int)v18 >= 0x50 )
  {
    CmpAddRemoveRMLogContainer(a1);
  }
LABEL_6:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  return (unsigned int)v12;
}

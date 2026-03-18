/*
 * XREFs of SeExamineGlobalSacl @ 0x1406D7C34
 * Callers:
 *     SeObjectReferenceAuditAlarm @ 0x1404CFF94 (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404D3F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1405BCDE4 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     CmpExamineSaclForAuditEvent @ 0x1406596D8 (CmpExamineSaclForAuditEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406D143C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406D4BDC (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x14015B234 (SepRmAcquireGlobalSaclReadLock.c)
 *     SepRmGlobalSaclFind @ 0x140587774 (SepRmGlobalSaclFind.c)
 *     SeExamineSacl @ 0x1406D47F0 (SeExamineSacl.c)
 */

void __stdcall SeExamineGlobalSacl(
        PUNICODE_STRING ObjectType,
        PACL ResourceSacl,
        PACCESS_TOKEN Token,
        ACCESS_MASK DesiredAccess,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateAudit,
        PBOOLEAN GenerateAlarm)
{
  PBOOLEAN v7; // rbx
  ACL *v12; // rcx
  BOOLEAN v13; // cl
  char v14; // al
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v16; // ax
  BOOLEAN v17[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-20h] BYREF

  v7 = GenerateAudit;
  if ( GenerateAudit && !*GenerateAudit )
  {
    v18 = 0LL;
    SepRmAcquireGlobalSaclReadLock();
    if ( (int)SepRmGlobalSaclFind(&v18, 0LL, ObjectType, 0) >= 0 )
    {
      v12 = (ACL *)v18[3];
      if ( v12 )
      {
        SeExamineSacl(v12, ResourceSacl, Token, DesiredAccess, AccessGranted, (PBOOLEAN)&GenerateAudit, v17);
        v13 = 1;
        if ( *v7 || (v14 = 0, (_BYTE)GenerateAudit) )
          v14 = 1;
        *v7 = v14;
        if ( GenerateAlarm )
        {
          if ( !*GenerateAlarm && !v17[0] )
            v13 = 0;
          *GenerateAlarm = v13;
        }
      }
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    CurrentThread = KeGetCurrentThread();
    v16 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}

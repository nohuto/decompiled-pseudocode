/*
 * XREFs of SeExamineGlobalSacl @ 0x14069546C
 * Callers:
 *     SeObjectReferenceAuditAlarm @ 0x140406A20 (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404070A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x14057FA30 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     CmpExamineSaclForAuditEvent @ 0x1406025C0 (CmpExamineSaclForAuditEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14068D508 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14069180C (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x14021A48C (SepRmAcquireGlobalSaclReadLock.c)
 *     SeExamineSacl @ 0x140691420 (SeExamineSacl.c)
 *     SepRmGlobalSaclFind @ 0x140695604 (SepRmGlobalSaclFind.c)
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
  PBOOLEAN v7; // rdi
  BOOLEAN v8; // bl
  ACL *v13; // rcx
  char v14; // al
  BOOLEAN v15[16]; // [rsp+40h] [rbp-28h] BYREF

  v7 = GenerateAudit;
  v8 = 0;
  if ( GenerateAudit && !*GenerateAudit )
  {
    GenerateAudit = 0LL;
    SepRmAcquireGlobalSaclReadLock();
    if ( (int)SepRmGlobalSaclFind(&GenerateAudit, 0LL, ObjectType, 0LL) >= 0 )
    {
      v13 = (ACL *)*((_QWORD *)GenerateAudit + 3);
      if ( v13 )
      {
        SeExamineSacl(v13, ResourceSacl, Token, DesiredAccess, AccessGranted, (PBOOLEAN)&GenerateAudit, v15);
        if ( *v7 || (v14 = 0, (_BYTE)GenerateAudit) )
          v14 = 1;
        *v7 = v14;
        if ( GenerateAlarm )
        {
          if ( *GenerateAlarm || v15[0] )
            v8 = 1;
          *GenerateAlarm = v8;
        }
      }
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegion();
  }
}

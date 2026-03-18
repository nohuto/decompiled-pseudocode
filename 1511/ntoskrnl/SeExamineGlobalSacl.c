/*
 * XREFs of SeExamineGlobalSacl @ 0x140655D28
 * Callers:
 *     SeObjectReferenceAuditAlarm @ 0x1404709B4 (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140470A30 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x14054A420 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     CmpExamineSaclForAuditEvent @ 0x1405E321C (CmpExamineSaclForAuditEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14064DE24 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14065252C (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x140200B98 (SepRmAcquireGlobalSaclReadLock.c)
 *     SeExamineSacl @ 0x140652140 (SeExamineSacl.c)
 *     SepRmGlobalSaclFind @ 0x140655EC0 (SepRmGlobalSaclFind.c)
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

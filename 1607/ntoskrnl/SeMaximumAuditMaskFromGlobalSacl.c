/*
 * XREFs of SeMaximumAuditMaskFromGlobalSacl @ 0x14069556C
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404070A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140520EA8 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     SeMaximumAuditMask @ 0x1402199C0 (SeMaximumAuditMask.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x14021A48C (SepRmAcquireGlobalSaclReadLock.c)
 *     SepRmGlobalSaclFind @ 0x140695604 (SepRmGlobalSaclFind.c)
 */

void __stdcall SeMaximumAuditMaskFromGlobalSacl(
        PUNICODE_STRING ObjectTypeName,
        ACCESS_MASK GrantedAccess,
        PACCESS_TOKEN Token,
        PACCESS_MASK AuditMask)
{
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+40h] [rbp+8h] BYREF

  if ( ObjectTypeName && ObjectTypeName->Buffer )
  {
    v8[0] = 0LL;
    SepRmAcquireGlobalSaclReadLock();
    if ( (int)SepRmGlobalSaclFind(v8, 0LL, ObjectTypeName, 0LL) >= 0 )
    {
      v9 = 0;
      SeMaximumAuditMask(*(_QWORD *)(v8[0] + 24LL), GrantedAccess, (__int64)Token, &v9);
      *AuditMask |= v9;
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegion();
  }
}

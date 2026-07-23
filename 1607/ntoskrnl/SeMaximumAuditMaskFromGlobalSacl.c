/*
 * XREFs of SeMaximumAuditMaskFromGlobalSacl @ 0x140695650
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140405F60 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140503F10 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     SeMaximumAuditMask @ 0x1402197EC (SeMaximumAuditMask.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x14021A2B8 (SepRmAcquireGlobalSaclReadLock.c)
 *     SepRmGlobalSaclFind @ 0x1406956E8 (SepRmGlobalSaclFind.c)
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

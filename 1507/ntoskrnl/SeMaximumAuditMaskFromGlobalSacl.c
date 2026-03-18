/*
 * XREFs of SeMaximumAuditMaskFromGlobalSacl @ 0x1406D7D6C
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404D3F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1404D4748 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x14015B234 (SepRmAcquireGlobalSaclReadLock.c)
 *     SeMaximumAuditMask @ 0x14024F3D8 (SeMaximumAuditMask.c)
 *     SepRmGlobalSaclFind @ 0x140587774 (SepRmGlobalSaclFind.c)
 */

void __stdcall SeMaximumAuditMaskFromGlobalSacl(
        PUNICODE_STRING ObjectTypeName,
        ACCESS_MASK GrantedAccess,
        PACCESS_TOKEN Token,
        PACCESS_MASK AuditMask)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v9; // ax
  __int64 *v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp+8h] BYREF

  if ( ObjectTypeName && ObjectTypeName->Buffer )
  {
    v10 = 0LL;
    SepRmAcquireGlobalSaclReadLock();
    if ( (int)SepRmGlobalSaclFind(&v10, 0LL, ObjectTypeName, 0) >= 0 )
    {
      v11 = 0;
      SeMaximumAuditMask(v10[3], GrantedAccess, (__int64)Token, &v11);
      *AuditMask |= v11;
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    CurrentThread = KeGetCurrentThread();
    v9 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v9;
    if ( !v9
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}

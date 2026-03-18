/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x14043429C
 * Callers:
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     ObDeleteCapturedInsertInfo @ 0x1403DC1C0 (ObDeleteCapturedInsertInfo.c)
 *     NtCreateWnfStateName @ 0x1403E262C (NtCreateWnfStateName.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectCreateInformation @ 0x1404107B0 (ObpCaptureObjectCreateInformation.c)
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 *     IopAllocRealFileObject @ 0x140414F70 (IopAllocRealFileObject.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     ObpFreeObject @ 0x14042F610 (ObpFreeObject.c)
 *     AlpcpConnectPort @ 0x14046D59C (AlpcpConnectPort.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     ObpInsertOrLocateNamedObject @ 0x14046FBC0 (ObpInsertOrLocateNamedObject.c)
 *     NtSetSecurityObject @ 0x140495070 (NtSetSecurityObject.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 *     NtOpenObjectAuditAlarm @ 0x1404B9924 (NtOpenObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1404C0094 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     CmpCopySaclToVirtualKey @ 0x1405E2E88 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}

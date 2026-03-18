/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x14044DB84
 * Callers:
 *     SeAccessCheckByType @ 0x14005FEF0 (SeAccessCheckByType.c)
 *     NtCreateWnfStateName @ 0x1403F6B44 (NtCreateWnfStateName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140405EE0 (ObpInsertOrLocateNamedObject.c)
 *     AlpcpConnectPort @ 0x1404080D0 (AlpcpConnectPort.c)
 *     ObOpenObjectByNameEx @ 0x140419070 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectCreateInformation @ 0x140419770 (ObpCaptureObjectCreateInformation.c)
 *     ObpFreeObject @ 0x14041B800 (ObpFreeObject.c)
 *     ObCreateObjectEx @ 0x14041D970 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14041EF00 (ObInsertObjectEx.c)
 *     IopAllocRealFileObject @ 0x140442AB0 (IopAllocRealFileObject.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14047ADB4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     ObReferenceObjectByNameEx @ 0x140499E04 (ObReferenceObjectByNameEx.c)
 *     ObDeleteCapturedInsertInfo @ 0x14049C5FC (ObDeleteCapturedInsertInfo.c)
 *     NtOpenObjectAuditAlarm @ 0x1404B66DC (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 *     NtSetSecurityObject @ 0x140520B3C (NtSetSecurityObject.c)
 *     CmpCopySaclToVirtualKey @ 0x1406021A4 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}

/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x14044CA54
 * Callers:
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     ObReferenceObjectByNameEx @ 0x1403E4434 (ObReferenceObjectByNameEx.c)
 *     NtCreateWnfStateName @ 0x1403F5A04 (NtCreateWnfStateName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140404DA0 (ObpInsertOrLocateNamedObject.c)
 *     AlpcpConnectPort @ 0x140406F90 (AlpcpConnectPort.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectCreateInformation @ 0x140418630 (ObpCaptureObjectCreateInformation.c)
 *     ObpFreeObject @ 0x14041A6C0 (ObpFreeObject.c)
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 *     IopAllocRealFileObject @ 0x140441980 (IopAllocRealFileObject.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140479C84 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1404A0ABC (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 *     ObDeleteCapturedInsertInfo @ 0x1404A4794 (ObDeleteCapturedInsertInfo.c)
 *     NtSetSecurityObject @ 0x140503BA4 (NtSetSecurityObject.c)
 *     CmpCopySaclToVirtualKey @ 0x140602258 (CmpCopySaclToVirtualKey.c)
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

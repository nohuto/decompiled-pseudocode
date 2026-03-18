/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x1404C8F88
 * Callers:
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     AlpcpConnectPort @ 0x140472880 (AlpcpConnectPort.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     IopAllocRealFileObject @ 0x140488940 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x14048A8A0 (ObCreateObjectEx.c)
 *     ObpFreeObject @ 0x14048AE10 (ObpFreeObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14048FE90 (ObpCaptureObjectCreateInformation.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D0FD4 (ObpInsertOrLocateNamedObject.c)
 *     NtSetSecurityObject @ 0x1404D2930 (NtSetSecurityObject.c)
 *     ObReferenceObjectByNameEx @ 0x1404EC8E0 (ObReferenceObjectByNameEx.c)
 *     ObDeleteCapturedInsertInfo @ 0x1404ECC84 (ObDeleteCapturedInsertInfo.c)
 *     NtCreateWnfStateName @ 0x140500CF0 (NtCreateWnfStateName.c)
 *     NtOpenObjectAuditAlarm @ 0x140525110 (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405574D0 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     CmpCopySaclToVirtualKey @ 0x140659314 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}

/*
 * XREFs of SeOpenObjectAuditAlarm @ 0x1404D3F28
 * Callers:
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     ObCheckObjectAccess @ 0x1404D3DC0 (ObCheckObjectAccess.c)
 * Callees:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404D3F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 */

void __stdcall SeOpenObjectAuditAlarm(
        PUNICODE_STRING ObjectTypeName,
        PVOID Object,
        PUNICODE_STRING AbsoluteObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PACCESS_STATE AccessState,
        BOOLEAN ObjectCreated,
        BOOLEAN AccessGranted,
        KPROCESSOR_MODE AccessMode,
        PBOOLEAN GenerateOnClose)
{
  if ( AccessMode )
    SeOpenObjectAuditAlarmWithTransaction(
      ObjectTypeName,
      Object,
      AbsoluteObjectName,
      SecurityDescriptor,
      AccessState,
      ObjectCreated,
      AccessGranted,
      AccessMode,
      0LL,
      GenerateOnClose);
}

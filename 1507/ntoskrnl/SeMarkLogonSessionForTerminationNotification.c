/*
 * XREFs of SeMarkLogonSessionForTerminationNotification @ 0x1405562C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall SeMarkLogonSessionForTerminationNotification(PLUID LogonId)
{
  return SeMarkLogonSessionForTerminationNotificationEx(LogonId, 0LL);
}

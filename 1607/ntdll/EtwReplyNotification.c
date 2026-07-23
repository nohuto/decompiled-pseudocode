/*
 * XREFs of EtwReplyNotification @ 0x180003030
 * Callers:
 *     EtwDeliverDataBlock @ 0x180054000 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A99F0 (NtTraceControl.c)
 */

ULONG __cdecl EtwReplyNotification(PETW_NOTIFICATION_HEADER Notification)
{
  ULONG v1; // ebx
  NTSTATUS v2; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = NtTraceControl(EtwSendReplyDataBlock, Notification, Notification->NotificationSize, 0LL, 0, &ReturnLength);
  if ( v2 )
    v1 = RtlNtStatusToDosError(v2);
  EtwpReplySend = 1;
  return v1;
}

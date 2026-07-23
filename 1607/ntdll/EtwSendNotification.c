/*
 * XREFs of EtwSendNotification @ 0x180059CF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpReceiveReplyDataBlock @ 0x180002768 (EtwpReceiveReplyDataBlock.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtTraceControl @ 0x1800A99F0 (NtTraceControl.c)
 */

ULONG __cdecl EtwSendNotification(
        PETW_NOTIFICATION_HEADER DataBlock,
        ULONG ReceiveDataBlockSize,
        PVOID ReceiveDataBlock,
        PULONG ReplyReceived,
        PULONG ReplySizeNeeded)
{
  BOOLEAN ReplyRequested; // bp
  ULONG Timeout; // esi
  NTSTATUS v11; // eax
  ULONG v12; // ebx
  ULONG ReplyCount; // r9d
  void *Reserved2; // rbp
  char v16; // r8
  ULONG ReturnLength; // [rsp+40h] [rbp-C8h] BYREF
  char v18; // [rsp+48h] [rbp-C0h] BYREF

  ReplyRequested = DataBlock->ReplyRequested;
  Timeout = DataBlock->Timeout;
  if ( ReplyRequested == 1 && !Timeout )
    Timeout = 60000;
  v11 = NtTraceControl(EtwSendDataBlock, DataBlock, DataBlock->NotificationSize, DataBlock, 0x48u, &ReturnLength);
  if ( v11 )
    v12 = RtlNtStatusToDosError(v11);
  else
    v12 = 0;
  if ( ReplyRequested )
  {
    ReplyCount = DataBlock->ReplyCount;
    if ( !v12 )
    {
      if ( ReplyCount )
      {
        Reserved2 = (void *)DataBlock->Reserved2;
        v16 = 0;
        if ( DataBlock->NotificationType == EtwNotificationTypeEnable )
        {
          v16 = 1;
          ReceiveDataBlock = &v18;
          ReceiveDataBlockSize = 120;
        }
        v12 = EtwpReceiveReplyDataBlock(
                (int)Reserved2,
                Timeout,
                v16,
                ReplyCount,
                ReceiveDataBlock,
                ReceiveDataBlockSize,
                ReplyReceived,
                ReplySizeNeeded);
        if ( Reserved2 )
          NtClose(Reserved2);
      }
    }
  }
  return v12;
}

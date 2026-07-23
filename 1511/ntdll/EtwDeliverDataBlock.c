/*
 * XREFs of EtwDeliverDataBlock @ 0x180052940
 * Callers:
 *     EtwpSendSessionNotification @ 0x180044FB8 (EtwpSendSessionNotification.c)
 *     EtwpNotificationThread @ 0x180052810 (EtwpNotificationThread.c)
 * Callees:
 *     EtwReplyNotification @ 0x1800037D0 (EtwReplyNotification.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     EtwpProcessNotification @ 0x18005274C (EtwpProcessNotification.c)
 *     EtwpGetNextRegistration @ 0x180052AFC (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x1800540F8 (EtwpFindRegistration.c)
 */

__int64 __fastcall EtwDeliverDataBlock(PETW_NOTIFICATION_HEADER Notification)
{
  char v1; // si
  bool v3; // zf
  BOOLEAN ReplyRequested; // r14
  ULONG Timeout; // r15d
  _RTL_SRWLOCK *Registration; // rax
  __int64 NextRegistration; // rbx
  ULONG v8; // edi
  __int64 v10; // rax
  char v11; // [rsp+60h] [rbp+30h] BYREF
  ULONG v12; // [rsp+68h] [rbp+38h] BYREF
  ULONGLONG v13; // [rsp+70h] [rbp+40h] BYREF

  v13 = 0LL;
  v1 = 0;
  v12 = 0;
  v3 = LODWORD(Notification->Reserved2) == -1;
  ReplyRequested = Notification->ReplyRequested;
  Timeout = Notification->Timeout;
  v11 = 0;
  EtwpReplySend = 0;
  if ( v3 )
  {
    NextRegistration = EtwpGetNextRegistration(0LL);
    if ( NextRegistration )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)&Notification->DestinationGuid.Data1 - *(_QWORD *)(NextRegistration + 32);
        if ( !v10 )
          v10 = *(_QWORD *)Notification->DestinationGuid.Data4 - *(_QWORD *)(NextRegistration + 40);
        if ( !v10 )
        {
          if ( *(_DWORD *)(NextRegistration + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
            v1 = 1;
            *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
          }
          if ( EtwpProcessNotification(NextRegistration, (__int64)Notification, &v13, &v12, &v11) )
            goto LABEL_4;
          if ( v1 )
          {
            *(_DWORD *)(NextRegistration + 80) = 0;
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
            v1 = 0;
          }
        }
        NextRegistration = EtwpGetNextRegistration(NextRegistration);
        if ( !NextRegistration )
          goto LABEL_4;
      }
    }
    goto LABEL_10;
  }
  Registration = (_RTL_SRWLOCK *)EtwpFindRegistration(&Notification->DestinationGuid, LOWORD(Notification->Reserved2));
  NextRegistration = (__int64)Registration;
  if ( !Registration )
    goto LABEL_10;
  RtlAcquireSRWLockExclusive(Registration + 8);
  v1 = 1;
  *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  EtwpProcessNotification(NextRegistration, (__int64)Notification, &v13, &v12, &v11);
LABEL_4:
  if ( !v11 )
  {
LABEL_10:
    v8 = 4201;
    goto LABEL_7;
  }
  if ( ReplyRequested != 1 || EtwpReplySend )
  {
    v8 = v12;
  }
  else
  {
    if ( v12 )
    {
      Notification->NotificationType = EtwNotificationTypeNoReply;
      Notification->NotificationSize = 72;
    }
    if ( Notification->NotificationType == EtwNotificationTypeEnable )
      Notification->NotificationSize = 72;
    Notification->Reserved2 = v13;
    Notification->ReplyRequested = 0;
    Notification->Timeout = Timeout;
    v8 = EtwReplyNotification(Notification);
  }
LABEL_7:
  if ( v1 )
  {
    *(_DWORD *)(NextRegistration + 80) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(NextRegistration + 72));
  }
  return v8;
}

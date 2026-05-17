/*
 * XREFs of EtwDeliverDataBlock @ 0x18000C140
 * Callers:
 *     EtwpSendSessionNotification @ 0x18000A7A8 (EtwpSendSessionNotification.c)
 *     EtwpNotificationThread @ 0x18000C010 (EtwpNotificationThread.c)
 * Callees:
 *     EtwReplyNotification @ 0x180002A90 (EtwReplyNotification.c)
 *     EtwpGetNextRegistration @ 0x18000C2FC (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x18000C3E8 (EtwpFindRegistration.c)
 *     EtwpProcessNotification @ 0x18000C48C (EtwpProcessNotification.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall EtwDeliverDataBlock(__int64 a1)
{
  char v1; // si
  bool v3; // zf
  char v4; // r14
  int v5; // r15d
  __int64 Registration; // rax
  __int64 NextRegistration; // rbx
  unsigned int v8; // edi
  __int64 v10; // rax
  char v11; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+38h] BYREF
  __int64 v13; // [rsp+70h] [rbp+40h] BYREF

  v13 = 0LL;
  v1 = 0;
  v12 = 0;
  v3 = *(_DWORD *)(a1 + 24) == -1;
  v4 = *(_BYTE *)(a1 + 12);
  v5 = *(_DWORD *)(a1 + 16);
  v11 = 0;
  EtwpReplySend = 0;
  if ( v3 )
  {
    NextRegistration = EtwpGetNextRegistration(0LL);
    if ( NextRegistration )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(NextRegistration + 32);
        if ( !v10 )
          v10 = *(_QWORD *)(a1 + 48) - *(_QWORD *)(NextRegistration + 40);
        if ( !v10 )
        {
          if ( *(_DWORD *)(NextRegistration + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
          {
            RtlAcquireSRWLockExclusive(NextRegistration + 64);
            v1 = 1;
            *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
          }
          if ( (unsigned __int8)EtwpProcessNotification(NextRegistration, a1, &v13, &v12, &v11) )
            goto LABEL_4;
          if ( v1 )
          {
            *(_DWORD *)(NextRegistration + 80) = 0;
            RtlReleaseSRWLockExclusive(NextRegistration + 64);
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
  Registration = EtwpFindRegistration(a1 + 40, *(unsigned __int16 *)(a1 + 24));
  NextRegistration = Registration;
  if ( !Registration )
    goto LABEL_10;
  RtlAcquireSRWLockExclusive(Registration + 64);
  v1 = 1;
  *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  EtwpProcessNotification(NextRegistration, a1, &v13, &v12, &v11);
LABEL_4:
  if ( !v11 )
  {
LABEL_10:
    v8 = 4201;
    goto LABEL_7;
  }
  if ( v4 != 1 || EtwpReplySend )
  {
    v8 = v12;
  }
  else
  {
    if ( v12 )
    {
      *(_DWORD *)a1 = 1;
      *(_DWORD *)(a1 + 4) = 72;
    }
    if ( *(_DWORD *)a1 == 3 )
      *(_DWORD *)(a1 + 4) = 72;
    *(_QWORD *)(a1 + 24) = v13;
    *(_BYTE *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = v5;
    v8 = EtwReplyNotification(a1);
  }
LABEL_7:
  if ( v1 )
  {
    *(_DWORD *)(NextRegistration + 80) = 0;
    RtlReleaseSRWLockExclusive(NextRegistration + 64);
    RtlReleaseSRWLockShared(NextRegistration + 72);
  }
  return v8;
}

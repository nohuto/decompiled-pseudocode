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

__int64 __fastcall EtwDeliverDataBlock(__int64 a1)
{
  char v1; // si
  bool v3; // zf
  char v4; // r14
  int v5; // r15d
  __int64 Registration; // rax
  char *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 NextRegistration; // rbx
  unsigned int v11; // edi
  char *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  char v17; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v18; // [rsp+68h] [rbp+38h] BYREF
  __int64 v19; // [rsp+70h] [rbp+40h] BYREF

  v19 = 0LL;
  v1 = 0;
  v18 = 0;
  v3 = *(_DWORD *)(a1 + 24) == -1;
  v4 = *(_BYTE *)(a1 + 12);
  v5 = *(_DWORD *)(a1 + 16);
  v17 = 0;
  EtwpReplySend = 0;
  if ( v3 )
  {
    NextRegistration = EtwpGetNextRegistration(0LL);
    if ( NextRegistration )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(NextRegistration + 32);
        if ( !v16 )
          v16 = *(_QWORD *)(a1 + 48) - *(_QWORD *)(NextRegistration + 40);
        if ( !v16 )
        {
          if ( *(_DWORD *)(NextRegistration + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
          {
            RtlAcquireSRWLockExclusive(NextRegistration + 64, v13, v14, v15);
            v1 = 1;
            *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
          }
          if ( EtwpProcessNotification(NextRegistration, a1, &v19, &v18, &v17) )
            goto LABEL_4;
          if ( v1 )
          {
            *(_DWORD *)(NextRegistration + 80) = 0;
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(NextRegistration + 64));
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
  RtlAcquireSRWLockExclusive(Registration + 64, v7, v8, v9);
  v1 = 1;
  *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  EtwpProcessNotification(NextRegistration, a1, &v19, &v18, &v17);
LABEL_4:
  if ( !v17 )
  {
LABEL_10:
    v11 = 4201;
    goto LABEL_7;
  }
  if ( v4 != 1 || EtwpReplySend )
  {
    v11 = v18;
  }
  else
  {
    if ( v18 )
    {
      *(_DWORD *)a1 = 1;
      *(_DWORD *)(a1 + 4) = 72;
    }
    if ( *(_DWORD *)a1 == 3 )
      *(_DWORD *)(a1 + 4) = 72;
    *(_QWORD *)(a1 + 24) = v19;
    *(_BYTE *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = v5;
    v11 = EtwReplyNotification(a1);
  }
LABEL_7:
  if ( v1 )
  {
    *(_DWORD *)(NextRegistration + 80) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(NextRegistration + 64));
    RtlReleaseSRWLockShared((volatile signed __int64 *)(NextRegistration + 72));
  }
  return v11;
}

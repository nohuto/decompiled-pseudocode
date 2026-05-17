/*
 * XREFs of EtwDeliverDataBlock @ 0x180054010
 * Callers:
 *     EtwpSendSessionNotification @ 0x180053C98 (EtwpSendSessionNotification.c)
 *     EtwpNotificationThread @ 0x180053D60 (EtwpNotificationThread.c)
 * Callees:
 *     EtwReplyNotification @ 0x180003030 (EtwReplyNotification.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpFindRegistration @ 0x18002A0E0 (EtwpFindRegistration.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     EtwpGetNextRegistration @ 0x1800541CC (EtwpGetNextRegistration.c)
 *     EtwpProcessNotification @ 0x180054298 (EtwpProcessNotification.c)
 */

__int64 __fastcall EtwDeliverDataBlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  bool v6; // zf
  char v7; // r14
  int v8; // r15d
  _QWORD *Registration; // rax
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 NextRegistration; // rbx
  unsigned int v14; // edi
  char *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  char v20; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v21; // [rsp+68h] [rbp+38h] BYREF
  __int64 v22; // [rsp+70h] [rbp+40h] BYREF

  v22 = 0LL;
  v4 = 0;
  v21 = 0;
  v6 = *(_DWORD *)(a1 + 24) == -1;
  v7 = *(_BYTE *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 16);
  v20 = 0;
  EtwpReplySend = 0;
  if ( v6 )
  {
    NextRegistration = EtwpGetNextRegistration(0LL);
    if ( NextRegistration )
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(NextRegistration + 32);
        if ( !v19 )
          v19 = *(_QWORD *)(a1 + 48) - *(_QWORD *)(NextRegistration + 40);
        if ( !v19 )
        {
          if ( *(_DWORD *)(NextRegistration + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
          {
            RtlAcquireSRWLockExclusive(NextRegistration + 64, v16, v17, v18);
            v4 = 1;
            *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
          }
          if ( (unsigned __int8)EtwpProcessNotification(NextRegistration, a1, &v22, &v21, &v20) )
            goto LABEL_4;
          if ( v4 )
          {
            *(_DWORD *)(NextRegistration + 80) = 0;
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(NextRegistration + 64));
            v4 = 0;
          }
        }
        NextRegistration = EtwpGetNextRegistration(NextRegistration);
        if ( !NextRegistration )
          goto LABEL_4;
      }
    }
    goto LABEL_10;
  }
  Registration = EtwpFindRegistration(a1 + 40, (char *)*(unsigned __int16 *)(a1 + 24), a3, a4);
  NextRegistration = (__int64)Registration;
  if ( !Registration )
    goto LABEL_10;
  RtlAcquireSRWLockExclusive((unsigned __int64)(Registration + 8), v10, v11, v12);
  v4 = 1;
  *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  EtwpProcessNotification(NextRegistration, a1, &v22, &v21, &v20);
LABEL_4:
  if ( !v20 )
  {
LABEL_10:
    v14 = 4201;
    goto LABEL_7;
  }
  if ( v7 != 1 || EtwpReplySend )
  {
    v14 = v21;
  }
  else
  {
    if ( v21 )
    {
      *(_DWORD *)a1 = 1;
      *(_DWORD *)(a1 + 4) = 72;
    }
    if ( *(_DWORD *)a1 == 3 )
      *(_DWORD *)(a1 + 4) = 72;
    *(_QWORD *)(a1 + 24) = v22;
    *(_BYTE *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = v8;
    v14 = EtwReplyNotification(a1);
  }
LABEL_7:
  if ( v4 )
  {
    *(_DWORD *)(NextRegistration + 80) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(NextRegistration + 64));
    RtlReleaseSRWLockShared((volatile signed __int64 *)(NextRegistration + 72));
  }
  return v14;
}

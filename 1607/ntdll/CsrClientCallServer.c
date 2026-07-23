/*
 * XREFs of CsrClientCallServer @ 0x180075810
 * Callers:
 *     CsrpClientConnectToServer @ 0x18007571C (CsrpClientConnectToServer.c)
 * Callees:
 *     ZwRequestWaitReplyPort @ 0x1800A6860 (ZwRequestWaitReplyPort.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CsrClientCallServer(char *ReplyMessage, __int64 a2, int a3, int a4)
{
  unsigned int v7; // r8d
  bool v8; // cl
  __int64 v9; // r8
  int v10; // ecx
  char **v11; // rdx
  char *v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // r9
  __int64 *v15; // rdx
  int i; // r8d
  __int64 v17; // rcx
  char *v18; // rcx

  if ( LdrpIsSecureProcess )
    return 3221225659LL;
  v7 = a3 & 0xEFFFFFFF;
  v8 = (a3 & 0x10000000) != 0;
  if ( a4 < 0 )
  {
    a4 = -a4;
    *((_WORD *)ReplyMessage + 2) = 0;
  }
  else
  {
    *((_DWORD *)ReplyMessage + 1) = 0;
  }
  *((_QWORD *)ReplyMessage + 5) = 0LL;
  *((_DWORD *)ReplyMessage + 12) = v7;
  *(_DWORD *)ReplyMessage = (a4 | (a4 << 16)) + 4194328;
  if ( (NtCurrentPeb()->BitField & 2) != 0
    && ((v7 & 0xFFFF0000) == 0x20000 || v8 && (NtCurrentPeb()->BitField & 0x40) == 0) )
  {
    *((_DWORD *)ReplyMessage + 13) = -1073741790;
    return 3221225506LL;
  }
  else
  {
    if ( CsrClientProcess )
    {
      if ( a2 )
      {
        v9 = CsrPortMemoryRemoteDelta;
        *((_QWORD *)ReplyMessage + 5) = CsrPortMemoryRemoteDelta + a2;
        v10 = *(_DWORD *)(a2 + 16);
        *(_QWORD *)(a2 + 24) = 0LL;
        v11 = (char **)(a2 + 32);
        while ( v10 )
        {
          v12 = *v11;
          --v10;
          ++v11;
          if ( v12 )
          {
            *(_QWORD *)v12 += v9;
            *(v11 - 1) = (char *)(v12 - ReplyMessage);
          }
        }
      }
      v13 = ZwRequestWaitReplyPort(CsrPortHandle, (PPORT_MESSAGE)ReplyMessage, (PPORT_MESSAGE)ReplyMessage);
      if ( a2 )
      {
        v14 = CsrPortMemoryRemoteDelta;
        v15 = (__int64 *)(a2 + 32);
        *((_QWORD *)ReplyMessage + 5) -= CsrPortMemoryRemoteDelta;
        for ( i = *(_DWORD *)(a2 + 16); i; --i )
        {
          v17 = *v15++;
          if ( v17 )
          {
            v18 = &ReplyMessage[v17];
            *(v15 - 1) = (__int64)v18;
            *(_QWORD *)v18 -= v14;
          }
        }
      }
    }
    else
    {
      *(_CLIENT_ID *)(ReplyMessage + 8) = NtCurrentTeb()->ClientId;
      v13 = ((__int64 (__fastcall *)(char *, char *))CsrServerApiRoutine)(ReplyMessage, ReplyMessage);
    }
    if ( v13 < 0 )
      *((_DWORD *)ReplyMessage + 13) = v13;
    return *((unsigned int *)ReplyMessage + 13);
  }
}

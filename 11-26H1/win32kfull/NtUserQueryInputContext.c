/*
 * XREFs of NtUserQueryInputContext @ 0x140204230
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 */

HANDLE __fastcall NtUserQueryInputContext(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  HANDLE v8; // rbx
  int v9; // edi
  HANDLE ThreadProcessId; // rax
  int v12; // edi
  HANDLE *v13; // rax

  EnterSharedCrit(0LL, 1LL);
  if ( (**(_DWORD **)(W32GetUserSessionState(v5, v4) + 19904) & 4) == 0 )
  {
    UserSetLastError(120);
    v8 = 0LL;
    goto LABEL_7;
  }
  v6 = HMValidateHandleWithDescriptor(a1, 0x11u);
  v8 = 0LL;
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    if ( !a2 )
    {
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v7);
      goto LABEL_6;
    }
    v9 = a2 - 1;
    if ( !v9 )
    {
      ThreadProcessId = PsGetThreadId(*(PETHREAD *)v7);
LABEL_6:
      v8 = ThreadProcessId;
      goto LABEL_7;
    }
    v12 = v9 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
      {
        UserSetLastError(87);
        goto LABEL_7;
      }
      v13 = *(HANDLE **)(v7 + 824);
    }
    else
    {
      v13 = *(HANDLE **)(v7 + 816);
    }
    if ( v13 )
      v8 = *v13;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}

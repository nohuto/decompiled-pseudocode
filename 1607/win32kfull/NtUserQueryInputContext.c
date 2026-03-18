/*
 * XREFs of NtUserQueryInputContext @ 0x1C0117F40
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

HANDLE __fastcall NtUserQueryInputContext(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  HANDLE v9; // rbx
  int v10; // edi
  HANDLE ThreadProcessId; // rax
  int v13; // edi
  HANDLE *v14; // rax

  EnterSharedCrit(0LL, 1LL);
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL);
    v9 = 0LL;
    goto LABEL_7;
  }
  LOBYTE(v4) = 17;
  v6 = HMValidateHandle(a1, v4, gpsi, v5);
  v9 = 0LL;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 16);
    if ( !a2 )
    {
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v8);
      goto LABEL_6;
    }
    v10 = a2 - 1;
    if ( !v10 )
    {
      ThreadProcessId = PsGetThreadId(*(PETHREAD *)v8);
LABEL_6:
      v9 = ThreadProcessId;
      goto LABEL_7;
    }
    v13 = v10 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        UserSetLastError(87LL);
        goto LABEL_7;
      }
      v14 = *(HANDLE **)(v8 + 704);
    }
    else
    {
      v14 = *(HANDLE **)(v8 + 696);
    }
    if ( v14 )
      v9 = *v14;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}

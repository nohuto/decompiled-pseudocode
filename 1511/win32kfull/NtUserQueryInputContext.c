/*
 * XREFs of NtUserQueryInputContext @ 0x1C00F5DD0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

HANDLE __fastcall NtUserQueryInputContext(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  HANDLE v7; // rbx
  int v8; // edi
  HANDLE ThreadProcessId; // rax
  int v11; // edi
  HANDLE *v12; // rax

  EnterSharedCrit(0LL, 1LL);
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120);
    v7 = 0LL;
    goto LABEL_7;
  }
  v4 = HMValidateHandle(a1, 17);
  v7 = 0LL;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 16);
    if ( !a2 )
    {
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v6);
      goto LABEL_6;
    }
    v8 = a2 - 1;
    if ( !v8 )
    {
      ThreadProcessId = PsGetThreadId(*(PETHREAD *)v6);
LABEL_6:
      v7 = ThreadProcessId;
      goto LABEL_7;
    }
    v11 = v8 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        UserSetLastError(87);
        goto LABEL_7;
      }
      v12 = *(HANDLE **)(v6 + 704);
    }
    else
    {
      v12 = *(HANDLE **)(v6 + 696);
    }
    if ( v12 )
      v7 = *v12;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}

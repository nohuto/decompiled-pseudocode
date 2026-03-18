/*
 * XREFs of NtUserUndelegateInput @ 0x1C00FB5F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C00FB698 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 */

__int64 __fastcall NtUserUndelegateInput(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v11; // ecx

  EnterCrit(1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 320) && a2 - 1 <= 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v4 + 16) + 384LL) == PsGetCurrentProcessWin32Process(v6) )
      {
        v9 = *(_QWORD *)(v8 + 312);
        _HandleDelegatedInput(v9, a2, 0LL);
        CleanupInputDelegation(v9, v8);
        v7 = 1;
        goto LABEL_6;
      }
      v11 = 5;
    }
    else
    {
      v11 = 87;
    }
    UserSetLastError(v11);
  }
LABEL_6:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}

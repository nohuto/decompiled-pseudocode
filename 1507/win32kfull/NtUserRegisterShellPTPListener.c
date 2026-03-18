/*
 * XREFs of NtUserRegisterShellPTPListener @ 0x1C0155EE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsShellProcess @ 0x1C0080B7C (IsShellProcess.c)
 *     _RegisterShellPTPListener @ 0x1C0155F88 (_RegisterShellPTPListener.c)
 */

__int64 __fastcall NtUserRegisterShellPTPListener(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v11; // ecx

  EnterCrit(1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 384LL)) )
    {
      if ( (!a2 || *(char *)(v8 + 44) >= 0 && *(char *)(v8 + 43) >= 0)
        && *(_QWORD *)(*(_QWORD *)(v8 + 16) + 384LL) == PsGetCurrentProcessWin32Process(v9) )
      {
        v7 = RegisterShellPTPListener(v8, a2);
        goto LABEL_8;
      }
      UserSetLastError(87);
      v11 = 87;
    }
    else
    {
      v11 = 5;
    }
    UserSetLastError(v11);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}

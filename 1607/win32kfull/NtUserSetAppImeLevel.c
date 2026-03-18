/*
 * XREFs of NtUserSetAppImeLevel @ 0x1C0219210
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     InternalSetProp @ 0x1C00A782C (InternalSetProp.c)
 */

__int64 __fastcall NtUserSetAppImeLevel(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    if ( (*gpsi & 4) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpsi, v5);
      v6 = *(_QWORD *)(v8 + 16);
      if ( *(_QWORD *)(v6 + 376) == CurrentProcessWin32Process )
      {
        InternalSetProp(v8, (unsigned __int16)atomImeLevel, v2, 5);
        v7 = 1;
      }
    }
    else
    {
      UserSetLastError(120LL);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}

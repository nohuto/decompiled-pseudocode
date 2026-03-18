/*
 * XREFs of NtUserUnhookWindowsHookEx @ 0x1C00A4650
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00A4690 (zzzUnhookWindowsHookEx.c)
 */

__int64 __fastcall NtUserUnhookWindowsHookEx(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct tagHOOK *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 5;
  v5 = (struct tagHOOK *)HMValidateHandle(a1, v2, v3, v4);
  v8 = 0;
  if ( v5 )
    v8 = zzzUnhookWindowsHookEx(v5);
  UserSessionSwitchLeaveCrit(v7, v6);
  return v8;
}

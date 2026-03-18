/*
 * XREFs of NtUserUnhookWindowsHookEx @ 0x1C00821B0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00821F0 (zzzUnhookWindowsHookEx.c)
 */

__int64 __fastcall NtUserUnhookWindowsHookEx(__int64 a1)
{
  struct tagHOOK *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx

  EnterCrit(0LL, 1LL);
  v2 = (struct tagHOOK *)HMValidateHandle(a1, 5);
  v5 = 0;
  if ( v2 )
    v5 = zzzUnhookWindowsHookEx(v2);
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}

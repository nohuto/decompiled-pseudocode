/*
 * XREFs of NtUserUnhookWindowsHookEx @ 0x1C0049AE0
 * Callers:
 *     <none>
 * Callees:
 *     zzzUnhookWindowsHookEx @ 0x1C0049B20 (zzzUnhookWindowsHookEx.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserUnhookWindowsHookEx(__int64 a1)
{
  __int64 v2; // rdx
  struct tagHOOK *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx

  EnterCrit(1LL);
  LOBYTE(v2) = 5;
  v3 = (struct tagHOOK *)HMValidateHandle(a1, v2);
  v6 = 0;
  if ( v3 )
    v6 = zzzUnhookWindowsHookEx(v3);
  UserSessionSwitchLeaveCrit(v5, v4);
  return v6;
}

/*
 * XREFs of NtUserDestroyWindow @ 0x140084320
 * Callers:
 *     <none>
 * Callees:
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 */

__int64 __fastcall NtUserDestroyWindow(__int64 a1)
{
  struct tagWND *v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  EnterCrit(0LL, 0LL);
  v2 = (struct tagWND *)ValidateHwnd(a1);
  v4 = 0;
  if ( v2 )
    v4 = xxxDestroyWindow(v2);
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}

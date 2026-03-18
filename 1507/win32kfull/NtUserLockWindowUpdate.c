/*
 * XREFs of NtUserLockWindowUpdate @ 0x1C0009580
 * Callers:
 *     <none>
 * Callees:
 *     zzzLockWindowUpdate2 @ 0x1C0044DC8 (zzzLockWindowUpdate2.c)
 */

__int64 __fastcall NtUserLockWindowUpdate(__int64 a1)
{
  unsigned int v2; // ebx
  struct tagWND *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  EnterCrit(1LL);
  v2 = 0;
  if ( !a1 )
  {
    v3 = 0LL;
    goto LABEL_3;
  }
  v3 = (struct tagWND *)ValidateHwnd(a1);
  if ( v3 )
LABEL_3:
    v2 = zzzLockWindowUpdate2(v3);
  UserSessionSwitchLeaveCrit(v5, v4);
  return v2;
}

/*
 * XREFs of NtUserNotifyProcessCreate @ 0x1C009A6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C009A754 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 */

__int64 __fastcall NtUserNotifyProcessCreate(unsigned int a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx

  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v8) == gpepCSRSS )
    v11 = xxxUserNotifyProcessCreate(a1, a2, a3, a4);
  else
    v11 = -1073741790;
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}

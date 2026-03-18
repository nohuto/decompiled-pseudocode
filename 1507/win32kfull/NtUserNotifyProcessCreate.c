/*
 * XREFs of NtUserNotifyProcessCreate @ 0x1C00801F0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C0080260 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 */

__int64 __fastcall NtUserNotifyProcessCreate(unsigned int a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx

  EnterCrit(1LL);
  if ( PsGetCurrentProcess(v9, v8) == gpepCSRSS )
    v12 = xxxUserNotifyProcessCreate(a1, a2, a3, a4);
  else
    v12 = -1073741790;
  UserSessionSwitchLeaveCrit(v11, v10);
  return v12;
}

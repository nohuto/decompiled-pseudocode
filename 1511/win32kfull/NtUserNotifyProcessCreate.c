/*
 * XREFs of NtUserNotifyProcessCreate @ 0x1C00EC9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C00ECA24 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 */

__int64 __fastcall NtUserNotifyProcessCreate(unsigned int a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx

  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v9, v8, v10, v11) == gpepCSRSS )
    v14 = xxxUserNotifyProcessCreate(a1, a2, a3, a4);
  else
    v14 = -1073741790;
  UserSessionSwitchLeaveCrit(v13, v12);
  return v14;
}

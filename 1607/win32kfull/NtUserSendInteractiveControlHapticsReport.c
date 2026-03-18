/*
 * XREFs of NtUserSendInteractiveControlHapticsReport @ 0x1C0219110
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?xxxSendInteractiveControlDeviceFeedback@@YAJKPEAXK@Z @ 0x1C0229804 (-xxxSendInteractiveControlDeviceFeedback@@YAJKPEAXK@Z.c)
 */

__int64 __fastcall NtUserSendInteractiveControlHapticsReport(unsigned __int16 a1, unsigned int a2, char *a3)
{
  size_t v4; // rdi
  int v6; // ebx
  struct _GERERIC_HAPTICS_CONFIGURATION *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _GERERIC_HAPTICS_CONFIGURATION *v10; // rsi

  v4 = a2;
  v6 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( (_DWORD)v4 && ((unsigned __int64)&a3[v4] > W32UserProbeAddress || &a3[v4] < a3) )
    *W32UserProbeAddress = 0;
  v7 = (struct _GERERIC_HAPTICS_CONFIGURATION *)Win32AllocPoolWithQuota(v4, 1768452949LL);
  v10 = v7;
  if ( v7 )
  {
    memmove(v7, a3, v4);
    LOBYTE(v6) = (int)xxxSendInteractiveControlDeviceFeedback(a1, v10, v4) >= 0;
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v6;
}

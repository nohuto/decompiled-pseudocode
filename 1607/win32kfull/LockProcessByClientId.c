/*
 * XREFs of LockProcessByClientId @ 0x1C009AC70
 * Callers:
 *     NtUserSetActiveProcessForMonitor @ 0x1C0098A20 (NtUserSetActiveProcessForMonitor.c)
 *     _AllowSetForegroundWindow @ 0x1C0099100 (_AllowSetForegroundWindow.c)
 *     NtUserDwmValidateWindow @ 0x1C0099A70 (NtUserDwmValidateWindow.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C009A754 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C009ABD4 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     xxxWaitForInputIdle @ 0x1C01046AC (xxxWaitForInputIdle.c)
 *     GetConsoleDesktop @ 0x1C01DF3C8 (GetConsoleDesktop.c)
 *     NtUserCheckAccessForIntegrityLevel @ 0x1C0210DA0 (NtUserCheckAccessForIntegrityLevel.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C0210F20 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C0212ED0 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     xxxActivateDebugger @ 0x1C02315D8 (xxxActivateDebugger.c)
 * Callees:
 *     LockProcessByClientIdEx @ 0x1C009ACB8 (LockProcessByClientIdEx.c)
 */

__int64 __fastcall LockProcessByClientId(__int64 a1, PVOID *a2)
{
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = -1;
  result = LockProcessByClientIdEx(a1, a2, &v4);
  if ( (int)result >= 0 && v4 != gSessionId )
  {
    ObfDereferenceObject(*a2);
    *a2 = 0LL;
    return 3221225473LL;
  }
  return result;
}

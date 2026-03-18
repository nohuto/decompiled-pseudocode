/*
 * XREFs of LockProcessByClientId @ 0x1C00734FC
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C0073460 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     _AllowSetForegroundWindow @ 0x1C008B3E0 (_AllowSetForegroundWindow.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C0096A00 (NtUserSetActiveProcessForMonitor.c)
 *     NtUserDwmValidateWindow @ 0x1C00CED60 (NtUserDwmValidateWindow.c)
 *     xxxWaitForInputIdle @ 0x1C00E296C (xxxWaitForInputIdle.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C00ECA24 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 *     GetConsoleDesktop @ 0x1C01E8AE8 (GetConsoleDesktop.c)
 *     NtUserCheckAccessForIntegrityLevel @ 0x1C02181D0 (NtUserCheckAccessForIntegrityLevel.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C0218350 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C021A100 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     xxxActivateDebugger @ 0x1C023957C (xxxActivateDebugger.c)
 * Callees:
 *     LockProcessByClientIdEx @ 0x1C0073544 (LockProcessByClientIdEx.c)
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

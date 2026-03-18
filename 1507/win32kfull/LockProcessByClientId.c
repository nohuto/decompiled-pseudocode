/*
 * XREFs of LockProcessByClientId @ 0x1C008077C
 * Callers:
 *     NtUserSetActiveProcessForMonitor @ 0x1C007D720 (NtUserSetActiveProcessForMonitor.c)
 *     _AllowSetForegroundWindow @ 0x1C007DD60 (_AllowSetForegroundWindow.c)
 *     NtUserDwmValidateWindow @ 0x1C007E960 (NtUserDwmValidateWindow.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C0080260 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C00806E0 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     xxxWaitForInputIdle @ 0x1C00E00DC (xxxWaitForInputIdle.c)
 *     GetConsoleDesktop @ 0x1C01E84B8 (GetConsoleDesktop.c)
 *     NtUserCheckAccessForIntegrityLevel @ 0x1C0218400 (NtUserCheckAccessForIntegrityLevel.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C0218580 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C021A390 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     xxxActivateDebugger @ 0x1C0239168 (xxxActivateDebugger.c)
 * Callees:
 *     LockProcessByClientIdEx @ 0x1C00807C4 (LockProcessByClientIdEx.c)
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

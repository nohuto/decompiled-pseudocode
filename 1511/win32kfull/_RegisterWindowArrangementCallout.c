/*
 * XREFs of _RegisterWindowArrangementCallout @ 0x1C00D5A10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     IsShellProcess @ 0x1C00738DC (IsShellProcess.c)
 *     IAMThreadAccessGranted @ 0x1C00789B0 (IAMThreadAccessGranted.c)
 *     GetMessageWindow @ 0x1C007AA6C (GetMessageWindow.c)
 *     _UnregisterHotKey @ 0x1C008A5A4 (_UnregisterHotKey.c)
 *     _RegisterHotKey @ 0x1C008A6EC (_RegisterHotKey.c)
 *     SetShellWndManagementWindow @ 0x1C00D5B04 (SetShellWndManagementWindow.c)
 *     IsIAMThread @ 0x1C00D5B48 (IsIAMThread.c)
 */

__int64 __fastcall RegisterWindowArrangementCallout(struct tagWND *a1, int a2)
{
  __int64 v4; // rsi
  int v5; // ecx
  __int64 v7; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v4 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 12) & 0x88) != 0 || !IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_11:
    v5 = 5;
    goto LABEL_10;
  }
  if ( !a2 )
  {
    v7 = *(_QWORD *)(v4 + 320);
    if ( !v7 )
      return 1LL;
    if ( *(struct tagWND **)(*((_QWORD *)a1 + 3) + 320LL) == a1 && *(_QWORD *)(v7 + 16) == gptiCurrent )
    {
      UnregisterHotKey(a1, 61536);
      SetShellWndManagementWindow(v4, 0LL);
      return 1LL;
    }
    goto LABEL_11;
  }
  if ( *(_QWORD *)(v4 + 320) )
  {
    v5 = 1242;
    goto LABEL_10;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent
    || !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 376LL))
    || !(unsigned int)IsIAMThread(gptiCurrent) )
  {
    goto LABEL_11;
  }
  if ( *((_QWORD *)a1 + 11) != GetMessageWindow((__int64)a1) || *((_DWORD *)a1 + 86) != 2 )
  {
    v5 = 87;
LABEL_10:
    UserSetLastError(v5);
    return 0LL;
  }
  SetShellWndManagementWindow(v4, a1);
  LODWORD(BugCheckParameter2) = 115;
  RegisterHotKey(*(struct tagWND **)(v4 + 320), 0LL, 61536LL, 20481LL, BugCheckParameter2);
  return 1LL;
}

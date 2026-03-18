/*
 * XREFs of _RegisterWindowArrangementCallout @ 0x1C00ED9E0
 * Callers:
 *     <none>
 * Callees:
 *     GetMessageWindow @ 0x1C0063580 (GetMessageWindow.c)
 *     _UnregisterHotKey @ 0x1C0097BF4 (_UnregisterHotKey.c)
 *     _RegisterHotKey @ 0x1C0097DFC (_RegisterHotKey.c)
 *     IsShellProcess @ 0x1C009B064 (IsShellProcess.c)
 *     IAMThreadAccessGranted @ 0x1C00A6F0C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     SetShellWndManagementWindow @ 0x1C00EDAD4 (SetShellWndManagementWindow.c)
 *     IsIAMThread @ 0x1C00EDB18 (IsIAMThread.c)
 */

__int64 __fastcall RegisterWindowArrangementCallout(struct tagWND *a1, __int64 a2)
{
  int v2; // ebp
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v7; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v2 = a2;
  v4 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2) + 12) & 0x88) != 0 || !IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_11:
    v5 = 5LL;
    goto LABEL_10;
  }
  if ( !v2 )
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
    v5 = 1242LL;
    goto LABEL_10;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent
    || !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 376LL))
    || !(unsigned int)IsIAMThread(gptiCurrent) )
  {
    goto LABEL_11;
  }
  if ( *((_QWORD *)a1 + 11) != GetMessageWindow((__int64)a1) || (*((_DWORD *)a1 + 88) & 0xF) != 2 )
  {
    v5 = 87LL;
LABEL_10:
    UserSetLastError(v5);
    return 0LL;
  }
  SetShellWndManagementWindow(v4, a1);
  LODWORD(BugCheckParameter2) = 115;
  RegisterHotKey(*(struct tagWND **)(v4 + 320), 0LL, 61536, 20481, BugCheckParameter2);
  return 1LL;
}

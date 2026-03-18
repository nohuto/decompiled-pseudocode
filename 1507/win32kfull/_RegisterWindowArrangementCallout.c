/*
 * XREFs of _RegisterWindowArrangementCallout @ 0x1C0154AF0
 * Callers:
 *     <none>
 * Callees:
 *     _UnregisterHotKey @ 0x1C003D884 (_UnregisterHotKey.c)
 *     _RegisterHotKey @ 0x1C003D9A4 (_RegisterHotKey.c)
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsShellProcess @ 0x1C0080B7C (IsShellProcess.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 */

__int64 __fastcall RegisterWindowArrangementCallout(struct tagWND *a1, int a2)
{
  __int64 v4; // rsi
  int v5; // ecx
  __int64 v7; // rax

  v4 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 12) & 0x88) != 0 || !IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_11:
    v5 = 5;
    goto LABEL_10;
  }
  if ( !a2 )
  {
    v7 = *(_QWORD *)(v4 + 312);
    if ( !v7 )
      return 1LL;
    if ( (struct tagWND *)v7 == a1 && *(_QWORD *)(v7 + 16) == gptiCurrent )
    {
      UnregisterHotKey(a1, 61536);
      HMAssignmentUnlock(v4 + 312);
      *(_DWORD *)(v4 + 320) = 0;
      return 1LL;
    }
    goto LABEL_11;
  }
  if ( *(_QWORD *)(v4 + 312) )
  {
    v5 = 1242;
    goto LABEL_10;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent
    || !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 384LL))
    || gptiCurrent != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 280LL) )
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
  HMAssignmentLock(v4 + 312, a1);
  RegisterHotKey(*(struct tagWND **)(v4 + 312), 0LL, 61536, 0x5001u, 115);
  return 1LL;
}

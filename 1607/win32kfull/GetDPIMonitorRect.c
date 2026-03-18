/*
 * XREFs of GetDPIMonitorRect @ 0x1C00B0210
 * Callers:
 *     CalcWindowFullScreen @ 0x1C00723E0 (CalcWindowFullScreen.c)
 *     _MonitorFromPoint @ 0x1C00AEF70 (_MonitorFromPoint.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetDPIMonitorRect(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  _BOOL8 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  BOOL v16; // ecx

  if ( (a2 & 0x20) != 0 )
    return a1 + 28;
  if ( (a2 & 0x40) != 0 )
    return a1 + 44;
  if ( (a2 & 0x80u) != 0LL )
    return a1 + 60;
  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, a4) & 0xF) == 0 )
  {
    v7 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v8, v9) + 408)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v8, v9) + 408)
                               + 8LL)
                   + 244LL) & 1;
    if ( v7 )
      return a1 + 44;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v7, v6, v8, v9) & 0xF) != 1 )
    return a1 + 28;
  v16 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12) + 408)
     && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15) + 408)
                              + 8LL)
                  + 244LL) & 1;
  result = a1 + 60;
  if ( !v16 )
    return a1 + 28;
  return result;
}

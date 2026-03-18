/*
 * XREFs of GetDPIMonitorRect @ 0x1C0082FCC
 * Callers:
 *     CalcWindowFullScreen @ 0x1C006601C (CalcWindowFullScreen.c)
 *     _MonitorFromPoint @ 0x1C0082CA0 (_MonitorFromPoint.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetDPIMonitorRect(__int64 a1, char a2)
{
  __int64 result; // rax
  _BOOL8 v4; // rcx
  BOOL v5; // ecx

  if ( (a2 & 0x20) != 0 )
    return a1 + 28;
  if ( (a2 & 0x40) != 0 )
    return a1 + 44;
  if ( a2 < 0 )
    return a1 + 60;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x4000) == 0 )
  {
    v4 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1;
    if ( v4 )
      return a1 + 44;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x2000) == 0 )
    return a1 + 28;
  v5 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1;
  result = a1 + 60;
  if ( !v5 )
    return a1 + 28;
  return result;
}

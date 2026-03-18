/*
 * XREFs of NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C0218490
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     DCEPtInRect @ 0x1C00FB9D8 (DCEPtInRect.c)
 */

__int64 __fastcall NtUserPerMonitorDPIPhysicalToLogicalPoint(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned __int64 *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int MonitorFlagsFromWindow; // eax
  unsigned __int64 v17; // r8
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v19; // eax
  unsigned __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
      goto LABEL_15;
  }
  v8 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v8 = (unsigned __int64 *)W32UserProbeAddress;
  *v8 = *v8;
  v21 = *a2;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v8, v5, v6) + 432)
                   + 224LL) & 1) == 0 )
    {
      v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11) + 432);
      if ( (*(_BYTE *)(v13 + 224) & 0x20) == 0 )
        W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15);
    }
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
    PhysicalToLogicalDPIPoint(&v21, &v21, MonitorFlagsFromWindow | 0x100u);
    if ( !DCEPtInRect((_DWORD *)(a1 + 112), v21) )
    {
      LODWORD(a1) = 0;
      goto LABEL_13;
    }
  }
  else
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v4, (__int64)v8, v5, v6);
    v19 = MonitorFlagsFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
    PhysicalToLogicalDPIPoint(&v21, &v21, v19 | 0x100u);
    v17 = v21;
  }
  LODWORD(a1) = 1;
LABEL_13:
  if ( (_DWORD)a1 )
  {
    *a2 = v17;
    LODWORD(a1) = 1;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v4, v7);
  return (int)a1;
}

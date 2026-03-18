/*
 * XREFs of NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C0150C20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     DCEPtInRect @ 0x1C00FB9D8 (DCEPtInRect.c)
 */

__int64 __fastcall NtUserLogicalToPerMonitorDPIPhysicalPoint(__int64 a1, unsigned __int64 *a2)
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
  unsigned __int64 v16; // rdx
  int MonitorFlagsFromWindow; // eax
  int v18; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp+18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
    {
      v18 = 0;
      goto LABEL_15;
    }
  }
  v8 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v8 = (unsigned __int64 *)W32UserProbeAddress;
  *v8 = *v8;
  v21 = *a2;
  if ( !a1 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v4, (__int64)v8, v5, v6);
    MonitorFlagsFromWindow = MonitorFlagsFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v8, v5, v6) + 432) + 224LL) & 1) != 0
    || (v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11) + 432),
        (*(_BYTE *)(v13 + 224) & 0x20) != 0)
    || (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) == (*(_DWORD *)(a1 + 352) & 0xF) )
  {
    v16 = v21;
  }
  else
  {
    TransformPointBetweenCoordinateSpaces(&v22, &v21, a1, 0LL);
    v16 = v22;
  }
  if ( DCEPtInRect((_DWORD *)(a1 + 112), v16) )
  {
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
LABEL_12:
    LogicalToPhysicalDPIPoint(&v21, &v21, MonitorFlagsFromWindow | 0x100u, 0LL);
    v18 = 1;
    goto LABEL_13;
  }
  v18 = 0;
LABEL_13:
  if ( v18 == 1 )
    *a2 = v21;
LABEL_15:
  UserSessionSwitchLeaveCrit(v4, v7);
  return v18;
}

/*
 * XREFs of GetSystemMetricsForWindow @ 0x1C0095290
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C003F8D8 (ParkIcon.c)
 *     xxxBroadcastMessageEx @ 0x1C004D864 (xxxBroadcastMessageEx.c)
 *     xxxGetMenuBarInfo @ 0x1C00856C0 (xxxGetMenuBarInfo.c)
 *     xxxCheckFullScreen @ 0x1C008B384 (xxxCheckFullScreen.c)
 *     xxxCalcClientRect @ 0x1C0094474 (xxxCalcClientRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00948A8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetCaptionHeight @ 0x1C00F3714 (GetCaptionHeight.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C00F94A0 (NtUserGetWindowMinimizeRect.c)
 *     xxxMNInvertItem @ 0x1C010D450 (xxxMNInvertItem.c)
 *     MNPositionSysMenu @ 0x1C0118354 (MNPositionSysMenu.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01C2F4C (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z @ 0x1C01E43C8 (-xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z.c)
 *     xxxDrawMenuBarTemp @ 0x1C0240598 (xxxDrawMenuBarTemp.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     RealGetDpiSystemMetrics @ 0x1C0093138 (RealGetDpiSystemMetrics.c)
 *     IsDpiDependentMetric @ 0x1C00953D8 (IsDpiDependentMetric.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall GetSystemMetricsForWindow(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v8; // r9d
  int v9; // r10d

  v2 = (int)a2;
  v4 = 0;
  if ( (unsigned int)IsDPIDWMSysMet(a2) && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) )
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned int)IsDpiDependentMetric((unsigned int)v2) )
    return (unsigned int)RealGetDpiSystemMetrics(v2);
  if ( *(_DWORD *)(a1 + 344) == 2 || !(unsigned int)IsDPIAbsoluteSysMet(v5) && !v9 )
  {
    v6 = gpsi;
    return *(unsigned int *)(v6 + 4 * v2 + 1880);
  }
  if ( v8 >= -1 )
  {
    if ( v8 <= 0 )
      return *(unsigned int *)(gpsi + 4 * v2 + 2268);
    if ( v8 == 1 )
    {
      v6 = gpsi;
      if ( v9 )
        return *(unsigned int *)(gpsi + 4 * v2 + 2656);
      return *(unsigned int *)(v6 + 4 * v2 + 1880);
    }
  }
  return v4;
}

/*
 * XREFs of GetSystemMetricsForWindow @ 0x1C00720B4
 * Callers:
 *     xxxCheckFullScreen @ 0x1C006899C (xxxCheckFullScreen.c)
 *     xxxCalcClientRect @ 0x1C0071278 (xxxCalcClientRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00716CC (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxGetMenuBarInfo @ 0x1C00740E0 (xxxGetMenuBarInfo.c)
 *     GetCaptionHeight @ 0x1C00757A8 (GetCaptionHeight.c)
 *     xxxBroadcastMessageEx @ 0x1C0075B18 (xxxBroadcastMessageEx.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C00C95F4 (ParkIcon.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C00FF0D0 (NtUserGetWindowMinimizeRect.c)
 *     xxxMNInvertItem @ 0x1C0139128 (xxxMNInvertItem.c)
 *     MNPositionSysMenu @ 0x1C0143254 (MNPositionSysMenu.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01C4B0C (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z @ 0x1C01E4858 (-xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z.c)
 *     xxxDrawMenuBarTemp @ 0x1C0240734 (xxxDrawMenuBarTemp.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     RealGetDpiSystemMetrics @ 0x1C006F5CC (RealGetDpiSystemMetrics.c)
 *     IsDpiDependentMetric @ 0x1C00721FC (IsDpiDependentMetric.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
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
  if ( (unsigned int)IsDPIDWMSysMet(a2) && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
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

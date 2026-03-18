/*
 * XREFs of ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0120BC4
 * Callers:
 *     xxxTooltipWndProc @ 0x1C0128580 (xxxTooltipWndProc.c)
 * Callees:
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     xxxResetTooltip @ 0x1C007B17C (xxxResetTooltip.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0120C4C (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0121BE0 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0227840 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall xxxTooltipHandleTimer(struct tagTOOLTIPWND *a1, int a2)
{
  unsigned int v2; // edi
  int v4; // edx
  int v5; // edx
  __int64 DesktopWindow; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 1;
  v4 = a2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 && (unsigned int)TooltipAnimate(a1) )
        SetTooltipTimer(a1, 2u, *((_DWORD *)a1 + 95));
    }
    else
    {
      xxxResetTooltip(a1);
    }
  }
  else
  {
    DesktopWindow = GetDesktopWindow((__int64)a1);
    v10[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v10;
    v10[1] = DesktopWindow;
    ++*(_DWORD *)(DesktopWindow + 8);
    if ( xxxSetParentWorker(a1, DesktopWindow) )
      v2 = xxxShowTooltip(a1);
    else
      v2 = 0;
    ThreadUnlock1(v9, v8);
  }
  return v2;
}

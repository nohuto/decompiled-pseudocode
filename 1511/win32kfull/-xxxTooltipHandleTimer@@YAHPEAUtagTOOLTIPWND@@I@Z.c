/*
 * XREFs of ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C014A340
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00C6150 (xxxTooltipWndProc.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     xxxResetTooltip @ 0x1C00C75D4 (xxxResetTooltip.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00C76BC (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C014A3C8 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0227B9C (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
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
        SetTooltipTimer(a1, 2, *((_DWORD *)a1 + 95));
    }
    else
    {
      xxxResetTooltip(a1);
    }
  }
  else
  {
    DesktopWindow = GetDesktopWindow((__int64)a1);
    v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v10;
    v10[1] = DesktopWindow;
    ++*(_DWORD *)(DesktopWindow + 8);
    if ( xxxSetParentWorker(a1, DesktopWindow, 0LL) )
      v2 = xxxShowTooltip(a1);
    else
      v2 = 0;
    ThreadUnlock1(v9, v8);
  }
  return v2;
}

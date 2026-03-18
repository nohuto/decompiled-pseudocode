/*
 * XREFs of GreSetBkMode @ 0x1C0018468
 * Callers:
 *     xxxMenuDraw @ 0x1C0014214 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C00144C0 (xxxDrawMenuItem.c)
 *     DrawFrameControl @ 0x1C0018084 (DrawFrameControl.c)
 *     FinalUserInit @ 0x1C00D744C (FinalUserInit.c)
 *     xxxMNInvertItem @ 0x1C0139128 (xxxMNInvertItem.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C014C01C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01FF024 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0237D58 (xxxDrawCaptionTemp.c)
 *     xxxDrawState @ 0x1C023DD88 (xxxDrawState.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetBkMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v6; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v7[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  v4 = v7[0];
  if ( v7[0] )
  {
    v6 = *(_QWORD *)(v7[0] + 80LL);
    v3 = *(_DWORD *)(v6 + 92);
    *(_DWORD *)(v6 + 92) = a2;
    if ( (unsigned int)(a2 - 1) > 1 )
      LOBYTE(a2) = 1;
    *(_BYTE *)(*(_QWORD *)(v4 + 80) + 73LL) = a2;
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v3;
}

/*
 * XREFs of GreGetTextAlign @ 0x1C00CD038
 * Callers:
 *     FlipUserTextOutW @ 0x1C0010200 (FlipUserTextOutW.c)
 *     xxxMenuDraw @ 0x1C0014214 (xxxMenuDraw.c)
 *     DrawFrameControl @ 0x1C0018084 (DrawFrameControl.c)
 *     CreateCompatiblePublicDC @ 0x1C00CCE28 (CreateCompatiblePublicDC.c)
 *     _ServerFixupMenuDC @ 0x1C00ED968 (_ServerFixupMenuDC.c)
 *     xxxMNInvertItem @ 0x1C0139128 (xxxMNInvertItem.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0227D00 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0237D58 (xxxDrawCaptionTemp.c)
 *     xxxDrawState @ 0x1C023DD88 (xxxDrawState.c)
 *     DrawTextExWorker @ 0x1C024B318 (DrawTextExWorker.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetTextAlign(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v3, a1);
  if ( v3[0] )
  {
    v1 = *(_DWORD *)(*(_QWORD *)(v3[0] + 80LL) + 156LL);
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}

/*
 * XREFs of GreSetTextAlign @ 0x1C00CCFB8
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

__int64 __fastcall GreSetTextAlign(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v8[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v8, a1);
  v4 = v8[0];
  if ( v8[0] )
  {
    v5 = *(_QWORD *)(v8[0] + 80LL);
    v3 = *(_DWORD *)(v5 + 156);
    *(_DWORD *)(v5 + 156) = a2;
    v6 = *(_QWORD *)(v4 + 80);
    if ( (a2 & 6) != 6 && (*(_BYTE *)(v6 + 312) & 1) != 0 )
      LOBYTE(a2) = a2 ^ 2;
    *(_DWORD *)(v6 + 152) = a2 & 0x1F;
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  return v3;
}

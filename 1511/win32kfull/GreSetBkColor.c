/*
 * XREFs of GreSetBkColor @ 0x1C0015630
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00144C0 (xxxDrawMenuItem.c)
 *     DrawBox @ 0x1C0014AB0 (DrawBox.c)
 *     BltIcon @ 0x1C00153C8 (BltIcon.c)
 *     DrawPushButton @ 0x1C0016FE4 (DrawPushButton.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     FinalUserInit @ 0x1C00D744C (FinalUserInit.c)
 *     RecolorDeskPattern @ 0x1C01141B0 (RecolorDeskPattern.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0144AAC (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C014C01C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01FF50C (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0210460 (SfnINLPKDRAWSWITCHWND.c)
 *     xxxDrawCaptionTemp @ 0x1C0237D58 (xxxDrawCaptionTemp.c)
 *     BltColor @ 0x1C023DC5C (BltColor.c)
 *     xxxDrawState @ 0x1C023DD88 (xxxDrawState.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C023E554 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxPSMTextOut @ 0x1C02449F4 (xxxPSMTextOut.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreSetBkColor(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+2Ch] [rbp-Ch]

  v9 = 0;
  v10 = 0;
  v3 = -1;
  XDCOBJ::vLock((XDCOBJ *)&v8, a1);
  v4 = v8;
  if ( v8 )
  {
    v5 = *(_QWORD *)(v8 + 80);
    v3 = *(_DWORD *)(v5 + 36);
    *(_DWORD *)(v5 + 36) = a2;
    v6 = a2 & 0x13FFFFFF;
    if ( v6 != v3 )
    {
      *(_DWORD *)(*(_QWORD *)(v4 + 80) + 32LL) = v6;
      *(_DWORD *)(*(_QWORD *)(v4 + 80) + 8LL) |= 0xBu;
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v8);
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
  }
  return v3;
}

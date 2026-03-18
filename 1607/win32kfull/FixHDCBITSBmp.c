/*
 * XREFs of FixHDCBITSBmp @ 0x1C011D850
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     xxxDrawMenuItem @ 0x1C00B40F4 (xxxDrawMenuItem.c)
 *     BitBltSysBmp @ 0x1C011D69C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C014B160 (NtUserBitBltSysBmp.c)
 *     ?BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022E4F0 (-BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022E79C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0235F40 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C023882C (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

void __fastcall FixHDCBITSBmp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdx

  if ( gpdaHDCBITSCreation == -1 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, a4) & 0xF) != 0
      || (v4 = (_QWORD *)ghbmBits96, *(_WORD *)(gpsi + 8678LL) == 96) )
    {
      v4 = (_QWORD *)ghbmBits;
    }
    GreSelectBitmap(*(_QWORD *)(gpDispInfo + 32LL), *v4);
  }
}

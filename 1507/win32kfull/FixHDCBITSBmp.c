/*
 * XREFs of FixHDCBITSBmp @ 0x1C00F4B48
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     xxxDrawMenuItem @ 0x1C0051CE0 (xxxDrawMenuItem.c)
 *     BitBltSysBmp @ 0x1C00F4978 (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C011A330 (NtUserBitBltSysBmp.c)
 *     ?BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C02357A0 (-BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0235A94 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C023E3A4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0242300 (xxxRealDrawMenuItem.c)
 * Callees:
 *     <none>
 */

void __fastcall FixHDCBITSBmp(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // rdx

  if ( gpdaHDCBITSCreation == -1 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v1) + 776) & 0x4000) != 0
      || (v2 = (_QWORD *)ghbmBits96, *(_WORD *)(gpsi + 7286LL) == 96) )
    {
      v2 = (_QWORD *)ghbmBits;
    }
    GreSelectBitmap(*(_QWORD *)(gpDispInfo + 32LL), *v2);
  }
}

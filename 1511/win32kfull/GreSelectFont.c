/*
 * XREFs of GreSelectFont @ 0x1C0018350
 * Callers:
 *     xxxMenuDraw @ 0x1C0014214 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C00144C0 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C0015858 (xxxMNCompute.c)
 *     DrawFrameControl @ 0x1C0018084 (DrawFrameControl.c)
 *     NtGdiSelectFont @ 0x1C0018340 (NtGdiSelectFont.c)
 *     NtGdiFlushUserBatch @ 0x1C0030EB0 (NtGdiFlushUserBatch.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C006BFBC (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00C6410 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     CreateCompatiblePublicDC @ 0x1C00CCE28 (CreateCompatiblePublicDC.c)
 *     xxxSetNCFonts @ 0x1C00CD2F8 (xxxSetNCFonts.c)
 *     FinalUserInit @ 0x1C00D744C (FinalUserInit.c)
 *     MNSetupAnimationDC @ 0x1C00D75E4 (MNSetupAnimationDC.c)
 *     _ServerFixupMenuDC @ 0x1C00ED968 (_ServerFixupMenuDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C010E45C (xxxDrawMenuBarUnderlines.c)
 *     xxxMNInvertItem @ 0x1C0139128 (xxxMNInvertItem.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C014C01C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?UserReinitializeStockFonts@@YAXK@Z @ 0x1C01D35E0 (-UserReinitializeStockFonts@@YAXK@Z.c)
 *     ?EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z @ 0x1C01E93E8 (-EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E9540 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01FF024 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01FF50C (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0210460 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0227D00 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0237D58 (xxxDrawCaptionTemp.c)
 *     ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C023DC50 (-SelectFont@@YAXPEAU_SELECT_FONT@@@Z.c)
 *     xxxDrawState @ 0x1C023DD88 (xxxDrawState.c)
 *     xxxDrawMenuBarTemp @ 0x1C0240734 (xxxDrawMenuBarTemp.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreSelectFont(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 *v6; // rax
  struct LFONT *v7; // rax
  struct LFONT *v8; // rsi
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+2Ch] [rbp-Ch]

  v2 = a2;
  v3 = 0LL;
  v11 = 0;
  LOBYTE(a2) = 1;
  v12 = 0;
  v10 = HmgLockEx(a1, a2, 0LL);
  if ( v10 )
  {
    if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v10) )
    {
      v5 = v10;
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
      v5 = 0LL;
      v10 = 0LL;
    }
    if ( v5 )
    {
      v6 = *(__int64 **)(v5 + 160);
      if ( v6 )
        v3 = *v6;
      if ( v2 == v3 )
        goto LABEL_14;
      LOBYTE(v4) = 10;
      v7 = (struct LFONT *)HmgShareLockCheck(v2, v4);
      v8 = v7;
      if ( v7 )
      {
        if ( (*(_BYTE *)(gpentHmgr + 24LL * (unsigned __int16)*(_DWORD *)v7 + 15) & 2) == 0 )
        {
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(v5 + 160));
          *(_QWORD *)(v5 + 160) = v8;
          *(_QWORD *)(*(_QWORD *)(v5 + 80) + 176LL) = v2;
          *(_QWORD *)(v5 + 2136) = 0LL;
          *(_DWORD *)(*(_QWORD *)(v5 + 80) + 8LL) |= 0x10u;
          *(_DWORD *)(*(_QWORD *)(v5 + 80) + 8LL) &= ~0x20u;
LABEL_14:
          XDCOBJ::RestoreAttributes((XDCOBJ *)&v10);
          _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
          return v3;
        }
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v7);
      }
      v3 = 0LL;
      goto LABEL_14;
    }
  }
  return v3;
}

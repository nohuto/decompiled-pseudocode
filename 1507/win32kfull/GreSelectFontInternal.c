/*
 * XREFs of GreSelectFontInternal @ 0x1C0293D18
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C001BF90 (NtGdiFlushUserBatch.c)
 *     xxxMenuDraw @ 0x1C0050108 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C0051CE0 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C0052F0C (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0053F14 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     DrawFrameControl @ 0x1C00564A4 (DrawFrameControl.c)
 *     NtGdiSelectFont @ 0x1C00567D0 (NtGdiSelectFont.c)
 *     GreSelectFont @ 0x1C00567E0 (GreSelectFont.c)
 *     _ServerFixupMenuDC @ 0x1C00E7618 (_ServerFixupMenuDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00F8334 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNInvertItem @ 0x1C010D450 (xxxMNInvertItem.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0122A90 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     CreateCompatiblePublicDC @ 0x1C0126D64 (CreateCompatiblePublicDC.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@@Z @ 0x1C0128C6C (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@@Z.c)
 *     xxxSetNCFonts @ 0x1C0137618 (xxxSetNCFonts.c)
 *     FinalUserInit @ 0x1C0138628 (FinalUserInit.c)
 *     MNSetupAnimationDC @ 0x1C01387E8 (MNSetupAnimationDC.c)
 *     ?UserReinitializeStockFonts@@YAXK@Z @ 0x1C01D1B2C (-UserReinitializeStockFonts@@YAXK@Z.c)
 *     ?EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z @ 0x1C01E8DB8 (-EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E8F1C (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01FEC24 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01FFBA8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0210070 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C02279A0 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0237948 (xxxDrawCaptionTemp.c)
 *     ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C023DA80 (-SelectFont@@YAXPEAU_SELECT_FONT@@@Z.c)
 *     xxxDrawState @ 0x1C023DBC0 (xxxDrawState.c)
 *     xxxDrawMenuBarTemp @ 0x1C0240598 (xxxDrawMenuBarTemp.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?CleanupRoutine@?$HmgShareLockResult@VLFONT@@@@QEAAXXZ @ 0x1C0293CE8 (-CleanupRoutine@-$HmgShareLockResult@VLFONT@@@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectFontInternal(HDC a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rax
  struct LFONT *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct LFONT *v13; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v14[32]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v15[7]; // [rsp+48h] [rbp-38h] BYREF

  v5 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( v15[0] )
  {
    if ( a3
      || (v6 = 3LL * (unsigned __int16)*(_DWORD *)v15[0],
          (*(_DWORD *)(gpentHmgr + 24LL * (unsigned __int16)*(_DWORD *)v15[0] + 8) & 0xFFFFFFFE) != 0) )
    {
      v7 = *(__int64 **)(v15[0] + 160LL);
      if ( v7 )
        v5 = *v7;
      if ( a2 != v5 )
      {
        LOBYTE(v6) = 10;
        v13 = (struct LFONT *)HmgShareLockCheck(a2, v6);
        memset(v14, 0, sizeof(v14));
        PushThreadGuardedObject(
          v14,
          &v13,
          UnexpectedThreadTerminationHandler<HmgShareLockResult<LFONT>>::OnUnexpectedThreadTerminationStatic);
        if ( !v13 || (*(_BYTE *)(gpentHmgr + 24LL * (unsigned __int16)*(_DWORD *)v13 + 15) & 2) != 0 )
        {
          v5 = 0LL;
        }
        else
        {
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(v15[0] + 160LL));
          v8 = v13;
          v13 = 0LL;
          *(_QWORD *)(v15[0] + 160LL) = v8;
          *(_QWORD *)(*(_QWORD *)(v15[0] + 80LL) + 176LL) = a2;
          *(_QWORD *)(v15[0] + 2160LL) = 0LL;
          *(_DWORD *)(*(_QWORD *)(v15[0] + 80LL) + 8LL) |= 0x10u;
          *(_DWORD *)(*(_QWORD *)(v15[0] + 80LL) + 8LL) &= ~0x20u;
        }
        HmgShareLockResult<LFONT>::CleanupRoutine(&v13);
        PopThreadGuardedObject(v14, v9, v10, v11);
      }
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v15);
  return v5;
}

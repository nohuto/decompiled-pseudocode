/*
 * XREFs of GreSelectFontInternal @ 0x1C0292FA8
 * Callers:
 *     GreSelectFont @ 0x1C004CA30 (GreSelectFont.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C004EE70 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     DrawFrameControl @ 0x1C005F534 (DrawFrameControl.c)
 *     xxxDrawMenuItem @ 0x1C00B40F4 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C00B4BF8 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00B5C4C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     xxxMenuDraw @ 0x1C00B6AD8 (xxxMenuDraw.c)
 *     xxxSetNCFonts @ 0x1C00B8670 (xxxSetNCFonts.c)
 *     CreateCompatiblePublicDC @ 0x1C00B966C (CreateCompatiblePublicDC.c)
 *     FinalUserInit @ 0x1C00BC3C8 (FinalUserInit.c)
 *     MNSetupAnimationDC @ 0x1C00BC588 (MNSetupAnimationDC.c)
 *     _ServerFixupMenuDC @ 0x1C01163C0 (_ServerFixupMenuDC.c)
 *     NtGdiSelectFont @ 0x1C011CEA0 (NtGdiSelectFont.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C011F944 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0131828 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNInvertItem @ 0x1C013F324 (xxxMNInvertItem.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C015116C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?UserReinitializeStockFonts@@YAXK@Z @ 0x1C01CB8E0 (-UserReinitializeStockFonts@@YAXK@Z.c)
 *     ?EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z @ 0x1C01DFBD0 (-EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01DFC64 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01F67B0 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F77B4 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0208230 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C022795C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
 *     ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C0235630 (-SelectFont@@YAXPEAU_SELECT_FONT@@@Z.c)
 *     xxxDrawState @ 0x1C0235770 (xxxDrawState.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?CleanupRoutine@?$HmgShareLockResult@VLFONT@@@@QEAAXXZ @ 0x1C0292F78 (-CleanupRoutine@-$HmgShareLockResult@VLFONT@@@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectFontInternal(HDC a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // rcx
  struct LFONT *v9; // rcx
  struct LFONT *v11; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v12[32]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v13[7]; // [rsp+48h] [rbp-38h] BYREF

  v5 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v7 = v13[0];
  if ( v13[0] )
  {
    if ( !a3 )
    {
      if ( (*(_DWORD *)(HmgPentryFromPobj(v13[0]) + 8) & 0xFFFFFFFE) == 0 )
        goto LABEL_13;
      v7 = v13[0];
    }
    v8 = *(__int64 **)(v7 + 160);
    if ( v8 )
      v5 = *v8;
    if ( a2 != v5 )
    {
      LOBYTE(v6) = 10;
      v11 = (struct LFONT *)HmgShareLockCheck(a2, v6);
      memset(v12, 0, sizeof(v12));
      PushThreadGuardedObject(
        v12,
        &v11,
        UnexpectedThreadTerminationHandler<HmgShareLockResult<LFONT>>::OnUnexpectedThreadTerminationStatic);
      if ( !v11 || (*(_BYTE *)(HmgPentryFromPobj(v11) + 15) & 2) != 0 )
      {
        v5 = 0LL;
      }
      else
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(v13[0] + 160LL));
        v9 = v11;
        v11 = 0LL;
        *(_QWORD *)(v13[0] + 160LL) = v9;
        *(_QWORD *)(*(_QWORD *)(v13[0] + 80LL) + 176LL) = a2;
        *(_QWORD *)(v13[0] + 2160LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(v13[0] + 80LL) + 8LL) |= 0x10u;
        *(_DWORD *)(*(_QWORD *)(v13[0] + 80LL) + 8LL) &= ~0x20u;
      }
      HmgShareLockResult<LFONT>::CleanupRoutine(&v11);
      PopThreadGuardedObject(v12);
    }
  }
LABEL_13:
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return v5;
}

/*
 * XREFs of memmove @ 0x1C0152980
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0002CBC (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     FixupGrayScan @ 0x1C0003294 (FixupGrayScan.c)
 *     NtUserGetRawInputData @ 0x1C00039F0 (NtUserGetRawInputData.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0007AC0 (NtUserHwndQueryRedirectionInfo.c)
 *     sbit_GetBitmap @ 0x1C000A084 (sbit_GetBitmap.c)
 *     xxxCsEvent @ 0x1C000C5DC (xxxCsEvent.c)
 *     FixupColorScan @ 0x1C000D144 (FixupColorScan.c)
 *     pgsetComputeSymbolCP @ 0x1C000F5F8 (pgsetComputeSymbolCP.c)
 *     ConvertToAndFromWideChar @ 0x1C000F948 (ConvertToAndFromWideChar.c)
 *     vCopy_IFIV @ 0x1C000FC94 (vCopy_IFIV.c)
 *     bLoadFontFile @ 0x1C001058C (bLoadFontFile.c)
 *     bLoadTTF @ 0x1C0010AF4 (bLoadTTF.c)
 *     bLoadTTF_Cache @ 0x1C001106C (bLoadTTF_Cache.c)
 *     NtGdiEnumFonts @ 0x1C00172C0 (NtGdiEnumFonts.c)
 *     BuildAndLoadLinkedFontRoutine @ 0x1C0018550 (BuildAndLoadLinkedFontRoutine.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0018720 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     NtGdiHfontCreate @ 0x1C00188F0 (NtGdiHfontCreate.c)
 *     hfontCreate @ 0x1C00189F0 (hfontCreate.c)
 *     NtGdiGradientFill @ 0x1C0019050 (NtGdiGradientFill.c)
 *     ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0019560 (-vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiGetFontData @ 0x1C001AC30 (NtGdiGetFontData.c)
 *     NtGdiGetTextFaceW @ 0x1C001B2C0 (NtGdiGetTextFaceW.c)
 *     GreGetTextFaceW @ 0x1C001B3B4 (GreGetTextFaceW.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C001B660 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C001B99C (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 *     cjCopyFontDataW @ 0x1C001BCD8 (cjCopyFontDataW.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0020714 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0022154 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     NtGdiGetTextExtentExW @ 0x1C0022700 (NtGdiGetTextExtentExW.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     NtGdiPolyTextOutW @ 0x1C0029E00 (NtGdiPolyTextOutW.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0033EB0 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     bCaptureBitmapInfo @ 0x1C00352D4 (bCaptureBitmapInfo.c)
 *     ?bSubtractComplex@RGNOBJAPI@@AEAAHPEAU_RECTL@@0H@Z @ 0x1C0037338 (-bSubtractComplex@RGNOBJAPI@@AEAAHPEAU_RECTL@@0H@Z.c)
 *     NtGdiExtTextOutW @ 0x1C003E280 (NtGdiExtTextOutW.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C004153C (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 *     NtGdiDrawStream @ 0x1C00417B0 (NtGdiDrawStream.c)
 *     NtGdiExtGetObjectW @ 0x1C0042030 (NtGdiExtGetObjectW.c)
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 *     NtGdiGetDIBitsInternal @ 0x1C00423A0 (NtGdiGetDIBitsInternal.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0042BD0 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     NtGdiCreateDIBSection @ 0x1C004B100 (NtGdiCreateDIBSection.c)
 *     GreCreateDIBitmapReal @ 0x1C004B598 (GreCreateDIBitmapReal.c)
 *     _GetUserObjectInformation @ 0x1C004C060 (_GetUserObjectInformation.c)
 *     NtUserRegisterClassExWOW @ 0x1C004FC10 (NtUserRegisterClassExWOW.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C0050DA0 (NtUserGetWindowCompositionAttribute.c)
 *     CreateProp @ 0x1C0054980 (CreateProp.c)
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 *     NtUserBuildHwndList @ 0x1C006D080 (NtUserBuildHwndList.c)
 *     xxxInsertMenuItem @ 0x1C006E9E0 (xxxInsertMenuItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006F270 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     NtUserCreateWindowEx @ 0x1C0072500 (NtUserCreateWindowEx.c)
 *     DefSetText @ 0x1C0072B08 (DefSetText.c)
 *     NtUserConsoleControl @ 0x1C0073130 (NtUserConsoleControl.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0075940 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0076330 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0078590 (NtUserSetWindowCompositionAttribute.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C007CD7C (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     NtGdiHLSurfGetInformation @ 0x1C007E240 (NtGdiHLSurfGetInformation.c)
 *     NtUserSendInput @ 0x1C00828A0 (NtUserSendInput.c)
 *     SetAppCompatFlags @ 0x1C0086EA0 (SetAppCompatFlags.c)
 *     NtUserRegisterRawInputDevices @ 0x1C008A0A0 (NtUserRegisterRawInputDevices.c)
 *     ?ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z @ 0x1C0094D20 (-ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z.c)
 *     NtUserSetGestureConfig @ 0x1C0098390 (NtUserSetGestureConfig.c)
 *     NtUserToUnicodeEx @ 0x1C0098E90 (NtUserToUnicodeEx.c)
 *     bReloadGlyphSet @ 0x1C00A3BD8 (bReloadGlyphSet.c)
 *     sfac_CopyFontAndPrePrograms @ 0x1C00A4E88 (sfac_CopyFontAndPrePrograms.c)
 *     ttfdQueryTrueTypeTable2 @ 0x1C00A98B8 (ttfdQueryTrueTypeTable2.c)
 *     fsg_ExecuteGlyph @ 0x1C00AEC30 (fsg_ExecuteGlyph.c)
 *     fsg_CompositeInnerGridFit @ 0x1C00B2D90 (fsg_CompositeInnerGridFit.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00BFB60 (HT_CreateDeviceHalftoneInfo.c)
 *     InitializeFUDI @ 0x1C00C13C8 (InitializeFUDI.c)
 *     ExpandHTPatX @ 0x1C00C1878 (ExpandHTPatX.c)
 *     RenderNineGridInternal @ 0x1C00C2240 (RenderNineGridInternal.c)
 *     DNG_DrawRow @ 0x1C00C2FA0 (DNG_DrawRow.c)
 *     ?vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C00C47E0 (-vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     NtUserQueryInformationThread @ 0x1C00CE260 (NtUserQueryInformationThread.c)
 *     NtUserSetInformationThread @ 0x1C00CE800 (NtUserSetInformationThread.c)
 *     ?Grow@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C00CF39C (-Grow@-$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x1C00D12E8 (-bGetRegString@@YA_NPEAXPEBGPEAGK@Z.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C00D137C (vIFIMetricsToEnumLogFontExDvW.c)
 *     NtUserCreateWindowStation @ 0x1C00D5C80 (NtUserCreateWindowStation.c)
 *     ?vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C00DA2E0 (-vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C00DAFD0 (-vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     NtGdiTransformPoints @ 0x1C00DC5D0 (NtGdiTransformPoints.c)
 *     NtGdiGetWidthTable @ 0x1C00DDFE0 (NtGdiGetWidthTable.c)
 *     NtUserProcessConnect @ 0x1C00E09D0 (NtUserProcessConnect.c)
 *     NtGdiGetCharABCWidthsW @ 0x1C00E1790 (NtGdiGetCharABCWidthsW.c)
 *     InputAABFDATAToAA24 @ 0x1C00E4580 (InputAABFDATAToAA24.c)
 *     TextCopy @ 0x1C00E5268 (TextCopy.c)
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00E6724 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C00E8CC0 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00E8DF8 (GreGetOutlineTextMetricsInternalW.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C00EE9D0 (NtGdiGetGlyphIndicesWInternal.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00EF814 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     NtGdiDoPalette @ 0x1C00F2F30 (NtGdiDoPalette.c)
 *     ReferenceClass @ 0x1C00F3070 (ReferenceClass.c)
 *     ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00F3220 (-vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     _BuildNameList @ 0x1C00F348C (_BuildNameList.c)
 *     vCopyAndZeroOutPaddingBits @ 0x1C00F6224 (vCopyAndZeroOutPaddingBits.c)
 *     vProcessEntry @ 0x1C00F695C (vProcessEntry.c)
 *     scl_CopyCurrentCharPoints @ 0x1C00F6D28 (scl_CopyCurrentCharPoints.c)
 *     RemoveProcessFromJob @ 0x1C00F8690 (RemoveProcessFromJob.c)
 *     ?vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C00F8CD0 (-vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z @ 0x1C00FB044 (-pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z.c)
 *     ?_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z @ 0x1C00FDE80 (-_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z.c)
 *     ?_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z @ 0x1C00FE1C0 (-_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z.c)
 *     ?_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z @ 0x1C00FE244 (-_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z.c)
 *     ttfdQueryFontCaps @ 0x1C00FE950 (ttfdQueryFontCaps.c)
 *     ?LOADSTRING@@YAHPEAXIPEAGH@Z @ 0x1C00FEA9C (-LOADSTRING@@YAHPEAXIPEAGH@Z.c)
 *     NtGdiGetFontUnicodeRanges @ 0x1C00FF680 (NtGdiGetFontUnicodeRanges.c)
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C00FFE94 (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 *     _CreateAcceleratorTable @ 0x1C0100760 (_CreateAcceleratorTable.c)
 *     PREALLOCMEM2 @ 0x1C0102254 (PREALLOCMEM2.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C01022D4 (xxxProcessSetWindowPosEvent.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C0102C20 (NtUserGetRawInputDeviceInfo.c)
 *     bDescStr @ 0x1C01035F4 (bDescStr.c)
 *     NtGdiGetGlyphOutline @ 0x1C0105D20 (NtGdiGetGlyphOutline.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C0106E84 (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C01077AC (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 *     _SetWindowStationUser @ 0x1C010C9D4 (_SetWindowStationUser.c)
 *     vtfdQueryFontFile @ 0x1C010EF80 (vtfdQueryFontFile.c)
 *     BmfdQueryFontFile @ 0x1C010F470 (BmfdQueryFontFile.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0119FD8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C011A4BC (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C011A8E0 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetClassInfoEx @ 0x1C011AE80 (NtUserGetClassInfoEx.c)
 *     _SetCursorIconData @ 0x1C011BB5C (_SetCursorIconData.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011D254 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C011EBA0 (NtUserfnINDEVICECHANGE.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C011FCD0 (NtUserfnPOWERBROADCAST.c)
 *     AllocateUnicodeString @ 0x1C011FED4 (AllocateUnicodeString.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C0121068 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C012EC00 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C012ECA0 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 *     ?vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C01332D0 (-vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C013A3F8 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 *     GreRealizePalette @ 0x1C013C7E0 (GreRealizePalette.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C013E0F4 (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C013E7B0 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     NtGdiExtEscape @ 0x1C0140160 (NtGdiExtEscape.c)
 *     GetCachedSMP @ 0x1C01409EC (GetCachedSMP.c)
 *     CreateStandardMonoPattern @ 0x1C0140CD0 (CreateStandardMonoPattern.c)
 *     NtGdiGetCharWidthW @ 0x1C0141DA0 (NtGdiGetCharWidthW.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C01436DC (DwmSyncGetCompositionAttribute.c)
 *     ?vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C0145700 (-vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C0145C20 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0146210 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C01469A0 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0146A58 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0146F48 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     pppUserModeCallback @ 0x1C01470CC (pppUserModeCallback.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1C0148140 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 *     _ConvertMemHandle @ 0x1C014B114 (_ConvertMemHandle.c)
 *     NtUserCreateLocalMemHandle @ 0x1C014D110 (NtUserCreateLocalMemHandle.c)
 *     xxxRemoteReconnect @ 0x1C014DAC0 (xxxRemoteReconnect.c)
 *     vFontFileCache @ 0x1C014FBB4 (vFontFileCache.c)
 *     ?vRop2FunctionA@@YAXPEAK00K@Z @ 0x1C01536B0 (-vRop2FunctionA@@YAXPEAK00K@Z.c)
 *     ?vRop2FunctionC@@YAXPEAK00K@Z @ 0x1C01536C0 (-vRop2FunctionC@@YAXPEAK00K@Z.c)
 *     ?RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z @ 0x1C01C34C4 (-RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z.c)
 *     GetProductString @ 0x1C01CD718 (GetProductString.c)
 *     ReleasePointerDeviceInfo @ 0x1C01CE000 (ReleasePointerDeviceInfo.c)
 *     GetTaskName @ 0x1C01D31D0 (GetTaskName.c)
 *     ?IoBuildDeviceConfigRequest@@YAPEAU_IRP@@KPEAU_DEVICE_OBJECT@@PEAXK@Z @ 0x1C01D42A4 (-IoBuildDeviceConfigRequest@@YAPEAU_IRP@@KPEAU_DEVICE_OBJECT@@PEAXK@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D43F0 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D6C88 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01DBEC8 (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01DDF00 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     ?DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z @ 0x1C01DE0C0 (-DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01DF17C (CreatePseudoDigitizerDevice.c)
 *     ProbeAndCaptureSoftKbdData @ 0x1C01E3564 (ProbeAndCaptureSoftKbdData.c)
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C01EFE90 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z.c)
 *     BuildManipulationInputInfo @ 0x1C01FBB38 (BuildManipulationInputInfo.c)
 *     RemoteShadowCleanup @ 0x1C0202F20 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C02030A0 (RemoteShadowStart.c)
 *     AllocGestureInfo @ 0x1C0203DDC (AllocGestureInfo.c)
 *     SfnIMECONTROL @ 0x1C020EA00 (SfnIMECONTROL.c)
 *     SfnPOUTLPINT @ 0x1C0212760 (SfnPOUTLPINT.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C0213738 (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     xxxClientCopyDDEIn1 @ 0x1C0213ED8 (xxxClientCopyDDEIn1.c)
 *     xxxClientCopyDDEOut1 @ 0x1C0214390 (xxxClientCopyDDEOut1.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C0218820 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C0219150 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureConfig @ 0x1C021A200 (NtUserGetGestureConfig.c)
 *     NtUserGetGestureExtArgs @ 0x1C021A4B0 (NtUserGetGestureExtArgs.c)
 *     NtUserGetRawInputBuffer @ 0x1C021B860 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C021BBA0 (NtUserGetRawPointerDeviceData.c)
 *     NtUserGetTouchInputInfo @ 0x1C021BED0 (NtUserGetTouchInputInfo.c)
 *     NtUserInjectTouchInput @ 0x1C021CE90 (NtUserInjectTouchInput.c)
 *     NtUserMagGetContextInformation @ 0x1C021D490 (NtUserMagGetContextInformation.c)
 *     NtUserResolveDesktopForWOW @ 0x1C021F420 (NtUserResolveDesktopForWOW.c)
 *     NtUserSetCalibrationData @ 0x1C021F6C0 (NtUserSetCalibrationData.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0220020 (NtUserSetManipulationInputTarget.c)
 *     NtUserSlicerControl @ 0x1C02211D0 (NtUserSlicerControl.c)
 *     NtUserUserHandleGrantAccess @ 0x1C0221BB0 (NtUserUserHandleGrantAccess.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C02229B0 (NtUserfnINLPHLPSTRUCT.c)
 *     ?CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C022EE00 (-CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     ?CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C022F140 (-CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?CopyTPPointerInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@PEAX@Z @ 0x1C022F208 (-CopyTPPointerInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@PEAX@Z.c)
 *     ?StoreRawDataBlock@@YAKPEAUtagPOINTERHOLDINGFRAME@@KQEAE@Z @ 0x1C0230998 (-StoreRawDataBlock@@YAKPEAUtagPOINTERHOLDINGFRAME@@KQEAE@Z.c)
 *     HoldRimCompleteFrame @ 0x1C0230E2C (HoldRimCompleteFrame.c)
 *     ?Grow@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C02392CC (-Grow@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     bGeneratePath @ 0x1C0245E4C (bGeneratePath.c)
 *     lGGOBitmap @ 0x1C0246EF8 (lGGOBitmap.c)
 *     vStretchGlyphBitmap @ 0x1C02487D0 (vStretchGlyphBitmap.c)
 *     AddEllipsisAndDrawLine @ 0x1C024ABC0 (AddEllipsisAndDrawLine.c)
 *     AddBGRMapCache @ 0x1C024E194 (AddBGRMapCache.c)
 *     CacheRGBToXYZ @ 0x1C024E2CC (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C024E3C0 (ComputeBGRMappingTable.c)
 *     FindBGRMapCache @ 0x1C024EED8 (FindBGRMapCache.c)
 *     TrimBGRMapCache @ 0x1C024F340 (TrimBGRMapCache.c)
 *     CreateHalftoneBrushPat @ 0x1C024F434 (CreateHalftoneBrushPat.c)
 *     BltMask_CY @ 0x1C0253250 (BltMask_CY.c)
 *     ShrinkMask_CY @ 0x1C0253B40 (ShrinkMask_CY.c)
 *     ExpandDIB_CY @ 0x1C0255130 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C0255AC0 (ExpandDIB_CY_ExpCX.c)
 *     FastExpAA_CY @ 0x1C02569B0 (FastExpAA_CY.c)
 *     GrayExpandDIB_CY @ 0x1C0257320 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0257AC0 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C0258720 (GrayShrinkDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C0259340 (ShrinkDIB_CY.c)
 *     ShrinkDIB_CY_SrkCX @ 0x1C0259AF0 (ShrinkDIB_CY_SrkCX.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C025B5A4 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C025CDD8 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     EngHangNotification @ 0x1C025E2F0 (EngHangNotification.c)
 *     NtGdiGetMonitorID @ 0x1C025E520 (NtGdiGetMonitorID.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C026749C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02682E4 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreGetUFI @ 0x1C0269238 (GreGetUFI.c)
 *     GreGetUFIPathname @ 0x1C02693CC (GreGetUFIPathname.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0269720 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0269B80 (NtGdiGetLinkedUFIs.c)
 *     NtGdiSetLinkedUFIs @ 0x1C0269E90 (NtGdiSetLinkedUFIs.c)
 *     NtGdiStartDoc @ 0x1C0269FE0 (NtGdiStartDoc.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1C027DF54 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     cMapRemoteFonts @ 0x1C027E968 (cMapRemoteFonts.c)
 *     NtGdiPlgBlt @ 0x1C0280570 (NtGdiPlgBlt.c)
 *     FONTOBJ_vGetInfo @ 0x1C02861F0 (FONTOBJ_vGetInfo.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C0286420 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C02869F4 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     GreGetCannonicalName @ 0x1C0287630 (GreGetCannonicalName.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C028BA10 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C028BBC0 (NtGdiGetEudcTimeStampEx.c)
 *     NtGdiGetStringBitmapW @ 0x1C028BD00 (NtGdiGetStringBitmapW.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028DB54 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028DEB0 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02902CC (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     GreGetCharacterPlacementW @ 0x1C0291D38 (GreGetCharacterPlacementW.c)
 *     ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_J@Z @ 0x1C029BCE4 (-ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_J@Z.c)
 *     ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x1C029BF5C (-ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z.c)
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C029C098 (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 *     ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C029CF10 (-UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C029D740 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C029EB90 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C029ED50 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C029F2A0 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02A1958 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C02A2F94 (-Insert@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@.c)
 *     ?ReAllocate@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z @ 0x1C02A3168 (-ReAllocate@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3464 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C02A38A8 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A39B8 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1C02A4594 (-bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z.c)
 *     NtGdiAddFontMemResourceEx @ 0x1C02A5950 (NtGdiAddFontMemResourceEx.c)
 *     NtGdiDescribePixelFormat @ 0x1C02A5C90 (NtGdiDescribePixelFormat.c)
 *     NtGdiDrawEscape @ 0x1C02A5D30 (NtGdiDrawEscape.c)
 *     NtGdiExtCreatePen @ 0x1C02A5E80 (NtGdiExtCreatePen.c)
 *     NtGdiGetCharacterPlacementW @ 0x1C02A6120 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x1C02A6780 (NtGdiGetEmbUFI.c)
 *     NtGdiGetFontResourceInfoInternalW @ 0x1C02A6910 (NtGdiGetFontResourceInfoInternalW.c)
 *     NtGdiGetKerningPairs @ 0x1C02A6B30 (NtGdiGetKerningPairs.c)
 *     NtGdiGetRasterizerCaps @ 0x1C02A6CC0 (NtGdiGetRasterizerCaps.c)
 *     NtGdiGetTextExtent @ 0x1C02A6D60 (NtGdiGetTextExtent.c)
 *     NtGdiGetUFI @ 0x1C02A6EF0 (NtGdiGetUFI.c)
 *     NtGdiGetUFIPathname @ 0x1C02A7010 (NtGdiGetUFIPathname.c)
 *     NtGdiMakeFontDir @ 0x1C02A73F0 (NtGdiMakeFontDir.c)
 *     NtGdiQueryFonts @ 0x1C02A77F0 (NtGdiQueryFonts.c)
 *     ProbeAndReadDesignVector @ 0x1C02A7E64 (ProbeAndReadDesignVector.c)
 *     ?CaptureBits@@YAXPEAX0K@Z @ 0x1C02A94F0 (-CaptureBits@@YAXPEAX0K@Z.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02A9654 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C02A9A94 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02A9B14 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C02AA0AC (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C02AA0F4 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02ADDF0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C02AE060 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02AE5D0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02AE740 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02AEBF0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     GreCreateDIBBrush @ 0x1C02B0C10 (GreCreateDIBBrush.c)
 *     NtGdiCreateDIBBrush @ 0x1C02B0F60 (NtGdiCreateDIBBrush.c)
 *     NtGdiResizePalette @ 0x1C02B1950 (NtGdiResizePalette.c)
 *     NtGdiCreateServerMetaFile @ 0x1C02B1E70 (NtGdiCreateServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02B1F90 (NtGdiGetServerMetaFileBits.c)
 *     ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x1C02B265C (-bExpand@STACKOBJ@@QEAAHK@Z.c)
 *     NtGdiGetETM @ 0x1C02B2DC0 (NtGdiGetETM.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C02B317C (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 *     NtGdiGetFontFileData @ 0x1C02B3850 (NtGdiGetFontFileData.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C02B45F8 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BB400 (-vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BB8D0 (-vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BBBF0 (-vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BBF20 (-vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02BDB2C (-vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 *     ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02C0C20 (-vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02C1F00 (-vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C02C2200 (-vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?WriteAbsolute8@@YAHPEAE0H0@Z @ 0x1C02C3F84 (-WriteAbsolute8@@YAHPEAE0H0@Z.c)
 *     ?WriteAbsolute4@@YAHPEAE0H0@Z @ 0x1C02C5290 (-WriteAbsolute4@@YAHPEAE0H0@Z.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02C8D08 (-bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02C8E04 (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02CA850 (-vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02CAA70 (-vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB24RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02CAD40 (-vFillGRectDIB24RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02CAF60 (-vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02CB250 (-vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?BltLnkReadPat4@@YAXPEAEK0KKKK@Z @ 0x1C02D3720 (-BltLnkReadPat4@@YAXPEAEK0KKKK@Z.c)
 *     ?vSrcAlignCopyMemory@@YAXPEAE0K@Z @ 0x1C02D4308 (-vSrcAlignCopyMemory@@YAXPEAE0K@Z.c)
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1C02D4C30 (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C02D4D34 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?ReAllocate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z @ 0x1C02D4E70 (-ReAllocate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?UmfdServerSendCompleteAndWaitReceive@@YAJPEAX0K0PEAK0@Z @ 0x1C02D6AF0 (-UmfdServerSendCompleteAndWaitReceive@@YAJPEAX0K0PEAK0@Z.c)
 *     ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x1C02D6EB8 (-TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z.c)
 *     ?CaptureUsermodeParameters@EscapeRequest@@UEAAXPEAX@Z @ 0x1C02D7670 (-CaptureUsermodeParameters@EscapeRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z @ 0x1C02D76D0 (-CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z @ 0x1C02D7840 (-CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x1C02D78D0 (-CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontFileRequest@@UEAAXPEAX@Z @ 0x1C02D7AF0 (-CaptureUsermodeParameters@QueryFontFileRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z @ 0x1C02D7D00 (-CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z @ 0x1C02D7E00 (-CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z @ 0x1C02D7F80 (-CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z.c)
 *     ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D80F0 (-CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D81F0 (-CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D8540 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D86B0 (-CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ScaleVertical @ 0x1C02DAD7C (ScaleVertical.c)
 *     bInitStockFontsInternal @ 0x1C0378158 (bInitStockFontsInternal.c)
 *     bInitOneStockFont @ 0x1C03786DC (bInitOneStockFont.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto xmov40;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
xmov40:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto xcpy40;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
xcpy40:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}

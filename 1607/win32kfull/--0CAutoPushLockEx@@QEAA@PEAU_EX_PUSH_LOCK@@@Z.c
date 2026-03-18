/*
 * XREFs of ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90
 * Callers:
 *     ??0AutoExclusiveUmfdFileViewLock@@QEAA@XZ @ 0x1C0021514 (--0AutoExclusiveUmfdFileViewLock@@QEAA@XZ.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0052968 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0052ADC (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0061C18 (GreUpdateSpriteClipRgn.c)
 *     GreSfmCloseCompositorRef @ 0x1C00665AC (GreSfmCloseCompositorRef.c)
 *     GreSfmOpenCompositorRef @ 0x1C0066C34 (GreSfmOpenCompositorRef.c)
 *     GreHintSpriteBlt @ 0x1C00D6900 (GreHintSpriteBlt.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00D6E48 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C00D72A4 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00D748C (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C00D80F0 (GreAdjustSpriteDirtyAccum.c)
 *     GreNotifyDirtySprite @ 0x1C00D82EC (GreNotifyDirtySprite.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00D8510 (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C00E16D4 (FindRimDevBackedDeviceInfo.c)
 *     Win32kRIMDevChangeCallback @ 0x1C00E2AC0 (Win32kRIMDevChangeCallback.c)
 *     ApplyRimDevBackedDeviceSummaryInfomation @ 0x1C00E2EF0 (ApplyRimDevBackedDeviceSummaryInfomation.c)
 *     UpdateMouseConnectionState @ 0x1C00E342C (UpdateMouseConnectionState.c)
 *     NtUserGetPointerDevices @ 0x1C00E3F80 (NtUserGetPointerDevices.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C00E4AD0 (_GetPrecisionTouchPadConfiguration.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C00E5930 (UpdatePointerDeviceSystemMetrics.c)
 *     CheckPointerDeviceConfiguration @ 0x1C00E61F0 (CheckPointerDeviceConfiguration.c)
 *     UpdateRimManagedKeyboardLeds @ 0x1C00EC68C (UpdateRimManagedKeyboardLeds.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0113860 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     NlsKbdSendIMENotification @ 0x1C0114D30 (NlsKbdSendIMENotification.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C0118D70 (GreSetRedirectionSurfaceSignaling.c)
 *     GreForceClipRgnChange @ 0x1C01242C0 (GreForceClipRgnChange.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C01324D8 (GreTransferSpriteStateToDwmState.c)
 *     UserGetHipDeviceInfo @ 0x1C01C85F0 (UserGetHipDeviceInfo.c)
 *     EnablePTPDevices @ 0x1C01C90F4 (EnablePTPDevices.c)
 *     GetTelemDeviceData @ 0x1C01C9258 (GetTelemDeviceData.c)
 *     IsPTPPointerDevicePresent @ 0x1C01C940C (IsPTPPointerDevicePresent.c)
 *     _GetTouchValidationStatus @ 0x1C01D6FA8 (_GetTouchValidationStatus.c)
 *     ?xxxVolumeUpDownComboSupported@@YAHXZ @ 0x1C01E0BF0 (-xxxVolumeUpDownComboSupported@@YAHXZ.c)
 *     NtUserGetRawInputDeviceList @ 0x1C0214A70 (NtUserGetRawInputDeviceList.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0224398 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C025E3E4 (GreAddBitmapD3DDirtyRgn.c)
 *     GreGetDxRgn @ 0x1C025E870 (GreGetDxRgn.c)
 *     GreHLsurfSetPresentFlags @ 0x1C025EC34 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C025ED3C (GreHLsurfSetUpdateId.c)
 *     GreHintDxUpdate @ 0x1C025EE58 (GreHintDxUpdate.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0270DD4 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C027492C (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0274E3C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0275738 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0275D90 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C02BBE00 (--0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NH@Z @ 0x1C02BBEA0 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NH@Z.c)
 * Callees:
 *     <none>
 */

CAutoPushLockEx *__fastcall CAutoPushLockEx::CAutoPushLockEx(CAutoPushLockEx *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  }
  return this;
}

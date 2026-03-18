/*
 * XREFs of ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C000A5E8 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C000AA24 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C000AF68 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0036538 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C003BEAC (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C003C598 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GreUpdateSpriteClipRgn @ 0x1C007AC30 (GreUpdateSpriteClipRgn.c)
 *     GreSfmCloseCompositorRef @ 0x1C007E5E4 (GreSfmCloseCompositorRef.c)
 *     GreSfmOpenCompositorRef @ 0x1C007EC28 (GreSfmOpenCompositorRef.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C007FA78 (GreSetRedirectionSurfaceSignaling.c)
 *     NlsKbdSendIMENotification @ 0x1C0085B00 (NlsKbdSendIMENotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C0094F50 (Win32kRIMDevChangeCallback.c)
 *     ApplyRimDevBackedDeviceSummaryInfomation @ 0x1C00952BC (ApplyRimDevBackedDeviceSummaryInfomation.c)
 *     UpdateMouseConnectionState @ 0x1C0095814 (UpdateMouseConnectionState.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C0095EA0 (UpdatePointerDeviceSystemMetrics.c)
 *     CheckPointerDeviceConfiguration @ 0x1C0098070 (CheckPointerDeviceConfiguration.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0098878 (_GetPrecisionTouchPadConfiguration.c)
 *     GreNotifyDirtySprite @ 0x1C009AE28 (GreNotifyDirtySprite.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C009B1FC (GreAdjustSpriteDirtyAccum.c)
 *     UpdateRimManagedKeyboardLeds @ 0x1C009CD4C (UpdateRimManagedKeyboardLeds.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00D2428 (GreTransferSpriteStateToDwmState.c)
 *     ??0AutoExclusiveUmfdFileViewLock@@QEAA@XZ @ 0x1C00D911C (--0AutoExclusiveUmfdFileViewLock@@QEAA@XZ.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F4384 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     GreForceClipRgnChange @ 0x1C0103A50 (GreForceClipRgnChange.c)
 *     NtUserGetRawInputDeviceList @ 0x1C0105A50 (NtUserGetRawInputDeviceList.c)
 *     NtUserGetPointerDevices @ 0x1C011D6A0 (NtUserGetPointerDevices.c)
 *     GreHintSpriteBlt @ 0x1C0145A60 (GreHintSpriteBlt.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C014F184 (FindRimDevBackedDeviceInfo.c)
 *     UserGetHipDeviceInfo @ 0x1C01CEA20 (UserGetHipDeviceInfo.c)
 *     EnablePTPDevices @ 0x1C01D0D58 (EnablePTPDevices.c)
 *     GetTelemDeviceData @ 0x1C01D1530 (GetTelemDeviceData.c)
 *     IsPTPPointerDevicePresent @ 0x1C01D1714 (IsPTPPointerDevicePresent.c)
 *     _GetTouchValidationStatus @ 0x1C01E0C60 (_GetTouchValidationStatus.c)
 *     ?xxxVolumeUpDownComboSupported@@YAHXZ @ 0x1C01EA36C (-xxxVolumeUpDownComboSupported@@YAHXZ.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C02282A8 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C0260AF4 (GreAddBitmapD3DDirtyRgn.c)
 *     GreGetDxRgn @ 0x1C0260F50 (GreGetDxRgn.c)
 *     GreHLsurfSetPresentFlags @ 0x1C02612F0 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C0261404 (GreHLsurfSetUpdateId.c)
 *     GreHintDxUpdate @ 0x1C026152C (GreHintDxUpdate.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C027287C (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02763E4 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02768F4 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02771F0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0277848 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C02B8A20 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02B8E3C (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
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

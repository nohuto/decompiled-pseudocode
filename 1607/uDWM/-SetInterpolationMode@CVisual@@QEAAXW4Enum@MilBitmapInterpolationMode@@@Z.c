/*
 * XREFs of ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001F154
 * Callers:
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800048A8 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180007700 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180007CD4 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800082F4 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180009394 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180009E24 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180016D00 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x18002169C (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x180047D5C (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800888C0 (-Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x18008FE28 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x180090278 (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x180097664 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetInterpolationMode(CVisual *a1, int a2)
{
  __int64 v2; // rax
  void (__fastcall *v3)(CVisual *__hidden, unsigned int); // rax

  if ( (*((_BYTE *)a1 + 188) & 2) == 0 || *((_DWORD *)a1 + 48) != a2 )
  {
    *((_DWORD *)a1 + 47) |= 2u;
    v2 = *(_QWORD *)a1;
    *((_DWORD *)a1 + 48) = a2;
    v3 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(v2 + 24);
    if ( v3 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(a1, 0x40u);
    else
      v3(a1, 64u);
  }
}

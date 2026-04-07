/*
 * XREFs of ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001CA80
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800027BC (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180002D70 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180004F10 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x1800112A8 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18001374C (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013ED0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x18001F4F4 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x180046AB0 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800836A0 (-Initialize@CTextTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x18008DEC8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x18008E35C (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x18009916C (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CVisual::SetInterpolationMode(CVisual *a1, int a2)
{
  __int64 v2; // rax
  void (__fastcall *v3)(CVisual *__hidden, unsigned int); // rdi

  if ( (*((_BYTE *)a1 + 188) & 0x10) == 0 || *((_DWORD *)a1 + 48) != a2 )
  {
    *((_DWORD *)a1 + 47) |= 0x10u;
    v2 = *(_QWORD *)a1;
    *((_DWORD *)a1 + 48) = a2;
    v3 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(v2 + 24);
    if ( v3 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(a1, 0x40u);
    else
      v3(a1, 64u);
  }
}

/*
 * XREFs of ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180014A30
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800027BC (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180003D98 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180004F10 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x1800115D0 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x1800125C0 (-UpdateBitmap@CImage@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180013474 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180021314 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x1800213C0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180025024 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18003472C (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180037CE8 (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_UpdateInstructions@CLivePreview@@AEAAJXZ @ 0x18006AC00 (-_UpdateInstructions@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x18008F1E4 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x18009916C (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z @ 0x180099F48 (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z.c)
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009BAB8 (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDrawGeometryInstruction::Create(
        struct CResource *a1,
        struct CResource *a2,
        struct CDrawGeometryInstruction **a3)
{
  void *(*v6)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  struct CDrawGeometryInstruction *v7; // rax
  struct CDrawGeometryInstruction *v8; // rdi
  unsigned int v9; // ebx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx

  v6 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v6 == WPF::ProcessHeapImpl::AllocClear )
    v7 = (struct CDrawGeometryInstruction *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v7 = (struct CDrawGeometryInstruction *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v6)(
                                              WPF::g_pProcessHeap,
                                              32LL);
  v8 = v7;
  v9 = 0;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 1;
    *(_QWORD *)v7 = &CDrawGeometryInstruction::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v10 = (CBaseObject *)*((_QWORD *)v8 + 2);
    if ( v10 )
      CBaseObject::Release(v10);
    *((_QWORD *)v8 + 2) = a1;
    if ( a1 )
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    v11 = (CBaseObject *)*((_QWORD *)v8 + 3);
    if ( v11 )
      CBaseObject::Release(v11);
    *((_QWORD *)v8 + 3) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    *a3 = v8;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x31u);
  }
  return v9;
}

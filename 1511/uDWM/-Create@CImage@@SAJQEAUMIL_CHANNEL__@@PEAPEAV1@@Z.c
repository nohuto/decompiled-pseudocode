/*
 * XREFs of ?Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003C630
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180028AC0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003B778 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180047050 (-Initialize@CDirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x180079784 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?Initialize@CRippleEffect@@IEAAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@@Z @ 0x180083F40 (-Initialize@CRippleEffect@@IEAAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?Initialize@CContactStationaryVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800880C0 (-Initialize@CContactStationaryVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180088E90 (-Initialize@CTextTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18008B080 (-Initialize@CPenBarrelKeyVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CFlickVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18008B630 (-Initialize@CFlickVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18008BD70 (-Initialize@CPenPressHoldVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18008C1B0 (-Initialize@CPressTapVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180092B00 (-Initialize@CIndirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x180022088 (--0CVisual@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Initialize@CImage@@EEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18003C8F0 (-Initialize@CImage@@EEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CImage::Create(struct MIL_CHANNEL__ *const a1, struct CImage **a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rdi
  CVisual *v5; // rax
  CImage *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  if ( !a2 )
  {
    v8 = -2147024809;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x13u);
    return v8;
  }
  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CVisual *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x148uLL);
  else
    v5 = (CVisual *)v4(WPF::g_pProcessHeap, 328LL);
  v6 = v5;
  if ( v5 )
  {
    CVisual::CVisual(v5);
    *(_QWORD *)v6 = &CImage::`vftable';
  }
  if ( !v6 )
  {
    v8 = -2147024882;
    goto LABEL_14;
  }
  v7 = CImage::Initialize(v6, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x13u);
  }
  else
  {
    *a2 = v6;
    v6 = 0LL;
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v8;
}

/*
 * XREFs of ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039884
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180025DA0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038B3C (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180048280 (-Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18007A89C (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?Initialize@CRippleEffect@@IEAAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@@Z @ 0x180084648 (-Initialize@CRippleEffect@@IEAAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?Initialize@CContactStationaryVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180088180 (-Initialize@CContactStationaryVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800888C0 (-Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008A340 (-Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CFlickVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008A8F0 (-Initialize@CFlickVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008B010 (-Initialize@CPenPressHoldVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008B440 (-Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180091450 (-Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x18001F310 (--0CVisual@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Initialize@CImage@@EEAAJPEAUIDwmChannel@@@Z @ 0x180039B80 (-Initialize@CImage@@EEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImage::Create(struct IDwmChannel *a1, struct CImage **a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rax
  CVisual *v5; // rax
  CVisual *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  if ( !a2 )
  {
    v8 = -2147024809;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xCu);
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
    memset_0(v5, 0, 0x148uLL);
    CVisual::CVisual(v6);
    *((_QWORD *)v6 + 33) = 0LL;
    *((_QWORD *)v6 + 34) = 0LL;
    *((_QWORD *)v6 + 35) = 0LL;
    *((_QWORD *)v6 + 36) = 0LL;
    *((_QWORD *)v6 + 37) = 0LL;
    *(_QWORD *)v6 = &CImage::`vftable';
    *((_QWORD *)v6 + 38) = 0LL;
    *((_QWORD *)v6 + 39) = 0LL;
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xCu);
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

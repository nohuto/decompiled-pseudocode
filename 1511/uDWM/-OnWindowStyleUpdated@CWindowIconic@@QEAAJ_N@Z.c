/*
 * XREFs of ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003BCC8
 * Callers:
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x18001E5A4 (-OnWindowStyleUpdated@CWindowData@@QEAAXXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002FC50 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003B0F8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003B1C0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003B778 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180021E88 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004F1C0 (IsOpenThemeDataPresent.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180080448 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CWindowIconic::OnWindowStyleUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  CWindowData *v5; // rcx
  struct CWindowData *MDIOwner; // rsi
  CVisual *v7; // rcx
  int v8; // eax
  int v9; // eax
  WINDOWPLACEMENT wndpl; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 100LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 104LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 104LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 108LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 108LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 568LL) ^= (*(_BYTE *)(*((_QWORD *)this + 10) + 568LL) ^ (8
                                                                                             * ((unsigned __int8)IsOpenThemeDataPresent() != 0))) & 8;
  *(_DWORD *)(*((_QWORD *)this + 10) + 336LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 336LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 568LL) ^= (*(_BYTE *)(*((_QWORD *)this + 10) + 568LL) ^ *(_BYTE *)(*((_QWORD *)this + 9) + 568LL)) & 2;
  *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) &= 0xFF30FFFF;
  if ( *((_DWORD *)this + 4) != 2 || *((_BYTE *)this + 21) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) |= 0xCF0000u;
  *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) &= ~0x20000000u;
  v5 = (CWindowData *)*((_QWORD *)this + 9);
  if ( (*((_BYTE *)v5 + 570) & 1) == 0 || (MDIOwner = CWindowData::GetMDIOwner(v5)) == 0LL )
    MDIOwner = (struct CWindowData *)*((_QWORD *)this + 10);
  wndpl.length = 44;
  memset_0(&wndpl.flags, 0, 0x28uLL);
  if ( GetWindowPlacement(*((HWND *)MDIOwner + 5), &wndpl) && (wndpl.flags & 2) != 0 )
    *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) |= 0x1000000u;
  v7 = (CVisual *)*((_QWORD *)this + 11);
  v8 = *((_DWORD *)v7 + 20);
  if ( (v8 & 0x8000) == 0 )
  {
    *((_DWORD *)v7 + 20) = v8 | 0x8000;
    CVisual::PropagateDirtyChildren(v7);
  }
  if ( a2 )
  {
    v9 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v4 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x215u);
  }
  return v4;
}

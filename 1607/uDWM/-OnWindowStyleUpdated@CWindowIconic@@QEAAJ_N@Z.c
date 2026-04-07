/*
 * XREFs of ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180039084
 * Callers:
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x18001B144 (-OnWindowStyleUpdated@CWindowData@@QEAAXXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D740 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180038444 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800385A0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038B3C (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?WasMaximized@CWindowIconic@@AEAA_NXZ @ 0x18003850C (-WasMaximized@CWindowIconic@@AEAA_NXZ.c)
 *     IsOpenThemeDataPresent @ 0x18004F7C0 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowIconic::OnWindowStyleUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  int v5; // eax

  v4 = 0;
  *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 100LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 104LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 104LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 108LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 108LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 576LL) ^= (*(_BYTE *)(*((_QWORD *)this + 10) + 576LL) ^ (8
                                                                                             * ((unsigned __int8)IsOpenThemeDataPresent() != 0))) & 8;
  *(_DWORD *)(*((_QWORD *)this + 10) + 336LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 336LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 576LL) ^= (*(_BYTE *)(*((_QWORD *)this + 10) + 576LL) ^ *(_BYTE *)(*((_QWORD *)this + 9) + 576LL)) & 2;
  *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) &= 0xFF30FFFF;
  if ( *((_DWORD *)this + 4) != 2 || *((_BYTE *)this + 21) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) |= 0xCF0000u;
  *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) &= ~0x20000000u;
  if ( CWindowIconic::WasMaximized(this) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) |= 0x1000000u;
  CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x8000);
  if ( a2 )
  {
    v5 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x215u);
  }
  return v4;
}

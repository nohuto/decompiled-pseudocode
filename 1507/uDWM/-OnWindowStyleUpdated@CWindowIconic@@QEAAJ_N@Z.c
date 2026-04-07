/*
 * XREFs of ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003AD0C
 * Callers:
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x180018CE0 (-OnWindowStyleUpdated@CWindowData@@QEAAXXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002CAC0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003A0A8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003A204 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003A7BC (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?WasMaximized@CWindowIconic@@AEAA_NXZ @ 0x18003A170 (-WasMaximized@CWindowIconic@@AEAA_NXZ.c)
 *     IsOpenThemeDataPresent @ 0x180048B60 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CWindowIconic::OnWindowStyleUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  int v5; // eax

  v4 = 0;
  *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 100LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 104LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 104LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 108LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 108LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 552LL) ^= (*(_BYTE *)(*((_QWORD *)this + 10) + 552LL) ^ (8
                                                                                             * ((unsigned __int8)IsOpenThemeDataPresent() != 0))) & 8;
  *(_DWORD *)(*((_QWORD *)this + 10) + 320LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 320LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 552LL) ^= (*(_BYTE *)(*((_QWORD *)this + 10) + 552LL) ^ *(_BYTE *)(*((_QWORD *)this + 9) + 552LL)) & 2;
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x215u);
  }
  return v4;
}

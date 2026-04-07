/*
 * XREFs of ?OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z @ 0x180071930
 * Callers:
 *     ?SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z @ 0x180071A20 (-SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180071A8C (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x180071800 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveWindowIconic::OnIconUpdated(CImmersiveWindowIconic *this, char a2)
{
  int IconW; // eax
  unsigned int v5; // ebx
  int v6; // eax

  IconW = CImmersiveWindowIconic::LoadIconW(this);
  v5 = IconW;
  if ( IconW >= 0 )
  {
    if ( a2 )
    {
      v6 = CVisual::RenderRecursive(this);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xD0u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, IconW, 0xCDu);
  }
  return v5;
}

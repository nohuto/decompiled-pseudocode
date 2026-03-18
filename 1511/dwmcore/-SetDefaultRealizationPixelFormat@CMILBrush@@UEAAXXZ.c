/*
 * XREFs of ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x18008A370
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1800776B0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180089980 (-SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ.c)
 *     ?SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18008A4AC (-SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18008A5FC (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ?SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x1800AC4BC (-SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOpaque@CMILBrushSolid@@UEBA_NXZ @ 0x18008A3F0 (-IsOpaque@CMILBrushSolid@@UEBA_NXZ.c)
 */

void __fastcall CMILBrush::SetDefaultRealizationPixelFormat(CMILBrush *this)
{
  bool (__fastcall *v2)(CMILBrushSolid *__hidden); // rdi
  bool IsOpaque; // al

  v2 = *(bool (__fastcall **)(CMILBrushSolid *__hidden))(*(_QWORD *)this + 40LL);
  if ( v2 == CMILBrushSolid::IsOpaque )
    IsOpaque = CMILBrushSolid::IsOpaque(this);
  else
    IsOpaque = v2(this);
  if ( IsOpaque )
  {
    *((_DWORD *)this + 2) = 88;
    *((_DWORD *)this + 3) = 3;
  }
  else
  {
    *((_DWORD *)this + 2) = 87;
    *((_DWORD *)this + 3) = 1;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 4) = 1;
}

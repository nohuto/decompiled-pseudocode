/*
 * XREFs of ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x1800815F0
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x18003F7D0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180081100 (-SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ.c)
 *     ??0CBrushRealizer@@IEAA@XZ @ 0x1800814C4 (--0CBrushRealizer@@IEAA@XZ.c)
 * Callees:
 *     ?IsOpaque@CMILBrushSolid@@UEBA_NXZ @ 0x180081660 (-IsOpaque@CMILBrushSolid@@UEBA_NXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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

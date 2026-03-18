/*
 * XREFs of ?SetFilterAndWrapModes@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@W4D3D11_TEXTURE_ADDRESS_MODE@@1PEBUD2DVector2@@@Z @ 0x180138FE4
 * Callers:
 *     ??0CHwSolidColorTextureSource@@AEAA@PEAVCD3DDeviceLevel1@@@Z @ 0x18014269C (--0CHwSolidColorTextureSource@@AEAA@PEAVCD3DDeviceLevel1@@@Z.c)
 *     ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCBaseMatrix@@PEBUCContextState@@@Z @ 0x1801434F8 (-SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCBaseMatrix@@P.c)
 * Callees:
 *     ?SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@Z @ 0x1800DE920 (-SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@.c)
 */

__int64 __fastcall CHwTexturedColorSource::SetFilterAndWrapModes(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r10
  int v3; // r11d

  result = CHwTexturedColorSource::SetFilterMode(a1, 1, 0LL);
  *(_DWORD *)(v2 + 28) = v3;
  *(_DWORD *)(v2 + 32) = 3;
  return result;
}

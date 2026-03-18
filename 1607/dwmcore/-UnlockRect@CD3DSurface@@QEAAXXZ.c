/*
 * XREFs of ?UnlockRect@CD3DSurface@@QEAAXXZ @ 0x1800167F0
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180016828 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradientWrapMode@@W43MilColorInterpolationMode@@@Z @ 0x180181B5C (-FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradie.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DSurface::UnlockRect(CD3DSurface *this)
{
  __int64 v2; // r8
  __int64 v3; // rcx

  v2 = *((unsigned int *)this + 36);
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 128LL) + 576LL);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v3 + 120LL))(v3, *((_QWORD *)this + 17), v2);
}

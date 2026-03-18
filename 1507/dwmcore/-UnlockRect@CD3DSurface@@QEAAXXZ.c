/*
 * XREFs of ?UnlockRect@CD3DSurface@@QEAAXXZ @ 0x1800153FC
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1800147E8 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradientWrapMode@@W43MilColorInterpolationMode@@@Z @ 0x1801431AC (-FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradie.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD3DSurface::UnlockRect(CD3DSurface *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL) + 552LL)
                                                 + 120LL))(
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL) + 552LL),
    *((_QWORD *)this + 17),
    *((unsigned int *)this + 36));
}

/*
 * XREFs of ?GetTransform@CGdiSpriteBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007E9F0
 * Callers:
 *     ?GetTransform@CGdiSpriteBitmap@@WEA@EAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009A790 (-GetTransform@CGdiSpriteBitmap@@WEA@EAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 * Callees:
 *     ?GetBounds@CGdiSpriteBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007EAA0 (-GetBounds@CGdiSpriteBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CGdiSpriteBitmap::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  void (__fastcall *v3)(__int64, _QWORD, _QWORD, __int64); // rdi

  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_QWORD *)(a2 + 52) = 0LL;
  *(_QWORD *)(a2 + 44) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 12) = 0LL;
  *(_QWORD *)(a2 + 4) = 0LL;
  *(_DWORD *)(a2 + 40) = 1065353216;
  *(_DWORD *)(a2 + 20) = 1065353216;
  *(_DWORD *)a2 = 1065353216;
  if ( a3 )
  {
    v3 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 184LL);
    if ( (char *)v3 == (char *)CGdiSpriteBitmap::GetBounds )
      CGdiSpriteBitmap::GetBounds(a1, 0LL, 0LL, a3);
    else
      v3(a1, 0LL, 0LL, a3);
  }
  return 0;
}

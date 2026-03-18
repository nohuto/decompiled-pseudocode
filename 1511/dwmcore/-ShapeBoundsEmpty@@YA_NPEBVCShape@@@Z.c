/*
 * XREFs of ?ShapeBoundsEmpty@@YA_NPEBVCShape@@@Z @ 0x180130DF8
 * Callers:
 *     ?SubtractOverdraw@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800ADF3C (-SubtractOverdraw@CComposeTop@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180130978 (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV-$CMatrix@ULocalRenderi.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

char __fastcall ShapeBoundsEmpty(const struct CShape *a1)
{
  char v1; // si
  float v3; // [rsp+20h] [rbp-28h]
  float v4; // [rsp+20h] [rbp-28h]
  float v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v1 = 0;
  if ( (*(int (__fastcall **)(const struct CShape *, float *, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, v5, 0LL) < 0 )
    return 1;
  v3 = (float)(v5[2] - v5[0]) + 6291456.25;
  if ( (LODWORD(v3) & 0x200000) != 0 || (LODWORD(v3) & 0xFFFFFFFE) << 10 == 0 )
    return 1;
  v4 = (float)(v5[3] - v5[1]) + 6291456.25;
  if ( (LODWORD(v4) & 0x200000) != 0 || (LODWORD(v4) & 0xFFFFFFFE) << 10 == 0 )
    return 1;
  return v1;
}

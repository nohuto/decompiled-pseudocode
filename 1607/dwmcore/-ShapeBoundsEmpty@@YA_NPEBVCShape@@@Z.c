/*
 * XREFs of ?ShapeBoundsEmpty@@YA_NPEBVCShape@@@Z @ 0x180153260
 * Callers:
 *     ?SubtractOverdraw@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA8B8 (-SubtractOverdraw@CComposeTop@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180152E40 (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV-$CMatrix@ULocalRenderi.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ShapeBoundsEmpty(const struct CShape *a1)
{
  char v1; // bl
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

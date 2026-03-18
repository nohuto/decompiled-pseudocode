/*
 * XREFs of ?ClipWithRect@CShape@@SAJPEBV1@PEBUMilRectF@@PEAPEAV1@@Z @ 0x180189B0C
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013A0F0 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180140150 (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180001748 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800979B0 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CShape::ClipWithRect(const struct CShape *a1, const struct MilRectF *a2, struct CShape **a3)
{
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD v9[3]; // [rsp+30h] [rbp-50h] BYREF
  int v10; // [rsp+48h] [rbp-38h]
  int v11; // [rsp+4Ch] [rbp-34h]
  int v12; // [rsp+50h] [rbp-30h]
  _BYTE v13[16]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v14; // [rsp+68h] [rbp-18h]

  v12 = 0;
  v14 = 0LL;
  v9[0] = &CRectanglesShape::`vftable';
  v10 = 1;
  v9[1] = v13;
  v11 = 1;
  v9[2] = v13;
  CRectanglesShape::SetSingleRect((CRectanglesShape *)v9, a2);
  v6 = CShape::Combine((__int64)a1, v5, (__int64)v9, 0LL, 1, a3);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xD7u);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v9);
  return v7;
}

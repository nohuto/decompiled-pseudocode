/*
 * XREFs of ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x1801216B4
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A260 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18005FA78 (-ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::CalcRectFullyVisible(
        CDrawingContext *this,
        const struct MilRectF *a2,
        unsigned __int32 a3,
        bool *a4)
{
  bool v4; // bl
  unsigned int v9; // edi
  char *v10; // rcx
  __int64 v11; // rdx
  char *v12; // rax
  __int64 v13; // r9
  int v14; // eax
  _BYTE v16[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v17[3]; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE v18[64]; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+90h] [rbp-70h]
  __int128 v20; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v21; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v22[2]; // [rsp+C0h] [rbp-40h] BYREF
  char v23; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v24[16]; // [rsp+E0h] [rbp-20h] BYREF
  char v25; // [rsp+F0h] [rbp-10h] BYREF
  char v26; // [rsp+100h] [rbp+0h] BYREF

  v4 = 0;
  v9 = 0;
  if ( *((_BYTE *)this + 6531)
    && *((_QWORD *)this + 808)
    && CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)this + 356) )
  {
    v16[0] = 0;
    v17[0] = 0;
    `vector constructor iterator'(
      (TemporaryConfiguration *)v24,
      16LL,
      4LL,
      (void (__fastcall *)(TemporaryConfiguration *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    v22[0] = v24;
    v10 = &v26;
    v22[1] = &v25;
    v11 = 2LL;
    v12 = &v23;
    do
    {
      *(_QWORD *)v12 = v10;
      v10 += 16;
      v12 += 8;
      --v11;
    }
    while ( v11 );
    v19 = 0;
    CBaseMatrixStack::Top((CDrawingContext *)((char *)this + 536), (struct CMILMatrix *)v18);
    v20 = *(_OWORD *)a2;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v18, (__int64)&v20, (float *)&v21);
    v14 = COcclusionContext::ComputeVisibleRegion(*((_QWORD *)this + 808), &v21, a3, v13, v16, (__int64)v22, v17);
    v9 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x118Au);
      return v9;
    }
    v4 = v16[0] == 0;
  }
  *a4 = v4;
  return v9;
}

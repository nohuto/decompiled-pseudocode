/*
 * XREFs of ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x1800F146C
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18001F304 (-ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x1800222FC (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::CalcRectFullyVisible(
        CDrawingContext *this,
        const struct MilRectF *a2,
        int a3,
        bool *a4)
{
  bool v4; // bl
  unsigned int v9; // esi
  char *v10; // rcx
  __int64 v11; // rdx
  char *v12; // rax
  int v13; // eax
  _BYTE v15[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  __int128 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v19[64]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v20[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v21; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v22[16]; // [rsp+D0h] [rbp-30h] BYREF
  char v23; // [rsp+E0h] [rbp-20h] BYREF
  char v24; // [rsp+F0h] [rbp-10h] BYREF

  v4 = 0;
  v9 = 0;
  if ( !*((_BYTE *)this + 5931)
    || !*((_QWORD *)this + 718)
    || !(unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CDrawingContext *)((char *)this + 276)) )
  {
    goto LABEL_9;
  }
  v15[0] = 0;
  v16 = 0;
  `vector constructor iterator'(
    (Mesh::MeshLine *)v22,
    16LL,
    4,
    (void (__fastcall *)(Mesh::MeshLine *))TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
  v20[0] = v22;
  v10 = &v24;
  v20[1] = &v23;
  v11 = 2LL;
  v12 = &v21;
  do
  {
    *(_QWORD *)v12 = v10;
    v10 += 16;
    v12 += 8;
    --v11;
  }
  while ( v11 );
  CBaseMatrixStack::Top((CDrawingContext *)((char *)this + 456), (struct CBaseMatrix *)v19);
  v18 = *(_OWORD *)a2;
  CBaseMatrix::Transform2DBounds((CBaseMatrix *)v19, (const struct MilRectF *)&v18, (struct MilRectF *)&v17);
  v13 = COcclusionContext::ComputeVisibleRegion(
          *((_QWORD *)this + 718),
          &v17,
          a3,
          *((_BYTE *)this + 5608) == 0,
          (__int64)v15,
          (__int64)v20,
          &v16);
  v9 = v13;
  if ( v13 >= 0 )
  {
    v4 = v15[0] == 0;
LABEL_9:
    *a4 = v4;
    return v9;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x11BBu);
  return v9;
}

/*
 * XREFs of ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800986DC
 * Callers:
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180004E98 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x180069A20 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z @ 0x180121C8C (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x180122310 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18002C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A260 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800976A0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180097A50 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z @ 0x1800982D4 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009A468 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseShape@CpuClipShape@@AEAAXXZ @ 0x180111EE4 (-ReleaseShape@CpuClipShape@@AEAAXXZ.c)
 */

__int64 __fastcall CpuClipShape::Initialize(struct CShape **this, struct CScopedClipStack *a2, FLOAT *a3)
{
  int v3; // ebx
  int v7; // eax
  int TopCpuClipInScope; // eax
  FLOAT v9; // xmm0_4
  FLOAT v10; // xmm1_4
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  CRectanglesShape *v13; // rbx
  char (__fastcall *v14)(CRectanglesShape *, unsigned int *); // rax
  char IsRectangles; // al
  __int64 (__fastcall *v16)(CRectanglesShape *, __int64, float *); // rax
  int TightBounds; // eax
  struct CShape *v18; // rcx
  void (__fastcall ***v20)(_QWORD, __int64); // rcx
  unsigned int v21; // [rsp+20h] [rbp-99h]
  __int128 v22; // [rsp+30h] [rbp-89h]
  __m256i v23; // [rsp+40h] [rbp-79h]
  __int128 v24; // [rsp+60h] [rbp-59h]
  __int128 v25; // [rsp+80h] [rbp-39h] BYREF
  __m256i v26; // [rsp+90h] [rbp-29h]
  __int128 v27; // [rsp+B0h] [rbp-9h]
  int v28; // [rsp+C0h] [rbp+7h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+D0h] [rbp+17h] BYREF
  CRectanglesShape *v30[2]; // [rsp+E8h] [rbp+2Fh] BYREF

  v3 = 0;
  if ( *((_BYTE *)this + 72) )
  {
    v20 = (void (__fastcall ***)(_QWORD, __int64))*this;
    if ( v20 )
      (**v20)(v20, 1LL);
  }
  *this = 0LL;
  *((_BYTE *)this + 72) = 0;
  v7 = *((_DWORD *)a2 + 6);
  if ( v7 && *(_DWORD *)(*(_QWORD *)a2 + 80LL * (unsigned int)(v7 - 1) + 8) )
  {
    TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope(a2, v30);
    v3 = TopCpuClipInScope;
    if ( TopCpuClipInScope < 0 )
    {
      v21 = 458;
    }
    else
    {
      if ( !a3 )
      {
        *this = v30[0];
        goto LABEL_17;
      }
      v9 = *a3;
      v10 = a3[1];
      v11 = (__m128)*((unsigned int *)a3 + 13);
      v28 = 0;
      matrix.m12 = v10;
      matrix.m22 = a3[5];
      v12 = (__m128)*((unsigned int *)a3 + 12);
      matrix.m11 = v9;
      matrix.m21 = a3[4];
      *(_QWORD *)&matrix.m[2][0] = _mm_unpacklo_ps(v12, v11).m128_u64[0];
      D2D1InvertMatrix(&matrix);
      HIDWORD(v22) = 0;
      v13 = v30[0];
      v28 = 0;
      *(_QWORD *)((char *)&v22 + 4) = LODWORD(matrix.m12);
      v23.m256i_i64[0] = *(_QWORD *)&matrix.m[1][0];
      *(FLOAT *)&v22 = matrix.m11;
      *(_OWORD *)&v23.m256i_u64[1] = 0LL;
      v23.m256i_i64[3] = 1065353216LL;
      *(_QWORD *)((char *)&v24 + 4) = LODWORD(matrix.dy);
      HIDWORD(v24) = 1065353216;
      *(FLOAT *)&v24 = matrix.dx;
      v25 = v22;
      v26 = v23;
      v27 = v24;
      v14 = *(char (__fastcall **)(CRectanglesShape *, unsigned int *))(*(_QWORD *)v30[0] + 32LL);
      if ( v14 == CRectanglesShape::IsRectangles )
        IsRectangles = CRectanglesShape::IsRectangles(v30[0], (unsigned int *)v30);
      else
        IsRectangles = v14(v30[0], (unsigned int *)v30);
      if ( IsRectangles && LODWORD(v30[0]) == 1 && CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)&v25) )
      {
        v16 = *(__int64 (__fastcall **)(CRectanglesShape *, __int64, float *))(*(_QWORD *)v13 + 24LL);
        if ( v16 == CRectanglesShape::GetTightBounds )
          TightBounds = CRectanglesShape::GetTightBounds(v13, (__int64)v30, (float *)&v25);
        else
          TightBounds = v16(v13, (__int64)v30, (float *)&v25);
        v3 = TightBounds;
        if ( TightBounds < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x1E6u);
        }
        else
        {
          *((_DWORD *)this + 10) = 0;
          DynArrayImpl<0>::ShrinkToSize(this + 2, 16LL);
          v18 = this[8];
          if ( v18 )
          {
            (*(void (__fastcall **)(struct CShape *))(*(_QWORD *)v18 + 16LL))(v18);
            this[8] = 0LL;
          }
          *(_OWORD *)&matrix.m11 = *(_OWORD *)v30;
          DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
            this + 2,
            &matrix,
            1LL);
          *this = (struct CShape *)(this + 1);
        }
        goto LABEL_17;
      }
      TopCpuClipInScope = CShape::CopyShape((struct ID2D1RegionGeometry **)v13, (const struct CMILMatrix *)&v25, this);
      v3 = TopCpuClipInScope;
      if ( TopCpuClipInScope >= 0 )
      {
        *((_BYTE *)this + 72) = 1;
        goto LABEL_17;
      }
      v21 = 493;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TopCpuClipInScope, v21);
LABEL_17:
    if ( v3 < 0 )
      CpuClipShape::ReleaseShape((CpuClipShape *)this);
  }
  return (unsigned int)v3;
}

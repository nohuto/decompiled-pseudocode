/*
 * XREFs of ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800735A4
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x1800222FC (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseShape@CpuClipShape@@AEAAXXZ @ 0x180073540 (-ReleaseShape@CpuClipShape@@AEAAXXZ.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180073730 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z @ 0x180073A60 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z.c)
 *     ??0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180076174 (--0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180077F5C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800782D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180078D54 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180078DC0 (-GetTightBounds@CRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CpuClipShape::Initialize(
        CComplexShape **this,
        struct CScopedClipStack *a2,
        const struct CMILMatrix *a3)
{
  int v6; // edi
  CScopedClipStack *v7; // rcx
  int TopCpuClipInScope; // eax
  unsigned int v9; // xmm1_4
  CMILMatrix *v10; // rax
  CRectangleShape *v11; // rbx
  __int64 (__fastcall *v12)(CRectangleShape *); // rdi
  int TightBounds; // eax
  unsigned int v15; // [rsp+20h] [rbp-89h]
  CShape *v16[2]; // [rsp+30h] [rbp-79h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+40h] [rbp-69h] BYREF
  _OWORD v18[4]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v19[64]; // [rsp+A0h] [rbp-9h] BYREF

  v6 = 0;
  CpuClipShape::ReleaseShape(this);
  if ( !CScopedClipStack::HasCpuClipsInScope(a2) )
    return (unsigned int)v6;
  TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope(v7, v16);
  v6 = TopCpuClipInScope;
  if ( TopCpuClipInScope < 0 )
  {
    v15 = 485;
LABEL_19:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TopCpuClipInScope, v15);
    goto LABEL_10;
  }
  if ( a3 )
  {
    v9 = *((_DWORD *)a3 + 1);
    matrix.m11 = *(FLOAT *)a3;
    *(_QWORD *)&matrix.m[0][1] = __PAIR64__(*((_DWORD *)a3 + 4), v9);
    *(_QWORD *)&matrix.m[1][1] = __PAIR64__(*((_DWORD *)a3 + 12), *((_DWORD *)a3 + 5));
    matrix.dy = *((FLOAT *)a3 + 13);
    D2D1InvertMatrix(&matrix);
    v10 = CMILMatrix::CMILMatrix((CMILMatrix *)v19, &matrix);
    v11 = v16[0];
    v18[0] = *(_OWORD *)v10;
    v18[1] = *((_OWORD *)v10 + 1);
    v18[2] = *((_OWORD *)v10 + 2);
    v18[3] = *((_OWORD *)v10 + 3);
    if ( CShape::IsAxisAlignedRectangle(v16[0])
      && (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CBaseMatrix *)v18) )
    {
      v12 = *(__int64 (__fastcall **)(CRectangleShape *))(*(_QWORD *)v11 + 24LL);
      if ( v12 == CRectangleShape::GetTightBounds )
        TightBounds = CRectangleShape::GetTightBounds(v11);
      else
        TightBounds = ((__int64 (__fastcall *)(CRectangleShape *, CShape **, _OWORD *))v12)(v11, v16, v18);
      v6 = TightBounds;
      if ( TightBounds < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x201u);
      }
      else
      {
        CRectangleShape::Set((CRectangleShape *)(this + 1), (const struct MilRectF *)v16);
        *this = (CComplexShape *)(this + 1);
      }
      goto LABEL_10;
    }
    TopCpuClipInScope = CShape::CopyShape(v11, (const struct CMILMatrix *)v18, this);
    v6 = TopCpuClipInScope;
    if ( TopCpuClipInScope >= 0 )
    {
      *((_BYTE *)this + 40) = 1;
      goto LABEL_10;
    }
    v15 = 520;
    goto LABEL_19;
  }
  *this = v16[0];
LABEL_10:
  if ( v6 < 0 )
    CpuClipShape::ReleaseShape(this);
  return (unsigned int)v6;
}

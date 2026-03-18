/*
 * XREFs of ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEB_NHPEAPEAUID2D1PathGeometry@@@Z @ 0x1801597A0
 * Callers:
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ @ 0x1801591E8 (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometry@@_N@Z @ 0x1801599D8 (-IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometr.c)
 */

__int64 __fastcall CRoundedRectangleShape::CreateIntersectedD2DGeometry(
        const struct MilPoint2F *a1,
        const bool *a2,
        int a3,
        struct ID2D1PathGeometry **a4)
{
  unsigned int v4; // edi
  int v5; // ebp
  int v7; // ebx
  bool i; // r9
  int v11; // eax

  v4 = 0;
  v5 = 0;
  v7 = a3;
  for ( i = 1; v7 > 0; ++a2 )
  {
    if ( *a2 )
    {
      v11 = CRoundedRectangleShape::IntersectGeometryBuilder(a1, &dword_180184690[7 * v5], a4, i);
      v4 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x11Bu);
        return v4;
      }
      i = 0;
      --v7;
    }
    ++v5;
  }
  return v4;
}

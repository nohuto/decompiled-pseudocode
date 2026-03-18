/*
 * XREFs of ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18014B850
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18014B3AC (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetD2DGeometry(
        struct D2D_RECT_F *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  unsigned int v3; // esi
  _QWORD *p_right; // rdi
  int v6; // eax
  int v7; // eax

  v3 = 0;
  if ( a2 )
  {
    v7 = CRoundedRectangleShape::BuildRoundedRectangleShape(this, a2, a3);
    v3 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x34u);
  }
  else
  {
    p_right = (_QWORD *)&this->right;
    if ( *(_QWORD *)&this->right
      || (v6 = CRoundedRectangleShape::BuildRoundedRectangleShape(this, 0LL, (struct ID2D1Geometry **)&this->right),
          v3 = v6,
          v6 >= 0) )
    {
      *a3 = (struct ID2D1Geometry *)*p_right;
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*p_right + 8LL))(*p_right);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x27u);
    }
  }
  return v3;
}

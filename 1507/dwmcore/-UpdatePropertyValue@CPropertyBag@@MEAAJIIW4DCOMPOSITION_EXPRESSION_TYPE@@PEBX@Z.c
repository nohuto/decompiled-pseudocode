/*
 * XREFs of ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180120C90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?LogValueUpdate@CPropertyBagBase@@IEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180115A20 (-LogValueUpdate@CPropertyBagBase@@IEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$AddPropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x180120500 (--$AddPropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVec.c)
 *     ??$ChangePropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801207CC (--$ChangePropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@P.c)
 *     ??$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x1801208F0 (--$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2.c)
 */

__int64 __fastcall CPropertyBag::UpdatePropertyValue(
        CPropertyBag *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int *a5)
{
  int updated; // eax
  unsigned int v10; // esi
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // r9d
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 (__fastcall ***v19)(_QWORD, _QWORD, _QWORD, int *); // rsi
  unsigned int v21; // [rsp+20h] [rbp-38h]

  switch ( a4 )
  {
    case 0x11u:
      if ( a2 )
      {
        if ( a2 != 1 )
        {
          v11 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x100u);
          v10 = -2147024809;
LABEL_40:
          v21 = 183;
          goto LABEL_22;
        }
        v17 = CPropertyBag::ChangePropertyValue<D2D_MATRIX_3X2_F>(a1, a3, 17, (__int64)a5);
        v11 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xFCu);
      }
      else
      {
        v18 = CPropertyBag::AddPropertyValue<D2DVector4>((__int64)a1, a3, 17, (__int64)a5);
        v11 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xF8u);
      }
      v10 = v11;
      if ( v11 >= 0 )
        break;
      goto LABEL_40;
    case 0x22u:
      if ( a2 )
      {
        if ( a2 != 1 )
        {
          v11 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x100u);
          v10 = -2147024809;
LABEL_31:
          v21 = 187;
          goto LABEL_22;
        }
        v15 = CPropertyBag::ChangePropertyValue<D2D_MATRIX_3X2_F>(a1, a3, 34, (__int64)a5);
        v11 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xFCu);
      }
      else
      {
        v16 = CPropertyBag::AddPropertyValue<D2DVector4>((__int64)a1, a3, 34, (__int64)a5);
        v11 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xF8u);
      }
      v10 = v11;
      if ( v11 >= 0 )
        break;
      goto LABEL_31;
    case 0x33u:
      if ( a2 )
      {
        if ( a2 != 1 )
        {
          v11 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x100u);
          v10 = -2147024809;
LABEL_21:
          v21 = 191;
LABEL_22:
          v14 = v11;
LABEL_47:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v21);
          return v10;
        }
        v12 = CPropertyBag::ChangePropertyValue<D2D_MATRIX_3X2_F>(a1, a3, 51, (__int64)a5);
        v11 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xFCu);
      }
      else
      {
        v13 = CPropertyBag::AddPropertyValue<D2DVector4>((__int64)a1, a3, 51, (__int64)a5);
        v11 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xF8u);
      }
      v10 = v11;
      if ( v11 >= 0 )
        break;
      goto LABEL_21;
    case 0x44u:
      updated = CPropertyBag::UpdatePropertyValue<D2DVector4>(a1, a2, a3, 68, (__int64)a5);
      v10 = updated;
      if ( updated < 0 )
      {
        v21 = 195;
        goto LABEL_46;
      }
      break;
    case 0x65u:
      updated = CPropertyBag::UpdatePropertyValue<D2DVector4>(a1, a2, a3, 101, (__int64)a5);
      v10 = updated;
      if ( updated < 0 )
      {
        v21 = 199;
        goto LABEL_46;
      }
      break;
    case 0x106u:
      updated = CPropertyBag::UpdatePropertyValue<D2DVector4>(a1, a2, a3, 262, (__int64)a5);
      v10 = updated;
      if ( updated < 0 )
      {
        v21 = 203;
LABEL_46:
        v14 = updated;
        goto LABEL_47;
      }
      break;
  }
  v19 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, int *))*((_QWORD *)a1 + 16);
  if ( v19 )
  {
    updated = (**v19)(*((_QWORD *)a1 + 16), a3, a4, a5);
    v10 = updated;
    if ( updated < 0 )
    {
      v21 = 213;
      goto LABEL_46;
    }
  }
  updated = CPropertyBagBase::LogValueUpdate((__int64)a1, a2, (const GUID *)a3, (const GUID *)a4, a5);
  v10 = updated;
  if ( updated < 0 )
  {
    v21 = 216;
    goto LABEL_46;
  }
  return v10;
}

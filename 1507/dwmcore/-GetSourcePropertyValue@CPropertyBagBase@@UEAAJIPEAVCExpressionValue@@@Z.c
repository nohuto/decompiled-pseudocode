/*
 * XREFs of ?GetSourcePropertyValue@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180115860
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180121494 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180121560 (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CPropertyBagBase::GetSourcePropertyValue(
        CPropertyBagBase *this,
        unsigned int a2,
        struct CExpressionValue *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  struct D2D_MATRIX_3X2_F *v6; // rbx
  struct D2D_MATRIX_3X2_F *v7; // rbx
  struct D2D_MATRIX_3X2_F *v8; // rbx
  FLOAT m11; // xmm6_4
  unsigned int v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+70h] [rbp+18h] BYREF
  struct D2D_MATRIX_3X2_F *v13; // [rsp+78h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v11 = 276;
LABEL_12:
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v11);
    return v5;
  }
  v4 = (*(__int64 (__fastcall **)(char *, _QWORD, int *, struct D2D_MATRIX_3X2_F **))(*((_QWORD *)this - 5) + 96LL))(
         (char *)this - 40,
         a2,
         &v12,
         &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x11Eu);
    return v5;
  }
  switch ( v12 )
  {
    case 17:
      m11 = v13->m11;
      CExpressionValue::SetDataType(a3);
      *((FLOAT *)a3 + 2) = m11;
      goto LABEL_20;
    case 34:
      v8 = v13;
      CExpressionValue::SetDataType(a3);
      *((_QWORD *)a3 + 1) = *(_QWORD *)&v8->m11;
      goto LABEL_20;
    case 51:
      v7 = v13;
      CExpressionValue::SetDataType(a3);
      *((_QWORD *)a3 + 1) = *(_QWORD *)&v7->m11;
      *((_DWORD *)a3 + 4) = LODWORD(v7->m21);
      goto LABEL_20;
    case 68:
      v6 = v13;
      CExpressionValue::SetDataType(a3);
      *(_OWORD *)((char *)a3 + 8) = *(_OWORD *)&v6->m11;
LABEL_20:
      *((_BYTE *)a3 + 4) = 1;
      return v5;
    case 101:
      CExpressionValue::SetMatrix3x2Value(a3, v13);
      break;
    case 262:
      CExpressionValue::SetMatrix4x4Value(a3, (const struct D2DMatrix *)v13);
      break;
    default:
      v11 = 320;
      goto LABEL_12;
  }
  return v5;
}

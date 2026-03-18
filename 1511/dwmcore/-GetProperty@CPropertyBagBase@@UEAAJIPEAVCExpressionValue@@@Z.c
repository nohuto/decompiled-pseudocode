/*
 * XREFs of ?GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18012E0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180136D40 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CPropertyBagBase::GetProperty(CPropertyBagBase *this, unsigned int a2, struct CExpressionValue *a3)
{
  int v4; // eax
  unsigned int v5; // esi
  struct D2D_MATRIX_3X2_F *v6; // rbx
  struct D2D_MATRIX_3X2_F *v7; // rbx
  struct D2D_MATRIX_3X2_F *v8; // rbx
  FLOAT m11; // xmm6_4
  unsigned int v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+70h] [rbp+18h] BYREF
  struct D2D_MATRIX_3X2_F *v13; // [rsp+78h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v11 = 302;
LABEL_14:
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v11);
    return v5;
  }
  v4 = (*(__int64 (__fastcall **)(CPropertyBagBase *, _QWORD, int *, struct D2D_MATRIX_3X2_F **))(*(_QWORD *)this + 104LL))(
         this,
         a2,
         &v12,
         &v13);
  v5 = v4;
  if ( v4 >= 0 )
  {
    switch ( v12 )
    {
      case 18:
        m11 = v13->m11;
        CExpressionValue::SetDataType(a3);
        *((FLOAT *)a3 + 2) = m11;
        break;
      case 35:
        v8 = v13;
        CExpressionValue::SetDataType(a3);
        *((_QWORD *)a3 + 1) = *(_QWORD *)&v8->m11;
        break;
      case 52:
        v7 = v13;
        CExpressionValue::SetDataType(a3);
        *((_QWORD *)a3 + 1) = *(_QWORD *)&v7->m11;
        *((_DWORD *)a3 + 4) = LODWORD(v7->m21);
        break;
      case 69:
      case 70:
      case 71:
        v6 = v13;
        CExpressionValue::SetDataType(a3);
        *(_OWORD *)((char *)a3 + 8) = *(_OWORD *)&v6->m11;
        break;
      case 104:
        CExpressionValue::SetMatrix3x2Value(a3, v13);
        return v5;
      case 265:
        CExpressionValue::SetMatrix4x4Value(a3, (const struct D2DMatrix *)v13);
        return v5;
      default:
        v11 = 354;
        goto LABEL_14;
    }
    *((_BYTE *)a3 + 4) = 1;
    return v5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x138u);
  return v5;
}

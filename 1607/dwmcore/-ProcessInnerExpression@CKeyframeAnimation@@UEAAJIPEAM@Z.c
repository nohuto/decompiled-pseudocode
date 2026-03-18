/*
 * XREFs of ?ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z @ 0x180148780
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180088FE0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800AD090 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessInnerExpression(CKeyframeAnimation *this, unsigned int a2, float *a3)
{
  __int64 v3; // rsi
  unsigned int v6; // edi
  __int64 v7; // rsi
  int v8; // eax
  float v9; // xmm1_4
  float v11[16]; // [rsp+30h] [rbp-19h] BYREF
  int v12; // [rsp+70h] [rbp+27h]

  v3 = a2;
  memset_0(v11, 0, sizeof(v11));
  v12 = 18;
  if ( (unsigned int)v3 >= *((_DWORD *)this + 18) )
  {
    v6 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x5FBu);
LABEL_16:
    *(_QWORD *)a3 = 0LL;
    *((_QWORD *)a3 + 1) = 0LL;
    return v6;
  }
  v7 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3);
  v8 = CBaseExpression::CalculateValue(
         (CBaseExpression *)v7,
         *((struct CExpressionValueStack **)this + 14),
         *((_QWORD *)this - 9));
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x601u);
    goto LABEL_16;
  }
  CExpressionValue::CopyFrom((CExpressionValue *)v11, (const struct CExpressionValue *)(v7 + 128));
  switch ( v12 )
  {
    case 18:
      goto LABEL_13;
    case 35:
      a3[1] = v11[1];
LABEL_13:
      *a3 = v11[0];
      return 0;
    case 52:
      v9 = v11[1];
      *a3 = v11[0];
      *(_QWORD *)(a3 + 1) = __PAIR64__(LODWORD(v11[2]), LODWORD(v9));
      break;
    default:
      if ( v12 != 69 && (unsigned int)(v12 - 70) >= 2 )
      {
        v6 = -2147467259;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x641u);
        goto LABEL_16;
      }
      *(_OWORD *)a3 = *(_OWORD *)v11;
      break;
  }
  return 0;
}

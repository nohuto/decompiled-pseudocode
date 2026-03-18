/*
 * XREFs of ?ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z @ 0x180110E50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180097754 (-Reset@CExpressionValue@@AEAAX_N@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010D618 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z @ 0x180121130 (-CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessInnerExpression(CKeyframeAnimation *this, unsigned int a2, float *a3)
{
  __int64 v3; // rsi
  int v6; // edi
  __int64 v7; // rsi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // xmm1_4
  unsigned int v12; // [rsp+20h] [rbp-30h]
  int v13; // [rsp+30h] [rbp-20h] BYREF
  char v14; // [rsp+34h] [rbp-1Ch]
  __int128 v15; // [rsp+38h] [rbp-18h]
  bool v16; // [rsp+68h] [rbp+18h] BYREF

  v3 = a2;
  v16 = 0;
  v13 = 17;
  v14 = 0;
  CExpressionValue::Reset((CExpressionValue *)&v13, 1);
  if ( (unsigned int)v3 >= *((_DWORD *)this + 14) )
  {
    v12 = 916;
LABEL_3:
    v6 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v12);
LABEL_20:
    *(_QWORD *)a3 = 0LL;
    *((_QWORD *)a3 + 1) = 0LL;
    goto LABEL_21;
  }
  v7 = *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v3);
  v8 = CBaseExpression::CalculateValue(
         (CBaseExpression *)v7,
         *((struct CExpressionValueStack **)this + 13),
         *((_QWORD *)this - 7),
         &v16);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v9 = CExpressionValue::CopyFrom((CExpressionValue *)&v13, (const struct CExpressionValue *)(v7 + 48));
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x39Cu);
      goto LABEL_19;
    }
    if ( v13 != 17 )
    {
      if ( v13 != 34 )
      {
        if ( v13 == 51 )
        {
          v10 = DWORD1(v15);
          *(_DWORD *)a3 = v15;
          *(_QWORD *)(a3 + 1) = __PAIR64__(DWORD2(v15), v10);
        }
        else
        {
          if ( v13 != 68 )
          {
            v12 = 966;
            goto LABEL_3;
          }
          *(_OWORD *)a3 = v15;
        }
        goto LABEL_18;
      }
      a3[1] = *((float *)&v15 + 1);
    }
    *(_DWORD *)a3 = v15;
LABEL_18:
    v6 = 0;
    goto LABEL_19;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x39Au);
LABEL_19:
  if ( v6 < 0 )
    goto LABEL_20;
LABEL_21:
  CExpressionValue::Reset((CExpressionValue *)&v13, 0);
  return (unsigned int)v6;
}

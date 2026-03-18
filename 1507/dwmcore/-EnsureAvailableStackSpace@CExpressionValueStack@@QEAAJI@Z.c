/*
 * XREFs of ?EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z @ 0x1800E093C
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010D618 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x180051B14 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180097754 (-Reset@CExpressionValue@@AEAAX_N@Z.c)
 */

__int64 __fastcall CExpressionValueStack::EnsureAvailableStackSpace(CExpressionValueStack *this, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rdi
  int v6; // eax
  _QWORD *v7; // rsi
  __int64 v8; // xmm1_8
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  _OWORD *v12; // [rsp+60h] [rbp+8h] BYREF

  if ( a2 <= -1 - *((_DWORD *)this + 4) )
  {
    if ( *((_DWORD *)this + 12) - *((_DWORD *)this + 4) < a2 )
    {
      LODWORD(v10) = 17;
      BYTE4(v10) = 0;
      CExpressionValue::Reset((CExpressionValue *)&v10, 1);
      v5 = *((_DWORD *)this + 4) + a2 - *((_DWORD *)this + 12);
      v6 = DynArrayImpl<1>::AddMultiple((__int64)this + 24, 0x18u, v5, &v12);
      v4 = v6;
      if ( v6 >= 0 )
      {
        if ( (_DWORD)v5 )
        {
          v7 = v12;
          v8 = v11;
          *v12 = v10;
          v7[2] = v8;
          qmemcpy(v7 + 3, v7, 8 * ((unsigned __int64)(24 * v5 - 24) >> 3));
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xE5u);
      }
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x4Au);
        CExpressionValue::Reset((CExpressionValue *)&v10, 0);
        return (unsigned int)v4;
      }
      CExpressionValue::Reset((CExpressionValue *)&v10, 0);
    }
    return 0;
  }
  v4 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42u);
  return (unsigned int)v4;
}

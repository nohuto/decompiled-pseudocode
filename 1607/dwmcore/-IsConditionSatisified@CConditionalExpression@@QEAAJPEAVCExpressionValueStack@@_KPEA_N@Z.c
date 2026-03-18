/*
 * XREFs of ?IsConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180149268
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180148EF0 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?CheckInertiaModifiers@CScrollAnimation@@AEAA?AW4InertiaModifierType@@XZ @ 0x18015DB38 (-CheckInertiaModifiers@CScrollAnimation@@AEAA-AW4InertiaModifierType@@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180148E50 (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CConditionalExpression::IsConditionSatisified(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  bool v4; // di
  int v9; // ecx
  unsigned int v10; // r14d
  unsigned int v11; // ebp
  int v12; // eax
  int v13; // eax
  bool v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  if ( a4 )
    *a4 = 0;
  v9 = *((_DWORD *)this + 73);
  v10 = 0;
  if ( *((_DWORD *)this + 85) != v9 )
    goto LABEL_10;
  v11 = 0;
  if ( !*((_DWORD *)this + 80) )
  {
LABEL_8:
    v9 = *((_DWORD *)this + 73);
    if ( *((_DWORD *)this + 85) == v9 )
      *((_DWORD *)this + 85) = *((_DWORD *)this + 72);
LABEL_10:
    if ( a4 )
    {
      v13 = *((_DWORD *)this + 85);
      if ( v13 != *((_DWORD *)this + 72) && v13 != v9 || *((_QWORD *)this + 41) )
        v4 = 1;
      *a4 = v4;
    }
    return v10;
  }
  while ( 1 )
  {
    v12 = CConditionalExpression::CalculateConditionValue(this, v11, a2, a3, &v15);
    v10 = v12;
    if ( v12 < 0 )
      break;
    if ( v15 )
    {
      *((_DWORD *)this + 85) = v11;
      goto LABEL_8;
    }
    if ( ++v11 >= *((_DWORD *)this + 80) )
      goto LABEL_8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x21Eu);
  return v10;
}

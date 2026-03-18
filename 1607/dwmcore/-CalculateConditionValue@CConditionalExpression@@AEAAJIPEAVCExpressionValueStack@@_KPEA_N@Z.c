/*
 * XREFs of ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180148E50
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180148EF0 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?IsConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180149268 (-IsConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CConditionalExpression::CalculateConditionValue(
        CConditionalExpression *this,
        unsigned int a2,
        struct CExpressionValueStack *a3,
        __int64 a4,
        bool *a5)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  struct CExpressionValue *v9; // rax
  const int *v10; // rdx
  char v11; // cl

  v6 = *(_QWORD *)(*((_QWORD *)this + 37) + 16LL * a2);
  v7 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, __int64))(*(_QWORD *)v6 + 144LL))(v6, a3, a4);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x171u);
  }
  else
  {
    v9 = CExpressionValueStack::PeekStackValue(a3, 0);
    if ( *((_DWORD *)v9 + 16) == 17 )
    {
      v11 = *(_BYTE *)v9;
      --*((_DWORD *)a3 + 4);
      v8 = 0;
      *a5 = v11;
    }
    else
    {
      v8 = -2147024809;
      MilInstrumentationCheckHR(0x14u, v10, 0, -2147024809, 0x177u);
    }
  }
  return v8;
}

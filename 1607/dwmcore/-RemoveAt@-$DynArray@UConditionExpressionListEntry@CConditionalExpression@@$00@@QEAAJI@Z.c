/*
 * XREFs of ?RemoveAt@?$DynArray@UConditionExpressionListEntry@CConditionalExpression@@$00@@QEAAJI@Z @ 0x180149394
 * Callers:
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x180148A50 (--1CConditionalExpression@@UEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@VCExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148B24 (--4-$ComPtr@VCExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall DynArray<CConditionalExpression::ConditionExpressionListEntry,1>::RemoveAt(
        __int64 *a1,
        unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebp
  __int64 v5; // r15
  unsigned int v6; // esi
  __int64 *v7; // rdi
  __int64 *v8; // rbx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  if ( a2 < v2 )
  {
    v5 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v6 = a2 + 1;
        v7 = (__int64 *)(v5 + 16LL * (a2 + 1));
        v8 = (__int64 *)(v5 + 16LL * a2);
        Microsoft::WRL::ComPtr<CExpression>::operator=(v8, v7);
        Microsoft::WRL::ComPtr<CExpression>::operator=(v8 + 1, v7 + 1);
        a2 = v6;
      }
      while ( v6 < *((_DWORD *)a1 + 6) - 1 );
    }
    --*((_DWORD *)a1 + 6);
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
  }
  return v3;
}

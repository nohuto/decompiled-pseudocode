/*
 * XREFs of ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x180019CC0
 * Callers:
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x1800195E0 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KIII@Z @ 0x180110740 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KIII@Z.c)
 *     ?InsertDependenciesInOrder@CConditionalExpression@@UEAAX_K@Z @ 0x1801491D0 (-InsertDependenciesInOrder@CConditionalExpression@@UEAAX_K@Z.c)
 * Callees:
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x180019810 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A3774 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseExpression::InsertInOrder(CBaseExpression *this, __int64 a2)
{
  char v2; // bp
  unsigned int v5; // eax
  void (*v6)(void); // rax
  __int64 v7; // rax
  __int64 v8; // r8
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  CBaseExpression *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( (int)++*((_DWORD *)this + 51) > 1 || *((_QWORD *)this + 26) == a2 )
  {
LABEL_3:
    v5 = CBaseExpression::s_recursionLevel;
    goto LABEL_4;
  }
  v5 = CBaseExpression::s_recursionLevel;
  if ( CBaseExpression::s_recursionLevel <= 0x10 )
  {
    v2 = 1;
    ++CBaseExpression::s_recursionLevel;
    v6 = *(void (**)(void))(*(_QWORD *)this + 136LL);
    if ( (char *)v6 == (char *)CExpression::InsertDependenciesInOrder )
      CExpression::InsertDependenciesInOrder(this, a2);
    else
      v6();
    if ( *((_BYTE *)this + 228) )
    {
      v7 = *((_QWORD *)this + 2);
      v12 = this;
      v8 = *(_QWORD *)(v7 + 168) + 32LL * (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)(v7 + 168) + 180LL));
      v9 = *(_DWORD *)(v8 + 208);
      v10 = v9 + 1;
      if ( v9 + 1 < v9 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else if ( v10 > *(_DWORD *)(v8 + 204) )
      {
        v11 = DynArrayImpl<1>::AddMultipleAndSet(v8 + 184, 8LL, v8, &v12);
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v8 + 184) + 8LL * v9) = v12;
        *(_DWORD *)(v8 + 208) = v10;
      }
    }
    goto LABEL_3;
  }
LABEL_4:
  *((_QWORD *)this + 26) = a2;
  if ( v2 )
    CBaseExpression::s_recursionLevel = v5 - 1;
  --*((_DWORD *)this + 51);
}

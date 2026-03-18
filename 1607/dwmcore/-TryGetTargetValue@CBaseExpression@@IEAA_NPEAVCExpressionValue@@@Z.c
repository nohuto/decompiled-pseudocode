/*
 * XREFs of ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x180088AF0
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180089CA4 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18008C7D0 (-GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBaseExpression::TryGetTargetValue(CBaseExpression *this, struct CExpressionValue *a2)
{
  char v3; // bl
  CPropertyBagBase **v4; // rcx
  CPropertyBagBase *v6; // rcx
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(CPropertyBagBase *__hidden, unsigned int, struct CExpressionValue *); // rax
  int Property; // eax

  v3 = 0;
  v4 = (CPropertyBagBase **)*((_QWORD *)this + 29);
  if ( v4 )
    v6 = *v4;
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = *((unsigned int *)this + 61);
    v8 = *(__int64 (__fastcall **)(CPropertyBagBase *__hidden, unsigned int, struct CExpressionValue *))(*(_QWORD *)v6 + 88LL);
    if ( v8 == CPropertyBagBase::GetProperty )
      Property = CPropertyBagBase::GetProperty(v6, v7, a2);
    else
      Property = v8(v6, v7, a2);
    if ( Property < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Property, 0x3B7u);
    else
      return 1;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x3B6u);
  }
  return v3;
}

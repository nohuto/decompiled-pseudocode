/*
 * XREFs of ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x180129928
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1801291B0 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ResolveExpressionTargetReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z @ 0x180101678 (-ResolveExpressionTargetReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z.c)
 */

char __fastcall CBaseExpression::TryGetTargetValue(CBaseExpression *this, struct CExpressionValue *a2)
{
  unsigned int v2; // r8d
  char v5; // si
  int v6; // eax
  struct CResource *v7; // rbx
  int v8; // eax
  struct CResource *v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 26);
  v10 = 0LL;
  v5 = 0;
  v6 = CComposition::ResolveExpressionTargetReference(*((CComposition **)this + 2), *((_DWORD *)this + 24), v2, &v10);
  v7 = v10;
  if ( v6 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, struct CExpressionValue *))(*(_QWORD *)v10 + 88LL))(
           v10,
           *((unsigned int *)this + 27),
           a2);
    if ( v8 >= 0 )
      v5 = 1;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2B6u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x2B5u);
  }
  if ( v7 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v7 + 16LL))(v7);
  return v5;
}

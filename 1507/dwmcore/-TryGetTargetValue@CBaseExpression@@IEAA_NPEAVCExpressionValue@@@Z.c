/*
 * XREFs of ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x18010E9D4
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18010DF68 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ResolveExpressionTargetReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z @ 0x1800E3BF8 (-ResolveExpressionTargetReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z.c)
 */

char __fastcall CBaseExpression::TryGetTargetValue(CBaseExpression *this, struct CExpressionValue *a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // edx
  CComposition *v6; // rcx
  char v7; // si
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdi
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  struct CResource *v14; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 26);
  v14 = 0LL;
  v4 = *((_DWORD *)this + 24);
  v6 = (CComposition *)*((_QWORD *)this + 2);
  v7 = 0;
  v13 = 0LL;
  v8 = CComposition::ResolveExpressionTargetReference(v6, v4, v2, &v14);
  if ( v8 >= 0 )
  {
    v9 = (**(__int64 (__fastcall ***)(struct CResource *, GUID *, __int64 *))v14)(
           v14,
           &GUID_0d3e77a0_a365_4a0b_b476_396fef364781,
           &v13);
    if ( v9 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct CExpressionValue *))(*(_QWORD *)v13 + 24LL))(
              v13,
              *((unsigned int *)this + 27),
              a2);
      if ( v10 >= 0 )
        v7 = 1;
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2CCu);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2CBu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2CAu);
  }
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v7;
}

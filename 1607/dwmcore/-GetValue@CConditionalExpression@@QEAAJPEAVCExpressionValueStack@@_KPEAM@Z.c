/*
 * XREFs of ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180149154
 * Callers:
 *     ?CheckInertiaModifiers@CScrollAnimation@@AEAA?AW4InertiaModifierType@@XZ @ 0x18015DB38 (-CheckInertiaModifiers@CScrollAnimation@@AEAA-AW4InertiaModifierType@@XZ.c)
 *     ?Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z @ 0x180168E50 (-Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CConditionalExpression::GetValue(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float *a4)
{
  __int64 v4; // rax
  int v7; // eax
  unsigned int v8; // ebx
  float *v9; // rax

  v4 = *(_QWORD *)this;
  *a4 = 0.0;
  v7 = (*(__int64 (__fastcall **)(CConditionalExpression *))(v4 + 144))(this);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1ECu);
  }
  else if ( v7 != 1 )
  {
    v9 = (float *)CExpressionValueStack::PeekStackValue(a2, *((_DWORD *)a2 + 4) - 1);
    --*((_DWORD *)a2 + 4);
    *a4 = *v9;
  }
  return v8;
}

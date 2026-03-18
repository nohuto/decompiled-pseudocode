/*
 * XREFs of ?Update@CSpringForce@@QEAAMM@Z @ 0x180168D00
 * Callers:
 *     ?ValueAtTimeDefault@CScrollAnimation@@IEAAMMPEA_N@Z @ 0x18015EF40 (-ValueAtTimeDefault@CScrollAnimation@@IEAAMMPEA_N@Z.c)
 *     ?Update@CSpringDamperEndpointForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180168CE0 (-Update@CSpringDamperEndpointForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 *     ?Update@CSpringForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180168D30 (-Update@CSpringForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?AdvanceToTime@CForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x180168ED0 (-AdvanceToTime@CForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 */

float __fastcall CSpringForce::Update(CSpringForce *this, float a2)
{
  CForceEvaluator::AdvanceToTime((CSpringForce *)((char *)this + 24), a2, this);
  return *((float *)this + 10);
}

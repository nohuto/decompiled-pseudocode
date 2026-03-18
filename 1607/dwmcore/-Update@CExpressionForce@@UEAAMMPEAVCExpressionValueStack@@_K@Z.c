/*
 * XREFs of ?Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180168EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceToTime@CForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x180168ED0 (-AdvanceToTime@CForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 */

float __fastcall CExpressionForce::Update(
        CExpressionForce *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4)
{
  *((_QWORD *)this + 10) = a3;
  *((_QWORD *)this + 11) = a4;
  CForceEvaluator::AdvanceToTime((CExpressionForce *)((char *)this + 24), a2, this);
  return *((float *)this + 10);
}

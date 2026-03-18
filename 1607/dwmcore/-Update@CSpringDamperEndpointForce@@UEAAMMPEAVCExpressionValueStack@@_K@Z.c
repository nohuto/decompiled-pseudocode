/*
 * XREFs of ?Update@CSpringDamperEndpointForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180168CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@CSpringForce@@QEAAMM@Z @ 0x180168D00 (-Update@CSpringForce@@QEAAMM@Z.c)
 */

float __fastcall CSpringDamperEndpointForce::Update(
        CSpringDamperEndpointForce *this,
        float a2,
        struct CExpressionValueStack *a3)
{
  return CSpringForce::Update(this, a2) + *((float *)this + 18);
}

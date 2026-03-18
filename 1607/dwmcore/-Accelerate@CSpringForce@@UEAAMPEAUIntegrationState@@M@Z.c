/*
 * XREFs of ?Accelerate@CSpringForce@@UEAAMPEAUIntegrationState@@M@Z @ 0x1800C1180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CSpringForce::Accelerate(CSpringForce *this, struct IntegrationState *a2, float a3)
{
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 16) * *((float *)a2 + 1)) ^ _xmm)
       - (float)(*((float *)this + 17) * *((float *)a2 + 2));
}

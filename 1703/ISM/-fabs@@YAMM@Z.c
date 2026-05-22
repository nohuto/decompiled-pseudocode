/*
 * XREFs of ?fabs@@YAMM@Z @ 0x18002CA98
 * Callers:
 *     ?InjectPan@ManipulationInjector@@QEAAXMM@Z @ 0x18009719C (-InjectPan@ManipulationInjector@@QEAAXMM@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall fabs(float a1)
{
  return COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1) & _xmm);
}

/*
 * XREFs of _dynamic_initializer_for__g_AnalogCompositor__ @ 0x180001180
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAnalogCompositorClient@@QEAA@XZ @ 0x180097548 (--0CAnalogCompositorClient@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__g_AnalogCompositor__(CAnalogCompositorClient *a1)
{
  CAnalogCompositorClient::CAnalogCompositorClient(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_AnalogCompositor__);
}

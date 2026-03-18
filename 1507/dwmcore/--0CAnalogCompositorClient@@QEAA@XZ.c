/*
 * XREFs of ??0CAnalogCompositorClient@@QEAA@XZ @ 0x180097548
 * Callers:
 *     _dynamic_initializer_for__g_AnalogCompositor__ @ 0x180001180 (_dynamic_initializer_for__g_AnalogCompositor__.c)
 * Callees:
 *     <none>
 */

CAnalogCompositorClient *__fastcall CAnalogCompositorClient::CAnalogCompositorClient(CAnalogCompositorClient *this)
{
  CAnalogCompositorClient *result; // rax

  qword_180195FD0 = 0LL;
  result = (CAnalogCompositorClient *)&g_AnalogCompositor;
  g_AnalogCompositor = 0;
  return result;
}

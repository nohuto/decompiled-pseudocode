/*
 * XREFs of ??0CAnalogCompositorClient@@QEAA@XZ @ 0x1800B7E70
 * Callers:
 *     _dynamic_initializer_for__g_AnalogCompositor__ @ 0x1800011A0 (_dynamic_initializer_for__g_AnalogCompositor__.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800A36B8 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

CAnalogCompositorClient *__fastcall CAnalogCompositorClient::CAnalogCompositorClient(
        CAnalogCompositorClient *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  g_AnalogCompositor = 0;
  hObject = 0LL;
  qword_1801F0370 = 0LL;
  DynArrayImpl<1>::DynArrayImpl<1>((__int64)&qword_1801F0378, 0LL, 0, a4, 8);
  xmmword_1801F03A0 = 0LL;
  InitializeSRWLock(&stru_1801F03B0);
  return (CAnalogCompositorClient *)&g_AnalogCompositor;
}

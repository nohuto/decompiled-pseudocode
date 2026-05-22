/*
 * XREFs of _MPCRawInputProvider::_MPCRawInputProvider_::_1_::dtor$3 @ 0x1800A1B64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall MPCRawInputProvider::_MPCRawInputProvider_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return std::unique_ptr<SpeechRuntimeListener>::~unique_ptr<SpeechRuntimeListener>(
           (SpeechRuntimeListener **)(*(_QWORD *)(a2 + 80) + 88LL),
           a2);
}

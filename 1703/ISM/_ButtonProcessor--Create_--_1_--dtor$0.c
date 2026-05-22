/*
 * XREFs of _ButtonProcessor::Create_::_1_::dtor$0 @ 0x1800A0DFC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ButtonProcessor::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 144));
}

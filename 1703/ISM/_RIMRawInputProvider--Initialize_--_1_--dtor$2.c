/*
 * XREFs of _RIMRawInputProvider::Initialize_::_1_::dtor$2 @ 0x1800A2DF3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RIMRawInputProvider::Initialize_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 176));
}

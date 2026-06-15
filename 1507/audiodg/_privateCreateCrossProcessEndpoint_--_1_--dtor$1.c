/*
 * XREFs of _privateCreateCrossProcessEndpoint_::_1_::dtor$1 @ 0x14001BE6B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall privateCreateCrossProcessEndpoint_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CCrossProcessClientOutputEndpoint::operator delete(*(void **)(a2 + 32));
}

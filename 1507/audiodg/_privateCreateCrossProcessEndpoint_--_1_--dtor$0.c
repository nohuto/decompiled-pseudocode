/*
 * XREFs of _privateCreateCrossProcessEndpoint_::_1_::dtor$0 @ 0x14001BE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall privateCreateCrossProcessEndpoint_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CCrossProcessClientOutputEndpoint::operator delete(*(void **)(a2 + 32));
}

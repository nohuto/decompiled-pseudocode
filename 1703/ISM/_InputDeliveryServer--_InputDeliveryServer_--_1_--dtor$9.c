/*
 * XREFs of _InputDeliveryServer::_InputDeliveryServer_::_1_::dtor$9 @ 0x1800A258D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDeliveryServer::_InputDeliveryServer_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>::~KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>(
           (__int64 *)(*(_QWORD *)(a2 + 64) + 120LL),
           a2);
}

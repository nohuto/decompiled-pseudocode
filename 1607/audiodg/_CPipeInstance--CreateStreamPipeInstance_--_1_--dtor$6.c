/*
 * XREFs of _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$6 @ 0x14001B3A6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::CreateStreamPipeInstance_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CAPOProcessNode>::~CAutoPtr<CAPOProcessNode>(a2 + 256);
}

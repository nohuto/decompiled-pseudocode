/*
 * XREFs of _CPipeInstance::CreateModePipeInstance_::_1_::dtor$1 @ 0x14001A9DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::CreateModePipeInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CAPOProcessNode>::~CAutoPtr<CAPOProcessNode>(a2 + 80);
}

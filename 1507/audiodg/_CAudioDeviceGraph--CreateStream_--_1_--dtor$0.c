/*
 * XREFs of _CAudioDeviceGraph::CreateStream_::_1_::dtor$0 @ 0x14003201F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioDeviceGraph::CreateStream_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 128));
}

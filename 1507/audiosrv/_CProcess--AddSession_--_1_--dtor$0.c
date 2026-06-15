/*
 * XREFs of _CProcess::AddSession_::_1_::dtor$0 @ 0x1800464BB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::AddSession_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)(a2 + 48));
}

/*
 * XREFs of _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$3 @ 0x18003B326
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CComPtrBase<IPart>::Release(*(_QWORD *)(a2 + 96) + 64LL);
}

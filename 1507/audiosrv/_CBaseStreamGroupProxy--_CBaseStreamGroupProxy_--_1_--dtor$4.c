/*
 * XREFs of _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$4 @ 0x18004745D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CComPtrBase<IPart>::Release(*(_QWORD *)(a2 + 96) + 72LL);
}

/*
 * XREFs of _CStreamGroup::_CStreamGroup_::_1_::dtor$9 @ 0x14001AD1F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::_CStreamGroup_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>(*(_QWORD *)(a2 + 96) + 256LL);
}

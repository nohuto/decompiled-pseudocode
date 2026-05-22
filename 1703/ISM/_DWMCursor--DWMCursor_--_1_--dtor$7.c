/*
 * XREFs of _DWMCursor::DWMCursor_::_1_::dtor$7 @ 0x1800A003E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DWMCursor::DWMCursor_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(*(_QWORD *)(a2 + 96) + 96LL));
}

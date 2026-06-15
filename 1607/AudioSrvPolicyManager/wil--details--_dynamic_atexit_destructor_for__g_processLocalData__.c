/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x1800262D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180003424 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

void wil::details::_dynamic_atexit_destructor_for__g_processLocalData__()
{
  if ( qword_180034078 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(qword_180034078);
}

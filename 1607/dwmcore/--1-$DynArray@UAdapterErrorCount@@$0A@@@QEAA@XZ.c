/*
 * XREFs of ??1?$DynArray@UAdapterErrorCount@@$0A@@@QEAA@XZ @ 0x1800BD170
 * Callers:
 *     _dynamic_atexit_destructor_for__CD3DRegistryDatabase::m_rgAdapterErrorCounts__ @ 0x1800C2F80 (_dynamic_atexit_destructor_for__CD3DRegistryDatabase--m_rgAdapterErrorCounts__.c)
 * Callees:
 *     <none>
 */

void DynArray<AdapterErrorCount,0>::~DynArray<AdapterErrorCount,0>()
{
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&CD3DRegistryDatabase::m_rgAdapterErrorCounts);
}

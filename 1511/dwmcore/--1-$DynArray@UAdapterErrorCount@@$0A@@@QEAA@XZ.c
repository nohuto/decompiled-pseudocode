/*
 * XREFs of ??1?$DynArray@UAdapterErrorCount@@$0A@@@QEAA@XZ @ 0x1800BA510
 * Callers:
 *     _dynamic_atexit_destructor_for__CD3DRegistryDatabase::m_rgAdapterErrorCounts__ @ 0x1800BFB50 (_dynamic_atexit_destructor_for__CD3DRegistryDatabase--m_rgAdapterErrorCounts__.c)
 * Callees:
 *     <none>
 */

void DynArray<AdapterErrorCount,0>::~DynArray<AdapterErrorCount,0>()
{
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&CD3DRegistryDatabase::m_rgAdapterErrorCounts);
}

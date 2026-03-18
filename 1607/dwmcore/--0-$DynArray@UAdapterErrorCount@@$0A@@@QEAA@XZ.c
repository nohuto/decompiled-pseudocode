/*
 * XREFs of ??0?$DynArray@UAdapterErrorCount@@$0A@@@QEAA@XZ @ 0x1800B723C
 * Callers:
 *     _dynamic_initializer_for__CD3DRegistryDatabase::m_rgAdapterErrorCounts__ @ 0x180001260 (_dynamic_initializer_for__CD3DRegistryDatabase--m_rgAdapterErrorCounts__.c)
 * Callees:
 *     <none>
 */

__int128 *DynArray<AdapterErrorCount,0>::DynArray<AdapterErrorCount,0>()
{
  __int128 *result; // rax

  qword_1801F0138 = 0LL;
  dword_1801F0140 = 0;
  result = &CD3DRegistryDatabase::m_rgAdapterErrorCounts;
  CD3DRegistryDatabase::m_rgAdapterErrorCounts = 0LL;
  return result;
}

/*
 * XREFs of _dynamic_initializer_for__g_CritSecStreamGroupList__ @ 0x140001070
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x1400050C4 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__g_CritSecStreamGroupList__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&g_CritSecStreamGroupList);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_CritSecStreamGroupList__);
}

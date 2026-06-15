/*
 * XREFs of _dynamic_initializer_for__g_csApplicationManager__ @ 0x1800010F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180019650 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__g_csApplicationManager__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&g_csApplicationManager);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_csApplicationManager__);
}

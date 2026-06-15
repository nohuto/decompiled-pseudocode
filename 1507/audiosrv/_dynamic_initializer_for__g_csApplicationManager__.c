/*
 * XREFs of _dynamic_initializer_for__g_csApplicationManager__ @ 0x180001110
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__g_csApplicationManager__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&g_csApplicationManager);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_csApplicationManager__);
}

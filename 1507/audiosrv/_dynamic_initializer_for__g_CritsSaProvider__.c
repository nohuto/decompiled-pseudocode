/*
 * XREFs of _dynamic_initializer_for__g_CritsSaProvider__ @ 0x180001050
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__g_CritsSaProvider__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&g_CritsSaProvider);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_CritsSaProvider__);
}

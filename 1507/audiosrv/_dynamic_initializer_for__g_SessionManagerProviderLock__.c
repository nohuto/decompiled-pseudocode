/*
 * XREFs of _dynamic_initializer_for__g_SessionManagerProviderLock__ @ 0x1800010A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__g_SessionManagerProviderLock__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&g_SessionManagerProviderLock);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_SessionManagerProviderLock__);
}

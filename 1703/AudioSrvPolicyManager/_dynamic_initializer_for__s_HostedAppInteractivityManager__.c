/*
 * XREFs of _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001160
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000A3F4 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__s_HostedAppInteractivityManager__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&unk_180031D10);
  dword_180031D60 = 10;
  qword_180031D38 = 0LL;
  qword_180031D40 = 0LL;
  qword_180031D48 = 0LL;
  xmmword_180031D50 = 0LL;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__);
}

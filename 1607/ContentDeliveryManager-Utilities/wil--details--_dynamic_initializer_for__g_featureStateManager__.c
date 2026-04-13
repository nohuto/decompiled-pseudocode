/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  wil::details::g_featureStateManager = 1;
  qword_18008B0F0 = 0LL;
  byte_18008B0F8 = 0;
  xmmword_18008B100 = 0LL;
  xmmword_18008B110 = 0LL;
  qword_18008B120 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}

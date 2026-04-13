/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_1800F30F0 = 0LL;
  byte_1800F30F8 = 0;
  xmmword_1800F3100 = 0LL;
  xmmword_1800F3110 = 0LL;
  xmmword_1800F3120 = 0LL;
  wil::details::g_featureStateManager = 1;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}

/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_1800D2550 = 0LL;
  byte_1800D2558 = 0;
  xmmword_1800D2560 = 0LL;
  xmmword_1800D2570 = 0LL;
  xmmword_1800D2580 = 0LL;
  wil::details::g_featureStateManager = 1;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}

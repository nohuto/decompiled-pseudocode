/*
 * XREFs of _dynamic_atexit_destructor_for__g_csCompositionEngine__ @ 0x1800C2EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_csCompositionEngine__()
{
  CCriticalSection::DeInit(&g_csCompositionEngine);
}

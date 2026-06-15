/*
 * XREFs of _dynamic_atexit_destructor_for__g_CritsSaProvider__ @ 0x180049050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_CritsSaProvider__()
{
  DeleteCriticalSection(&g_CritsSaProvider);
}

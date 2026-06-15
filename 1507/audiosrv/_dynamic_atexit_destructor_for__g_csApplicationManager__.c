/*
 * XREFs of _dynamic_atexit_destructor_for__g_csApplicationManager__ @ 0x180049110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_csApplicationManager__()
{
  DeleteCriticalSection(&g_csApplicationManager);
}

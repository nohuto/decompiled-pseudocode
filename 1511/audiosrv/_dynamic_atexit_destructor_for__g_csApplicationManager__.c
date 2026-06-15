/*
 * XREFs of _dynamic_atexit_destructor_for__g_csApplicationManager__ @ 0x18004D1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_csApplicationManager__()
{
  DeleteCriticalSection(&g_csApplicationManager);
}

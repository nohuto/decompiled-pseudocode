/*
 * XREFs of _dynamic_atexit_destructor_for__g_CritSecStreamGroupList__ @ 0x14001C0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_CritSecStreamGroupList__()
{
  DeleteCriticalSection(&g_CritSecStreamGroupList);
}

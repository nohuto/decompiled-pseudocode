/*
 * XREFs of Simulator_TestNotify @ 0x1C005A400
 * Callers:
 *     Simulator_NotifyNamespaceCollision @ 0x1C0059E44 (Simulator_NotifyNamespaceCollision.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C005A0C4 (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C005A1B8 (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_Pre_RegEventHandler @ 0x1C005A284 (Simulator_Pre_RegEventHandler.c)
 *     Simulator_RefreshTree @ 0x1C005A324 (Simulator_RefreshTree.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00AB440 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Simulator_TestNotify(PVOID Argument1)
{
  if ( !g_SimulatorCallbackObject )
    return 3221225473LL;
  ExNotifyCallback(g_SimulatorCallbackObject, Argument1, 0LL);
  return 0LL;
}

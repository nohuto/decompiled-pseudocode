/*
 * XREFs of ?s_TokenThreadMain@CSurfaceManager@@CAKPEAX@Z @ 0x1800922F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x180092308 (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CSurfaceManager::s_TokenThreadMain(CSurfaceManager *Parameter)
{
  CSurfaceManager::ProcessKernelTokens(Parameter);
  return 0LL;
}

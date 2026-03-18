/*
 * XREFs of ?s_TokenThreadMain@CSurfaceManager@@CAKPEAX@Z @ 0x1800B7FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x180037078 (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CSurfaceManager::s_TokenThreadMain(HANDLE *Parameter)
{
  CSurfaceManager::ProcessKernelTokens(Parameter);
  return 0LL;
}

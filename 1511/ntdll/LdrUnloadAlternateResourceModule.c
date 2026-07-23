/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x180005CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModule(PVOID DllHandle)
{
  return LdrUnloadAlternateResourceModuleEx(DllHandle, 0);
}

/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14002567C
 * Callers:
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall LdrUnloadAlternateResourceModule(PVOID BaseAddress)
{
  return LdrUnloadAlternateResourceModuleEx(BaseAddress);
}

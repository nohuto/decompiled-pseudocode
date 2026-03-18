/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x140130B9C
 * Callers:
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall LdrUnloadAlternateResourceModule(PVOID BaseAddress)
{
  return LdrUnloadAlternateResourceModuleEx(BaseAddress);
}

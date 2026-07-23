/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14013110C
 * Callers:
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall LdrUnloadAlternateResourceModule(PVOID BaseAddress)
{
  ULONG v1; // edx

  return LdrUnloadAlternateResourceModuleEx(BaseAddress, v1);
}

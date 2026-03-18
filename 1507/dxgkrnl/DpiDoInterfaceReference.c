/*
 * XREFs of DpiDoInterfaceReference @ 0x1C016AD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG_PTR __stdcall DpiDoInterfaceReference(PVOID Object)
{
  return ObfReferenceObject(Object);
}

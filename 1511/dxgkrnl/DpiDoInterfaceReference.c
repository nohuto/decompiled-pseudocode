/*
 * XREFs of DpiDoInterfaceReference @ 0x1C016F510
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

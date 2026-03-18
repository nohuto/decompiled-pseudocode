/*
 * XREFs of ?Release@CompositionObject@@QEBA_JXZ @ 0x1C001D690
 * Callers:
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG_PTR __stdcall CompositionObject::Release(PVOID Object)
{
  return ObfDereferenceObject(Object);
}

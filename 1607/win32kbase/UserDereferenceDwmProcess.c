/*
 * XREFs of UserDereferenceDwmProcess @ 0x1C0076790
 * Callers:
 *     ?DCompositionSendDwmLpcMessage@@YAJPEAX_K@Z @ 0x1C00E31F4 (-DCompositionSendDwmLpcMessage@@YAJPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall UserDereferenceDwmProcess(void *a1)
{
  LONG_PTR result; // rax

  if ( a1 )
    return ObfDereferenceObject(a1);
  return result;
}

/*
 * XREFs of ?SupportsPointerType@CInteractionRoot@@UEBAHKHW4SupportedTypeOption@@@Z @ 0x180131C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteractionRoot::SupportsPointerType(__int64 a1, int a2, int a3, unsigned int a4)
{
  return CInteractionProcessor::SupportsPointerType(a1 + 32, a2, a3, a4);
}

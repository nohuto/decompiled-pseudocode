/*
 * XREFs of ?RemoveContact@CInteractionRoot@@UEAAXK@Z @ 0x1801714C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionRoot::RemoveContact(CInteractionRoot *this, int a2)
{
  CInteractionProcessor::RemoveContact((CInteractionRoot *)((char *)this + 32), a2);
}

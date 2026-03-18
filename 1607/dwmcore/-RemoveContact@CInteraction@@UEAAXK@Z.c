/*
 * XREFs of ?RemoveContact@CInteraction@@UEAAXK@Z @ 0x180145590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::RemoveContact(CInteraction *this, unsigned int a2)
{
  CInteractionProcessor::RemoveContact((CInteraction *)((char *)this + 408), a2);
}

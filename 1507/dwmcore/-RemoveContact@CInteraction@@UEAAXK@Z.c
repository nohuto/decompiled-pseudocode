/*
 * XREFs of ?RemoveContact@CInteraction@@UEAAXK@Z @ 0x18010D2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::RemoveContact(CInteraction *this, unsigned int a2)
{
  CInteractionProcessor::RemoveContact((CInteraction *)((char *)this + 224), a2);
}

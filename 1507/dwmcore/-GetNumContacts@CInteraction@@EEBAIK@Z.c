/*
 * XREFs of ?GetNumContacts@CInteraction@@EEBAIK@Z @ 0x18009AA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::GetNumContacts(CInteraction *this, int a2)
{
  return *((unsigned int *)this + (unsigned int)(a2 - 1) + 50);
}

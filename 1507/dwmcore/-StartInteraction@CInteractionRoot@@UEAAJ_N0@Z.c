/*
 * XREFs of ?StartInteraction@CInteractionRoot@@UEAAJ_N0@Z @ 0x180131C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::StartInteraction(CInteractionRoot *this, char a2, char a3)
{
  return CInteractionProcessor::StartInteraction((CInteractionRoot *)((char *)this + 32), a2, a3);
}

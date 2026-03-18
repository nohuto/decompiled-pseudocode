/*
 * XREFs of ?StartInteraction@CInteractionRoot@@UEAAJ_N0@Z @ 0x1801448D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::StartInteraction(CInteractionRoot *this, __int64 a2, __int64 a3)
{
  return CInteractionProcessor::StartInteraction((CInteractionRoot *)((char *)this + 32), a2, a3);
}

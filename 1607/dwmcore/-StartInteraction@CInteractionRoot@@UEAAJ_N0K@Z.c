/*
 * XREFs of ?StartInteraction@CInteractionRoot@@UEAAJ_N0K@Z @ 0x1801724A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::StartInteraction(CInteractionRoot *this, char a2, __int64 a3, __int64 a4)
{
  return CInteractionProcessor::StartInteraction((CInteractionRoot *)((char *)this + 32), a2, a3, a4);
}

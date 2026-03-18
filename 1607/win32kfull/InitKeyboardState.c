/*
 * XREFs of InitKeyboardState @ 0x1C0133310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InitKeyboardState()
{
  __int64 result; // rax

  result = 0LL;
  gfsModifiers = 0;
  gfsModOnlyCandidate = 0;
  gfsSASModifiersDown = 0;
  gfsRawModifiersForHotKey = 0;
  WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  return result;
}

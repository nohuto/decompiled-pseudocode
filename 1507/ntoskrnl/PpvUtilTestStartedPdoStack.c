/*
 * XREFs of PpvUtilTestStartedPdoStack @ 0x140026DDC
 * Callers:
 *     PipProcessStartPhase3 @ 0x14045ED7C (PipProcessStartPhase3.c)
 * Callees:
 *     <none>
 */

__int64 PpvUtilTestStartedPdoStack()
{
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
    return VfMajorTestStartedPdoStack();
  return result;
}

/*
 * XREFs of PpvUtilTestStartedPdoStack @ 0x140107494
 * Callers:
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
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

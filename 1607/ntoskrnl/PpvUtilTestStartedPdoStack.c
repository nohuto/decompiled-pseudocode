/*
 * XREFs of PpvUtilTestStartedPdoStack @ 0x140085FD4
 * Callers:
 *     PipProcessStartPhase3 @ 0x140488964 (PipProcessStartPhase3.c)
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

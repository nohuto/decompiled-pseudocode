/*
 * XREFs of ViKeInjectStatusAlerted @ 0x140749C44
 * Callers:
 *     VerifierKeDelayExecutionThread @ 0x1407480E4 (VerifierKeDelayExecutionThread.c)
 *     VerifierKeWaitForMultipleObjects @ 0x1407490A0 (VerifierKeWaitForMultipleObjects.c)
 *     VerifierKeWaitForMultipleObjectsNoReboot @ 0x1407492AC (VerifierKeWaitForMultipleObjectsNoReboot.c)
 *     VerifierKeWaitForSingleObject @ 0x140749448 (VerifierKeWaitForSingleObject.c)
 *     VerifierKeWaitForSingleObjectNoReboot @ 0x1407495C4 (VerifierKeWaitForSingleObjectNoReboot.c)
 * Callees:
 *     VfUtilIsLocalSystem @ 0x1407378E4 (VfUtilIsLocalSystem.c)
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
 */

_BOOL8 __fastcall ViKeInjectStatusAlerted(char a1)
{
  struct _KPROCESS *Process; // rbx
  _BOOL8 result; // rax

  result = 0;
  if ( a1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PsInitialSystemProcess )
    {
      if ( Process != PsInitialSystemProcess
        && Process != PsIdleProcess
        && (unsigned int)VfFaultsInjectResourceFailure(0)
        && !(unsigned int)VfUtilIsLocalSystem(Process) )
      {
        return 1;
      }
    }
  }
  return result;
}

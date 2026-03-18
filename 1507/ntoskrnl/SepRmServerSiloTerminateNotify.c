/*
 * XREFs of SepRmServerSiloTerminateNotify @ 0x1406D0468
 * Callers:
 *     <none>
 * Callees:
 *     SepRmCleanupRmLsaState @ 0x1406D0420 (SepRmCleanupRmLsaState.c)
 */

NTSTATUS __fastcall SepRmServerSiloTerminateNotify(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax

  if ( a2 )
    return SepRmCleanupRmLsaState(a2);
  return result;
}

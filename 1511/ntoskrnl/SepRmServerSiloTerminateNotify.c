/*
 * XREFs of SepRmServerSiloTerminateNotify @ 0x14064D308
 * Callers:
 *     <none>
 * Callees:
 *     SepRmCleanupRmLsaState @ 0x14064D2C0 (SepRmCleanupRmLsaState.c)
 */

NTSTATUS __fastcall SepRmServerSiloTerminateNotify(__int64 a1)
{
  NTSTATUS result; // eax

  if ( a1 )
    return SepRmCleanupRmLsaState(a1);
  return result;
}

/*
 * XREFs of MmIsVerifierEnabled @ 0x1406FE214
 * Callers:
 *     MiInitializeBootDefaults @ 0x14078E68C (MiInitializeBootDefaults.c)
 *     InitializePagedPool @ 0x1407B47A0 (InitializePagedPool.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall MmIsVerifierEnabled(PULONG VerifierFlags)
{
  if ( ViVerifierDriverAddedThunkListHead )
  {
    *VerifierFlags = MmVerifierData;
    return 0;
  }
  else
  {
    *VerifierFlags = 0;
    return -1073741637;
  }
}

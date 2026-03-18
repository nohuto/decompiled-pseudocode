/*
 * XREFs of MmIsVerifierEnabled @ 0x1407324BC
 * Callers:
 *     InitializePagedPool @ 0x1407CA2BC (InitializePagedPool.c)
 *     MiInitializeBootDefaults @ 0x1407E29A0 (MiInitializeBootDefaults.c)
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

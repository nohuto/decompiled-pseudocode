/*
 * XREFs of MmValidateUserCallTarget @ 0x1406617CC
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     MmCheckForSafeExecution @ 0x14065B60C (MmCheckForSafeExecution.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x140014304 (MiIsProcessCfgEnabled.c)
 */

__int64 MmValidateUserCallTarget()
{
  int v0; // edx
  unsigned __int64 v1; // r8
  const signed __int64 **v3; // rdx

  if ( !MiIsProcessCfgEnabled() )
    return 1LL;
  if ( v0 )
    v3 = (const signed __int64 **)(qword_140327F90 + 276840688);
  else
    v3 = (const signed __int64 **)(qword_140327F90 + 276840664);
  return MiValidateUserCallTarget(v1, v3);
}

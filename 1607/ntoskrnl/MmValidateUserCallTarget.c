/*
 * XREFs of MmValidateUserCallTarget @ 0x1406618B0
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     MmCheckForSafeExecution @ 0x14065B6F0 (MmCheckForSafeExecution.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x140013E84 (MiIsProcessCfgEnabled.c)
 */

__int64 MmValidateUserCallTarget()
{
  int v0; // edx
  unsigned __int64 v1; // r8
  const signed __int64 **v3; // rdx

  if ( !MiIsProcessCfgEnabled() )
    return 1LL;
  if ( v0 )
    v3 = (const signed __int64 **)(qword_140327FD0 + 276840688);
  else
    v3 = (const signed __int64 **)(qword_140327FD0 + 276840664);
  return MiValidateUserCallTarget(v1, v3);
}

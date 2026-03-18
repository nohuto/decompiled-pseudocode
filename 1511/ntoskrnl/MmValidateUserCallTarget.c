/*
 * XREFs of MmValidateUserCallTarget @ 0x14062B190
 * Callers:
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     MmCheckForSafeExecution @ 0x140625D80 (MmCheckForSafeExecution.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x140037FE4 (MiIsProcessCfgEnabled.c)
 */

__int64 MmValidateUserCallTarget()
{
  int v0; // edx
  unsigned __int64 v1; // r8

  if ( MiIsProcessCfgEnabled() )
    return MiValidateUserCallTarget(
             v1,
             (const signed __int64 **)(v0 != 0 ? 0xFFFFF580108042D8uLL : 0xFFFFF580108042C0uLL));
  else
    return 1LL;
}

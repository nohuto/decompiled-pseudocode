/*
 * XREFs of MmValidateUserCallTarget @ 0x1406A9A54
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     MmCheckForSafeExecution @ 0x1406A57C0 (MmCheckForSafeExecution.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x140010004 (MiIsProcessCfgEnabled.c)
 */

__int64 MmValidateUserCallTarget()
{
  int v0; // edx
  unsigned __int64 v1; // r8

  if ( MiIsProcessCfgEnabled() )
    return MiValidateUserCallTarget(
             v1,
             (const signed __int64 **)(v0 != 0 ? 0xFFFFF58010804280uLL : 0xFFFFF58010804268uLL));
  else
    return 1LL;
}

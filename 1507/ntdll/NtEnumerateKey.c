/*
 * XREFs of NtEnumerateKey @ 0x180093C20
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180053C60 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180071394 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpNtEnumerateSubKey @ 0x1800737F0 (RtlpNtEnumerateSubKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800D5480 (RtlpCleanupRegistryKeys.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1800E9138 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1800EA0D0 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtEnumerateKey()
{
  __int64 result; // rax

  result = 50LL;
  __asm { syscall; Low latency system call }
  return result;
}

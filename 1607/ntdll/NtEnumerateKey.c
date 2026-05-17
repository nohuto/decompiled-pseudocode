/*
 * XREFs of NtEnumerateKey @ 0x1800A6A60
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800692D0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007F260 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpNtEnumerateSubKey @ 0x180083D00 (RtlpNtEnumerateSubKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E65D0 (RtlpCleanupRegistryKeys.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1800F6178 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1800F70F4 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtEnumerateKey()
{
  __int64 result; // rax

  result = 50LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

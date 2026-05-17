/*
 * XREFs of NtEnumerateKey @ 0x1800A5700
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800426C0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007D064 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpNtEnumerateSubKey @ 0x18007E640 (RtlpNtEnumerateSubKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800DD3A0 (RtlpCleanupRegistryKeys.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1800ED408 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1800EE3A0 (_RtlpRemovePendingDeleteLanguages.c)
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

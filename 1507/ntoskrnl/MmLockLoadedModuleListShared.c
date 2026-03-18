/*
 * XREFs of MmLockLoadedModuleListShared @ 0x140010828
 * Callers:
 *     MiLockPagableImageSection @ 0x140010490 (MiLockPagableImageSection.c)
 *     RtlpxLookupFunctionTable @ 0x14001F3E0 (RtlpxLookupFunctionTable.c)
 *     MiSplitDriverPage @ 0x14020E560 (MiSplitDriverPage.c)
 *     RtlPcToFileName @ 0x14024A240 (RtlPcToFileName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmLockLoadedModuleListShared(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al
  __int64 result; // rax
  int v3; // ett

  CurrentIrql = KeGetCurrentIrql();
  *a1 = CurrentIrql;
  if ( CurrentIrql < 0xFu )
    __writecr8(0xFuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&PsLoadedModuleSpinLock);
  _m_prefetchw(&PsLoadedModuleSpinLock);
  v3 = PsLoadedModuleSpinLock & 0x7FFFFFFF;
  result = (unsigned int)_InterlockedCompareExchange(
                           &PsLoadedModuleSpinLock,
                           (PsLoadedModuleSpinLock & 0x7FFFFFFF) + 1,
                           PsLoadedModuleSpinLock & 0x7FFFFFFF);
  if ( v3 != (_DWORD)result )
    return ExpWaitForSpinLockSharedAndAcquire(&PsLoadedModuleSpinLock);
  return result;
}

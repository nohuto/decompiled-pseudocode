/*
 * XREFs of MmProbeAndLockProcessPages @ 0x14050BBA8
 * Callers:
 *     CcAsyncReadPrefetch @ 0x14006E060 (CcAsyncReadPrefetch.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x14002F120 (MmProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

void __stdcall MmProbeAndLockProcessPages(
        PMDL MemoryDescriptorList,
        PEPROCESS Process,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  int v7; // ebx
  _BYTE v8[48]; // [rsp+28h] [rbp-50h] BYREF

  v7 = 0;
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    v7 = 1;
    KiStackAttachProcess(Process, 0, (__int64)v8);
  }
  MmProbeAndLockPages(MemoryDescriptorList, AccessMode, Operation);
  if ( v7 )
    KiUnstackDetachProcess((struct _KTHREAD *)v8, 0);
}

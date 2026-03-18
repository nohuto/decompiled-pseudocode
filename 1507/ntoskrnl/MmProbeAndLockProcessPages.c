/*
 * XREFs of MmProbeAndLockProcessPages @ 0x1404778C8
 * Callers:
 *     CcAsyncReadPrefetch @ 0x14011D7C4 (CcAsyncReadPrefetch.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140753CC4 (VerifierMmProbeAndLockProcessPages.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
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

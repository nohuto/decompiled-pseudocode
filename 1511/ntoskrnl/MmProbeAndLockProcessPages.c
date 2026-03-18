/*
 * XREFs of MmProbeAndLockProcessPages @ 0x1404D8364
 * Callers:
 *     CcAsyncReadPrefetch @ 0x1400FC10C (CcAsyncReadPrefetch.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1406D01F8 (VerifierMmProbeAndLockProcessPages.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __stdcall MmProbeAndLockProcessPages(
        PMDL MemoryDescriptorList,
        PEPROCESS Process,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  int v7; // ebx
  $D4FCF91253F76F57393CBFE908971F67 v8; // [rsp+28h] [rbp-50h] BYREF

  v7 = 0;
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    v7 = 1;
    KiStackAttachProcess(Process, 0LL, (__int64)&v8);
  }
  MmProbeAndLockPages(MemoryDescriptorList, AccessMode, Operation);
  if ( v7 )
    KiUnstackDetachProcess(&v8, 0LL);
}

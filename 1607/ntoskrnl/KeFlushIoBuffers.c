/*
 * XREFs of KeFlushIoBuffers @ 0x14009CBF0
 * Callers:
 *     ViMapDoubleBuffer @ 0x140709EAC (ViMapDoubleBuffer.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     KeInvalidateAllCaches @ 0x1400B3758 (KeInvalidateAllCaches.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiFlushRangeAllCaches @ 0x1401D60D4 (KiFlushRangeAllCaches.c)
 *     EtwTraceCpuCacheFlush @ 0x140225878 (EtwTraceCpuCacheFlush.c)
 */

void __fastcall KeFlushIoBuffers(ULONG_PTR BugCheckParameter4, char a2, char a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // r13
  char v8; // si
  char v9; // r12
  PVOID v10; // rbp
  unsigned int v11; // r14d
  int BugCheckOnFailure; // [rsp+20h] [rbp-58h]
  unsigned int v13; // [rsp+30h] [rbp-48h]
  char v14[16]; // [rsp+38h] [rbp-40h] BYREF

  if ( !KiSystemFullyCoherent )
  {
    CurrentIrql = KeGetCurrentIrql();
    v8 = 1;
    v13 = *(_DWORD *)(BugCheckParameter4 + 40);
    v9 = 1;
    if ( a3 || a2 )
    {
      if ( (*(_BYTE *)(BugCheckParameter4 + 10) & 5) != 0 )
        v10 = *(PVOID *)(BugCheckParameter4 + 24);
      else
        v10 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter4, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( v10 )
      {
        v9 = 0;
      }
      else if ( CurrentIrql == 15 )
      {
        KeBugCheckEx(0x55u, 0x86uLL, 0xBADuLL, 0LL, 0LL);
      }
      if ( (xmmword_1403AA2D0 & 0x4000000) != 0 )
        EtwGetKernelTraceTimestamp(v14, 0x84000000uLL);
      else
        v8 = 0;
      if ( v9 )
      {
        if ( a3 )
          KeInvalidateAllCaches();
        v11 = v13;
      }
      else
      {
        LOBYTE(BugCheckOnFailure) = a3;
        v11 = v13;
        KiFlushRangeAllCaches(BugCheckParameter4, (ULONG_PTR)v10, v13, a2);
      }
      if ( v8 )
      {
        LOBYTE(a4) = a2 == 0;
        EtwTraceCpuCacheFlush(v14, v10, v11, a4, BugCheckOnFailure);
      }
    }
  }
}

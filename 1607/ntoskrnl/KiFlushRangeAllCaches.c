/*
 * XREFs of KiFlushRangeAllCaches @ 0x1401D60D4
 * Callers:
 *     KeFlushIoBuffers @ 0x14009CBF0 (KeFlushIoBuffers.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall KiFlushRangeAllCaches(
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR BugCheckParameter3,
        ULONG a3,
        char a4,
        char a5)
{
  if ( a5 && a4 )
  {
    if ( ((KeLargestCacheLine - 1) & (unsigned int)BugCheckParameter3) != 0 )
      KeBugCheckEx(0xE6u, 0x1FuLL, 4uLL, BugCheckParameter3, BugCheckParameter4);
    if ( ((KeLargestCacheLine - 1) & a3) != 0 )
      KeBugCheckEx(0xE6u, 0x1FuLL, 5uLL, a3, BugCheckParameter4);
  }
  if ( KeGetCurrentIrql() == 15 )
    KeBugCheckEx(0x55u, 0x64uLL, 0xBADuLL, 1uLL, 0LL);
  KeInvalidateRangeAllCaches((PVOID)BugCheckParameter3, a3);
}

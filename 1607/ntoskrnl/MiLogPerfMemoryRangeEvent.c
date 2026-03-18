/*
 * XREFs of MiLogPerfMemoryRangeEvent @ 0x1401E35E0
 * Callers:
 *     MiAssignNonPagedPoolPtes @ 0x14001B400 (MiAssignNonPagedPoolPtes.c)
 *     MmFreeContiguousMemory @ 0x14009ABB8 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x14009AF40 (MiAllocateContiguousMemory.c)
 *     MiExpandNonPagedPool @ 0x140101824 (MiExpandNonPagedPool.c)
 *     MiReturnNonPagedPoolVa @ 0x140103670 (MiReturnNonPagedPoolVa.c)
 *     MiUnmapLargeUserPages @ 0x1401F5AE0 (MiUnmapLargeUserPages.c)
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x1404ED9A4 (MiUseLargeDriverPage.c)
 *     MiLogSectionCreate @ 0x140659210 (MiLogSectionCreate.c)
 *     MiMapUserLargePages @ 0x140662B28 (MiMapUserLargePages.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140014190 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogPerfMemoryRangeEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r10
  __int16 v6; // r9
  unsigned __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h]
  __int64 v10; // [rsp+40h] [rbp-28h]
  unsigned __int64 *v11; // [rsp+48h] [rbp-20h] BYREF
  int v12; // [rsp+50h] [rbp-18h]
  int v13; // [rsp+54h] [rbp-14h]

  v4 = 0LL;
  v9 = 0LL;
  v6 = 632;
  v10 = 0LL;
  if ( (a3 & 1) == 0 )
    v6 = 633;
  if ( (a3 & 0x1E) == 0x1A )
    v4 = (16 * a2) & 0xFFFFFFFFFFFF0LL;
  v13 = 0;
  v9 = a1;
  v10 = a4;
  v12 = 24;
  v8 = ((unsigned __int8)v4 ^ (unsigned __int8)((unsigned __int64)a3 >> 1)) & 0xF ^ (unsigned __int64)v4;
  v11 = &v8;
  return EtwTraceKernelEvent((int)&v11, 1, 0x20000001u, v6, 289413890);
}

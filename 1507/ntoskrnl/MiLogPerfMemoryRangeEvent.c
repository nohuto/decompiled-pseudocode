/*
 * XREFs of MiLogPerfMemoryRangeEvent @ 0x140214958
 * Callers:
 *     MiReturnNonPagedPoolVa @ 0x1400645C0 (MiReturnNonPagedPoolVa.c)
 *     MiExpandNonPagedPool @ 0x14006B0B4 (MiExpandNonPagedPool.c)
 *     MiAssignNonPagedPoolPtes @ 0x14010B830 (MiAssignNonPagedPoolPtes.c)
 *     MmFreeContiguousMemory @ 0x140114978 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140114E20 (MiAllocateContiguousMemory.c)
 *     MiMapUserLargePages @ 0x14022F2A8 (MiMapUserLargePages.c)
 *     MiUnmapLargeUserPages @ 0x14022FBF4 (MiUnmapLargeUserPages.c)
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140573B54 (MiUseLargeDriverPage.c)
 *     MiLogSectionCreate @ 0x1406A2DF4 (MiLogSectionCreate.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void *__fastcall MiLogPerfMemoryRangeEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r10
  unsigned __int16 v6; // r9
  _QWORD v8[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v9; // [rsp+48h] [rbp-20h] BYREF
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v4 = 0LL;
  v6 = 632;
  if ( (a3 & 1) == 0 )
    v6 = 633;
  if ( (a3 & 0x1E) == 0x1A )
    v4 = 16 * (a2 & 0xFFFFFFFFFFFFLL);
  v11 = 0;
  v8[1] = a1;
  v8[2] = a4;
  v10 = 24;
  v8[0] = ((unsigned __int8)v4 ^ (unsigned __int8)((unsigned __int64)a3 >> 1)) & 0xF ^ (unsigned __int64)v4;
  v9 = v8;
  return EtwTraceKernelEvent((int)&v9, 1, 0x20000001u, v6, 289413890);
}

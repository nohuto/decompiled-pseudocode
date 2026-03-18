/*
 * XREFs of MiLogPerfMemoryRangeEvent @ 0x1401D3510
 * Callers:
 *     MiExpandNonPagedPool @ 0x1400168DC (MiExpandNonPagedPool.c)
 *     MiReturnNonPagedPoolVa @ 0x1400B4000 (MiReturnNonPagedPoolVa.c)
 *     MiAllocateContiguousMemory @ 0x1400BD4F4 (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1400C1D4C (MmFreeContiguousMemory.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400D22E0 (MiAssignNonPagedPoolPtes.c)
 *     MiMapUserLargePages @ 0x1401E1F60 (MiMapUserLargePages.c)
 *     MiUnmapLargeUserPages @ 0x1401E27F0 (MiUnmapLargeUserPages.c)
 *     MiUseLargeDriverPage @ 0x1403CC26C (MiUseLargeDriverPage.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 *     MiLogSectionCreate @ 0x140623BE0 (MiLogSectionCreate.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogPerfMemoryRangeEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
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

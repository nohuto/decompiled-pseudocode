/*
 * XREFs of LogDiagSDC @ 0x1C001BD78
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 *     xxxUserSetDisplayConfig @ 0x1C006DFB0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C006AC90 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall LogDiagSDC(
        unsigned int a1,
        const void *a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        char a10)
{
  __int64 v10; // rdi
  __int64 v11; // r14
  unsigned int v14; // ebp
  __int64 v15; // rbx
  __int64 v17; // rax

  v10 = a1;
  v11 = a3;
  v14 = (a3 << 6) + 8 * (a1 + 11 + 8 * a1);
  v15 = PALLOCMEM2(v14);
  if ( v15 )
  {
    *(_DWORD *)(v15 + 4) = v14;
    *(_DWORD *)(v15 + 40) = 0;
    *(_QWORD *)(v15 + 32) = 0LL;
    *(_DWORD *)v15 = (a5 & 0xC000) != 0 ? 21 : 1;
    *(_QWORD *)(v15 + 8) = 0LL;
    *(_QWORD *)(v15 + 16) = 0LL;
    *(_QWORD *)(v15 + 24) = 0LL;
    *(_DWORD *)(v15 + 60) = a7;
    *(_DWORD *)(v15 + 64) = a8;
    *(_DWORD *)(v15 + 68) = a6;
    *(_DWORD *)(v15 + 72) = a5;
    *(_DWORD *)(v15 + 52) = v10;
    *(_DWORD *)(v15 + 56) = v11;
    *(_DWORD *)(v15 + 48) = (a2 == 0LL) ^ ((a2 == 0LL) ^ (unsigned __int8)(2 * (a4 == 0LL))) & 2 ^ ((a2 == 0LL) ^ ((a2 == 0LL) ^ (unsigned __int8)(2 * (a4 == 0LL))) & 2 ^ (unsigned __int8)(8 * (a10 != 0))) & 8;
    *(_QWORD *)(v15 + 80) = a9;
    if ( a2 )
      memmove((void *)(v15 + 88), a2, 72 * v10);
    if ( a4 )
      memmove((void *)(v15 + 8 * (v10 + 8 * v10 + 11)), a4, v11 << 6);
    ((void (__fastcall *)(__int64))qword_1C0101398)(v15);
    return Win32FreePool(v15);
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v17 + 24) = v14;
    WdLogEvent5_WdLowResource(v17);
    return DrvDxgkLogCodePointPacket(3LL, a5, a6, a8);
  }
}

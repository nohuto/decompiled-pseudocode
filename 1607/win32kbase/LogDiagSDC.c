/*
 * XREFs of LogDiagSDC @ 0x1C0064918
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     DrvSetDisplayConfig @ 0x1C0063200 (DrvSetDisplayConfig.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C0064A40 (DrvDxgkWriteDiagEntry.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00882D0 (DrvDxgkLogCodePointPacket.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
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
  _DWORD *v15; // rbx
  __int64 v17; // rax

  v10 = a1;
  v11 = a3;
  v14 = (a3 << 6) + 8 * (a1 + 11 + 8 * a1);
  v15 = PALLOCMEM2(v14, 1936876615LL, 1);
  if ( v15 )
  {
    v15[1] = v14;
    v15[10] = 0;
    *((_QWORD *)v15 + 4) = 0LL;
    *v15 = (a5 & 0xC000) != 0 ? 21 : 1;
    *((_QWORD *)v15 + 1) = 0LL;
    *((_QWORD *)v15 + 2) = 0LL;
    *((_QWORD *)v15 + 3) = 0LL;
    v15[15] = a7;
    v15[16] = a8;
    v15[17] = a6;
    v15[18] = a5;
    v15[13] = v10;
    v15[14] = v11;
    v15[12] = (a2 == 0LL) ^ ((a2 == 0LL) ^ (unsigned __int8)(2 * (a4 == 0LL))) & 2 ^ ((a2 == 0LL) ^ ((a2 == 0LL) ^ (unsigned __int8)(2 * (a4 == 0LL))) & 2 ^ (unsigned __int8)(8 * (a10 != 0))) & 8;
    *((_QWORD *)v15 + 10) = a9;
    if ( a2 )
      memmove(v15 + 22, a2, 72 * v10);
    if ( a4 )
      memmove(&v15[16 * v10 + 22 + 2 * v10], a4, v11 << 6);
    DrvDxgkWriteDiagEntry(v15);
    return Win32FreePool();
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v17 + 24) = v14;
    WdLogEvent5_WdLowResource(v17);
    return DrvDxgkLogCodePointPacket(3LL, a5, a6, a8);
  }
}

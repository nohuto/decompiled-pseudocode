/*
 * XREFs of MiGetFastLargePage @ 0x140662AD4
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x1406621D4 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x14001B6C0 (MiFreeZeroPageSizeIndex.c)
 *     MiUpdateLargePageBitMap @ 0x140022760 (MiUpdateLargePageBitMap.c)
 *     MiProtectionToCacheAttribute @ 0x1400E538C (MiProtectionToCacheAttribute.c)
 *     MiPfnZeroingNeeded @ 0x140104F58 (MiPfnZeroingNeeded.c)
 *     MiSetPfnOriginalPte @ 0x140171DDC (MiSetPfnOriginalPte.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1401F2DE4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiZeroAndConvertLargePage @ 0x1401FC2F8 (MiZeroAndConvertLargePage.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1401FD17C (MiGetLargePageDemoteAsNeeded.c)
 */

__int64 __fastcall MiGetFastLargePage(__int64 a1, unsigned int a2, unsigned __int64 *a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  _QWORD *v9; // rbx
  char v10; // cl
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  char v13; // al
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // r8
  unsigned __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v18[34]; // [rsp+38h] [rbp-40h] BYREF
  char v19; // [rsp+5Ah] [rbp-1Eh]

  v17 = 0LL;
  result = MiGetLargePageDemoteAsNeeded(a1, a2, *a3, 2, (__int64)&v17);
  v9 = (_QWORD *)result;
  if ( result )
  {
    v10 = *(_BYTE *)(result + 34);
    v11 = 0LL;
    v12 = v17;
    v13 = v19 ^ v10;
    *a3 -= v17;
    v17 = 0LL;
    v19 = v10 ^ v13 & 0x3F;
    if ( (v10 & 7) == 1 )
    {
      MiSetOriginalPtePfnFromFreeList(&v17);
      v11 = v17;
    }
    MiSetPfnOriginalPte((__int64)v18, v11);
    MiSetPfnOriginalPte((__int64)v9, v14);
    v15 = MiProtectionToCacheAttribute(a4);
    if ( v15 != 1 || MiPfnZeroingNeeded((__int64)v18) )
      MiZeroAndConvertLargePage((__int64)v9, (unsigned int)v12, v15);
    MiUpdateLargePageBitMap(a1, (__int64)(v9 + 0xB000000000LL) / 48, v12, 1, 1);
    v16 = (unsigned int)MiFreeZeroPageSizeIndex((__int64)v9);
    result = 1LL;
    *v9 = *(_QWORD *)(a5 + 8 * v16);
    *(_QWORD *)(a5 + 8 * v16) = v9;
  }
  return result;
}

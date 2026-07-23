/*
 * XREFs of RtlpHpReallocComputeSizes @ 0x180043A14
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18004376C (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x1800435F4 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpCalculateAllocSize @ 0x180043B98 (RtlpHpCalculateAllocSize.c)
 *     RtlpHpSegAllocSizeInternal @ 0x1800445FC (RtlpHpSegAllocSizeInternal.c)
 *     RtlpHpLargeAllocSize @ 0x18004F564 (RtlpHpLargeAllocSize.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpHpReallocComputeSizes(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned int v9; // ebx
  int v10; // eax
  unsigned __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // edx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // r10
  int v20; // r11d
  unsigned int v21; // edx
  unsigned __int64 v22; // rcx
  __int64 v24; // rax

  memset(a5, 0, 0x28uLL);
  a5[3] = a3;
  v9 = 0;
  if ( (_WORD)a2 )
    v10 = 0;
  else
    v10 = RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, a2 >> 16, 1LL);
  if ( v10 )
  {
    v13 = RtlpHpLargeAllocSize(a1, a2, a4, a5 + 2);
    goto LABEL_6;
  }
  v11 = RtlpHpSegDescriptorValidate(a1, a2);
  if ( v11 )
  {
    v13 = RtlpHpSegAllocSizeInternal(a1, v11, a2, v12, (__int64)(a5 + 2));
LABEL_6:
    v14 = v13;
    goto LABEL_7;
  }
  v14 = -1LL;
LABEL_7:
  *a5 = v14;
  if ( v14 != -1 )
  {
    v15 = a4 & 0x10000000;
    if ( *((_DWORD *)a5 + 4) )
      v15 = (unsigned int)v15 | 8;
    v19 = RtlpHpCalculateAllocSize(v14, v15);
    if ( v18 )
    {
      v24 = v17 + a2;
      if ( (v16 & v20) != 0 )
        v24 += 16LL;
      v21 = 16 * *(unsigned __int8 *)(((v24 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3);
      v19 += v21;
    }
    else
    {
      v21 = 0;
    }
    v22 = a5[3];
    a5[1] = v19;
    if ( ((a4 & 0xDFFFF0F7 | (v18 != 0 ? 8 : 0)) & v20) != 0 )
      v22 += 16LL;
    if ( (v18 != 0 ? 8 : 0) != 0 )
      v22 = ((v22 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v9 = 1;
    if ( !v22 )
      v22 = 1LL;
    a5[4] = v22 + v21;
  }
  return v9;
}

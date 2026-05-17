/*
 * XREFs of RtlpHpReallocComputeSizes @ 0x18001B074
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18001ADE8 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpCalculateAllocSize @ 0x18001B1D0 (RtlpHpCalculateAllocSize.c)
 *     RtlpHpSegAllocSizeInternal @ 0x18001B208 (RtlpHpSegAllocSizeInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x18001B6F0 (RtlpHpSegDescriptorValidate.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpLargeAllocSize @ 0x18005A418 (RtlpHpLargeAllocSize.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpHpReallocComputeSizes(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r9d
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // edx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // r10
  int v21; // r11d
  __int64 v22; // rax
  unsigned int v23; // edx
  unsigned __int64 v24; // rcx

  memset(a5, 0, 0x28uLL);
  a5[3] = a3;
  v10 = 0;
  if ( (_WORD)a2 )
    v11 = 0;
  else
    v11 = RtlSparseBitmapCtxCheckBitsInternal(v9, a2 >> 16);
  if ( v11 )
  {
    v12 = RtlpHpLargeAllocSize(a1, a2, a4, a5 + 2);
  }
  else
  {
    v13 = RtlpHpSegDescriptorValidate(a1, a2);
    if ( !v13 )
    {
      v15 = -1LL;
      goto LABEL_10;
    }
    v12 = RtlpHpSegAllocSizeInternal(a1, v13, a2, v14, (__int64)(a5 + 2));
  }
  v15 = v12;
LABEL_10:
  *a5 = v15;
  if ( v15 != -1 )
  {
    v16 = a4 & 0x10000000;
    if ( *((_DWORD *)a5 + 4) )
      v16 = (unsigned int)v16 | 8;
    v20 = RtlpHpCalculateAllocSize(v15, v16);
    if ( v19 )
    {
      v22 = v18 + a2;
      if ( (v17 & v21) != 0 )
        v22 += 16LL;
      v23 = 16 * *(unsigned __int8 *)(((v22 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3);
      v20 += v23;
    }
    else
    {
      v23 = 0;
    }
    v24 = a5[3];
    a5[1] = v20;
    if ( ((a4 & 0xDFFFF0F7 | (v19 != 0 ? 8 : 0)) & v21) != 0 )
      v24 += 16LL;
    if ( (v19 != 0 ? 8 : 0) != 0 )
      v24 = ((v24 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    if ( !v24 )
      v24 = 1LL;
    v10 = 1;
    a5[4] = v24 + v23;
  }
  return v10;
}

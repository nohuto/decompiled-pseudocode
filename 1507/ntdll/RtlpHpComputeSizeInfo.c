/*
 * XREFs of RtlpHpComputeSizeInfo @ 0x180037DC0
 * Callers:
 *     RtlpHpReallocComputeSizes @ 0x180037CFC (RtlpHpReallocComputeSizes.c)
 * Callees:
 *     RtlpHpCalculateAllocSize @ 0x180037E3C (RtlpHpCalculateAllocSize.c)
 */

__int64 __fastcall RtlpHpComputeSizeInfo(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v7; // rdx
  int v9; // edx
  __int64 v10; // r8
  unsigned int *v11; // r9
  unsigned int v12; // r10d
  __int64 v13; // r11
  __int64 result; // rax
  __int64 v15; // rcx

  v7 = a5 & 0x10000000;
  if ( a3 )
    v7 = (unsigned int)v7 | 8;
  v10 = RtlpHpCalculateAllocSize(a2, v7);
  if ( a3 )
  {
    v15 = a1 + v13;
    if ( (v9 & 0x10000000) != 0 )
      v15 += 16LL;
    v12 = 16 * *(unsigned __int8 *)(((v15 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3);
    v10 += v12;
  }
  result = v10;
  *v11 = v12;
  return result;
}

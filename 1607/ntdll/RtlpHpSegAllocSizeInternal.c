/*
 * XREFs of RtlpHpSegAllocSizeInternal @ 0x1800445FC
 * Callers:
 *     RtlpHpSegAllocSize @ 0x180029300 (RtlpHpSegAllocSize.c)
 *     RtlpHpReallocComputeSizes @ 0x180043A14 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpSegReportPageRange @ 0x1800FA0D4 (RtlpHpSegReportPageRange.c)
 * Callees:
 *     RtlpHpLfhSubsegmentSizeBlockInternal @ 0x18004455C (RtlpHpLfhSubsegmentSizeBlockInternal.c)
 *     RtlpHpVsChunkSize @ 0x18004BDE8 (RtlpHpVsChunkSize.c)
 */

unsigned __int64 __fastcall RtlpHpSegAllocSizeInternal(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int *a5)
{
  unsigned __int64 v6; // r10
  int v7; // r9d
  __int64 v8; // rcx
  unsigned int v9; // edx
  char v10; // cl
  unsigned __int64 v11; // r8
  int v12; // edx
  unsigned __int64 result; // rax

  v6 = (a2 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
  if ( a3 <= v6 )
  {
    result = (*(unsigned __int8 *)(a2 + 27) << 12) - (unsigned __int64)*(unsigned __int16 *)(a2 + 6);
    if ( a5 )
      *a5 = *(_BYTE *)(a2 + 4) & 1;
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 24) & 1) != 0 )
    {
      v7 = (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v6 + 40) ^ ((unsigned int)v6 >> 12));
      v8 = *(_QWORD *)(a1
                     + 8LL * (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v7 + 15) >> 4]
                     + 480);
      v9 = a3 - (((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v6 + 40) ^ ((unsigned int)v6 >> 12)) >> 16) - v6;
      if ( *(_DWORD *)(v8 + 72) )
      {
        v11 = (v9 * (unsigned __int64)*(unsigned int *)(v8 + 72)) >> *(_BYTE *)(v8 + 76);
        v12 = v9 - v11 * v7;
      }
      else
      {
        v10 = *(_BYTE *)(v8 + 76);
        LODWORD(v11) = v9 >> v10;
        v12 = ((1 << v10) - 1) & v9;
      }
      if ( v12
        || ((*(_QWORD *)(v6 + 8 * ((unsigned __int64)(unsigned int)(2 * v11) >> 6) + 48) >> ((2 * v11) & 0x3F)) & 1) == 0 )
      {
        LODWORD(result) = -1;
      }
      else
      {
        LODWORD(result) = RtlpHpLfhSubsegmentSizeBlockInternal(v6, a3, v11, a5);
      }
    }
    else
    {
      LODWORD(result) = RtlpHpVsChunkSize(a3, a2, a5);
    }
    return (unsigned int)result;
  }
  return result;
}

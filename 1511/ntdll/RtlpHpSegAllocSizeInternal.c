/*
 * XREFs of RtlpHpSegAllocSizeInternal @ 0x18001B208
 * Callers:
 *     RtlpHpSegAllocSize @ 0x180019D50 (RtlpHpSegAllocSize.c)
 *     RtlpHpReallocComputeSizes @ 0x18001B074 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpSegReportPageRange @ 0x1800F2B14 (RtlpHpSegReportPageRange.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x18001D564 (RtlpHpVsChunkSize.c)
 */

unsigned __int64 __fastcall RtlpHpSegAllocSizeInternal(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int *a5)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // ebx
  int v8; // r9d
  __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned __int64 v11; // r8
  int v12; // edx
  char v13; // cl
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  unsigned int v16; // edx
  int v17; // edx
  unsigned __int64 result; // rax

  v6 = (a2 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
  if ( a3 <= v6 )
  {
    result = (*(unsigned __int8 *)(a2 + 27) << 12) - (unsigned __int64)*(unsigned __int16 *)(a2 + 6);
    if ( a5 )
      *a5 = *(_BYTE *)(a2 + 4) & 1;
  }
  else if ( (*(_BYTE *)(a2 + 24) & 1) != 0 )
  {
    v7 = (unsigned int)v6 >> 12;
    v8 = (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v6 + 40) ^ ((unsigned int)v6 >> 12));
    v9 = *(_QWORD *)(a1 + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v8 + 15) >> 4] + 464);
    v10 = a3 - (((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v6 + 40) ^ ((unsigned int)v6 >> 12)) >> 16) - v6;
    if ( *(_DWORD *)(v9 + 72) )
    {
      v11 = (v10 * (unsigned __int64)*(unsigned int *)(v9 + 72)) >> *(_BYTE *)(v9 + 76);
      v12 = v10 - v11 * v8;
    }
    else
    {
      v13 = *(_BYTE *)(v9 + 76);
      LODWORD(v11) = v10 >> v13;
      v12 = ((1 << v13) - 1) & v10;
    }
    if ( v12 )
      return (unsigned int)-1;
    v15 = 2 * v11;
    if ( ((*(_QWORD *)(v6 + 8 * ((unsigned __int64)(unsigned int)(2 * v11) >> 6) + 48) >> ((2 * v11) & 0x3F)) & 1) == 0 )
    {
      return (unsigned int)-1;
    }
    else
    {
      v14 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v7 ^ *(unsigned __int16 *)(v6 + 40);
      if ( ((*(_QWORD *)(v6 + 8 * ((unsigned __int64)v15 >> 6) + 48) >> (v15 & 0x3F)) & 2) != 0 )
      {
        v16 = *(unsigned __int16 *)(((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v7 ^ (unsigned __int64)*(unsigned __int16 *)(v6 + 40))
                                  + a3
                                  - 2);
        if ( (v16 & 0x8000u) == 0 )
          v14 -= v16 & 0x3FFF;
        else
          --v14;
        v17 = (v16 >> 14) & 1;
      }
      else
      {
        v17 = 0;
      }
      if ( a5 )
        *a5 = v17;
    }
    return v14;
  }
  else
  {
    return (unsigned int)RtlpHpVsChunkSize(a3, a2, a5);
  }
  return result;
}

/*
 * XREFs of RtlpHpSizeHeap @ 0x180046360
 * Callers:
 *     RtlSizeHeap @ 0x180046170 (RtlSizeHeap.c)
 *     RtlpHpFreeHeap @ 0x180047A60 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlValidateHeap @ 0x180076850 (RtlValidateHeap.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x18004BDE8 (RtlpHpVsChunkSize.c)
 *     RtlpHpLargeAllocSize @ 0x18004F564 (RtlpHpLargeAllocSize.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlCompareMemory @ 0x1800AA6B0 (RtlCompareMemory.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1800F9FB4 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSizeHeap(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v4; // esi
  int v6; // ecx
  unsigned __int64 DescriptorValidateSafe; // rax
  unsigned __int64 v8; // r8
  unsigned int v9; // r11d
  int v10; // eax
  int v11; // r10d
  __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // rax
  char v15; // cl
  unsigned __int64 v16; // r9
  int v17; // edx
  unsigned int v18; // r10d
  unsigned int v19; // r9d
  __int16 v20; // ax
  unsigned __int64 v21; // rdi

  v4 = *(_DWORD *)(a1 + 20) | a3;
  v6 = *(_DWORD *)(a1 + 40);
  if ( v6 && v6 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v4 |= 1u;
  if ( a2 && (a2 & 0xF) == 0 )
  {
    if ( !(_WORD)a2 && (unsigned int)RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, a2 >> 16, 1LL) )
    {
      v21 = RtlpHpLargeAllocSize(a1, a2, v4, 0LL);
      goto LABEL_25;
    }
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(a1, a2);
    }
    else if ( (a1 ^ RtlpHeapKey ^ *(_QWORD *)((a2 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((a2 & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
    {
      DescriptorValidateSafe = (a2 & 0xFFFFFFFFFFF00000uLL)
                             + 32LL * (unsigned int)((a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 12);
    }
    else
    {
      DescriptorValidateSafe = 0LL;
    }
    if ( DescriptorValidateSafe && (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) != 0 )
    {
      if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 8) != 0 )
      {
        if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) == 0
          && a2 != (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
                 + ((unsigned int)((__int64)(DescriptorValidateSafe - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12) )
        {
          return -1LL;
        }
      }
      else
      {
        DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 27);
        if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) == 0
          || (*(_BYTE *)(DescriptorValidateSafe + 24) & 8) == 0
          || (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) == 0 )
        {
          return -1LL;
        }
      }
      if ( DescriptorValidateSafe )
      {
        v8 = (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
           + ((unsigned int)((__int64)(DescriptorValidateSafe - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
        if ( a2 <= v8 )
        {
          v21 = (*(unsigned __int8 *)(DescriptorValidateSafe + 27) << 12)
              - (unsigned __int64)*(unsigned __int16 *)(DescriptorValidateSafe + 6);
        }
        else if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 1) != 0 )
        {
          v9 = (unsigned int)v8 >> 12;
          v10 = RtlpLFHKey ^ ((unsigned int)v8 >> 12) ^ *(_DWORD *)((DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
                                                                  + ((unsigned int)((__int64)(DescriptorValidateSafe
                                                                                            - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                                                  + 0x28);
          v11 = (unsigned __int16)v10;
          v12 = *(_QWORD *)(a1
                          + 8LL
                          * (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v10
                                                                                    + 15) >> 4]
                          + 480);
          v13 = a2 - HIWORD(v10) - v8;
          v14 = *(unsigned int *)(v12 + 72);
          if ( (_DWORD)v14 )
          {
            v16 = ((unsigned __int64)v13 * v14) >> *(_BYTE *)(v12 + 76);
            v17 = v13 - v16 * v11;
          }
          else
          {
            v15 = *(_BYTE *)(v12 + 76);
            LODWORD(v16) = v13 >> v15;
            v17 = ((1 << v15) - 1) & v13;
          }
          if ( v17 )
          {
            v19 = -1;
          }
          else
          {
            v18 = 2 * v16;
            if ( ((*(_QWORD *)(v8 + 8 * ((unsigned __int64)(unsigned int)(2 * v16) >> 6) + 48) >> ((2 * v16) & 0x3F)) & 1) != 0 )
            {
              v19 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v9 ^ *(unsigned __int16 *)(v8 + 40);
              if ( ((*(_QWORD *)(v8 + 8 * ((unsigned __int64)v18 >> 6) + 48) >> (v18 & 0x3F)) & 2) != 0 )
              {
                v20 = *(_WORD *)(((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v9 ^ (unsigned __int64)*(unsigned __int16 *)(v8 + 40))
                               + a2
                               - 2);
                if ( v20 < 0 )
                  --v19;
                else
                  v19 -= v20 & 0x3FFF;
              }
            }
            else
            {
              v19 = -1;
            }
          }
          v21 = v19;
        }
        else
        {
          v21 = (unsigned int)RtlpHpVsChunkSize(a2, DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL, 0LL);
        }
LABEL_25:
        if ( v21 == -1LL
          || (v4 & 0x10000000) == 0
          || RtlCompareMemory((const void *)(v21 + a2), &CheckHeapFillPattern, 0x10uLL) == 16 )
        {
          return v21;
        }
      }
    }
    return -1LL;
  }
  return -1LL;
}

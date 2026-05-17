/*
 * XREFs of RtlpHpSizeHeap @ 0x18001BDD0
 * Callers:
 *     RtlpHpFreeHeap @ 0x18001ABF8 (RtlpHpFreeHeap.c)
 *     RtlSizeHeap @ 0x18001BA80 (RtlSizeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlValidateHeap @ 0x1800756A0 (RtlValidateHeap.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x18001D564 (RtlpHpVsChunkSize.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpLargeAllocSize @ 0x18005A418 (RtlpHpLargeAllocSize.c)
 *     RtlCompareMemory @ 0x1800A9270 (RtlCompareMemory.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1800F29F4 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSizeHeap(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v4; // esi
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 DescriptorValidateSafe; // rdx
  unsigned __int64 v10; // r9
  unsigned int v11; // r11d
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned __int64 v15; // r8
  int v16; // edx
  char v17; // cl
  unsigned int v18; // r10d
  unsigned int v19; // r8d
  __int16 v20; // ax
  int v21; // [rsp+40h] [rbp+18h]

  v4 = *(_DWORD *)(a1 + 20) | a3;
  v6 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v6 && (_DWORD)v6 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v4 |= 1u;
  if ( !a2 || (a2 & 0xF) != 0 )
    return -1LL;
  if ( (_WORD)a2 || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(v6, a2 >> 16) )
  {
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
    if ( !DescriptorValidateSafe || (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) == 0 )
      return -1LL;
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
    if ( !DescriptorValidateSafe )
      return -1LL;
    v10 = (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
        + ((unsigned int)((__int64)(DescriptorValidateSafe - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
    if ( a2 <= v10 )
    {
      v7 = (*(unsigned __int8 *)(DescriptorValidateSafe + 27) << 12)
         - (unsigned __int64)*(unsigned __int16 *)(DescriptorValidateSafe + 6);
      goto LABEL_40;
    }
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 1) == 0 )
    {
      v7 = (unsigned int)RtlpHpVsChunkSize(a2, DescriptorValidateSafe, 0LL);
      goto LABEL_40;
    }
    v11 = (unsigned int)v10 >> 12;
    v21 = RtlpLFHKey ^ ((unsigned int)v10 >> 12) ^ *(_DWORD *)((DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
                                                             + ((unsigned int)((__int64)(DescriptorValidateSafe
                                                                                       - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                                             + 0x28);
    v12 = *(_QWORD *)(a1
                    + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v21 + 15) >> 4]
                    + 464);
    v13 = a2 - HIWORD(v21) - v10;
    v14 = *(_DWORD *)(v12 + 72);
    if ( v14 )
    {
      v15 = (v13 * (unsigned __int64)v14) >> *(_BYTE *)(v12 + 76);
      v16 = v13 - v15 * (unsigned __int16)v21;
    }
    else
    {
      v17 = *(_BYTE *)(v12 + 76);
      LODWORD(v15) = v13 >> v17;
      v16 = ((1 << v17) - 1) & v13;
    }
    if ( v16 )
    {
      v7 = 0xFFFFFFFFLL;
    }
    else
    {
      v18 = 2 * v15;
      if ( ((*(_QWORD *)(v10 + 8 * ((unsigned __int64)(unsigned int)(2 * v15) >> 6) + 48) >> ((2 * v15) & 0x3F)) & 1) != 0 )
      {
        v19 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v11 ^ *(unsigned __int16 *)(v10 + 40);
        if ( ((*(_QWORD *)(v10 + 8 * ((unsigned __int64)v18 >> 6) + 48) >> (v18 & 0x3F)) & 2) != 0 )
        {
          v20 = *(_WORD *)(((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v11 ^ (unsigned __int64)*(unsigned __int16 *)(v10 + 40))
                         + a2
                         - 2);
          if ( v20 < 0 )
          {
            v7 = v19 - 1;
            goto LABEL_40;
          }
          v19 -= v20 & 0x3FFF;
        }
        v7 = v19;
        goto LABEL_40;
      }
      v7 = 0xFFFFFFFFLL;
    }
  }
  else
  {
    v7 = RtlpHpLargeAllocSize(a1, a2, v4, 0LL);
  }
LABEL_40:
  if ( v7 != -1LL
    && (v4 & 0x10000000) != 0
    && RtlCompareMemory((const void *)(v7 + a2), &CheckHeapFillPattern, 0x10uLL) != 16 )
  {
    return -1LL;
  }
  return v7;
}

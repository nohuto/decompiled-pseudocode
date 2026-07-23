/*
 * XREFs of HvpGenerateLogEntry @ 0x14044D908
 * Callers:
 *     HvWriteLogFile @ 0x14044C3A0 (HvWriteLogFile.c)
 *     HvStoreModifiedData @ 0x14044D040 (HvStoreModifiedData.c)
 * Callees:
 *     SymCryptMarvin32 @ 0x14001B190 (SymCryptMarvin32.c)
 *     RtlNumberOfSetBits @ 0x1400EF6A0 (RtlNumberOfSetBits.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpLogDirtyVectorUse @ 0x14044DBE0 (CmpLogDirtyVectorUse.c)
 *     HvpFindNextDirtyBlock @ 0x1404A0C4C (HvpFindNextDirtyBlock.c)
 *     HvpCountSetRangesInVector @ 0x1404A21F4 (HvpCountSetRangesInVector.c)
 *     HvpGenerateLogMetadata @ 0x1404A2778 (HvpGenerateLogMetadata.c)
 *     HvpHeaderCheckSum @ 0x1404AFFCC (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvpGenerateLogEntry(ULONG_PTR BugCheckParameter2, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // edi
  int v5; // ebx
  char v6; // r15
  _RTL_BITMAP *v7; // r12
  unsigned int v8; // esi
  ULONG v9; // eax
  unsigned int v10; // r13d
  _DWORD *PoolWithTag; // rbp
  unsigned int v12; // ebx
  unsigned __int8 *v13; // rsi
  int v14; // r15d
  __int64 v15; // rax
  unsigned int v16; // r15d
  ULONG v17; // ebx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // r9
  _OWORD *v23; // rax
  __int64 v24; // rdx
  _OWORD *v25; // rcx
  __int128 v26; // xmm1
  __int64 v27[11]; // [rsp+40h] [rbp-58h] BYREF
  size_t Size; // [rsp+A0h] [rbp+8h] BYREF
  _QWORD *v29; // [rsp+A8h] [rbp+10h]
  unsigned int *v30; // [rsp+B0h] [rbp+18h]
  int v31; // [rsp+B8h] [rbp+20h]

  v30 = a3;
  v29 = a2;
  v3 = 0;
  v5 = 0;
  v6 = 0;
  if ( !*(_DWORD *)(BugCheckParameter2 + 160) )
  {
    v6 = 1;
    v5 = 512;
  }
  v7 = (_RTL_BITMAP *)(BugCheckParameter2 + 72);
  v8 = HvpCountSetRangesInVector((PRTL_BITMAP)(BugCheckParameter2 + 72));
  LODWORD(Size) = v8;
  v9 = RtlNumberOfSetBits(v7);
  CmpLogDirtyVectorUse(BugCheckParameter2, 1LL, v8, v9);
  v10 = (v5 + 8 * (v8 + (*(_DWORD *)(BugCheckParameter2 + 88) << 6)) + 4135) & 0xFFFFF000;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, v10, 0x6F494D43u);
  if ( PoolWithTag )
  {
    v12 = 0;
    if ( v6 )
    {
      v23 = *(_OWORD **)(BugCheckParameter2 + 64);
      v24 = 4LL;
      v25 = PoolWithTag;
      do
      {
        *v25 = *v23;
        v25[1] = v23[1];
        v25[2] = v23[2];
        v25[3] = v23[3];
        v25[4] = v23[4];
        v25[5] = v23[5];
        v25[6] = v23[6];
        v25 += 8;
        v26 = v23[7];
        v23 += 8;
        *(v25 - 1) = v26;
        --v24;
      }
      while ( v24 );
      PoolWithTag[1] = *(_DWORD *)(BugCheckParameter2 + 152);
      PoolWithTag[2] = *(_DWORD *)(BugCheckParameter2 + 152);
      PoolWithTag[7] = 6;
      PoolWithTag[10] = *(_DWORD *)(BugCheckParameter2 + 1400);
      PoolWithTag[11] = 1;
      PoolWithTag[127] = HvpHeaderCheckSum(PoolWithTag, 0LL, 128LL);
      v12 = 128;
    }
    v13 = (unsigned __int8 *)&PoolWithTag[v12];
    memset(v13, 0, 0x28uLL);
    *(_DWORD *)v13 = 1162638920;
    *((_DWORD *)v13 + 1) = v10;
    if ( v6 )
      *((_DWORD *)v13 + 1) = v10 - 512;
    v14 = Size;
    *((_DWORD *)v13 + 3) = *(_DWORD *)(BugCheckParameter2 + 152);
    *((_DWORD *)v13 + 2) = 0;
    v15 = *(_QWORD *)(BugCheckParameter2 + 64);
    LODWORD(Size) = v14;
    *((_DWORD *)v13 + 2) = (*(_BYTE *)(v15 + 144) & 1) != 0;
    *((_DWORD *)v13 + 4) = *(_DWORD *)(BugCheckParameter2 + 1400);
    *((_DWORD *)v13 + 5) = v14;
    HvpGenerateLogMetadata(v7);
    v16 = v12 * 4 + 40 + 8 * v14;
    v31 = 0;
    while ( v16 < v10 && (unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&Size, (__int64)v27, 0) )
    {
      memmove((char *)PoolWithTag + v16, (const void *)v27[1], (unsigned int)Size);
      v16 += Size;
    }
    v17 = RtlNumberOfSetBits(v7);
    v18 = HvpCountSetRangesInVector(v7);
    CmpLogDirtyVectorUse(BugCheckParameter2, 2LL, v18, v17);
    if ( v16 < v10 )
      memset((char *)PoolWithTag + v16, 0, v10 - v16);
    SymCryptMarvin32(v19, v13 + 40, *((unsigned int *)v13 + 1) - 40LL, (_DWORD *)v13 + 6);
    SymCryptMarvin32(v20, v13, 0x20uLL, (_DWORD *)v13 + 8);
    v21 = v29;
    *v30 = v10;
    *v21 = PoolWithTag;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}

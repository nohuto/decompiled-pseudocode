/*
 * XREFs of RtlpHpVsChunkCoalesce @ 0x180027E80
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x180028560 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegFree @ 0x18002B710 (RtlpHpSegFree.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1800280B0 (RtlRbRemoveNode.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1800663E8 (RtlpHpVsFreeChunkRemove.c)
 */

unsigned __int64 __fastcall RtlpHpVsChunkCoalesce(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int *a4)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rsi
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned int v9; // r14d
  unsigned int v10; // ebp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // rdx
  int v19; // r9d
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v24; // [rsp+7Ch] [rbp+14h]
  unsigned __int64 v25; // [rsp+80h] [rbp+18h]

  v4 = a1;
  v5 = a3;
  v7 = RtlpLFHKey;
  v8 = a3 ^ RtlpLFHKey ^ *(_QWORD *)a3;
  v9 = WORD1(v8);
  v25 = HIDWORD(RtlpLFHKey);
  v10 = WORD1(v8);
  *(_BYTE *)(a3 + 6) = BYTE6(RtlpLFHKey) ^ BYTE6(a3) ^ ((v24 & 0xFF00FFFF) >> 16);
  if ( WORD2(v8) )
  {
    v11 = a3 - 16LL * WORD2(v8);
    v12 = v11 ^ v7 ^ *(_QWORD *)v11;
    if ( (v12 & 0xFF000000000000LL) == 0 )
    {
      RtlpHpVsFreeChunkRemove(a1, a2, a3 - 16LL * WORD2(v8));
      v4 = a1;
      v5 = v11;
      v10 += WORD1(v12);
    }
  }
  v13 = v5 + 16LL * v10;
  if ( v13 < a2 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
  {
    v14 = v13 ^ v7 ^ *(_QWORD *)v13;
    if ( (v14 & 0xFF000000000000LL) == 0 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(v4 + 8), (PRTL_BALANCED_NODE)(v13 + 8));
      v17 = v7 ^ *(_DWORD *)v13 ^ v13;
      v18 = 16 * HIWORD(v17);
      v19 = (((v13 & 0xFFF) + v18 + 4095) >> 12) - ((unsigned __int64)(v18 + 4095) >> 12);
      v20 = (v13 + v18 - a2) & 0xFFFFF000;
      v21 = (v13 - a2 + 4127) & 0xFFFFF000;
      if ( v21 < v20 )
        v22 = v20 - v21;
      else
        v22 = 0;
      *(_QWORD *)(a1 + 48) -= v19 + (v22 >> 12) - (unsigned __int16)v17;
      v10 += WORD1(v14);
    }
  }
  if ( v9 != v10 )
  {
    v16 = v5 + 16LL * v10;
    *(_WORD *)(v5 + 2) = WORD1(RtlpLFHKey) ^ v10 ^ WORD1(v5);
    if ( v16 < a2 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
      *(_WORD *)(v16 + 4) = v25 ^ WORD2(v16) ^ v10;
  }
  *a4 = v10;
  return v5;
}

/*
 * XREFs of RtlpHpVsChunkCoalesce @ 0x18001EE20
 * Callers:
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpHpVsChunkFree @ 0x180050C3C (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18002DBF0 (RtlRbRemoveNode.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1800762F8 (RtlpHpVsFreeChunkRemove.c)
 */

unsigned __int64 __fastcall RtlpHpVsChunkCoalesce(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int *a4)
{
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v9; // r12d
  unsigned int v10; // edi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rbx
  unsigned int v16; // r8d
  __int64 v17; // rdx
  int v18; // r9d
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned __int64 v22; // rdx
  int v24; // [rsp+6Ch] [rbp+14h]
  unsigned __int64 v25; // [rsp+70h] [rbp+18h]

  v5 = RtlpLFHKey;
  v6 = a3;
  v7 = a3 ^ RtlpLFHKey ^ *(_QWORD *)a3;
  v9 = WORD1(v7);
  v10 = WORD1(v7);
  v25 = HIDWORD(RtlpLFHKey);
  *(_BYTE *)(a3 + 6) = BYTE6(RtlpLFHKey) ^ BYTE6(a3) ^ ((v24 & 0xFF00FFFF) >> 16);
  if ( WORD2(v7) )
  {
    v11 = a3 - 16LL * WORD2(v7);
    v12 = v11 ^ v5 ^ *(_QWORD *)v11;
    if ( (v12 & 0xFF000000000000LL) == 0 )
    {
      RtlpHpVsFreeChunkRemove(a1, a2, a3 - 16LL * WORD2(v7));
      v6 = v11;
      v10 += WORD1(v12);
    }
  }
  v13 = a2 + 48;
  v14 = v6 + 16LL * v10;
  if ( v14 < a2 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
  {
    v15 = v14 ^ v5 ^ *(_QWORD *)v14;
    if ( (v15 & 0xFF000000000000LL) == 0 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 8), (PRTL_BALANCED_NODE)(v14 + 8));
      v16 = v5 ^ *(_DWORD *)v14 ^ v14;
      v17 = 16 * HIWORD(v16);
      v18 = (((v14 & 0xFFF) + v17 + 4095) >> 12) - ((unsigned __int64)(v17 + 4095) >> 12);
      v19 = (v14 + v17 - a2) & 0xFFFFF000;
      v20 = (v14 - a2 + 4127) & 0xFFFFF000;
      if ( v20 < v19 )
        v21 = v19 - v20;
      else
        v21 = 0;
      v13 = a2 + 48;
      *(_QWORD *)(a1 + 48) -= v18 + (v21 >> 12) - (unsigned __int16)v16;
      v10 += WORD1(v15);
    }
  }
  if ( v9 != v10 )
  {
    v22 = v6 + 16LL * v10;
    *(_WORD *)(v6 + 2) = WORD1(RtlpLFHKey) ^ v10 ^ WORD1(v6);
    if ( v22 < v13 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
      *(_WORD *)(v22 + 4) = v25 ^ WORD2(v22) ^ v10;
  }
  *a4 = v10;
  return v6;
}

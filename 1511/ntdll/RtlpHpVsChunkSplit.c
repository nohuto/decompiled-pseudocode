/*
 * XREFs of RtlpHpVsChunkSplit @ 0x18002A520
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x18002B090 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18002DBF0 (RtlRbRemoveNode.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18002FC60 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlRbInsertNodeEx @ 0x180031350 (RtlRbInsertNodeEx.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180050E64 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1800762F8 (RtlpHpVsFreeChunkRemove.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v6; // r12
  unsigned int v7; // ebx
  __int64 v9; // r14
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  unsigned __int64 v12; // r13
  __int64 v13; // rdx
  int v14; // r10d
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // r9d
  unsigned int v20; // ebx
  int v21; // edx
  int v22; // eax
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  int v27; // edx
  unsigned __int64 v28; // rdx
  __int64 v29; // r9
  unsigned int v30; // esi
  unsigned int v31; // ecx
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // r8
  __int64 v35; // rbx
  unsigned __int64 v36; // rdx
  unsigned __int16 v37; // r10
  unsigned int v38; // r9d
  unsigned int v39; // edx
  unsigned int v40; // edx
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  unsigned int v46; // edx
  unsigned int v47; // edx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  _QWORD *v50; // r10
  _QWORD *v51; // rcx
  int v53; // [rsp+30h] [rbp-28h]
  __int64 v54; // [rsp+38h] [rbp-20h]
  __int64 v55; // [rsp+40h] [rbp-18h]
  __int64 v56; // [rsp+48h] [rbp-10h]
  __int64 v58; // [rsp+A8h] [rbp+50h]
  unsigned int i; // [rsp+A8h] [rbp+50h]
  int v60; // [rsp+A8h] [rbp+50h]
  int v61; // [rsp+ACh] [rbp+54h]
  unsigned int v62; // [rsp+B0h] [rbp+58h]

  v6 = a1;
  v7 = WORD1(RtlpLFHKey) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode(a1 + 8, a3 + 8);
  v9 = RtlpLFHKey;
  v10 = RtlpLFHKey ^ *(_DWORD *)a3 ^ a3;
  v11 = a3 - a2;
  v12 = 0LL;
  v13 = 16 * HIWORD(v10);
  v14 = ((v13 + (unsigned __int64)(a3 & 0xFFF) + 4095) >> 12) - ((unsigned __int64)(v13 + 4095) >> 12);
  v15 = (a3 + v13 - a2) & 0xFFFFF000;
  v16 = (a3 - a2 + 4127) & 0xFFFFF000;
  if ( v16 >= v15 )
    v17 = 0;
  else
    v17 = v15 - v16;
  v18 = (unsigned __int16)v10;
  v19 = a4;
  v20 = v7 - a4;
  *(_QWORD *)(v6 + 48) -= v14 + (v17 >> 12) - v18;
  if ( 16 * v20 < 0x20 )
  {
    v19 = v20 + a4;
    v20 = 0;
    a4 = v19;
  }
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(v9) ^ ((v61 & 0xFF00FFFF | 0x10000) >> 16);
  v21 = (unsigned __int8)(v9 ^ a3 ^ (v11 >> 12));
  v22 = 16 * v19;
  *(_DWORD *)(a3 + 8) = v21;
  if ( v20 )
    v22 += 32;
  v23 = (-1LL << (v11 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                         - (unsigned __int8)((unsigned __int64)(v11 + v22 - 1) >> 12)));
  v24 = (*(_QWORD *)(a2 + 16) ^ v23) & v23;
  if ( v24 )
  {
    *(_DWORD *)(a3 + 8) = v21 | 0x200;
    if ( (a5 & 1) == 0 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)v6);
    v25 = ((v24 - ((v24 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v24 - ((v24 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    if ( (int)RtlpHpVsSubsegmentCommitPages(
                v6,
                a2,
                v24,
                (unsigned int)((0x101010101010101LL * ((v25 + (v25 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                1) < 0 )
    {
      v20 += a4;
      a4 = 0;
    }
    if ( (a5 & 1) == 0 )
      RtlAcquireSRWLockExclusive(v6);
    *(_DWORD *)(a3 + 8) &= ~0x200u;
    v9 = RtlpLFHKey;
    v19 = a4;
  }
  *(_WORD *)(a3 + 2) = WORD1(RtlpLFHKey) ^ v19 ^ WORD1(a3);
  if ( !v20 )
    return v19;
  v26 = 16LL * v19 + a3;
  if ( v19 )
    v27 = (unsigned __int16)v19;
  else
    v27 = (unsigned __int16)(WORD2(v26) ^ WORD2(v9) ^ HIDWORD(*(_QWORD *)v26));
  HIDWORD(v58) = v27 & 0xFF00FFFF | 0x10000;
  LODWORD(v58) = v20 << 16;
  *(_QWORD *)v26 = v26 ^ v58 ^ v9;
  v28 = v26 + 16LL * v20;
  *(_DWORD *)(v26 + 8) = (unsigned __int8)(v9 ^ v26 ^ ((unsigned int)(v26 - a2) >> 12));
  if ( v28 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    *(_WORD *)(v28 + 4) = WORD2(v28) ^ WORD2(v9) ^ v20;
  for ( i = 0; ; i = v30 )
  {
    v29 = a2 + 48;
    HIDWORD(v54) &= 0xFF00FFFF;
    v62 = ((unsigned int)v9 ^ (unsigned int)v26 ^ *(_DWORD *)v26) >> 16;
    v30 = v62;
    v31 = (unsigned __int16)((v9 ^ v26 ^ *(_QWORD *)v26) >> 32);
    v54 ^= v9 ^ v26;
    *(_BYTE *)(v26 + 6) = BYTE6(v54);
    if ( v31 )
    {
      v32 = v26 - 16LL * v31;
      v33 = *(_QWORD *)v32 ^ v9 ^ v32;
      if ( (v33 & 0xFF000000000000LL) == 0 )
      {
        RtlpHpVsFreeChunkRemove(a1, a2, v32);
        v29 = a2 + 48;
        v30 = WORD1(v33) + v62;
        v26 = v32;
      }
      v6 = a1;
    }
    v34 = v26 + 16LL * v30;
    if ( v34 < v29 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
    {
      v35 = v9 ^ v34 ^ *(_QWORD *)v34;
      if ( (v35 & 0xFF000000000000LL) == 0 )
      {
        RtlpHpVsFreeChunkRemove(v6, a2, v34);
        v29 = a2 + 48;
        v30 += WORD1(v35);
      }
    }
    if ( v62 != v30 )
    {
      v36 = v26 + 16LL * v30;
      v53 = v9 ^ v26 ^ ((v30 << 16) | (unsigned __int16)v53);
      *(_WORD *)(v26 + 2) = HIWORD(v53);
      if ( v36 < v29 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
      {
        HIDWORD(v55) ^= (unsigned __int16)(v30 ^ WORD2(v55));
        v55 ^= v9 ^ v36;
        *(_WORD *)(v36 + 4) = WORD2(v55);
      }
    }
    if ( v30 == *(unsigned __int16 *)(a2 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(v6, a2);
      return a4;
    }
    if ( v30 <= i )
      break;
    v37 = WORD1(RtlpLFHKey);
    v38 = (v26 - a2 + 4127) & 0xFFFFF000;
    v39 = (v26 + 16 * (WORD1(RtlpLFHKey) ^ WORD1(v26) ^ *(unsigned __int16 *)(v26 + 2)) - a2) & 0xFFFFF000;
    if ( v38 >= v39 )
    {
      v40 = 0;
      v41 = 0LL;
    }
    else
    {
      v40 = v39 - v38;
      v41 = *(_QWORD *)(a2 + 16) & (-1LL << (v38 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v38 + v40 - 1) >> 12)));
    }
    if ( (v40 & 0xFFFFF000) == 0 || !v41 )
      goto LABEL_49;
    v42 = *(_QWORD *)(v6 + 40) >> 7;
    v43 = (0x101010101010101LL
         * ((((v41 - ((v41 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v41 - ((v41 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
           + ((((v41 - ((v41 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v41 - ((v41 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    v60 = v43;
    if ( v42 <= 8 )
      v42 = 8LL;
    if ( *(_QWORD *)(v6 + 48) + (unsigned __int64)(unsigned int)v43 <= v42 )
      goto LABEL_49;
    HIDWORD(v56) = HIDWORD(v56) & 0xFF00FFFF | 0x10000;
    v56 ^= v9 ^ v26;
    *(_BYTE *)(v26 + 6) = BYTE6(v56);
    *(_DWORD *)(v26 + 8) = (unsigned __int8)(v9 ^ v26 ^ ((unsigned int)(v26 - a2) >> 12)) | 0x200;
    if ( (a5 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)v6);
      LODWORD(v43) = v60;
    }
    RtlpHpVsSubsegmentCommitPages(v6, a2, v41, v43, 0);
    if ( (a5 & 1) == 0 )
      RtlAcquireSRWLockExclusive(v6);
    *(_DWORD *)(v26 + 8) &= ~0x200u;
    v9 = RtlpLFHKey;
  }
  v37 = WORD1(RtlpLFHKey);
LABEL_49:
  v44 = ((_DWORD)v26 - (_DWORD)a2 + 4127) & 0xFFFFF000;
  v45 = 16 * (v37 ^ (((unsigned int)v26 ^ *(_DWORD *)v26) >> 16));
  v46 = (v26 + 16 * (v37 ^ (((unsigned int)v26 ^ *(_DWORD *)v26) >> 16)) - a2) & 0xFFFFF000;
  if ( (unsigned int)v44 >= v46 )
  {
    v47 = 0;
  }
  else
  {
    v47 = v46 - v44;
    v48 = (unsigned int)v44 + v47 - 1;
    v44 = (unsigned int)v44 >> 12;
    v12 = *(_QWORD *)(a2 + 16) & (-1LL << v44) & (0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)(v48 >> 12)));
  }
  LOBYTE(v44) = 0;
  v49 = v12 - ((v12 >> 1) & 0x5555555555555555LL);
  *(_QWORD *)(v6 + 48) += (unsigned int)((0x101010101010101LL
                                        * (((v49 & 0x3333333333333333LL)
                                          + ((v49 >> 2) & 0x3333333333333333LL)
                                          + (((v49 & 0x3333333333333333LL) + ((v49 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
  *(_WORD *)v26 = v9 ^ v26 ^ (((v45 + (v26 & 0xFFF) + 4095) >> 12)
                            - ((unsigned __int64)(v45 + 4095) >> 12)
                            + (v47 >> 12)
                            - ((0x101010101010101LL
                              * (((v49 & 0x3333333333333333LL)
                                + ((v49 >> 2) & 0x3333333333333333LL)
                                + (((v49 & 0x3333333333333333LL) + ((v49 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
  v50 = *(_QWORD **)(v6 + 8);
  if ( v50 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)v9 ^ (unsigned int)v26 ^ *(_DWORD *)v26) < ((unsigned int)v9 ^ ((_DWORD)v50 - 8) ^ *((_DWORD *)v50 - 2)) )
      {
        v51 = (_QWORD *)*v50;
        if ( !*v50 )
        {
          LOBYTE(v44) = 0;
          break;
        }
      }
      else
      {
        v51 = (_QWORD *)v50[1];
        if ( !v51 )
        {
          LOBYTE(v44) = 1;
          break;
        }
      }
      v50 = v51;
    }
  }
  RtlRbInsertNodeEx(v6 + 8, v50, v44, v26 + 8);
  return a4;
}

/*
 * XREFs of RtlpHpVsChunkSplit @ 0x180028560
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x180028D80 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpVsSubsegmentCleanup @ 0x180008AA0 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlRbInsertNodeEx @ 0x180027A50 (RtlRbInsertNodeEx.c)
 *     RtlpHpVsChunkCoalesce @ 0x180027E80 (RtlpHpVsChunkCoalesce.c)
 *     RtlRbRemoveNode @ 0x1800280B0 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x180036DB0 (RtlpHpVsSubsegmentCommitPages.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(PRTL_SRWLOCK SRWLock, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  unsigned int v7; // esi
  __int64 v10; // rdi
  unsigned __int64 v11; // r15
  unsigned int v12; // r8d
  __int64 v13; // rax
  unsigned int v14; // edx
  int v15; // r9d
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // esi
  int v20; // r8d
  int v21; // eax
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rbp
  unsigned __int16 v24; // bp
  unsigned __int64 v25; // rbx
  int v26; // edx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned int v29; // r8d
  unsigned int v30; // edx
  unsigned int v31; // edx
  unsigned __int64 v32; // rbp
  unsigned int v33; // r8d
  __int64 v34; // rdx
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // rax
  unsigned int v37; // edx
  __int16 v38; // r9
  unsigned int v39; // edx
  BOOLEAN v40; // r8
  unsigned __int64 v41; // rax
  _RTL_BALANCED_NODE *Value; // rdx
  _RTL_BALANCED_NODE *v43; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  int v47; // r9d
  unsigned __int64 v48; // rax
  char v49; // di
  int v50; // edi
  unsigned int v51; // eax
  char v52; // di
  int v53; // edi
  __int64 v54; // [rsp+70h] [rbp+8h]
  unsigned int i; // [rsp+70h] [rbp+8h]
  int v56; // [rsp+70h] [rbp+8h]
  int v57; // [rsp+74h] [rbp+Ch]
  unsigned __int64 v58; // [rsp+78h] [rbp+10h]
  unsigned int v59; // [rsp+88h] [rbp+20h] BYREF

  v7 = WORD1(RtlpLFHKey) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode((PRTL_RB_TREE)&SRWLock[1], (PRTL_BALANCED_NODE)(a3 + 8));
  v10 = RtlpLFHKey;
  v11 = 0LL;
  v12 = RtlpLFHKey ^ *(_DWORD *)a3 ^ a3;
  v13 = 16 * HIWORD(v12);
  v14 = a3 - a2;
  v15 = ((v13 + (unsigned __int64)(a3 & 0xFFF) + 4095) >> 12) - ((unsigned __int64)(v13 + 4095) >> 12);
  v16 = (a3 + v13 - a2) & 0xFFFFF000;
  v17 = (a3 - a2 + 4127) & 0xFFFFF000;
  if ( v17 < v16 )
    v18 = v16 - v17;
  else
    v18 = 0;
  v19 = v7 - a4;
  SRWLock[6].Value -= v15 + (v18 >> 12) - (unsigned __int16)v12;
  if ( 16 * v19 < 0x20 )
  {
    a4 += v19;
    v19 = 0;
  }
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(v10) ^ ((v57 & 0xFF00FFFF | 0x10000) >> 16);
  v20 = (unsigned __int8)(v10 ^ a3 ^ (v14 >> 12));
  v21 = 16 * a4;
  *(_DWORD *)(a3 + 8) = v20;
  if ( v19 )
    v21 += 32;
  v22 = 0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((unsigned __int64)(v14 + v21 - 1) >> 12));
  v23 = (*(_QWORD *)(a2 + 16) ^ (-1LL << (v14 >> 12)) & v22) & (-1LL << (v14 >> 12)) & v22;
  if ( v23 )
  {
    v52 = a5;
    *(_DWORD *)(a3 + 8) = v20 | 0x200;
    v53 = v52 & 1;
    if ( !v53 )
      RtlReleaseSRWLockExclusive(SRWLock);
    if ( (int)RtlpHpVsSubsegmentCommitPages(
                (_DWORD)SRWLock,
                a2,
                v23,
                (unsigned int)((0x101010101010101LL
                              * ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                + ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                  + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                1) < 0 )
    {
      v19 += a4;
      a4 = 0;
    }
    if ( !v53 )
      RtlAcquireSRWLockExclusive(SRWLock);
    *(_DWORD *)(a3 + 8) &= ~0x200u;
    v10 = RtlpLFHKey;
  }
  v24 = WORD1(RtlpLFHKey);
  *(_WORD *)(a3 + 2) = WORD1(RtlpLFHKey) ^ a4 ^ WORD1(a3);
  if ( v19 )
  {
    v25 = 16LL * a4 + a3;
    if ( a4 )
      v26 = (unsigned __int16)a4;
    else
      v26 = (unsigned __int16)(WORD2(v25) ^ WORD2(v10) ^ HIDWORD(*(_QWORD *)v25));
    HIDWORD(v54) = v26 & 0xFF00FFFF | 0x10000;
    LODWORD(v54) = v19 << 16;
    *(_QWORD *)v25 = v25 ^ v54 ^ v10;
    v27 = v25 + 16LL * v19;
    *(_DWORD *)(v25 + 8) = (unsigned __int8)(v10 ^ v25 ^ ((unsigned int)(v25 - a2) >> 12));
    if ( v27 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
      *(_WORD *)(v27 + 4) = WORD2(v27) ^ WORD2(v10) ^ v19;
    for ( i = 0; ; i = v51 )
    {
      v28 = RtlpHpVsChunkCoalesce((__int64)SRWLock, a2, v25, &v59);
      v25 = v28;
      if ( v59 == *(unsigned __int16 *)(a2 + 32) )
      {
        RtlpHpVsSubsegmentCleanup((__int64)SRWLock, (_QWORD *)a2);
        return a4;
      }
      if ( v59 <= i )
        break;
      v29 = (v28 - a2 + 4127) & 0xFFFFF000;
      v30 = (v28 + 16 * (v24 ^ WORD1(v28) ^ *(unsigned __int16 *)(v28 + 2)) - a2) & 0xFFFFF000;
      if ( v29 < v30 )
      {
        v31 = v30 - v29;
        v32 = *(_QWORD *)(a2 + 16) & (-1LL << (v29 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                      - (unsigned __int8)((unsigned __int64)(v29 + v31 - 1) >> 12)));
      }
      else
      {
        v31 = 0;
        v32 = 0LL;
      }
      if ( (v31 & 0xFFFFF000) == 0 || !v32 )
        break;
      v45 = SRWLock[5].Value >> 7;
      v46 = (0x101010101010101LL
           * ((((v32 - ((v32 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v32 - ((v32 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v32 - ((v32 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v32 - ((v32 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      v56 = v46;
      if ( v45 <= 8 )
        v45 = 8LL;
      if ( SRWLock[6].Value + (unsigned int)v46 <= v45 )
        break;
      HIDWORD(v58) = HIDWORD(v58) & 0xFF00FFFF | 0x10000;
      v47 = v10 ^ v28 ^ ((unsigned int)(v28 - a2) >> 12);
      v48 = v10 ^ v28 ^ v58;
      v49 = a5;
      v58 = v48;
      *(_BYTE *)(v25 + 6) = BYTE6(v48);
      *(_DWORD *)(v25 + 8) = (unsigned __int8)v47 | 0x200;
      v50 = v49 & 1;
      if ( !v50 )
      {
        RtlReleaseSRWLockExclusive(SRWLock);
        LODWORD(v46) = v56;
      }
      RtlpHpVsSubsegmentCommitPages((_DWORD)SRWLock, a2, v32, v46, 0);
      if ( !v50 )
        RtlAcquireSRWLockExclusive(SRWLock);
      v51 = v59;
      *(_DWORD *)(v25 + 8) &= ~0x200u;
      v10 = RtlpLFHKey;
      v24 = WORD1(RtlpLFHKey);
    }
    v33 = (v28 - a2 + 4127) & 0xFFFFF000;
    v34 = 16 * (WORD1(RtlpLFHKey) ^ WORD1(v28) ^ *(unsigned __int16 *)(v28 + 2));
    v35 = (v28 & 0xFFF) + v34 + 4095;
    v36 = (unsigned __int64)(v34 + 4095) >> 12;
    v37 = (v25 + v34 - a2) & 0xFFFFF000;
    v38 = (v35 >> 12) - v36;
    if ( v33 < v37 )
    {
      v39 = v37 - v33;
      v11 = *(_QWORD *)(a2 + 16) & (-1LL << (v33 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v33 + v39 - 1) >> 12)));
    }
    else
    {
      v39 = 0;
    }
    v40 = 0;
    v41 = v11 - ((v11 >> 1) & 0x5555555555555555LL);
    SRWLock[6].Value += (unsigned int)((0x101010101010101LL
                                      * (((v41 & 0x3333333333333333LL)
                                        + ((v41 >> 2) & 0x3333333333333333LL)
                                        + (((v41 & 0x3333333333333333LL) + ((v41 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    *(_WORD *)v25 = v10 ^ v25 ^ (v38
                               + (v39 >> 12)
                               - ((0x101010101010101LL
                                 * (((v41 & 0x3333333333333333LL)
                                   + ((v41 >> 2) & 0x3333333333333333LL)
                                   + (((v41 & 0x3333333333333333LL) + ((v41 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    Value = (_RTL_BALANCED_NODE *)SRWLock[1].Value;
    if ( Value )
    {
      while ( 1 )
      {
        if ( ((unsigned int)v10 ^ (unsigned int)v25 ^ *(_DWORD *)v25) < ((unsigned int)v10 ^ *(_DWORD *)&Value[-1].0 ^ ((_DWORD)Value - 8)) )
        {
          v43 = Value->Children[0];
          if ( !Value->Children[0] )
          {
            v40 = 0;
            break;
          }
        }
        else
        {
          v43 = Value->Children[1];
          if ( !v43 )
          {
            v40 = 1;
            break;
          }
        }
        Value = v43;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)&SRWLock[1], Value, v40, (PRTL_BALANCED_NODE)(v25 + 8));
  }
  return a4;
}

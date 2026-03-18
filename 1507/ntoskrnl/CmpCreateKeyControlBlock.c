/*
 * XREFs of CmpCreateKeyControlBlock @ 0x1404CB480
 * Callers:
 *     CmpAddInfoAfterParseFailure @ 0x14042A390 (CmpAddInfoAfterParseFailure.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x1407D7838 (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CmpAddKeyHashToEntry @ 0x1400CE93C (CmpAddKeyHashToEntry.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     CmpLockTableAdd @ 0x1401DFF3C (CmpLockTableAdd.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 *     CmpUnlockHashEntry @ 0x1404C8730 (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x1404C8DB0 (CmpFreeKeyControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x1404CBB90 (CmpAllocateKeyControlBlock.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x1404CBDC0 (CmpGetNameControlBlock.c)
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404CC7A0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryExclusive @ 0x1404CCB90 (CmpLockHashEntryExclusive.c)
 *     CmpRemoveKeyHash @ 0x14052B5B0 (CmpRemoveKeyHash.c)
 *     CmpEtwDumpKcb @ 0x140652FB0 (CmpEtwDumpKcb.c)
 */

__int64 __fastcall CmpCreateKeyControlBlock(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        ULONG_PTR a3,
        char a4,
        __m128i *a5)
{
  int v5; // eax
  __int16 v6; // r13
  ULONG_PTR v7; // r12
  unsigned int v10; // ebx
  char v11; // si
  unsigned __int16 v12; // ax
  WCHAR *v13; // rdi
  __int64 v14; // rsi
  WCHAR v15; // ax
  int v16; // ecx
  __int64 result; // rax
  unsigned __int64 v18; // rdi
  _QWORD *v19; // rax
  int v20; // ecx
  int v21; // eax
  bool v22; // zf
  __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // rsi
  __int64 v34; // rbp
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // esi
  int v38; // esi
  unsigned int v39; // r15d
  char v40; // r12
  __int64 v41; // r13
  __int64 *v42; // rsi
  __int64 v43; // r9
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rax
  signed __int64 v47; // rax
  signed __int64 v48; // rcx
  __int64 v49; // rtt
  _DWORD *NameControlBlock; // rax
  __int64 v51; // rdx
  __int64 v52; // r14
  unsigned int v53; // eax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  char v58; // [rsp+20h] [rbp-78h]
  _BYTE v59[3]; // [rsp+21h] [rbp-77h] BYREF
  int v60; // [rsp+24h] [rbp-74h] BYREF
  _DWORD v61[4]; // [rsp+28h] [rbp-70h] BYREF
  __m128i v62; // [rsp+38h] [rbp-60h] BYREF
  int v67; // [rsp+B8h] [rbp+20h]

  v5 = *(_DWORD *)(BugCheckParameter2 + 144);
  v6 = 0;
  v60 = -1;
  v7 = a3;
  v10 = 0;
  if ( (v5 & 0x20) != 0 && *(struct _KTHREAD **)(BugCheckParameter2 + 5416) != KeGetCurrentThread() )
    return 0LL;
  v11 = a4 & 1;
  v58 = a4 & 1;
  if ( a3 )
    v10 = *(_DWORD *)(a3 + 16);
  v12 = _mm_cvtsi128_si32(*a5);
  v62 = *a5;
  v13 = (WCHAR *)v62.m128i_i64[1];
  v62.m128i_i16[0] = v12;
  if ( v12 )
  {
    do
    {
      if ( *v13 != 92 )
        break;
      ++v13;
      v22 = v12 == 2;
      v12 -= 2;
      v62.m128i_i64[1] = (__int64)v13;
      v62.m128i_i16[0] = v12;
    }
    while ( !v22 );
    if ( v12 )
    {
      v14 = (((unsigned int)v12 - 1) >> 1) + 1;
      do
      {
        v15 = *v13;
        if ( *v13 != 92 )
        {
          if ( v15 >= 0x61u )
          {
            if ( v15 > 0x7Au )
              v16 = RtlUpcaseUnicodeChar(v15);
            else
              v16 = v15 - 32;
          }
          else
          {
            v16 = v15;
          }
          v10 = v16 + 37 * v10;
        }
        ++v13;
        --v14;
      }
      while ( v14 );
      v11 = v58;
    }
  }
  result = CmpAllocateKeyControlBlock();
  v18 = result;
  if ( result )
  {
    v19 = (_QWORD *)(result + 120);
    v19[1] = v19;
    *v19 = v19;
    *(_QWORD *)(v18 + 136) = 0LL;
    *(_QWORD *)(v18 + 144) = 0LL;
    *(_QWORD *)(v18 + 152) = 0LL;
    *(_QWORD *)(v18 + 160) = 0LL;
    if ( v7 )
      v20 = (*(_DWORD *)(v7 + 4) >> 20) & 1;
    else
      LOBYTE(v20) = CmpLockTablePresent;
    v21 = *(_DWORD *)(v18 + 4);
    *(_DWORD *)(v18 + 8) &= 0xFFFFFFF8;
    *(_DWORD *)v18 = 1;
    *(_QWORD *)(v18 + 32) = BugCheckParameter2;
    *(_DWORD *)(v18 + 40) = a2;
    *(_DWORD *)(v18 + 16) = v10;
    *(_DWORD *)(v18 + 64) = 0;
    *(_QWORD *)(v18 + 48) = 0LL;
    *(_QWORD *)(v18 + 56) = 0LL;
    *(_QWORD *)(v18 + 192) = 0LL;
    *(_QWORD *)(v18 + 288) = 0LL;
    *(_DWORD *)(v18 + 4) = v21 & 0xFFE1FFFF | ((v20 & 1) << 20);
    *(_QWORD *)(v18 + 208) = v18 + 200;
    *(_QWORD *)(v18 + 200) = v18 + 200;
    *(_QWORD *)(v18 + 224) = v18 + 216;
    *(_QWORD *)(v18 + 216) = v18 + 216;
    if ( v7 )
      *(_QWORD *)(v18 + 232) = *(_QWORD *)(v7 + 232);
    else
      *(_QWORD *)(v18 + 232) = 0LL;
    v22 = (a4 & 2) == 0;
    v67 = a4 & 2;
    *(_DWORD *)(v18 + 240) = 0;
    *(_QWORD *)(v18 + 248) = 0LL;
    *(_DWORD *)(v18 + 256) = 0;
    *(_QWORD *)(v18 + 264) = 0LL;
    *(_DWORD *)(v18 + 272) = 0;
    *(_DWORD *)(v18 + 276) = -1;
    *(_QWORD *)(v18 + 280) = 0LL;
    if ( v22 )
    {
      CmpLockHashEntryExclusive(BugCheckParameter2, v10);
      if ( v7 )
        CmpLockKcbExclusive(v7);
    }
    v23 = *(_QWORD *)(v18 + 32);
    v24 = *(_DWORD *)(v18 + 16) ^ (*(_DWORD *)(v18 + 16) >> 9);
    v25 = *(_QWORD *)(v23 + 2800);
    v26 = (((unsigned int)(101027 * v24) >> 9) ^ (101027 * v24)) & (*(_DWORD *)(v23 + 2808) - 1);
    if ( v11 )
      ++*(_DWORD *)(v18 + 40);
    v28 = CmpAddKeyHashToEntry(v18 + 16, v25 + 24 * v26, 0);
    if ( v28 )
    {
      *(_DWORD *)(v18 + 4) |= 0x80000u;
      CmpFreeKeyControlBlock(v18, v27, v29, v30);
      v18 = v28;
      CmpLockKcbExclusive(v28);
      v34 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v60);
      if ( v34 )
      {
        if ( (unsigned __int8)CmpReferenceKeyControlBlock(v28) )
        {
          v52 = BugCheckParameter2;
          if ( (*(_DWORD *)(v28 + 4) & 0x10) != 0 && !v58 )
          {
            *(_QWORD *)(v28 + 32) = BugCheckParameter2;
            *(_WORD *)(v28 + 4) = 64;
            *(_DWORD *)(v28 + 40) = a2;
          }
          if ( (*(_DWORD *)(v28 + 4) & 7) == 0 )
          {
            *(_DWORD *)(v28 + 112) = *(_DWORD *)(v34 + 20) + *(_DWORD *)(v34 + 24);
            *(_WORD *)(v28 + 4) &= ~0x40u;
          }
          *(_QWORD *)(v28 + 168) = *(_QWORD *)(v34 + 4);
          *(_WORD *)(v28 + 176) = *(_WORD *)(v34 + 52);
          *(_WORD *)(v28 + 178) = *(_WORD *)(v34 + 60);
          *(_DWORD *)(v28 + 180) = *(_DWORD *)(v34 + 64);
          *(_DWORD *)(v28 + 184) ^= (*(_DWORD *)(v28 + 184) ^ *(unsigned __int16 *)(v34 + 54)) & 0xF;
          *(_DWORD *)(v28 + 184) ^= ((unsigned __int8)*(_DWORD *)(v28 + 184) ^ (unsigned __int8)*(_WORD *)(v34 + 54)) & 0xF0;
          *(_BYTE *)(v28 + 185) = *(_BYTE *)(v34 + 55);
          goto LABEL_57;
        }
        CmpUnlockKcb((char *)v28);
        goto LABEL_104;
      }
      goto LABEL_102;
    }
    if ( (*(_DWORD *)(v18 + 4) & 0x100000) != 0 )
      *(_DWORD *)(v18 + 64) = CmpLockTableAdd(v18, 1);
    v31 = KeAbPreAcquire(v18 + 48, 0LL, 0LL, v30);
    v33 = v31;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v18 + 48), v31, v18 + 48, v32);
    if ( v33 )
      *(_BYTE *)(v33 + 26) |= 1u;
    *(_QWORD *)(v18 + 56) = KeGetCurrentThread();
    v34 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v60);
    if ( !v34 )
    {
LABEL_102:
      CmpDereferenceKeyControlBlockWithLock(v7, 0LL, v35, v36);
      goto LABEL_103;
    }
    if ( v7 )
    {
      v37 = ((*(_DWORD *)(v7 + 4) >> 21) & 0x3FF) + 1;
      if ( v37 > 0x7F )
      {
        v54 = CmpConstructName(v7);
        if ( !v54 )
        {
LABEL_103:
          CmpRemoveKeyHash(*(_QWORD *)(v18 + 32), v18 + 16);
          CmpUnlockKcb((char *)v18);
          *(_DWORD *)(v18 + 4) |= 0x80000u;
          CmpFreeKeyControlBlock(v18, v55, v56, v57);
LABEL_104:
          v18 = 0LL;
LABEL_56:
          v52 = BugCheckParameter2;
LABEL_57:
          if ( v34 )
            (*(void (__fastcall **)(__int64, int *))(v52 + 16))(v52, &v60);
          if ( v18 && *(_BYTE *)(v52 + 4112) == 1 && (*(_BYTE *)(v18 + 186) & 0x10) == 0 )
            *(_WORD *)(v18 + 4) |= 0x20u;
          if ( !v67 )
          {
            if ( v7 )
              CmpUnlockKcb((char *)v7);
            CmpUnlockHashEntry(v52, v10);
          }
          return v18;
        }
        if ( *(unsigned __int16 *)v54 + (unsigned __int64)a5->m128i_u16[0] + 2 > 0xFFFF )
          v37 = 513;
        ExFreePoolWithTag(v54, 0x624E4D43u);
      }
      if ( v37 >= 0x200 || !(unsigned __int8)CmpReferenceKeyControlBlock(v7) )
        goto LABEL_103;
      v38 = (*(_DWORD *)(v18 + 4) ^ (v37 << 21)) & 0x7FE00000;
      *(_QWORD *)(v18 + 72) = v7;
      *(_DWORD *)(v18 + 4) ^= v38;
    }
    else
    {
      v53 = *(_DWORD *)(v18 + 4) & 0x803FFFFF;
      *(_QWORD *)(v18 + 72) = 0LL;
      *(_DWORD *)(v18 + 4) = v53 | 0x200000;
    }
    v39 = *(_DWORD *)(v34 + 44);
    v40 = 1;
    if ( v39 == -1 )
    {
      *(_QWORD *)(v18 + 88) = 0LL;
    }
    else
    {
      v41 = *(_QWORD *)(v18 + 32);
      v42 = (__int64 *)(v41 + 2952);
      v44 = KeAbPreAcquire(v41 + 2952, 0LL, 0LL, v36);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v41 + 2952), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v41 + 2952), v44, v41 + 2952, v43);
      if ( v44 )
        *(_BYTE *)(v44 + 26) |= 1u;
      if ( (unsigned __int8)CmpFindSecurityCellCacheIndex(v41, v39, v61) )
      {
        v46 = *(_QWORD *)(v41 + 3056);
        v6 = 0;
        *(_QWORD *)(v18 + 88) = *(_QWORD *)(v46 + 16LL * v61[0] + 8);
      }
      else
      {
        v6 = 0;
        *(_QWORD *)(v18 + 88) = 0LL;
        v40 = 0;
      }
      _m_prefetchw(v42);
      v47 = *v42;
      if ( (*v42 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v48 = v47 - 16;
      else
        v48 = 0LL;
      if ( (v47 & 2) != 0 || (v49 = *v42, v49 != _InterlockedCompareExchange64(v42, v48, v47)) )
        ExfReleasePushLock(v42, v45);
      KeAbPostRelease((ULONG_PTR)v42);
      if ( !v40 )
      {
LABEL_101:
        v7 = a3;
        goto LABEL_102;
      }
    }
    NameControlBlock = (_DWORD *)CmpGetNameControlBlock(&v62, v59);
    *(_QWORD *)(v18 + 80) = NameControlBlock;
    if ( NameControlBlock )
    {
      *(_DWORD *)(v18 + 96) = *(_DWORD *)(v34 + 36);
      *(_QWORD *)(v18 + 104) = *(unsigned int *)(v34 + 40);
      if ( v58 )
      {
        *(_WORD *)(v18 + 4) = 16;
        if ( (*NameControlBlock & 1) != 0 )
          v6 = 32;
        *(_WORD *)(v18 + 186) = v6;
      }
      else
      {
        *(_WORD *)(v18 + 186) = *(_WORD *)(v34 + 2);
        *(_WORD *)(v18 + 4) = 0;
      }
      if ( *(_QWORD *)(v18 + 232) )
        *(_WORD *)(v18 + 4) |= 0x20u;
      if ( CmpTraceRoutine )
      {
        LOBYTE(v51) = 22;
        CmpEtwDumpKcb(v18, v51);
      }
      v7 = a3;
      *(_DWORD *)(v18 + 112) = *(_DWORD *)(v34 + 20) + *(_DWORD *)(v34 + 24);
      *(_QWORD *)(v18 + 168) = *(_QWORD *)(v34 + 4);
      *(_WORD *)(v18 + 176) = *(_WORD *)(v34 + 52);
      *(_WORD *)(v18 + 178) = *(_WORD *)(v34 + 60);
      *(_DWORD *)(v18 + 180) = *(_DWORD *)(v34 + 64);
      *(_DWORD *)(v18 + 184) ^= (*(_DWORD *)(v18 + 184) ^ *(unsigned __int16 *)(v34 + 54)) & 0xF;
      v22 = v59[0] == 1;
      *(_DWORD *)(v18 + 184) ^= ((unsigned __int8)*(_DWORD *)(v18 + 184) ^ (unsigned __int8)*(_WORD *)(v34 + 54)) & 0xF0;
      *(_BYTE *)(v18 + 185) = *(_BYTE *)(v34 + 55);
      if ( v22 )
        *(_QWORD *)(v18 + 192) = 1LL;
      goto LABEL_56;
    }
    goto LABEL_101;
  }
  return result;
}

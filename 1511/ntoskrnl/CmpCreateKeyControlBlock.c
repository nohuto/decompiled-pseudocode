/*
 * XREFs of CmpCreateKeyControlBlock @ 0x1403FA0D0
 * Callers:
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmpAddInfoAfterParseFailure @ 0x1403E0290 (CmpAddInfoAfterParseFailure.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x140745C60 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     CmpAddKeyHashToEntry @ 0x14003D17C (CmpAddKeyHashToEntry.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     CmpLockTableAdd @ 0x1401A9FF0 (CmpLockTableAdd.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryExclusive @ 0x1403F9DF0 (CmpLockHashEntryExclusive.c)
 *     CmpAllocateKeyControlBlock @ 0x1403FA7E0 (CmpAllocateKeyControlBlock.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x1403FAA10 (CmpGetNameControlBlock.c)
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FB310 (CmpFindSecurityCellCacheIndex.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockHashEntry @ 0x1403FB980 (CmpUnlockHashEntry.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
 *     CmpFreeKeyControlBlock @ 0x1403FCC40 (CmpFreeKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpRemoveKeyHash @ 0x1404B48FC (CmpRemoveKeyHash.c)
 *     CmpEtwDumpKcb @ 0x1405DDA84 (CmpEtwDumpKcb.c)
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
  char v7; // si
  ULONG_PTR v8; // r12
  unsigned int v11; // ebx
  unsigned __int16 v12; // ax
  WCHAR *v13; // rdi
  __int64 v14; // rsi
  WCHAR v15; // ax
  int v16; // ecx
  __int64 result; // rax
  __int64 v18; // rdi
  _QWORD *v19; // rax
  int v20; // ecx
  int v21; // eax
  __int64 v22; // r8
  int v23; // ecx
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rbp
  unsigned int v30; // esi
  int v31; // esi
  unsigned int v32; // r15d
  char v33; // r12
  __int64 v34; // r13
  signed __int64 *v35; // rsi
  __int64 v36; // r14
  __int64 v37; // rax
  signed __int64 v38; // rax
  signed __int64 v39; // rcx
  signed __int64 v40; // rtt
  _DWORD *NameControlBlock; // rax
  __int64 v42; // rdx
  bool v43; // zf
  ULONG_PTR v44; // r14
  unsigned int v45; // eax
  unsigned __int16 *v46; // rax
  bool v47; // [rsp+20h] [rbp-78h]
  _BYTE v48[3]; // [rsp+21h] [rbp-77h] BYREF
  int v49; // [rsp+24h] [rbp-74h] BYREF
  _DWORD v50[4]; // [rsp+28h] [rbp-70h] BYREF
  __m128i v51; // [rsp+38h] [rbp-60h] BYREF
  int v56; // [rsp+B8h] [rbp+20h]

  v5 = *(_DWORD *)(BugCheckParameter2 + 144);
  v6 = 0;
  v49 = -1;
  v7 = a4;
  v8 = a3;
  v11 = 0;
  if ( (v5 & 0x20) != 0 && *(struct _KTHREAD **)(BugCheckParameter2 + 5416) != KeGetCurrentThread() )
    return 0LL;
  v47 = (a4 & 1) != 0;
  if ( a3 )
    v11 = *(_DWORD *)(a3 + 16);
  v12 = _mm_cvtsi128_si32(*a5);
  v51 = *a5;
  v13 = (WCHAR *)v51.m128i_i64[1];
  v51.m128i_i16[0] = v12;
  if ( v12 )
  {
    do
    {
      if ( *v13 != 92 )
        break;
      ++v13;
      v43 = v12 == 2;
      v12 -= 2;
      v51.m128i_i64[1] = (__int64)v13;
      v51.m128i_i16[0] = v12;
    }
    while ( !v43 );
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
          v11 = v16 + 37 * v11;
        }
        ++v13;
        --v14;
      }
      while ( v14 );
      v7 = a4;
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
    if ( v8 )
      v20 = (*(_DWORD *)(v8 + 4) >> 20) & 1;
    else
      LOBYTE(v20) = CmpLockTablePresent;
    v21 = *(_DWORD *)(v18 + 4);
    *(_DWORD *)(v18 + 8) &= 0xFFFFFFF8;
    *(_DWORD *)v18 = 1;
    *(_QWORD *)(v18 + 32) = BugCheckParameter2;
    *(_DWORD *)(v18 + 40) = a2;
    *(_DWORD *)(v18 + 16) = v11;
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
    if ( v8 )
      *(_QWORD *)(v18 + 232) = *(_QWORD *)(v8 + 232);
    else
      *(_QWORD *)(v18 + 232) = 0LL;
    *(_DWORD *)(v18 + 240) = 0;
    *(_QWORD *)(v18 + 248) = 0LL;
    *(_DWORD *)(v18 + 256) = 0;
    *(_QWORD *)(v18 + 264) = 0LL;
    *(_DWORD *)(v18 + 272) = 0;
    *(_DWORD *)(v18 + 276) = -1;
    *(_QWORD *)(v18 + 280) = 0LL;
    v56 = v7 & 2;
    if ( (v7 & 2) == 0 )
    {
      CmpLockHashEntryExclusive(BugCheckParameter2, v11);
      if ( v8 )
        CmpLockKcbExclusive(v8);
    }
    v22 = *(_QWORD *)(v18 + 32);
    v23 = *(_DWORD *)(v18 + 16) ^ (*(_DWORD *)(v18 + 16) >> 9);
    v24 = *(_QWORD *)(v22 + 2800);
    v25 = (((unsigned int)(101027 * v23) >> 9) ^ (101027 * v23)) & (*(_DWORD *)(v22 + 2808) - 1);
    if ( v47 )
      ++*(_DWORD *)(v18 + 40);
    v26 = CmpAddKeyHashToEntry(v18 + 16, v24 + 24 * v25, 0);
    if ( v26 )
    {
      *(_DWORD *)(v18 + 4) |= 0x80000u;
      CmpFreeKeyControlBlock((PVOID)v18);
      v18 = v26;
      CmpLockKcbExclusive(v26);
      v29 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v49);
      if ( v29 )
      {
        if ( (unsigned __int8)CmpReferenceKeyControlBlock(v26) )
        {
          v44 = BugCheckParameter2;
          if ( (*(_DWORD *)(v26 + 4) & 0x10) != 0 && !v47 )
          {
            *(_QWORD *)(v26 + 32) = BugCheckParameter2;
            *(_WORD *)(v26 + 4) = 64;
            *(_DWORD *)(v26 + 40) = a2;
          }
          if ( (*(_DWORD *)(v26 + 4) & 7) == 0 )
          {
            *(_DWORD *)(v26 + 112) = *(_DWORD *)(v29 + 20) + *(_DWORD *)(v29 + 24);
            *(_WORD *)(v26 + 4) &= ~0x40u;
          }
          *(_QWORD *)(v26 + 168) = *(_QWORD *)(v29 + 4);
          *(_WORD *)(v26 + 176) = *(_WORD *)(v29 + 52);
          *(_WORD *)(v26 + 178) = *(_WORD *)(v29 + 60);
          *(_DWORD *)(v26 + 180) = *(_DWORD *)(v29 + 64);
          *(_DWORD *)(v26 + 184) ^= (*(_DWORD *)(v26 + 184) ^ *(unsigned __int16 *)(v29 + 54)) & 0xF;
          *(_DWORD *)(v26 + 184) ^= ((unsigned __int8)*(_DWORD *)(v26 + 184) ^ (unsigned __int8)*(_WORD *)(v29 + 54)) & 0xF0;
          *(_BYTE *)(v26 + 185) = *(_BYTE *)(v29 + 55);
          goto LABEL_57;
        }
        CmpUnlockKcb((PVOID)v26);
        goto LABEL_104;
      }
      goto LABEL_102;
    }
    if ( (*(_DWORD *)(v18 + 4) & 0x100000) != 0 )
      *(_DWORD *)(v18 + 64) = CmpLockTableAdd(v18, 1);
    v27 = KeAbPreAcquire(v18 + 48, 0LL, 0LL);
    v28 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v18 + 48), v27, v18 + 48);
    if ( v28 )
      *(_BYTE *)(v28 + 26) |= 1u;
    *(_QWORD *)(v18 + 56) = KeGetCurrentThread();
    v29 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v49);
    if ( !v29 )
    {
LABEL_102:
      CmpDereferenceKeyControlBlockWithLock(v8);
      goto LABEL_103;
    }
    if ( v8 )
    {
      v30 = ((*(_DWORD *)(v8 + 4) >> 21) & 0x3FF) + 1;
      if ( v30 > 0x7F )
      {
        v46 = (unsigned __int16 *)CmpConstructName(v8);
        if ( !v46 )
        {
LABEL_103:
          CmpRemoveKeyHash(*(_QWORD *)(v18 + 32), v18 + 16);
          CmpUnlockKcb((PVOID)v18);
          *(_DWORD *)(v18 + 4) |= 0x80000u;
          CmpFreeKeyControlBlock((PVOID)v18);
LABEL_104:
          v18 = 0LL;
LABEL_56:
          v44 = BugCheckParameter2;
LABEL_57:
          if ( v29 )
            (*(void (__fastcall **)(ULONG_PTR, int *))(v44 + 16))(v44, &v49);
          if ( v18 && *(_BYTE *)(v44 + 4112) == 1 && (*(_BYTE *)(v18 + 186) & 0x10) == 0 )
            *(_WORD *)(v18 + 4) |= 0x20u;
          if ( !v56 )
          {
            if ( v8 )
              CmpUnlockKcb((PVOID)v8);
            CmpUnlockHashEntry(v44, v11);
          }
          return v18;
        }
        if ( *v46 + (unsigned __int64)a5->m128i_u16[0] + 2 > 0xFFFF )
          v30 = 513;
        ExFreePoolWithTag(v46, 0x624E4D43u);
      }
      if ( v30 >= 0x200 || !(unsigned __int8)CmpReferenceKeyControlBlock(v8) )
        goto LABEL_103;
      v31 = (*(_DWORD *)(v18 + 4) ^ (v30 << 21)) & 0x7FE00000;
      *(_QWORD *)(v18 + 72) = v8;
      *(_DWORD *)(v18 + 4) ^= v31;
    }
    else
    {
      v45 = *(_DWORD *)(v18 + 4) & 0x803FFFFF;
      *(_QWORD *)(v18 + 72) = 0LL;
      *(_DWORD *)(v18 + 4) = v45 | 0x200000;
    }
    v32 = *(_DWORD *)(v29 + 44);
    v33 = 1;
    if ( v32 == -1 )
    {
      *(_QWORD *)(v18 + 88) = 0LL;
    }
    else
    {
      v34 = *(_QWORD *)(v18 + 32);
      v35 = (signed __int64 *)(v34 + 2952);
      v36 = KeAbPreAcquire(v34 + 2952, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 2952), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v34 + 2952), v36, v34 + 2952);
      if ( v36 )
        *(_BYTE *)(v36 + 26) |= 1u;
      if ( (unsigned __int8)CmpFindSecurityCellCacheIndex(v34, v32, v50) )
      {
        v37 = *(_QWORD *)(v34 + 3056);
        v6 = 0;
        *(_QWORD *)(v18 + 88) = *(_QWORD *)(v37 + 16LL * v50[0] + 8);
      }
      else
      {
        v6 = 0;
        *(_QWORD *)(v18 + 88) = 0LL;
        v33 = 0;
      }
      _m_prefetchw(v35);
      v38 = *v35;
      if ( (*v35 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v39 = v38 - 16;
      else
        v39 = 0LL;
      if ( (v38 & 2) != 0 || (v40 = *v35, v40 != _InterlockedCompareExchange64(v35, v39, v38)) )
        ExfReleasePushLock(v35);
      KeAbPostRelease((ULONG_PTR)v35);
      if ( !v33 )
      {
LABEL_101:
        v8 = a3;
        goto LABEL_102;
      }
    }
    NameControlBlock = (_DWORD *)CmpGetNameControlBlock(&v51, v48);
    *(_QWORD *)(v18 + 80) = NameControlBlock;
    if ( NameControlBlock )
    {
      *(_DWORD *)(v18 + 96) = *(_DWORD *)(v29 + 36);
      *(_QWORD *)(v18 + 104) = *(unsigned int *)(v29 + 40);
      if ( v47 )
      {
        *(_WORD *)(v18 + 4) = 16;
        if ( (*NameControlBlock & 1) != 0 )
          v6 = 32;
        *(_WORD *)(v18 + 186) = v6;
      }
      else
      {
        *(_WORD *)(v18 + 186) = *(_WORD *)(v29 + 2);
        *(_WORD *)(v18 + 4) = 0;
      }
      if ( *(_QWORD *)(v18 + 232) )
        *(_WORD *)(v18 + 4) |= 0x20u;
      if ( CmpTraceRoutine )
      {
        LOBYTE(v42) = 22;
        CmpEtwDumpKcb(v18, v42);
      }
      v8 = a3;
      *(_DWORD *)(v18 + 112) = *(_DWORD *)(v29 + 20) + *(_DWORD *)(v29 + 24);
      *(_QWORD *)(v18 + 168) = *(_QWORD *)(v29 + 4);
      *(_WORD *)(v18 + 176) = *(_WORD *)(v29 + 52);
      *(_WORD *)(v18 + 178) = *(_WORD *)(v29 + 60);
      *(_DWORD *)(v18 + 180) = *(_DWORD *)(v29 + 64);
      *(_DWORD *)(v18 + 184) ^= (*(_DWORD *)(v18 + 184) ^ *(unsigned __int16 *)(v29 + 54)) & 0xF;
      v43 = v48[0] == 1;
      *(_DWORD *)(v18 + 184) ^= ((unsigned __int8)*(_DWORD *)(v18 + 184) ^ (unsigned __int8)*(_WORD *)(v29 + 54)) & 0xF0;
      *(_BYTE *)(v18 + 185) = *(_BYTE *)(v29 + 55);
      if ( v43 )
        *(_QWORD *)(v18 + 192) = 1LL;
      goto LABEL_56;
    }
    goto LABEL_101;
  }
  return result;
}

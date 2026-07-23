/*
 * XREFs of MiActivePageClaimCandidate @ 0x1400BF620
 * Callers:
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 *     MiAllocateMostlyContiguous @ 0x1400BEC20 (MiAllocateMostlyContiguous.c)
 *     MiPfnsWorthTrying @ 0x1400BF370 (MiPfnsWorthTrying.c)
 * Callees:
 *     MI_IS_PFN_FILE_ONLY @ 0x140071340 (MI_IS_PFN_FILE_ONLY.c)
 *     MiPageInRange @ 0x1400C0208 (MiPageInRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiActivePageClaimCandidate(__int64 a1, int a2)
{
  unsigned __int64 *v2; // rbp
  __int64 v3; // r10
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned int j; // ecx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int16 v14; // ax
  unsigned int v15; // r9d
  int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  ULONG_PTR *v20; // rsi
  unsigned int i; // r14d
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  int v24; // r15d
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  int v27; // r14d
  unsigned __int64 v28; // rcx
  unsigned __int16 v29; // r11
  int *v30; // r10
  unsigned int v31; // r11d
  unsigned int v32; // edx
  int *v33; // r10
  unsigned __int64 v34; // rcx
  __int64 v35; // rdi
  unsigned __int16 v36; // ax
  __int64 v37; // [rsp+60h] [rbp+0h] BYREF

  v2 = (unsigned __int64 *)((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL);
  v3 = *(_QWORD *)(a1 + 8);
  v5 = v3 | 0x8000000000000000uLL;
  v6 = (a1 + 0x58000000000LL) / 48;
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    return 1;
  v7 = *(_QWORD *)(a1 + 40);
  if ( (v7 & 0x200000000000000LL) != 0 )
  {
    v35 = *(_QWORD *)(a1 + 24);
    if ( (v35 & 0x4000000000000000LL) != 0
      || v5 == qword_1402FE6A8
      || a2 == 1 && (unsigned int)MI_IS_PFN_FILE_ONLY(a1) == 1 )
    {
      return 1;
    }
    if ( (v7 & 0xFFFFFFFFFLL) != 0xFFFFFFFFFLL )
    {
      v36 = *(_WORD *)(a1 + 32);
      return v36 > 1u || v36 > (v35 & 0x3FFFFFFFFFFFFFFFuLL) || !*(_QWORD *)a1 || (v3 & 0x8000000000000000uLL) == 0;
    }
    return (unsigned int)(v6 & 0x1FF) + 1;
  }
  if ( v5 == -8LL )
    goto LABEL_66;
  if ( v5 + 0x200000000000LL <= 0xFFFFFFFFFFFLL )
    return 1;
  v8 = 0xFFFFF6FB40000000uLL;
  if ( qword_1402FE8F0 )
  {
    if ( v5 >= qword_1402FE8F0
      && v5 < qword_1402FE8F0 + (qword_1402FE8D0 << 21)
      && (*(_BYTE *)(48 * ((*(_QWORD *)(((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                   - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
    {
      return 1;
    }
  }
  if ( ((v7 >> 54) & 7) == 1 || (v7 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
  {
    if ( _bittest64((const signed __int64 *)qword_1402FF6E8[0], v6 >> 9) )
      return (unsigned int)(v6 & 0x1FF) + 1;
    return 1;
  }
  *(_QWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0x98000000000LL;
  if ( v5 + 0x98000000000LL > 0x7FFFFFFFFFLL )
    return 1;
  v9 = (__int64)(v5 << 25) >> 16;
  if ( !*(_QWORD *)a1 )
  {
    v17 = 0;
    v18 = 0xFFFFF6FAC0000000uLL;
    *v2 = 0xFFFFF6FFFFFFFFFFuLL;
    v19 = v3 | 0x8000000000000000uLL;
    if ( v5 >= 0xFFFFF68000000000uLL )
    {
      while ( v19 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( v19 >= v18 && v19 <= 0xFFFFF6FB3FFFFFF8uLL )
          return 0;
        ++v17;
        v19 = (__int64)(v19 << 25) >> 16;
        v18 &= 0xFFFFFFFFFFFFF000uLL;
        if ( v19 < 0xFFFFF68000000000uLL )
          break;
      }
    }
    v20 = &BugCheckParameter2;
    *(_QWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0xFFFFF6FB7DBEDF68uLL;
    for ( i = 0; i < 3; ++i )
    {
      if ( *(v20 - 11) )
      {
        v22 = *v20;
        if ( ((*v20 >> 18) & 0x3FFFFFF8) == 0x3DE00000 )
          v22 = 0xFFFFF78000200000uLL;
        v23 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v24 = 0;
        v25 = v3 | 0x8000000000000000uLL;
        if ( v5 >= 0xFFFFF68000000000uLL )
        {
          while ( v25 <= *v2
               && ((v25 >> 9) & 0x7FFFFFFFF8LL) - *(_QWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 8) != *(_QWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
          {
            if ( v25 >= v23
              && v25 <= (((unsigned __int64)(*(_QWORD *)(*v20 + 104) - 1LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
            {
              return 0;
            }
            if ( v24 != 1 )
            {
              ++v24;
              v25 = (__int64)(v25 << 25) >> 16;
              v23 &= 0xFFFFFFFFFFFFF000uLL;
              if ( v25 >= 0xFFFFF68000000000uLL )
                continue;
            }
            break;
          }
        }
      }
      v20 += 32;
    }
    if ( (_QWORD)xmmword_1402FE630 )
    {
      if ( qword_1402FE640 )
      {
        v26 = (((unsigned __int64)xmmword_1402FE630 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v27 = 0;
        v28 = v3 | 0x8000000000000000uLL;
        if ( v5 >= 0xFFFFF68000000000uLL )
        {
          while ( v28 <= 0xFFFFF6FFFFFFFFFFuLL && ((v28 >> 9) & 0x7FFFFFFFF8LL) != 0x7B7DBEDF68LL )
          {
            if ( v28 >= v26
              && v28 <= (((unsigned __int64)(qword_1402FE640 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
            {
              return 0;
            }
            if ( v27 != 1 )
            {
              ++v27;
              v28 = (__int64)(v28 << 25) >> 16;
              v26 &= 0xFFFFFFFFFFFFF000uLL;
              if ( v28 >= 0xFFFFF68000000000uLL )
                continue;
            }
            break;
          }
        }
      }
    }
    v29 = (HIDWORD(v7) >> 8) & 0x3FF;
    if ( v29 == 1023 )
      v30 = MiSystemPartition;
    else
      v30 = *(int **)(qword_1402FEC28 + 8LL * v29);
    v31 = v30[1430];
    v32 = 0;
    if ( v31 )
    {
      v33 = v30 + 1432;
      do
      {
        v34 = *(_QWORD *)(*(_QWORD *)v33 + 216LL);
        if ( v34 )
        {
          if ( v9 >= v34 && v9 < v34 + 4LL * *(_QWORD *)(*(_QWORD *)v33 + 8LL) )
            return 0;
        }
        ++v32;
        v33 += 2;
      }
      while ( v32 < v31 );
    }
    if ( v9 + 0x200000000000LL <= 0xFFFFFFFFFFFLL )
    {
      if ( !_bittest64((const signed __int64 *)qword_1402FF6E8[0], v6 >> 9) )
        return *(_WORD *)(a1 + 32) > 1u || (MiFlags & 0x800) != 0 || a2 == 1 && (MI_READ_PTE_LOCK_FREE(v5) & 0x201) != 1;
      return (unsigned int)(v6 & 0x1FF) + 1;
    }
    if ( (v9 < MmPfnDatabase || v9 > MmPfnDatabase + (MxPfnAllocation << 12))
      && (!PsNtosImageBase
       || (v9 < (unsigned __int64)PsNtosImageBase || v9 >= PsNtosImageEnd)
       && (v9 < (unsigned __int64)PsHalImageBase || v9 >= PsHalImageEnd)) )
    {
      return 1;
    }
LABEL_66:
    if ( _bittest64((const signed __int64 *)qword_1402FF6E8[0], v6 >> 9) )
      return (unsigned int)(v6 & 0x1FF) + 1;
    return 1;
  }
  if ( PsInitialSystemProcess && v6 == PsInitialSystemProcess->DirectoryTableBase >> 12 )
    return 1;
  v10 = (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  for ( j = 0; j < 3; ++j )
  {
    if ( v5 >= v8 && v5 <= v10 )
      return *(_WORD *)(a1 + 32) > 1u || (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000;
    v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  if ( (v7 & 0xFFFFFFFFFLL) == v6 )
  {
    v15 = 0;
    if ( v5 == 0xFFFFF6FB7DBEDF68uLL && *(_WORD *)(a1 + 32) <= 1u )
      return v15;
    return 1;
  }
  v12 = *(_QWORD *)(a1 + 24);
  v13 = v12 & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v12 & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
  {
    if ( (v12 & 0xFFFFFFFFFLL) != 0 && v9 + 0x70000000000LL > 0x1FFF )
    {
      v14 = *(_WORD *)(a1 + 32);
      if ( v14 <= 1u && v14 <= v13 )
        return 0;
    }
    return 1;
  }
  if ( v9 + 0x400000000000LL <= 0xF7FFFFFFFFFLL )
    return *(_WORD *)(a1 + 32) > 1u || v13 >= 0x10000;
  if ( !(unsigned int)MiPageInRange(a1, 0xFFFFF6FAC0000000uLL, 0xFFFFF6FB3FFFFFF8uLL, 0LL) )
    return 1;
  if ( *(_WORD *)(a1 + 32) > 1u )
    return 1;
  return v15;
}

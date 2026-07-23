/*
 * XREFs of MiActivePageClaimCandidate @ 0x14005CD70
 * Callers:
 *     MiClaimPhysicalRun @ 0x14005ACA0 (MiClaimPhysicalRun.c)
 *     MiAllocateMostlyContiguous @ 0x14005BFB0 (MiAllocateMostlyContiguous.c)
 *     MiPfnsWorthTrying @ 0x14005CAD0 (MiPfnsWorthTrying.c)
 * Callees:
 *     MI_IS_PFN_FILE_ONLY @ 0x14005AC60 (MI_IS_PFN_FILE_ONLY.c)
 *     MiPageInRange @ 0x1401205C0 (MiPageInRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiActivePageClaimCandidate(__int64 a1, int a2)
{
  unsigned __int64 *v2; // rbp
  __int64 v3; // rbx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdi
  __int64 v8; // r11
  int v9; // eax
  int v10; // r9d
  unsigned __int16 v11; // ax
  unsigned int v12; // r8d
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned int v19; // r13d
  ULONG_PTR *v20; // r12
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  int v23; // r9d
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  int v26; // r9d
  unsigned __int64 v27; // rcx
  unsigned __int16 v28; // ax
  __int16 *v29; // r9
  unsigned int v30; // r11d
  unsigned int v31; // edx
  __int16 *v32; // r9
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned int v36; // edi
  unsigned int i; // ecx
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int16 v40; // ax
  __int64 v42; // [rsp+40h] [rbp+0h] BYREF

  v2 = (unsigned __int64 *)((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL);
  v3 = *(_QWORD *)(a1 + 8);
  v5 = v3 | 0x8000000000000000uLL;
  v6 = (a1 + 0x58000000000LL) / 48;
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    return 1;
  v7 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v7;
  if ( (v7 & 0x200000000000000LL) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    if ( (v8 & 0x4000000000000000LL) != 0 )
      return 1;
    if ( v5 == qword_14034EB58 )
      return 1;
    if ( a2 == 1 )
    {
      v9 = MI_IS_PFN_FILE_ONLY(a1);
      if ( v9 == v10 )
        return 1;
    }
    if ( (v7 & 0xFFFFFFFFFLL) != 0xFFFFFFFFFLL )
    {
      v11 = *(_WORD *)(a1 + 32);
      if ( v11 <= 1u && v11 <= (v8 & 0x3FFFFFFFFFFFFFFFuLL) && *(_QWORD *)a1 )
        return v3 >= 0;
      return 1;
    }
    return (unsigned int)(v6 & 0x1FF) + 1;
  }
  if ( v5 == -8LL )
    goto LABEL_75;
  if ( v5 + 0x200000000000LL <= 0xFFFFFFFFFFFLL )
    return 1;
  v13 = 0xFFFFF6FB40000000uLL;
  if ( qword_14034EDB0 )
  {
    if ( v5 >= qword_14034EDB0
      && v5 < qword_14034EDB0 + (qword_14034ED90 << 21)
      && (*(_BYTE *)(48 * ((*(_QWORD *)(((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                   - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
    {
      return 1;
    }
  }
  if ( ((v7 >> 54) & 7) == 1 || (v14 = v7 & 0xFFFFFFFFFLL, (v7 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL) )
  {
    if ( !_bittest64((const signed __int64 *)qword_14034FBA8[0], v6 >> 9) )
      return 1;
    return (unsigned int)(v6 & 0x1FF) + 1;
  }
  *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0x98000000000LL;
  if ( v5 + 0x98000000000LL > 0x7FFFFFFFFFLL )
    return 1;
  v15 = (__int64)(v5 << 25) >> 16;
  if ( !*(_QWORD *)a1 )
  {
    *v2 = 0xFFFFF68000000000uLL;
    v16 = 0xFFFFF6FAC0000000uLL;
    v17 = 0;
    v18 = v5;
    if ( v5 >= 0xFFFFF68000000000uLL )
    {
      while ( v18 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( v18 >= v16 && v18 <= 0xFFFFF6FB3FFFFFF8uLL )
          return 0;
        ++v17;
        v18 = (__int64)(v18 << 25) >> 16;
        v16 &= 0xFFFFFFFFFFFFF000uLL;
        if ( v18 < 0xFFFFF68000000000uLL )
          break;
      }
    }
    v19 = 0;
    v20 = &BugCheckParameter2;
    do
    {
      if ( *(v20 - 11) )
      {
        v21 = *v20;
        v22 = v5;
        if ( ((*v20 >> 18) & 0x3FFFFFF8) == 0x3DE00000 )
          v21 = 0xFFFFF78000200000uLL;
        v23 = 0;
        v24 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v5 >= *v2 )
        {
          while ( v22 <= 0xFFFFF6FFFFFFFFFFuLL
               && ((v22 >> 9) & 0x7FFFFFFFF8LL) - *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 8) != 0xFFFFF6FB7DBEDF68uLL )
          {
            if ( v22 >= v24
              && v22 <= (((unsigned __int64)(*(_QWORD *)(*v20 + 104) - 1LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
            {
              return 0;
            }
            if ( v23 != 1 )
            {
              ++v23;
              v22 = (__int64)(v22 << 25) >> 16;
              v24 &= 0xFFFFFFFFFFFFF000uLL;
              if ( v22 >= 0xFFFFF68000000000uLL )
                continue;
            }
            break;
          }
        }
      }
      ++v19;
      v20 += 32;
    }
    while ( v19 < 3 );
    if ( (_QWORD)xmmword_14034EAE0 )
    {
      if ( qword_14034EAF0 )
      {
        v25 = (((unsigned __int64)xmmword_14034EAE0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v26 = 0;
        v27 = v5;
        if ( v5 >= 0xFFFFF68000000000uLL )
        {
          while ( v27 <= 0xFFFFF6FFFFFFFFFFuLL && ((v27 >> 9) & 0x7FFFFFFFF8LL) != 0x7B7DBEDF68LL )
          {
            if ( v27 >= v25
              && v27 <= (((unsigned __int64)(qword_14034EAF0 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
            {
              return 0;
            }
            if ( v26 != 1 )
            {
              ++v26;
              v27 = (__int64)(v27 << 25) >> 16;
              v25 &= 0xFFFFFFFFFFFFF000uLL;
              if ( v27 >= 0xFFFFF68000000000uLL )
                continue;
            }
            break;
          }
        }
      }
    }
    v28 = ((unsigned int)HIDWORD(*(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10)) >> 8) & 0x3FF;
    if ( v28 == 1023 )
      v29 = MiSystemPartition;
    else
      v29 = *(__int16 **)(qword_14034F0E8 + 8LL * v28);
    v30 = *((_DWORD *)v29 + 1334);
    v31 = 0;
    if ( v30 )
    {
      v32 = v29 + 2672;
      do
      {
        v33 = *(_QWORD *)(*(_QWORD *)v32 + 176LL);
        if ( v33 )
        {
          if ( v15 >= v33 && v15 < v33 + 4LL * *(_QWORD *)(*(_QWORD *)v32 + 8LL) )
            return 0;
        }
        ++v31;
        v32 += 4;
      }
      while ( v31 < v30 );
    }
    if ( v15 + 0x200000000000LL <= 0xFFFFFFFFFFFLL )
    {
      if ( _bittest64((const signed __int64 *)qword_14034FBA8[0], v6 >> 9) )
        return (unsigned int)(v6 & 0x1FF) + 1;
      if ( *(_WORD *)(a1 + 32) > 1u || (MiFlags & 0x800) != 0 )
        return 1;
      if ( a2 == 1 )
      {
        v34 = *(_QWORD *)v5;
        if ( v5 + 0x90482413000LL <= 0x7F8 )
          LOWORD(v34) = MiReadPteShadow(v5, *(_QWORD *)v5);
        if ( (v34 & 1) == 0 || (v34 & 0x200) != 0 )
          return 1;
      }
      return 0;
    }
    if ( (v15 < MmPfnDatabase || v15 > MmPfnDatabase + (MxPfnAllocation << 12))
      && (!PsNtosImageBase
       || (v15 < (unsigned __int64)PsNtosImageBase || v15 >= PsNtosImageEnd)
       && (v15 < (unsigned __int64)PsHalImageBase || v15 >= PsHalImageEnd)) )
    {
      return 1;
    }
LABEL_75:
    if ( !_bittest64((const signed __int64 *)qword_14034FBA8[0], v6 >> 9) )
      return 1;
    return (unsigned int)(v6 & 0x1FF) + 1;
  }
  if ( PsInitialSystemProcess && v6 == PsInitialSystemProcess->DirectoryTableBase >> 12 )
    return 1;
  v35 = (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v36 = 0;
  for ( i = 0; i < 3; ++i )
  {
    if ( v5 >= v13 && v5 <= v35 )
    {
      if ( *(_WORD *)(a1 + 32) > 1u )
        return 1;
      LOBYTE(v36) = (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000;
      return v36;
    }
    v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v35 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  if ( v14 == v6 )
  {
    v12 = 0;
    if ( v5 == 0xFFFFF6FB7DBEDF68uLL && *(_WORD *)(a1 + 32) <= 1u )
      return v12;
    return 1;
  }
  v38 = *(_QWORD *)(a1 + 24);
  v39 = v38 & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v38 & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
  {
    if ( (v38 & 0xFFFFFFFFFLL) != 0 && v15 + 0x70000000000LL > 0x1FFF )
    {
      v40 = *(_WORD *)(a1 + 32);
      if ( v40 <= 1u && v40 <= v39 )
        return 0;
    }
    return 1;
  }
  if ( v15 + 0x400000000000LL > 0xF7FFFFFFFFFLL )
  {
    if ( !(unsigned int)MiPageInRange(a1, 0xFFFFF6FAC0000000uLL, 0xFFFFF6FB3FFFFFF8uLL, 0LL) )
      return 1;
    LOBYTE(v36) = *(_WORD *)(a1 + 32) > 1u;
    return v36;
  }
  else
  {
    if ( *(_WORD *)(a1 + 32) > 1u )
      return 1;
    LOBYTE(v36) = v39 >= 0x10000;
    return v36;
  }
}

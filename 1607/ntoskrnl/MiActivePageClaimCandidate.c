/*
 * XREFs of MiActivePageClaimCandidate @ 0x1401037E0
 * Callers:
 *     MiPfnsWorthTrying @ 0x1401029B0 (MiPfnsWorthTrying.c)
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x14004E500 (MiIsPfnFileOnly.c)
 *     MiSessionWsMetaPage @ 0x140103DF0 (MiSessionWsMetaPage.c)
 *     MiPageInRange @ 0x140103ED0 (MiPageInRange.c)
 *     MiSystemWsMetaPage @ 0x140103FD0 (MiSystemWsMetaPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiActivePageClaimCandidate(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r11
  __int64 v10; // r13
  unsigned __int16 v11; // r12
  int *v12; // rax
  unsigned int v13; // ebx
  unsigned int v14; // r9d
  __int64 *v15; // r10
  __int64 v16; // r8
  __int64 v17; // rdx
  int IsPfnFileOnly; // eax
  int v19; // r8d
  unsigned __int16 v20; // ax
  __int64 v21; // r11
  unsigned __int64 v22; // rdi
  int *v23; // rax
  unsigned int v24; // r9d
  unsigned int v25; // edx
  int *v26; // r8
  unsigned __int64 v27; // rcx
  __int16 v28; // ax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned int i; // r8d
  bool v32; // cc
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  unsigned __int16 v35; // ax
  char v37; // [rsp+40h] [rbp+0h] BYREF
  int v38; // [rsp+90h] [rbp+50h]

  v38 = a3;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v6 = 0x8000000000000000uLL;
  v7 = v4 | 0x8000000000000000uLL;
  v8 = ((unsigned __int64)v5 >> 63) + (v5 >> 3);
  if ( (*(_BYTE *)(a2 + 35) & 8) != 0 )
    return 1;
  v9 = *(_QWORD *)(a2 + 40);
  v10 = qword_140327038;
  v11 = (HIDWORD(v9) >> 8) & 0x3FF;
  v12 = v11 == 1023 ? MiSystemPartition : *(int **)(qword_140327038 + 8LL * v11);
  if ( v12 != (int *)a1 )
    return 1;
  v13 = 0;
  if ( !*(_BYTE *)(a1 + 5584) )
  {
LABEL_12:
    if ( (v9 & 0x200000000000000LL) != 0 )
    {
      v17 = *(_QWORD *)(a2 + 24);
      if ( (v17 & 0x4000000000000000LL) == 0 && v7 != qword_1403269C8 && v7 != qword_1403269D0 )
      {
        if ( a3 != 1 || (IsPfnFileOnly = MiIsPfnFileOnly(a2), IsPfnFileOnly != v19) )
        {
          if ( (v9 & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
            return (unsigned int)(v8 & 0x1FF) + 1;
          v20 = *(_WORD *)(a2 + 32);
          if ( v20 <= 1u && v20 <= (v17 & 0x3FFFFFFFFFFFFFFFuLL) && *(_QWORD *)a2 )
          {
            LOBYTE(v13) = (v4 & v6) == 0;
            return v13;
          }
        }
      }
    }
    else if ( v7 != -8LL
           && (v7 < qword_140327F60[0] || v7 >= qword_140327F60[0] + 0x100000000000LL)
           && (!qword_140326C70
            || v7 < qword_140326C70
            || v7 >= qword_140326C70 + (qword_140326C50 << 21)
            || (*(_BYTE *)(48 * ((*(_QWORD *)(((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                         - 0x57FFFFFFFDALL) & 0xF0) != 0xD0)
           && ((v9 >> 54) & 7) != 1 )
    {
      v21 = v9 & 0xFFFFFFFFFLL;
      if ( v21 != 0xFFFFFFFFDLL && v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v22 = (__int64)(v7 << 25) >> 16;
        if ( *(_QWORD *)a2 )
        {
          if ( !PsInitialSystemProcess || v8 != PsInitialSystemProcess->DirectoryTableBase >> 12 )
          {
            v29 = 0xFFFFF6FB40000000uLL;
            v30 = 0xFFFFF6FB5FFFFFF8uLL;
            for ( i = 0; i < 3; ++i )
            {
              if ( v7 >= v29 && v7 <= v30 )
              {
                if ( *(_WORD *)(a2 + 32) > 1u )
                  return 1;
                LOBYTE(v13) = (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000;
                return v13;
              }
              v29 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v30 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            }
            if ( v21 == v8 )
            {
              if ( v7 != 0xFFFFF6FB7DBEDF68uLL )
                return 1;
              v32 = *(_WORD *)(a2 + 32) <= 1u;
            }
            else
            {
              v33 = *(_QWORD *)(a2 + 24);
              v34 = v33 & 0x3FFFFFFFFFFFFFFFLL;
              if ( (v33 & 0x3FFFFFFFFFFFFFFFuLL) > 1 )
              {
                if ( v22 < qword_140327F70 || v22 >= qword_140327F70 + 0xF8000000000LL )
                {
                  if ( !(unsigned int)MiPageInRange(
                                        a2,
                                        (((unsigned __int64)qword_140327FD0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                                        (((unsigned __int64)qword_140326D38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                                        0LL) )
                    return 1;
                  LOBYTE(v13) = *(_WORD *)(a2 + 32) > 1u;
                }
                else
                {
                  if ( *(_WORD *)(a2 + 32) > 1u )
                    return 1;
                  LOBYTE(v13) = v34 >= 0x10000;
                }
                return v13;
              }
              if ( (v33 & 0xFFFFFFFFFLL) == 0 || v22 >= qword_140326958 && v22 < qword_140326958 + 0x2000 )
                return 1;
              v35 = *(_WORD *)(a2 + 32);
              if ( v35 > 1u )
                return 1;
              v32 = v35 <= v34;
            }
            if ( v32 )
              return v13;
          }
        }
        else
        {
          if ( (unsigned int)MiPageInRange(
                               a2,
                               (((unsigned __int64)qword_140327FD0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                               (((unsigned __int64)qword_140326D38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                               0LL)
            || (unsigned int)MiSystemWsMetaPage(a2, (unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFE0uLL)
            || (unsigned int)MiSessionWsMetaPage(a2) )
          {
            return v13;
          }
          if ( v11 == 1023 )
            v23 = MiSystemPartition;
          else
            v23 = *(int **)(v10 + 8LL * v11);
          v24 = v23[1574];
          v25 = 0;
          if ( v24 )
          {
            v26 = v23 + 1576;
            do
            {
              v27 = *(_QWORD *)(*(_QWORD *)v26 + 216LL);
              if ( v27 )
              {
                if ( v22 >= v27 && v22 < v27 + 4LL * *(_QWORD *)(*(_QWORD *)v26 + 8LL) )
                  return v13;
              }
              ++v25;
              v26 += 2;
            }
            while ( v25 < v24 );
          }
          if ( v22 >= qword_140327F60[0]
            && v22 < qword_140327F60[0] + 0x100000000000LL
            && *(_WORD *)(a2 + 32) <= 1u
            && (MiFlags & 0x800) == 0 )
          {
            if ( v38 != 1 )
              return v13;
            v28 = MI_READ_PTE_LOCK_FREE(v7);
            if ( (v28 & 1) != 0 && (v28 & 0x200) == 0 )
              return v13;
          }
        }
      }
    }
    return 1;
  }
  v14 = 0;
  v15 = MiLargePageSizes;
  v16 = a1 + 5592;
  while ( !*(_QWORD *)v16 || !_bittest64(*(const signed __int64 **)(v16 + 8), v8 / *v15) )
  {
    ++v14;
    v16 += 16LL;
    ++v15;
    if ( v14 >= 2 )
    {
      v10 = qword_140327038;
      v6 = 0x8000000000000000uLL;
      a3 = v38;
      goto LABEL_12;
    }
  }
  return ((unsigned int)v8 & (LODWORD(MiLargePageSizes[v14]) - 1)) + 1;
}

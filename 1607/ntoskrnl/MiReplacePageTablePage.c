/*
 * XREFs of MiReplacePageTablePage @ 0x1400A3B30
 * Callers:
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x1401E3504 (MmStealTopLevelPage.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetLeafVa @ 0x1401F2468 (MiGetLeafVa.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1401F2DE4 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiReplacePageTablePage(__int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // r15
  ULONG_PTR v3; // rbx
  int v4; // r14d
  __int64 *v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // r9d
  __int64 v9; // r13
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r10d
  unsigned __int64 LeafVa; // r9
  __int64 v14; // r12
  ULONG_PTR v15; // rsi
  char *v16; // rbx
  __int64 v17; // rax
  char v18; // r10
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r10
  bool v22; // zf
  __int64 v23; // r11
  int v24; // r10d
  unsigned __int64 v25; // rbx
  __int64 v26; // r13
  ULONG_PTR v27; // r9
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // r9
  unsigned __int8 v31; // r11
  __int64 v32; // rcx
  __int64 v33; // r10
  ULONG_PTR v34; // r14
  int v35; // edi
  ULONG_PTR v36; // rsi
  __int64 v37; // r14
  unsigned __int8 v38; // r11
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r9
  __int64 v42; // r10
  char v43; // r11
  __int64 v44; // rdi
  __int64 *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 v48; // r11
  __int64 result; // rax
  __int64 v50; // rax
  unsigned __int8 v51; // r10
  __int64 v52; // rcx
  int v53; // [rsp+28h] [rbp-E0h]
  int v54; // [rsp+28h] [rbp-E0h]
  __int64 v55; // [rsp+30h] [rbp-D8h] BYREF
  int v56; // [rsp+38h] [rbp-D0h]
  int v57; // [rsp+3Ch] [rbp-CCh]
  __int64 v58; // [rsp+40h] [rbp-C8h]
  __int64 v59; // [rsp+48h] [rbp-C0h]
  __int64 *v60; // [rsp+50h] [rbp-B8h]
  ULONG_PTR v61; // [rsp+58h] [rbp-B0h]
  __int64 v62; // [rsp+60h] [rbp-A8h]
  __int64 v63; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+70h] [rbp-98h]
  __int64 v65; // [rsp+78h] [rbp-90h]
  int v66; // [rsp+88h] [rbp-80h] BYREF
  __int16 v67; // [rsp+8Ch] [rbp-7Ch]
  __int64 v68; // [rsp+90h] [rbp-78h]
  __int64 v69; // [rsp+98h] [rbp-70h]
  __int64 v70; // [rsp+A0h] [rbp-68h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = a1;
  v3 = *(_QWORD *)a1;
  v64 = a1;
  v4 = 0;
  *(_DWORD *)(a1 + 56) = -1073741823;
  v5 = *(__int64 **)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 24);
  v60 = v5;
  v61 = v3;
  v59 = v1;
  v62 = v6;
  v58 = v1;
  v7 = 48 * v1 - 0x58000000000LL;
  v8 = *(_DWORD *)(v2 + 60);
  v9 = 48 * v6 - 0x58000000000LL;
  v65 = v9;
  if ( v8 == 1 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 1536LL);
    if ( !v10 )
      return MiSetOriginalPtePfnFromFreeList(v9 + 16);
    v63 = MI_READ_PTE_LOCK_FREE(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v11 = MI_GET_PAGE_FRAME_FROM_PTE(&v63);
    if ( v11 != v1 )
      return MiSetOriginalPtePfnFromFreeList(v9 + 16);
  }
  v12 = 1;
  if ( (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFLL) == v1 )
  {
    v57 = 1;
    if ( v8 == 1 )
      v58 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 40LL) >> 12;
  }
  else
  {
    v57 = 0;
    LeafVa = MiGetLeafVa(v3);
    if ( LeafVa > 0x7FFFFFFEFFFFLL
      && (LeafVa < qword_140327FD0 || LeafVa > qword_140326D38)
      && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      if ( LeafVa < qword_140326950 || (v12 = 2, LeafVa >= qword_140326950 + 0x8000000000LL) )
        v12 = 0;
    }
  }
  v67 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v14 = -(__int64)v5;
  v15 = v3;
  v68 = 20LL;
  v16 = (char *)v60 - v3;
  v66 = v12;
  v53 = 0;
  v56 = 0;
  do
  {
    while ( 1 )
    {
      v17 = MI_READ_PTE_LOCK_FREE(v15);
      v18 = 1;
      v55 = v17;
      v19 = v17;
      if ( (v17 & 1) != 0 )
        break;
      if ( (v17 & 0x400) != 0 || (v17 & 0x800) == 0 )
        goto LABEL_22;
      if ( MiLockTransitionLeafPage(v15) )
      {
        v20 = MI_READ_PTE_LOCK_FREE(v15);
        v22 = (*(_BYTE *)(v21 + 34) & 0x20) == 0;
        v19 = v20;
        v55 = v20;
        if ( !v22 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !v4 )
            return MiSetOriginalPtePfnFromFreeList(v9 + 16);
          while ( 1 )
          {
            do
            {
              do
              {
LABEL_73:
                v15 -= 8LL;
                v50 = MI_READ_PTE_LOCK_FREE(v15);
                v55 = v50;
              }
              while ( ((unsigned __int8)v50 & v51) != 0 );
            }
            while ( (v50 & 0x400) != 0 || (v50 & 0x800) == 0 );
            v52 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v55) - 0x58000000000LL;
            if ( !--v4 )
              break;
            _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v9 = v65;
          return MiSetOriginalPtePfnFromFreeList(v9 + 16);
        }
        v18 = 1;
        ++v4;
LABEL_22:
        v23 = v58;
LABEL_23:
        if ( v23 != v59 )
        {
          v19 &= -(__int64)(((unsigned __int8)v18 & (unsigned __int8)v19) != 0);
          v55 = v19;
        }
        goto LABEL_25;
      }
    }
    ++v53;
    if ( MI_GET_PAGE_FRAME_FROM_PTE(&v55) == qword_1403276C8 )
      v56 += v24;
    if ( v58 != v59 )
    {
      v19 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v2 + 64) + 8 * ((__int64)&v16[v14 + v15] >> 3));
      v55 = v19;
      goto LABEL_23;
    }
LABEL_25:
    *(_QWORD *)&v16[v15] = v19;
    v15 += 8LL;
  }
  while ( (v15 & 0xFFF) != 0 );
  if ( v4 )
    MiLockNestedPageAtDpcInline(v7);
  else
    MiLockPageAtDpcInline(v7);
  v25 = *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v57 && *(unsigned __int16 *)(v7 + 24) != (unsigned __int64)(unsigned int)(v4 + v53 - v56 + 1)
    || *(_WORD *)(v7 + 32) != 1
    || v25 >= 0x10000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v4 )
      return MiSetOriginalPtePfnFromFreeList(v9 + 16);
    goto LABEL_73;
  }
  MiLockNestedPageAtDpcInline(v9);
  *(_QWORD *)(v9 + 24) ^= (v25 ^ *(_QWORD *)(v9 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v26 = v58;
  if ( v4 )
  {
    v27 = v61;
    v28 = v59;
    do
    {
      v29 = MI_READ_PTE_LOCK_FREE(v27);
      v55 = v29;
      if ( ((unsigned __int8)v29 & v31) == 0 && (v29 & 0x400) == 0 && (v29 & 0x800) != 0 )
      {
        v32 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v55) - 0x58000000000LL;
        if ( (*(_QWORD *)(v32 + 40) & 0xFFFFFFFFFLL) == v26 && v26 == v28 )
          *(_QWORD *)(v32 + 40) ^= (v33 ^ *(_QWORD *)(v32 + 40)) & 0xFFFFFFFFFLL;
        --v4;
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v27 = v30 + 8;
    }
    while ( v4 );
    v2 = v64;
  }
  v34 = v61;
  v35 = v53;
  v36 = v61;
  if ( v53 )
  {
    v37 = -(__int64)v61;
    do
    {
      v55 = MI_READ_PTE_LOCK_FREE(v36);
      if ( ((unsigned __int8)v55 & v38) != 0 )
      {
        v54 = --v35;
        v39 = MI_GET_PAGE_FRAME_FROM_PTE(&v55);
        if ( MiIsPfnInline(v39) && v42 != v26 )
        {
          v44 = 48 * v42 - 0x58000000000LL;
          MiLockPageAtDpcInline(v44);
          v40 = 0xFFFFFFFFFLL;
          if ( (*(_QWORD *)(v44 + 40) & 0xFFFFFFFFFLL) == v26 && v26 == v59 )
            *(_QWORD *)(v44 + 40) ^= (v62 ^ *(_QWORD *)(v44 + 40)) & 0xFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v41 = v55;
          v43 = 1;
          v35 = v54;
        }
        if ( v26 != v59 )
          v41 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v2 + 64) + 8 * ((__int64)(v37 + v36) >> 3));
        if ( ((unsigned __int8)v41 & (unsigned __int8)v43) != 0 )
        {
          v45 = v60;
          v55 = v41 | 0x20;
          *v60 = v41 | 0x20;
          if ( (unsigned int)MiPteInShadowRange(v45, v40) )
            MiWritePteShadow(v46, v47);
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
            MiInsertTbFlushEntry(&v66, (__int64)(v36 << 25) >> 16, v48);
        }
      }
      ++v60;
      v36 += 8LL;
    }
    while ( v35 );
    v34 = v61;
  }
  result = MiFlushTbList(&v66);
  if ( v57 == 1 )
    result = MiInsertTbFlushEntry(*(_QWORD *)(v2 + 32), v34, 1LL);
  *(_DWORD *)(v2 + 56) = 0;
  return result;
}

/*
 * XREFs of MiReplacePageTablePage @ 0x1400D98A0
 * Callers:
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x1400D95E8 (MmStealTopLevelPage.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x14001068C (MiLockTransitionLeafPage.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiGetLeafVa @ 0x1401DFF14 (MiGetLeafVa.c)
 */

__int64 __fastcall MiReplacePageTablePage(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r11
  ULONG_PTR v3; // r10
  int v4; // ebp
  __int64 *v5; // rsi
  __int64 v6; // r15
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // r14
  __int64 result; // rax
  unsigned __int64 v11; // rcx
  __int64 PteAddress; // rax
  int v13; // r8d
  unsigned __int64 LeafVa; // rax
  __int64 v15; // r13
  ULONG_PTR v16; // rsi
  ULONG_PTR v17; // rdi
  int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r13d
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 i; // rbx
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 *v33; // rbp
  __int64 v34; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbx
  __int64 v39; // rbx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // [rsp+20h] [rbp-88h]
  __int64 v43; // [rsp+28h] [rbp-80h]
  __int64 v44; // [rsp+30h] [rbp-78h]
  __int64 v45; // [rsp+38h] [rbp-70h]
  __int64 v46; // [rsp+40h] [rbp-68h]
  __int64 v47; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v48; // [rsp+50h] [rbp-58h]
  __int64 v49; // [rsp+B0h] [rbp+8h]
  int v50; // [rsp+B8h] [rbp+10h]
  int v51; // [rsp+C0h] [rbp+18h]
  __int64 v52; // [rsp+C8h] [rbp+20h] BYREF

  v49 = a1;
  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v5 = *(__int64 **)(a1 + 16);
  v6 = v1;
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(_DWORD *)(a1 + 68);
  v45 = *(_QWORD *)(a1 + 32);
  v9 = 48 * v1 - 0x58000000000LL;
  *(_DWORD *)(a1 + 64) = -1073741823;
  v43 = v3;
  v42 = v1;
  v48 = v5;
  v44 = v7;
  v46 = 48 * v45 - 0x58000000000LL;
  if ( v8 == 1 )
  {
    result = *(_QWORD *)(a1 + 56);
    v11 = *(_QWORD *)(result + 1528);
    if ( !v11 )
      goto LABEL_76;
    PteAddress = MiGetPteAddress(v11);
    v47 = MI_READ_PTE_LOCK_FREE(PteAddress);
    result = MI_GET_PAGE_FRAME_FROM_PTE(&v47);
    if ( result != v1 )
      goto LABEL_76;
    a1 = v49;
    v2 = 0LL;
    v7 = v44;
    v3 = v43;
  }
  v13 = 1;
  if ( (*(_QWORD *)(v9 + 40) & 0xFFFFFFFFFLL) == v1 )
  {
    v51 = 1;
    if ( v8 == 1 )
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 40LL) >> 12;
  }
  else
  {
    v51 = 0;
    LeafVa = MiGetLeafVa(v3);
    if ( LeafVa > (unsigned __int64)MmHighestUserAddress && LeafVa + 0xA8000000000LL > 0x17FFFFFFFFFLL )
    {
      v13 = v2;
      if ( LeafVa + 0x70000000000LL <= 0x7FFFFFFFFFLL )
        v13 = 2;
    }
  }
  *(_QWORD *)(v7 + 8) = 20LL;
  v15 = -(__int64)v5;
  *(_DWORD *)v7 = v13;
  *(_WORD *)(v7 + 4) = 0;
  v16 = (ULONG_PTR)v5 - v3;
  *(_QWORD *)(v7 + 16) = v2;
  v17 = v3;
  *(_QWORD *)(v7 + 24) = v2;
  v18 = v2;
  v50 = v2;
  do
  {
    v19 = MI_READ_PTE_LOCK_FREE(v17);
    v52 = v19;
    v22 = v19;
    if ( (v19 & 1) != 0 )
    {
      ++v50;
      if ( MI_GET_PAGE_FRAME_FROM_PTE(&v52) == qword_1402FF238 )
        ++v18;
      if ( v6 == v42 )
        goto LABEL_27;
      v22 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v49 + 72) + 8 * ((__int64)(v17 + v16 + v15) >> 3));
      v52 = v22;
    }
    else if ( (v19 & 0x400) == 0 && (v19 & 0x800) != 0 )
    {
      result = MiLockTransitionLeafPage(v17, (_BYTE *)(v4 != 0));
      if ( !result )
        continue;
      if ( (*(_BYTE *)(result + 34) & 0x20) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_71;
      }
      ++v4;
    }
    if ( v6 != v42 )
    {
      if ( (v22 & 1) == 0 )
        v22 = 0LL;
      v52 = v22;
    }
LABEL_27:
    *(_QWORD *)(v16 + v17) = v22;
    v17 += 8LL;
  }
  while ( (v17 & 0xFFF) != 0 );
  if ( v4 )
    result = MiLockNestedPageAtDpcInline(v9, v20, v21);
  else
    result = MiLockPageAtDpcInline(v9, v20, v21);
  v25 = v50;
  v26 = *(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v51 || (result = *(unsigned __int16 *)(v9 + 24), result == v4 + v50 - v18 + 1) )
  {
    if ( *(_WORD *)(v9 + 32) == 1 && v26 < 0x10000 )
    {
      MiLockNestedPageAtDpcInline(v46, v23, v24);
      *(_QWORD *)(v46 + 24) ^= (v26 ^ *(_QWORD *)(v46 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v4 )
      {
        for ( i = v43; ; i += 8LL )
        {
          v29 = MI_READ_PTE_LOCK_FREE(i);
          v52 = v29;
          if ( (v29 & 1) == 0 && (v29 & 0x400) == 0 && (v29 & 0x800) != 0 )
          {
            v30 = 48 * ((v29 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v27 = *(_QWORD *)(v30 + 40);
            if ( (v27 & 0xFFFFFFFFFLL) == v6 && v6 == v42 )
              *(_QWORD *)(v30 + 40) = v27 ^ (v45 ^ v27) & 0xFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !--v4 )
              break;
          }
        }
        v25 = v50;
      }
      v31 = v43;
      v32 = v43;
      if ( v25 )
      {
        v33 = v48;
        do
        {
          v52 = MI_READ_PTE_LOCK_FREE(v32);
          v34 = v52;
          if ( (v52 & 1) != 0 )
          {
            --v25;
            v35 = MI_GET_PAGE_FRAME_FROM_PTE(&v52);
            if ( MI_IS_PFN(v35) && v37 != v6 )
            {
              v38 = 48 * v37 - 0x58000000000LL;
              MiLockPageAtDpcInline(v38, v27, v36);
              v27 = 0xFFFFFFFFFLL;
              if ( (*(_QWORD *)(v38 + 40) & 0xFFFFFFFFFLL) == v6 && v6 == v42 )
                *(_QWORD *)(v38 + 40) ^= (v45 ^ *(_QWORD *)(v38 + 40)) & 0xFFFFFFFFFLL;
              _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v34 = v52;
            }
            if ( v6 != v42 )
              v34 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v49 + 72) + 8 * ((v32 - v43) >> 3));
            if ( (v34 & 1) != 0 )
            {
              v39 = v34 | 0x20;
              v52 = v39;
              *v33 = v39;
              if ( (unsigned int)MiPteInShadowRange(v33) )
                MiWritePteShadow(v33, v39);
              if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
                MiInsertTbFlushEntry(v44, v32 << 25 >> 16, 1LL, 0);
            }
          }
          v32 += 8LL;
          ++v33;
        }
        while ( v25 );
        v31 = v43;
      }
      MiFlushTbList(v44, (_KPROCESS *)v27);
      if ( v51 == 1 )
        MiInsertTbFlushEntry(*(_QWORD *)(v49 + 40), v31, 1LL, 0);
      result = v49;
      *(_DWORD *)(v49 + 64) = 0;
      return result;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_71:
  if ( v4 )
  {
    while ( 1 )
    {
      do
      {
        v17 -= 8LL;
        v40 = MI_READ_PTE_LOCK_FREE(v17);
        v52 = v40;
      }
      while ( (v40 & 1) != 0 );
      if ( (v40 & 0x400) == 0 && (v40 & 0x800) != 0 )
      {
        v41 = 3 * ((v40 >> 12) & 0xFFFFFFFFFLL);
        result = 0x58000000000LL;
        _InterlockedAnd64((volatile signed __int64 *)(16 * v41 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !--v4 )
          break;
      }
    }
  }
LABEL_76:
  *(_QWORD *)(v46 + 16) = 128LL;
  return result;
}

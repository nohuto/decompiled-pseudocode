/*
 * XREFs of MiDeleteSystemPte @ 0x1401141C8
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x140114000 (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSystemPte @ 0x1401141C8 (MiDeleteSystemPte.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x140010618 (MiDeleteTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     MiDeleteSystemPte @ 0x1401141C8 (MiDeleteSystemPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiDeleteSystemPte(ULONG_PTR a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v4; // rsi
  ULONG_PTR i; // rdi
  int v6; // eax
  int v7; // ebp
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 result; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rsi
  _DWORD *v19; // rbx
  __int64 v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+10h]
  _QWORD *v23; // [rsp+70h] [rbp+18h]
  _DWORD *v24; // [rsp+78h] [rbp+20h]

  v24 = a4;
  v23 = a3;
  v22 = a2;
  v4 = a3;
  for ( i = a1; ; a1 = i )
  {
    v7 = 0;
    v8 = MI_READ_PTE_LOCK_FREE(a1);
    v21 = v8;
    if ( !v8 )
      break;
    if ( (v8 & 1) != 0 )
    {
      v9 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v21) - 0x58000000000LL;
      if ( v9 == qword_1402FF230 )
      {
        *(_QWORD *)i = 0LL;
        if ( (unsigned int)MiPteInShadowRange(i) )
          MiWritePteShadow(i, 0LL);
      }
      else
      {
        v10 = *(_QWORD *)(v9 + 40) & 0xFFFFFFFFFLL;
        *(_QWORD *)i = 0LL;
        v20 = 48 * v10 - 0x58000000000LL;
        if ( (unsigned int)MiPteInShadowRange(i) )
          MiWritePteShadow(i, 0LL);
        MiLockPageAtDpcInline(v9, v11, v12);
        *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
        if ( (unsigned int)MiDecrementShareCount(v9) == 3 )
        {
          v14 = (__int64)v23;
          ++v23[1];
        }
        if ( v10 != 0xFFFFFFFFFLL )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v9 = 48 * v10 - 0x58000000000LL;
          MiLockPageAtDpcInline(v20, v13, v14);
          MiDecrementShareCount(v20);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v7 = 1;
      }
      MiInsertTbFlushEntry(v22, (__int64)(i << 25) >> 16, 1LL, 0);
      v4 = v23;
LABEL_25:
      if ( v7 != 1 )
        break;
      goto LABEL_26;
    }
    if ( (v8 & 0x800) == 0 )
    {
      MiReleasePageFileSpace((__int64)MiSystemPartition, v8, 1);
      *(_QWORD *)i = 0LL;
      if ( (unsigned int)MiPteInShadowRange(i) )
        MiWritePteShadow(i, 0LL);
      v7 = 1;
      goto LABEL_25;
    }
    v6 = MiDeleteTransitionPte(i, 1);
    if ( v6 != 1 )
    {
      if ( v6 == 3 )
        ++v4[1];
      v7 = 1;
LABEL_26:
      ++v4[3];
      break;
    }
  }
  if ( i >= (((unsigned __int64)qword_1402FE5E8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && i < (((unsigned __int64)qword_1402FE5F8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v7 = 0;
  }
  if ( v7 == 1 )
    ++*v4;
  result = 0xFFFFF6FB7DBEDF68uLL;
  v16 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v16 != 0xFFFFF6FB7DBEDF68uLL )
  {
    v21 = MI_READ_PTE_LOCK_FREE(v16);
    v17 = *(_QWORD *)(MI_GET_PFN_FROM_PTE(&v21) + 24);
    result = 0x3FFFFFFFFFFFFFFFLL;
    if ( (v17 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    {
      v18 = v16 << 25 >> 16;
      do
      {
        result = MI_READ_PTE_LOCK_FREE(v18);
        if ( result && (result & 1) == 0 )
          break;
        v18 += 8LL;
      }
      while ( (v18 & 0xFFF) != 0 );
      if ( (v18 & 0xFFF) == 0 )
      {
        v19 = v24;
        result = MiDeleteSystemPte(v16, v22, v23, v24);
        *v19 = 1;
      }
    }
  }
  return result;
}

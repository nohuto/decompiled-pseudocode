/*
 * XREFs of RemoveListHeadPte @ 0x14001BA7C
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteLink @ 0x1401F24AC (MiGetPteLink.c)
 *     MiMakeLinkedListPte @ 0x1401F256C (MiMakeLinkedListPte.c)
 */

__int64 __fastcall RemoveListHeadPte(_QWORD *a1)
{
  __int64 PteLink; // rax
  __int64 v2; // r11
  ULONG_PTR v3; // rax
  ULONG_PTR v4; // r10
  ULONG_PTR v5; // rax
  _QWORD *v6; // r10
  __int64 v7; // rax
  __int64 LinkedListPte; // rax
  __int64 *v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // r8
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx

  PteLink = MiGetPteLink(*a1);
  v3 = MI_READ_PTE_LOCK_FREE(v2 + 8 * PteLink);
  if ( (v3 & 1) != 0 || (v3 & 0x3E0) != 0 )
    KeBugCheckEx(0x1Au, 0x3800uLL, v4, v3, 0LL);
  v5 = MI_READ_PTE_LOCK_FREE(v4 + 8);
  if ( (v5 & 1) != 0 || (v5 & 0x3E0) != 0 )
    KeBugCheckEx(0x1Au, 0x3801uLL, (ULONG_PTR)v6, v5, 0LL);
  v7 = MiGetPteLink(*v6);
  LinkedListPte = MiMakeLinkedListPte(v7);
  *v9 = LinkedListPte;
  v12 = (__int64)((((unsigned __int64)v9 >> 9) & 0x7FFFFFFFF8LL) - v11 - 0x98000000000LL) >> 3;
  if ( v13 == v12 )
  {
    v9[1] = LinkedListPte;
  }
  else
  {
    v14 = MiMakeLinkedListPte(v12);
    v17 = (__int64 *)(v15 + 8 + 8 * v16);
    *v17 = v14;
    if ( (unsigned int)MiPteInShadowRange(v17, v14) )
      MiWritePteShadow(v19, v18);
  }
  return v10;
}

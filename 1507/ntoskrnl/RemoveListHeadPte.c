/*
 * XREFs of RemoveListHeadPte @ 0x14003E468
 * Callers:
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x140225B3C (MiGetPteLink.c)
 *     MiMakeLinkedListPte @ 0x140225C20 (MiMakeLinkedListPte.c)
 */

ULONG_PTR *__fastcall RemoveListHeadPte(_QWORD *a1)
{
  __int64 PteLink; // rax
  __int64 v2; // r10
  ULONG_PTR *v3; // rbx
  ULONG_PTR PteShadow; // rax
  __int64 v5; // r11
  ULONG_PTR v6; // rax
  __int64 v7; // rax
  __int64 LinkedListPte; // rax
  __int64 v9; // rdx
  __int64 *v10; // r9
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r10
  __int64 *v16; // rcx

  PteLink = MiGetPteLink(*a1);
  v3 = (ULONG_PTR *)(v2 + 8 * PteLink);
  PteShadow = *v3;
  if ( (unsigned __int64)(v3 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v3, *v3);
  if ( (PteShadow & 1) != 0 || (v5 = 992LL, (PteShadow & 0x3E0) != 0) )
    KeBugCheckEx(0x1Au, 0x3800uLL, (ULONG_PTR)v3, PteShadow, 0LL);
  v6 = v3[1];
  if ( (unsigned __int64)(v3 + 0x12090482601LL) <= 0x7F8 )
    v6 = MiReadPteShadow(v3 + 1, v3[1]);
  if ( (v6 & 1) != 0 || (v6 & v5) != 0 )
    KeBugCheckEx(0x1Au, 0x3801uLL, (ULONG_PTR)v3, v6, 0LL);
  v7 = MiGetPteLink(*v3);
  LinkedListPte = MiMakeLinkedListPte(v7, v7);
  *v10 = LinkedListPte;
  v12 = (__int64)((((unsigned __int64)v10 >> 9) & 0x7FFFFFFFF8LL) - v11 - 0x98000000000LL) >> 3;
  if ( v9 == v12 )
  {
    v10[1] = LinkedListPte;
  }
  else
  {
    v13 = MiMakeLinkedListPte(v12, v9);
    v16 = (__int64 *)(v15 + 8 * (v14 + 1));
    *v16 = v13;
    if ( (unsigned __int64)(v16 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(v16, v13);
  }
  return v3;
}

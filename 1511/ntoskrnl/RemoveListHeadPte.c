/*
 * XREFs of RemoveListHeadPte @ 0x1400B1A94
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400B1590 (MiObtainSystemCacheView.c)
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

_QWORD *__fastcall RemoveListHeadPte(unsigned __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r14
  _QWORD *v4; // rdi
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rbx

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = (_QWORD *)(v3 + 8LL * (*(_QWORD *)a1 >> 28));
  v5 = MI_READ_PTE_LOCK_FREE(v4);
  if ( (v5 & 1) != 0 || (v5 & 0x3E0) != 0 )
    KeBugCheckEx(0x1Au, 0x3800uLL, (ULONG_PTR)v4, v5, 0LL);
  v6 = MI_READ_PTE_LOCK_FREE(v4 + 1);
  if ( (v6 & 1) != 0 || (v6 & 0x3E0) != 0 )
    KeBugCheckEx(0x1Au, 0x3801uLL, (ULONG_PTR)v4, v6, 0LL);
  v7 = *v4 >> 28;
  *(_QWORD *)a1 = (v7 << 28) | v1 & 0xFFFFFFF;
  v8 = (__int64)(((a1 >> 9) & 0x7FFFFFFFF8LL) - v3 - 0x98000000000LL) >> 3;
  if ( v7 == v8 )
  {
    *(_QWORD *)(a1 + 8) = (v7 << 28) | *(_DWORD *)(a1 + 8) & 0xFFFFFFF;
  }
  else
  {
    v9 = v3 + 8 * v7;
    v10 = v8 << 28;
    *(_QWORD *)(v9 + 8) = v10;
    if ( (unsigned int)MiPteInShadowRange(v9 + 8) )
      MiWritePteShadow(v9 + 8, v10);
  }
  return v4;
}

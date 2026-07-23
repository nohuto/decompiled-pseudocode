/*
 * XREFs of MiDeletePhysmemVad @ 0x140111B20
 * Callers:
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiDereferenceIoPages @ 0x14009B770 (MiDereferenceIoPages.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiDeletePageTableHierarchy @ 0x1400E2BE0 (MiDeletePageTableHierarchy.c)
 *     MiDecreaseUsedPtesCount @ 0x1400E46BC (MiDecreaseUsedPtesCount.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiDeletePhysmemVad(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned __int64 v3; // r15
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  unsigned __int16 v10; // si
  __int64 v11; // rdi
  __int64 v12; // r13
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r9
  _KPROCESS *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *i; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  ULONG_PTR v29; // r10
  unsigned __int64 v30; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-D8h]
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v33; // [rsp+38h] [rbp-C8h]
  int v34; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v35; // [rsp+44h] [rbp-BCh]
  int v36; // [rsp+48h] [rbp-B8h]
  int v37; // [rsp+4Ch] [rbp-B4h]
  __int64 v38; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h]

  v1 = *(unsigned __int8 *)(a1 + 32);
  v2 = *(unsigned int *)(a1 + 24);
  v37 = 0;
  v35 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v34 = 1;
  v3 = (v2 | (v1 << 32)) << 12;
  v36 = 20;
  v4 = *(unsigned __int8 *)(a1 + 33);
  v5 = ((8 * (v2 | (v1 << 32))) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = *(unsigned int *)(a1 + 28);
  v7 = 8 * ((v6 | (v4 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v33 = v7;
  v8 = (v6 | (v4 << 32)) - (v2 | (v1 << 32)) + 1;
  do
  {
    v9 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v9 > v7 )
      v9 = v7;
    v31 = v9;
    v10 = ((__int64)(v9 - v5) >> 3) + 1;
    BugCheckParameter2 = MiGetUsedPtesHandle(v3);
    v11 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(((v3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) - 0x58000000000LL;
    MiLockPageAtDpcInline(v11);
    v12 = v10;
    *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) - v10)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiDecreaseUsedPtesCount(BugCheckParameter2, v10);
    v13 = v31;
    v8 -= v10;
    v14 = 0LL;
    do
    {
      v30 = MI_READ_PTE_LOCK_FREE(v5);
      v15 = MI_GET_PAGE_FRAME_FROM_PTE(&v30);
      if ( MiIsPfnInline(v15) )
      {
        *(_QWORD *)v5 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(v5, v16) )
          MiWritePteShadow(v18, 0LL);
      }
      else
      {
        v30 = v17 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        *(_QWORD *)v5 = v30;
        if ( (unsigned int)MiPteInShadowRange(v5, v16) )
          MiWritePteShadow(v19, v20);
        v14 = v5;
      }
      MiInsertTbFlushEntry((__int64)&v34, v3, 1LL, 0);
      v5 += 8LL;
      v3 += 4096LL;
    }
    while ( v5 <= v13 );
    if ( v14 )
    {
      MiFlushTbList((__int64)&v34, v21, v22, v23);
      for ( i = (_QWORD *)(v5 - 8 * v12); (unsigned __int64)i <= v14; ++i )
      {
        v25 = MI_READ_PTE_LOCK_FREE(i);
        v30 = v25;
        if ( v25 )
        {
          v30 = v25 & 0xFFFFFFFFFFFFFBFEuLL | 1;
          MI_GET_PAGE_FRAME_FROM_PTE(&v30);
          *i = 0LL;
          if ( (unsigned int)MiPteInShadowRange(i, v26) )
            MiWritePteShadow(v27, 0LL);
          MiDereferenceIoPages(v29, v28, v29);
        }
      }
      v5 = v31 + 8;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x3FF0000) == 0 )
      MiDeletePageTableHierarchy(&v34, v5 - 8);
    v7 = v33;
  }
  while ( v8 );
  MiFlushTbList((__int64)&v34, v21, v22, v23);
}

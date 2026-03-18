/*
 * XREFs of MiDeletePhysmemVad @ 0x1401061CC
 * Callers:
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiDeletePageTableHierarchy @ 0x14006D570 (MiDeletePageTableHierarchy.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiDereferenceIoPages @ 0x1400C1300 (MiDereferenceIoPages.c)
 *     MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x1400E12D8 (MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 */

void __fastcall MiDeletePhysmemVad(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 v4; // rcx
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int16 v11; // si
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r13
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdi
  _KPROCESS *v22; // rdx
  _QWORD *i; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  ULONG_PTR v26; // r14
  unsigned __int64 v27; // [rsp+20h] [rbp-E0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v29; // [rsp+30h] [rbp-D0h]
  __int64 v30; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v31; // [rsp+40h] [rbp-C0h]
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v33; // [rsp+54h] [rbp-ACh]
  int v34; // [rsp+58h] [rbp-A8h]
  int v35; // [rsp+5Ch] [rbp-A4h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h]

  v1 = *(unsigned __int8 *)(a1 + 32);
  v2 = *(unsigned int *)(a1 + 24);
  v3 = *(unsigned __int8 *)(a1 + 33);
  v4 = *(unsigned int *)(a1 + 28);
  v35 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v5 = (v2 | (v1 << 32)) << 12;
  v32 = 1;
  v33 = 0;
  v34 = 20;
  v6 = ((8 * (v2 | (v1 << 32))) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (v4 | ((unsigned __int64)(unsigned int)v3 << 32)) & 0xFFFFFFFFFLL;
  v8 = (v4 | (v3 << 32)) - (v2 | (v1 << 32)) + 1;
  v9 = 8 * v7 - 0x98000000000LL;
  v31 = v9;
  do
  {
    v10 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v10 > v9 )
      v10 = v9;
    v29 = v10;
    v11 = ((__int64)(v10 - v6) >> 3) + 1;
    BugCheckParameter2 = MI_GET_USED_PTES_HANDLE(v5);
    v12 = 48
        * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    MiLockPageAtDpcInline(v12, v13, v14);
    v15 = v11;
    *(_QWORD *)(v12 + 24) ^= (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) - v11)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER(BugCheckParameter2, v11, v16);
    v30 = v8 - v11;
    v17 = 0LL;
    v18 = v29;
    do
    {
      v27 = MI_READ_PTE_LOCK_FREE(v6);
      v19 = v27;
      v20 = MI_GET_PAGE_FRAME_FROM_PTE(&v27);
      if ( MI_IS_PFN(v20) )
      {
        *(_QWORD *)v6 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(v6) )
          MiWritePteShadow(v6, 0LL);
      }
      else
      {
        v21 = v19 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v27 = v21;
        *(_QWORD *)v6 = v21;
        if ( (unsigned int)MiPteInShadowRange(v6) )
          MiWritePteShadow(v6, v21);
        v17 = v6;
      }
      MiInsertTbFlushEntry((__int64)&v32, v5, 1LL, 0);
      v6 += 8LL;
      v5 += 4096LL;
    }
    while ( v6 <= v18 );
    v8 = v30;
    if ( v17 )
    {
      MiFlushTbList((__int64)&v32, v22);
      for ( i = (_QWORD *)(v6 - 8 * v15); (unsigned __int64)i <= v17; ++i )
      {
        v24 = MI_READ_PTE_LOCK_FREE(i);
        v27 = v24;
        if ( v24 )
        {
          v27 = v24 & 0xFFFFFFFFFFFFFBFEuLL | 1;
          v25 = MI_GET_PAGE_FRAME_FROM_PTE(&v27);
          *i = 0LL;
          v26 = v25;
          if ( (unsigned int)MiPteInShadowRange(i) )
            MiWritePteShadow(i, 0LL);
          MiDereferenceIoPages(1, v26, 1uLL);
        }
      }
      v6 = v29 + 8;
    }
    if ( ((*(_DWORD *)(BugCheckParameter2 + 16) >> 14) & 0x3FF) == 0 )
      MiDeletePageTableHierarchy(&v32, v6 - 8);
    v9 = v31;
  }
  while ( v8 );
  MiFlushTbList((__int64)&v32, v22);
}

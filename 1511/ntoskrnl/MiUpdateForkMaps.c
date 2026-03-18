/*
 * XREFs of MiUpdateForkMaps @ 0x1400FE6FC
 * Callers:
 *     MiCloneVads @ 0x14001D7C8 (MiCloneVads.c)
 * Callees:
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14001EC70 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiDoneWithThisPageGetAnother @ 0x1400EC988 (MiDoneWithThisPageGetAnother.c)
 *     MiBuildForkPageTable @ 0x1400EE1AC (MiBuildForkPageTable.c)
 *     MiMapSinglePage @ 0x1400FE59C (MiMapSinglePage.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiUpdateForkMaps(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        KIRQL a6)
{
  unsigned __int64 NextPageTable; // rax
  __int64 v9; // rbp
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  ULONG_PTR v13; // rax
  unsigned __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 *v17; // r13
  __int64 v18; // r14
  __int64 v19; // rdi
  unsigned int v20; // r12d
  __int64 *v21; // r15
  unsigned __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 *v26; // [rsp+38h] [rbp-A0h]
  __int64 v27; // [rsp+40h] [rbp-98h]
  _QWORD *v28; // [rsp+48h] [rbp-90h]
  int v29; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-80h] BYREF
  __int64 v31; // [rsp+60h] [rbp-78h]
  char v32; // [rsp+68h] [rbp-70h] BYREF
  char v33; // [rsp+78h] [rbp-60h] BYREF

  v28 = (_QWORD *)a4;
  v31 = a5;
  LOBYTE(a4) = a6;
  NextPageTable = MiGetNextPageTable(a2, a3, 0LL, a4, 4, &v29);
  v9 = NextPageTable;
  if ( !NextPageTable )
    return a3 + 8;
  v11 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = MI_READ_PTE_LOCK_FREE(v11);
  if ( ((v9 ^ a1[6]) & 0xFFFFFFFFFFFFF000uLL) != 0 )
  {
    v14 = (unsigned __int64 *)&v32;
    v15 = 3LL;
    do
    {
      *v14++ = v11;
      v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v15;
    }
    while ( v15 );
    v16 = *a1;
    v17 = (unsigned __int64 *)&v33;
    a1[6] = v9;
    v18 = 0LL;
    v19 = *(_QWORD *)(v16 + 40) >> 12;
    v27 = v19;
    v20 = 0;
    v26 = a1 + 1;
    while ( 1 )
    {
      v21 = (__int64 *)(MiMapSinglePage(a1[7], v19, 0x40000020uLL) + 8LL * ((*(_DWORD *)v17 >> 3) & 0x1FF));
      v22 = MI_READ_PTE_LOCK_FREE(v21);
      v30 = v22;
      if ( v22 )
      {
        if ( (v22 & 1) != 0 )
          v19 = MI_GET_PAGE_FRAME_FROM_PTE(&v30);
        else
          v19 = (v22 >> 12) & 0xFFFFFFFFFLL;
      }
      else
      {
        if ( v20 == 2 && (v12 & 0x80u) != 0LL )
        {
          *v21 = v12;
          if ( (unsigned int)MiPteInShadowRange(v21) )
            MiWritePteShadow(v21, v12);
          if ( v18 )
          {
            v23 = 48 * v19 - 0x58000000000LL;
            MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v23, 1u);
            MiLockPageAtDpcInline(v23, v24, v25);
            *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          return v9 + 4096;
        }
        MiDoneWithThisPageGetAnother(&a1[v20 + 1], v31, *a1, a6);
        v19 = *v26;
        MiBuildForkPageTable(*a1, *v26, *v17, v21, v27, 3 - v20);
        ++*v28;
        if ( v18 )
          MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v18, 1u);
      }
      ++v26;
      v18 = 48 * v19 - 0x58000000000LL;
      v27 = v19;
      ++v20;
      --v17;
      if ( v20 >= 3 )
      {
        v13 = MiMapSinglePage(a1[7], v19, 0x40000020uLL);
        a1[4] = v13;
        a1[8] = 48 * v19 - 0x58000000000LL;
        goto LABEL_18;
      }
    }
  }
  v13 = a1[4];
LABEL_18:
  a1[5] = v13 | v9 & 0xFFF;
  MiMakeSystemAddressValid(v9, 0LL, 0LL, a6, 1);
  return v9;
}

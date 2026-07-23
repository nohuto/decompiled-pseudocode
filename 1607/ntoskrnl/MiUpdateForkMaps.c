/*
 * XREFs of MiUpdateForkMaps @ 0x140107B8C
 * Callers:
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiIncreaseUsedPtesCount @ 0x140037030 (MiIncreaseUsedPtesCount.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MiMapSinglePage @ 0x140107F04 (MiMapSinglePage.c)
 *     MiBuildForkPageTable @ 0x140108830 (MiBuildForkPageTable.c)
 *     MiDoneWithThisPageGetAnother @ 0x140108ABC (MiDoneWithThisPageGetAnother.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

ULONG_PTR __fastcall MiUpdateForkMaps(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        KIRQL a6)
{
  __int64 NextPageTable; // rax
  ULONG_PTR v9; // rdi
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r10
  __int64 v14; // r12
  ULONG_PTR v15; // rbp
  __int64 v16; // rcx
  unsigned __int64 *v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  char *v21; // r15
  __int64 v22; // r14
  __int64 v23; // rbx
  unsigned int v24; // r13d
  __int64 *v25; // r15
  __int64 v26; // rax
  __int64 v27; // r9
  int v28; // r9d
  char *v29; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  int v35; // [rsp+34h] [rbp-A4h]
  char *v36; // [rsp+38h] [rbp-A0h]
  __int64 *v37; // [rsp+40h] [rbp-98h]
  __int64 v38; // [rsp+48h] [rbp-90h] BYREF
  __int64 v39; // [rsp+50h] [rbp-88h]
  int v40; // [rsp+58h] [rbp-80h] BYREF
  __int64 v41; // [rsp+60h] [rbp-78h]
  _QWORD *v42; // [rsp+68h] [rbp-70h]
  char v43; // [rsp+70h] [rbp-68h] BYREF
  char v44; // [rsp+80h] [rbp-58h] BYREF

  v42 = (_QWORD *)a4;
  v41 = a5;
  LOBYTE(a4) = a6;
  NextPageTable = MiGetNextPageTable(a2, a3, 0LL, a4, 4, &v40);
  v9 = NextPageTable;
  if ( !NextPageTable )
    return a3 + 8;
  if ( ((NextPageTable ^ a1[6]) & 0xFFFFFFFFFFFFF000uLL) != 0 )
  {
    v12 = MI_IS_PHYSICAL_ADDRESS(NextPageTable << 25 >> 16);
    v14 = v12;
    v15 = v9;
    if ( v12 )
    {
      v16 = v12;
      do
      {
        v15 = v13 + ((v15 >> 9) & 0x7FFFFFFFF8LL);
        --v16;
      }
      while ( v16 );
    }
    v17 = (unsigned __int64 *)&v43;
    v18 = 3LL;
    v19 = v13 + ((v9 >> 9) & 0x7FFFFFFFF8LL);
    do
    {
      *v17 = v19;
      v19 = v13 + ((v19 >> 9) & 0x7FFFFFFFF8LL);
      ++v17;
      --v18;
    }
    while ( v18 );
    v20 = *a1;
    v21 = &v44;
    a1[6] = v9;
    v22 = 0LL;
    v35 = 3;
    v36 = &v44;
    v23 = *(_QWORD *)(v20 + 40) >> 12;
    v39 = v23;
    v24 = 0;
    v37 = a1 + 1;
    while ( 1 )
    {
      v25 = (__int64 *)(MiMapSinglePage(a1[7], v23, 1073741856LL) + 8LL * ((*(_DWORD *)v21 >> 3) & 0x1FF));
      v26 = MI_READ_PTE_LOCK_FREE(v25);
      v38 = v26;
      if ( v26 )
      {
        if ( (v26 & 1) != 0 )
          v30 = MI_GET_PAGE_FRAME_FROM_PTE(&v38);
        else
          v30 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v38);
        v29 = v36;
        v23 = v30;
      }
      else
      {
        if ( (_DWORD)v14 && 3LL - v24 == v14 )
        {
          v31 = MI_READ_PTE_LOCK_FREE(v15);
          *v25 = v31;
          if ( (unsigned int)MiPteInShadowRange(v25, v31) )
            MiWritePteShadow(v33, v32);
          if ( v22 )
          {
            v34 = 48 * v23 - 0x58000000000LL;
            MiIncreaseUsedPtesCount(v34, 1LL);
            MiLockPageAtDpcInline(v34);
            *(_QWORD *)(v34 + 24) ^= (*(_QWORD *)(v34 + 24) ^ (*(_QWORD *)(v34 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          return v9 + 4096;
        }
        LOBYTE(v27) = a6;
        MiDoneWithThisPageGetAnother(&a1[v24 + 1], v41, *a1, v27);
        v28 = (int)v25;
        v29 = v36;
        v23 = *v37;
        MiBuildForkPageTable(*a1, *v37, *(_QWORD *)v36, v28, v39, v35);
        ++*v42;
        if ( v22 )
          MiIncreaseUsedPtesCount(v22, 1LL);
      }
      --v35;
      v21 = v29 - 8;
      ++v37;
      v22 = 48 * v23 - 0x58000000000LL;
      ++v24;
      v39 = v23;
      v36 = v21;
      if ( v24 >= 3 )
      {
        v11 = MiMapSinglePage(a1[7], v23, 1073741856LL);
        a1[4] = v11;
        a1[8] = 48 * v23 - 0x58000000000LL;
        goto LABEL_22;
      }
    }
  }
  v11 = a1[4];
LABEL_22:
  a1[5] = v11 | v9 & 0xFFF;
  MiMakeSystemAddressValid(v9, 0LL, 0, a6, 1);
  return v9;
}

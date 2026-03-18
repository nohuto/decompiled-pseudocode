/*
 * XREFs of MiBuildReservationCluster @ 0x140109354
 * Callers:
 *     MiGatherPagefilePages @ 0x14010AF5C (MiGatherPagefilePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiReferencePageForModifiedWrite @ 0x14002FDF8 (MiReferencePageForModifiedWrite.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiGetPageFileSectionForReservation @ 0x14010880C (MiGetPageFileSectionForReservation.c)
 *     MiReleasePageFileSectionInfo @ 0x1401088B0 (MiReleasePageFileSectionInfo.c)
 *     MiAddToReservationCluster @ 0x1401091BC (MiAddToReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140109954 (MiGetPageForWriteCluster.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140109BC8 (MiRefPageFileSpaceBitmaps.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140109C34 (MiDerefPageFileSpaceBitmaps.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildReservationCluster(_QWORD *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r14
  unsigned __int8 v9; // al
  unsigned __int8 v10; // r12
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // esi
  __int64 v16; // rdi
  unsigned __int64 v17; // r13
  __int64 v18; // rbx
  unsigned __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // r9
  unsigned __int64 *v22; // r14
  unsigned __int64 ValidKernelPte; // rax
  unsigned __int64 v24; // rbx
  __int64 v25; // r12
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rbx
  unsigned int v31; // r13d
  unsigned int v32; // r14d
  int v33; // r15d
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r13
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  __int64 *v39; // r12
  __int64 *v40; // rbx
  __int64 v41; // r14
  __int64 v42; // rax
  unsigned __int64 v43; // rbx
  __int64 v44; // rcx
  unsigned int v45; // r8d
  __int64 v46; // rbx
  void *v47; // rax
  int v49; // [rsp+4Ch] [rbp-75h]
  __int64 v50; // [rsp+50h] [rbp-71h] BYREF
  int v51; // [rsp+58h] [rbp-69h]
  __int64 v52; // [rsp+60h] [rbp-61h]
  void *Src; // [rsp+68h] [rbp-59h]
  __int64 v54; // [rsp+70h] [rbp-51h]
  _QWORD *v55; // [rsp+78h] [rbp-49h]
  char v56[8]; // [rsp+80h] [rbp-41h] BYREF
  unsigned int v57; // [rsp+88h] [rbp-39h] BYREF
  const signed __int64 *v58; // [rsp+90h] [rbp-31h]
  _BYTE v59[16]; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v60; // [rsp+B8h] [rbp-9h]
  _QWORD *v61; // [rsp+128h] [rbp+67h]

  v61 = a1;
  v4 = *(_QWORD *)(a2 + 256);
  v49 = 0;
  v6 = 5 * ((*(_WORD *)(a2 + 204) & 0xF) + 56LL);
  MiRefPageFileSpaceBitmaps(a2, v56);
  LODWORD(v50) = 0;
  v7 = *(_QWORD *)(v4 + 8 * v6 + 16);
  Src = a1;
  if ( v7 == 0xFFFFFFFFFLL )
  {
LABEL_55:
    v15 = 0;
    LODWORD(v11) = 0;
    goto LABEL_56;
  }
  while ( 1 )
  {
    v8 = 48 * v7 - 0x58000000000LL;
    v9 = MiLockPageInline(v8);
    v10 = v9;
    if ( v7 == *(_QWORD *)(v4 + 8 * v6 + 16) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v9);
LABEL_7:
    v7 = *(_QWORD *)(v4 + 8 * v6 + 16);
    if ( v7 == 0xFFFFFFFFFLL )
      goto LABEL_55;
  }
  v11 = HIDWORD(*(_QWORD *)(v8 + 16));
  if ( (unsigned int)v11 >= v57 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v9);
    goto LABEL_55;
  }
  if ( _bittest64(v58, v11) )
  {
    MiUnlinkPageFromList(v8, 0);
    v12 = *(_QWORD *)(v8 + 16);
    *(_QWORD *)(v8 + 16) = v12 & 0xFFFFFFFFFFFFEFFFuLL;
    MiInsertPageInList(v8, 8u);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v10);
    MiReleasePageFileInfo(v4, v12, 0);
    goto LABEL_7;
  }
  MiReferencePageForModifiedWrite(v8, 1);
  v15 = 1;
  *a1 = v7;
  if ( *a3 == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v10);
    goto LABEL_56;
  }
  v16 = *(_QWORD *)(v8 + 16);
  v17 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
  v52 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL;
  v18 = 48 * v52 - 0x58000000000LL;
  v54 = v18;
  MiLockNestedPageAtDpcInline(v18, v13, v14);
  *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v10);
  if ( (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) != 0 )
  {
    if ( (unsigned int)MiGetPageFileSectionForReservation(v17, (__int64)v59, 0) )
    {
      v49 = 1;
      if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) == 0 )
        goto LABEL_16;
    }
  }
  else
  {
    v60 = 0LL;
LABEL_16:
    v20 = (_QWORD *)MiReservePtes((__int64)&qword_1402FF7B0, 1u, v19);
    v55 = v20;
    v22 = v20;
    if ( v20 )
    {
      ValidKernelPte = MiMakeValidKernelPte(v52, 1, (unsigned __int64)v20, v21);
      *v22 = ValidKernelPte;
      v24 = ValidKernelPte;
      if ( (unsigned int)MiPteInShadowRange(v22) )
        MiWritePteShadow(v22, v24);
      v25 = (__int64)((_QWORD)v22 << 25) >> 16;
      v26 = v25 + 8 * ((v17 >> 3) & 0x1FF);
      v52 = v26;
      if ( v49 )
        v27 = v25 + 8 * ((*((_QWORD *)&v60 + 1) >> 3) & 0x1FFLL);
      else
        v27 = v25 + 4088;
      v28 = (v27 - v26) >> 3;
      v29 = v16 & 0xFFFFFFFFFF003C1FuLL;
      v30 = v29;
      v31 = *a3;
      v32 = *a3 - 1;
      if ( (unsigned int)v28 < v32 )
        v32 = v28;
      if ( HIDWORD(v29) + v32 >= v57 )
        v32 = v57 - HIDWORD(v29) - 1;
      v33 = v50;
      v34 = v26;
      if ( v32 )
      {
        do
        {
          v50 = v34 + 8;
          v30 = (unsigned int)v30 ^ ((v30 & 0xFFFFFFFF00000000uLL) + 0x100000000LL);
          v35 = MiGetPageForWriteCluster(&v57, v34 + 8, v30);
          if ( v35 == -1 )
            break;
          --v32;
          ++v15;
          *++v61 = v35;
          if ( v35 == qword_1402FF238 )
            ++v33;
          if ( v51 == 3 && v15 >= 0x10 )
            break;
          v34 = v50;
        }
        while ( v32 );
        v26 = v52;
      }
      v36 = v31 - v15;
      LODWORD(v50) = v33;
      if ( v49 )
        v37 = v25 + 8 * (((unsigned __int64)v60 >> 3) & 0x1FF);
      else
        v37 = v26 & 0xFFFFFFFFFFFFF000uLL;
      v38 = (__int64)(v26 - v37) >> 3;
      if ( (unsigned int)v38 < (unsigned int)v36 )
        v36 = (unsigned int)v38;
      if ( (unsigned int)v36 > HIDWORD(v29) - 1 )
        v36 = (unsigned int)(HIDWORD(v29) - 1);
      v39 = (__int64 *)Src;
      if ( (_DWORD)v36 )
      {
        v40 = (__int64 *)((char *)Src + 8 * v36);
        memmove(v40, Src, 8LL * v15);
        v41 = v52;
        do
        {
          v41 -= 8LL;
          v29 = (unsigned int)v29 | ((HIDWORD(v29) - 1) << 32);
          v42 = MiGetPageForWriteCluster(&v57, v41, v29);
          if ( v42 == -1 )
            break;
          --v40;
          LODWORD(v36) = v36 - 1;
          ++v15;
          *v40 = v42;
          if ( v42 == qword_1402FF238 )
            ++v33;
        }
        while ( (v51 != 3 || v15 < 0x10) && (_DWORD)v36 );
        LODWORD(v50) = v33;
        if ( v39 != v40 )
          memmove(v39, v40, 8LL * v15);
      }
      v11 = HIDWORD(*(_QWORD *)(48 * (*v39 - 0x1D55555555LL)));
      MiReleasePtes((__int64)&qword_1402FF7B0, v55, 1u);
      v18 = v54;
    }
  }
  v43 = (unsigned __int8)MiLockPageInline(v18);
  MiDecrementShareCount(v54);
  _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v43);
  if ( v49 )
    MiReleasePageFileSectionInfo((__int64)v59);
LABEL_56:
  v44 = *a3;
  if ( v15 < (unsigned int)v44 && v15 && v15 + (unsigned __int64)(unsigned int)v11 < v57 )
  {
    if ( (unsigned __int64)(unsigned int)v11 + v44 <= v57 )
      v45 = *a3;
    else
      v45 = v57 - v11;
    v46 = a2;
    v15 += MiAddToReservationCluster(a2, (__int64)&v57, v45 - v15, (unsigned int)v11 + v15, (_QWORD *)Src + v15, &v50);
  }
  else
  {
    v46 = a2;
  }
  v47 = (void *)MiDerefPageFileSpaceBitmaps(v46, v56, 0LL);
  if ( v47 )
    ExFreePoolWithTag(v47, 0);
  *a3 = v15;
  *a4 = v15 - v50;
  return (unsigned int)v11;
}

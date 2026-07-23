/*
 * XREFs of MiBuildReservationCluster @ 0x1401165AC
 * Callers:
 *     MiGatherPagefilePages @ 0x1401199B4 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiReferencePageForModifiedWrite @ 0x1400FFD38 (MiReferencePageForModifiedWrite.c)
 *     MiGetPageFileSectionForReservation @ 0x140115FF8 (MiGetPageFileSectionForReservation.c)
 *     MiReleasePageFileSectionInfo @ 0x14011609C (MiReleasePageFileSectionInfo.c)
 *     MiAddToReservationCluster @ 0x140116364 (MiAddToReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140116BC4 (MiGetPageForWriteCluster.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140117458 (MiRefPageFileSpaceBitmaps.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x1401174C4 (MiDerefPageFileSpaceBitmaps.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     MiGetPageFileReservationOffset @ 0x1401EE7AC (MiGetPageFileReservationOffset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildReservationCluster(__int64 *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  struct _KEVENT *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r14
  unsigned __int8 v8; // al
  unsigned __int8 v9; // r12
  unsigned __int64 *v10; // rsi
  unsigned int PageFileReservationOffset; // eax
  unsigned int v12; // r15d
  unsigned __int64 v13; // rbx
  unsigned int v14; // esi
  unsigned __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 *v20; // r14
  unsigned __int64 v21; // rbx
  ULONG_PTR v22; // rax
  ULONG_PTR v23; // r14
  unsigned __int64 ValidKernelPte; // rax
  unsigned __int64 *v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r12
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  __int64 updated; // rbx
  unsigned int v34; // r13d
  unsigned int v35; // r15d
  __int64 PteTimeStamp; // rax
  unsigned __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // rdx
  int v40; // r14d
  unsigned __int64 v41; // r10
  __int64 v42; // r10
  __int64 v43; // rax
  __int64 v44; // r13
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 *v49; // rbx
  unsigned __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // r8d
  __int64 v54; // rbx
  void *v55; // rax
  int v57; // [rsp+4Ch] [rbp-75h]
  __int64 v59; // [rsp+58h] [rbp-69h] BYREF
  int v60; // [rsp+60h] [rbp-61h]
  unsigned __int64 v61; // [rsp+68h] [rbp-59h]
  __int64 v62; // [rsp+70h] [rbp-51h]
  unsigned __int64 v63; // [rsp+78h] [rbp-49h]
  ULONG_PTR v64; // [rsp+80h] [rbp-41h]
  char v65[8]; // [rsp+88h] [rbp-39h] BYREF
  unsigned int v66; // [rsp+90h] [rbp-31h] BYREF
  const signed __int64 *v67; // [rsp+98h] [rbp-29h]
  _BYTE v68[16]; // [rsp+B0h] [rbp-11h] BYREF
  __int128 v69; // [rsp+C0h] [rbp-1h]
  __int64 *v70; // [rsp+128h] [rbp+67h]

  v70 = a1;
  v4 = *(struct _KEVENT **)(a2 + 256);
  v57 = 0;
  v5 = 5LL * (*(_WORD *)(a2 + 204) & 0xF);
  MiRefPageFileSpaceBitmaps(a2, v65);
  LODWORD(v59) = 0;
  v6 = *((_QWORD *)&v4[99].Header.WaitListHead.Flink + v5);
  if ( v6 == 0xFFFFFFFFFLL )
  {
LABEL_56:
    v14 = 0;
    v12 = 0;
LABEL_57:
    v20 = a1;
    goto LABEL_58;
  }
  while ( 1 )
  {
    v7 = 48 * v6 - 0x58000000000LL;
    v8 = MiLockPageInline(v7);
    v9 = v8;
    if ( v6 == *((_QWORD *)&v4[99].Header.WaitListHead.Flink + v5) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v8);
LABEL_7:
    v6 = *((_QWORD *)&v4[99].Header.WaitListHead.Flink + v5);
    if ( v6 == 0xFFFFFFFFFLL )
      goto LABEL_56;
  }
  v10 = (unsigned __int64 *)(v7 + 16);
  PageFileReservationOffset = MiGetPageFileReservationOffset(v7 + 16);
  v12 = PageFileReservationOffset;
  if ( PageFileReservationOffset >= v66 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v9);
    goto LABEL_56;
  }
  if ( _bittest64(v67, PageFileReservationOffset) )
  {
    MiUnlinkPageFromList(v7, 0);
    v13 = *v10;
    *v10 &= ~2uLL;
    MiInsertPageInList(v7, 8u);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v9);
    MiReleasePageFileInfo(v4, v13, 0);
    goto LABEL_7;
  }
  MiReferencePageForModifiedWrite(v7, 1);
  v14 = 1;
  *v70 = v6;
  if ( *a3 == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v9);
    goto LABEL_57;
  }
  v15 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
  v16 = *(_QWORD *)(v7 + 16);
  v17 = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFLL;
  v62 = 48 * v17 - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v62);
  v18 = v62;
  v19 = 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v62 + 24) ^= (*(_QWORD *)(v62 + 24) ^ (*(_QWORD *)(v62 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v9);
  if ( (*(_QWORD *)(v7 + 40) & 0x200000000000000LL) != 0 )
  {
    if ( !(unsigned int)MiGetPageFileSectionForReservation(v15, (__int64)v68, 0)
      || (v57 = 1, (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0) )
    {
LABEL_14:
      v20 = a1;
      goto LABEL_15;
    }
  }
  else
  {
    v69 = 0LL;
  }
  v22 = MiReservePtes((__int64)&qword_1403278B0, 1uLL, v19);
  v64 = v22;
  v23 = v22;
  if ( !v22 )
    goto LABEL_14;
  ValidKernelPte = MiMakeValidKernelPte(v17, 1, v22);
  *v25 = ValidKernelPte;
  if ( (unsigned int)MiPteInShadowRange(v25, ValidKernelPte) )
    MiWritePteShadow(v27, v26);
  v28 = (__int64)(v23 << 25) >> 16;
  v29 = v28 + 8 * ((v15 >> 3) & 0x1FF);
  v61 = v29;
  if ( v57 )
    v30 = v28 + 8 * ((*((_QWORD *)&v69 + 1) >> 3) & 0x1FFLL);
  else
    v30 = v28 + 4088;
  v31 = (__int64)(v30 - v29) >> 3;
  v32 = v16 & 0xFFFFFFFFFC00FC1FuLL;
  updated = v32;
  v34 = *a3;
  v35 = *a3 - 1;
  if ( (unsigned int)v31 < v35 )
    v35 = v31;
  PteTimeStamp = MiGetPteTimeStamp(v32, v26, v29);
  v38 = PteTimeStamp;
  v39 = PteTimeStamp + v35;
  if ( v39 >= v66 )
    v35 = v66 - PteTimeStamp - 1;
  v40 = v59;
  v41 = v37;
  if ( v35 )
  {
    do
    {
      v63 = v41 + 8;
      v59 = v38 + 1;
      updated = MiUpdatePageFileHighInPte(updated, v38 + 1);
      v43 = MiGetPageForWriteCluster(&v66, v42, updated);
      if ( v43 == -1 )
        break;
      --v35;
      ++v14;
      *++v70 = v43;
      if ( v43 == qword_1403276C8 )
        ++v40;
      if ( v60 == 3 && v14 >= 0x10 )
        break;
      v38 = v59;
      v41 = v63;
    }
    while ( v35 );
    v37 = v61;
  }
  v44 = v34 - v14;
  LODWORD(v59) = v40;
  if ( v57 )
    v45 = v28 + 8 * (((unsigned __int64)v69 >> 3) & 0x1FF);
  else
    v45 = v37 & 0xFFFFFFFFFFFFF000uLL;
  v46 = (__int64)(v37 - v45) >> 3;
  if ( (unsigned int)v46 < (unsigned int)v44 )
    v44 = (unsigned int)v46;
  v47 = MiGetPteTimeStamp(v32, v39, v37);
  v48 = v47;
  if ( (unsigned int)v44 > (unsigned __int64)(v47 - 1) )
    v44 = (unsigned int)(v47 - 1);
  if ( (_DWORD)v44 )
  {
    v49 = &a1[v44];
    memmove(v49, a1, 8LL * v14);
    v50 = v61;
    do
    {
      --v48;
      v50 -= 8LL;
      v32 = MiUpdatePageFileHighInPte(v32, v48);
      v51 = MiGetPageForWriteCluster(&v66, v50, v32);
      if ( v51 == -1 )
        break;
      --v49;
      LODWORD(v44) = v44 - 1;
      ++v14;
      *v49 = v51;
      if ( v51 == qword_1403276C8 )
        ++v40;
    }
    while ( (v60 != 3 || v14 < 0x10) && (_DWORD)v44 );
    LODWORD(v59) = v40;
    v20 = a1;
    if ( a1 != v49 )
      memmove(a1, v49, 8LL * v14);
  }
  else
  {
    v20 = a1;
  }
  v12 = MiGetPageFileReservationOffset(48 * *v20 - 0x57FFFFFFFF0LL);
  MiReleasePtes((__int64)&qword_1403278B0, v64, 1u);
LABEL_15:
  v21 = (unsigned __int8)MiLockPageInline(v62);
  MiDecrementShareCount(v62);
  _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v21);
  if ( v57 )
    MiReleasePageFileSectionInfo((__int64)v68);
LABEL_58:
  v52 = *a3;
  if ( v14 < (unsigned int)v52 && v14 && v14 + (unsigned __int64)v12 < v66 )
  {
    if ( (unsigned __int64)v12 + v52 <= v66 )
      v53 = *a3;
    else
      v53 = v66 - v12;
    v54 = a2;
    v14 += MiAddToReservationCluster(a2, (__int64)&v66, v53 - v14, v12 + v14, &v20[v14], &v59);
  }
  else
  {
    v54 = a2;
  }
  v55 = (void *)MiDerefPageFileSpaceBitmaps(v54, v65, 0LL);
  if ( v55 )
    ExFreePoolWithTag(v55, 0);
  *a3 = v14;
  *a4 = v14 - v59;
  return v12;
}

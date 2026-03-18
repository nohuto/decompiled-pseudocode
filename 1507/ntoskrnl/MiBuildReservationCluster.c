/*
 * XREFs of MiBuildReservationCluster @ 0x14013ACF4
 * Callers:
 *     MiGatherPagefilePages @ 0x14013D12C (MiGatherPagefilePages.c)
 * Callees:
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiReferencePageForModifiedWrite @ 0x1400E69AC (MiReferencePageForModifiedWrite.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140127E08 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140127E6C (MiRefPageFileSpaceBitmaps.c)
 *     MiGetPageFileSectionForReservation @ 0x14013A8D4 (MiGetPageFileSectionForReservation.c)
 *     MiReleasePageFileSectionInfo @ 0x14013A978 (MiReleasePageFileSectionInfo.c)
 *     MiAddToReservationCluster @ 0x14013AA00 (MiAddToReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x14013B604 (MiGetPageForWriteCluster.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildReservationCluster(__int64 *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  struct _KEVENT *v4; // r14
  __int64 v5; // r13
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 CurrentIrql; // r15
  unsigned int v11; // edi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r8
  unsigned int v17; // r14d
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // r15
  unsigned int v22; // r13d
  unsigned __int64 v23; // r13
  __int64 *v24; // r13
  unsigned __int8 v25; // di
  unsigned int v26; // ebx
  __int64 *v27; // rsi
  __int64 v28; // rbx
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned __int64 v33; // rdi
  __int64 updated; // rbx
  unsigned int v35; // r13d
  __int64 PteTimeStamp; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // r10
  __int64 v39; // r9
  int v40; // r12d
  unsigned __int64 v41; // r11
  __int64 v42; // r11
  __int64 v43; // rax
  __int64 v44; // rbx
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // r13
  __int64 v51; // r15
  unsigned __int64 v52; // rsi
  __int64 v53; // rax
  __int64 *v54; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // r8d
  __int64 v59; // rbx
  _DWORD *v60; // rax
  int v62; // [rsp+4Ch] [rbp-85h]
  __int64 v64; // [rsp+58h] [rbp-79h] BYREF
  int v65; // [rsp+60h] [rbp-71h]
  unsigned __int64 v66; // [rsp+68h] [rbp-69h]
  __int64 v67; // [rsp+70h] [rbp-61h]
  unsigned int v68; // [rsp+78h] [rbp-59h]
  __int64 v69; // [rsp+80h] [rbp-51h]
  __int64 *v70; // [rsp+88h] [rbp-49h]
  _DWORD *v71; // [rsp+90h] [rbp-41h] BYREF
  unsigned int v72; // [rsp+98h] [rbp-39h] BYREF
  const signed __int64 *v73; // [rsp+A0h] [rbp-31h]
  unsigned __int64 v74; // [rsp+B8h] [rbp-19h]
  _BYTE v75[16]; // [rsp+C0h] [rbp-11h] BYREF
  __int128 v76; // [rsp+D0h] [rbp-1h]
  __int64 *v77; // [rsp+138h] [rbp+67h]
  __int64 v78; // [rsp+138h] [rbp+67h]

  v77 = a1;
  v4 = *(struct _KEVENT **)(a2 + 216);
  v62 = 0;
  v5 = 5LL * (*(_WORD *)(a2 + 164) & 0xF);
  MiRefPageFileSpaceBitmaps(a2, (__int64)&v71);
  LODWORD(v64) = 0;
  v8 = *((_QWORD *)&v4[88].Header.WaitListHead.Blink + v5);
  if ( v8 == 0xFFFFFFFFFLL )
  {
LABEL_93:
    v17 = 0;
    LODWORD(v14) = 0;
LABEL_94:
    v24 = a1;
    goto LABEL_95;
  }
  while ( 1 )
  {
    v9 = 48 * v8 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    v67 = CurrentIrql;
    __writecr8(2uLL);
    v11 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v11);
      }
      while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    }
    if ( v8 == *((_QWORD *)&v4[88].Header.WaitListHead.Blink + v5) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)CurrentIrql);
LABEL_14:
    v8 = *((_QWORD *)&v4[88].Header.WaitListHead.Blink + v5);
    if ( v8 == 0xFFFFFFFFFLL )
      goto LABEL_93;
  }
  v12 = MiReverseSwizzleInvalidPte(*(_QWORD *)(v9 + 16), 0x7FFFFFFFFFFFFFFFLL, v6, v7);
  v14 = HIDWORD(v12);
  if ( HIDWORD(v12) >= v72 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), v13);
    __writecr8((unsigned __int8)CurrentIrql);
    goto LABEL_93;
  }
  if ( _bittest64(v73, v14) )
  {
    MiUnlinkPageFromList(v9, 0LL);
    v15 = *(_QWORD *)(v9 + 16);
    *(_QWORD *)(v9 + 16) = v15 & 0xFFFFFFFFFFFFFFFDuLL;
    MiInsertPageInList(v9, 8u);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)CurrentIrql);
    MiReleasePageFileInfo(v4, v15, 0);
    goto LABEL_14;
  }
  MiReferencePageForModifiedWrite(v9, 1);
  v17 = 1;
  *v77 = v8;
  if ( *a3 == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)CurrentIrql);
    goto LABEL_94;
  }
  v18 = *(_QWORD *)(v9 + 40);
  v19 = *(_QWORD *)(v9 + 16);
  v66 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
  v20 = v18 & 0xFFFFFFFFFLL;
  v21 = 48 * v20 - 0x58000000000LL;
  v69 = v21;
  v22 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v22 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v22);
    }
    while ( (*(_QWORD *)(v21 + 24) & 0x8000000000000000uLL) != 0 );
  }
  *(_QWORD *)(v21 + 24) ^= (*(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8((unsigned __int8)v67);
  v23 = v66;
  if ( (*(_QWORD *)(v9 + 40) & 0x200000000000000LL) != 0 )
  {
    if ( !(unsigned int)MiGetPageFileSectionForReservation(v66, (__int64)v75, 0)
      || (v62 = 1, (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0) )
    {
LABEL_28:
      v24 = a1;
      goto LABEL_29;
    }
  }
  else
  {
    v76 = 0LL;
  }
  v70 = MiReservePtes((__int64)&qword_14034FC70, 1u, v16);
  v27 = v70;
  if ( !v70 )
    goto LABEL_28;
  v28 = qword_1403D0218 ^ (qword_1403D0218 ^ (v20 << 12)) & 0xFFFFFFFFF000LL | 0x21;
  if ( (unsigned __int64)(v70 + 0x12098000000LL) <= 0x3FFFFFFF )
    v28 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
  if ( (unsigned __int64)v70 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && (unsigned __int64)v70 >= 0xFFFFF68000000000uLL
    || (unsigned __int64)v70 >= 0xFFFFF6FB40000000uLL
    && (unsigned __int64)v70 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || (unsigned __int64)v70 >= 0xFFFFF6FB7DA00000uLL
    && (unsigned __int64)v70 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || (unsigned __int64)v70 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v70 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v28 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v70) )
    v28 |= 0x100uLL;
  v29 = v28 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
  *v70 = v29;
  if ( (unsigned __int64)(v27 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(v27, v29);
  v30 = (__int64)((_QWORD)v27 << 25) >> 16;
  v67 = v30;
  v66 = v30 + 8 * ((v23 >> 3) & 0x1FF);
  if ( v62 )
    v31 = v30 + 8 * ((*((_QWORD *)&v76 + 1) >> 3) & 0x1FFLL);
  else
    v31 = v30 + 4088;
  v32 = (__int64)(v31 - (v30 + 8 * ((v23 >> 3) & 0x1FF))) >> 3;
  v33 = v19 & 0xFFFFFFFFFC00FC1FuLL;
  updated = v33;
  v68 = *a3;
  v35 = v68 - 1;
  if ( (unsigned int)v32 < v68 - 1 )
    v35 = v32;
  PteTimeStamp = MiGetPteTimeStamp(v33);
  v39 = PteTimeStamp;
  if ( PteTimeStamp + (unsigned __int64)v35 >= v72 )
    v35 = v72 - PteTimeStamp - 1;
  v40 = v64;
  v41 = v38;
  if ( v35 )
  {
    do
    {
      v74 = v41 + 8;
      v64 = v39 + 1;
      updated = MiUpdatePageFileHighInPte(updated, v39 + 1);
      v43 = MiGetPageForWriteCluster(&v72, v42, updated);
      if ( v43 == -1 )
        break;
      --v35;
      ++v17;
      *++v77 = v43;
      if ( v43 == qword_14034F6F8 )
        ++v40;
      if ( v65 == 3 && v17 >= 0x10 )
        break;
      v39 = v64;
      v41 = v74;
    }
    while ( v35 );
    v38 = v66;
    v37 = v67;
  }
  v44 = v68 - v17;
  LODWORD(v64) = v40;
  if ( v62 )
    v45 = v37 + 8 * (((unsigned __int64)v76 >> 3) & 0x1FF);
  else
    v45 = v38 & 0xFFFFFFFFFFFFF000uLL;
  v46 = (__int64)(v38 - v45) >> 3;
  if ( (unsigned int)v46 < (unsigned int)v44 )
    v44 = (unsigned int)v46;
  v47 = MiGetPteTimeStamp(v33);
  v78 = v47;
  if ( (unsigned int)v44 > (unsigned __int64)(v47 - 1) )
    v44 = (unsigned int)(v47 - 1);
  if ( (_DWORD)v44 )
  {
    v50 = &a1[v44];
    memmove(v50, a1, 8LL * v17);
    v51 = v78;
    v52 = v66;
    do
    {
      --v51;
      v52 -= 8LL;
      v33 = MiUpdatePageFileHighInPte(v33, v51);
      v53 = MiGetPageForWriteCluster(&v72, v52, v33);
      if ( v53 == -1 )
        break;
      --v50;
      LODWORD(v44) = v44 - 1;
      ++v17;
      *v50 = v53;
      if ( v53 == qword_14034F6F8 )
        ++v40;
    }
    while ( (v65 != 3 || v17 < 0x10) && (_DWORD)v44 );
    v21 = v69;
    v27 = v70;
    LODWORD(v64) = v40;
    v54 = v50;
    v24 = a1;
    if ( a1 != v54 )
      memmove(a1, v54, 8LL * v17);
  }
  else
  {
    v24 = a1;
  }
  LODWORD(v14) = (unsigned __int64)MiReverseSwizzleInvalidPte(
                                     *(_QWORD *)(48 * (*v24 - 0x1D55555555LL)),
                                     0x1D55555555LL,
                                     v48,
                                     v49) >> 32;
  MiReleasePtes((__int64)&qword_14034FC70, v27, 1u);
LABEL_29:
  v25 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v26 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v26);
    }
    while ( (*(_QWORD *)(v21 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
  }
  if ( (*(_BYTE *)(v21 + 34) & 7) != 6 )
    KeBugCheckEx(
      0x4Eu,
      0x99uLL,
      (v21 + 0x58000000000LL) / 48,
      *(_BYTE *)(v21 + 34) & 7,
      *(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v55 = *(_QWORD *)(v21 + 24);
  v56 = (v55 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v21 + 24) = v55 ^ (v56 ^ v55) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v55 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(v21, v56);
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v25);
  if ( v62 )
    MiReleasePageFileSectionInfo((__int64)v75);
LABEL_95:
  v57 = *a3;
  if ( v17 < (unsigned int)v57 && v17 && (unsigned int)v14 + (unsigned __int64)v17 < v72 )
  {
    if ( (unsigned __int64)(unsigned int)v14 + v57 <= v72 )
      v58 = *a3;
    else
      v58 = v72 - v14;
    v59 = a2;
    v17 += MiAddToReservationCluster(a2, (__int64)&v72, v58 - v17, (unsigned int)v14 + v17, &v24[v17], &v64);
  }
  else
  {
    v59 = a2;
  }
  v60 = MiDerefPageFileSpaceBitmaps(v59, &v71, 0);
  if ( v60 )
    ExFreePoolWithTag(v60, 0);
  *a3 = v17;
  *a4 = v17 - v64;
  return (unsigned int)v14;
}

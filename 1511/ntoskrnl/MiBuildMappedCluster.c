/*
 * XREFs of MiBuildMappedCluster @ 0x14002F79C
 * Callers:
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiReferencePageForModifiedWrite @ 0x14002FDF8 (MiReferencePageForModifiedWrite.c)
 *     MiReleaseWriteInProgressCharges @ 0x1400306A4 (MiReleaseWriteInProgressCharges.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiWriteCompletePfn @ 0x1400673F0 (MiWriteCompletePfn.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiBuildMappedCluster(__int64 a1, char *a2, int a3)
{
  char *v3; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 *v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r14
  bool v15; // zf
  unsigned __int64 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // r14
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  int v22; // ecx
  unsigned __int64 v23; // rbp
  char v24; // r14
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // r14
  __int64 v28; // r14
  __int64 v29; // r14
  unsigned __int64 v31; // rbx
  __int64 v32; // r9
  ULONG_PTR v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 *v37; // r14
  _QWORD *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r15
  unsigned __int64 v41; // rbx
  ULONG_PTR v42; // rsi
  int v43; // eax
  __int64 v44; // rax
  char v45; // si
  __int64 v46; // rbp
  unsigned __int64 v47; // r14
  unsigned __int64 *v48; // rbp
  __int64 v49; // rsi
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // r15
  unsigned __int64 v54; // r12
  __int64 v55; // rsi
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // [rsp+20h] [rbp-A8h]
  char *PoolWithTag; // [rsp+20h] [rbp-A8h]
  unsigned __int64 *v59; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v60; // [rsp+30h] [rbp-98h]
  __int64 *v61; // [rsp+30h] [rbp-98h]
  unsigned __int64 v62; // [rsp+38h] [rbp-90h]
  __int64 v63; // [rsp+40h] [rbp-88h]
  __int64 v64; // [rsp+40h] [rbp-88h]
  __int64 v65; // [rsp+48h] [rbp-80h]
  __int64 v66; // [rsp+50h] [rbp-78h]
  unsigned __int64 v67; // [rsp+58h] [rbp-70h]
  unsigned __int64 v68; // [rsp+60h] [rbp-68h]
  __int64 *v69; // [rsp+68h] [rbp-60h]
  unsigned __int64 v70; // [rsp+70h] [rbp-58h]
  __int64 v73; // [rsp+D8h] [rbp+10h]
  int v75; // [rsp+E0h] [rbp+18h]
  int v76; // [rsp+E0h] [rbp+18h]
  char v77; // [rsp+E8h] [rbp+20h] BYREF

  v3 = a2;
  v6 = (__int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v69 = (__int64 *)(a2 + 48);
  v7 = (unsigned __int64 *)(a2 + 48);
  v59 = (unsigned __int64 *)(a2 + 48);
  v8 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v70 = (v6 >> 63) + v6;
  v68 = v8;
  v57 = v8;
  v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v11 = *(__int64 *)(v10 + 16) >> 16;
  v12 = v8 & 0xFFFFFFFFFFFFF000uLL;
  v65 = v9;
  if ( (v8 & 0xFFFFFFFFFFFFF000uLL) < *(_QWORD *)(v11 + 8) )
    v12 = *(_QWORD *)((*(__int64 *)(v10 + 16) >> 16) + 8);
  v13 = v12;
  if ( v12 < v8 - 120 )
    v13 = v8 - 120;
  v66 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v10 + 40) & 0xFFFFFFFFFLL, &v77, 0x80000000LL);
  v14 = v66 + (v8 & 0xFFF);
  v15 = a3 == 0;
  v16 = v8;
  if ( v15 )
    v12 = v8;
  if ( v8 > v12 )
  {
    do
    {
      v14 -= 8LL;
      v34 = MI_READ_PTE_LOCK_FREE(v14);
      if ( (v34 & 0xC01) != 0x800 )
        break;
      if ( !(unsigned int)MI_IS_PFN((v34 >> 12) & 0xFFFFFFFFFLL) )
        break;
      v36 = 48 * v35 - 0x58000000000LL;
      if ( (*(_BYTE *)(v36 + 34) & 0x10) == 0
        || *(_WORD *)(v36 + 32)
        || v65 != MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v36 + 40)) >> 8) & 0x3FF) )
      {
        break;
      }
      v8 -= 8LL;
      if ( v8 >= v13 )
        v16 = v8;
    }
    while ( v8 > v12 );
    v3 = a2;
    v7 = v59;
    v68 = v8;
  }
  v17 = *(unsigned int *)(v11 + 44);
  v18 = ((unsigned __int16)v14 ^ (unsigned __int16)v16) & 0xFFF ^ v14;
  v19 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v20 = *(_QWORD *)(v11 + 8) + 8 * v17;
  if ( v19 > v20 )
    v19 = *(_QWORD *)(v11 + 8) + 8 * v17;
  v60 = v19;
  v21 = v19;
  if ( v19 > v16 + 128 )
    v21 = v16 + 128;
  v62 = v21;
  if ( !a3 )
  {
    v62 = v16 + 8;
    v19 = v16 + 8;
    v60 = v16 + 8;
  }
  v67 = v16;
  v22 = 1;
  v23 = v16;
  v75 = 1;
  if ( v16 < v19 )
  {
    v20 = v57;
    while ( v23 == v20 )
    {
      *v7 = v70;
      v59 = v7 + 1;
LABEL_18:
      v3 = a2;
      v23 += 8LL;
      v7 = v59;
      v18 += 8LL;
      v67 = v23;
      if ( v23 >= v19 )
        goto LABEL_19;
    }
    if ( v22 == 3 && (__int64)(((char *)v7 - v3 - 48) & 0xFFFFFFFFFFFFFFF8uLL) >= 128 )
      goto LABEL_43;
    v31 = MI_READ_PTE_LOCK_FREE(v18);
    if ( (v31 & 0xC01) == 0x800 )
    {
      if ( (unsigned int)MI_IS_PFN((v31 >> 12) & 0xFFFFFFFFFLL) )
      {
        v33 = 48 * v32 - 0x58000000000LL;
        MiLockPageAtDpcInline(v33);
        if ( v31 == MI_READ_PTE_LOCK_FREE(v18) )
        {
          if ( (*(_BYTE *)(v33 + 34) & 0x10) != 0
            && !*(_WORD *)(v33 + 32)
            && v65 == MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v33 + 40)) >> 8) & 0x3FF) )
          {
            if ( v23 >= v62 )
            {
LABEL_36:
              _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_37:
              v20 = v57;
LABEL_38:
              v22 = v75;
              goto LABEL_18;
            }
            v75 = MiReferencePageForModifiedWrite(v33);
            if ( v75 )
            {
              *v59++ = (v31 >> 12) & 0xFFFFFFFFFLL;
              goto LABEL_36;
            }
          }
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v7 = v59;
          goto LABEL_42;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v18 -= 8LL;
      v23 -= 8LL;
      goto LABEL_37;
    }
LABEL_42:
    v3 = a2;
LABEL_43:
    v24 = v77;
    v25 = v66;
    if ( v66 )
    {
      LOBYTE(v20) = v77;
      MiUnmapPageInHyperSpaceWorker(v66, v20, 0x80000000LL);
      v25 = 0LL;
    }
    v20 = v57;
    if ( v23 >= v57 )
      goto LABEL_20;
    v46 = ((char *)v7 - v3 - 48) >> 3;
    v64 = v46;
    if ( v46 )
    {
      v47 = (unsigned __int64)(v3 + 48);
      if ( v7 > (unsigned __int64 *)v3 + 6 )
      {
        v48 = v59;
        do
        {
          v49 = 48 * *--v48 - 0x58000000000LL;
          v50 = (unsigned __int8)MiLockPageInline(v49);
          MiWriteCompletePfn(v49, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v50);
        }
        while ( (unsigned __int64)v48 > v47 );
        v19 = v60;
        v8 = v68;
        v59 = v48;
        v46 = v64;
      }
      MiReleaseWriteInProgressCharges(v65, v46, 1LL);
      v20 = v57;
    }
    v51 = v62;
    if ( v62 == v16 + 8 )
    {
      v19 = v20 + 8;
      v60 = v20 + 8;
      v62 = v20 + 8;
    }
    else
    {
      if ( v19 > v20 + 128 )
        v51 = v20 + 128;
      v62 = v51;
    }
    v16 = v20;
    v52 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL, &v77, 0x80000000LL);
    v20 = v57;
    v66 = v52;
    v23 = v57 - 8;
    v18 = v52 + (v57 & 0xFFF) - 8;
    goto LABEL_38;
  }
LABEL_19:
  v24 = v77;
  v25 = v66;
LABEL_20:
  if ( v25 )
  {
    LOBYTE(v20) = v24;
    MiUnmapPageInHyperSpaceWorker(v25, v20, 0x80000000LL);
  }
  v26 = v62;
  v27 = v23;
  if ( v23 > v62 )
    v27 = v62;
  v28 = (__int64)(v27 - v16) >> 3;
  if ( v75 == 3 || v23 <= v62 && v8 >= v16 )
    goto LABEL_27;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((__int64)(v23 - v8) >> 3) + 48, 0x65576D4Du);
  if ( !PoolWithTag )
    goto LABEL_27;
  v3 = PoolWithTag;
  v61 = v69;
  v76 = 1;
  v37 = (__int64 *)(PoolWithTag + 48);
  v73 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL, &v77, 0x80000000LL);
  v39 = v73;
  v40 = v73 + (v8 & 0xFFF);
  while ( v8 < v23 )
  {
    if ( v8 < v26 && v8 >= v16 )
    {
      v44 = *v61;
      v38 = ++v61;
      *v37 = v44;
      goto LABEL_68;
    }
    if ( v76 == 3 && (__int64)(((char *)v37 - v3 - 48) & 0xFFFFFFFFFFFFFFF8uLL) >= 128 )
      goto LABEL_99;
    v41 = MI_READ_PTE_LOCK_FREE(v40);
    if ( (v41 & 0xC01) == 0x800 )
    {
      v63 = (v41 >> 12) & 0xFFFFFFFFFLL;
      v42 = 48 * v63 - 0x58000000000LL;
      MiLockPageAtDpcInline(v42);
      if ( v41 != MI_READ_PTE_LOCK_FREE(v40) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v39 = v73;
        goto LABEL_69;
      }
      if ( (*(_BYTE *)(v42 + 34) & 0x10) != 0
        && !*(_WORD *)(v42 + 32)
        && v65 == MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v42 + 40)) >> 8) & 0x3FF) )
      {
        v43 = MiReferencePageForModifiedWrite(v42);
        v39 = v73;
        v76 = v43;
        if ( v43 )
        {
          *v37 = v63;
          _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_68:
          v40 += 8LL;
          v8 += 8LL;
          ++v37;
          goto LABEL_69;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_98;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v39 = v73;
LABEL_98:
    v3 = PoolWithTag;
LABEL_99:
    v45 = v77;
    if ( v39 )
    {
      LOBYTE(v38) = v77;
      MiUnmapPageInHyperSpaceWorker(v39, v38, 0x80000000LL);
      v39 = 0LL;
    }
    if ( v8 >= v16 )
      goto LABEL_73;
    v53 = ((char *)v37 - v3 - 48) >> 3;
    if ( v53 )
    {
      v54 = (unsigned __int64)(v3 + 48);
      if ( v37 > (__int64 *)v3 + 6 )
      {
        do
        {
          v55 = 48 * *--v37 - 0x58000000000LL;
          v56 = (unsigned __int8)MiLockPageInline(v55);
          MiWriteCompletePfn(v55, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v56);
        }
        while ( (unsigned __int64)v37 > v54 );
        v23 = v67;
      }
      MiReleaseWriteInProgressCharges(v65, v53, 1LL);
    }
    v61 = v69;
    v8 = v16;
    v73 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL, &v77, 0x80000000LL);
    v39 = v73;
    v40 = v73 + (v16 & 0xFFF);
LABEL_69:
    v26 = v62;
    v3 = PoolWithTag;
  }
  v45 = v77;
LABEL_73:
  if ( v39 )
  {
    LOBYTE(v38) = v45;
    MiUnmapPageInHyperSpaceWorker(v39, v38, 0x80000000LL);
  }
  v28 = ((char *)v37 - v3 - 48) >> 3;
LABEL_27:
  v29 = v28 << 12;
  *(_QWORD *)v3 = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = (unsigned int)v29;
  *((_WORD *)v3 + 4) = 8 * (((unsigned __int64)(v29 + 4095) >> 12) + 6);
  *((_WORD *)v3 + 5) = 2;
  return v3;
}

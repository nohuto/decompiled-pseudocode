/*
 * XREFs of MxConvertKernelHal @ 0x140766618
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiUnlinkNodeLargePage @ 0x140019534 (MiUnlinkNodeLargePage.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiInsertLargePageInNodeList @ 0x1400C02B4 (MiInsertLargePageInNodeList.c)
 *     MiAddExpansionNonPagedPool @ 0x14013713C (MiAddExpansionNonPagedPool.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     KeFlushCurrentTbOnly @ 0x1401C6F54 (KeFlushCurrentTbOnly.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 MxConvertKernelHal()
{
  unsigned __int64 v0; // rsi
  unsigned __int64 v1; // r14
  unsigned __int64 v2; // rdx
  __int64 v3; // r13
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdi
  __int64 *v9; // rbx
  bool i; // cf
  unsigned __int64 v11; // rax
  unsigned int v13; // r14d
  unsigned __int64 v14; // r15
  unsigned int v15; // edi
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 *v18; // rsi
  __int64 v19; // rax
  __int64 *v20; // r14
  __int64 v21; // r12
  __int64 v22; // rdi
  unsigned __int64 v23; // rbx
  __int64 v24; // r14
  __int64 *v25; // rbx
  __int64 v26; // rdi
  __int64 *v27; // rcx
  unsigned __int64 ValidKernelPte; // rax
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // r12
  __int64 v32; // rax
  char v33; // r8
  unsigned __int64 v34; // rax
  __int64 v35; // rsi
  _BYTE *v36; // rcx
  int v37; // edx
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  void *v43; // rcx
  __int64 v44; // r9
  unsigned __int64 v45; // rdi
  __int64 *v46; // r12
  __int64 *v47; // r15
  unsigned __int64 *v48; // rbx
  __int64 v49; // rsi
  __int64 v50; // r13
  __int64 v51; // rax
  __int64 v52; // rbx
  bool v53; // zf
  _QWORD *v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rsi
  unsigned __int64 v57; // rdi
  __int64 v58; // rax
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // rbx
  __int64 v61; // rdi
  unsigned __int8 v62; // r12
  _QWORD *v63; // rax
  _QWORD *v64; // rbx
  _BYTE *v65; // [rsp+20h] [rbp-69h]
  unsigned __int64 v66; // [rsp+28h] [rbp-61h] BYREF
  PVOID P; // [rsp+30h] [rbp-59h]
  __int64 *v68; // [rsp+38h] [rbp-51h]
  unsigned __int64 v69; // [rsp+40h] [rbp-49h]
  __int64 v70; // [rsp+48h] [rbp-41h]
  unsigned __int64 v71; // [rsp+50h] [rbp-39h]
  unsigned __int64 v72; // [rsp+58h] [rbp-31h]
  __int64 v73; // [rsp+60h] [rbp-29h] BYREF
  _QWORD *v74; // [rsp+68h] [rbp-21h]
  unsigned __int64 *v75; // [rsp+70h] [rbp-19h]
  unsigned __int64 v76; // [rsp+78h] [rbp-11h]
  unsigned __int64 v77; // [rsp+80h] [rbp-9h]
  unsigned __int64 v78; // [rsp+88h] [rbp-1h]
  __int64 v79; // [rsp+90h] [rbp+7h]
  __int64 v80; // [rsp+98h] [rbp+Fh]
  char v81; // [rsp+F0h] [rbp+67h]
  unsigned __int64 v82; // [rsp+F0h] [rbp+67h]
  unsigned __int8 v83; // [rsp+F8h] [rbp+6Fh] BYREF
  ULONG_PTR v84; // [rsp+100h] [rbp+77h]
  unsigned int v85; // [rsp+108h] [rbp+7Fh]

  v0 = *(_QWORD *)(qword_140717510 + 48);
  v1 = *(_QWORD *)(MxHalDataTableEntry + 48);
  v2 = v0;
  v3 = *(unsigned int *)(MxHalDataTableEntry + 64);
  v4 = *(unsigned int *)(qword_140717510 + 64);
  if ( v1 < v0 )
    v2 = *(_QWORD *)(MxHalDataTableEntry + 48);
  v5 = v4 + v0;
  if ( v1 + v3 > v4 + v0 )
    v5 = v1 + v3;
  v72 = v2 & 0xFFFFFFFFFFE00000uLL;
  v6 = (v5 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  v7 = (v6 - (v2 & 0xFFFFFFFFFFE00000uLL)) >> 21;
  v78 = v7;
  v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v76 = (((v2 & 0xFFFFFFFFFFE00000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (__int64 *)v76;
  for ( i = v76 < v8; i; i = (unsigned __int64)v9 < v8 )
  {
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      if ( v9 == (__int64 *)(((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
      {
        v11 = v4;
      }
      else
      {
        if ( v9 != (__int64 *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
        {
          MxUseLargePagesForKernelAndHal = 0;
          return 0LL;
        }
        v11 = v3;
      }
      v9 += v11 >> 12;
    }
    else
    {
      if ( MI_READ_PTE_LOCK_FREE(v9) )
        return 0LL;
      ++v9;
    }
  }
  v13 = (_DWORD)v7 << 9;
  v85 = (_DWORD)v7 << 9;
  v84 = MiReservePtes((__int64)&qword_1402FF7B0, (_DWORD)v7 << 9, 0x98000000000uLL);
  v14 = v84;
  if ( !v84 )
    return 0LL;
  v15 = 0;
  v16 = 0LL;
  v70 = (unsigned int)v7;
  P = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v7, 0x20206D4Du);
  v18 = (__int64 *)P;
  if ( !P )
    goto LABEL_20;
  if ( (_DWORD)v7 )
  {
    do
    {
      v19 = MiUnlinkNodeLargePage((__int64)MiSystemPartition, v15, 4u, 1);
      if ( v19 )
      {
        v18[v16] = v19;
        v16 = (unsigned int)(v16 + 1);
      }
      else if ( ++v15 >= (unsigned __int16)KeNumberNodes )
      {
        if ( (_DWORD)v16 )
        {
          v20 = v18;
          v21 = (unsigned int)v16;
          do
          {
            v22 = *v20;
            v23 = (unsigned __int8)MiLockPageInline(*v20);
            MiInsertLargePageInNodeList((v22 + 0x58000000000LL) / 48, 0x200uLL, 1);
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v23);
            ++v20;
            --v21;
          }
          while ( v21 );
          v14 = v84;
          v18 = (__int64 *)P;
          v13 = v85;
        }
        ExFreePoolWithTag(v18, 0);
LABEL_20:
        MiReleasePtes((__int64)&qword_1402FF7B0, (_QWORD *)v14, v13);
        return 0LL;
      }
    }
    while ( (_DWORD)v16 != (_DWORD)v7 );
  }
  v24 = 0LL;
  v74 = 0LL;
  v81 = MxUseLargePagesForKernelAndHal;
  if ( MxUseLargePagesForKernelAndHal == 1 )
  {
    v25 = (__int64 *)(((v72 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    if ( (_DWORD)v7 )
    {
      v26 = v70;
      do
      {
        v66 = MI_READ_PTE_LOCK_FREE(v25++);
        v27 = (__int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((__int64 *)&v66) >> 12) & 0xFFFFFFFFFLL)
                        - 0x58000000000LL);
        v27[3] |= 0x4000000000000000uLL;
        *v27 = v24;
        v24 = (__int64)v27;
        --v26;
      }
      while ( v26 );
      v14 = v84;
      v18 = (__int64 *)P;
    }
  }
  v80 = v70 << 12;
  v77 = v14 + (v70 << 12);
  v79 = (__int64)(v14 << 25) >> 16;
  ValidKernelPte = MiMakeValidKernelPte(-1LL, 6, v14, v17);
  v29 = *v18;
  v30 = ValidKernelPte | 0x42;
  v66 = ValidKernelPte | 0x42;
  v31 = (v29 + 0x58000000000LL) / 48;
  v65 = (_BYTE *)v76;
  v75 = (unsigned __int64 *)(((v72 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v69 = (unsigned __int64)v75;
  v71 = MI_GET_PFN_FROM_PTE((__int64)v75);
  v68 = (__int64 *)(((v69 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v32 = MI_READ_PTE_LOCK_FREE(v68);
  v33 = v81;
  v73 = v32;
  if ( v81 == 1 )
  {
    v34 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v73);
    v33 = 1;
    v35 = v34;
  }
  else
  {
    v35 = (__int64)(v71 + 0x58000000000LL) / 48;
  }
  v36 = (_BYTE *)v76;
  v37 = 0;
  LODWORD(v84) = 0;
  while ( 1 )
  {
    v38 = *(_QWORD *)(v29 + 24);
    *(_QWORD *)v29 = 0LL;
    *(_WORD *)(v29 + 32) = 1;
    *(_QWORD *)(v29 + 24) = v38 & 0xC000000000000000uLL | 1;
    LOBYTE(v38) = *(_BYTE *)(v29 + 34) & 0xFE;
    *(_QWORD *)(v29 + 8) = v36;
    *(_QWORD *)(v29 + 16) = 192LL;
    *(_BYTE *)(v29 + 34) = v38 | 0x16;
    *(_QWORD *)(v29 + 40) ^= (v35 ^ *(_QWORD *)(v29 + 40)) & 0xFFFFFFFFFLL;
    if ( (*v36 & 1) != 0 )
    {
      v39 = (_QWORD *)MI_GET_PFN_FROM_PTE((__int64)v36);
      *v39 = v24;
      v24 = (__int64)v39;
      if ( v81 == 1 )
        *(_QWORD *)(v71 + 24) = *(_QWORD *)(v71 + 24) & 0xC000000000000000uLL | 1;
      v30 ^= (v30 ^ (v31 << 12)) & 0xFFFFFFFFF000LL;
      v66 = v30;
      *(_QWORD *)v14 = v30;
      if ( MiPteInShadowRange(v14) )
      {
        MiWritePteShadow(v14, v30);
        v33 = MxUseLargePagesForKernelAndHal;
        v81 = MxUseLargePagesForKernelAndHal;
      }
      else
      {
        v33 = v81;
      }
      v37 = v84;
      v36 = v65;
    }
    else if ( v33 == 1 )
    {
      *(_QWORD *)v29 = v74;
      v74 = (_QWORD *)v29;
    }
    else
    {
      *(_QWORD *)v29 = v24;
      v24 = v29;
    }
    v14 += 8LL;
    if ( v14 == v77 )
      break;
    v36 += 8;
    ++v31;
    v29 += 48LL;
    v65 = v36;
    if ( (v31 & 0x1FF) == 0 )
    {
      v40 = (unsigned int)(v37 + 1);
      LODWORD(v84) = v40;
      v29 = *((_QWORD *)P + v40);
      v31 = (v29 + 0x58000000000LL) / 48;
      v69 += 8LL;
      v41 = MI_GET_PFN_FROM_PTE(v69);
      v71 = v41;
      if ( (v69 & 0xFFF) == 0 )
      {
        v73 = MI_READ_PTE_LOCK_FREE(++v68);
        v41 = v71;
      }
      v33 = v81;
      if ( v81 == 1 )
      {
        v42 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v73);
        v33 = 1;
        v35 = v42;
      }
      else
      {
        v35 = (__int64)(v41 + 0x58000000000LL) / 48;
      }
      v37 = v84;
      v36 = v65;
    }
  }
  v84 = v14;
  v43 = (void *)(v79 + *(_QWORD *)(qword_140717510 + 48) - v72);
  _disable();
  memmove(v43, *(const void **)(qword_140717510 + 48), *(unsigned int *)(qword_140717510 + 64));
  memmove(
    (void *)(v79 + *(_QWORD *)(MxHalDataTableEntry + 48) - v72),
    *(const void **)(MxHalDataTableEntry + 48),
    *(unsigned int *)(MxHalDataTableEntry + 64));
  v45 = MiMakeValidKernelPte(-1LL, 6, 0LL, v44) | 0xC2;
  v82 = v45;
  if ( (_DWORD)v78 )
  {
    v46 = (__int64 *)P;
    v47 = (__int64 *)v76;
    v48 = v75;
    v68 = (__int64 *)P;
    do
    {
      v49 = (*v46 + 0x58000000000LL) / 48;
      if ( MxUseLargePagesForKernelAndHal == 1 )
      {
        v45 ^= (v45 ^ (v49 << 12)) & 0xFFFFFFFFF000LL;
        v82 = v45;
        *v48 = v45;
        if ( MiPteInShadowRange((__int64)v48) )
          MiWritePteShadow((__int64)v48, v45);
      }
      else
      {
        v50 = 512LL;
        do
        {
          v51 = MI_READ_PTE_LOCK_FREE(v47);
          v66 = v51;
          if ( v51 )
          {
            v52 = (v51 ^ (v49 << 12)) & 0xFFFFFFFFF000LL ^ v51;
            v66 = v52;
            *v47 = v52;
            if ( MiPteInShadowRange((__int64)v47) )
              MiWritePteShadow((__int64)v47, v52);
          }
          ++v47;
          ++v49;
          --v50;
        }
        while ( v50 );
        v45 = v82;
        v46 = v68;
        v48 = v75;
      }
      ++v48;
      ++v46;
      v53 = v70-- == 1;
      v75 = v48;
      v68 = v46;
    }
    while ( !v53 );
    v14 = v84;
  }
  KeFlushCurrentTbOnly(0);
  _enable();
  v54 = (_QWORD *)v24;
  if ( v24 )
  {
    do
    {
      v55 = v54[3];
      v56 = (_QWORD *)*v54;
      if ( (v55 & 0x4000000000000000LL) != 0 )
      {
        v57 = MiMapPageInHyperSpaceWorker((__int64)(v54 + 0xB000000000LL) / 48, &v83, 0x80000000);
        do
        {
          v58 = MI_READ_PTE_LOCK_FREE((__int64 *)v57);
          v66 = v58;
          if ( (v58 & 1) != 0 )
          {
            v59 = v58 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
            v66 = v59;
            *(_QWORD *)v57 = v59;
            if ( MiPteInShadowRange(v57) )
              MiWritePteShadow(v57, v59);
          }
          v57 += 8LL;
        }
        while ( (v57 & 0xFFF) != 0 );
        MiUnmapPageInHyperSpaceWorker(v57 - 4096, v83);
      }
      else
      {
        v54[3] = v55 | 0x4000000000000000LL;
      }
      v54 = v56;
    }
    while ( v56 );
    v14 = v84;
  }
  v60 = 0LL;
  if ( v24 )
  {
    do
    {
      v61 = *(_QWORD *)v24;
      v62 = MiLockPageInline(v24);
      if ( (unsigned int)MiDecrementShareCount(v24) != 3 )
        ++v60;
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v62);
      v24 = v61;
    }
    while ( v61 );
    v14 = v84;
    if ( v60 )
    {
      MiReturnCommit((__int64)MiSystemPartition, v60);
      qword_1402FF818 -= v60;
      MiReturnResidentAvailable(v60);
      _InterlockedExchangeAdd64(&qword_1402FF3F0, v60);
    }
  }
  v63 = v74;
  if ( v74 )
  {
    do
    {
      v64 = (_QWORD *)*v63;
      MiAddExpansionNonPagedPool((__int64)(v63 + 0xB000000000LL) / 48, 1LL);
      v63 = v64;
    }
    while ( v64 );
    v14 = v84;
  }
  ExFreePoolWithTag(P, 0);
  MiReleasePtes((__int64)&qword_1402FF7B0, (_QWORD *)(v14 - v80), v85);
  MiFlags |= 4u;
  return 1LL;
}

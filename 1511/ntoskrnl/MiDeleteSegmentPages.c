/*
 * XREFs of MiDeleteSegmentPages @ 0x14000BB90
 * Callers:
 *     MiSegmentDelete @ 0x1403C7FD8 (MiSegmentDelete.c)
 *     MiCopyDirectMapHeader @ 0x14062C788 (MiCopyDirectMapHeader.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8DA0 (MiDecrementSubsectionViewCount.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiDereferenceControlAreaPfn @ 0x1400B5418 (MiDereferenceControlAreaPfn.c)
 *     MiFreeLargePageMemory @ 0x1400BDF60 (MiFreeLargePageMemory.c)
 *     MiInvalidateCollidedIos @ 0x1400F16AC (MiInvalidateCollidedIos.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteSegmentPages(__int64 *a1)
{
  __int64 *v1; // r13
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rax
  int v5; // ebp
  __int64 *v6; // r12
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int8 v10; // bl
  int v11; // esi
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // r11
  volatile signed __int32 *v17; // r8
  int v18; // eax
  int v19; // r9d
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r9
  __int64 v24; // r9
  ULONG_PTR v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r12
  ULONG_PTR v31; // rax
  __int64 v32; // r13
  __int64 v33; // r13
  __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // r12
  __int64 v37; // rdx
  unsigned __int16 v38; // ax
  int v39; // r15d
  char v40; // al
  __int64 v41; // rbx
  __int64 v42; // rdx
  bool v43; // zf
  __int64 v44; // rax
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // r9
  __int64 v47; // r10
  unsigned __int64 v48; // rdx
  volatile signed __int32 *v49; // r8
  int v50; // eax
  int v51; // r9d
  unsigned __int64 v52; // rcx
  void *v53; // r11
  KIRQL i; // al
  __int64 v55; // rbx
  __int64 v57; // [rsp+30h] [rbp-C8h]
  __int64 v58; // [rsp+38h] [rbp-C0h]
  _QWORD *v59; // [rsp+40h] [rbp-B8h]
  __int64 v60; // [rsp+48h] [rbp-B0h]
  __int64 v61; // [rsp+50h] [rbp-A8h]
  __int64 v62; // [rsp+58h] [rbp-A0h] BYREF
  int v63; // [rsp+60h] [rbp-98h] BYREF
  int *v64; // [rsp+68h] [rbp-90h]
  __int64 v65; // [rsp+70h] [rbp-88h]
  __int64 *v66; // [rsp+78h] [rbp-80h]
  __int64 v67; // [rsp+80h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-70h]
  __int64 v69; // [rsp+90h] [rbp-68h]
  ULONG_PTR v70; // [rsp+98h] [rbp-60h]
  __int64 v71; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-50h]
  char v74; // [rsp+108h] [rbp+10h] BYREF
  int v75; // [rsp+110h] [rbp+18h]
  int v76; // [rsp+118h] [rbp+20h] BYREF

  v1 = a1;
  v60 = 0LL;
  v2 = 0LL;
  v57 = 0LL;
  v3 = 0LL;
  v4 = MiPartitionIdToPointer(*((_WORD *)a1 + 30) & 0x3FF);
  v5 = *((_DWORD *)v1 + 14);
  v6 = v1 + 15;
  v7 = -1LL;
  v69 = v4;
  v9 = (unsigned int)v8;
  v72 = *v1;
  v10 = 17;
  v65 = v8;
  v58 = (unsigned int)v8;
  v11 = *(_DWORD *)(v72 + 12);
  v74 = 17;
  v61 = -1LL;
  v75 = v5;
  v66 = v1 + 15;
  if ( v1 != (__int64 *)-120LL )
  {
    while ( 1 )
    {
      v12 = v6[1];
      v59 = (_QWORD *)v12;
      if ( !v12 )
        goto LABEL_109;
      v70 = v12 + 8LL * *((unsigned int *)v6 + 11);
      if ( v12 < v70 )
      {
        while ( 1 )
        {
          if ( (v12 & 0xFFF) != 0 )
          {
            if ( v10 != 17 )
              goto LABEL_23;
            goto LABEL_20;
          }
          if ( v10 != 17 )
          {
            MiUnlockProtoPoolPage(v9, v10);
            if ( (v11 & 0x1000) != 0 )
              break;
          }
LABEL_20:
          v58 = MiLockProtoPoolPage(v12, &v74);
          if ( !v58 )
          {
            do
            {
              MmAccessFault(2uLL, v12);
              v58 = MiLockProtoPoolPage(v12, &v74);
            }
            while ( !v58 );
            LOBYTE(v5) = v75;
          }
LABEL_23:
          while ( 1 )
          {
            v22 = MI_READ_PTE_LOCK_FREE(v12);
            v67 = v22;
            v23 = v22;
            if ( (v22 & 1) == 0 )
              break;
            v23 = MI_READ_PTE_LOCK_FREE(&v67);
LABEL_27:
            if ( (unsigned int)MI_IS_PFN((v23 >> 12) & 0xFFFFFFFFFLL) )
            {
              v76 = 0;
              v25 = 48 * v24 - 0x58000000000LL;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v76);
                  while ( (*(_QWORD *)(v25 + 24) & 0x8000000000000000uLL) != 0 );
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) );
                v1 = a1;
              }
              v26 = MI_READ_PTE_LOCK_FREE(v12);
              if ( v26 == v67 )
                goto LABEL_35;
              _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
          }
          if ( (v22 & 0x400) == 0 && (v22 & 0x800) != 0 )
            goto LABEL_27;
          v25 = 0LL;
LABEL_35:
          v27 = MI_READ_PTE_LOCK_FREE(v12);
          v71 = v27;
          if ( (v27 & 1) != 0 )
          {
            v28 = MI_GET_PAGE_FRAME_FROM_PTE(&v71);
            v29 = *(_QWORD *)(v25 + 16);
            *(_QWORD *)v12 = v29;
            v7 = v28;
            v61 = v28;
            if ( (unsigned int)MiPteInShadowRange(v12) )
              MiWritePteShadow(v12, v29);
            *(_QWORD *)(v25 + 24) |= 0x4000000000000000uLL;
            _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_86;
          }
          if ( (v27 & 0x400) != 0 )
            goto LABEL_86;
          if ( (v27 & 0x800) != 0 )
          {
            v30 = *(_QWORD *)(v25 + 16);
            if ( (((unsigned __int64)v30 >> 10) & 1) != 0 && (v1[7] & 0x20) == 0 && (*(_BYTE *)(v25 + 34) & 0x18) != 0 )
              ++v65;
            BugCheckParameter2 = (__int64)(v25 + 0x58000000000LL) / 48;
            v31 = MI_READ_PTE_LOCK_FREE(v12);
            if ( (*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL) != v12 )
              KeBugCheckEx(0x1Au, 0x402uLL, v12, v31, *(_QWORD *)(v25 + 8));
            v32 = *(_QWORD *)(v25 + 40);
            v64 = 0LL;
            v33 = v32 & 0xFFFFFFFFFLL;
            v34 = 0LL;
            if ( (((unsigned __int64)v30 >> 10) & 1) != 0 )
            {
              MiDereferenceControlAreaPfn(*(_QWORD *)(v30 >> 16), v30 >> 16, 2LL);
              v35 = *(_QWORD *)(v25 + 16);
            }
            else
            {
              v35 = 0LL;
            }
            v36 = 0LL;
            if ( *(_WORD *)(v25 + 32) )
            {
              *(_QWORD *)(v25 + 24) |= 0x4000000000000000uLL;
              v40 = *(_BYTE *)(v25 + 34);
              if ( (v40 & 0x20) != 0 && (v40 & 8) == 0 )
              {
                v36 = *(_QWORD *)v25 - 32LL;
                if ( *(_QWORD *)(v36 + 16) == v36 + 16 )
                  v36 = 0LL;
              }
              v39 = 3;
            }
            else
            {
              MiUnlinkPageFromList(v25);
              if ( (*(_DWORD *)(v25 + 16) & 0x400LL) == 0 )
              {
                v37 = *(_QWORD *)(v25 + 16);
                if ( (v37 & 0x2000) != 0 || (v37 & 0x1000) != 0 )
                  v34 = MI_READ_PTE_LOCK_FREE(v25 + 16);
                v38 = ((unsigned int)HIDWORD(*(_QWORD *)(v25 + 40)) >> 8) & 0x3FF;
                if ( v38 == 1023 )
                {
                  v39 = 4;
                  v64 = &MiSystemPartition;
                  goto LABEL_63;
                }
                v64 = *(int **)(qword_1402FEC28 + 8LL * v38);
              }
              v39 = 4;
            }
LABEL_63:
            *v59 = v35;
            if ( (unsigned int)MiPteInShadowRange(v59) )
              MiWritePteShadow(v59, v35);
            if ( v39 == 4 )
              MiInsertPageInFreeOrZeroedList(BugCheckParameter2);
            _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v63 = 0;
            v41 = 48 * v33 - 0x58000000000LL;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v63);
                while ( (*(_QWORD *)(v41 + 24) & 0x8000000000000000uLL) != 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) );
              LOBYTE(v5) = v75;
            }
            if ( (*(_BYTE *)(v41 + 34) & 7) != 6 )
              KeBugCheckEx(
                0x4Eu,
                0x99uLL,
                48 * v33 / 48,
                *(_BYTE *)(v41 + 34) & 7,
                *(_QWORD *)(v41 + 24) & 0x3FFFFFFFFFFFFFFFLL);
            v42 = (*(_QWORD *)(v41 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
            *(_QWORD *)(v41 + 24) ^= (*(_QWORD *)(v41 + 24) ^ v42) & 0x3FFFFFFFFFFFFFFFLL;
            if ( !v42 )
              MiPfnShareCountIsZero(48 * v33 - 0x58000000000LL);
            _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v36 )
              MiInvalidateCollidedIos(v36);
            if ( v34 )
              MiReleasePageFileInfo(v64, v34, 1LL);
            v3 = v57;
            v43 = v39 == 3;
            v7 = v61;
            v12 = (ULONG_PTR)v59;
            v1 = a1;
            if ( v43 )
              v3 = ++v57;
          }
          else
          {
            v62 = v27;
            if ( (v27 & 0x2000) != 0 || (v27 & 0x1000) != 0 )
              v44 = MI_READ_PTE_LOCK_FREE(&v62);
            else
              v44 = 0LL;
            v62 = v44;
            if ( v44 )
              MiReleasePageFileInfo(v69, v44, 0LL);
LABEL_86:
            v3 = v57;
          }
          v10 = v74;
          v12 += 8LL;
          v9 = v58;
          v59 = (_QWORD *)v12;
          if ( v12 >= v70 )
          {
            v6 = v66;
            goto LABEL_89;
          }
        }
        v13 = v7 & 0xFFFFFFFFFFFFFE00uLL;
        v14 = v13 >> 9;
        if ( _bittest64((const signed __int64 *)qword_1402FF6E8, v13 >> 9) )
        {
          v15 = (v13 >> 9) & 0x1F;
          LOBYTE(v16) = 1;
          v17 = (volatile signed __int32 *)(qword_1402FF6E8 + 4 * (v13 >> 14));
          if ( (unsigned __int64)(v15 + 1) <= 0x20 )
          {
            v18 = 1 << v15;
            goto LABEL_18;
          }
          if ( (v14 & 0x1F) == 0 )
            goto LABEL_17;
          v19 = v14 & 0x1F;
          _InterlockedAnd(v17++, ~(((1 << (32 - v19)) - 1) << v15));
          v16 = 1LL - (unsigned int)(32 - v19);
          if ( v16 >= 0x20 )
          {
            v20 = v16 >> 5;
            v16 += -32LL * (v16 >> 5);
            do
            {
              *v17++ = 0;
              --v20;
            }
            while ( v20 );
          }
          if ( v16 )
          {
LABEL_17:
            v18 = (1 << v16) - 1;
LABEL_18:
            _InterlockedAnd(v17, ~v18);
          }
        }
        v21 = MiFreeLargePageMemory(v13);
        v7 = -1LL;
        v57 = 512 - v21 + v3;
        v61 = -1LL;
        goto LABEL_20;
      }
LABEL_89:
      if ( v10 != 17 )
      {
        MiUnlockProtoPoolPage(v9, v10);
        v10 = 17;
        v74 = 17;
        if ( (v11 & 0x1000) != 0 )
          break;
      }
LABEL_103:
      if ( (v5 & 0x80u) != 0 && (v5 & 0x20) == 0 )
      {
        v2 = MiDecrementSubsectionViewCount(v6, 0LL) + v60;
        v60 = v2;
        if ( v53 )
          ExFreePoolWithTag(v53, 0);
        v9 = v58;
        goto LABEL_110;
      }
      v9 = v58;
LABEL_109:
      v2 = v60;
LABEL_110:
      v6 = (__int64 *)v6[2];
      v66 = v6;
      if ( !v6 )
        goto LABEL_111;
    }
    v45 = v7 & 0xFFFFFFFFFFFFFE00uLL;
    v46 = v45 >> 9;
    if ( !_bittest64((const signed __int64 *)qword_1402FF6E8, v45 >> 9) )
    {
LABEL_102:
      v3 += 512 - MiFreeLargePageMemory(v45);
      v7 = -1LL;
      v57 = v3;
      v61 = -1LL;
      goto LABEL_103;
    }
    v47 = (v45 >> 9) & 0x1F;
    LOBYTE(v48) = 1;
    v49 = (volatile signed __int32 *)(qword_1402FF6E8 + 4 * (v45 >> 14));
    if ( (unsigned __int64)(v47 + 1) > 0x20 )
    {
      if ( (v46 & 0x1F) != 0 )
      {
        v51 = v46 & 0x1F;
        _InterlockedAnd(v49++, ~(((1 << (32 - v51)) - 1) << v47));
        v48 = 1LL - (unsigned int)(32 - v51);
        if ( v48 >= 0x20 )
        {
          v52 = v48 >> 5;
          v48 += -32LL * (v48 >> 5);
          do
          {
            *v49++ = 0;
            --v52;
          }
          while ( v52 );
        }
        if ( !v48 )
          goto LABEL_101;
      }
      v50 = (1 << v48) - 1;
    }
    else
    {
      v50 = 1 << v47;
    }
    _InterlockedAnd(v49, ~v50);
LABEL_101:
    v10 = v74;
    goto LABEL_102;
  }
LABEL_111:
  for ( i = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1 + 18);
        v1[4];
        i = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1 + 18) )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v1 + 18, i);
    _mm_pause();
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v1 + 18, i);
  if ( v2 )
    MiReturnSubsectionCharges(v2);
  v55 = *(_QWORD *)(v72 + 16);
  if ( v55 )
  {
    MiReturnCommit(&MiSystemPartition, v55 - v3);
    if ( (v11 & 0x1000) != 0 )
    {
      MiReturnResidentAvailable(v55 - v3);
      _InterlockedExchangeAdd64(&qword_1402FF4D8, v55 - v3);
    }
    _InterlockedExchangeAdd64(&qword_1402FF850, -v55);
  }
  return v65;
}

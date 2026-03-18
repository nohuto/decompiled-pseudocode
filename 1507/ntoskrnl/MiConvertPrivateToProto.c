/*
 * XREFs of MiConvertPrivateToProto @ 0x140228698
 * Callers:
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 * Callees:
 *     MiLockLeafPage @ 0x140037DE0 (MiLockLeafPage.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiCopyPfnEntry @ 0x14005A620 (MiCopyPfnEntry.c)
 *     MiUpdatePfnPriority @ 0x140080A64 (MiUpdatePfnPriority.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     MiReleaseWsle @ 0x1400AE200 (MiReleaseWsle.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiRemoveWsle @ 0x1400AFB10 (MiRemoveWsle.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiIdentifyPfn @ 0x1400C4A30 (MiIdentifyPfn.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x140225A30 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiGetContainingPageTable @ 0x140225A80 (MiGetContainingPageTable.c)
 *     MiMakePrototypePteDirect @ 0x140225C38 (MiMakePrototypePteDirect.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiComparePages @ 0x1402284DC (MiComparePages.c)
 *     MiFillCombinePage @ 0x14022A650 (MiFillCombinePage.c)
 *     MiResolveProtoCombine @ 0x14022B144 (MiResolveProtoCombine.c)
 */

__int64 __fastcall MiConvertPrivateToProto(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r11
  __int64 PteShadow; // rbx
  __int64 v10; // r10
  __int64 *v11; // r9
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r12
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r11
  bool v17; // zf
  unsigned int v18; // r15d
  char v19; // r10
  __int64 v20; // rcx
  __int16 v21; // ax
  char v22; // dl
  __int64 *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int16 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // r15d
  char v29; // cl
  unsigned __int64 v30; // rbx
  __int64 *v31; // rcx
  unsigned __int64 v32; // r8
  __int64 v33; // r15
  unsigned __int64 v34; // rax
  __int16 *v35; // rax
  __int64 v36; // rdi
  unsigned int v37; // ebx
  __int64 v38; // rbx
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  __int64 v41; // r15
  __int64 v42; // rax
  ULONG_PTR v43; // rdi
  unsigned __int64 v44; // rbx
  char v45; // r12
  char v46; // cl
  unsigned int v47; // edx
  __int64 v48; // r8
  ULONG_PTR v49; // r15
  volatile signed __int64 *v50; // r12
  unsigned int v51; // edi
  __int64 v52; // rbx
  signed __int64 v53; // rdx
  unsigned __int64 v54; // r8
  int v55; // edi
  __int64 v56; // rbx
  __int64 v57; // rbx
  _QWORD *v58; // rdi
  unsigned int v59; // edi
  __int64 v60; // rbx
  __int64 v61; // r9
  __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // r15
  unsigned int v65; // ebx
  char *v66; // rax
  unsigned int v67; // ecx
  bool v69; // [rsp+30h] [rbp-99h]
  BOOL v70; // [rsp+34h] [rbp-95h]
  __int64 v71; // [rsp+38h] [rbp-91h]
  unsigned __int64 v72; // [rsp+40h] [rbp-89h] BYREF
  __int64 v73; // [rsp+48h] [rbp-81h]
  __int64 *v74; // [rsp+50h] [rbp-79h]
  _QWORD *v75; // [rsp+58h] [rbp-71h]
  __int64 v76; // [rsp+60h] [rbp-69h]
  __int64 v77; // [rsp+68h] [rbp-61h]
  __int64 v78; // [rsp+70h] [rbp-59h]
  __int64 *v79; // [rsp+78h] [rbp-51h]
  _KPROCESS *Process; // [rsp+80h] [rbp-49h]
  __int64 v81; // [rsp+88h] [rbp-41h]
  __int64 ContainingPageTable; // [rsp+90h] [rbp-39h]
  _QWORD v83[4]; // [rsp+98h] [rbp-31h] BYREF
  _QWORD v84[2]; // [rsp+B8h] [rbp-11h] BYREF

  v6 = 0x90482413000LL;
  v77 = a5;
  PteShadow = *a2;
  v10 = a1;
  v79 = a4;
  v11 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v70 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
  v75 = (_QWORD *)a3;
  v74 = a2;
  v73 = a1;
  if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow((__int64)a2, PteShadow);
  v72 = PteShadow;
  v12 = PteShadow;
  if ( (unsigned __int64)&v72 + v6 <= 0x7F8 )
    v12 = MiReadPteShadow((__int64)&v72, PteShadow);
  v71 = (__int64)((_QWORD)v11 << 25) >> 16;
  v76 = *(_QWORD *)(v10 + 184);
  v13 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( a6 == -1 )
  {
    v41 = MiLockProtoPoolPage(a3, 0LL);
    if ( !v41 )
      return 0LL;
    v42 = MiLockLeafPage((unsigned __int64 *)a3, 0LL);
    v43 = v42;
    if ( v42 )
    {
      if ( (*(_BYTE *)(v42 + 35) & 0x40) == 0 && ((*(_BYTE *)(v42 + 34) & 7) == 6 || (*(_BYTE *)(v42 + 34) & 0x20) == 0) )
      {
        v44 = MiMapPageInHyperSpaceWorker((v42 + 0x58000000000LL) / 48, 0LL);
        v45 = MiComparePages(v44, v71);
        MiUnmapPageInHyperSpaceWorker(v44, 0x11u);
        if ( v45 == 1 )
        {
          v46 = *(_BYTE *)(v13 + 35);
          if ( (v46 & 8) != 0 )
            v47 = 5;
          else
            v47 = v46 & 7;
          MiUpdatePfnPriority(v43, v47, 0);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v41, 0x11u);
        if ( v45 )
        {
          v49 = *(_QWORD *)v13;
          v50 = v74;
          if ( dword_14034F248
            && (*(_BYTE *)v74 & 0x20) != 0
            && (*(_DWORD *)(v49 * *(unsigned int *)(v76 + 64) + *(_QWORD *)(v76 + 496)) & 0xE00LL) != 0xE00 )
          {
            MiLogPageAccess(v73, (unsigned __int64)v74, v48);
          }
          v51 = 0;
          v52 = MiMakePrototypePteDirect((__int64)v75) | 0x800;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v51 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v51);
            }
            while ( (*(_QWORD *)(v13 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
          }
          if ( (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(v13 + 32) == 1 )
          {
            v53 = *v50;
            v54 = (unsigned __int64)(v50 + 0x12090482600LL);
            if ( (unsigned __int64)(v50 + 0x12090482600LL) <= 0x7F8 && (unsigned int)MiPteHasShadow() )
              v53 |= 0x20uLL;
            if ( (v53 & 0x20) != 0 || v53 != _InterlockedCompareExchange64(v50, v52, v53) )
            {
              *v50 = v52;
              if ( v54 <= 0x7F8 )
                MiWritePteShadow((__int64)v50, v52);
              v55 = 1;
            }
            else
            {
              v55 = 0;
            }
            if ( v70 )
            {
              memset(v83, 0, sizeof(v83));
              MiIdentifyPfn(v13, v83);
            }
            v56 = *(_QWORD *)(v13 + 40);
            *(_QWORD *)(v13 + 24) |= 0x4000000000000000uLL;
            v57 = v56 & 0xFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v55 == 1 )
              MiInsertTbFlushEntry(v77, v71, 1LL, 0);
            v58 = (_QWORD *)v73;
            --*(_QWORD *)(v73 + 128);
            if ( (unsigned __int64)(v71 + 0x98000000000LL) > 0x7FFFFFFFFFLL )
              --v58[14];
            MiRemoveWsle(v49, (ULONG_PTR)v58);
            MiReleaseWsle(v49, v58, v71, 1);
            v59 = 0;
            v60 = 48 * v57 - 0x58000000000LL;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v60 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v59 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v59);
              }
              while ( (*(_QWORD *)(v60 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v60 + 24), 0x3FuLL) );
            }
            v61 = 0x3FFFFFFFFFFFFFFFLL;
            if ( (*(_BYTE *)(v60 + 34) & 7) != 6 )
              KeBugCheckEx(
                0x4Eu,
                0x99uLL,
                (v60 + 0x58000000000LL) / 48,
                *(_BYTE *)(v60 + 34) & 7,
                *(_QWORD *)(v60 + 24) & 0x3FFFFFFFFFFFFFFFLL);
            v62 = *(_QWORD *)(v60 + 24);
            v63 = (v62 & 0x3FFFFFFFFFFFFFFFLL) - 1;
            *(_QWORD *)(v60 + 24) = v62 ^ (v63 ^ v62) & 0x3FFFFFFFFFFFFFFFLL;
            if ( (v62 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
              MiPfnShareCountIsZero(v60, v63);
            _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v33 = (__int64)v75;
            MiResolveProtoCombine(v50, v73, v75, v61);
            v39 = v73;
            goto LABEL_143;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        return 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiUnlockProtoPoolPage(v41, 0x11u);
    return 0LL;
  }
  v14 = 48 * a6 - 0x58000000000LL;
  if ( !(unsigned int)MiFillCombinePage(a6, v14, v13, (__int64)((_QWORD)v11 << 25) >> 16) )
    return 0LL;
  v81 = a3 & 0x7FFFFFFFFFFFFFFFLL;
  v15 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a3);
  v78 = 48 * ContainingPageTable - 0x58000000000LL;
  v17 = a4 == (__int64 *)&unk_14034EF18;
  v18 = 0;
  v69 = !v17;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v18);
    }
    while ( (*(_QWORD *)(v13 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
    v16 = 0x7FFFFFFFFFFFFFFFLL;
  }
  if ( (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v13 + 32) != 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), v16);
    return 0LL;
  }
  if ( v70 )
  {
    memset(v83, 0, sizeof(v83));
    MiIdentifyPfn(v13, v83);
  }
  if ( (PteShadow & 0x42) != 0 )
    v72 = PteShadow & 0xFFFFFFFFFFFFFFBDuLL;
  v19 = 16;
  if ( (*(_BYTE *)(v13 + 34) & 0x10) == 0 )
  {
    v20 = *(_QWORD *)(v13 + 16);
    if ( (v20 & 1) == 0 )
    {
      v21 = MiReverseSwizzleInvalidPte(v20);
      if ( (v21 & 0x400) == 0 && (v21 & 0x800) == 0 && (v21 & 4) == 0 )
        *(_BYTE *)(v13 + 34) = v19 | v22;
    }
  }
  v23 = (__int64 *)(v13 + 16);
  v24 = *(_QWORD *)(v13 + 16);
  if ( (v24 & 2) != 0 )
  {
    if ( !v69
      || (v26 = *(_WORD *)(*(_QWORD *)&MiSystemPartition[4 * ((unsigned __int16)v24 >> 12) + 2672] + 164LL),
          ((unsigned __int8)v26 & (unsigned __int8)v19) != 0)
      || (v26 & 0x20) != 0 && (v24 & 2) != 0 )
    {
      v25 = *(_QWORD *)(v13 + 16);
      if ( (v24 & 4) != 0 )
      {
        v15 = *(_QWORD *)(v13 + 16);
        if ( (unsigned __int64)(v13 + 0x90482413010LL) <= 0x7F8 )
          v15 = MiReadPteShadow(v13 + 16, *(_QWORD *)(v13 + 16));
        *v23 = v25 & 0xFFFFFFFFFFFFFFFBuLL;
      }
      else if ( (v24 & 2) != 0 )
      {
        v15 = *(_QWORD *)(v13 + 16);
        if ( (unsigned __int64)(v13 + 0x90482413010LL) <= 0x7F8 )
          v15 = MiReadPteShadow(v13 + 16, *(_QWORD *)(v13 + 16));
      }
      *(_BYTE *)(v13 + 34) |= v19;
    }
    else
    {
      v15 = *(_QWORD *)(v13 + 16);
    }
    *v23 &= ~2uLL;
  }
  else if ( !v69 && (v24 & 4) != 0 )
  {
    v27 = *v23;
    if ( (*v23 & 4) != 0 )
    {
      v15 = *v23;
      if ( (unsigned __int64)(v13 + 0x90482413010LL) <= 0x7F8 )
        v15 = MiReadPteShadow(v13 + 16, *v23);
      *v23 = v27 & 0xFFFFFFFFFFFFFFFBuLL;
    }
    else if ( (v27 & 2) != 0 )
    {
      v15 = *v23;
      if ( (unsigned __int64)(v13 + 0x90482413010LL) <= 0x7F8 )
        v15 = MiReadPteShadow(v13 + 16, *v23);
    }
    *(_BYTE *)(v13 + 34) |= v19;
  }
  v28 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v28 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v28);
    }
    while ( (*(_QWORD *)(v14 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
  }
  MiFinalizePageAttribute(v14, *(unsigned __int8 *)(v13 + 34) >> 6, 1);
  MiCopyPfnEntry(v14, v13);
  v29 = *(_BYTE *)(v14 + 35);
  if ( (v29 & 8) == 0 && (v29 & 7u) < 5 )
    *(_BYTE *)(v14 + 35) = v29 & 0xF8 | 5;
  *(_QWORD *)(v14 + 8) = v81;
  *(_QWORD *)(v14 + 40) = ContainingPageTable & 0xFFFFFFFFFLL | *(_QWORD *)(v14 + 40) & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
  MI_MAKE_PROTECT_WRITE_COPY((__int64 *)(v14 + 16));
  if ( v69 )
    *(_QWORD *)(v14 + 16) |= 8uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v69 && (*(_DWORD *)v23 & 4) != 0 )
  {
    *v23 &= ~4uLL;
    if ( v15 )
      v15 &= ~4uLL;
  }
  v72 ^= (v72 ^ (a6 << 12)) & 0xFFFFFFFFF000LL;
  v30 = v72;
  if ( (v72 & 0x800) != 0 )
  {
    v30 = v72 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
    v72 = v30;
  }
  v31 = v74;
  v32 = (unsigned __int64)(v74 + 0x12090482600LL);
  *v74 = v30;
  if ( v32 <= 0x7F8 )
    MiWritePteShadow((__int64)v31, v30);
  v33 = (__int64)v75;
  v34 = (unsigned __int64)(v75 + 0x12090482600LL);
  *v75 = 0LL;
  *(_QWORD *)v33 = v30;
  if ( v34 <= 0x7F8 )
    MiWritePteShadow(v33, v30);
  *(_QWORD *)(v13 + 24) |= 0x4000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiInsertTbFlushEntry(v77, v71, 1LL, 0);
  if ( v15 )
  {
    v35 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v13 + 40)) >> 8) & 0x3FF);
    MiReleasePageFileInfo((struct _KEVENT *)v35, v15, 1);
  }
  v36 = v78;
  v37 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v78 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v37);
    }
    while ( (*(_QWORD *)(v36 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) );
  }
  *(_QWORD *)(v36 + 24) ^= (*(_QWORD *)(v36 + 24) ^ (*(_QWORD *)(v36 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v38 = *v79;
  if ( v69 )
  {
    if ( (__int16 *)v38 == MiSystemPartition )
    {
      MiReturnResidentAvailable(1uLL);
      _InterlockedExchangeAdd64(&qword_14034F950, 1uLL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 5568), 1uLL);
    }
    MiReturnCommit(v38, 1LL);
    _InterlockedExchangeAdd64(&qword_14034FCE0, 0xFFFFFFFFFFFFFFFFuLL);
  }
  v39 = v73;
  if ( (*(_BYTE *)(v73 + 216) & 7) == 0 )
  {
    v40 = (_QWORD *)(*(_QWORD *)(v76 + 496) + *(_QWORD *)v14 * *(unsigned int *)(v76 + 64));
    *v40 &= 0xFFFFFFFFFFFFFE0FuLL;
  }
  --*(_QWORD *)(v39 + 128);
  if ( (unsigned __int64)(v71 + 0x98000000000LL) > 0x7FFFFFFFFFLL )
    --*(_QWORD *)(v39 + 112);
LABEL_143:
  if ( (*(_BYTE *)(v39 + 216) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
  if ( v70 )
  {
    if ( a6 == -1 )
      v64 = v33 & 0xFFFFFFFFFFFFFFFEuLL;
    else
      v64 = v33 | 1;
    v65 = EtwpActiveSystemLoggers;
    v84[0] = v83;
    v83[3] = v64;
    v84[1] = 32LL;
    while ( 1 )
    {
      v17 = !_BitScanForward(&v67, v65);
      if ( v17 )
        break;
      v65 &= v65 - 1;
      v66 = (char *)&EtwpGroupMasks + 32 * v67;
      if ( v66 )
      {
        if ( (*((_DWORD *)v66 + 1) & 0x8000001) != 0 )
          EtwpLogKernelEvent((__int64)v84, (unsigned __int16)EtwpSystemLogger[2 * v67], 1u, 0x27Au, 289413890);
      }
    }
  }
  return v13;
}

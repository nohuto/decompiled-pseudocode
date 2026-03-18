/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x140125DB4 (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     MiLockLeafPage @ 0x140037DE0 (MiLockLeafPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLocatePagefileSubsection @ 0x140089C20 (MiLocatePagefileSubsection.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiDiscardTransitionPte @ 0x14014AE5C (MiDiscardTransitionPte.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeZeroSinglePage @ 0x140186BB0 (KeZeroSinglePage.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x140226040 (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiZeroCfgSystemWideBitmapWorker(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rbx
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // r8
  unsigned __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // r10
  __int64 v26; // r9
  ULONG_PTR v27; // r15
  unsigned __int64 v28; // rdi
  char *v29; // rax
  char *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // r9
  unsigned __int64 v35; // rbx
  ULONG_PTR v36; // r12
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 PteShadow; // rbx
  _QWORD *v40; // r10
  unsigned __int64 v41; // r8
  __int64 v42; // rdx
  unsigned __int16 v43; // dx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  unsigned int v47; // edi
  __int64 v48; // rdx
  int v49; // esi
  __int64 v50; // rax
  __int64 v51; // rdi
  size_t v52; // r8
  void *v53; // rcx
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // r8
  __int64 v57; // rdx
  unsigned __int64 v58; // r10
  __int64 v59; // rbx
  __int64 v60; // r10
  __int64 v61; // [rsp+30h] [rbp-88h]
  unsigned __int64 v62; // [rsp+38h] [rbp-80h]
  __int64 v63; // [rsp+40h] [rbp-78h]
  __int64 v64; // [rsp+48h] [rbp-70h]
  unsigned __int64 v65; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v66; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v67; // [rsp+60h] [rbp-58h] BYREF
  __int64 v68; // [rsp+68h] [rbp-50h]
  unsigned __int8 v69; // [rsp+C0h] [rbp+8h] BYREF
  size_t Size; // [rsp+C8h] [rbp+10h]
  unsigned int v71; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v72; // [rsp+D8h] [rbp+20h]

  v3 = a3 >> 3;
  v4 = a2 >> 3;
  v6 = (a2 >> 3) & 0xFFF;
  v71 = (a2 >> 3) & 0xFFF;
  LODWORD(Size) = ((_WORD)v3 + (unsigned __int16)(a2 >> 3)) & 0xFFF;
  v66 = ((a2 >> 3) + v3 - 1) >> 12;
  v7 = MiLocatePagefileSubsection(a1, &v66);
  v65 = v4 >> 12;
  v8 = *(_QWORD *)(v7 + 8);
  v68 = 8 * v66;
  v9 = 8 * v66 + v8;
  result = MiLocatePagefileSubsection(a1, &v65);
  v11 = result;
  if ( *(_QWORD *)(result + 8) )
  {
    v12 = v65;
  }
  else
  {
    do
    {
      if ( v11 == v7 )
        return result;
      v11 = *(_QWORD *)(v11 + 16);
      v12 = 0LL;
      v65 = 0LL;
    }
    while ( !*(_QWORD *)(v11 + 8) );
  }
  v13 = *(_QWORD *)(v11 + 8);
  v14 = v13 + 8 * v12;
  if ( v11 == v7 )
    v15 = v9;
  else
    v15 = v13 + 8LL * *(unsigned int *)(v11 + 44);
  v16 = Size;
  v17 = 0LL;
  v18 = 0LL;
  v72 = v15;
  result = 0LL;
  v69 = 17;
  v63 = 0LL;
  v62 = 0LL;
  if ( (_DWORD)v6 )
    result = v14;
  v19 = 0LL;
  v64 = result;
  if ( (_DWORD)Size )
    v19 = v9;
  v20 = result;
  v61 = v19;
  while ( 1 )
  {
    if ( v14 < v15 )
      goto LABEL_25;
    if ( v11 == v7 )
      goto LABEL_100;
    v11 = *(_QWORD *)(v11 + 16);
    if ( !*(_QWORD *)(v11 + 8) )
      break;
LABEL_19:
    v14 = *(_QWORD *)(v11 + 8);
    if ( v11 == v7 )
    {
      v21 = *(_QWORD *)(v7 + 8) + v68;
      if ( v16 )
        v19 = *(_QWORD *)(v7 + 8) + v68;
      v61 = v19;
    }
    else
    {
      v21 = v14 + 8LL * *(unsigned int *)(v11 + 44);
    }
    v72 = v21;
LABEL_25:
    if ( (v18 & 0xFFFFFFFFFFFFF000uLL) != (v14 & 0xFFFFFFFFFFFFF000uLL) && v18 )
    {
      MiUnlockProtoPoolPage(v17, v69);
      v18 = 0LL;
      v62 = 0LL;
      goto LABEL_29;
    }
    if ( v17 )
    {
LABEL_32:
      result = MiLockLeafPage(v14, 0LL);
      v25 = *(_QWORD *)v14;
      v26 = 0x90482413000LL;
      v27 = result;
      v28 = v14 + 0x90482413000LL;
      if ( v14 + 0x90482413000LL <= 0x7F8 )
      {
        result = MiPteHasShadow(v23, v22);
        if ( (_DWORD)result )
        {
          if ( (v25 & 1) != 0 && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
          {
            result = (__int64)KeGetCurrentThread();
            v22 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1520LL);
            if ( v22 )
            {
              result = *(_QWORD *)(v22 + 8 * ((v14 >> 3) & 0x1FF));
              if ( (result & 0x20) != 0 )
                v25 |= 0x20uLL;
              if ( (result & 0x42) != 0 )
                v25 |= 0x42uLL;
            }
          }
        }
      }
      v67 = v25;
      if ( (v25 & 1) != 0 )
      {
        if ( (unsigned __int64)&v67 + v26 <= 0x7F8 )
          v25 = MiReadPteShadow(&v67, v25);
        v29 = (char *)MiMapPageInHyperSpaceWorker((v25 >> 12) & 0xFFFFFFFFFLL, 0LL, 0x80000000LL);
        v30 = v29;
        if ( v14 == v20 )
        {
          memset(&v29[v71], 0, 4096 - v71);
        }
        else if ( v14 == v19 )
        {
          memset(v29, 0, (unsigned int)Size);
        }
        else
        {
          KeZeroSinglePage(v29);
        }
        LOBYTE(v31) = 17;
        MiUnmapPageInHyperSpaceWorker(v30, v31, 0x80000000LL);
        v32 = MiCaptureDirtyBitToPfn(v27);
        result = 0x7FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v32 )
        {
          v33 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v27 + 40)) >> 8) & 0x3FF);
          result = MiReleasePageFileInfo(v33, v34, 1LL);
        }
        goto LABEL_99;
      }
      if ( (v25 & 0x400) != 0 )
        goto LABEL_99;
      if ( (v25 & 0x800) != 0 )
      {
        v35 = 0LL;
        v36 = ((unsigned __int64)MiReverseSwizzleInvalidPte(v25, v22, v24, v26) >> 12) & 0xFFFFFFFFFLL;
        if ( *(_WORD *)(v27 + 32) )
          goto LABEL_89;
        if ( v14 == v20 || v14 == v61 )
        {
          v49 = 0;
          if ( (*(_BYTE *)(v27 + 34) & 0x10) != 0 )
            goto LABEL_84;
          v49 = 1;
          if ( (unsigned int)MiUnlinkPageFromList(v27) )
          {
            v35 = MiCaptureDirtyBitToPfn(v27);
LABEL_84:
            v50 = MiMapPageInHyperSpaceWorker(v36, 0LL, 0x80000000LL);
            v51 = v50;
            if ( v14 == v64 )
            {
              v52 = 4096 - v71;
              v53 = (void *)(v50 + v71);
            }
            else
            {
              v52 = (unsigned int)Size;
              v53 = (void *)v50;
            }
            memset(v53, 0, v52);
            LOBYTE(v54) = 17;
            MiUnmapPageInHyperSpaceWorker(v51, v54, 0x80000000LL);
            if ( v49 == 1 )
              MiInsertPageInList(v27, 8LL);
LABEL_89:
            result = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v35 )
              result = MiReleasePageFileInfo(MiSystemPartition, v35, 1LL);
            goto LABEL_99;
          }
          MiDiscardTransitionPte(v27);
          result = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v19 = v61;
          v14 += 8LL;
          v15 = v72;
          v17 = v63;
          v18 = v62;
          v20 = v64;
          v16 = Size;
        }
        else
        {
          if ( (unsigned int)MiUnlinkPageFromList(v27) )
          {
            PteShadow = *(_QWORD *)(v27 + 16);
            v40 = (_QWORD *)(v27 + 16);
            if ( (PteShadow & 4) != 0 )
            {
              if ( v27 + 0x90482413010LL <= 0x7F8 )
                PteShadow = MiReadPteShadow(v27 + 16, *(_QWORD *)(v27 + 16));
              v35 = PteShadow & 0xFFFFFFFFFFFFFFFDuLL;
            }
            else
            {
              v35 = 0LL;
            }
            if ( (*v40 & 2) != 0 )
            {
              v41 = (unsigned __int64)MiReverseSwizzleInvalidPte(*v40, *v40, v37, v38) >> 32;
              v42 = *(_QWORD *)&MiSystemPartition[4 * (v43 >> 12) + 2672];
            }
            else
            {
              v41 = 0LL;
              v42 = 0LL;
            }
            v44 = MiTransferSoftwarePte(*v40, v42, v41);
            v45 = *(_QWORD *)(v27 + 40) & 0xFFFFFFFFFLL;
            *(_QWORD *)v14 = v44;
            v46 = 48 * v45 - 0x58000000000LL;
            if ( v28 <= 0x7F8 )
              MiWritePteShadow(v14, v44);
            v47 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v47 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v47);
              }
              while ( (*(_QWORD *)(v46 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) );
            }
            if ( (*(_BYTE *)(v46 + 34) & 7) != 6 )
              KeBugCheckEx(
                0x4Eu,
                0x99uLL,
                (v46 + 0x58000000000LL) / 48,
                *(_BYTE *)(v46 + 34) & 7,
                *(_QWORD *)(v46 + 24) & 0x3FFFFFFFFFFFFFFFLL);
            v48 = *(_QWORD *)(v46 + 24);
            *(_QWORD *)(v46 + 24) = v48 ^ (((v48 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v48) & 0x3FFFFFFFFFFFFFFFLL;
            if ( (v48 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
              MiPfnShareCountIsZero(v46, 0LL);
            _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiInsertPageInFreeOrZeroedList(v36);
            goto LABEL_89;
          }
          MiDiscardTransitionPte(v27);
          result = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v19 = v61;
          v14 += 8LL;
          v15 = v72;
          v17 = v63;
          v18 = v62;
          v16 = Size;
        }
      }
      else
      {
        if ( v25 && v14 != v20 && v14 != v19 )
        {
          v55 = v25;
          if ( (v25 & 2) != 0 )
          {
            v56 = (unsigned __int64)MiReverseSwizzleInvalidPte(v25, v22, v24, v26) >> 32;
            v55 = v58;
            v57 = *(_QWORD *)&MiSystemPartition[4 * ((unsigned __int16)v58 >> 12) + 2672];
          }
          else
          {
            v56 = 0LL;
            v57 = 0LL;
          }
          v59 = MiTransferSoftwarePte(v55, v57, v56);
          result = MiReleasePageFileSpace(MiSystemPartition, v60, 0LL);
          *(_QWORD *)v14 = v59;
          if ( v28 <= 0x7F8 )
            result = MiWritePteShadow(v14, v59);
        }
LABEL_99:
        v19 = v61;
        v14 += 8LL;
        v15 = v72;
        v17 = v63;
        v18 = v62;
        v20 = v64;
        v16 = Size;
      }
    }
    else
    {
LABEL_29:
      result = MiLockProtoPoolPage(v14, &v69);
      v63 = result;
      v17 = result;
      if ( result )
      {
        v62 = v14;
        goto LABEL_32;
      }
      v15 = v72;
      v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v16 = Size;
    }
  }
  while ( v11 != v7 )
  {
    v11 = *(_QWORD *)(v11 + 16);
    if ( *(_QWORD *)(v11 + 8) )
      goto LABEL_19;
  }
LABEL_100:
  if ( v17 )
    return MiUnlockProtoPoolPage(v17, v69);
  return result;
}

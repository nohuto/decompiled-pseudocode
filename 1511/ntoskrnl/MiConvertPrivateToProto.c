/*
 * XREFs of MiConvertPrivateToProto @ 0x14012A57C
 * Callers:
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 * Callees:
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14001EDD8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MI_UPDATE_WORKING_SET_PRIVATE_SIZE @ 0x14001EDF8 (MI_UPDATE_WORKING_SET_PRIVATE_SIZE.c)
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     MiIdentifyPfn @ 0x140050C60 (MiIdentifyPfn.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiCopyPfnEntry @ 0x140071D80 (MiCopyPfnEntry.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiLockLeafPage @ 0x1400A2340 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiRemoveWsle @ 0x1400B79C0 (MiRemoveWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1400B82C4 (MI_WSLE_LOG_ACCESS.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MiUpdatePfnPriority @ 0x1400B9884 (MiUpdatePfnPriority.c)
 *     MiReleaseWsle @ 0x1400BAAFC (MiReleaseWsle.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400E2724 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiComparePages @ 0x14012AD40 (MiComparePages.c)
 *     MiResolveProtoCombine @ 0x14012AE34 (MiResolveProtoCombine.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x14012B400 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiFillCombinePage @ 0x14012B61C (MiFillCombinePage.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiConvertPrivateToProto(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // r13
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 *v20; // rcx
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  _BYTE *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  int *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r11
  _QWORD *v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdi
  unsigned __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r8
  ULONG_PTR v41; // rdi
  __int64 v42; // rbx
  ULONG_PTR v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned __int64 v48; // r12
  unsigned int v49; // ebx
  char *v50; // rax
  unsigned int v52; // ecx
  char v54; // [rsp+30h] [rbp-99h]
  bool v55; // [rsp+34h] [rbp-95h]
  int v56; // [rsp+34h] [rbp-95h]
  BOOL v57; // [rsp+38h] [rbp-91h]
  unsigned __int64 v59; // [rsp+50h] [rbp-79h] BYREF
  _BYTE *v60; // [rsp+58h] [rbp-71h]
  __int64 v61; // [rsp+60h] [rbp-69h] BYREF
  __int64 v62; // [rsp+68h] [rbp-61h]
  __int64 v63; // [rsp+70h] [rbp-59h]
  __int64 v64; // [rsp+78h] [rbp-51h]
  __int64 *v65; // [rsp+80h] [rbp-49h]
  __int64 v66; // [rsp+88h] [rbp-41h]
  _KPROCESS *Process; // [rsp+90h] [rbp-39h]
  unsigned __int64 v68[4]; // [rsp+98h] [rbp-31h] BYREF
  _QWORD v69[2]; // [rsp+B8h] [rbp-11h] BYREF

  v64 = a5;
  v65 = a4;
  Process = KeGetCurrentThread()->ApcState.Process;
  v57 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
  v60 = a2;
  v59 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = v59;
  v10 = MI_GET_PAGE_FRAME_FROM_PTE(&v59);
  v11 = (__int64)((_QWORD)a2 << 25) >> 16;
  v63 = *(_QWORD *)(a1 + 184);
  v12 = 48 * v10 - 0x58000000000LL;
  if ( a6 == -1 )
  {
    v62 = MiLockProtoPoolPage(a3, 0LL);
    v35 = v62;
    if ( !v62 )
      return 0LL;
    v36 = MiLockLeafPage(a3, 0);
    v37 = v36;
    if ( v36 )
    {
      if ( (*(_BYTE *)(v36 + 35) & 0x40) == 0 && ((*(_BYTE *)(v36 + 34) & 7) == 6 || (*(_BYTE *)(v36 + 34) & 0x20) == 0) )
      {
        v38 = MiMapPageInHyperSpaceWorker((v36 + 0x58000000000LL) / 48, 0LL, 0x80000000);
        v54 = MiComparePages(v38, v11);
        MiUnmapPageInHyperSpaceWorker(v38, 0x11u);
        if ( v54 == 1 )
        {
          MI_GET_PFN_PRIORITY(v12);
          MiUpdatePfnPriority(v37);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v62, 0x11u);
        if ( !v54 )
          return 0LL;
        v41 = *(_QWORD *)v12;
        if ( dword_1402FED88 )
          MI_WSLE_LOG_ACCESS(a1, (_DWORD *)(*(_QWORD *)(v63 + 496) + v41 * *(unsigned int *)(v63 + 64)), v60);
        v61 = (a3 << 16) | 0x600;
        MiLockPageAtDpcInline(v12, v39, v40);
        if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(v12 + 32) == 1 )
        {
          v56 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v60, (a3 << 16) | 0x600);
          if ( v57 )
          {
            memset(v68, 0, sizeof(v68));
            MiIdentifyPfn(v12, v68);
          }
          *(_BYTE *)(v12 + 34) |= 7u;
          *(_QWORD *)(v12 + 24) |= 0x4000000000000000uLL;
          v42 = *(_QWORD *)(v12 + 40) & 0xFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v56 == 1 )
            MiInsertTbFlushEntry(v64, v11, 1LL, 0);
          MI_UPDATE_WORKING_SET_PRIVATE_SIZE(a1, v11, -1LL);
          MiRemoveWsle(v41, v43, v44);
          MiReleaseWsle(v41, (_QWORD *)a1, v11, 1);
          v45 = 48 * v42 - 0x58000000000LL;
          MiLockPageAtDpcInline(v45, v46, v47);
          MiDecrementShareCount(v45);
          _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiResolveProtoCombine(v60, a1, a3);
          v34 = a1;
          goto LABEL_66;
        }
        goto LABEL_48;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiUnlockProtoPoolPage(v35, 0x11u);
    return 0LL;
  }
  v13 = 48 * a6 - 0x58000000000LL;
  if ( !(unsigned int)MiFillCombinePage(0x58000000000LL, v13, v12, v11) )
    return 0LL;
  v14 = 0LL;
  v66 = a3 & 0x7FFFFFFFFFFFFFFFLL;
  v61 = MI_READ_PTE_LOCK_FREE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v62 = MI_GET_PFN_FROM_PTE(&v61);
  v55 = v65 != (__int64 *)&unk_1402FEA58;
  MiLockPageAtDpcInline(v12, v15, v16);
  if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v12 + 32) != 1 )
  {
LABEL_48:
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  if ( v57 )
  {
    memset(v68, 0, sizeof(v68));
    MiIdentifyPfn(v12, v68);
  }
  if ( (v9 & 0x42) != 0 )
    v59 = v9 & 0xFFFFFFFFFFFFFFBDuLL;
  LOBYTE(v17) = *(_BYTE *)(v12 + 34);
  if ( (v17 & 0x10) == 0 && !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(*(_QWORD *)(v12 + 16)) )
  {
    LOBYTE(v17) = v17 | 0x10;
    *(_BYTE *)(v12 + 34) = v17;
  }
  v19 = *(_QWORD *)(v12 + 16);
  if ( (v19 & 0x1000) == 0 )
  {
    if ( !v55 && (v19 & 0x2000) != 0 )
    {
      v23 = MiCapturePageFileInfoInline((unsigned __int64 *)(v12 + 16), 1, 1);
      *(_BYTE *)(v12 + 34) |= 0x10u;
      v14 = v23;
    }
    goto LABEL_22;
  }
  v20 = (unsigned __int64 *)(v12 + 16);
  if ( v55 )
  {
    if ( !MI_IS_PTE_IN_WS_SWAP_SET(v20) )
    {
      v14 = v21;
      goto LABEL_18;
    }
    v20 = (unsigned __int64 *)(v12 + 16);
  }
  v22 = MiCapturePageFileInfoInline(v20, 1, 1);
  *(_BYTE *)(v12 + 34) |= 0x10u;
  v14 = v22;
LABEL_18:
  *(_QWORD *)(v12 + 16) &= ~0x1000uLL;
LABEL_22:
  MiLockNestedPageAtDpcInline(v13, v17, v18);
  MiFinalizePageAttribute(v13, *(unsigned __int8 *)(v12 + 34) >> 6, 1);
  MiCopyPfnEntry(v13, v12);
  if ( (unsigned int)MI_GET_PFN_PRIORITY(v24) < 5 )
    *(_BYTE *)(v13 + 35) = *(_BYTE *)(v13 + 35) & 0xF8 | 5;
  *(_QWORD *)(v13 + 8) = v66;
  *(_QWORD *)(v13 + 40) |= 0x200000000000000uLL;
  *(_QWORD *)(v13 + 40) ^= (*(_QWORD *)(v13 + 40) ^ MI_GET_PAGE_FRAME_FROM_PTE(&v61)) & 0xFFFFFFFFFLL;
  v25 = *(_QWORD *)(v13 + 16);
  if ( (v25 & 0x80u) != 0LL )
    *(_QWORD *)(v13 + 16) = v25 | 0x20;
  if ( v55 )
    *(_QWORD *)(v13 + 16) |= 0x1000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v55 && (*(_DWORD *)(v12 + 16) & 0x2000LL) != 0 )
  {
    *(_QWORD *)(v12 + 16) &= ~0x2000uLL;
    if ( v14 )
      v14 &= ~0x2000uLL;
  }
  v59 ^= (v59 ^ (a6 << 12)) & 0xFFFFFFFFF000LL;
  v26 = v59;
  if ( (v59 & 0x800) != 0 )
  {
    v26 = v59 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
    v59 = v26;
  }
  v27 = v60;
  *(_QWORD *)v60 = v26;
  if ( (unsigned int)MiPteInShadowRange(v27) )
    MiWritePteShadow(v60, v26);
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)a3 = v26;
  if ( (unsigned int)MiPteInShadowRange(a3) )
    MiWritePteShadow(a3, v26);
  *(_QWORD *)(v12 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(v12 + 34) |= 7u;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiInsertTbFlushEntry(v64, v11, 1LL, 0);
  if ( v14 )
  {
    v30 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v12 + 40)) >> 8) & 0x3FF);
    MiReleasePageFileInfo((__int64)v30, v14, 1);
  }
  v31 = v62;
  MiLockPageAtDpcInline(v62, v28, v29);
  *(_QWORD *)(v31 + 24) ^= (*(_QWORD *)(v31 + 24) ^ (*(_QWORD *)(v31 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v32 = *v65;
  if ( v55 )
  {
    if ( (int *)v32 == MiSystemPartition )
    {
      MiReturnResidentAvailable(1uLL);
      _InterlockedExchangeAdd64(&qword_1402FF4D0, 1uLL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 5952), 1uLL);
    }
    MiReturnCommit(v32, 1uLL);
    _InterlockedExchangeAdd64(&qword_1402FF820, 0xFFFFFFFFFFFFFFFFuLL);
  }
  if ( (*(_BYTE *)(a1 + 216) & 7) == 0 )
  {
    v33 = (_QWORD *)(*(_QWORD *)(v63 + 496) + *(_QWORD *)v13 * *(unsigned int *)(v63 + 64));
    *v33 &= 0xFFFFFFFFFFFFFE0FuLL;
  }
  MI_UPDATE_WORKING_SET_PRIVATE_SIZE(a1, v11, -1LL);
LABEL_66:
  if ( (*(_BYTE *)(v34 + 216) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
  if ( v57 )
  {
    if ( a6 == -1 )
      v48 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
    else
      v48 = a3 | 1;
    v49 = EtwpActiveSystemLoggers;
    v69[0] = v68;
    v68[3] = v48;
    v69[1] = 32LL;
    while ( _BitScanForward(&v52, v49) )
    {
      v49 &= v49 - 1;
      v50 = (char *)&EtwpGroupMasks + 32 * v52;
      if ( v50 )
      {
        if ( (*((_DWORD *)v50 + 1) & 0x8000001) != 0 )
          EtwpLogKernelEvent((__int64)v69, (unsigned __int16)EtwpSystemLogger[2 * v52], 1LL, 0x27Au, 0x11401B02u);
      }
    }
  }
  return v12;
}

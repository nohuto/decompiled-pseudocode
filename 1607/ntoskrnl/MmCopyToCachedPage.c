/*
 * XREFs of MmCopyToCachedPage @ 0x140037480
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140034AE0 (CcMapAndCopyInToCache.c)
 *     HvViewMapCopyToFileOffset @ 0x1401B6568 (HvViewMapCopyToFileOffset.c)
 * Callees:
 *     MiIdentifyPfn @ 0x14000F810 (MiIdentifyPfn.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockLeafPage @ 0x14002E5D0 (MiLockLeafPage.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiIsPfnFileOnly @ 0x14004E500 (MiIsPfnFileOnly.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     PfSnLogPageFault @ 0x1400FBBA0 (PfSnLogPageFault.c)
 *     MiWriteValidPteVolatile @ 0x1400FCE74 (MiWriteValidPteVolatile.c)
 *     MiChargePartitionResidentAvailable @ 0x140101224 (MiChargePartitionResidentAvailable.c)
 *     MiPfnZeroingNeeded @ 0x140104F58 (MiPfnZeroingNeeded.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     MiLockAndInsertPageInFreeList @ 0x140145314 (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     MiCaptureSystemCachePte @ 0x1401E6BA0 (MiCaptureSystemCachePte.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiMapCacheExceptionFilter @ 0x1406599EC (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MmCopyToCachedPage(ULONG_PTR a1, void *a2, unsigned int a3, size_t a4, char a5)
{
  size_t v5; // rbx
  ULONG_PTR BugCheckParameter4; // r12
  unsigned int v7; // edi
  __int64 v8; // rax
  ULONG_PTR v9; // r9
  ULONG_PTR v10; // r10
  unsigned __int64 v11; // rdx
  unsigned __int16 v12; // ax
  int *v13; // rsi
  unsigned __int64 v14; // r13
  __int16 v15; // ax
  __int64 v16; // r9
  __int64 v17; // r10
  LONG *SharedVm; // rbx
  __int64 v19; // rax
  unsigned __int8 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  void *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r14
  ULONG_PTR v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r9
  __m128i *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // r11
  ULONG_PTR v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r11
  _BYTE *v37; // rdx
  __int64 v38; // r9
  __int64 v39; // r11
  int v40; // ecx
  __int64 result; // rax
  int v42; // r8d
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int16 NodeShiftedColor; // r8
  __int16 v45; // dx
  unsigned int *p_PageColor; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 Page; // r13
  unsigned int v50; // eax
  unsigned int v51; // r15d
  unsigned int v52; // ebx
  signed __int64 i; // rdx
  signed __int64 v54; // rax
  unsigned __int64 v55; // rax
  _QWORD *v56; // r12
  __int64 v57; // r15
  unsigned __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbx
  char *v62; // r13
  size_t v63; // r15
  ULONG_PTR v64; // r15
  __int64 v65; // rax
  unsigned __int64 v66; // rbx
  unsigned __int8 CurrentIrql; // r13
  __int64 v68; // rax
  __int64 v69; // r9
  unsigned __int64 v70; // r10
  __int64 v71; // rdx
  __int16 v72; // ax
  __int64 v73; // rcx
  bool v74; // r12
  unsigned __int64 v75; // rcx
  unsigned __int16 v76; // dx
  int *v77; // rbx
  struct _KPRCB *v78; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v80; // ett
  int v81; // r15d
  unsigned __int64 v82; // rbx
  __int64 v83; // rcx
  __int64 v84; // rax
  int v85; // eax
  __int64 v86; // rax
  unsigned int v87; // r15d
  unsigned int v88; // ecx
  __int64 ContainingPageTable; // rax
  __int64 v90; // r9
  __int64 v91; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v93; // edx
  int v94; // eax
  __int8 v95; // cl
  __int64 v96; // rcx
  _BYTE *v97; // r12
  volatile signed __int32 *v98; // rbx
  unsigned __int8 v99; // r15
  signed __int32 v100; // eax
  signed __int32 v101; // edx
  __int64 v102; // rax
  _DWORD *v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // r11
  ULONG_PTR v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // r11
  __int8 v111; // dl
  __int64 v112; // rcx
  int v113; // r11d
  __int64 v114; // rdx
  bool v115; // zf
  __int64 v116; // rcx
  __int64 v117; // rax
  int v118; // r15d
  unsigned __int64 v119; // r8
  int v120; // edx
  unsigned __int16 v121; // cx
  int *v122; // rbx
  unsigned __int64 v123; // r8
  struct _KPRCB *v124; // r9
  __int64 v125; // rdx
  signed __int32 v126; // eax
  __int64 v127; // r12
  unsigned __int8 v128; // r14
  LONG *v129; // rbx
  char v130; // al
  __int64 v131; // rax
  unsigned __int64 v132; // r9
  unsigned __int64 ValidKernelPte; // r8
  __int64 v134; // rbx
  __int64 v135; // r13
  __int64 *v136; // rbx
  ULONG_PTR v137; // rsi
  unsigned __int64 v138; // rax
  unsigned __int8 v139; // [rsp+30h] [rbp-188h] BYREF
  char j; // [rsp+31h] [rbp-187h]
  size_t Size; // [rsp+34h] [rbp-184h]
  size_t v142; // [rsp+40h] [rbp-178h]
  void *Src; // [rsp+48h] [rbp-170h]
  int v144; // [rsp+50h] [rbp-168h]
  ULONG_PTR PrototypePteDirect; // [rsp+58h] [rbp-160h]
  unsigned __int64 v146; // [rsp+60h] [rbp-158h] BYREF
  unsigned int v147; // [rsp+68h] [rbp-150h]
  __int64 v148; // [rsp+70h] [rbp-148h]
  int v149; // [rsp+78h] [rbp-140h]
  unsigned int v150; // [rsp+7Ch] [rbp-13Ch]
  int v151; // [rsp+80h] [rbp-138h] BYREF
  __int64 v152; // [rsp+88h] [rbp-130h]
  int *v153; // [rsp+90h] [rbp-128h]
  unsigned int v154; // [rsp+98h] [rbp-120h]
  int v155; // [rsp+A0h] [rbp-118h] BYREF
  int v156; // [rsp+A4h] [rbp-114h] BYREF
  int v157; // [rsp+A8h] [rbp-110h] BYREF
  int v158; // [rsp+ACh] [rbp-10Ch] BYREF
  _QWORD v159[2]; // [rsp+B0h] [rbp-108h] BYREF
  unsigned __int64 v160; // [rsp+C0h] [rbp-F8h]
  int *v161; // [rsp+C8h] [rbp-F0h]
  ULONG_PTR v162; // [rsp+D0h] [rbp-E8h]
  _BYTE *v163; // [rsp+D8h] [rbp-E0h]
  __int64 v164; // [rsp+E0h] [rbp-D8h]
  _QWORD v165[10]; // [rsp+E8h] [rbp-D0h] BYREF
  __int16 v166; // [rsp+138h] [rbp-80h]
  unsigned __int16 v167; // [rsp+13Ah] [rbp-7Eh]
  _QWORD v168[3]; // [rsp+140h] [rbp-78h] BYREF
  __int64 v169; // [rsp+158h] [rbp-60h]
  _QWORD v170[2]; // [rsp+168h] [rbp-50h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+0h]

  v5 = a4;
  v142 = a4;
  BugCheckParameter4 = a3;
  Size = a3;
  Src = a2;
  v162 = a1;
  v165[5] = a1;
  v165[6] = a2;
  v154 = a3;
  v165[7] = a4;
  v7 = 0;
  v165[0] = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v8 = MI_GET_PFN_FROM_PTE(v165);
  v11 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 40 * ((v10 >> 18) & 7) + 24);
  if ( (v11 & 1) != 0 )
    v11 &= ~1uLL;
  v152 = *(_QWORD *)v11;
  v165[1] = v152;
  v12 = *(_WORD *)(v152 + 60) & 0x3FF;
  if ( v12 == 1023 )
    v13 = MiSystemPartition;
  else
    v13 = *(int **)(qword_140327038 + 8LL * v12);
  v153 = v13;
  v165[2] = v13;
  v161 = v13 + 1648;
  if ( v9 + BugCheckParameter4 > 0x1000 || v9 + BugCheckParameter4 < v5 )
    KeBugCheckEx(0x1Au, 0x776uLL, v10, v9, BugCheckParameter4);
  v14 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v160 = v14;
  v15 = MI_READ_PTE_LOCK_FREE(v14);
  if ( (v15 & 1) != 0 )
  {
    if ( (v15 & 0x42) == 0 && (v15 & 0x800) != 0 )
    {
      SharedVm = MiGetSharedVm((__int64)(v13 + 1648));
      ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v19 = MI_READ_PTE_LOCK_FREE(v14);
      if ( (v19 & 1) != 0 && (v19 & 0x42) == 0 && (v19 & 0x800) != 0 )
      {
        *(_QWORD *)v14 = v19 | 0x62;
        if ( (unsigned int)MiPteInShadowRange(v14, v19 | 0x62) )
          MiWritePteShadow(v22, v21);
      }
      MiUnlockWorkingSetExclusive((__int64)(v13 + 1648), v20);
      goto LABEL_273;
    }
    goto LABEL_274;
  }
  v23 = Src;
  v164 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v17 + (v16 & (v14 >> 9))) >> 12) & 0xFFFFFFFFFLL)
       - 0x58000000000LL;
  v24 = MiCaptureSystemCachePte(v14);
  if ( (v24 & 1) == 0 )
  {
    PrototypePteDirect = MiGetPrototypePteDirect(v24);
    v25 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
    v26 = v25;
    v146 = v25;
    if ( (v25 & 1) != 0 || (v25 & 0x400) == 0 && (v25 & 0x800) != 0 )
      goto LABEL_22;
    v27 = 0LL;
    v148 = 0LL;
    while ( 1 )
    {
      v37 = (_BYTE *)MiGetPrototypePteDirect(v26);
      v163 = v37;
      v40 = *(_DWORD *)(*(_QWORD *)v37 + 56LL);
      if ( (v40 & 0x20) != 0 )
      {
        if ( (v37[34] & 4) != 0 )
          goto LABEL_46;
      }
      else if ( (v40 & 0x40000000) != 0 )
      {
LABEL_46:
        result = MmAccessFault(0LL, v162);
        v144 = result;
        v28 = PrototypePteDirect;
        if ( (int)result < 0 )
          return result;
        goto LABEL_23;
      }
      v139 = 17;
      v42 = (*(_DWORD *)(v39 + 56) >> 20) & 0x3F;
      if ( v42 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        NodeShiftedColor = ((_WORD)v42 - 1) << byte_140326A09;
      }
      else
      {
        CurrentPrcb = *(struct _KPRCB **)(v38 + 8LL * KeGetCurrentThread()->IdealProcessor + 3847104);
        NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
      }
      v167 = NodeShiftedColor;
      v45 = (1 << byte_140326A18) - 1;
      v166 = v45;
      p_PageColor = &CurrentPrcb->PageColor;
      v165[9] = p_PageColor;
      v47 = (unsigned __int16)(++*(_WORD *)p_PageColor & v45) | (unsigned int)NodeShiftedColor;
      if ( v142 == 4096 )
        v48 = 0LL;
      else
        v48 = 2LL;
      Page = MiGetPage(v13, v47, v48);
      v159[1] = Page;
      if ( Page != -1 )
      {
        v31 = (__m128i *)(48 * Page - 0x58000000000LL);
        v165[3] = v31;
        v50 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v146);
        v51 = v50;
        v147 = v50;
        if ( v50 == 31 )
        {
          v52 = 1;
        }
        else if ( v50 >> 3 == 3 && (v50 & 7) != 0 )
        {
          v52 = dword_1403A92D0;
        }
        else
        {
          v52 = 1;
          if ( v50 >> 3 == 1 )
            v52 = MiPlatformCacheAttributes;
        }
        if ( v142 != 4096 && (unsigned int)MiPfnZeroingNeeded(48 * Page - 0x58000000000LL, v52) )
        {
          v7 |= 4u;
          HIDWORD(Size) = v7;
        }
        if ( v31[2].m128i_u8[2] >> 6 != v52 )
          MiChangePageAttribute(48 * Page - 0x58000000000LL, v52, 0);
        for ( i = v31[1].m128i_i64[1]; ; i = v54 )
        {
          v54 = _InterlockedCompareExchange64(&v31[1].m128i_i64[1], i & 0xF0FFFFFFFFFFFFFFuLL, i);
          if ( i == v54 )
            break;
        }
        v55 = MiReservePtes(&qword_1403278B0, 1LL);
        v56 = (_QWORD *)v55;
        v165[4] = v55;
        if ( !v55 )
        {
          if ( (a5 & 1) != 0 )
          {
            if ( (v7 & 4) != 0 )
            {
              v7 &= ~4u;
              MiZeroPhysicalPage(Page);
            }
            v7 |= 8u;
            goto LABEL_85;
          }
          MiReleaseFreshPage(48 * Page - 0x58000000000LL);
LABEL_272:
          LODWORD(BugCheckParameter4) = Size;
LABEL_273:
          v5 = v142;
LABEL_274:
          v23 = Src;
          break;
        }
        v57 = (__int64)(v55 << 25) >> 16;
        v58 = ~qword_1403A9350 & (MiMakeValidKernelPte(Page, 4, v55) | 0x8000000000000042uLL);
        *v56 = v58;
        if ( (unsigned int)MiPteInShadowRange(v56, v58) )
          MiWritePteShadow(v60, v59);
        v61 = (unsigned int)Size;
        v62 = (char *)(v57 + (unsigned int)Size);
        if ( (v7 & 4) != 0 )
        {
          if ( (_DWORD)Size )
            memset((void *)v57, 0, (unsigned int)Size);
          v63 = v142;
          if ( 4096 - v142 != v61 )
            memset(&v62[v142], 0, 4096 - v142 - v61);
        }
        else
        {
          v63 = v142;
        }
        v144 = 0;
        memmove(v62, Src, v63);
        MiReleasePtes(&qword_1403278B0, v56, 1LL);
        v7 |= 2u;
        v51 = v147;
LABEL_85:
        if ( (v7 & 0x10) != 0 )
          HIDWORD(Size) = 0;
        else
          HIDWORD(Size) = BYTE4(PerfGlobalGroupMask) & 1;
        if ( v139 == 17 )
        {
          v64 = ((PrototypePteDirect >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          do
          {
            v65 = MI_READ_PTE_LOCK_FREE(v64);
            v159[0] = v65;
            if ( (v65 & 1) == 0 || (v65 & 0x200) != 0 )
              goto LABEL_147;
            v66 = MI_GET_PAGE_FRAME_FROM_PTE(v159);
          }
          while ( !MiIsPfnInline(v66) );
          v27 = 48 * v66 - 0x58000000000LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v155 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v155);
            while ( *(__int64 *)(v27 + 24) < 0 );
          }
          v139 = CurrentIrql;
          v68 = MI_READ_PTE_LOCK_FREE(v64);
          v159[0] = v68;
          if ( (v68 & 1) == 0 || (v68 & 0x200) != 0 || v66 != MI_GET_PAGE_FRAME_FROM_PTE(v159) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(CurrentIrql);
LABEL_147:
            v7 &= ~2u;
            HIDWORD(Size) = v7;
            MiLockAndInsertPageInFreeList(v31);
            v13 = v153;
            goto LABEL_22;
          }
          v71 = *(_QWORD *)(v27 + 40);
          if ( (v71 & 0x10000000000000LL) != 0 )
            goto LABEL_127;
          v72 = *(_WORD *)(v27 + 32);
          v73 = *(_QWORD *)(v27 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          if ( !v72 )
            goto LABEL_107;
          if ( v72 == 1 )
          {
            if ( !v73 )
              goto LABEL_106;
LABEL_107:
            v74 = 0;
            if ( (v71 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v27 + 16) & 0x400LL) != 0 )
            {
              v74 = 1;
            }
            else
            {
              v75 = v69 | *(_QWORD *)(v27 + 8);
              if ( v75 <= v70 + 0x3FFFFFFF78LL && v75 >= v70 )
                v74 = ((*(unsigned __int8 *)(v27 + 35) >> 5) & 1) != 0;
            }
            v76 = (HIDWORD(v71) >> 8) & 0x3FF;
            if ( v76 == 1023 )
              v77 = MiSystemPartition;
            else
              v77 = *(int **)(qword_140327038 + 8LL * v76);
            if ( !v74 || (unsigned int)MiChargeCommit((__int64)v77, 1uLL, 4) )
            {
              if ( v77 == MiSystemPartition )
              {
                v78 = KeGetCurrentPrcb();
                CachedResidentAvailable = v78->CachedResidentAvailable;
                while ( CachedResidentAvailable )
                {
                  if ( CachedResidentAvailable == -1 )
                    break;
                  v80 = CachedResidentAvailable;
                  CachedResidentAvailable = _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v78->CachedResidentAvailable,
                                              CachedResidentAvailable - 1,
                                              CachedResidentAvailable);
                  if ( v80 == CachedResidentAvailable )
                    goto LABEL_127;
                }
              }
              v81 = MiChargePartitionResidentAvailable(v77, 1LL, 0xFFFFFFFFLL);
              if ( !v81 && v74 )
                MiReturnCommit(v77, 1LL);
              if ( v81 )
                goto LABEL_127;
            }
          }
          else
          {
            if ( v72 == 2 && v73 )
            {
LABEL_106:
              if ( (*(_BYTE *)(v27 + 34) & 8) != 0 )
                goto LABEL_107;
            }
LABEL_127:
            ++*(_WORD *)(v27 + 32);
          }
          v82 = *(_QWORD *)(v27 + 8) | 0x8000000000000000uLL;
          while ( (*(_BYTE *)(v27 + 34) & 0x20) != 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( CurrentIrql != 17 )
              __writecr8(CurrentIrql);
            v149 = 0;
            for ( j = *(_BYTE *)(v27 + 34); (j & 0x20) != 0; j = *(_BYTE *)(v27 + 34) )
            {
              v83 = (unsigned int)(v149 + 1);
              v149 = v83;
              if ( ((unsigned int)v83 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v83);
            }
            MiLockPageInline(v27);
          }
          *(_BYTE *)(v27 + 34) |= 0x20u;
          if ( (*(_QWORD *)(v27 + 24) & 0x4000000000000000LL) == 0 && (MI_READ_PTE_LOCK_FREE(v82) & 0x20) == 0 )
            MiWriteValidPteVolatile(v82, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v28 = PrototypePteDirect;
          v84 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
          v146 = v84;
          if ( (v84 & 1) != 0
            || (v84 & 0x800) != 0 && (v84 & 0x400) == 0
            || (v85 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v146), v51 = v147, v147 != v85) )
          {
            MiUnlockProtoPoolPage(v27, CurrentIrql);
            v7 &= ~2u;
            HIDWORD(Size) = v7;
            MiLockAndInsertPageInFreeList(v31);
            v13 = v153;
            goto LABEL_23;
          }
        }
        else
        {
          v28 = PrototypePteDirect;
        }
        v156 = 0;
        while ( _interlockedbittestandset64(&v31[1].m128i_i32[2], 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v156);
          while ( v31[1].m128i_i64[1] < 0 );
        }
        v86 = MI_READ_PTE_LOCK_FREE(v28);
        v31[1].m128i_i64[0] = MiTransferSoftwarePte(v86, 0LL, 0LL, 4LL);
        v31[2].m128i_i64[1] |= 0x200000000000000uLL;
        if ( v51 == 31 )
        {
          v87 = 1;
        }
        else
        {
          v88 = v51 >> 3;
          if ( v51 >> 3 == 3 && (v51 & 7) != 0 )
          {
            v87 = dword_1403A92D0;
          }
          else
          {
            v87 = 1;
            if ( v88 == 1 )
              v87 = MiPlatformCacheAttributes;
          }
        }
        v31[2].m128i_i16[0] = 1;
        ContainingPageTable = MiGetContainingPageTable(v28);
        v31[2].m128i_i64[1] = v90 ^ (v90 ^ ContainingPageTable) & 0xFFFFFFFFFLL;
        v91 = 48 * ContainingPageTable - 0x58000000000LL;
        CurrentThread = KeGetCurrentThread();
        if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
        {
          v150 = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
        }
        else
        {
          v93 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
          if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
          {
            v94 = 2;
            if ( v93 < 2 )
              v94 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
            v93 = v94;
          }
          v150 = v93;
        }
        v31[2].m128i_i8[2] |= 0x10u;
        v157 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v91 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v157);
          while ( *(__int64 *)(v91 + 24) < 0 );
        }
        *(_QWORD *)(v91 + 24) ^= (*(_QWORD *)(v91 + 24) ^ ((*(_QWORD *)(v91 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v91 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v31[2].m128i_u8[2] >> 6 != v87 )
          MiChangePageAttribute((__int64)v31, v87, 1);
        v31[1].m128i_i64[1] = v31[1].m128i_i64[1] & 0xC000000000000000uLL | 1;
        v31[2].m128i_i8[3] ^= (v31[2].m128i_i8[3] ^ v150) & 7;
        v31->m128i_i64[1] = PrototypePteDirect;
        v31[2].m128i_i8[2] = v31[2].m128i_i8[2] & 0xF8 | 6;
        if ( (a5 & 2) != 0 )
        {
          v95 = v31[2].m128i_i8[3];
          if ( (v95 & 8) != 0 || (v95 & 7u) > 2 )
            v31[2].m128i_i8[3] = v95 & 0xF8 | 2;
        }
        v96 = v152;
        if ( (*(_DWORD *)(v152 + 56) & 0x20) != 0 || !*(_QWORD *)(v152 + 64) )
          v97 = 0LL;
        else
          v97 = v163;
        v98 = (volatile signed __int32 *)(v152 + 72);
        v99 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v152 + 72, v99);
        }
        else
        {
          v151 = 0;
          if ( _interlockedbittestandset(v98, 0x1Fu) )
            v151 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v96 + 72), v99);
LABEL_183:
          v100 = *v98;
          while ( 1 )
          {
            v101 = v100;
            if ( (v100 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v100 & 0x40000000) == 0 )
            {
              v100 = _InterlockedCompareExchange(v98, v100 | 0x40000000, v100);
              if ( v100 != v101 )
                continue;
            }
            KeYieldProcessorEx(&v151);
            goto LABEL_183;
          }
        }
        v102 = v152;
        ++*(_QWORD *)(v152 + 32);
        if ( v97 )
          ++*((_DWORD *)v97 + 26);
        v103 = (_DWORD *)(v102 + 72);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v103, retaddr);
        else
          *v103 = 0;
        __writecr8(v99);
        if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
          v105 |= 0x100uLL;
        v146 = v105 & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
        v106 = PrototypePteDirect;
        *(_QWORD *)PrototypePteDirect = v146;
        if ( (unsigned int)MiPteInShadowRange(v106, v104) )
          MiWritePteShadow(v107, v110);
        if ( ((v7 >> 4) & 1) == 0 )
        {
          if ( HIDWORD(Size) )
          {
            memset(v168, 0, sizeof(v168));
            v169 = 0LL;
            MiIdentifyPfn(v31, v168);
          }
          v111 = v31[2].m128i_i8[2];
          v112 = v31[1].m128i_i64[1];
          if ( (v111 & 7) != 6 )
            KeBugCheckEx(
              0x4Eu,
              0x99uLL,
              (__int64)v31[0x5800000000LL].m128i_i64 / 48,
              v111 & 7,
              v112 & 0x3FFFFFFFFFFFFFFFLL);
          v31[1].m128i_i64[1] = v112 ^ (v112 ^ ((v112 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (v112 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            MiPfnShareCountIsZero(v31);
        }
        _InterlockedAnd64(&v31[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
        v113 = 0;
        v158 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v158);
            while ( *(__int64 *)(v27 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) );
          v113 = 0;
        }
        *(_BYTE *)(v27 + 34) &= ~0x20u;
        v114 = *(unsigned __int16 *)(v27 + 32);
        if ( !(_WORD)v114 )
          KeBugCheckEx(0x4Eu, 0x9AuLL, (v27 + 0x58000000000LL) / 48, *(_BYTE *)(v27 + 34) & 7, 0LL);
        v115 = (_WORD)v114 == 1;
        LOWORD(v114) = v114 - 1;
        *(_WORD *)(v27 + 32) = v114;
        if ( v115 && (unsigned int)MiIsPfnFileOnly(v27, v114, v108, v109) )
          goto LABEL_251;
        v116 = *(_QWORD *)(v27 + 40);
        if ( (v116 & 0x10000000000000LL) == 0 )
        {
          v117 = *(_QWORD *)(v27 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          if ( !(_WORD)v114 )
            goto LABEL_220;
          if ( (_WORD)v114 != 1 )
          {
            if ( (_WORD)v114 == 2 && v117 )
            {
LABEL_219:
              if ( (*(_BYTE *)(v27 + 34) & 8) != 0 )
                goto LABEL_220;
            }
            goto LABEL_252;
          }
          if ( !v117 )
            goto LABEL_219;
LABEL_220:
          v118 = v113;
          LOBYTE(v118) = (_WORD)v114 == 0;
          v119 = *(_QWORD *)(v27 + 8) | 0x8000000000000000uLL;
          if ( (v119 > 0xFFFFF6BFFFFFFF78uLL || v119 < 0xFFFFF68000000000uLL)
            && ((*(unsigned __int8 *)(v27 + 35) >> 5) & 1) != 0 )
          {
            *(_BYTE *)(v27 + 35) &= ~0x20u;
            goto LABEL_250;
          }
          v120 = v113;
          if ( (v116 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v27 + 16) & 0x400LL) != 0 )
          {
            v120 = 1;
          }
          else if ( v119 <= 0xFFFFF6BFFFFFFF78uLL
                 && v119 >= 0xFFFFF68000000000uLL
                 && ((*(unsigned __int8 *)(v27 + 35) >> 5) & 1) != 0 )
          {
            v120 = 1;
          }
          else if ( v118 == 1 && (*(_QWORD *)(v27 + 24) & 0x4000000000000000LL) != 0 )
          {
            v120 = 1;
          }
          v121 = (HIDWORD(v116) >> 8) & 0x3FF;
          if ( v121 == 1023 )
            v122 = MiSystemPartition;
          else
            v122 = *(int **)(qword_140327038 + 8LL * v121);
          if ( v120 == 1 )
            MiReturnCommit(v122, 1LL);
          if ( v122 != MiSystemPartition )
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)v122 + 816, 1uLL);
            goto LABEL_250;
          }
          v123 = 1LL;
          v124 = KeGetCurrentPrcb();
          v125 = (int)v124->CachedResidentAvailable;
          if ( (_DWORD)v125 != -1 )
          {
            if ( (unsigned __int64)(v125 + 1) <= 0x100 )
            {
              while ( 1 )
              {
                v126 = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&v124->CachedResidentAvailable,
                         v125 + 1,
                         v125);
                v115 = (_DWORD)v125 == v126;
                LODWORD(v125) = v126;
                if ( v115 )
                  break;
                if ( v126 == -1 || (unsigned __int64)(v126 + 1LL) > 0x100 )
                  goto LABEL_245;
              }
LABEL_250:
              if ( v118 )
LABEL_251:
                MiPfnReferenceCountIsZero(v27, (v27 + 0x58000000000LL) / 48);
              goto LABEL_252;
            }
LABEL_245:
            if ( (int)v125 > 192
              && (_DWORD)v125 == _InterlockedCompareExchange(
                                   (volatile signed __int32 *)&v124->CachedResidentAvailable,
                                   192,
                                   v125) )
            {
              v123 = (int)v125 - 192 + 1LL;
            }
          }
          _InterlockedExchangeAdd64(&qword_140324F00, v123);
          goto LABEL_250;
        }
LABEL_252:
        if ( v139 == 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v139);
        }
        if ( ((v7 >> 4) & 1) == 0 )
        {
          if ( HIDWORD(Size) )
          {
            v169 |= 4uLL;
            v170[0] = v168;
            v170[1] = 32LL;
            EtwTraceKernelEvent((int)v170, 1, 0x20000001u, 642, 289413890);
          }
          if ( (v7 & 8) == 0 )
            return 0LL;
          goto LABEL_272;
        }
LABEL_260:
        v127 = v164;
        v128 = MiLockPageInline(v164);
        *(_QWORD *)(v127 + 24) ^= (*(_QWORD *)(v127 + 24) ^ ((*(_QWORD *)(v127 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v127 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v129 = MiGetSharedVm((__int64)v161);
        ExAcquireSpinLockExclusive(v129);
        v129[1] = 0;
        v130 = MI_READ_PTE_LOCK_FREE(v160);
        if ( (v130 & 1) != 0 )
        {
          v135 = (__int64)v161;
        }
        else
        {
          if ( (v130 & 8) != 0 )
          {
            v131 = MI_GET_PAGE_FRAME_FROM_PTE(&v146);
            ValidKernelPte = MiMakeValidKernelPte(v131, 1, v132);
            LOBYTE(v7) = v7 | 1;
          }
          else
          {
            ValidKernelPte = v146;
          }
          v134 = v31[1].m128i_i64[0];
          v135 = (__int64)v161;
          if ( MiAllocateWsle(
                 v161,
                 v160,
                 v31,
                 0LL,
                 ValidKernelPte & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_140326AE8 & 1) << 8),
                 0LL) )
          {
            MiUnlockWorkingSetExclusive(v135, v128);
            if ( PfSnNumActiveTraces && (v134 & 0x400) != 0 )
            {
              v136 = (__int64 *)MiGetPrototypePteDirect(v134);
              v137 = MiReferenceControlAreaFile(v152);
              v138 = MiStartingOffset(v136, PrototypePteDirect, 0xFFFFFFFF);
              PfSnLogPageFault(v137, v138, 4LL);
              MiDereferenceControlAreaFile(v152, v137);
            }
            goto LABEL_272;
          }
        }
        MiUnlockWorkingSetExclusive(v135, v128);
        MiLockAndDecrementShareCount(v31, 0LL);
        MiLockAndDecrementShareCount(v127, 0LL);
        goto LABEL_272;
      }
      MiWaitForFreePage(v13);
LABEL_22:
      v28 = PrototypePteDirect;
LABEL_23:
      while ( 1 )
      {
        v27 = MiLockProtoPoolPage(v28, &v139);
        v148 = v27;
        if ( v27 )
          break;
        MmAccessFault(2uLL, v28);
      }
      MiLockLeafPage(v28, 0);
      v29 = MI_READ_PTE_LOCK_FREE(v28);
      v26 = v29;
      v146 = v29;
      if ( v30 )
      {
        if ( (v29 & 1) != 0 )
        {
          v31 = (__m128i *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v146) - 0x58000000000LL);
          if ( (v31[2].m128i_i8[3] & 0x40) != 0 )
          {
LABEL_27:
            _InterlockedAnd64(&v31[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockProtoPoolPage(v27, v139);
            goto LABEL_272;
          }
          v31[1].m128i_i64[1] ^= (v31[1].m128i_i64[1] ^ ((v31[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v31 = (__m128i *)(48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v146) - 0x58000000000LL);
          if ( (v31[2].m128i_i8[2] & 0x20) != 0 || (v31[2].m128i_i8[3] & 0x40) != 0 )
            goto LABEL_27;
          if ( !(unsigned int)MiUnlinkPageFromList((ULONG_PTR)v31) )
          {
            MiDiscardTransitionPte(v31);
            goto LABEL_27;
          }
          ++v31[2].m128i_i16[0];
          v31[2].m128i_i8[2] = v31[2].m128i_i8[2] & 0xF8 | 6;
          v31[2].m128i_i8[2] |= 0x10u;
          v31[1].m128i_i64[1] = v31[1].m128i_i64[1] & 0xC000000000000000uLL | 1;
          if ( (a5 & 2) != 0 && (unsigned int)MiGetPfnPriority(v31) > 2 )
            v31[2].m128i_i8[3] = v31[2].m128i_i8[3] & 0xF8 | 2;
          MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v31[1]);
          if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
            v33 |= 0x100uLL;
          v146 = v33 | 0x42;
          v34 = PrototypePteDirect;
          *(_QWORD *)PrototypePteDirect = v33 | 0x42;
          if ( (unsigned int)MiPteInShadowRange(v34, v32) )
            MiWritePteShadow(v35, v36);
        }
        _InterlockedAnd64(&v31[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v27, v139);
        goto LABEL_260;
      }
      MiUnlockProtoPoolPage(v27, v139);
    }
  }
  v144 = 0;
  if ( (v7 & 2) == 0 )
    memmove((void *)(v162 + (unsigned int)BugCheckParameter4), v23, v5);
  return 0LL;
}

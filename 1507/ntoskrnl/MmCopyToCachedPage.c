/*
 * XREFs of MmCopyToCachedPage @ 0x1400B3650
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     HvViewMapCopyToFileOffset @ 0x1401E0820 (HvViewMapCopyToFileOffset.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     PfSnLogPageFault @ 0x14001A174 (PfSnLogPageFault.c)
 *     MiLockLeafPage @ 0x140037DE0 (MiLockLeafPage.c)
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x1400B6C70 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiIdentifyPfn @ 0x1400C4A30 (MiIdentifyPfn.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiDiscardTransitionPte @ 0x14014AE5C (MiDiscardTransitionPte.c)
 *     MiLockAndInsertPageInFreeList @ 0x14015F7F4 (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MI_CAPTURE_SYSTEM_CACHE_PTE @ 0x1402176D0 (MI_CAPTURE_SYSTEM_CACHE_PTE.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiMapCacheExceptionFilter @ 0x1406A2F84 (MiMapCacheExceptionFilter.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MmCopyToCachedPage(ULONG_PTR BugCheckParameter2, void *a2, unsigned int a3, ULONG_PTR a4, char a5)
{
  unsigned int v5; // r14d
  void *v6; // r11
  ULONG_PTR v7; // r10
  __int64 v8; // r13
  unsigned int v9; // edi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  unsigned __int8 CurrentIrql; // si
  signed __int32 i; // edx
  __int64 v17; // rcx
  __int64 PteShadow; // rax
  __int64 v19; // rax
  unsigned __int64 *v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 *PrototypePteDirect; // r14
  unsigned __int64 v28; // rbx
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // r14
  __int64 v34; // rsi
  unsigned __int64 v35; // rbx
  __int16 *v36; // r8
  unsigned __int64 v37; // rdx
  char v38; // cl
  __int64 v39; // rax
  unsigned __int8 v40; // r9
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 *v44; // rax
  __int64 v45; // rdx
  unsigned int v46; // r9d
  ULONG_PTR v47; // r10
  __int64 v48; // r12
  unsigned int v49; // r8d
  int v50; // r8d
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int16 NodeShiftedColor; // r8
  __int16 v53; // dx
  unsigned int *p_PageColor; // rax
  __int64 v55; // rdx
  unsigned __int16 v56; // ax
  __int16 *v57; // rbx
  size_t v58; // r12
  __int64 v59; // r8
  __int64 Page; // r15
  unsigned int v61; // eax
  unsigned __int64 v62; // r8
  unsigned int v63; // ebx
  signed __int64 j; // rdx
  signed __int64 v65; // rax
  __int64 *v66; // rax
  unsigned __int64 *v67; // r14
  __int64 v68; // r12
  __int64 v69; // rax
  int v70; // ecx
  unsigned __int64 v71; // rdx
  __int64 v72; // rbx
  char *v73; // r15
  size_t v74; // r12
  BOOL v75; // r12d
  __int64 v76; // rax
  int v77; // eax
  unsigned int v78; // r14d
  __int64 v79; // rcx
  __int64 v80; // r8
  char v81; // cl
  __int64 v82; // rbx
  signed __int32 v83; // edx
  __int64 v84; // rcx
  _DWORD *v85; // rcx
  __int64 v86; // rdx
  unsigned __int64 v87; // rdx
  __int64 *v88; // rcx
  char v89; // cl
  __int64 v90; // rdx
  __int64 v91; // rcx
  unsigned __int8 v93; // r14
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rax
  unsigned __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // rdx
  char v102; // al
  unsigned __int64 v103; // rcx
  __int64 v104; // rbx
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 *v108; // rbx
  __int64 v109; // r14
  ULONG_PTR v110; // rsi
  int v111; // eax
  _BYTE v112[4]; // [rsp+30h] [rbp-158h] BYREF
  _DWORD Size[3]; // [rsp+34h] [rbp-154h]
  unsigned __int64 v114; // [rsp+40h] [rbp-148h] BYREF
  ULONG_PTR v115; // [rsp+48h] [rbp-140h]
  void *Src; // [rsp+50h] [rbp-138h]
  int v117; // [rsp+58h] [rbp-130h]
  __int64 *v118; // [rsp+60h] [rbp-128h]
  unsigned int v119; // [rsp+68h] [rbp-120h]
  int v120; // [rsp+6Ch] [rbp-11Ch]
  int v121; // [rsp+70h] [rbp-118h]
  int v122; // [rsp+74h] [rbp-114h]
  unsigned __int64 v123; // [rsp+78h] [rbp-110h]
  int v124; // [rsp+80h] [rbp-108h]
  unsigned int v125; // [rsp+84h] [rbp-104h]
  int v126; // [rsp+88h] [rbp-100h]
  int v127; // [rsp+8Ch] [rbp-FCh]
  __int64 v128; // [rsp+90h] [rbp-F8h]
  __int64 v129; // [rsp+98h] [rbp-F0h]
  unsigned int v130; // [rsp+A0h] [rbp-E8h]
  __int64 v131; // [rsp+A8h] [rbp-E0h]
  __int64 v132; // [rsp+B0h] [rbp-D8h]
  ULONG_PTR v133; // [rsp+B8h] [rbp-D0h]
  __int64 *v134; // [rsp+C0h] [rbp-C8h]
  __int64 v135; // [rsp+C8h] [rbp-C0h]
  void *v136; // [rsp+D8h] [rbp-B0h]
  __int64 v137; // [rsp+E0h] [rbp-A8h]
  _QWORD v138[3]; // [rsp+E8h] [rbp-A0h] BYREF
  __int64 v139; // [rsp+100h] [rbp-88h]
  ULONG_PTR v140; // [rsp+108h] [rbp-80h]
  __int64 *v141; // [rsp+110h] [rbp-78h]
  unsigned int *v142; // [rsp+118h] [rbp-70h]
  __int16 v143; // [rsp+120h] [rbp-68h]
  unsigned __int16 v144; // [rsp+122h] [rbp-66h]
  _QWORD v145[2]; // [rsp+130h] [rbp-58h] BYREF
  void *retaddr; // [rsp+188h] [rbp+0h]

  *(_QWORD *)&Size[1] = a4;
  v5 = a3;
  Size[0] = a3;
  v6 = a2;
  Src = a2;
  v7 = BugCheckParameter2;
  v115 = BugCheckParameter2;
  v133 = BugCheckParameter2;
  v136 = a2;
  v130 = a3;
  v140 = a4;
  v8 = 0LL;
  v9 = 0;
  v119 = 0;
  v10 = a4 + a3;
  if ( v10 > 0x1000 || v10 < a4 )
    KeBugCheckEx(0x1Au, 0x776uLL, v7, a4, a3);
  v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v123 = v11;
  v12 = *(_QWORD *)v11;
  v13 = 0x12090482600LL;
  v14 = v11 + 0x90482413000LL;
  if ( v11 + 0x90482413000LL <= 0x7F8 )
    LOWORD(v12) = MiReadPteShadow(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *(_QWORD *)v11);
  if ( (v12 & 1) != 0 )
  {
    if ( (v12 & 0x42) == 0 && (v12 & 0x800) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FD40);
      }
      else
      {
        v120 = 0;
        if ( _interlockedbittestandset(dword_14034FD40, 0x1Fu) )
          v120 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FD40);
        for ( i = dword_14034FD40[0]; (dword_14034FD40[0] & 0xBFFFFFFF) != 0x80000000; i = dword_14034FD40[0] )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedCompareExchange(dword_14034FD40, i | 0x40000000, i);
          v17 = (unsigned int)(v120 + 1);
          v120 = v17;
          if ( ((unsigned int)v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v17);
        }
      }
      PteShadow = *(_QWORD *)v11;
      if ( v14 <= 0x7F8 )
        PteShadow = MiReadPteShadow(v11, *(_QWORD *)v11);
      if ( (PteShadow & 1) != 0 && (PteShadow & 0x42) == 0 && (PteShadow & 0x800) != 0 )
      {
        v19 = PteShadow | 0x62;
        *(_QWORD *)v11 = v19;
        if ( v14 <= 0x7F8 )
          MiWritePteShadow(v11, v19);
      }
      MiUnlockWorkingSetExclusive((__int64)dword_14034FD40, CurrentIrql);
      goto LABEL_247;
    }
    goto LABEL_248;
  }
  v20 = (unsigned __int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v21 = *v20;
  if ( (unsigned __int64)&v20[v13] <= 0x7F8 )
    v21 = MiReadPteShadow(v20, *v20);
  v128 = 48 * ((v21 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v22 = MI_CAPTURE_SYSTEM_CACHE_PTE(v11);
  if ( (v22 & 1) != 0 )
    goto LABEL_248;
  PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(v22, v23, v24, v25);
  v118 = PrototypePteDirect;
  v28 = *PrototypePteDirect;
  if ( (unsigned __int64)PrototypePteDirect + v29 <= 0x7F8 )
    v28 = MiReadPteShadow(PrototypePteDirect, v28);
  v114 = v28;
  if ( (v28 & 1) != 0 || (v28 & 0x400) == 0 && (v28 & 0x800) != 0 )
    goto LABEL_37;
  v132 = 0LL;
  while ( 1 )
  {
    v134 = (__int64 *)MiGetPrototypePteDirect(v28, 0x140000000uLL, v26, 2LL);
    v48 = *v134;
    v131 = v48;
    v135 = v48;
    v49 = *(_DWORD *)(v48 + 56);
    if ( (v49 & 0x40000000) != 0 )
    {
      MmAccessFault(0LL, v47);
      v11 = v123;
      PrototypePteDirect = v118;
      goto LABEL_37;
    }
    v112[0] = 17;
    v50 = (v49 >> 20) & 0x3F;
    if ( v50 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      NodeShiftedColor = ((_WORD)v50 - 1) << byte_14034EB89;
    }
    else
    {
      CurrentPrcb = *(struct _KPRCB **)(v45 + 8LL * KeGetCurrentThread()->IdealProcessor + 4007296);
      NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
    }
    v144 = NodeShiftedColor;
    v53 = (1 << byte_14034EB98) - 1;
    v143 = v53;
    p_PageColor = &CurrentPrcb->PageColor;
    v142 = p_PageColor;
    v55 = (unsigned __int16)(v53 & ++*(_WORD *)p_PageColor) | (unsigned int)NodeShiftedColor;
    v56 = *(_WORD *)(v48 + 60) & 0x3FF;
    if ( v56 == 1023 )
      v57 = MiSystemPartition;
    else
      v57 = *(__int16 **)(qword_14034F0E8 + 8LL * v56);
    v58 = *(_QWORD *)&Size[1];
    if ( *(_QWORD *)&Size[1] == 4096LL )
      v59 = 0LL;
    else
      v59 = v46;
    Page = MiGetPage(v57, v55, v59);
    v129 = Page;
    if ( Page == -1 )
    {
      MiWaitForFreePage(v57);
      v11 = v123;
      PrototypePteDirect = v118;
      goto LABEL_37;
    }
    v34 = 48 * Page - 0x58000000000LL;
    v137 = v34;
    if ( v58 != 4096 && *(_QWORD *)(v34 + 16) )
    {
      v9 |= 4u;
      v119 = v9;
    }
    v61 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v114);
    v125 = v61;
    if ( v61 >> 3 == 3 && (v61 & 7) != 0 )
    {
      v63 = dword_1403D0480;
    }
    else
    {
      v63 = 1;
      if ( v61 >> 3 == 1 )
        v63 = MiPlatformCacheAttributes[0];
    }
    if ( *(unsigned __int8 *)(v34 + 34) >> 6 != v63 )
      MiChangePageAttribute(48 * Page - 0x58000000000LL, v63, 0LL);
    for ( j = *(_QWORD *)(v34 + 24); ; j = v65 )
    {
      v65 = _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 24), j & 0xF0FFFFFFFFFFFFFFuLL, j);
      if ( j == v65 )
        break;
    }
    v66 = MiReservePtes((__int64)&qword_14034FC70, 1u, v62);
    v67 = (unsigned __int64 *)v66;
    v141 = v66;
    if ( v66 )
    {
      v68 = (__int64)((_QWORD)v66 << 25) >> 16;
      v69 = qword_1403D0230 ^ (qword_1403D0230 ^ (Page << 12)) & 0xFFFFFFFFF000LL | 0x21;
      if ( (unsigned __int64)(v67 + 0x12098000000LL) <= 0x3FFFFFFF )
        v69 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
      if ( (unsigned __int64)v67 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        && (unsigned __int64)v67 >= 0xFFFFF68000000000uLL
        || (unsigned __int64)v67 >= 0xFFFFF6FB40000000uLL
        && (unsigned __int64)v67 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
        || (unsigned __int64)v67 >= 0xFFFFF6FB7DA00000uLL
        && (unsigned __int64)v67 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
        || (unsigned __int64)v67 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v67 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
      {
        v69 |= 4uLL;
      }
      if ( (unsigned __int64)v67 >= 0xFFFFF6C000000000uLL )
      {
        if ( (unsigned __int64)(v67 + 0x12070000000LL) <= 0x3FFFFFFF
          || (unsigned __int64)(v67 + 0x12098000000LL) <= 0x3FFFFFF8 )
        {
LABEL_120:
          v71 = ~qword_1403D0220 & (v69 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x8000000000000042uLL);
          *v67 = v71;
          if ( (unsigned __int64)(v67 + 0x12090482600LL) <= 0x7F8 )
            MiWritePteShadow(v67, v71);
          v72 = Size[0];
          v73 = (char *)(Size[0] + v68);
          if ( (v9 & 4) != 0 )
          {
            if ( Size[0] )
              memset((void *)v68, 0, Size[0]);
            v74 = *(_QWORD *)&Size[1];
            if ( 4096LL - *(_QWORD *)&Size[1] != v72 )
              memset(&v73[*(_QWORD *)&Size[1]], 0, 4096LL - *(_QWORD *)&Size[1] - v72);
          }
          else
          {
            v74 = *(_QWORD *)&Size[1];
          }
          v117 = 0;
          memmove(v73, Src, v74);
          MiReleasePtes((__int64)&qword_14034FC70, v67, 1u);
          v9 |= 2u;
          goto LABEL_129;
        }
        v70 = HIBYTE(word_14034EC18);
        if ( (unsigned __int64)(v67 + 0x120A8000000LL) > 0xBFFFFFF8 )
          v70 = (unsigned __int8)word_14034EC18;
      }
      else
      {
        v70 = HIBYTE(word_14034EC18);
      }
      if ( v70 )
        v69 |= 0x100uLL;
      goto LABEL_120;
    }
    if ( (a5 & 1) == 0 )
    {
      MiReleaseFreshPage(48 * Page - 0x58000000000LL);
      LODWORD(v8) = 0;
      v5 = Size[0];
      v7 = v115;
      v6 = Src;
      goto LABEL_249;
    }
    if ( (v9 & 4) != 0 )
    {
      v9 &= ~4u;
      MiZeroPhysicalPage(Page, 1, v63);
    }
    v9 |= 8u;
LABEL_129:
    v75 = (v9 & 0x10) == 0 && BYTE4(PerfGlobalGroupMask) & 1;
    if ( v112[0] != 17 )
      break;
    PrototypePteDirect = v118;
    v8 = MiLockProtoPoolPage(v118, v112);
    if ( v8 )
    {
      v76 = *PrototypePteDirect;
      if ( (unsigned __int64)(PrototypePteDirect + 0x12090482600LL) <= 0x7F8 )
        v76 = MiReadPteShadow(PrototypePteDirect, *PrototypePteDirect);
      v114 = v76;
      if ( (v76 & 1) == 0 && ((v76 & 0x800) == 0 || (v76 & 0x400) != 0) )
      {
        v77 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v114);
        v78 = v125;
        if ( v125 == v77 )
          goto LABEL_144;
        PrototypePteDirect = v118;
      }
      MiUnlockProtoPoolPage(v8, v112[0]);
    }
    v9 &= ~2u;
    v119 = v9;
    MiLockAndInsertPageInFreeList(v34);
    v11 = v123;
LABEL_37:
    while ( 1 )
    {
      v8 = MiLockProtoPoolPage(PrototypePteDirect, v112);
      v132 = v8;
      if ( v8 )
        break;
      MmAccessFault(2uLL, (ULONG_PTR)PrototypePteDirect);
    }
    v32 = MiLockLeafPage((unsigned __int64 *)PrototypePteDirect, 0LL);
    v28 = *PrototypePteDirect;
    v33 = (unsigned __int64)(PrototypePteDirect + 0x12090482600LL);
    if ( v33 <= 0x7F8 )
      v28 = MiReadPteShadow(v118, v28);
    v114 = v28;
    if ( v32 )
    {
      if ( (v28 & 1) == 0 )
      {
        v35 = ((unsigned __int64)MiReverseSwizzleInvalidPte(v28, v30, v31, v32) >> 12) & 0xFFFFFFFFFLL;
        v34 = 48 * v35 - 0x58000000000LL;
        if ( (*(_BYTE *)(v34 + 34) & 0x20) == 0 && (*(_BYTE *)(v34 + 35) & 0x40) == 0 )
        {
          if ( (v36 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v34 + 40)) >> 8) & 0x3FF),
                v37 = *((_QWORD *)v36 + 688),
                v37 >= 0x80)
            || ((__int64)KeGetCurrentThread()[1].Queue & 2) != 0 && v37 >= 2
            || v36 != MiSystemPartition && v37 >= 2 )
          {
            if ( (unsigned int)MiUnlinkPageFromList(48 * v35 - 0x58000000000LL) )
            {
              ++*(_WORD *)(v34 + 32);
              *(_BYTE *)(v34 + 34) = *(_BYTE *)(v34 + 34) & 0xE8 | 0x16;
              *(_QWORD *)(v34 + 24) = *(_QWORD *)(v34 + 24) & 0xC000000000000000uLL | 1;
              if ( (a5 & 2) != 0 )
              {
                v38 = *(_BYTE *)(v34 + 35);
                if ( (v38 & 8) != 0 || (v38 & 7u) > 2 )
                  *(_BYTE *)(v34 + 35) = v38 & 0xF8 | 2;
              }
              v39 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v34 + 16) & 0xFFFFFFE7LL;
              v41 = v40 >> 6;
              if ( v41 )
              {
                if ( v41 == 2 )
                  v39 = (unsigned int)v39 | 0x18;
              }
              else
              {
                v39 = (unsigned int)v39 | 8;
              }
              if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(
                                   0LL,
                                   MmProtectToPteMask[v39] ^ ((v35 << 12) ^ MmProtectToPteMask[v39]) & 0xFFFFFFFFF000LL | 0x21,
                                   0xFFFFFFFFF000LL) )
                v42 |= 0x100uLL;
              v43 = v42 | 0x42;
              v114 = v43;
              v44 = v118;
              *v118 = v43;
              if ( v33 <= 0x7F8 )
                MiWritePteShadow(v44, v43);
              goto LABEL_68;
            }
            MiDiscardTransitionPte(48 * v35 - 0x58000000000LL);
          }
        }
LABEL_45:
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v8, v112[0]);
        LODWORD(v8) = 0;
        goto LABEL_246;
      }
      if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8 )
        v28 = MiReadPteShadow(&v114, v28);
      v34 = 48 * ((v28 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( (*(_BYTE *)(v34 + 35) & 0x40) != 0 )
        goto LABEL_45;
      *(_QWORD *)(v34 + 24) ^= (((*(_QWORD *)(v34 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v34 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_68:
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(v8, v112[0]);
      goto LABEL_200;
    }
    MiUnlockProtoPoolPage(v8, v112[0]);
  }
  v78 = v125;
LABEL_144:
  v127 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
  {
    do
    {
      v79 = (unsigned int)(v127 + 1);
      v127 = v79;
      if ( ((unsigned int)v79 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v79);
    }
    while ( (*(_QWORD *)(v34 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) );
  }
  MiInitializePfn(v34, v118, v78, 3);
  if ( (a5 & 2) != 0 )
  {
    v81 = *(_BYTE *)(v34 + 35);
    if ( (v81 & 8) != 0 || (v81 & 7u) > 2 )
      *(_BYTE *)(v34 + 35) = v81 & 0xF8 | 2;
  }
  v82 = v131;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v131 + 72);
  }
  else
  {
    v121 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(v131 + 72), 0x1Fu) )
      v121 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v82 + 72));
    while ( 1 )
    {
      v83 = *(_DWORD *)(v82 + 72);
      if ( (v83 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v83 & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)(v82 + 72), v83 | 0x40000000, v83);
      v84 = (unsigned int)(v121 + 1);
      v121 = v84;
      if ( ((unsigned int)v84 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v84);
    }
  }
  ++*(_QWORD *)(v82 + 32);
  if ( *(_QWORD *)(v82 + 64) )
    ++v134[13];
  v85 = (_DWORD *)(v82 + 72);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v85, retaddr);
  else
    *v85 = 0;
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(
                       0LL,
                       MmProtectToPteMask[v78] ^ ((v129 << 12) ^ MmProtectToPteMask[v78]) & 0xFFFFFFFFF000LL | 0x21,
                       v80) )
    v86 |= 0x100uLL;
  v87 = v86 & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
  v114 = v87;
  v88 = v118;
  *v118 = v87;
  if ( (unsigned __int64)(v88 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(v88, v87);
  if ( ((v9 >> 4) & 1) == 0 )
  {
    if ( v75 )
    {
      memset(v138, 0, sizeof(v138));
      v139 = 0LL;
      MiIdentifyPfn(v34, v138);
    }
    v89 = *(_BYTE *)(v34 + 34);
    if ( (v89 & 7) != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, (v34 + 0x58000000000LL) / 48, v89 & 7, *(_QWORD *)(v34 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v90 = (*(_QWORD *)(v34 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v34 + 24) ^= (*(_QWORD *)(v34 + 24) ^ v90) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v90 )
      MiPfnShareCountIsZero(v34, 0LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v124 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      v91 = (unsigned int)(v124 + 1);
      v124 = v91;
      if ( ((unsigned int)v91 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v91);
    }
    while ( (*(_QWORD *)(v8 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
  }
  *(_BYTE *)(v8 + 34) &= ~0x20u;
  if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(v8) )
    MiPfnReferenceCountIsZero(v8, (v8 + 0x58000000000LL) / 48);
  if ( v112[0] == 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v112[0]);
  }
  if ( ((v9 >> 4) & 1) != 0 )
  {
    v11 = v123;
LABEL_200:
    v93 = KeGetCurrentIrql();
    __writecr8(2uLL);
    LODWORD(v8) = 0;
    v126 = 0;
    v94 = v128;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v128 + 24), 0x3FuLL) )
    {
      do
      {
        v95 = (unsigned int)(v126 + 1);
        v126 = v95;
        if ( ((unsigned int)v95 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
          _mm_pause();
        }
        else
        {
          HvlNotifyLongSpinWait(v95);
          v94 = v128;
        }
      }
      while ( (*(_QWORD *)(v94 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v94 + 24), 0x3FuLL) );
    }
    *(_QWORD *)(v94 + 24) ^= (*(_QWORD *)(v94 + 24) ^ ((*(_QWORD *)(v94 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v94 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FD40);
    }
    else
    {
      v122 = 0;
      if ( _interlockedbittestandset(dword_14034FD40, 0x1Fu) )
        v122 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FD40);
      while ( (dword_14034FD40[0] & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_14034FD40[0] & 0x40000000) == 0 )
          _InterlockedCompareExchange(dword_14034FD40, dword_14034FD40[0] | 0x40000000, dword_14034FD40[0]);
        v96 = (unsigned int)(v122 + 1);
        v122 = v96;
        if ( ((unsigned int)v96 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v96);
      }
    }
    v97 = *(_QWORD *)v11;
    if ( v11 + 0x90482413000LL <= 0x7F8 )
      LOBYTE(v97) = MiReadPteShadow(v11, *(_QWORD *)v11);
    if ( (v97 & 1) != 0 )
      goto LABEL_243;
    if ( (v97 & 8) != 0 )
    {
      v98 = v114;
      if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8 )
        v98 = MiReadPteShadow(&v114, v114);
      v99 = qword_1403D0218 ^ (qword_1403D0218 ^ (((v98 >> 12) & 0xFFFFFFFFFLL) << 12)) & 0xFFFFFFFFF000LL | 0x21;
      v100 = 0x904C0000000LL;
      if ( v11 + 0x904C0000000LL <= 0x3FFFFFFF )
        v99 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
      if ( v11 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        && v11 >= 0xFFFFF68000000000uLL
        || v11 >= 0xFFFFF6FB40000000uLL
        && v11 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
        || v11 >= 0xFFFFF6FB7DA00000uLL
        && (v100 = 0x90482600000LL, v11 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
        || v11 >= 0xFFFFF6FB7DBED000uLL
        && v11 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
      {
        v99 |= 4uLL;
      }
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v11, v99, v100) )
        v101 |= 0x100uLL;
      v102 = word_14034EC18;
      v103 = v101 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
      LOBYTE(v9) = v9 | 1;
    }
    else
    {
      v103 = v114;
      v102 = word_14034EC18;
    }
    v104 = *(_QWORD *)(v34 + 16);
    if ( !MiAllocateWsle(
            dword_14034FD40,
            v11,
            v34,
            0LL,
            v103 & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(v102 & 1) << 8),
            0LL) )
    {
LABEL_243:
      MiUnlockWorkingSetExclusive((__int64)dword_14034FD40, v93);
      MiLockAndDecrementShareCount(v34, 0LL);
      MiLockAndDecrementShareCount(v128, 0LL);
    }
    else
    {
      MiUnlockWorkingSetExclusive((__int64)dword_14034FD40, v93);
      if ( PfSnNumActiveTraces && (v104 & 0x400) != 0 )
      {
        v108 = (__int64 *)MiGetPrototypePteDirect(v104, v105, v106, v107);
        v109 = *v108;
        v110 = MI_REFERENCE_CONTROL_AREA_FILE(*v108);
        v111 = MiStartingOffset(v108, (unsigned __int64)v118, 0xFFFFFFFF);
        PfSnLogPageFault(v110, v111, 4u);
        MI_DEREFERENCE_CONTROL_AREA_FILE(v109, v110);
      }
    }
    goto LABEL_246;
  }
  LODWORD(v8) = 0;
  if ( v75 )
  {
    v139 |= 4uLL;
    v145[0] = v138;
    v145[1] = 32LL;
    EtwTraceKernelEvent((int)v145, 1, 0x20000001u, 0x282u, 289413890);
  }
  if ( (v9 & 8) == 0 )
    return 0LL;
LABEL_246:
  v5 = Size[0];
LABEL_247:
  v7 = v115;
  v6 = Src;
LABEL_248:
  v58 = *(_QWORD *)&Size[1];
LABEL_249:
  v117 = 0;
  if ( (v9 & 2) == 0 )
    memmove((void *)(v7 + v5), v6, v58);
  return (unsigned int)v8;
}

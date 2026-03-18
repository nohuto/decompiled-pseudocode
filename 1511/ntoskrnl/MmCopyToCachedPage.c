/*
 * XREFs of MmCopyToCachedPage @ 0x140069110
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140068870 (CcMapAndCopyInToCache.c)
 *     HvViewMapCopyToFileOffset @ 0x1401AAB98 (HvViewMapCopyToFileOffset.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiIdentifyPfn @ 0x140050C60 (MiIdentifyPfn.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x14006A630 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiLockLeafPage @ 0x1400A2340 (MiLockLeafPage.c)
 *     PfSnLogPageFault @ 0x1400A7010 (PfSnLogPageFault.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     MiLockAndInsertPageInFreeList @ 0x140131B78 (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_CAPTURE_SYSTEM_CACHE_PTE @ 0x1401D5744 (MI_CAPTURE_SYSTEM_CACHE_PTE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiMapCacheExceptionFilter @ 0x140623D70 (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MmCopyToCachedPage(ULONG_PTR BugCheckParameter2, void *a2, unsigned int a3, size_t a4, char a5)
{
  size_t v5; // r12
  unsigned int v6; // r13d
  unsigned int v8; // edi
  unsigned __int64 v9; // rcx
  ULONG_PTR v10; // r15
  __int16 v11; // ax
  KIRQL v12; // si
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // rbx
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r13
  unsigned __int8 v25; // dl
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // r13
  __int64 v31; // r9
  unsigned int v32; // eax
  __int64 result; // rax
  int v34; // r8d
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int16 NodeShiftedColor; // r8
  __int16 v37; // dx
  unsigned int *p_PageColor; // rax
  unsigned int v39; // edx
  unsigned __int16 v40; // ax
  int *v41; // rbx
  unsigned int v42; // r8d
  unsigned __int64 v43; // r8
  __int64 Page; // r12
  __int64 v45; // rax
  unsigned int v46; // ebx
  signed __int64 i; // rdx
  signed __int64 v48; // rax
  ULONG_PTR v49; // rax
  __int64 v50; // r9
  _QWORD *v51; // r14
  __int64 v52; // r12
  unsigned __int64 v53; // rbx
  __int64 v54; // rbx
  char *v55; // rax
  size_t v56; // r12
  unsigned __int64 v57; // rax
  unsigned int v58; // r14d
  __int64 v59; // rbx
  unsigned int v60; // ecx
  int v61; // r14d
  __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v66; // edx
  int v67; // eax
  char v68; // cl
  volatile signed __int32 *v69; // rbx
  size_t CurrentIrql; // rcx
  signed __int32 v71; // eax
  signed __int32 v72; // edx
  __int64 v73; // rax
  _DWORD *v74; // rcx
  __int64 v75; // rbx
  unsigned __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // rax
  char v80; // cl
  __int64 v81; // rdx
  __int64 v82; // r15
  unsigned __int8 v83; // bl
  unsigned __int64 *v84; // r12
  __int16 v85; // ax
  __int64 v86; // r8
  __int64 v87; // rax
  __int64 v88; // r9
  unsigned __int64 ValidKernelPte; // rcx
  __int64 v90; // r14
  __int64 v91; // r14
  __int64 v92; // rsi
  ULONG_PTR v93; // rbx
  __int64 v94; // rax
  _BYTE v95[4]; // [rsp+30h] [rbp-188h] BYREF
  size_t Size; // [rsp+34h] [rbp-184h]
  size_t v97; // [rsp+40h] [rbp-178h]
  int v98; // [rsp+48h] [rbp-170h]
  unsigned int v99; // [rsp+4Ch] [rbp-16Ch]
  __int64 v100; // [rsp+50h] [rbp-168h]
  unsigned __int64 v101; // [rsp+58h] [rbp-160h] BYREF
  int v102; // [rsp+60h] [rbp-158h] BYREF
  __int64 v103; // [rsp+68h] [rbp-150h]
  __int64 v104; // [rsp+70h] [rbp-148h]
  unsigned int v105; // [rsp+78h] [rbp-140h]
  void *Src; // [rsp+80h] [rbp-138h]
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-130h]
  int v108; // [rsp+90h] [rbp-128h] BYREF
  __int64 v109; // [rsp+98h] [rbp-120h]
  int v110; // [rsp+A0h] [rbp-118h] BYREF
  size_t v111; // [rsp+A8h] [rbp-110h]
  _DWORD v112[4]; // [rsp+B0h] [rbp-108h] BYREF
  void *v113; // [rsp+C0h] [rbp-F8h]
  unsigned __int64 *v114; // [rsp+C8h] [rbp-F0h]
  __int64 v115; // [rsp+D0h] [rbp-E8h]
  __int64 v116; // [rsp+D8h] [rbp-E0h]
  __int64 v117; // [rsp+E0h] [rbp-D8h]
  __int64 v118; // [rsp+E8h] [rbp-D0h]
  _QWORD v119[2]; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v120; // [rsp+100h] [rbp-B8h]
  void *v121; // [rsp+108h] [rbp-B0h]
  ULONG_PTR v122; // [rsp+110h] [rbp-A8h]
  unsigned __int64 v123[3]; // [rsp+118h] [rbp-A0h] BYREF
  __int64 v124; // [rsp+130h] [rbp-88h]
  __int64 v125; // [rsp+138h] [rbp-80h]
  ULONG_PTR v126; // [rsp+140h] [rbp-78h]
  unsigned int *v127; // [rsp+148h] [rbp-70h]
  __int16 v128; // [rsp+150h] [rbp-68h]
  unsigned __int16 v129; // [rsp+152h] [rbp-66h]
  _QWORD v130[2]; // [rsp+160h] [rbp-58h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+0h]

  v5 = a4;
  v97 = a4;
  v6 = a3;
  Size = a3;
  v121 = a2;
  Src = a2;
  BugCheckParameter1 = BugCheckParameter2;
  v122 = BugCheckParameter2;
  v112[2] = a3;
  v111 = a4;
  v8 = 0;
  v120 = 0LL;
  v9 = a4 + a3;
  if ( v9 > 0x1000 || v9 < a4 )
    KeBugCheckEx(0x1Au, 0x776uLL, BugCheckParameter2, a4, a3);
  v10 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v114 = (unsigned __int64 *)v10;
  v11 = MI_READ_PTE_LOCK_FREE(v10);
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 0x42) == 0 && (v11 & 0x800) != 0 )
    {
      v12 = ExAcquireSpinLockExclusive(&dword_1402FF880);
      v13 = MI_READ_PTE_LOCK_FREE(v10);
      if ( (v13 & 1) != 0 && (v13 & 0x42) == 0 && (v13 & 0x800) != 0 )
      {
        v15 = v13 | 0x62;
        *(_QWORD *)v10 = v13 | 0x62;
        if ( (unsigned int)MiPteInShadowRange(v10) )
          MiWritePteShadow(v10, v15);
      }
      MiUnlockWorkingSetExclusive((__int64)&dword_1402FF880, v12, v14);
    }
    goto LABEL_181;
  }
  v115 = 48
       * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
       - 0x58000000000LL;
  v16 = MI_CAPTURE_SYSTEM_CACHE_PTE(v10);
  if ( (v16 & 1) != 0 )
    goto LABEL_180;
  v17 = v16 >> 16;
  v100 = v16 >> 16;
  v125 = v16 >> 16;
  v18 = MI_READ_PTE_LOCK_FREE(v16 >> 16);
  v19 = v18;
  v101 = v18;
  if ( (v18 & 1) != 0 || (v18 & 0x400) == 0 && (v18 & 0x800) != 0 )
    goto LABEL_18;
  v20 = 0LL;
  v116 = 0LL;
  while ( 1 )
  {
    v30 = v19 >> 16;
    v117 = v30;
    v31 = *(_QWORD *)v30;
    v109 = v31;
    v119[1] = v31;
    v32 = *(_DWORD *)(v31 + 56);
    if ( (v32 & 0x20) != 0 )
    {
      if ( (*(_BYTE *)(v30 + 34) & 4) != 0 )
        goto LABEL_46;
    }
    else if ( (v32 & 0x40000000) != 0 )
    {
LABEL_46:
      result = MmAccessFault(0LL, BugCheckParameter1, 0, 0LL);
      v98 = result;
      if ( (int)result < 0 )
        return result;
      goto LABEL_18;
    }
    v95[0] = 17;
    v34 = (v32 >> 20) & 0x3F;
    if ( v34 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      NodeShiftedColor = ((_WORD)v34 - 1) << byte_1402FE6D9;
    }
    else
    {
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
      NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
    }
    v129 = NodeShiftedColor;
    v37 = (1 << byte_1402FE6E8) - 1;
    v128 = v37;
    p_PageColor = &CurrentPrcb->PageColor;
    v127 = p_PageColor;
    v39 = (unsigned __int16)(v37 & ++*(_WORD *)p_PageColor) | NodeShiftedColor;
    v40 = *(_WORD *)(v31 + 60) & 0x3FF;
    if ( v40 == 1023 )
      v41 = &MiSystemPartition;
    else
      v41 = *(int **)(qword_1402FEC28 + 8LL * v40);
    if ( v97 == 4096 )
      v42 = 0;
    else
      v42 = 2;
    Page = MiGetPage((__int64)v41, v39, v42);
    v104 = Page;
    if ( Page == -1 )
    {
      MiWaitForFreePage(v41);
      v17 = v100;
      goto LABEL_18;
    }
    v23 = 48 * Page - 0x58000000000LL;
    v118 = v23;
    if ( v97 != 4096 && *(_QWORD *)(v23 + 16) )
    {
      v8 |= 4u;
      HIDWORD(Size) = v8;
    }
    v45 = (v101 >> 5) & 0x1F;
    v103 = v45;
    v99 = (v101 >> 5) & 0x1F;
    if ( v99 >> 3 == 3 && (v45 & 7) != 0 )
    {
      v46 = dword_1403812A8;
    }
    else
    {
      v46 = 1;
      if ( v99 >> 3 == 1 )
        v46 = MiPlatformCacheAttributes[0];
    }
    if ( *(unsigned __int8 *)(v23 + 34) >> 6 != v46 )
      MiChangePageAttribute(48 * Page - 0x58000000000LL, v46, 0LL);
    for ( i = *(_QWORD *)(v23 + 24); ; i = v48 )
    {
      v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 24), i & 0xF0FFFFFFFFFFFFFFuLL, i);
      if ( i == v48 )
        break;
    }
    v49 = MiReservePtes((__int64)&qword_1402FF7B0, 1u, v43);
    v51 = (_QWORD *)v49;
    v126 = v49;
    if ( v49 )
    {
      v52 = (__int64)(v49 << 25) >> 16;
      v53 = ~qword_140381310 & (MiMakeValidKernelPte(v104, 4, v49, v50) | 0x8000000000000042uLL);
      *v51 = v53;
      if ( (unsigned int)MiPteInShadowRange(v51) )
        MiWritePteShadow(v51, v53);
      v54 = (unsigned int)Size;
      v55 = (char *)((unsigned int)Size + v52);
      v113 = v55;
      if ( (v8 & 4) != 0 )
      {
        if ( (_DWORD)Size )
        {
          memset((void *)v52, 0, (unsigned int)Size);
          v55 = (char *)v113;
        }
        v56 = v97;
        if ( 4096 - v97 != v54 )
          memset(&v55[v97], 0, 4096 - v97 - v54);
      }
      else
      {
        v56 = v97;
      }
      v98 = 0;
      memmove(v113, Src, v56);
      MiReleasePtes((__int64)&qword_1402FF7B0, v51, 1u);
      v8 |= 2u;
    }
    else
    {
      if ( (a5 & 1) == 0 )
      {
        MiReleaseFreshPage(48 * Page - 0x58000000000LL);
        goto LABEL_179;
      }
      if ( (v8 & 4) != 0 )
      {
        v8 &= ~4u;
        MiZeroPhysicalPage(Page, 1LL, v46);
      }
      v8 |= 8u;
    }
    v99 = (v8 & 0x10) == 0 && BYTE4(PerfGlobalGroupMask) & 1;
    v17 = v100;
    if ( v95[0] != 17 )
      break;
    v20 = MiLockProtoPoolPage(v100, v95);
    if ( v20 )
    {
      v57 = MI_READ_PTE_LOCK_FREE(v17);
      v101 = v57;
      if ( (v57 & 1) == 0 && ((v57 & 0x800) == 0 || (v57 & 0x400) != 0) )
      {
        v58 = v103;
        if ( (_DWORD)v103 == ((v57 >> 5) & 0x1F) )
          goto LABEL_98;
      }
      MiUnlockProtoPoolPage(v20, v95[0]);
    }
    v8 &= ~2u;
    HIDWORD(Size) = v8;
    MiLockAndInsertPageInFreeList(v23);
LABEL_18:
    while ( 1 )
    {
      v20 = MiLockProtoPoolPage(v17, v95);
      v116 = v20;
      if ( v20 )
        break;
      MmAccessFault(2uLL, v17, 0, 0LL);
    }
    v21 = MiLockLeafPage(v17, 0LL);
    v22 = MI_READ_PTE_LOCK_FREE(v17);
    v19 = v22;
    v101 = v22;
    if ( v21 )
    {
      if ( (v22 & 1) != 0 )
      {
        v23 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v101) - 0x58000000000LL;
        if ( (*(_BYTE *)(v23 + 35) & 0x40) != 0 )
        {
LABEL_22:
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiUnlockProtoPoolPage(v20, v95[0]);
          goto LABEL_179;
        }
        *(_QWORD *)(v23 + 24) ^= (((*(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v23 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v24 = (v22 >> 12) & 0xFFFFFFFFFLL;
        v23 = 48 * v24 - 0x58000000000LL;
        if ( (*(_BYTE *)(v23 + 34) & 0x20) != 0 || (*(_BYTE *)(v23 + 35) & 0x40) != 0 )
          goto LABEL_22;
        if ( !(unsigned int)MiUnlinkPageFromList(48 * v24 - 0x58000000000LL, 0) )
        {
          MiDiscardTransitionPte(48 * v24 - 0x58000000000LL);
          goto LABEL_22;
        }
        ++*(_WORD *)(v23 + 32);
        v25 = *(_BYTE *)(v23 + 34) & 0xE8 | 0x16;
        *(_BYTE *)(v23 + 34) = v25;
        *(_QWORD *)(v23 + 24) = *(_QWORD *)(v23 + 24) & 0xC000000000000000uLL | 1;
        if ( (a5 & 2) != 0 && (unsigned int)MI_GET_PFN_PRIORITY(48 * v24 - 0x58000000000LL) > 2 )
          *(_BYTE *)(v23 + 35) = *(_BYTE *)(v23 + 35) & 0xF8 | 2;
        v26 = (*(_DWORD *)(v23 + 16) >> 5) & 7;
        v27 = v25 >> 6;
        if ( v27 )
        {
          if ( v27 == 2 )
            v26 = (unsigned int)v26 | 0x18;
        }
        else
        {
          v26 = (unsigned int)v26 | 8;
        }
        v28 = MmProtectToPteMask[v26] ^ ((v24 << 12) ^ MmProtectToPteMask[v26]) & 0xFFFFFFFFF000LL | 0x21;
        if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
          v28 |= 0x100uLL;
        v29 = v28 | 0x42;
        v101 = v29;
        *(_QWORD *)v17 = v29;
        if ( (unsigned int)MiPteInShadowRange(v17) )
          MiWritePteShadow(v17, v29);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(v20, v95[0]);
LABEL_168:
      v82 = v115;
      v83 = MiLockPageInline(v115);
      *(_QWORD *)(v82 + 24) ^= (((*(_QWORD *)(v82 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v82 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v82 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ExAcquireSpinLockExclusive(&dword_1402FF880);
      v84 = v114;
      v85 = MI_READ_PTE_LOCK_FREE(v114);
      if ( (v85 & 1) != 0
        || ((v85 & 0x100) == 0
          ? (ValidKernelPte = v101)
          : (v87 = MI_GET_PAGE_FRAME_FROM_PTE(&v101),
             ValidKernelPte = MiMakeValidKernelPte(v87, 1, (unsigned __int64)v84, v88),
             LOBYTE(v8) = v8 | 1),
            v90 = *(_QWORD *)(v23 + 16),
            !MiAllocateWsle(
               (ULONG_PTR)&dword_1402FF880,
               v84,
               v23,
               v120,
               ValidKernelPte & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_1402FE760 & 1) << 8),
               0LL)) )
      {
        MiUnlockWorkingSetExclusive((__int64)&dword_1402FF880, v83, v86);
        MiLockAndDecrementShareCount(v23, 0);
        MiLockAndDecrementShareCount(v82, 0);
      }
      else
      {
        MiUnlockWorkingSetExclusive((__int64)&dword_1402FF880, v83, v86);
        if ( PfSnNumActiveTraces && (v90 & 0x400) != 0 )
        {
          v91 = v90 >> 16;
          v92 = *(_QWORD *)v91;
          v93 = MI_REFERENCE_CONTROL_AREA_FILE(*(_QWORD *)v91);
          v94 = MiStartingOffset(v91, v100, 0xFFFFFFFFLL);
          PfSnLogPageFault(v93, v94, 4LL);
          MI_DEREFERENCE_CONTROL_AREA_FILE(v92, v93);
        }
      }
      goto LABEL_179;
    }
    MiUnlockProtoPoolPage(v20, v95[0]);
  }
  v58 = v103;
LABEL_98:
  v112[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(v112);
    while ( (*(_QWORD *)(v23 + 24) & 0x8000000000000000uLL) != 0 );
  }
  *(_QWORD *)(v23 + 16) = MI_READ_PTE_LOCK_FREE(v17);
  *(_QWORD *)(v23 + 40) |= 0x200000000000000uLL;
  v59 = *(_QWORD *)(v23 + 40);
  if ( v58 == 31 )
  {
    HIDWORD(Size) = 1;
  }
  else
  {
    v60 = v58 >> 3;
    if ( v58 >> 3 == 3 && (v58 & 7) != 0 )
    {
      HIDWORD(Size) = dword_1403812A8;
    }
    else
    {
      v61 = 1;
      if ( v60 == 1 )
        v61 = MiPlatformCacheAttributes[0];
      HIDWORD(Size) = v61;
    }
  }
  *(_WORD *)(v23 + 32) = 1;
  *(_BYTE *)(v23 + 34) |= 0x10u;
  v119[0] = MI_READ_PTE_LOCK_FREE(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v62 = MI_GET_PAGE_FRAME_FROM_PTE(v119);
  *(_QWORD *)(v23 + 40) = v59 ^ (v62 ^ v59) & 0xFFFFFFFFFLL;
  v64 = 48 * v62 - 0x58000000000LL;
  CurrentThread = KeGetCurrentThread();
  if ( (HIDWORD(CurrentThread[1].Queue) & 0x100) != 0 )
  {
    v105 = (HIDWORD(CurrentThread[1].Queue) & 0xE00u) >> 9;
  }
  else
  {
    v66 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v67 = 2;
      if ( v66 < 2 )
        v67 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
      v66 = v67;
    }
    v105 = v66;
  }
  v108 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v64 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v108);
    while ( (*(_QWORD *)(v64 + 24) & 0x8000000000000000uLL) != 0 );
  }
  *(_QWORD *)(v64 + 24) ^= (((*(_QWORD *)(v64 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v64 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( *(unsigned __int8 *)(v23 + 34) >> 6 != HIDWORD(Size) )
    MiChangePageAttribute(v23, HIDWORD(Size), 1LL);
  *(_QWORD *)(v23 + 24) = *(_QWORD *)(v23 + 24) & 0xC000000000000000uLL | 1;
  v68 = *(_BYTE *)(v23 + 35) ^ (*(_BYTE *)(v23 + 35) ^ v105) & 7;
  *(_BYTE *)(v23 + 35) = v68;
  *(_QWORD *)(v23 + 8) = v100;
  *(_BYTE *)(v23 + 34) = *(_BYTE *)(v23 + 34) & 0xF8 | 6;
  if ( (a5 & 2) != 0 && ((v68 & 8) != 0 || (v68 & 7u) > 2) )
    *(_BYTE *)(v23 + 35) = v68 & 0xF8 | 2;
  if ( (*(_DWORD *)(v109 + 56) & 0x20) != 0 || !*(_QWORD *)(v109 + 64) )
    v30 = 0LL;
  v69 = (volatile signed __int32 *)(v109 + 72);
  CurrentIrql = KeGetCurrentIrql();
  v111 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v69, (unsigned __int8)CurrentIrql);
  }
  else
  {
    v102 = 0;
    if ( _interlockedbittestandset(v69, 0x1Fu) )
      v102 = ExpWaitForSpinLockExclusiveAndAcquire(v69, (unsigned __int8)CurrentIrql, v63);
LABEL_132:
    v71 = *v69;
    while ( 1 )
    {
      v72 = v71;
      if ( (v71 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v71 & 0x40000000) == 0 )
      {
        v71 = _InterlockedCompareExchange(v69, v71 | 0x40000000, v71);
        if ( v71 != v72 )
          continue;
      }
      KeYieldProcessorEx(&v102);
      goto LABEL_132;
    }
  }
  v73 = v109;
  ++*(_QWORD *)(v109 + 32);
  if ( v30 )
    ++*(_DWORD *)(v30 + 104);
  v74 = (_DWORD *)(v73 + 72);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v74, retaddr);
  else
    *v74 = 0;
  __writecr8((unsigned __int8)v111);
  if ( ((v8 >> 4) & 1) != 0 )
  {
    v75 = MmProtectToPteMask[(unsigned int)v103] ^ ((v104 << 12) ^ MmProtectToPteMask[(unsigned int)v103]) & 0xFFFFFFFFF000LL | 0x21;
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
      v75 |= 0x100uLL;
    v76 = v75 & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
    v101 = v76;
    v77 = v100;
    *(_QWORD *)v100 = v76;
    if ( (unsigned int)MiPteInShadowRange(v77) )
      MiWritePteShadow(v100, v76);
  }
  else
  {
    if ( v99 )
    {
      memset(v123, 0, sizeof(v123));
      v124 = 0LL;
      MiIdentifyPfn(v23, v123);
    }
    v78 = 32 * (((v104 & 0xFFFFFFFFFLL) << 7) | v103 & 0x1F | 0x40);
    v101 = v78;
    v79 = v100;
    *(_QWORD *)v100 = v78;
    if ( (unsigned int)MiPteInShadowRange(v79) )
      MiWritePteShadow(v100, v78);
    v80 = *(_BYTE *)(v23 + 34);
    if ( (v80 & 7) != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, (v23 + 0x58000000000LL) / 48, v80 & 7, *(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v81 = (*(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v23 + 24) ^= (v81 ^ *(_QWORD *)(v23 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v81 )
      MiPfnShareCountIsZero(v23);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v110 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v110);
    while ( *(__int64 *)(v20 + 24) < 0 );
  }
  *(_BYTE *)(v20 + 34) &= ~0x20u;
  if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(v20) )
    MiPfnReferenceCountIsZero(v20, (v20 + 0x58000000000LL) / 48);
  if ( v95[0] == 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v95[0]);
  }
  if ( ((v8 >> 4) & 1) != 0 )
    goto LABEL_168;
  if ( v99 )
  {
    v124 |= 4uLL;
    v130[0] = v123;
    v130[1] = 32LL;
    EtwTraceKernelEvent((int)v130, 1, 0x20000001u, 0x282u, 289413890);
  }
  if ( (v8 & 8) == 0 )
    return 0LL;
LABEL_179:
  v6 = Size;
LABEL_180:
  v5 = v97;
LABEL_181:
  v98 = 0;
  if ( (v8 & 2) == 0 )
    memmove((void *)(BugCheckParameter1 + v6), Src, v5);
  return 0LL;
}

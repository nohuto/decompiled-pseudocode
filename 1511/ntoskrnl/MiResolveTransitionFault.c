/*
 * XREFs of MiResolveTransitionFault @ 0x1400728A0
 * Callers:
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400517B0 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MiWaitForCollidedFaultComplete @ 0x14001F86C (MiWaitForCollidedFaultComplete.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x140071340 (MI_IS_PFN_FILE_ONLY.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MiObtainProtoReference @ 0x1400AB334 (MiObtainProtoReference.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MiUpdatePfnPriority @ 0x1400B9884 (MiUpdatePfnPriority.c)
 *     MiFreeInPageSupportBlock @ 0x1400FDE30 (MiFreeInPageSupportBlock.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeImagePageOk @ 0x1401D52A4 (MiMakeImagePageOk.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiResolveTransitionFault(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        volatile LONG *a4,
        char a5,
        int a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v8; // r14
  unsigned __int64 *v9; // r13
  unsigned __int64 v10; // rbx
  ULONG_PTR v11; // rbx
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 BugCheckParameter4; // r15
  __int64 v15; // r12
  unsigned __int64 v16; // r11
  unsigned __int16 v17; // ax
  char v18; // cl
  struct _KTHREAD *CurrentThread; // r8
  __int64 result; // rax
  __int64 v21; // r10
  char v22; // bl
  BOOL v23; // ecx
  int ImagePageOk; // ebx
  char v25; // al
  unsigned __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r10
  unsigned __int64 Address; // rax
  char v32; // r10
  unsigned __int64 v33; // r11
  int v34; // edx
  __int64 v35; // rax
  PVOID v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdi
  unsigned __int64 v39; // rbx
  int v40; // eax
  bool v41; // cc
  char v42; // al
  unsigned __int64 v43; // rax
  __int64 v44; // rsi
  __int16 v45; // r8
  char v46; // r9
  bool v47; // zf
  __int16 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // edi
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // r9
  int v54; // edx
  unsigned __int16 v55; // cx
  int *v56; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v58; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v60; // eax
  PVOID v61; // rbx
  unsigned __int64 v62; // rbx
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  __int64 v65; // [rsp+28h] [rbp-51h]
  int v66; // [rsp+40h] [rbp-39h] BYREF
  int v67; // [rsp+44h] [rbp-35h] BYREF
  int v68; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int64 v69; // [rsp+50h] [rbp-29h] BYREF
  PVOID P; // [rsp+58h] [rbp-21h] BYREF
  int *v71; // [rsp+60h] [rbp-19h]
  __int64 v72; // [rsp+68h] [rbp-11h]
  __int64 v77; // [rsp+F8h] [rbp+7Fh]

  v8 = 0LL;
  v9 = a3;
  v10 = a2;
  if ( a8 )
    *a8 = 0LL;
  if ( a6 )
  {
    v69 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v15 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v69) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v69 = MI_READ_PTE_LOCK_FREE(v9);
    BugCheckParameter4 = 48 * ((v69 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    goto LABEL_17;
  }
  v11 = MI_READ_PTE_LOCK_FREE(a3);
  if ( (v11 & 0x800) == 0 )
    return 3221226548LL;
  while ( !MI_IS_PFN((v11 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_11:
    v11 = MI_READ_PTE_LOCK_FREE(v9);
    if ( (v11 & 0x800) == 0 )
      return 3221226548LL;
  }
  v67 = 0;
  BugCheckParameter4 = 48 * v12 - v13;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v67);
    while ( (*(_QWORD *)(BugCheckParameter4 + 24) & 0x8000000000000000uLL) != 0 );
  }
  if ( MI_READ_PTE_LOCK_FREE(v9) != v11 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_11;
  }
  if ( (unsigned __int64 *)(*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) != v9 )
    KeBugCheckEx(0x1Au, 0x411uLL, (ULONG_PTR)v9, v11, *(_QWORD *)(BugCheckParameter4 + 8));
  if ( !BugCheckParameter4 )
    return 3221226548LL;
  v15 = 0LL;
  v10 = a2;
  v69 = MI_READ_PTE_LOCK_FREE(v9);
LABEL_17:
  v72 = a7 & 1;
  if ( (a7 & 1) != 0 && *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiUpdatePfnPriority(BugCheckParameter4, *(_DWORD *)((a7 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0LL);
    goto LABEL_30;
  }
  __incgsdword(0x2E18u);
  v16 = *(_QWORD *)(BugCheckParameter4 + 40);
  v17 = (HIDWORD(v16) >> 8) & 0x3FF;
  if ( v17 == 1023 )
    v71 = &MiSystemPartition;
  else
    v71 = *(int **)(qword_1402FEC28 + 8LL * v17);
  v18 = *(_BYTE *)(BugCheckParameter4 + 34);
  if ( (v18 & 0x20) == 0 )
  {
    v26 = v69;
    if ( v10 >= 0xFFFF800000000000uLL && (MiFlags & 0x10000) == 0 || (v16 & 0x200000000000000LL) == 0 )
    {
LABEL_88:
      if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) == 0
        && v9 != (unsigned __int64 *)(*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) )
      {
        KeBugCheckEx(0x1Au, 0x888AuLL, (ULONG_PTR)v9, *(_QWORD *)(BugCheckParameter4 + 8), BugCheckParameter4);
      }
      P = 0LL;
      if ( (unsigned int)MiUnlinkPageFromList(BugCheckParameter4, 0) )
      {
        v35 = MiMigratePfn((_DWORD)a4, v10, BugCheckParameter4, v15, a7, (__int64)&P);
        BugCheckParameter4 = v35;
        if ( v35 )
        {
          v37 = *(_QWORD *)(v35 + 24);
          ++*(_WORD *)(BugCheckParameter4 + 32);
          *(_QWORD *)(BugCheckParameter4 + 24) = v37 & 0xC000000000000000uLL | 1;
          *(_BYTE *)(BugCheckParameter4 + 34) = *(_BYTE *)(BugCheckParameter4 + 34) & 0xF8 | 6;
          goto LABEL_104;
        }
        v36 = P;
        if ( P )
        {
          if ( *((int *)P + 44) > 1 )
            KeSetEvent((PRKEVENT)((char *)P + 56), 0, 0);
          MiFreeInPageSupportBlock(v36);
          return 3221226548LL;
        }
      }
      else
      {
        MiDiscardTransitionPte(BugCheckParameter4);
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v15 )
          MiUnlockProtoPoolPage(v15, 0x11u);
      }
      return 3221226548LL;
    }
    v27 = *(_QWORD *)(BugCheckParameter4 + 16);
    if ( (v27 & 0x400) != 0 && ((v16 >> 54) & 7) != 3 )
    {
      v28 = v27 >> 16;
      v29 = *(_QWORD *)v28;
      if ( (*(_DWORD *)(*(_QWORD *)v28 + 56LL) & 0x20) != 0 )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(v29 + 96) + 8LL);
        if ( v30 )
        {
          if ( (v30 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v30 & 3) != 2 )
          {
            if ( (MiFlags & 0x100000) != 0 && (*(_DWORD *)(v29 + 92) & 0xC000000) != 0 )
            {
              v33 = a2;
            }
            else
            {
              Address = MiLocateAddress(a2);
              if ( Address )
              {
                v34 = *(_DWORD *)(Address + 48);
                if ( (v34 & 7) == 2
                  && ((v34 & 0xF8) == 8
                   || (*(_DWORD *)(Address + 64) & 0x10000000) != 0 && (v32 & 4) == 0
                   || (MiFlags & 0x400) != 0 && (*(_BYTE *)(v28 + 34) & 2) != 0) )
                {
                  goto LABEL_87;
                }
              }
            }
            ImagePageOk = MiMakeImagePageOk(v33, v9, v26, a4, BugCheckParameter4, v15);
            if ( ImagePageOk < 0 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_65;
            }
          }
        }
      }
    }
LABEL_87:
    LODWORD(v10) = a2;
    goto LABEL_88;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (BYTE4(CurrentThread[1].Queue) & 4) != 0 )
  {
    LODWORD(v8) = -1073741663;
    goto LABEL_30;
  }
  if ( !a8 )
  {
    LODWORD(v8) = -1073740748;
    goto LABEL_30;
  }
  if ( (v18 & 8) == 0 )
  {
    v21 = *(_QWORD *)BugCheckParameter4 - 32LL;
    P = (PVOID)v21;
    v22 = *(_BYTE *)(v21 + 189);
    v23 = (v22 & 0x40) != 0 && (int)PsGetIoPriorityThread((__int64)CurrentThread) >= 2
       || CurrentThread == *(struct _KTHREAD **)(v21 + 152)
       || (CurrentThread->MiscFlags & 0x8000) != 0
       || LODWORD(CurrentThread->Process[2].ActiveProcessors.Bitmap[10]) && (*(_QWORD *)(v21 + 248) || (v22 & 4) != 0);
    if ( (v16 & 0x200000000000000LL) != 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter4 + 16) & 0x400LL) != 0 )
      {
        if ( (CurrentThread->WaitBlock[3].SpareLong || (CurrentThread->MiscFlags & 0x400) != 0 || a5 || v23)
          && (v22 & 0x10) == 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return MiResolveMappedFileFault(a2, (_DWORD)v9, (_DWORD)a4, v15, 0LL, (__int64)a8);
        }
        goto LABEL_55;
      }
      if ( !BYTE2(CurrentThread[1].Teb) && (v22 & 4) == 0 && !v23 || (v22 & 0x10) != 0 )
      {
LABEL_55:
        MiObtainProtoReference(v15, 1LL);
LABEL_60:
        v66 = 0;
        result = MiWaitForCollidedFaultComplete(BugCheckParameter4, v15, a2, a4, a5, 2u, &v66);
        ImagePageOk = result;
        if ( v66 == 1 )
          return result;
        if ( v15 )
        {
          MiLockNestedPageAtDpcInline(v15);
          MiRemoveLockedPageChargeAndDecRef(v15);
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( ImagePageOk )
        {
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_65:
          if ( v15 )
            MiUnlockProtoPoolPage(v15, 0x11u);
          return (unsigned int)ImagePageOk;
        }
        MiAddLockedPageCharge(BugCheckParameter4, 3LL);
        v25 = *(_BYTE *)(BugCheckParameter4 + 34) & 0xF8 | 6;
        *(_QWORD *)(BugCheckParameter4 + 24) ^= (((*(_QWORD *)(BugCheckParameter4 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(BugCheckParameter4 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(BugCheckParameter4 + 34) = v25;
        MiRemoveLockedPageChargeAndDecRef(BugCheckParameter4);
        v26 = v69;
        P = 0LL;
LABEL_104:
        if ( v72 && *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
        {
          v26 = v26 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
          *v9 = *v9 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        }
        v38 = (v26 >> 5) & 0x1F;
        v77 = qword_140381310;
        v39 = MmProtectToPteMask[(*v9 >> 5) & 0x1F] ^ (*v9 ^ MmProtectToPteMask[(*v9 >> 5) & 0x1F]) & 0xFFFFFFFFF000LL | 0x21;
        v69 = v39;
        if ( (unsigned __int64)(v9 + 0x12098000000LL) <= 0x3FFFFFFF )
        {
          v39 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
          v69 = v39;
        }
        if ( (unsigned __int64)v9 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && (unsigned __int64)v9 >= 0xFFFFF68000000000uLL
          || (unsigned __int64)v9 >= 0xFFFFF6FB40000000uLL
          && (unsigned __int64)v9 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
          || (unsigned __int64)v9 >= 0xFFFFF6FB7DA00000uLL
          && (unsigned __int64)v9 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
          || (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v9 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
        {
          v39 |= 4uLL;
          v69 = v39;
        }
        if ( (unsigned __int64)v9 >= MiGetPteAddress(0xFFFF800000000000uLL) )
        {
          if ( (unsigned __int64)v9 >= MiGetPteAddress(0xFFFFF90000000000uLL)
            && (unsigned __int64)v9 < MiGetPteAddress(0xFFFFF98000000000uLL)
            || (unsigned __int64)v9 >= MiGetPteAddress(0xFFFFF68000000000uLL)
            && (unsigned __int64)v9 <= MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL) )
          {
            goto LABEL_129;
          }
          if ( (unsigned __int64)v9 < MiGetPteAddress(0xFFFFF58000000000uLL)
            || (v41 = (unsigned __int64)v9 <= MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL), v40 = HIBYTE(word_1402FE760), !v41) )
          {
            v40 = (unsigned __int8)word_1402FE760;
          }
        }
        else
        {
          v40 = HIBYTE(word_1402FE760);
        }
        if ( v40 )
        {
          v39 |= 0x100uLL;
          v69 = v39;
        }
LABEL_129:
        if ( (_DWORD)v38 == 24 )
        {
          v42 = *(_BYTE *)(BugCheckParameter4 + 34) >> 6;
          if ( v42 != 1 )
          {
            if ( !v42 )
            {
              v39 |= 0x18uLL;
LABEL_135:
              v69 = v39;
              goto LABEL_136;
            }
            if ( v42 == 2 )
            {
              v39 = v39 & 0xFFFFFFFFFFFFFFE7uLL | 8;
              goto LABEL_135;
            }
          }
        }
LABEL_136:
        v43 = *(_QWORD *)(BugCheckParameter4 + 16);
        v44 = 0LL;
        if ( (v43 & 0x400) == 0 && (v43 & 0x2000) != 0 && ((v43 >> 1) & 0xF) == v71[269] )
          v44 = MiCaptureDirtyBitToPfn(BugCheckParameter4);
        if ( (v39 & 0x800) != 0 )
        {
          if ( (*(_BYTE *)(BugCheckParameter4 + 34) & 0x10) == 0 )
          {
            if ( !a1 )
              goto LABEL_149;
            if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) != 0 )
            {
LABEL_150:
              if ( (_DWORD)v38 == 24 )
              {
                v39 = ~v77 & (v39 | 0x8000000000000000uLL);
                v69 = v39;
              }
              *v9 = v39;
              if ( (unsigned int)MiPteInShadowRange(v9) )
                MiWritePteShadow(v9, v39);
LABEL_154:
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( !v15 )
                goto LABEL_206;
              v68 = 0;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v68);
                  while ( (*(_QWORD *)(v15 + 24) & 0x8000000000000000uLL) != 0 );
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) );
                v9 = a3;
              }
              v45 = *(_WORD *)(v15 + 32);
              v46 = *(_BYTE *)(v15 + 34) & 0xDF;
              *(_BYTE *)(v15 + 34) = v46;
              if ( !v45 )
                KeBugCheckEx(0x4Eu, 0x9AuLL, (v15 + 0x58000000000LL) / 48, v46 & 7, *(unsigned __int16 *)(v15 + 32));
              v47 = v45 == 1;
              v48 = v45 - 1;
              *(_WORD *)(v15 + 32) = v48;
              if ( v47 && (unsigned int)MI_IS_PFN_FILE_ONLY(v15) )
                goto LABEL_204;
              v49 = *(_QWORD *)(v15 + 40);
              if ( (v49 & 0x10000000000000LL) != 0 )
              {
LABEL_205:
                _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_206:
                if ( v44 )
                  MiReleasePageFileInfo(v71, v44, 1LL);
                v61 = P;
                if ( P )
                {
                  if ( *((int *)P + 44) > 1 )
                    KeSetEvent((PRKEVENT)((char *)P + 56), 0, 0);
                  MiFreeInPageSupportBlock(v61);
                }
                if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) != 0 )
                {
                  LODWORD(v65) = 0;
                  result = MiCompleteProtoPteFault((__int64)a4, a5, a2, v69, a1, v65, a7);
                  if ( (int)result < 0 )
                    return result;
                  return 272LL;
                }
                if ( v72 && *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
                {
                  v62 = v69;
                  *v9 = v69;
                  if ( (unsigned int)MiPteInShadowRange(v9) )
                    MiWritePteShadow(v9, v62);
                  *(_QWORD *)BugCheckParameter4 = 0LL;
                  return 272LL;
                }
                v63 = 0LL;
                if ( v72 )
                {
                  if ( *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
                  {
                    v8 = 512LL;
                    v64 = v69 & 0xFFFFFFFFFFFFFFDFuLL;
                    goto LABEL_227;
                  }
                  if ( *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
                    v63 = a7 & 0xFFFFFFFFFFFFFFFEuLL;
                }
                v64 = v69;
LABEL_227:
                if ( !MiAllocateWsle((ULONG_PTR)a4, v9, BugCheckParameter4, v8, v64, v63) )
                {
                  MiLockAndDecrementShareCount(BugCheckParameter4, 0);
                  return 3221225495LL;
                }
                return 272LL;
              }
              v50 = *(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL;
              if ( !v48 )
              {
                v51 = 1;
LABEL_172:
                v52 = *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL;
                v53 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                if ( (v52 > v53 || v52 < 0xFFFFF68000000000uLL) && ((*(unsigned __int8 *)(v15 + 35) >> 5) & 1) != 0 )
                {
                  *(_BYTE *)(v15 + 35) &= ~0x20u;
                  goto LABEL_203;
                }
                v54 = 0;
                if ( (v49 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v15 + 16) & 0x400LL) != 0 )
                {
                  v54 = 1;
                }
                else if ( v52 <= v53 && v52 >= 0xFFFFF68000000000uLL && ((*(unsigned __int8 *)(v15 + 35) >> 5) & 1) != 0 )
                {
                  v54 = 1;
                }
                else if ( v51 == 1 && ((*(_QWORD *)(v15 + 24) >> 62) & 1LL) != 0 )
                {
                  v54 = 1;
                }
                v55 = (HIDWORD(v49) >> 8) & 0x3FF;
                if ( v55 == 1023 )
                  v56 = &MiSystemPartition;
                else
                  v56 = *(int **)(qword_1402FEC28 + 8LL * v55);
                if ( v54 == 1 )
                  MiReturnCommit((__int64)v56, 1uLL);
                if ( v56 != &MiSystemPartition )
                {
                  _InterlockedExchangeAdd64((volatile signed __int64 *)v56 + 744, 1uLL);
LABEL_203:
                  if ( v51 )
                  {
LABEL_204:
                    MiPfnReferenceCountIsZero(v15, (v15 + 0x58000000000LL) / 48);
                    goto LABEL_205;
                  }
                  goto LABEL_205;
                }
                CurrentPrcb = KeGetCurrentPrcb();
                v58 = 1LL;
                CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
                if ( (_DWORD)CachedResidentAvailable != -1 )
                {
                  if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
                  {
                    do
                    {
                      v60 = _InterlockedCompareExchange(
                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                              CachedResidentAvailable + 1,
                              CachedResidentAvailable);
                      v47 = (_DWORD)CachedResidentAvailable == v60;
                      LODWORD(CachedResidentAvailable) = v60;
                      if ( v47 )
                        goto LABEL_201;
                    }
                    while ( v60 != -1 && (unsigned __int64)(v60 + 1LL) <= 0x100 );
                  }
                  if ( (int)CachedResidentAvailable > 192
                    && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                            192,
                                                            CachedResidentAvailable) )
                  {
                    v58 = (int)CachedResidentAvailable - 192 + 1LL;
                  }
                }
                _InterlockedExchangeAdd64(&qword_140301480, v58);
LABEL_201:
                _InterlockedExchangeAdd64(&qword_1402FF640, 1uLL);
                goto LABEL_203;
              }
              if ( v48 == 1 )
              {
                if ( v50 )
                {
LABEL_170:
                  v51 = 0;
                  goto LABEL_172;
                }
              }
              else if ( v48 != 2 || !v50 )
              {
                goto LABEL_205;
              }
              if ( (v46 & 8) == 0 )
                goto LABEL_205;
              goto LABEL_170;
            }
            v44 = MiCaptureDirtyBitToPfn(BugCheckParameter4);
            goto LABEL_148;
          }
          if ( a1 || a2 >= 0xFFFF800000000000uLL )
          {
LABEL_148:
            v39 |= 0x42uLL;
            v69 = v39;
          }
        }
LABEL_149:
        if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) == 0 )
          goto LABEL_154;
        goto LABEL_150;
      }
    }
    else if ( !BYTE2(CurrentThread[1].Teb) && (v22 & 4) == 0 && !v23 || (v22 & 0x10) != 0 )
    {
      goto LABEL_60;
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return MiResolvePageFileFault(a2, (_DWORD)v9, (_DWORD)a4, a6, v15, a7, (__int64)a8);
  }
  LODWORD(v8) = -1073741801;
LABEL_30:
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v15 )
    MiUnlockProtoPoolPage(v15, 0x11u);
  return (unsigned int)v8;
}

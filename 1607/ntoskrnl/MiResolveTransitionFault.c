/*
 * XREFs of MiResolveTransitionFault @ 0x140035B10
 * Callers:
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140040EE0 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiObtainProtoReference @ 0x1400231D8 (MiObtainProtoReference.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiMigratePfn @ 0x140036990 (MiMigratePfn.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiIsPfnFileOnly @ 0x14004E500 (MiIsPfnFileOnly.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiUpdatePfnPriority @ 0x1400BBB70 (MiUpdatePfnPriority.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C4044 (MiWaitForCollidedFaultComplete.c)
 *     MiFreeInPageSupportBlock @ 0x1400C4240 (MiFreeInPageSupportBlock.c)
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 *     MiMakeTransitionPteValid @ 0x1401F25F0 (MiMakeTransitionPteValid.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x1401F6D64 (MiMakeImagePageOk.c)
 */

__int64 MiResolveTransitionFault(
        unsigned __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        char a8,
        ...)
{
  __int64 v8; // rdi
  __int64 v9; // r14
  ULONG_PTR v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r10
  volatile signed __int32 *BugCheckParameter4; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // r11
  __int64 result; // rax
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // r11
  unsigned __int16 v25; // ax
  char v26; // cl
  struct _KTHREAD *CurrentThread; // r8
  __int64 v28; // r10
  char v29; // bl
  BOOL v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int ImagePageOk; // ebx
  char v35; // al
  unsigned __int64 v36; // rdi
  __int64 PrototypePteDirect; // rax
  int v38; // edx
  __int64 v39; // r8
  __int64 v40; // r10
  unsigned __int64 Address; // rax
  char v42; // r10
  __int64 v43; // r11
  int v44; // edx
  __int64 v45; // rdx
  char *v46; // rbx
  bool v47; // zf
  unsigned __int64 v48; // rax
  int v49; // r11d
  int v50; // edx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int64 v60; // rbx
  char v61; // al
  __int64 v62; // rax
  unsigned __int64 v63; // rsi
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rax
  int v68; // edi
  unsigned __int64 v69; // r9
  int v70; // edx
  unsigned __int16 v71; // r8
  int *v72; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v74; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v76; // eax
  PVOID v77; // rbx
  unsigned __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // rax
  int v83; // [rsp+50h] [rbp-39h] BYREF
  _DWORD v84[3]; // [rsp+54h] [rbp-35h] BYREF
  int v85[2]; // [rsp+60h] [rbp-29h] BYREF
  PVOID P; // [rsp+68h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-19h] BYREF
  struct _KEVENT *v88; // [rsp+78h] [rbp-11h]
  __int64 v89; // [rsp+80h] [rbp-9h]
  int v91; // [rsp+E0h] [rbp+57h] BYREF
  __int64 v92; // [rsp+E8h] [rbp+5Fh]
  _QWORD *v93; // [rsp+110h] [rbp+87h] BYREF
  va_list va; // [rsp+110h] [rbp+87h]
  va_list va1; // [rsp+118h] [rbp+8Fh] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v93 = va_arg(va1, _QWORD *);
  v92 = a4;
  v8 = (__int64)v93;
  v9 = 0LL;
  if ( v93 )
    *v93 = 0LL;
  if ( a3 )
  {
    *(_QWORD *)v85 = MI_READ_PTE_LOCK_FREE(a2);
    BugCheckParameter4 = (volatile signed __int32 *)(48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v85) - 0x58000000000LL);
    goto LABEL_17;
  }
  BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(a2);
  v13 = BugCheckParameter3;
  if ( (BugCheckParameter3 & 0x800) == 0 )
    return 3221226548LL;
  while ( 1 )
  {
    if ( !(unsigned int)MiInvalidPteConforms(v13) )
      goto LABEL_12;
    v14 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&BugCheckParameter3);
    if ( !MiIsPfnInline(v14) )
      goto LABEL_12;
    BugCheckParameter4 = (volatile signed __int32 *)(v16 + 48 * v15);
    v83 = 0;
    while ( _interlockedbittestandset64(BugCheckParameter4 + 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v83);
      while ( (*((_QWORD *)BugCheckParameter4 + 3) & 0x8000000000000000uLL) != 0 );
    }
    v18 = MI_READ_PTE_LOCK_FREE(a2);
    if ( v18 == BugCheckParameter3 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, v19);
LABEL_12:
    BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(a2);
    v13 = BugCheckParameter3;
    if ( (BugCheckParameter3 & 0x800) == 0 )
      return 3221226548LL;
  }
  if ( (unsigned __int64 *)(*((_QWORD *)BugCheckParameter4 + 1) | 0x8000000000000000uLL) != a2 )
    KeBugCheckEx(0x1Au, 0x411uLL, (ULONG_PTR)a2, BugCheckParameter3, *((_QWORD *)BugCheckParameter4 + 1));
  *(_QWORD *)v85 = MI_READ_PTE_LOCK_FREE(a2);
LABEL_17:
  v22 = a5;
  v89 = a5 & 1;
  if ( (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiUpdatePfnPriority(BugCheckParameter4, *(_DWORD *)((a5 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0LL);
    goto LABEL_30;
  }
  __incgsdword(0x2E18u);
  v24 = *((_QWORD *)BugCheckParameter4 + 5);
  v25 = (HIDWORD(v24) >> 8) & 0x3FF;
  if ( v25 == 1023 )
    v88 = (struct _KEVENT *)MiSystemPartition;
  else
    v88 = *(struct _KEVENT **)(qword_140327038 + 8LL * v25);
  v26 = *((_BYTE *)BugCheckParameter4 + 34);
  v23 = 1LL;
  if ( (v26 & 0x20) == 0 )
  {
    v36 = *(_QWORD *)v85;
    if ( (a1 < 0xFFFF800000000000uLL || (MiFlags & 0x4000) != 0)
      && (v24 & 0x200000000000000LL) != 0
      && (BugCheckParameter4[4] & 0x400LL) != 0
      && ((v24 >> 54) & 7) != 3 )
    {
      PrototypePteDirect = MiGetPrototypePteDirect(*((_QWORD *)BugCheckParameter4 + 2));
      v39 = *(_QWORD *)PrototypePteDirect;
      if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0 )
      {
        v40 = *(_QWORD *)(*(_QWORD *)(v39 + 96) + 8LL);
        if ( v40 )
        {
          if ( (v40 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v40 & 3) != 2 )
          {
            if ( (v38 & 0x80000) != 0 && (*(_DWORD *)(v39 + 92) & 0xC000000) != 0
              || (Address = MiLocateAddress(a1)) == 0
              || (v44 = *(_DWORD *)(Address + 48), (v44 & 7) != 2)
              || (v44 & 0xF8) != 8
              && ((*(_DWORD *)(Address + 64) & 0x8000000) == 0 || (v42 & 4) != 0)
              && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v43 + 34) & 2) == 0) )
            {
              ImagePageOk = MiMakeImagePageOk(a1, (int)a2, v36, v92, (ULONG_PTR)BugCheckParameter4, a3);
              if ( ImagePageOk < 0 )
                goto LABEL_84;
            }
          }
        }
      }
    }
    if ( (*((_QWORD *)BugCheckParameter4 + 5) & 0x200000000000000LL) == 0
      && a2 != (unsigned __int64 *)(*((_QWORD *)BugCheckParameter4 + 1) | 0x8000000000000000uLL) )
    {
      KeBugCheckEx(0x1Au, 0x888AuLL, (ULONG_PTR)a2, *((_QWORD *)BugCheckParameter4 + 1), (ULONG_PTR)BugCheckParameter4);
    }
    if ( !(unsigned int)MiUnlinkPageFromList((ULONG_PTR)BugCheckParameter4) )
    {
      MiDiscardTransitionPte(BugCheckParameter4);
      _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
      {
        LOBYTE(v45) = 17;
        MiUnlockProtoPoolPage(a3, v45);
      }
      return 3221226548LL;
    }
    v46 = 0LL;
    LOBYTE(v93) = 0;
    P = 0LL;
    if ( (*(_BYTE *)(v92 + 184) & 7) != 0 || *((_WORD *)BugCheckParameter4 + 16) )
      goto LABEL_114;
    if ( (*((_QWORD *)BugCheckParameter4 + 5) & 0x200000000000000LL) != 0 )
    {
      if ( (BugCheckParameter4[4] & 0x400LL) != 0 )
        goto LABEL_114;
      v47 = *(_QWORD *)(qword_140327FD0 + 276840656) == 0LL;
    }
    else
    {
      v47 = *(_QWORD *)(qword_140327FD0 + 276840648) == 0LL;
    }
    if ( !v47 )
    {
      v48 = MiLocateAddress(a1);
      if ( v48 )
      {
        v50 = *(_DWORD *)(v48 + 48);
        if ( (v50 & 0x100000) != 0
          && ((*((_QWORD *)BugCheckParameter4 + 5) & 0x200000000000000LL) == 0 || (v50 & 0x8000) == 0)
          && (((*((_QWORD *)BugCheckParameter4 + 5) >> 57) & 1LL) != 0 || (v50 & 0x8000) != 0) )
        {
          v51 = MiIdealClusterPage(v49, v48, (int)a2, v36, v92, (void *)BugCheckParameter4, a3, a8, (__int64)va);
          v53 = v51;
          if ( v51 )
          {
            BugCheckParameter4 = (volatile signed __int32 *)v51;
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
            if ( a3 )
            {
              LOBYTE(v52) = 17;
              MiUnlockProtoPoolPage(a3, v52);
            }
            v46 = (char *)P;
            v36 = *(_QWORD *)v85;
          }
          if ( (_BYTE)v93 )
            goto LABEL_115;
          if ( !v53 )
            return 3221226548LL;
          v22 = a5;
        }
      }
    }
LABEL_114:
    v54 = MiMigratePfn(v92, a1, (_DWORD)BugCheckParameter4, a3, v22, (__int64)&P);
    v46 = (char *)P;
    v53 = v54;
    BugCheckParameter4 = (volatile signed __int32 *)v54;
LABEL_115:
    if ( v53 )
    {
      v55 = *((_QWORD *)BugCheckParameter4 + 3);
      ++*((_WORD *)BugCheckParameter4 + 16);
      v22 = a5;
      *((_QWORD *)BugCheckParameter4 + 3) = v55 & 0xC000000000000000uLL | 1;
      *((_BYTE *)BugCheckParameter4 + 34) = *((_BYTE *)BugCheckParameter4 + 34) & 0xF8 | 6;
      goto LABEL_121;
    }
    if ( v46 )
    {
      if ( *((int *)v46 + 44) > 1 )
        KeSetEvent((PRKEVENT)(v46 + 56), 0, 0);
      MiFreeInPageSupportBlock(v46);
      return 3221226548LL;
    }
    return 3221226548LL;
  }
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    LODWORD(v9) = -1073741663;
    goto LABEL_30;
  }
  if ( !v8 )
  {
    LODWORD(v9) = -1073740748;
    goto LABEL_30;
  }
  if ( (v26 & 8) == 0 )
  {
    v28 = *(_QWORD *)BugCheckParameter4 - 32LL;
    P = (PVOID)v28;
    v29 = *(_BYTE *)(v28 + 189);
    v30 = (v29 & 0x40) != 0 && (int)PsGetIoPriorityThread(CurrentThread, 1LL, CurrentThread) >= 2
       || CurrentThread == *(struct _KTHREAD **)(v28 + 152)
       || (CurrentThread->MiscFlags & 0x8000) != 0
       || LODWORD(CurrentThread->Process[2].ActiveProcessors.Bitmap[12]) && (*(_QWORD *)(v28 + 248) || (v29 & 4) != 0);
    if ( (v24 & 0x200000000000000LL) != 0 )
    {
      if ( (BugCheckParameter4[4] & 0x400LL) != 0 )
      {
        if ( (CurrentThread->WaitBlock[3].SpareLong || (CurrentThread->MiscFlags & 0x400) != 0 || a7 || v30)
          && (v29 & 0x10) == 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
          return MiResolveMappedFileFault(a1, (_DWORD)a2, a3, v92, 0LL, v8);
        }
        goto LABEL_55;
      }
      if ( !BYTE6(CurrentThread[1].Queue) && (v29 & 4) == 0 && !v30 || (v29 & 0x10) != 0 )
      {
LABEL_55:
        MiObtainProtoReference(a3, 1LL, (__int64)CurrentThread, v21);
        goto LABEL_60;
      }
    }
    else if ( !BYTE6(CurrentThread[1].Queue) && (v29 & 4) == 0 && !v30 || (v29 & 0x10) != 0 )
    {
LABEL_60:
      v91 = 0;
      result = MiWaitForCollidedFaultComplete((_DWORD)BugCheckParameter4, a3, a1, v92, a7, 2, (__int64)&v91);
      ImagePageOk = result;
      if ( v91 == 1 )
        return result;
      if ( a3 )
      {
        MiLockNestedPageAtDpcInline(a3);
        MiRemoveLockedPageChargeAndDecRef(a3);
        _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( !ImagePageOk )
      {
        MiAddLockedPageCharge(BugCheckParameter4, 3LL, v32, v33);
        v35 = *((_BYTE *)BugCheckParameter4 + 34);
        *((_QWORD *)BugCheckParameter4 + 3) ^= (*((_QWORD *)BugCheckParameter4 + 3) ^ ((*((_QWORD *)BugCheckParameter4
                                                                                        + 3) & 0x3FFFFFFFFFFFFFFFLL)
                                                                                     + 1)) & 0x3FFFFFFFFFFFFFFFLL;
        *((_BYTE *)BugCheckParameter4 + 34) = v35 & 0xF8 | 6;
        MiRemoveLockedPageChargeAndDecRef(BugCheckParameter4);
        v36 = *(_QWORD *)v85;
        P = 0LL;
LABEL_121:
        if ( v89 && *(_BYTE *)(v22 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
        {
          v36 = v36 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
          *a2 = *a2 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        }
        v56 = (v36 >> 5) & 0x1F;
        *(_QWORD *)v85 = MiMakeTransitionPteValid(a2);
        v60 = *(_QWORD *)v85;
        if ( (_DWORD)v56 == 24 )
        {
          v61 = *((_BYTE *)BugCheckParameter4 + 34) >> 6;
          if ( v61 != 1 )
          {
            if ( !v61 )
            {
              v60 = *(_QWORD *)v85 | 0x18LL;
LABEL_130:
              *(_QWORD *)v85 = v60;
              goto LABEL_131;
            }
            if ( v61 == 2 )
            {
              v60 = *(_QWORD *)v85 & 0xFFFFFFFFFFFFFFE7uLL | 8;
              goto LABEL_130;
            }
          }
        }
LABEL_131:
        v62 = *((_QWORD *)BugCheckParameter4 + 2);
        v63 = 0LL;
        if ( (v62 & 0x400) == 0 && (v62 & 4) != 0 && (unsigned __int16)v62 >> 12 == v88[44].Header.SignalState )
          v63 = MiCaptureDirtyBitToPfn((__int64)BugCheckParameter4);
        if ( (v60 & 0x800) != 0 )
        {
          if ( (*((_BYTE *)BugCheckParameter4 + 34) & 0x10) == 0 )
          {
            if ( !a6 )
              goto LABEL_144;
            if ( (*((_QWORD *)BugCheckParameter4 + 5) & 0x200000000000000LL) != 0 )
            {
LABEL_145:
              if ( (_DWORD)v56 == 24 )
              {
                v60 = ~qword_1403A9350 & (v60 | 0x8000000000000000uLL);
                *(_QWORD *)v85 = v60;
              }
              *a2 = v60;
              if ( (unsigned int)MiPteInShadowRange(a2, v57) )
                MiWritePteShadow(v64, v60);
LABEL_149:
              _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
              if ( !a3 )
                goto LABEL_199;
              v84[0] = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(v84);
                while ( (*(_QWORD *)(a3 + 24) & 0x8000000000000000uLL) != 0 );
              }
              *(_BYTE *)(a3 + 34) &= ~0x20u;
              v65 = *(unsigned __int16 *)(a3 + 32);
              if ( !(_WORD)v65 )
                KeBugCheckEx(
                  0x4Eu,
                  0x9AuLL,
                  (a3 + 0x58000000000LL) / 48,
                  *(_BYTE *)(a3 + 34) & 7,
                  *(unsigned __int16 *)(a3 + 32));
              v47 = (_WORD)v65 == 1;
              LOWORD(v65) = v65 - 1;
              *(_WORD *)(a3 + 32) = v65;
              if ( v47 && (unsigned int)MiIsPfnFileOnly(a3, v65, v58, v59) )
                goto LABEL_197;
              v66 = *(_QWORD *)(a3 + 40);
              if ( (v66 & 0x10000000000000LL) != 0 )
              {
LABEL_198:
                _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_199:
                if ( v63 )
                  MiReleasePageFileInfo(v88, v63, 1);
                v77 = P;
                if ( P )
                {
                  if ( *((int *)P + 44) > 1 )
                    KeSetEvent((PRKEVENT)((char *)P + 56), 0, 0);
                  MiFreeInPageSupportBlock(v77);
                }
                if ( (*((_QWORD *)BugCheckParameter4 + 5) & 0x200000000000000LL) != 0 )
                {
                  result = MiCompleteProtoPteFault(v92, a7, a1, v85[0], a6, 0, a5);
                  if ( (int)result < 0 )
                    return result;
                  return 272LL;
                }
                if ( v89 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
                {
                  v78 = *(_QWORD *)v85;
                  *a2 = *(_QWORD *)v85;
                  if ( (unsigned int)MiPteInShadowRange(a2, v78) )
                    MiWritePteShadow(v80, v79);
                  *(_QWORD *)BugCheckParameter4 = 0LL;
                  return 272LL;
                }
                v81 = 0LL;
                if ( v89 )
                {
                  if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
                  {
                    v9 = 512LL;
                    v82 = *(_QWORD *)v85 & 0xFFFFFFFFFFFFFFDFuLL;
                    goto LABEL_220;
                  }
                  if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
                    v81 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
                }
                v82 = *(_QWORD *)v85;
LABEL_220:
                if ( !MiAllocateWsle(v92, a2, BugCheckParameter4, v9, v82, v81) )
                {
                  MiLockAndDecrementShareCount(BugCheckParameter4, 0LL);
                  return 3221225495LL;
                }
                return 272LL;
              }
              v67 = *(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
              if ( !(_WORD)v65 )
              {
                v68 = 1;
LABEL_166:
                v69 = *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL;
                if ( (v69 > 0xFFFFF6BFFFFFFF78uLL || v69 < 0xFFFFF68000000000uLL)
                  && ((*(unsigned __int8 *)(a3 + 35) >> 5) & 1) != 0 )
                {
                  *(_BYTE *)(a3 + 35) &= ~0x20u;
                  goto LABEL_196;
                }
                v70 = 0;
                if ( (v66 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
                {
                  v70 = 1;
                }
                else if ( v69 <= 0xFFFFF6BFFFFFFF78uLL
                       && v69 >= 0xFFFFF68000000000uLL
                       && ((*(unsigned __int8 *)(a3 + 35) >> 5) & 1) != 0 )
                {
                  v70 = 1;
                }
                else if ( v68 == 1 && (*(_QWORD *)(a3 + 24) & 0x4000000000000000LL) != 0 )
                {
                  v70 = 1;
                }
                v71 = (HIDWORD(v66) >> 8) & 0x3FF;
                if ( v71 == 1023 )
                  v72 = MiSystemPartition;
                else
                  v72 = *(int **)(qword_140327038 + 8LL * v71);
                if ( v70 == 1 )
                  MiReturnCommit(v72, 1LL);
                if ( v72 == MiSystemPartition )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v74 = 1LL;
                  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
                  if ( (_DWORD)CachedResidentAvailable != -1 )
                  {
                    if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
                    {
                      while ( 1 )
                      {
                        v76 = _InterlockedCompareExchange(
                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                CachedResidentAvailable + 1,
                                CachedResidentAvailable);
                        v47 = (_DWORD)CachedResidentAvailable == v76;
                        LODWORD(CachedResidentAvailable) = v76;
                        if ( v47 )
                          break;
                        if ( v76 == -1 || (unsigned __int64)(v76 + 1LL) > 0x100 )
                          goto LABEL_191;
                      }
LABEL_196:
                      if ( v68 )
                      {
LABEL_197:
                        MiPfnReferenceCountIsZero(a3, (a3 + 0x58000000000LL) / 48);
                        goto LABEL_198;
                      }
                      goto LABEL_198;
                    }
LABEL_191:
                    if ( (int)CachedResidentAvailable > 192
                      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                              192,
                                                              CachedResidentAvailable) )
                    {
                      v74 = (int)CachedResidentAvailable - 192 + 1LL;
                    }
                  }
                  _InterlockedExchangeAdd64(&qword_140324F00, v74);
                  goto LABEL_196;
                }
                _InterlockedExchangeAdd64((volatile signed __int64 *)v72 + 816, 1uLL);
                goto LABEL_196;
              }
              if ( (_WORD)v65 == 1 )
              {
                if ( v67 )
                {
LABEL_164:
                  v68 = 0;
                  goto LABEL_166;
                }
              }
              else if ( (_WORD)v65 != 2 || !v67 )
              {
                goto LABEL_198;
              }
              if ( (*(_BYTE *)(a3 + 34) & 8) == 0 )
                goto LABEL_198;
              goto LABEL_164;
            }
            v63 = MiCaptureDirtyBitToPfn((__int64)BugCheckParameter4);
            goto LABEL_143;
          }
          if ( a6 || a1 >= 0xFFFF800000000000uLL )
          {
LABEL_143:
            v60 |= 0x42uLL;
            *(_QWORD *)v85 = v60;
          }
        }
LABEL_144:
        if ( (*((_QWORD *)BugCheckParameter4 + 5) & 0x200000000000000LL) == 0 )
          goto LABEL_149;
        goto LABEL_145;
      }
LABEL_84:
      _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
      {
        LOBYTE(v31) = 17;
        MiUnlockProtoPoolPage(a3, v31);
      }
      return (unsigned int)ImagePageOk;
    }
    _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    return MiResolvePageFileFault(a1, (_DWORD)a2, a3, v92, v22, v8);
  }
  LODWORD(v9) = -1073741801;
LABEL_30:
  _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v23) = 17;
    MiUnlockProtoPoolPage(a3, v23);
  }
  return (unsigned int)v9;
}

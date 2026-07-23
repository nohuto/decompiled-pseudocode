/*
 * XREFs of MiMigratePfn @ 0x1400B9D20
 * Callers:
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 * Callees:
 *     MiChargeForLockedPage @ 0x14003C5B0 (MiChargeForLockedPage.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiSetPfnTbFlushStamp @ 0x140059A30 (MiSetPfnTbFlushStamp.c)
 *     MiCopyPfnEntry @ 0x14005A620 (MiCopyPfnEntry.c)
 *     MiCanPageMove @ 0x14005ABF0 (MiCanPageMove.c)
 *     MiGetInPageSupportBlock @ 0x14005EA80 (MiGetInPageSupportBlock.c)
 *     MiIsFaultPteIntact @ 0x14007BFC0 (MiIsFaultPteIntact.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiObtainFaultCharges @ 0x14008F350 (MiObtainFaultCharges.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiAreChargesNeededToLockPage @ 0x1400B6C20 (MiAreChargesNeededToLockPage.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x1400B6C70 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     MiReturnFaultCharges @ 0x14013019C (MiReturnFaultCharges.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiUpdateTransitionPteFrame @ 0x1402260DC (MiUpdateTransitionPteFrame.c)
 */

__int64 __fastcall MiMigratePfn(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v8; // r9
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  int v12; // edi
  _QWORD *Address; // rax
  unsigned int v14; // ecx
  struct _KTHREAD *CurrentThread; // rax
  struct _KPRCB *CurrentPrcb; // r8
  char v17; // r9
  unsigned __int16 NodeShiftedColor; // di
  __int16 v19; // dx
  unsigned int *p_PageColor; // r8
  int v21; // r14d
  unsigned __int16 v22; // cx
  __int16 *v23; // r9
  unsigned int v24; // esi
  _WORD *v25; // r8
  _WORD *v26; // rdi
  unsigned int v27; // r12d
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 Page; // rax
  ULONG_PTR v31; // rbp
  __int64 v32; // rsi
  _WORD *v33; // rdx
  _BYTE *v34; // r15
  unsigned int v35; // edi
  unsigned int v36; // ebp
  __int64 *v37; // rdi
  __int64 PteShadow; // rax
  __int64 updated; // rax
  unsigned __int64 v40; // r9
  unsigned int v41; // edi
  unsigned int v42; // edi
  unsigned int v43; // edi
  unsigned int v44; // edi
  unsigned int v45; // edi
  unsigned int v46; // edi
  __int16 v47; // di
  __int64 *v48; // rcx
  __int64 v49; // rdx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-58h]
  _BYTE *v51; // [rsp+28h] [rbp-50h]
  __int64 *v52; // [rsp+30h] [rbp-48h]
  __int64 v53; // [rsp+38h] [rbp-40h] BYREF
  __int16 *v55; // [rsp+90h] [rbp+18h]

  if ( (*(_QWORD *)(a3 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (*(_QWORD *)(a3 + 40) & 0x10000000000000LL) == 0 )
      goto LABEL_3;
    return a3;
  }
  if ( (*(_QWORD *)(a3 + 40) & 0x10000000000000LL) != 0 )
    return a3;
LABEL_3:
  if ( (unsigned __int16)KeNumberNodes <= 1u
    || *(_WORD *)(a3 + 32)
    || (BYTE4(KeGetCurrentThread()[1].Queue) & 0x40) != 0 )
  {
    return a3;
  }
  if ( !MiCanPageMove(a3) )
    return a3;
  v10 = 0LL;
  if ( (a5 & 1) != 0 )
    v11 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
  else
    v11 = 0LL;
  v12 = 0;
  if ( *(_QWORD *)(a1 + 184) != 0xFFFFF58010804000uLL )
  {
    if ( (a5 & 1) == 0 || *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) != 4 )
      goto LABEL_30;
    v12 = *(unsigned __int8 *)(v11 + 40);
    goto LABEL_28;
  }
  if ( v8 + 0x98000000000LL > 0x7FFFFFFFFFLL )
  {
    if ( !v11 && MEMORY[0xFFFFF58010804250] != 1 )
      goto LABEL_30;
    Address = MiLocateAddress(v8);
    if ( Address )
    {
      v14 = *((_DWORD *)Address + 12);
      v12 = (v14 >> 8) & 0x3F;
      if ( !v12 && (v14 & 0x8000) == 0 )
        v12 = (*(_DWORD *)(*(_QWORD *)Address[9] + 56LL) >> 20) & 0x3F;
    }
  }
  if ( !v11 )
    goto LABEL_28;
  if ( v12 )
  {
LABEL_29:
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = byte_14034EB89;
    NodeShiftedColor = ((_WORD)v12 - 1) << byte_14034EB89;
    goto LABEL_31;
  }
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = CurrentThread->ApcState.Process->IdealNode[CurrentThread->Affinity.Group] + 1;
LABEL_28:
    if ( v12 )
      goto LABEL_29;
  }
LABEL_30:
  v17 = byte_14034EB89;
  CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
  NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
LABEL_31:
  v19 = (1 << byte_14034EB98) - 1;
  if ( (*(_BYTE *)(a1 + 216) & 7u) >= 2 )
    p_PageColor = &CurrentPrcb->PageColor;
  else
    p_PageColor = (unsigned int *)(a1 + 192);
  v21 = NodeShiftedColor >> v17;
  if ( v21 == (unsigned __int8)HIBYTE(*(_QWORD *)(a3 + 40)) >> 2 )
    return a3;
  v22 = ((unsigned int)HIDWORD(*(_QWORD *)(a3 + 40)) >> 8) & 0x3FF;
  if ( v22 == 1023 )
    v23 = MiSystemPartition;
  else
    v23 = *(__int16 **)(qword_14034F0E8 + 8LL * v22);
  v24 = NodeShiftedColor | (unsigned __int16)(++*(_WORD *)p_PageColor & v19);
  v55 = v23;
  v25 = (char *)qword_14034EB68 + 2 * v21 * (unsigned int)(unsigned __int16)KeNumberNodes;
  v26 = &v25[(unsigned __int16)KeNumberNodes];
  if ( v25 < v26 )
  {
    while ( *v25 != ((*(_QWORD *)(a3 + 40) >> 58) & 0x3F) )
    {
      if ( *(_OWORD *)(*((_QWORD *)v23 + 5) + 1336LL * (unsigned __int16)*v25 + 1168) == 0LL && ++v25 < v26 )
        continue;
      goto LABEL_42;
    }
    return a3;
  }
LABEL_42:
  v27 = 0;
  if ( (*(_QWORD *)(a3 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
  {
    v27 = 1;
  }
  else
  {
    v28 = *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL;
    if ( v28 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v28 >= 0xFFFFF68000000000uLL
      && ((*(unsigned __int8 *)(a3 + 35) >> 5) & 1) != 0 )
    {
      v27 = 5;
    }
  }
  if ( !MiObtainFaultCharges(v23, 1uLL, v27, (__int64)v23) )
    return a3;
  v29 = 1LL;
  if ( (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4
    || a2 + 0x80000000000LL <= 0x7FFFFFFFFFLL
    || PsNtosImageBase
    && (a2 >= (unsigned __int64)PsNtosImageBase && a2 < PsNtosImageEnd
     || a2 >= (unsigned __int64)PsHalImageBase && a2 < PsHalImageEnd) )
  {
    v29 = 9LL;
  }
  Page = MiGetPage(v55, v24, v29);
  BugCheckParameter2 = Page;
  v31 = Page;
  if ( Page == -1 )
  {
    MiReturnFaultCharges(v55, 1LL, v27);
    return a3;
  }
  v32 = 48 * Page - 0x58000000000LL;
  if ( v21 == (unsigned __int8)HIBYTE(*(_QWORD *)(v32 + 40)) >> 2
    || (v33 = (char *)qword_14034EB68 + 2 * v21 * (unsigned int)(unsigned __int16)KeNumberNodes, v33 >= v26) )
  {
LABEL_67:
    if ( a4 )
    {
      v51 = MiGetInPageSupportBlock(6u);
      v34 = v51;
      if ( !v51 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
        {
          do
          {
            LODWORD(v10) = v10 + 1;
            if ( ((unsigned int)v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait((unsigned int)v10);
          }
          while ( (*(_QWORD *)(v32 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) );
        }
        MiInsertPageInFreeOrZeroedList(v31);
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiReturnFaultCharges(v55, 1LL, v27);
        return a3;
      }
    }
    else
    {
      v34 = 0LL;
      v51 = 0LL;
    }
    v35 = 0;
    v36 = *(unsigned __int8 *)(a3 + 34) >> 6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v35);
      }
      while ( (*(_QWORD *)(v32 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) );
    }
    if ( *(unsigned __int8 *)(v32 + 34) >> 6 != v36 )
      MiChangePageAttribute(v32, v36, 1LL);
    MiSetPfnTbFlushStamp(v32, 0LL, 1);
    MiCopyPfnEntry(v32, a3);
    *(_WORD *)(v32 + 32) = 1;
    *(_QWORD *)(v32 + 24) &= 0xC000000000000000uLL;
    *(_BYTE *)(a3 + 34) = *(_BYTE *)(a3 + 34) & 0xF8 | 5;
    if ( v34 )
    {
      v34[189] |= 0x10u;
      *(_BYTE *)(v32 + 34) |= 0x20u;
      *(_QWORD *)v32 = v34 + 32;
      *((_QWORD *)v34 + 30) = v32;
    }
    v37 = (__int64 *)(*(_QWORD *)(v32 + 8) | 0x8000000000000000uLL);
    v52 = v37;
    PteShadow = *v37;
    if ( (unsigned __int64)(v37 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(v37, *v37);
    updated = MiUpdateTransitionPteFrame(PteShadow, BugCheckParameter2);
    v53 = updated;
    *v37 = updated;
    if ( v40 <= 0x7F8 )
      MiWritePteShadow(v37, updated);
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a4 )
    {
      v41 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v41 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v41);
        }
        while ( (*(_QWORD *)(a4 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) );
      }
      if ( !(unsigned int)MiAreChargesNeededToLockPage(a4) || (unsigned int)MiChargeForLockedPage(a4, 3) )
        ++*(_WORD *)(a4 + 32);
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v42 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v42 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v42);
        }
        while ( (*(_QWORD *)(a4 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) );
      }
      *(_BYTE *)(a4 + 34) &= ~0x20u;
      if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(a4) )
        MiPfnReferenceCountIsZero(a4, (a4 + 0x58000000000LL) / 48);
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v37 = v52;
      *a6 = v51;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(2uLL);
    }
    MiCopyPage(BugCheckParameter2, (a3 + 0x58000000000LL) / 48, 0LL, 2);
    if ( a4 )
    {
      MiLockProtoPoolPage((unsigned __int64)v37, 0LL);
      v43 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v43 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v43);
        }
        while ( (*(_QWORD *)(a4 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) );
      }
      if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(a4) )
        MiPfnReferenceCountIsZero(a4, (a4 + 0x58000000000LL) / 48);
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v44 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v44 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v44);
        }
        while ( (*(_QWORD *)(a3 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) );
      }
    }
    else
    {
      __writecr8(2uLL);
      v45 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v45 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v45);
        }
        while ( (*(_QWORD *)(a3 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) );
      }
    }
    *(_QWORD *)(a3 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    MiInsertPageInFreeOrZeroedList((a3 + 0x58000000000LL) / 48);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v46 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v46 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v46);
      }
      while ( (*(_QWORD *)(v32 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) );
    }
    *(_BYTE *)(v32 + 34) &= ~0x20u;
    v47 = *(_WORD *)(v32 + 32);
    *(_QWORD *)v32 = 0LL;
    MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(v32);
    if ( v51 )
    {
      v51[189] &= ~0x10u;
      if ( (*(_QWORD *)(v32 + 24) & 0x4000000000000000LL) != 0 )
      {
        if ( v47 == 1 )
        {
          v48 = (__int64 *)(v32 + 16);
          if ( (*(_DWORD *)(v32 + 16) & 0x400LL) == 0 )
          {
            v49 = *v48;
            if ( (*v48 & 4) != 0 || (v49 & 2) != 0 )
            {
              v10 = *v48;
              if ( (unsigned __int64)(v32 + 0x90482413010LL) <= 0x7F8 )
                v10 = MiReadPteShadow(v48, v49);
            }
          }
          MiInsertPageInFreeOrZeroedList(BugCheckParameter2);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( a4 )
          MiUnlockProtoPoolPage(a4, 2u);
        if ( v10 )
        {
          MiReleasePageFileInfo(v55, v10, 1LL);
          return 0LL;
        }
        return 0LL;
      }
      if ( !(unsigned int)MiIsFaultPteIntact(a2, v52, &v53) )
      {
        if ( v47 == 1 )
          MiPfnReferenceCountIsZero(v32, BugCheckParameter2);
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( a4 )
          MiUnlockProtoPoolPage(a4, 2u);
        return 0LL;
      }
    }
    return v32;
  }
  while ( *v33 != ((*(_QWORD *)(a3 + 40) >> 58) & 0x3F) )
  {
    if ( *v33 != ((*(_QWORD *)(v32 + 40) >> 58) & 0x3F) && ++v33 < v26 )
      continue;
    goto LABEL_67;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
  {
    do
    {
      LODWORD(v10) = v10 + 1;
      if ( ((unsigned int)v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait((unsigned int)v10);
    }
    while ( (*(_QWORD *)(v32 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) );
  }
  MiInsertPageInFreeOrZeroedList(v31);
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiReturnFaultCharges(v55, 1LL, v27);
  return a3;
}

/*
 * XREFs of MiMakeOutswappedPageResident @ 0x14020F4C4
 * Callers:
 *     MmInSwapProcess @ 0x140110ACC (MmInSwapProcess.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiInitializeInPageSupport @ 0x14005EB30 (MiInitializeInPageSupport.c)
 *     MiMarkPageActive @ 0x14006A8A0 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x14006A908 (MiInitializePfnForOtherProcess.c)
 *     IoPageRead @ 0x140085D50 (IoPageRead.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     SmPageRead @ 0x14013C58C (SmPageRead.c)
 *     MiStoreFaultComplete @ 0x14014AC94 (MiStoreFaultComplete.c)
 *     MiDiscardTransitionPte @ 0x14014AE5C (MiDiscardTransitionPte.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MmFlushAllFilesystemPages @ 0x140217008 (MmFlushAllFilesystemPages.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 *     MiValidatePagefilePageHash @ 0x140231FD8 (MiValidatePagefilePageHash.c)
 */

unsigned __int64 __fastcall MiMakeOutswappedPageResident(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned __int16 v5; // cx
  __int64 v6; // r15
  unsigned __int64 v7; // r12
  __int16 *v8; // rax
  unsigned int v9; // r8d
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rbx
  __int64 v23; // r14
  unsigned __int8 v24; // r15
  unsigned int v25; // esi
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // r9
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rax
  char v33; // al
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  _WORD *v36; // r8
  __int16 v37; // cx
  int v38; // esi
  struct _KEVENT *v39; // r14
  unsigned int v40; // esi
  __int64 Page; // rax
  __int64 v42; // r14
  __int64 TransitionPte; // rsi
  unsigned __int64 v44; // rax
  __int64 *v45; // r15
  unsigned __int64 v46; // rsi
  __int64 v47; // rdi
  unsigned __int64 v48; // r13
  ULONG v49; // edi
  __int64 v50; // r8
  char v51; // r10
  struct _KEVENT *v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // r15
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // r13
  NTSTATUS v60; // eax
  unsigned int v61; // edi
  unsigned __int8 CurrentIrql; // si
  NTSTATUS Status; // esi
  bool v64; // zf
  unsigned __int8 v65; // si
  unsigned int v66; // edi
  __int64 DemandZeroPte; // rax
  __int64 v68; // rbx
  __int64 v69; // rdx
  unsigned __int64 v70; // rbx
  unsigned __int64 v71; // rax
  unsigned __int64 *v72; // rdi
  unsigned __int8 v74[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v75; // [rsp+34h] [rbp-CCh] BYREF
  struct _KEVENT *v76; // [rsp+38h] [rbp-C8h]
  __int64 v77; // [rsp+40h] [rbp-C0h]
  __int64 v78; // [rsp+48h] [rbp-B8h]
  __int64 v79; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v80; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v81; // [rsp+60h] [rbp-A0h]
  void *v82; // [rsp+68h] [rbp-98h]
  _WORD *v83; // [rsp+70h] [rbp-90h] BYREF
  __int16 v84; // [rsp+78h] [rbp-88h]
  unsigned __int16 v85; // [rsp+7Ah] [rbp-86h]
  ULONG_PTR BugCheckParameter2[4]; // [rsp+80h] [rbp-80h] BYREF
  struct _KEVENT Event; // [rsp+A0h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-30h] BYREF
  LARGE_INTEGER StartingOffset; // [rsp+E0h] [rbp-20h] BYREF
  int v90; // [rsp+134h] [rbp+34h]
  char v91; // [rsp+13Dh] [rbp+3Dh]
  char v92; // [rsp+13Fh] [rbp+3Fh]
  struct _MDL MemoryDescriptorList; // [rsp+180h] [rbp+80h] BYREF
  unsigned __int64 v94; // [rsp+1B0h] [rbp+B0h]

  v5 = *(_WORD *)(a1 + 1452);
  v6 = a4;
  v77 = a4;
  v7 = a2;
  v81 = a2;
  v8 = MiPartitionIdToPointer(v5);
  v10 = v9;
  v78 = v9;
  v76 = (struct _KEVENT *)v8;
  while ( 1 )
  {
    do
    {
      do
      {
        v13 = v10 + MiMapPageInHyperSpaceWorker(v6, v74);
        v14 = *(_QWORD *)v13;
        if ( v13 + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(v12, v11)
          && (v14 & 1) != 0
          && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
        {
          v15 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 8 * ((v13 >> 3) & 0x1FF));
            if ( (v16 & 0x20) != 0 )
              v14 |= 0x20uLL;
            if ( (v16 & 0x42) != 0 )
              v14 |= 0x42uLL;
          }
        }
        MiUnmapPageInHyperSpaceWorker(v13, v74[0]);
      }
      while ( !(unsigned int)MiInvalidPteConforms(v14, v17) );
      if ( (v14 & 0x800) == 0 )
      {
        MI_INITIALIZE_COLOR_BASE(0LL, a5 + 1, (__int64)&v83);
        v36 = v83;
        v37 = v84;
        v38 = v85;
        v39 = v76;
        ++*v83;
        v40 = (unsigned __int16)(*v36 & v37) | v38;
        while ( 1 )
        {
          Page = MiGetPage((__int64)v39, v40, 0);
          v22 = Page;
          if ( Page != -1 )
            break;
          MiWaitForFreePage(v39);
        }
        v42 = 48 * Page - 0x58000000000LL;
        MiFinalizePageAttribute(v42, 1LL, 0);
        TransitionPte = MiMakeTransitionPte(v22, (v14 >> 5) & 0x1F);
        v44 = MiMapPageInHyperSpaceWorker(v6, v74);
        v45 = (__int64 *)(v78 + v44);
        *v45 = TransitionPte;
        if ( (unsigned __int64)(v45 + 0x12090482600LL) <= 0x7F8 )
          MiWritePteShadow(v45, TransitionPte);
        MiUnmapPageInHyperSpaceWorker((__int64)v45, v74[0]);
        if ( v7 == 0xFFFFF6FB7DBEDF68uLL )
        {
          MiInitializePfnForOtherProcess(v22, 0xFFFFF6FB7DBEDF68uLL, -1LL, 0);
          *(_QWORD *)(v42 + 40) ^= (*(_QWORD *)(v42 + 40) ^ v22) & 0xFFFFFFFFFLL;
        }
        else
        {
          MiInitializePfnForOtherProcess(v22, v7, v77, 0);
        }
        MiMarkPageActive(v42);
        v46 = v42 + 16;
        *(_QWORD *)(v42 + 16) = v14;
        v47 = (__int64)(v7 << 25) >> 16;
        v82 = (void *)(v47 & 0xFFFFFFFFFFFFF000uLL);
        v48 = ((unsigned __int64)(v47 & 0xFFF) + 0x1FFF) >> 12;
        v49 = v47 & 0xFFF;
        v80 = v48;
        v79 = v49;
        while ( 1 )
        {
          MiInitializeInPageSupport((__int64)BugCheckParameter2, 0);
          v92 |= 0x10u;
          v51 = 1;
          v52 = v76;
          v53 = (*(_QWORD *)v46 & 4) != 0
             && (unsigned __int16)*(_QWORD *)v46 >> 12 == HIDWORD(v76[43].Header.WaitListHead.Flink);
          LOBYTE(v53) = v91 & 0x7F | ((_BYTE)v53 << 7);
          v91 = v53;
          v54 = *(_QWORD *)v46;
          v55 = (unsigned __int8)HIBYTE(*(_WORD *)v46) >> 4;
          if ( v46 + 0x90482413000LL <= 0x7F8
            && (unsigned int)MiPteHasShadow(v53, v54)
            && ((unsigned __int8)v54 & (unsigned __int8)v51) != 0
            && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
          {
            v50 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v50 )
            {
              v56 = *(_QWORD *)(v50 + 8 * ((v46 >> 3) & 0x1FF));
              if ( (v56 & 0x20) != 0 )
                v54 |= 0x20uLL;
              if ( (v56 & 0x42) != 0 )
                v54 |= 0x42uLL;
            }
          }
          if ( (((unsigned __int8)v54 >> 2) & (unsigned __int8)v51) != 0 )
            v57 = (unsigned __int64)MiReverseSwizzleInvalidPte(v54, v54, v50, v52) >> 32;
          else
            LODWORD(v57) = 0;
          if ( v91 < 0 )
            v58 = ((unsigned __int64)(unsigned int)v55 << 60) | (unsigned int)v57;
          else
            v58 = (unsigned __int64)(unsigned int)v57 << 12;
          MemoryDescriptorList.Next = 0LL;
          MemoryDescriptorList.Size = 8 * (v48 + 6);
          MemoryDescriptorList.StartVa = v82;
          MemoryDescriptorList.MdlFlags = 16386;
          StartingOffset.QuadPart = v58;
          MemoryDescriptorList.ByteOffset = v49;
          MemoryDescriptorList.ByteCount = 4096;
          v90 = 4096;
          v94 = v22;
          v59 = *((_QWORD *)&v52[222].Header.WaitListHead.Blink + v55);
          if ( v91 < 0 )
          {
            IoStatusBlock.Status = 0;
            IoStatusBlock.Information = 0LL;
            v60 = SmPageRead(&StartingOffset, (int)&MemoryDescriptorList, (int)&Event, (__int64)&IoStatusBlock);
          }
          else
          {
            v60 = IoPageRead(
                    *(PFILE_OBJECT *)(v59 + 64),
                    &MemoryDescriptorList,
                    &StartingOffset,
                    &Event,
                    &IoStatusBlock);
          }
          if ( v60 < 0 )
          {
            IoStatusBlock.Information = 0LL;
            IoStatusBlock.Status = v60;
            KeSetEvent(&Event, 0, 0);
          }
          KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
          v61 = 0;
          v75 = 0;
          if ( v91 < 0 )
          {
            MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2, &v75);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v61 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v61);
              }
              while ( (*(_QWORD *)(v42 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) );
              v7 = v81;
            }
            if ( HIWORD(v75) )
              v75 = (unsigned __int16)v75 | ((HIWORD(v75) - 1) << 16);
            _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(CurrentIrql);
            LOBYTE(v61) = v75;
          }
          Status = IoStatusBlock.Status;
          if ( IoStatusBlock.Status >= 0 && *(_QWORD *)(v59 + 176) )
          {
            v92 |= 0x20u;
            Status = MiValidatePagefilePageHash(BugCheckParameter2);
          }
          if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
            MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
          if ( Status >= 0 )
            break;
          if ( Status != -1073741670 && Status != -1073741663 && Status != -1073741801 )
          {
            MmFlushAllFilesystemPages(1LL);
            KeBugCheckEx(0x77u, Status, Status, (unsigned int)v55, StartingOffset.LowPart);
          }
          if ( (v61 & 1) != 0 )
          {
            LOWORD(v48) = v80;
            v46 = v42 + 16;
            v64 = (v61 & 2) == 0;
            v49 = v79;
            if ( v64 )
              continue;
          }
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
          v49 = v79;
          v46 = v42 + 16;
          LOWORD(v48) = v80;
        }
        if ( IoStatusBlock.Information != 4096 )
        {
          MmFlushAllFilesystemPages(1LL);
          KeBugCheckEx(0x77u, 2uLL, Status, (unsigned int)v55, StartingOffset.LowPart);
        }
        v65 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v66 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v66 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v66);
          }
          while ( (*(_QWORD *)(v42 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) );
          v7 = v81;
        }
        DemandZeroPte = MiMakeDemandZeroPte(4LL);
        *(_BYTE *)(v42 + 34) |= 0x10u;
        *(_QWORD *)(v42 + 16) = DemandZeroPte;
        _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v65);
        goto LABEL_109;
      }
      v22 = ((unsigned __int64)MiReverseSwizzleInvalidPte(v19, v18, v20, v21) >> 12) & 0xFFFFFFFFFLL;
    }
    while ( !MI_IS_PFN(v22) );
    v23 = 48 * v22 - 0x58000000000LL;
    v24 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v25 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v25 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v25);
      }
      while ( (*(_QWORD *)(v23 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) );
    }
    v26 = MiMapPageInHyperSpaceWorker(v77, 0LL);
    v29 = v78 + v26;
    v30 = *(_QWORD *)(v78 + v26);
    if ( v78 + v26 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(v28, v27)
      && (v30 & 1) != 0
      && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
    {
      v31 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v31 )
      {
        v32 = *(_QWORD *)(v31 + 8 * ((v29 >> 3) & 0x1FF));
        if ( (v32 & 0x20) != 0 )
          v30 |= 0x20uLL;
        if ( (v32 & 0x42) != 0 )
          v30 |= 0x42uLL;
      }
    }
    MiUnmapPageInHyperSpaceWorker(v29, 0x11u);
    if ( v30 != v14 )
      goto LABEL_36;
    if ( (*(_BYTE *)(v23 + 34) & 7) == 6 )
      break;
    if ( (unsigned int)MiUnlinkPageFromList(48 * v22 - 0x58000000000LL, 0LL) )
    {
      v33 = *(_BYTE *)(v23 + 34);
      ++*(_WORD *)(v23 + 32);
      *(_BYTE *)(v23 + 34) = v33 & 0xF8 | 6;
      *(_QWORD *)(v23 + 24) = *(_QWORD *)(v23 + 24) & 0xC000000000000000uLL | 1;
      goto LABEL_39;
    }
    MiDiscardTransitionPte(48 * v22 - 0x58000000000LL);
LABEL_36:
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v24);
    v6 = v77;
    v10 = v78;
  }
  *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_39:
  v34 = MiCaptureDirtyBitToPfn(48 * v22 - 0x58000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v24);
  if ( !v34 )
    goto LABEL_110;
  v35 = v34;
LABEL_109:
  MiReleasePageFileInfo(v76, v35, 0);
LABEL_110:
  v68 = qword_1403D0230 ^ (qword_1403D0230 ^ (v22 << 12)) & 0xFFFFFFFFF000LL | 0x21;
  if ( v7 + 0x904C0000000LL <= 0x3FFFFFFF )
    v68 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v7 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && v7 >= 0xFFFFF68000000000uLL
    || v7 >= 0xFFFFF6FB40000000uLL
    && v7 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || v7 >= 0xFFFFF6FB7DA00000uLL
    && v7 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v68 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v7) )
    v68 |= 0x100uLL;
  v70 = v68 | 0x42;
  if ( v7 == 0xFFFFF6FB7DBEDF68uLL )
    v70 = ~v69 & (v70 | 0x8000000000000000uLL);
  v71 = MiMapPageInHyperSpaceWorker(v77, v74);
  v72 = (unsigned __int64 *)(v78 + v71);
  *v72 = v70;
  if ( (unsigned __int64)(v72 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(v72, v70);
  MiUnmapPageInHyperSpaceWorker((__int64)v72, v74[0]);
  return v70;
}

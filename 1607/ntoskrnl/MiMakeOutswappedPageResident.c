/*
 * XREFs of MiMakeOutswappedPageResident @ 0x1401DFC0C
 * Callers:
 *     MmInSwapProcess @ 0x140090CC4 (MmInSwapProcess.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMarkPageActive @ 0x140021054 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140021288 (MiInitializePfnForOtherProcess.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiIsRetryIoStatus @ 0x14008E8D8 (MiIsRetryIoStatus.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiInitializeInPageSupport @ 0x1400E5470 (MiInitializeInPageSupport.c)
 *     IoPageReadEx @ 0x1400E7D80 (IoPageReadEx.c)
 *     MiValidatePagefilePageHash @ 0x140115370 (MiValidatePagefilePageHash.c)
 *     SmPageRead @ 0x14011E6B4 (SmPageRead.c)
 *     MiIsPteInStore @ 0x1401228A0 (MiIsPteInStore.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     MiStoreFaultComplete @ 0x140123FE0 (MiStoreFaultComplete.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5C00 (MmFlushAllFilesystemPages.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 */

unsigned __int64 __fastcall MiMakeOutswappedPageResident(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned __int16 v5; // cx
  __int64 v6; // rbx
  struct _KEVENT *v8; // rax
  unsigned int v9; // r8d
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // r14
  unsigned __int8 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  char v27; // al
  unsigned __int64 v28; // rax
  _WORD *v29; // r8
  __int16 v30; // ax
  struct _KEVENT *v31; // r12
  unsigned int v32; // ebx
  __int64 Page; // rax
  __int64 v34; // r13
  __int64 TransitionPte; // rax
  __int64 v36; // rbx
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r9
  __int64 v44; // rbx
  unsigned __int64 v45; // rsi
  ULONG v46; // ebx
  BOOL IsPteInStore; // eax
  unsigned int *v48; // r8
  unsigned __int64 v49; // r12
  unsigned int v50; // r12d
  unsigned int PagingFileOffset; // eax
  unsigned __int8 v52; // r9
  char v53; // r9
  __int64 v54; // rax
  int v55; // eax
  char v56; // bl
  unsigned __int8 v57; // al
  NTSTATUS v58; // esi
  bool v59; // zf
  unsigned __int8 v60; // al
  __int64 v61; // r9
  unsigned __int64 v62; // r8
  unsigned __int64 v63; // rdx
  __int64 v64; // rdi
  __int64 v65; // r11
  unsigned __int64 v66; // rdi
  __int64 v67; // rax
  unsigned __int64 *v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r9
  unsigned __int8 v74[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v75; // [rsp+44h] [rbp-BCh] BYREF
  struct _KEVENT *v76; // [rsp+48h] [rbp-B8h]
  __int64 v77; // [rsp+50h] [rbp-B0h]
  __int64 v78; // [rsp+58h] [rbp-A8h]
  __int64 v79; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v80; // [rsp+68h] [rbp-98h]
  __int64 v81; // [rsp+70h] [rbp-90h] BYREF
  void *v82; // [rsp+78h] [rbp-88h]
  __int64 v83; // [rsp+80h] [rbp-80h]
  _WORD *v84; // [rsp+88h] [rbp-78h] BYREF
  __int16 v85; // [rsp+90h] [rbp-70h]
  unsigned __int16 v86; // [rsp+92h] [rbp-6Eh]
  ULONG_PTR BugCheckParameter2[4]; // [rsp+98h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+B8h] [rbp-48h] BYREF
  int v89; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v90; // [rsp+F0h] [rbp-10h]
  ULONG_PTR BugCheckParameter4[10]; // [rsp+F8h] [rbp-8h] BYREF
  int v92; // [rsp+14Ch] [rbp+4Ch]
  char v93; // [rsp+155h] [rbp+55h]
  char v94; // [rsp+157h] [rbp+57h]
  struct _MDL MemoryDescriptorList; // [rsp+198h] [rbp+98h] BYREF
  __int64 v96; // [rsp+1C8h] [rbp+C8h]

  v5 = *(_WORD *)(a1 + 1444);
  v6 = a4;
  v78 = a4;
  v8 = (struct _KEVENT *)MiPartitionIdToPointer(v5);
  v10 = v9;
  v77 = v9;
  v76 = v8;
  while ( 1 )
  {
    do
    {
      v11 = MiMapPageInHyperSpaceWorker(v6, v74, 0x80000000);
      v12 = MI_READ_PTE_LOCK_FREE(v10 + v11);
      LOBYTE(v13) = v74[0];
      v81 = v12;
      v14 = v12;
      MiUnmapPageInHyperSpaceWorker(v15, v13);
    }
    while ( !(unsigned int)MiInvalidPteConforms(v14) );
    if ( (v14 & 0x800) == 0 )
      break;
    v16 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v81);
    if ( MiIsPfnInline(v16) )
    {
      v17 = 48 * v16 - 0x58000000000LL;
      v18 = MiLockPageInline(v17);
      v19 = MiMapPageInHyperSpaceWorker(v6, 0LL, 0x80000000);
      v20 = MI_READ_PTE_LOCK_FREE(v77 + v19);
      LOBYTE(v21) = 17;
      v22 = v20;
      MiUnmapPageInHyperSpaceWorker(v23, v21);
      if ( v22 == v14 )
      {
        if ( (*(_BYTE *)(v17 + 34) & 7) == 6 )
        {
          *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_12:
          v28 = MiCaptureDirtyBitToPfn(v17);
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v18);
          if ( v28 )
            MiReleasePageFileInfo(v76, v28, 0);
          goto LABEL_47;
        }
        if ( (unsigned int)MiUnlinkPageFromList(v17, 0) )
        {
          v27 = *(_BYTE *)(v17 + 34);
          ++*(_WORD *)(v17 + 32);
          *(_BYTE *)(v17 + 34) = v27 & 0xF8 | 6;
          *(_QWORD *)(v17 + 24) = *(_QWORD *)(v17 + 24) & 0xC000000000000000uLL | 1;
          goto LABEL_12;
        }
        MiDiscardTransitionPte(v17, v24, v25, v26);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v18);
      v6 = v78;
      v10 = v77;
    }
  }
  MiInitializePageColorBase(0LL, a5 + 1, (__int64)&v84);
  v29 = v84;
  v30 = v85;
  v31 = v76;
  ++*v84;
  v32 = v86 | (unsigned __int16)(v30 & *v29);
  while ( 1 )
  {
    Page = MiGetPage((__int64)v31, v32, 0);
    v16 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(v31);
  }
  v34 = 48 * Page - 0x58000000000LL;
  MiFinalizePageAttribute(v34, 1u, 0);
  TransitionPte = MiMakeTransitionPte(v16, (v14 >> 5) & 0x1F);
  v36 = v78;
  v37 = TransitionPte;
  v38 = MiMapPageInHyperSpaceWorker(v78, v74, 0x80000000);
  v39 = (__int64 *)(v77 + v38);
  *v39 = v37;
  if ( (unsigned int)MiPteInShadowRange(v39, v40) )
    MiWritePteShadow(v42, v37);
  LOBYTE(v41) = v74[0];
  MiUnmapPageInHyperSpaceWorker(v43, v41);
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    MiInitializePfnForOtherProcess(v16, 0xFFFFF6FB7DBEDF68uLL, -1LL, 0);
    *(_QWORD *)(v34 + 40) ^= (v16 ^ *(_QWORD *)(v34 + 40)) & 0xFFFFFFFFFLL;
  }
  else
  {
    MiInitializePfnForOtherProcess(v16, a2, v36, 0);
  }
  MiMarkPageActive(v34);
  *(_QWORD *)(v34 + 16) = v14;
  v44 = (__int64)(a2 << 25) >> 16;
  v82 = (void *)(v44 & 0xFFFFFFFFFFFFF000uLL);
  v45 = ((unsigned __int64)(v44 & 0xFFF) + 0x1FFF) >> 12;
  v46 = v44 & 0xFFF;
  v80 = v45;
  v79 = v46;
  while ( 1 )
  {
    MiInitializeInPageSupport((ULONG_PTR)BugCheckParameter2, 0);
    v94 |= 0x10u;
    IsPteInStore = MiIsPteInStore((__int64)v31, *(_QWORD *)(v34 + 16));
    v49 = (unsigned __int64)*v48 >> 12;
    v93 = v93 & 0x7F | (IsPteInStore << 7);
    v50 = v49 & 0xF;
    PagingFileOffset = MiGetPagingFileOffset((__int64)v48);
    v53 = v52 >> 7;
    if ( v53 )
      BugCheckParameter4[0] = ((unsigned __int64)v50 << 60) | PagingFileOffset;
    else
      BugCheckParameter4[0] = (unsigned __int64)PagingFileOffset << 12;
    MemoryDescriptorList.Next = 0LL;
    MemoryDescriptorList.Size = 8 * (v45 + 6);
    MemoryDescriptorList.StartVa = v82;
    MemoryDescriptorList.MdlFlags = 16386;
    MemoryDescriptorList.ByteOffset = v46;
    MemoryDescriptorList.ByteCount = 4096;
    v92 = 4096;
    v96 = v16;
    v54 = *((_QWORD *)&v76[262].Header.WaitListHead.Blink + v50);
    v83 = v54;
    if ( v53 )
    {
      v89 = 0;
      v90 = 0LL;
      v55 = SmPageRead((union _MM_STORE_KEY *)BugCheckParameter4, (unsigned __int64)&MemoryDescriptorList);
    }
    else
    {
      v55 = IoPageReadEx(
              *(struct _FILE_OBJECT **)(v54 + 56),
              (__int64)&MemoryDescriptorList,
              BugCheckParameter4,
              (__int64)&Event,
              (__int64)&v89,
              0,
              0LL);
    }
    if ( v55 < 0 )
    {
      v89 = v55;
      v90 = 0LL;
      KeSetEvent(&Event, 0, 0);
    }
    KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
    v56 = 0;
    v75 = 0;
    if ( v93 < 0 )
    {
      MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2, &v75);
      v57 = MiLockPageInline(v34);
      if ( HIWORD(v75) )
        v75 = (unsigned __int16)v75 | ((HIWORD(v75) - 1) << 16);
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v57);
      v56 = v75;
    }
    v58 = v89;
    if ( v89 >= 0 && *(_QWORD *)(v83 + 216) )
    {
      v94 |= 0x20u;
      v58 = MiValidatePagefilePageHash((__int64)BugCheckParameter2);
    }
    if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
      MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
    if ( v58 >= 0 )
      break;
    if ( !MiIsRetryIoStatus(v58, 0x1000uLL) )
    {
      MmFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x77u, v58, v58, v50, LODWORD(BugCheckParameter4[0]));
    }
    if ( (v56 & 1) != 0 )
    {
      v31 = v76;
      v59 = (v56 & 2) == 0;
      v46 = v79;
      LOWORD(v45) = v80;
      if ( v59 )
        continue;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    v46 = v79;
    v31 = v76;
    LOWORD(v45) = v80;
  }
  if ( v90 != 4096 )
  {
    MmFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, 2uLL, v58, v50, LODWORD(BugCheckParameter4[0]));
  }
  v60 = MiLockPageInline(v34);
  *(_QWORD *)(v34 + 16) = MiMakeDemandZeroPte(4LL, *(_QWORD *)(v34 + 16), v60, v61);
  *(_BYTE *)(v34 + 34) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v62);
  MiReleasePageFileInfo(v76, v63, 0);
  v81 = v37;
LABEL_47:
  v64 = qword_1403A9360 ^ (qword_1403A9360 ^ (v16 << 12)) & 0xFFFFFFFFF000LL | 0x21;
  if ( a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL )
    v64 &= ~qword_1403A9350 & 0x7FFFFFFFFFFFFFFFLL;
  if ( a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL
    || a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB5FFFFFF8uLL
    || a2 >= 0xFFFFF6FB7DA00000uLL && a2 <= 0xFFFFF6FB7DAFFFF8uLL
    || a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v64 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a2) )
    v64 |= 0x100uLL;
  v66 = v64 | 0x42;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
    v66 = ~v65 & (v66 | 0x8000000000000000uLL);
  v67 = MiMapPageInHyperSpaceWorker(v78, v74, 0x80000000);
  v68 = (unsigned __int64 *)(v77 + v67);
  *v68 = v66;
  if ( (unsigned int)MiPteInShadowRange(v68, v69) )
    MiWritePteShadow(v71, v66);
  LOBYTE(v70) = v74[0];
  MiUnmapPageInHyperSpaceWorker(v72, v70);
  return v66;
}

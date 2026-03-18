/*
 * XREFs of MiMakeOutswappedPageResident @ 0x1401CFB54
 * Callers:
 *     MmInSwapProcess @ 0x1400356E8 (MmInSwapProcess.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiMarkPageActive @ 0x140018440 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140018484 (MiInitializePfnForOtherProcess.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiInitializeInPageSupport @ 0x140070E90 (MiInitializeInPageSupport.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     IoPageRead @ 0x140077720 (IoPageRead.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     MiValidatePagefilePageHash @ 0x140108248 (MiValidatePagefilePageHash.c)
 *     SmPageRead @ 0x140109CEC (SmPageRead.c)
 *     MiStoreFaultComplete @ 0x1401149E4 (MiStoreFaultComplete.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     MI_IS_PTE_IN_STORE_EX @ 0x140123ABC (MI_IS_PTE_IN_STORE_EX.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MmFlushAllFilesystemPages @ 0x1401D5180 (MmFlushAllFilesystemPages.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 */

unsigned __int64 __fastcall MiMakeOutswappedPageResident(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned __int16 v5; // cx
  unsigned int v7; // r8d
  int *v8; // r14
  __int64 v9; // r9
  __int64 *v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r9
  ULONG_PTR v15; // r15
  unsigned __int8 v16; // r13
  unsigned __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  char v22; // al
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  _WORD *v25; // r8
  __int16 v26; // ax
  unsigned int v27; // ebx
  __int64 Page; // rax
  __int64 v29; // r14
  __int64 v30; // rbx
  unsigned __int64 v31; // rax
  __int64 *v32; // r15
  unsigned __int64 *v33; // r15
  __int64 v34; // r13
  unsigned __int64 v35; // rsi
  ULONG v36; // r13d
  BOOL v37; // eax
  char v38; // bl
  unsigned int v39; // r15d
  unsigned int v40; // eax
  __int64 v41; // rax
  NTSTATUS v42; // eax
  char v43; // bl
  unsigned __int8 v44; // al
  int Status; // esi
  unsigned __int8 v46; // al
  __int64 v47; // rbx
  __int64 v48; // rdi
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rax
  unsigned __int64 *v51; // rbx
  unsigned __int8 v53[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v54; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v55; // [rsp+38h] [rbp-C8h]
  int *v56; // [rsp+40h] [rbp-C0h]
  __int64 v57; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v58; // [rsp+50h] [rbp-B0h]
  __int64 v59; // [rsp+58h] [rbp-A8h]
  _WORD *v60; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v61; // [rsp+68h] [rbp-98h]
  unsigned __int16 v62; // [rsp+6Ah] [rbp-96h]
  void *v63; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2[4]; // [rsp+78h] [rbp-88h] BYREF
  struct _KEVENT Event; // [rsp+98h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-38h] BYREF
  LARGE_INTEGER StartingOffset; // [rsp+D8h] [rbp-28h] BYREF
  int v68; // [rsp+12Ch] [rbp+2Ch]
  char v69; // [rsp+135h] [rbp+35h]
  char v70; // [rsp+137h] [rbp+37h]
  struct _MDL MemoryDescriptorList; // [rsp+178h] [rbp+78h] BYREF
  __int64 v72; // [rsp+1A8h] [rbp+A8h]
  int v73; // [rsp+290h] [rbp+190h]

  v5 = *(_WORD *)(a1 + 1460);
  v73 = a5 + 1;
  v55 = a4;
  v56 = MiPartitionIdToPointer(v5);
  v57 = v7;
  v8 = v56;
  v10 = (__int64 *)(v7 + MiMapPageInHyperSpaceWorker(v9, v53, 0x80000000));
  v11 = MI_READ_PTE_LOCK_FREE(v10);
  MiUnmapPageInHyperSpaceWorker((__int64)v10, v53[0]);
  v12 = v55;
  if ( (v11 & 0x800) == 0 )
  {
LABEL_15:
    MI_INITIALIZE_COLOR_BASE(0LL, v73, (__int64)&v60);
    v25 = v60;
    v26 = v61;
    ++*v60;
    v27 = v62 | (unsigned __int16)(v26 & *v25);
    while ( 1 )
    {
      Page = MiGetPage((__int64)v8, v27, 0);
      v13 = Page;
      if ( Page != -1 )
        break;
      MiWaitForFreePage(v8);
    }
    v29 = 48 * Page - 0x58000000000LL;
    MiFinalizePageAttribute(v29, 1LL, 0);
    v30 = 32 * (((v13 & 0xFFFFFFFFFLL) << 7) | (v11 >> 5) & 0x1F | 0x40);
    v31 = MiMapPageInHyperSpaceWorker(v12, v53, 0x80000000);
    v32 = (__int64 *)(v57 + v31);
    *v32 = v30;
    if ( (unsigned int)MiPteInShadowRange(v32) )
      MiWritePteShadow(v32, v30);
    MiUnmapPageInHyperSpaceWorker((__int64)v32, v53[0]);
    if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
    {
      MiInitializePfnForOtherProcess(v13, 0xFFFFF6FB7DBEDF68uLL, -1LL, 0);
      *(_QWORD *)(v29 + 40) = v13 & 0xFFFFFFFFFLL | *(_QWORD *)(v29 + 40) & 0xFFFFFFF000000000uLL;
    }
    else
    {
      MiInitializePfnForOtherProcess(v13, a2, v55, 0);
    }
    MiMarkPageActive(v29);
    v33 = (unsigned __int64 *)(v29 + 16);
    *(_QWORD *)(v29 + 16) = v11;
    v34 = (__int64)(a2 << 25) >> 16;
    v63 = (void *)(v34 & 0xFFFFFFFFFFFFF000uLL);
    v35 = ((unsigned __int64)(v34 & 0xFFF) + 0x1FFF) >> 12;
    v58 = v35;
    v36 = v34 & 0xFFF;
    while ( 1 )
    {
      MiInitializeInPageSupport((ULONG_PTR)BugCheckParameter2, 0);
      v70 |= 0x10u;
      v37 = MI_IS_PTE_IN_STORE_EX((__int64)v56, *v33);
      v38 = (unsigned __int8)(v69 & 0x7F | (v37 << 7)) >> 7;
      v69 = v69 & 0x7F | (v37 << 7);
      v39 = (*(_DWORD *)v33 >> 1) & 0xF;
      v40 = MI_GET_PAGING_FILE_OFFSET(v29 + 16);
      if ( v38 )
        StartingOffset.QuadPart = ((unsigned __int64)v39 << 60) | v40;
      else
        StartingOffset.QuadPart = (unsigned __int64)v40 << 12;
      MemoryDescriptorList.Next = 0LL;
      MemoryDescriptorList.Size = 8 * (v35 + 6);
      MemoryDescriptorList.StartVa = v63;
      MemoryDescriptorList.MdlFlags = 16386;
      MemoryDescriptorList.ByteOffset = v36;
      MemoryDescriptorList.ByteCount = 4096;
      v68 = 4096;
      v72 = v13;
      v41 = *(_QWORD *)&v56[2 * v39 + 1432];
      v59 = v41;
      if ( v38 )
      {
        IoStatusBlock.Status = 0;
        IoStatusBlock.Information = 0LL;
        v42 = SmPageRead((union _MM_STORE_KEY *)&StartingOffset, (int)&MemoryDescriptorList);
      }
      else
      {
        v42 = IoPageRead(*(PFILE_OBJECT *)(v41 + 56), &MemoryDescriptorList, &StartingOffset, &Event, &IoStatusBlock);
      }
      if ( v42 < 0 )
      {
        IoStatusBlock.Status = v42;
        IoStatusBlock.Information = 0LL;
        KeSetEvent(&Event, 0, 0);
      }
      KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
      v43 = 0;
      v54 = 0;
      if ( v69 < 0 )
      {
        MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2, &v54);
        v44 = MiLockPageInline(v29);
        if ( HIWORD(v54) )
          v54 = (unsigned __int16)v54 | ((HIWORD(v54) - 1) << 16);
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v44);
        v43 = v54;
      }
      Status = IoStatusBlock.Status;
      if ( IoStatusBlock.Status >= 0 && *(_QWORD *)(v59 + 216) )
      {
        v70 |= 0x20u;
        Status = MiValidatePagefilePageHash((__int64)BugCheckParameter2);
      }
      if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
        MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
      if ( Status >= 0 )
        break;
      if ( Status != -1073741670 && Status != -1073741663 && Status != -1073741801 )
      {
        MmFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x77u, Status, Status, v39, StartingOffset.LowPart);
      }
      if ( (v43 & 1) != 0 )
      {
        LOWORD(v35) = v58;
        v33 = (unsigned __int64 *)(v29 + 16);
        if ( (v43 & 2) == 0 )
          continue;
      }
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
      LOWORD(v35) = v58;
      v33 = (unsigned __int64 *)(v29 + 16);
    }
    if ( IoStatusBlock.Information != 4096 )
    {
      MmFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x77u, 2uLL, Status, v39, StartingOffset.LowPart);
    }
    v46 = MiLockPageInline(v29);
    v24 = *(_QWORD *)(v29 + 16);
    *(_BYTE *)(v29 + 34) |= 0x10u;
    *(_QWORD *)(v29 + 16) = 128LL;
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v46);
    goto LABEL_50;
  }
  while ( 1 )
  {
    v13 = (v11 >> 12) & 0xFFFFFFFFFLL;
    if ( MI_IS_PFN(v13) )
      break;
LABEL_8:
    v20 = MiMapPageInHyperSpaceWorker(v12, v53, 0x80000000);
    v21 = v57 + v20;
    v11 = MI_READ_PTE_LOCK_FREE((__int64 *)(v57 + v20));
    MiUnmapPageInHyperSpaceWorker(v21, v53[0]);
    if ( (v11 & 0x800) == 0 )
    {
      v8 = v56;
      goto LABEL_15;
    }
  }
  v15 = 48 * v13 - v14;
  v16 = MiLockPageInline(v15);
  v17 = MiMapPageInHyperSpaceWorker(v55, 0LL, 0x80000000);
  v18 = v57 + v17;
  v19 = MI_READ_PTE_LOCK_FREE((__int64 *)(v57 + v17));
  MiUnmapPageInHyperSpaceWorker(v18, 0x11u);
  if ( v19 != v11 )
  {
LABEL_7:
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = v55;
    __writecr8(v16);
    goto LABEL_8;
  }
  if ( (*(_BYTE *)(v15 + 34) & 7) != 6 )
  {
    if ( (unsigned int)MiUnlinkPageFromList(v15, 0) )
    {
      v22 = *(_BYTE *)(v15 + 34);
      ++*(_WORD *)(v15 + 32);
      *(_BYTE *)(v15 + 34) = v22 & 0xF8 | 6;
      *(_QWORD *)(v15 + 24) = *(_QWORD *)(v15 + 24) & 0xC000000000000000uLL | 1;
      goto LABEL_12;
    }
    MiDiscardTransitionPte(v15);
    goto LABEL_7;
  }
  *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_12:
  v23 = MiCaptureDirtyBitToPfn(v15);
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v16);
  if ( !v23 )
    goto LABEL_51;
  v24 = v23;
LABEL_50:
  MiReleasePageFileInfo((__int64)v56, v24, 0);
LABEL_51:
  v47 = qword_140381310;
  v48 = qword_140381320 ^ (qword_140381320 ^ (v13 << 12)) & 0xFFFFFFFFF000LL | 0x21;
  if ( a2 + 0x904C0000000LL <= 0x3FFFFFFF )
    v48 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
  if ( a2 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && a2 >= 0xFFFFF68000000000uLL
    || a2 >= 0xFFFFF6FB40000000uLL
    && a2 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || a2 >= 0xFFFFF6FB7DA00000uLL
    && a2 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v48 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a2) )
    v48 |= 0x100uLL;
  v49 = v48 | 0x42;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
    v49 = ~v47 & (v49 | 0x8000000000000000uLL);
  v50 = MiMapPageInHyperSpaceWorker(v55, v53, 0x80000000);
  v51 = (unsigned __int64 *)(v57 + v50);
  *v51 = v49;
  if ( (unsigned int)MiPteInShadowRange(v51) )
    MiWritePteShadow(v51, v49);
  MiUnmapPageInHyperSpaceWorker((__int64)v51, v53[0]);
  return v49;
}

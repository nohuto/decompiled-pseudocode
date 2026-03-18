/*
 * XREFs of MiWaitForInPageComplete @ 0x140039E00
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x140038890 (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 * Callees:
 *     MiDeleteControlArea @ 0x14000BB08 (MiDeleteControlArea.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140030778 (FsRtlIsTotalDeviceFailure.c)
 *     MiValidateInPage @ 0x1400390F0 (MiValidateInPage.c)
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     RtlAvlRemoveNode @ 0x14006BDC0 (RtlAvlRemoveNode.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     PfHardFaultLog @ 0x1400DF278 (PfHardFaultLog.c)
 *     MiPrefetchRestOfCluster @ 0x1400F093C (MiPrefetchRestOfCluster.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     MiValidatePagefilePageHash @ 0x140108248 (MiValidatePagefilePageHash.c)
 *     MiStoreFaultComplete @ 0x1401149E4 (MiStoreFaultComplete.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiExceptionForMappedVa @ 0x1401CE990 (MiExceptionForMappedVa.c)
 *     MiRetardMdl @ 0x1401D2DEC (MiRetardMdl.c)
 *     MmFlushAllFilesystemPages @ 0x1401D5180 (MmFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiWaitForInPageComplete(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  unsigned __int8 *v5; // rbp
  ULONG_PTR v6; // r14
  __int64 v7; // r12
  ULONG_PTR v11; // rax
  ULONG_PTR v12; // rdi
  __int64 v13; // r9
  unsigned int v14; // ebx
  unsigned __int64 v15; // rax
  int v16; // eax
  bool v17; // zf
  int v18; // ecx
  char v19; // bl
  NTSTATUS v20; // r12d
  ULONG_PTR v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rbx
  int v25; // eax
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  _QWORD *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  _BYTE *v32; // rbx
  _QWORD *v33; // r14
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rcx
  unsigned __int64 v38; // r9
  int v39; // r10d
  int v40; // r11d
  int v41; // r8d
  int v42; // r14d
  unsigned __int64 v43; // rdx
  ULONG_PTR v44; // rbx
  __int64 v45; // rdi
  __int64 v46; // r15
  unsigned __int8 v47; // al
  _BYTE v48[4]; // [rsp+90h] [rbp+0h] BYREF

  v5 = (unsigned __int8 *)((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL);
  v6 = BugCheckParameter2 + 256;
  v7 = *(_QWORD *)(BugCheckParameter2 + 240);
  *((_QWORD *)v5 + 8) = *(_QWORD *)(BugCheckParameter2 + 224);
  *((_QWORD *)v5 + 3) = *(_QWORD *)(BugCheckParameter2 + 216);
  v11 = *(_QWORD *)(BugCheckParameter2 + 248);
  *((_DWORD *)v5 + 2) = 0;
  *((_QWORD *)v5 + 9) = v7;
  if ( v11 )
    v6 = v11;
  v12 = -1LL;
  v13 = 0x2AAAAAAAAAAAAAABLL;
  *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = -1LL;
  *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v6 + 48;
  if ( (*(_QWORD *)(v7 + 8) & 0x8000000000000000uLL) == 0
    && (v7 + 0x58000000000LL) / 48 < (unsigned __int64)qword_1402FE758 )
  {
    v37 = *(_QWORD *)(v7 + 40) >> 40;
    LOWORD(v37) = v37 & 0x3FF;
    v39 = MiPartitionIdToPointer(v37);
    v41 = 1074003968;
    if ( (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink == KeSwapProcessOrStack )
      v41 = 1074003976;
    MiFindContiguousPages(
      v39,
      v40 + 1,
      qword_1402FE758,
      0,
      1LL,
      *(unsigned __int8 *)(v7 + 34) >> 6,
      (v38 >> 58) & 0x3F,
      0x80000000,
      v41,
      (__int64)(v5 + 40));
  }
  if ( (a4 & 1) != 0 )
  {
    v32 = (_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v32 == 2 )
    {
      if ( a3 )
        MiPrefetchRestOfCluster(BugCheckParameter2, v32, a3, v13);
    }
  }
  KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 32), WrPageIn, 0, 0, 0LL);
  if ( a3 && (*(_BYTE *)(a3 + 219) & 0xC0) == 0xC0 && !*(_QWORD *)(a3 + 240) )
    KiUnstackDetachProcess(BugCheckParameter2 + 104, 0LL);
  if ( *(__int64 *)(v7 + 8) >= 0
    && (((unsigned int)HIDWORD(*(_QWORD *)(v7 + 40)) >> 8) & 0x3FF) != 0
    && *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) == -1LL )
  {
    *(_DWORD *)(BugCheckParameter2 + 80) = -1073741670;
    *(_QWORD *)(BugCheckParameter2 + 88) = 0LL;
  }
  if ( (*(_WORD *)(v6 + 10) & 0x200) != 0 )
  {
    MiRetardMdl(v6);
    *(_DWORD *)(BugCheckParameter2 + 80) = -1073741670;
    *(_QWORD *)(BugCheckParameter2 + 88) = 0LL;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 189) & 8) != 0 )
  {
    v36 = *(_QWORD *)(BugCheckParameter2 + 320);
    if ( v36 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v36 + 232), (PKLOCK_QUEUE_HANDLE)(v5 + 88));
      RtlAvlRemoveNode(v36 + 248, BugCheckParameter2 + 336);
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v5 + 88));
    }
  }
  v14 = *(_DWORD *)(BugCheckParameter2 + 180);
  v15 = ((*(_DWORD *)(v6 + 44) + *(_DWORD *)(v6 + 32)) & 0xFFF) + *(unsigned int *)(v6 + 40) + 4095LL;
  *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = v14;
  *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
  *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v6 + 8 * ((v15 >> 12) + 5);
  if ( *(char *)(BugCheckParameter2 + 189) < 0 )
    MiStoreFaultComplete(BugCheckParameter2);
  if ( *(_QWORD *)(BugCheckParameter2 + 200) )
  {
    if ( *(int *)(BugCheckParameter2 + 80) >= 0 )
    {
      v25 = MiValidateInPage(BugCheckParameter2);
      *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v25;
      if ( v25 == -1073740748 )
        *(_BYTE *)(BugCheckParameter2 + 191) |= 8u;
    }
    v26 = *(_QWORD *)(BugCheckParameter2 + 200);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 104), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      MiDeleteControlArea(v26);
  }
  else if ( *(int *)(BugCheckParameter2 + 80) >= 0 && (*(_BYTE *)(BugCheckParameter2 + 191) & 0x20) != 0 )
  {
    *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = MiValidatePagefilePageHash(BugCheckParameter2);
  }
  v16 = *(_DWORD *)(BugCheckParameter2 + 80);
  v17 = (*(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 8) & 1) == 0;
  v18 = *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 8) & 1;
  *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v18;
  *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v16;
  if ( v17 )
  {
    __incgsdword(0x2E24u);
    __addgsdword(0x2E20u, ((v14 & 0xFFF) != 0) + (v14 >> 12));
    if ( a3 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 189) & 4) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a3 + 176));
    }
  }
  v19 = 2;
  if ( !v18 )
    v19 = 0;
  if ( *a5 )
    PfHardFaultLog(*a5, v19 & 3);
  v17 = (*(_BYTE *)(v6 + 10) & 1) == 0;
  *(_DWORD *)a5 = v19 & 3;
  if ( !v17 )
    MmUnmapLockedPages(*(PVOID *)(v6 + 24), (PMDL)v6);
  v20 = *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  *(_DWORD *)(BugCheckParameter2 + 184) = -1;
  if ( v20 >= 0 )
  {
    v21 = *(_QWORD *)(BugCheckParameter2 + 88);
    v22 = *(unsigned int *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    if ( v21 != v22 )
    {
      if ( v21 || (*(_BYTE *)(BugCheckParameter2 + 189) & 4) == 0 )
      {
        if ( (*(_BYTE *)(BugCheckParameter2 + 191) & 0x10) != 0
          && !*(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
        {
          KeBugCheckEx(
            0x7Au,
            4uLL,
            v21,
            BugCheckParameter2,
            *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
        }
        v27 = ((v21
              + ((*(_DWORD *)(v6 + 44) + *(_DWORD *)(v6 + 32)) & 0xFFF)
              - (unsigned __int64)(unsigned int)(v22 - *(_DWORD *)(v6 + 40))
              + 4095) >> 12)
            + 5;
        *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = *(_DWORD *)(BugCheckParameter2 + 88) & 0xFFF;
        v28 = (_QWORD *)(v6 + 8 * v27);
        *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v28;
        if ( (v21 & 0xFFF) != 0 )
        {
          v29 = MiMapPageInHyperSpaceWorker(*v28, (unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL, 0x80000000LL);
          v30 = *(unsigned int *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
          v31 = v30 + v29;
          memset((void *)(v30 + v29), 0, (unsigned int)(4096 - v30));
          MiUnmapPageInHyperSpaceWorker(v31, *v5, 0x80000000LL);
          v28 = *(_QWORD **)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        }
        if ( (unsigned __int64)(v28 + 1) <= *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) )
          *(_DWORD *)(BugCheckParameter2 + 184) = ((__int64)((__int64)v28 - v6 - 48) >> 3) + 1;
      }
      else
      {
        v20 = -1073741801;
      }
    }
    if ( *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 4) != -1073741761 )
      goto LABEL_30;
    v42 = 0;
LABEL_83:
    v43 = *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    if ( v43 > (unsigned __int64)MmHighestUserAddress
      && (!qword_1402FE940 || v43 < qword_1402FE940 || v43 >= qword_1402FE940 + (qword_1402FE920 << 21))
      && !(unsigned int)MiExceptionForMappedVa(*(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18)) )
    {
      if ( !v42 )
      {
        v44 = *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
        if ( (unsigned __int8)MiIsAddressValid(v44) == 1 )
          v12 = MI_READ_PTE_LOCK_FREE(v44);
        MmFlushAllFilesystemPages(1LL);
        if ( *(int *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 4) < 0 )
          v20 = *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        KeBugCheckEx(0x7Au, v44, v20, v12, *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
      }
      if ( *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 4) != -1073741761 )
        v20 = -1073741801;
    }
    goto LABEL_30;
  }
  if ( v20 != -1073741807 )
  {
    if ( v20 == -2147483626 )
      goto LABEL_30;
    if ( v20 == -1073741670
      || v20 == -1073741663
      || v20 == -1073741801
      || *(_DWORD *)(v6 + 40) > 0x1000u && !FsRtlIsTotalDeviceFailure(v20) )
    {
      v42 = 1;
      if ( !dword_1402FF214
        && (!*(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)
         || (*(_BYTE *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 8) & 2) != 0) )
      {
        dword_1402FF214 = 32;
      }
    }
    else
    {
      v42 = 0;
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 189) & 4) != 0 )
    {
      v20 = -1073741801;
      goto LABEL_30;
    }
    goto LABEL_83;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 191) & 0x10) != 0 )
    KeBugCheckEx(
      0x7Au,
      3uLL,
      0xFFFFFFFFC0000011uLL,
      BugCheckParameter2,
      *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
  v33 = *(_QWORD **)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
  v34 = 1LL;
  v35 = (unsigned __int64)(*(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) - (_QWORD)v33 + 8LL) >> 3;
  if ( (unsigned __int64)v33 > *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) )
    v35 = 0LL;
  if ( v35 )
  {
    do
    {
      MiZeroPhysicalPage(*v33, 3LL, *(unsigned __int8 *)(48LL * *v33 - 0x57FFFFFFFDELL) >> 6);
      ++v34;
      ++v33;
    }
    while ( v34 <= v35 );
  }
  v20 = 0;
LABEL_30:
  v23 = *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  if ( v23 != -1 )
  {
    v45 = *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
    MiCopyPage(
      *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
      (v45 + 0x58000000000LL) / 48,
      0LL,
      1LL);
    v46 = 48 * v23 - 0x58000000000LL;
    *(_QWORD *)(v46 + 16) = 128LL;
    *(_QWORD *)(v46 + 16) = *(_DWORD *)(v45 + 16) & 0x1000000 | 0x80LL;
    if ( ((*(_QWORD *)(v46 + 40) >> 54) & 7) == 3 )
    {
      v47 = MiLockPageInline(48 * v23 - 0x58000000000LL);
      *(_QWORD *)(v46 + 8) = *(_QWORD *)(v45 + 8);
      _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v47);
    }
  }
  *(_DWORD *)(BugCheckParameter2 + 80) = v20;
  return MiFinishHardFault((PVOID)BugCheckParameter2, (__int64)(v5 + 8));
}

/*
 * XREFs of MiWaitForInPageComplete @ 0x140087120
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x14008620C (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x140087FE0 (MiIssueHardFault.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140082458 (FsRtlIsTotalDeviceFailure.c)
 *     PfHardFaultLog @ 0x140083758 (PfHardFaultLog.c)
 *     MiDeleteControlArea @ 0x140083920 (MiDeleteControlArea.c)
 *     MiValidateInPage @ 0x140087A20 (MiValidateInPage.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiPrefetchRestOfCluster @ 0x1400DEAF8 (MiPrefetchRestOfCluster.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiStoreFaultComplete @ 0x14014AC94 (MiStoreFaultComplete.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiExceptionForMappedVa @ 0x14020DC94 (MiExceptionForMappedVa.c)
 *     MiRetardMdl @ 0x14021414C (MiRetardMdl.c)
 *     MmFlushAllFilesystemPages @ 0x140217008 (MmFlushAllFilesystemPages.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiValidatePagefilePageHash @ 0x140231FD8 (MiValidatePagefilePageHash.c)
 */

__int64 __fastcall MiWaitForInPageComplete(_QWORD *BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4, _QWORD **a5)
{
  unsigned __int64 v5; // rbp
  _QWORD *v6; // r15
  __int64 v7; // r11
  unsigned int v8; // esi
  ULONG_PTR v9; // r14
  __int64 v10; // r12
  _QWORD *v12; // rax
  ULONG_PTR PteShadow; // rdi
  __int64 *v14; // r13
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  __int16 *v17; // r10
  __int64 v18; // r11
  unsigned int v19; // ecx
  _BYTE *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r15
  int v28; // eax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // r12
  bool v33; // cc
  __int64 *v34; // r15
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  char v38; // dl
  NTSTATUS v39; // r15d
  bool v40; // zf
  __int64 v41; // rdx
  int v42; // ebx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // rcx
  _QWORD *v46; // r12
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rbx
  int v50; // ebx
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // rdi
  ULONG_PTR v53; // r12
  ULONG_PTR *v54; // rsi
  __int64 v55; // rbx
  __int64 v56; // r12
  __int64 v57; // rbx
  __int64 DemandZeroPte; // rax
  __int64 v59; // rcx
  unsigned __int8 CurrentIrql; // di
  _BYTE v62[4]; // [rsp+90h] [rbp+0h] BYREF

  v5 = (unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL;
  v6 = BugCheckParameter2 + 32;
  v7 = BugCheckParameter2[30];
  v8 = 0;
  *(_QWORD *)(v5 + 72) = BugCheckParameter2[28];
  v9 = (ULONG_PTR)BugCheckParameter2;
  v10 = a3;
  *(_QWORD *)(v5 + 40) = BugCheckParameter2[27];
  v12 = (_QWORD *)BugCheckParameter2[31];
  *(_DWORD *)(v5 + 4) = 0;
  *(_QWORD *)(v5 + 64) = v7;
  if ( v12 )
    v6 = v12;
  PteShadow = -1LL;
  *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v6;
  *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = -1LL;
  v14 = v6 + 6;
  *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v6 + 6;
  if ( (*(_QWORD *)(v7 + 8) & 0x8000000000000000uLL) == 0
    && (v7 + 0x58000000000LL) / 48 < (unsigned __int64)qword_14034EC10 )
  {
    v17 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v7 + 40)) >> 8) & 0x3FF);
    v19 = 1074003968;
    if ( (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink == KeSwapProcessOrStack )
      v19 = 1074003976;
    MiFindContiguousPages(
      v17,
      v16 + 1,
      qword_14034EC10,
      0LL,
      1uLL,
      *(unsigned __int8 *)(v18 + 34) >> 6,
      (v15 >> 58) & 0x3F,
      0x80000000,
      v19,
      (unsigned __int64 *)(v5 + 48));
  }
  if ( (a4 & 1) != 0 )
  {
    v20 = (_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v20 == 2 )
    {
      if ( v10 )
        MiPrefetchRestOfCluster(v9, v20, v10);
    }
  }
  KeWaitForSingleObject((PVOID)(v9 + 32), WrPageIn, 0, 0, 0LL);
  if ( v10 && (*(_BYTE *)(v10 + 219) & 0xC0) == 0xC0 && !*(_QWORD *)(v10 + 240) )
    KiUnstackDetachProcess(v9 + 104, 0LL);
  v21 = *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  if ( *(__int64 *)(v21 + 8) >= 0
    && (*(_QWORD *)(v21 + 40) & 0x3FF0000000000LL) != 0
    && *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) == -1LL )
  {
    *(_DWORD *)(v9 + 80) = -1073741670;
    *(_QWORD *)(v9 + 88) = 0LL;
  }
  if ( (*((_WORD *)v6 + 5) & 0x200) != 0 )
  {
    MiRetardMdl(v6);
    *(_DWORD *)(v9 + 80) = -1073741670;
    *(_QWORD *)(v9 + 88) = 0LL;
  }
  if ( (*(_BYTE *)(v9 + 189) & 8) != 0 )
  {
    v22 = *(_QWORD *)(v9 + 320);
    if ( v22 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v22 + 192), (PKLOCK_QUEUE_HANDLE)(v5 + 80));
      RtlAvlRemoveNode(v22 + 208, v9 + 336);
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v5 + 80));
    }
  }
  v23 = *((unsigned int *)v6 + 10);
  v24 = (*((_DWORD *)v6 + 11) + *((_DWORD *)v6 + 8)) & 0xFFF;
  v25 = *(_DWORD *)(v9 + 180);
  *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = v25;
  v26 = v23 + 4095 + v24;
  *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  LOBYTE(v23) = *(_BYTE *)(v9 + 189);
  v27 = (unsigned __int64)&v6[(v26 >> 12) + 5];
  *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v27;
  if ( (v23 & 0x80u) != 0LL )
    MiStoreFaultComplete(v9);
  if ( *(_QWORD *)(v9 + 200) )
  {
    if ( *(int *)(v9 + 80) >= 0 )
    {
      v28 = MiValidateInPage(v9);
      *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v28;
      if ( v28 == -1073740748 )
        *(_BYTE *)(v9 + 191) |= 8u;
    }
    v29 = *(_QWORD *)(v9 + 200);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 104), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      MiDeleteControlArea(v29);
  }
  else
  {
    if ( *(int *)(v9 + 80) >= 0 && (*(_BYTE *)(v9 + 191) & 0x20) != 0 )
      *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MiValidatePagefilePageHash(v9);
    if ( (MiFlags & 0x30000) != 0 && (MiFlags & 0x40000) == 0 )
    {
      v30 = *(_QWORD *)(v9 + 216);
      if ( v30 + 0x98000000000LL > 0x7FFFFFFFFFLL && ((BYTE2(MiFlags) & 3u) > 1 || v30 >= 0xFFFF800000000000uLL) )
      {
        v31 = 1LL;
        v32 = (v27 - (unsigned __int64)v14 + 8) >> 3;
        v33 = (unsigned __int64)v14 <= v27;
        v34 = v14;
        if ( !v33 )
          v32 = 0LL;
        if ( v32 )
        {
          do
          {
            v35 = 48 * *v34 - 0x58000000000LL;
            v36 = *(_QWORD *)(v35 + 16);
            if ( (v36 & 0x400) == 0 && v35 != qword_14034F700 )
            {
              v37 = (v36 >> 5) & 0x1F;
              if ( (_DWORD)v37 != 31 && (v37 & 2) != 0 )
              {
                v38 = 2;
                if ( (v37 & 4) != 0 && (v37 & 5) != 5 )
                  v38 = 3;
                MiMarkPfnVerified(v35, v38);
              }
            }
            ++v34;
            ++v31;
          }
          while ( v31 <= v32 );
          v9 = (ULONG_PTR)BugCheckParameter2;
          PteShadow = -1LL;
          v14 = *(__int64 **)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        }
        v10 = a3;
        v25 = *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
      }
    }
  }
  v39 = *(_DWORD *)(v9 + 80);
  v40 = (*(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 4) & 1) == 0;
  v41 = *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 4) & 1;
  *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v41;
  if ( v40 )
  {
    __incgsdword(0x2E24u);
    __addgsdword(0x2E20u, ((v25 & 0xFFF) != 0) + (v25 >> 12));
    if ( v10 )
    {
      if ( (*(_BYTE *)(v9 + 189) & 4) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 176));
    }
  }
  v42 = (_DWORD)v41 != 0 ? 2 : 0;
  if ( *a5 )
    PfHardFaultLog(*a5, (_DWORD)v41 != 0 ? 2 : 0);
  v43 = *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  *(_DWORD *)a5 = v42 & 3;
  if ( (*(_BYTE *)(v43 + 10) & 1) != 0 )
  {
    MmUnmapLockedPages(*(PVOID *)(v43 + 24), (PMDL)v43);
    v43 = *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  }
  *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
  *(_DWORD *)(v9 + 184) = -1;
  if ( v39 >= 0 )
  {
    v41 = *(_QWORD *)(v9 + 88);
    v44 = *(unsigned int *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    if ( v41 != v44 )
    {
      if ( v41 || (*(_BYTE *)(v9 + 189) & 4) == 0 )
      {
        if ( (*(_BYTE *)(v9 + 191) & 0x10) != 0 && !*(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
          KeBugCheckEx(
            0x7Au,
            4uLL,
            *(_QWORD *)(v9 + 88),
            v9,
            *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
        v45 = ((*(_DWORD *)(v43 + 44) + *(_DWORD *)(v43 + 32)) & 0xFFF)
            - (unsigned __int64)(unsigned int)(v44 - *(_DWORD *)(v43 + 40));
        *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_DWORD *)(v9 + 88) & 0xFFF;
        v46 = (_QWORD *)(v43 + 8 * (((v45 + v41 + 4095) >> 12) + 5));
        if ( (v41 & 0xFFF) != 0 )
        {
          v47 = MiMapPageInHyperSpaceWorker(*v46, (unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL, 0x80000000LL);
          v48 = *(unsigned int *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          v49 = v48 + v47;
          memset((void *)(v48 + v47), 0, (unsigned int)(4096 - v48));
          MiUnmapPageInHyperSpaceWorker(v49, *(_BYTE *)v5);
          v43 = *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        }
        if ( (unsigned __int64)(v46 + 1) <= *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) )
          *(_DWORD *)(v9 + 184) = (((__int64)v46 - v43 - 48) >> 3) + 1;
      }
      else
      {
        v39 = -1073741801;
      }
    }
    v50 = *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v50 != -1073741761 )
      goto LABEL_108;
LABEL_97:
    v53 = *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    if ( v53 > (unsigned __int64)MmHighestUserAddress
      && (!qword_14034EE00 || v53 < qword_14034EE00 || v53 >= qword_14034EE00 + (qword_14034EDE0 << 21))
      && !(unsigned int)MiExceptionForMappedVa(
                          *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
                          v41,
                          v43) )
    {
      if ( !*(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      {
        v54 = *(ULONG_PTR **)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
        if ( MiIsAddressValid((__int64)v54) )
        {
          PteShadow = *v54;
          if ( (unsigned __int64)(v54 + 0x12090482600LL) <= 0x7F8 )
            PteShadow = MiReadPteShadow(v54, *v54);
        }
        MmFlushAllFilesystemPages(1LL);
        if ( v50 < 0 )
          v39 = v50;
        KeBugCheckEx(0x7Au, (ULONG_PTR)v54, v39, PteShadow, v53);
      }
      if ( v50 != -1073741761 )
        v39 = -1073741801;
    }
    goto LABEL_108;
  }
  if ( v39 != -1073741807 )
  {
    if ( v39 == -2147483626 )
      goto LABEL_108;
    if ( v39 == -1073741670
      || v39 == -1073741663
      || v39 == -1073741801
      || *(_DWORD *)(v43 + 40) > 0x1000u && !FsRtlIsTotalDeviceFailure(v39) )
    {
      v40 = dword_14034F6D4 == 0;
      *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 1;
      if ( v40
        && (!*(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18)
         || (*(_BYTE *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 4) & 2) != 0) )
      {
        dword_14034F6D4 = 32;
      }
    }
    else
    {
      *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
    }
    if ( (*(_BYTE *)(v9 + 189) & 4) != 0 )
    {
      v39 = -1073741801;
      goto LABEL_108;
    }
    v50 = *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    goto LABEL_97;
  }
  if ( (*(_BYTE *)(v9 + 191) & 0x10) != 0 )
    KeBugCheckEx(
      0x7Au,
      3uLL,
      0xFFFFFFFFC0000011uLL,
      v9,
      *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
  v51 = 1LL;
  v52 = (unsigned __int64)(*(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) - (_QWORD)v14 + 8LL) >> 3;
  if ( (unsigned __int64)v14 > *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) )
    v52 = 0LL;
  if ( v52 )
  {
    do
    {
      MiZeroPhysicalPage(*v14, 3, *(unsigned __int8 *)(48 * *v14 - 0x57FFFFFFFDELL) >> 6);
      ++v51;
      ++v14;
    }
    while ( v51 <= v52 );
  }
  v39 = 0;
LABEL_108:
  v55 = *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  if ( v55 != -1 )
  {
    v56 = *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    MiCopyPage(
      *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
      (v56 + 0x58000000000LL) / 48,
      0LL,
      1);
    v57 = 48 * v55 - 0x58000000000LL;
    *(_QWORD *)(v57 + 16) = 0LL;
    DemandZeroPte = MiMakeDemandZeroPte(4LL);
    *(_QWORD *)(v57 + 16) = DemandZeroPte;
    v59 = DemandZeroPte ^ ((unsigned __int8)DemandZeroPte ^ (unsigned __int8)*(_QWORD *)(v56 + 16)) & 8;
    LOBYTE(DemandZeroPte) = (*(_QWORD *)(v57 + 40) >> 54) & 7;
    *(_QWORD *)(v57 + 16) = v59;
    if ( (_BYTE)DemandZeroPte == 3 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v57 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v8);
        }
        while ( (*(_QWORD *)(v57 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v57 + 24), 0x3FuLL) );
      }
      *(_QWORD *)(v57 + 8) = *(_QWORD *)(v56 + 8);
      _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
  }
  *(_DWORD *)(v9 + 80) = v39;
  return MiFinishHardFault((PVOID)v9, v5 + 4);
}

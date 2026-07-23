/*
 * XREFs of NtAllocateUserPhysicalPages @ 0x140627344
 * Callers:
 *     <none>
 * Callees:
 *     MiFreePagesFromMdl @ 0x140011298 (MiFreePagesFromMdl.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140020390 (ExAcquireAutoExpandPushLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14004AD10 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400627F0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x1400638C0 (MiChargeProcessCommitment.c)
 *     MiReturnProcessCommitment @ 0x14006C314 (MiReturnProcessCommitment.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiAllocatePagesForMdl @ 0x1400BC760 (MiAllocatePagesForMdl.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1400C8A30 (ExReleaseAutoExpandPushLockShared.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     MiAllocateAweInfo @ 0x14062686C (MiAllocateAweInfo.c)
 *     MiChargeProcessPhysicalPages @ 0x140626B34 (MiChargeProcessPhysicalPages.c)
 *     MiResizeAweBitMap @ 0x1406270C0 (MiResizeAweBitMap.c)
 */

NTSTATUS __stdcall NtAllocateUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  HANDLE v3; // r13
  char v4; // bl
  struct _KTHREAD *CurrentThread; // r12
  _KPROCESS *Process; // r15
  KPROCESSOR_MODE PreviousMode; // di
  _QWORD *v8; // rcx
  unsigned __int64 v9; // r14
  NTSTATUS result; // eax
  _KPROCESS *v11; // rsi
  NTSTATUS AweInfo; // r15d
  _QWORD *v13; // rcx
  int *ProcessPartition; // r10
  unsigned __int64 v15; // rdi
  __int16 v16; // dx
  __int64 v17; // rdi
  unsigned int *PagesForMdl; // r13
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 *v22; // rdx
  __int64 v23; // r8
  ULONG_PTR v24; // r11
  __int64 v25; // r9
  unsigned int *v26; // rax
  unsigned int *v27; // r10
  unsigned int *v28; // r13
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdi
  unsigned int *v31; // r12
  char *v32; // r13
  unsigned __int64 v33; // rdi
  unsigned int *v34; // rax
  unsigned int *v35; // rdi
  __int16 v36; // [rsp+40h] [rbp-128h]
  unsigned __int64 v37; // [rsp+48h] [rbp-120h]
  unsigned int *P; // [rsp+50h] [rbp-118h]
  unsigned int *v39; // [rsp+58h] [rbp-110h]
  PVOID Object; // [rsp+68h] [rbp-100h] BYREF
  PVOID v41; // [rsp+70h] [rbp-F8h]
  int *v42; // [rsp+78h] [rbp-F0h]
  unsigned __int64 v43; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v44; // [rsp+88h] [rbp-E0h]
  unsigned __int64 v45; // [rsp+90h] [rbp-D8h]
  unsigned int *v46; // [rsp+98h] [rbp-D0h]
  unsigned int *v47; // [rsp+A0h] [rbp-C8h]
  volatile void *Address; // [rsp+A8h] [rbp-C0h]
  unsigned int *v49; // [rsp+B0h] [rbp-B8h]
  PULONG_PTR v50; // [rsp+B8h] [rbp-B0h]
  HANDLE v51; // [rsp+C8h] [rbp-A0h]
  _DWORD *v52; // [rsp+D0h] [rbp-98h]
  struct _KTHREAD *v53; // [rsp+D8h] [rbp-90h]
  unsigned __int64 v54; // [rsp+E0h] [rbp-88h]
  HANDLE v55; // [rsp+F0h] [rbp-78h]
  $D4FCF91253F76F57393CBFE908971F67 v56; // [rsp+F8h] [rbp-70h] BYREF

  v50 = NumberOfPages;
  v3 = ProcessHandle;
  v55 = ProcessHandle;
  v51 = ProcessHandle;
  Address = UserPfnArray;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  v53 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v8 = NumberOfPages;
    if ( (unsigned __int64)NumberOfPages >= MmUserProbeAddress )
      v8 = (_QWORD *)MmUserProbeAddress;
    *v8 = *v8;
    v9 = *NumberOfPages;
    v43 = v9;
    if ( !v9 )
      return 0;
    if ( v9 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741584;
    ProbeForWrite(Address, 8 * v9, 8u);
  }
  else
  {
    v9 = *NumberOfPages;
    v43 = *NumberOfPages;
  }
  if ( v3 == (HANDLE)-1LL )
  {
    v11 = Process;
    Object = Process;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               v3,
               8u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x68506D4Du,
               &Object,
               0LL);
    if ( result < 0 )
      return result;
    v11 = (_KPROCESS *)Object;
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
  {
    if ( v3 != (HANDLE)-1LL )
      ObfDereferenceObjectWithTag(v11, 0x68506D4Du);
    return -1073741727;
  }
  if ( Process == v11 )
  {
    v56.SavedApcState.Process = 0LL;
  }
  else
  {
    KiStackAttachProcess(v11, 0LL, (__int64)&v56);
    v4 = 1;
  }
  v37 = 0LL;
  v41 = (PVOID)v11[1].ActiveProcessors.Bitmap[3];
  if ( v41 )
    goto LABEL_24;
  AweInfo = MiAllocateAweInfo();
  if ( AweInfo >= 0 )
  {
    v41 = (PVOID)v11[1].ActiveProcessors.Bitmap[3];
LABEL_24:
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11);
    v52 = (_DWORD *)&v11[1].DirectoryTableBase + 1;
    if ( (v11[1].DirectoryTableBase & 0x2000000000LL) != 0 )
    {
      AweInfo = -1073741558;
    }
    else if ( (unsigned int)MiChargeProcessPhysicalPages((__int64)v11, v9)
           && (v4 |= 4u, (unsigned int)MiChargeProcessCommitment(v13, v9)) )
    {
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11);
      v4 |= 2u;
      ProcessPartition = MiGetProcessPartition((__int64)v11);
      v42 = ProcessPartition;
      v15 = *((_QWORD *)ProcessPartition + 713) + 1LL;
      v16 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 1600) + 146LL);
      v36 = v16;
      P = 0LL;
      v49 = 0LL;
      if ( v11[1].ActiveProcessors.Bitmap[7] && v15 > 0x100000000LL )
        v15 = 0x100000000LL;
      v17 = (v15 - 1) << 12;
      AweInfo = 0;
      while ( 2 )
      {
        PagesForMdl = 0LL;
        v39 = 0LL;
        v19 = v9 - v37;
        if ( v9 - v37 > 0xFFFFE )
          v19 = 1048574LL;
        v47 = (unsigned int *)v19;
        if ( v19 >= 0x200 && (v4 & 8) == 0 )
        {
          v44 = v19 & 0xFFFFFFFFFFFFFE00uLL;
          PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                          (__int64)ProcessPartition,
                                          0LL,
                                          v17,
                                          0x200000LL,
                                          (v19 & 0xFFFFFFFFFFFFFE00uLL) << 12,
                                          1,
                                          v16,
                                          0x80000060);
          v39 = PagesForMdl;
          ProcessPartition = v42;
          v16 = v36;
          if ( PagesForMdl )
          {
            v19 = v44;
          }
          else
          {
            v4 |= 8u;
            v19 = (unsigned __int64)v47;
          }
        }
        if ( PagesForMdl
          || (PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                              (__int64)ProcessPartition,
                                              0LL,
                                              v17,
                                              0LL,
                                              v19 << 12,
                                              1,
                                              v16,
                                              0x80000000),
              (v39 = PagesForMdl) != 0LL) )
        {
          v20 = 0LL;
          v21 = (unsigned __int64)PagesForMdl[10] >> 12;
          v54 = v21;
          v47 = PagesForMdl + 12;
          v22 = (unsigned __int64 *)(PagesForMdl + 12);
          do
          {
            if ( *v22 > v20 )
              v20 = *v22;
            v44 = v20;
            ++v22;
          }
          while ( v22 != (unsigned __int64 *)&PagesForMdl[2 * v21 + 12] );
          v45 = v21;
          v46 = PagesForMdl + 12;
          while ( 1 )
          {
            LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11);
            if ( (*v52 & 0x20) != 0 )
            {
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11);
              MiFreePagesFromMdl((__int64)v42, (ULONG_PTR)PagesForMdl, 1u);
              ExFreePoolWithTag(PagesForMdl, 0);
              AweInfo = -1073741558;
              goto LABEL_57;
            }
            --CurrentThread->SpecialApcDisable;
            v24 = ExAcquireAutoExpandPushLockShared((ULONG_PTR)v41 + 16, 0LL, v23);
            if ( v44 < *(_QWORD *)v41 )
              break;
            ExReleaseAutoExpandPushLockShared(v24, 0LL);
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11);
            AweInfo = MiResizeAweBitMap((_RTL_BITMAP_EX *)v41);
            if ( AweInfo < 0 && v44 >= *(_QWORD *)v41 )
            {
              MiFreePagesFromMdl((__int64)v42, (ULONG_PTR)PagesForMdl, 1u);
              ExFreePoolWithTag(PagesForMdl, 0);
LABEL_57:
              v30 = v37;
              goto LABEL_62;
            }
            AweInfo = 0;
          }
          v25 = *((_QWORD *)v41 + 1);
          v26 = v47;
          v27 = &v47[2 * v54];
          do
          {
            _InterlockedOr((volatile signed __int32 *)(v25 + 4LL * (*(_QWORD *)v26 >> 5)), 1 << (*(_QWORD *)v26 & 0x1F));
            v26 = v46 + 2;
            v46 = v26;
          }
          while ( v26 != v27 );
          ExReleaseAutoExpandPushLockShared(v24, 0LL);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Object);
          *(_QWORD *)v39 = P;
          v28 = v39;
          P = v39;
          v49 = v39;
          ProcessPartition = v42;
          _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 767, v45);
          v29 = v45 + v37;
          v37 = v29;
          v9 = v43;
          v11 = (_KPROCESS *)Object;
          if ( v29 != v43 )
          {
            v16 = v36;
            continue;
          }
          v30 = v29;
        }
        else
        {
          v30 = v37;
          if ( !v37 )
            AweInfo = -1073741670;
LABEL_62:
          v28 = P;
        }
        break;
      }
      if ( (v4 & 1) != 0 )
      {
        KiUnstackDetachProcess(&v56, 0LL);
        v4 &= ~1u;
      }
      if ( AweInfo >= 0 )
        *v50 = v30;
      v31 = v28;
      v32 = (char *)Address;
      while ( v31 )
      {
        v46 = v31 + 12;
        v45 = (unsigned __int64)v31[10] >> 12;
        v33 = 8 * v45;
        memmove(v32, v31 + 12, 8 * v45);
        v32 += v33;
        Address = v32;
        v31 = *(unsigned int **)v31;
      }
      v34 = P;
      v3 = v55;
      while ( v34 )
      {
        v35 = *(unsigned int **)v34;
        ExFreePoolWithTag(v34, 0);
        v34 = v35;
      }
      v9 -= v37;
      v43 = v9;
      CurrentThread = v53;
    }
    else
    {
      AweInfo = -1073741523;
    }
  }
  if ( v9 )
  {
    if ( (v4 & 2) != 0 )
    {
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11);
      MiReturnProcessCommitment((__int64)v11, v9);
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11);
    }
    if ( (v4 & 4) != 0 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v11[2].Affinity.Bitmap[5], -(__int64)v9);
      v11 = (_KPROCESS *)Object;
    }
  }
  if ( (v4 & 1) != 0 )
    KiUnstackDetachProcess(&v56, 0LL);
  if ( v3 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(v11, 0x68506D4Du);
  return AweInfo;
}

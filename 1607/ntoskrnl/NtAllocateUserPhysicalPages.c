/*
 * XREFs of NtAllocateUserPhysicalPages @ 0x14065CB7C
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x14002B6A0 (MiChargeProcessCommitment.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002B9E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14002BA50 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14008B5C0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     MiReturnProcessCommitment @ 0x1400A2774 (MiReturnProcessCommitment.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400C55E0 (ExAcquireAutoExpandPushLockShared.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MiAllocatePagesForMdl @ 0x140101FA4 (MiAllocatePagesForMdl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     MiChargeProcessPhysicalPages @ 0x14065A378 (MiChargeProcessPhysicalPages.c)
 *     MiAllocateAweInfo @ 0x14065C110 (MiAllocateAweInfo.c)
 *     MiResizeAweBitMap @ 0x14065C910 (MiResizeAweBitMap.c)
 */

NTSTATUS __stdcall NtAllocateUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  HANDLE v3; // r12
  char v4; // bl
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // r15
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
  NTSTATUS result; // eax
  _KPROCESS *v11; // rsi
  NTSTATUS AweInfo; // r15d
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  int *ProcessPartition; // r10
  unsigned __int64 v18; // rdi
  unsigned __int16 v19; // dx
  unsigned __int64 v20; // rdi
  unsigned int *PagesForMdl; // r12
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  unsigned __int64 *v25; // rcx
  ULONG_PTR v26; // r11
  __int64 v27; // r9
  unsigned int *v28; // rax
  unsigned int *v29; // r10
  unsigned int *v30; // r12
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rdi
  unsigned int *v34; // rax
  bool i; // zf
  unsigned int *v36; // rdi
  unsigned __int16 v37; // [rsp+42h] [rbp-116h]
  unsigned __int64 v38; // [rsp+48h] [rbp-110h]
  unsigned int *P; // [rsp+58h] [rbp-100h]
  unsigned int *v40; // [rsp+60h] [rbp-F8h]
  PVOID Object; // [rsp+68h] [rbp-F0h] BYREF
  PVOID v42; // [rsp+70h] [rbp-E8h]
  volatile void *Address; // [rsp+78h] [rbp-E0h]
  unsigned __int64 v44; // [rsp+80h] [rbp-D8h]
  unsigned __int64 v45; // [rsp+88h] [rbp-D0h]
  int *v46; // [rsp+90h] [rbp-C8h]
  unsigned int *v47; // [rsp+98h] [rbp-C0h]
  unsigned __int64 v48; // [rsp+A0h] [rbp-B8h]
  unsigned int *v49; // [rsp+A8h] [rbp-B0h]
  unsigned int *v50; // [rsp+B0h] [rbp-A8h]
  _DWORD *v51; // [rsp+B8h] [rbp-A0h]
  unsigned __int64 v52; // [rsp+C0h] [rbp-98h]
  PULONG_PTR v53; // [rsp+C8h] [rbp-90h]
  HANDLE v54; // [rsp+D0h] [rbp-88h]
  struct _KTHREAD *v55; // [rsp+D8h] [rbp-80h]
  HANDLE v56; // [rsp+E0h] [rbp-78h]
  _BYTE v57[32]; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v58; // [rsp+108h] [rbp-50h]

  v53 = NumberOfPages;
  v3 = ProcessHandle;
  v54 = ProcessHandle;
  v56 = ProcessHandle;
  Address = UserPfnArray;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  v55 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v8 = (__int64)NumberOfPages;
    if ( (unsigned __int64)NumberOfPages >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v8 = *(_QWORD *)v8;
    v9 = *NumberOfPages;
    v44 = v9;
    if ( !v9 )
      return 0;
    if ( v9 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741584;
    ProbeForWrite(Address, 8 * v9, 8u);
  }
  else
  {
    v9 = *NumberOfPages;
    v44 = *NumberOfPages;
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
    v58 = 0LL;
  }
  else
  {
    KiStackAttachProcess(v11, 0, (__int64)v57);
    v4 = 1;
  }
  v38 = 0LL;
  v42 = (PVOID)v11[1].ActiveProcessors.Bitmap[3];
  if ( !v42 )
  {
    AweInfo = MiAllocateAweInfo();
    if ( AweInfo < 0 )
      goto LABEL_74;
    v42 = (PVOID)v11[1].ActiveProcessors.Bitmap[3];
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11);
  v51 = (_DWORD *)&v11[1].DirectoryTableBase + 1;
  if ( (v11[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11);
    AweInfo = -1073741558;
  }
  else
  {
    if ( (unsigned int)MiChargeProcessPhysicalPages((__int64)v11, v9) )
    {
      v4 |= 4u;
      v16 = MiChargeProcessCommitment(v13, v9);
      v14 = (__int64)v11;
      v15 = (__int64)CurrentThread;
      if ( v16 )
      {
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11);
        v4 |= 2u;
        ProcessPartition = MiGetProcessPartition((__int64)v11);
        v46 = ProcessPartition;
        v18 = *((_QWORD *)ProcessPartition + 785) + 1LL;
        v19 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 1600) + 146LL);
        v37 = v19;
        P = 0LL;
        v50 = 0LL;
        if ( v11[1].ActiveProcessors.Bitmap[7] && v18 > 0x100000000LL )
          v18 = 0x100000000LL;
        v20 = v18 << 12;
        AweInfo = 0;
        while ( 2 )
        {
          PagesForMdl = 0LL;
          v40 = 0LL;
          v22 = v9 - v38;
          if ( v9 - v38 > 0xC0000 )
            v22 = 786432LL;
          v49 = (unsigned int *)v22;
          if ( v22 >= 0x200 && (v4 & 8) == 0 )
          {
            v45 = v22 & 0xFFFFFFFFFFFFFE00uLL;
            PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                            (__int64)ProcessPartition,
                                            0LL,
                                            v20 - 4096,
                                            0x200000uLL,
                                            (v22 & 0xFFFFFFFFFFFFFE00uLL) << 12,
                                            1u,
                                            v19,
                                            -2147483552);
            v40 = PagesForMdl;
            ProcessPartition = v46;
            v19 = v37;
            if ( PagesForMdl )
            {
              v22 = v45;
            }
            else
            {
              v4 |= 8u;
              v22 = (unsigned __int64)v49;
            }
          }
          if ( PagesForMdl
            || (PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                                (__int64)ProcessPartition,
                                                0LL,
                                                v20 - 4096,
                                                0LL,
                                                v22 << 12,
                                                1u,
                                                v19,
                                                0x80000000),
                (v40 = PagesForMdl) != 0LL) )
          {
            v23 = 0LL;
            v24 = (unsigned __int64)PagesForMdl[10] >> 12;
            v52 = v24;
            v49 = PagesForMdl + 12;
            v25 = (unsigned __int64 *)(PagesForMdl + 12);
            do
            {
              if ( *v25 > v23 )
                v23 = *v25;
              v45 = v23;
              ++v25;
            }
            while ( v25 != (unsigned __int64 *)&PagesForMdl[2 * v24 + 12] );
            v48 = v24;
            v47 = PagesForMdl + 12;
            while ( 1 )
            {
              LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11);
              if ( (*v51 & 0x20) != 0 )
              {
                UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11);
                MiFreePagesFromMdl((ULONG_PTR)PagesForMdl, 0x80000000);
                ExFreePoolWithTag(PagesForMdl, 0);
                AweInfo = -1073741558;
                goto LABEL_58;
              }
              --CurrentThread->SpecialApcDisable;
              v26 = ExAcquireAutoExpandPushLockShared((ULONG_PTR)v42 + 16, 0LL);
              if ( v45 < *(_QWORD *)v42 )
                break;
              ExReleaseAutoExpandPushLockShared(v26, 0LL);
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11);
              AweInfo = MiResizeAweBitMap((_RTL_BITMAP_EX *)v42);
              if ( AweInfo < 0 && v45 >= *(_QWORD *)v42 )
              {
                MiFreePagesFromMdl((ULONG_PTR)PagesForMdl, 0x80000000);
                ExFreePoolWithTag(PagesForMdl, 0);
LABEL_58:
                v32 = v38;
                goto LABEL_63;
              }
              AweInfo = 0;
            }
            v27 = *((_QWORD *)v42 + 1);
            v28 = v49;
            v29 = &v49[2 * v52];
            do
            {
              _InterlockedOr(
                (volatile signed __int32 *)(v27 + 4LL * (*(_QWORD *)v28 >> 5)),
                1 << (*(_QWORD *)v28 & 0x1F));
              v28 = v47 + 2;
              v47 = v28;
            }
            while ( v28 != v29 );
            ExReleaseAutoExpandPushLockShared(v26, 0LL);
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Object);
            *(_QWORD *)v40 = P;
            v30 = v40;
            P = v40;
            v50 = v40;
            ProcessPartition = v46;
            _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 919, v48);
            v31 = v48 + v38;
            v38 = v31;
            v9 = v44;
            v11 = (_KPROCESS *)Object;
            if ( v31 != v44 )
            {
              v19 = v37;
              continue;
            }
            v32 = v31;
          }
          else
          {
            v32 = v38;
            if ( !v38 )
              AweInfo = -1073741670;
LABEL_63:
            v30 = P;
          }
          break;
        }
        if ( (v4 & 1) != 0 )
        {
          KiUnstackDetachProcess((struct _KTHREAD *)v57, 0);
          v4 &= ~1u;
        }
        if ( AweInfo >= 0 )
          *v53 = v32;
        while ( v30 )
        {
          v47 = v30 + 12;
          v48 = (unsigned __int64)v30[10] >> 12;
          v33 = 8 * v48;
          memmove((void *)Address, v30 + 12, 8 * v48);
          Address = (char *)Address + v33;
          v30 = *(unsigned int **)v30;
        }
        v34 = P;
        v3 = v54;
        for ( i = P == 0LL; !i; i = v36 == 0LL )
        {
          v36 = *(unsigned int **)v34;
          ExFreePoolWithTag(v34, 0);
          v34 = v36;
        }
        v9 -= v38;
        v44 = v9;
        goto LABEL_74;
      }
    }
    else
    {
      v14 = (__int64)v11;
      v15 = (__int64)CurrentThread;
    }
    UNLOCK_ADDRESS_SPACE_SHARED(v15, v14);
    AweInfo = -1073741523;
  }
LABEL_74:
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
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v11[2].Affinity.Bitmap[7], -(__int64)v9);
      v11 = (_KPROCESS *)Object;
    }
  }
  if ( (v4 & 1) != 0 )
    KiUnstackDetachProcess((struct _KTHREAD *)v57, 0);
  if ( v3 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(v11, 0x68506D4Du);
  return AweInfo;
}

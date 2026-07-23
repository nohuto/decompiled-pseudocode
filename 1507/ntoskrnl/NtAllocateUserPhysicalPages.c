/*
 * XREFs of NtAllocateUserPhysicalPages @ 0x1406A6328
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MiAllocatePagesForMdl @ 0x140076E38 (MiAllocatePagesForMdl.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140089560 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400895D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14008B6A0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiReturnProcessCommitment @ 0x14008D1B8 (MiReturnProcessCommitment.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x14008F8D0 (MiChargeProcessCommitment.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiFreePagesFromMdl @ 0x1400E2D98 (MiFreePagesFromMdl.c)
 *     RtlClearAllBitsEx @ 0x1400FE45C (RtlClearAllBitsEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MiInsertAweInfo @ 0x140224760 (MiInsertAweInfo.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     MiAllocateAweInfo @ 0x1406A5BA4 (MiAllocateAweInfo.c)
 *     MiChargeProcessPhysicalPages @ 0x1406A5EA4 (MiChargeProcessPhysicalPages.c)
 *     MiFreeAweInfo @ 0x1406A6124 (MiFreeAweInfo.c)
 */

NTSTATUS __stdcall NtAllocateUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  char v4; // bl
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // r14
  KPROCESSOR_MODE PreviousMode; // di
  _QWORD *v8; // rcx
  unsigned __int64 v9; // r15
  NTSTATUS result; // eax
  _KPROCESS *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *AweInfo; // rdi
  _RTL_BITMAP_EX **inserted; // r12
  NTSTATUS v16; // r14d
  HANDLE v17; // r12
  _QWORD *v18; // rcx
  _RTL_BITMAP_EX *v19; // rdi
  __int64 v20; // r14
  _RTL_BITMAP_EX *PoolWithTag; // rax
  unsigned __int64 SizeOfBitMap; // rdi
  _QWORD *v23; // r12
  __int16 v24; // dx
  __int16 *ProcessPartition; // r10
  __int64 v26; // rdi
  _QWORD *PagesForMdl; // rax
  unsigned __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // r9
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rdi
  _QWORD *v34; // rax
  _QWORD *v35; // rdi
  __int16 v36; // [rsp+40h] [rbp-128h]
  _QWORD *P; // [rsp+48h] [rbp-120h]
  unsigned __int64 v38; // [rsp+58h] [rbp-110h]
  PVOID Object; // [rsp+68h] [rbp-100h] BYREF
  unsigned __int64 v41; // [rsp+70h] [rbp-F8h]
  volatile void *Address; // [rsp+78h] [rbp-F0h]
  __int16 *v43; // [rsp+80h] [rbp-E8h]
  _QWORD *v44; // [rsp+88h] [rbp-E0h]
  SIZE_T v45; // [rsp+90h] [rbp-D8h]
  unsigned __int64 Buffer; // [rsp+98h] [rbp-D0h]
  unsigned __int64 v47; // [rsp+A0h] [rbp-C8h]
  unsigned __int64 v48; // [rsp+A8h] [rbp-C0h]
  _RTL_BITMAP_EX *v49; // [rsp+B0h] [rbp-B8h]
  PVOID v50; // [rsp+B8h] [rbp-B0h]
  PULONG_PTR v51; // [rsp+C0h] [rbp-A8h]
  struct _KTHREAD *v52; // [rsp+C8h] [rbp-A0h]
  HANDLE v53; // [rsp+D0h] [rbp-98h]
  _DWORD *v54; // [rsp+E8h] [rbp-80h]
  _BYTE v55[48]; // [rsp+F0h] [rbp-78h] BYREF

  v51 = NumberOfPages;
  v53 = ProcessHandle;
  Address = UserPfnArray;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  v52 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v8 = NumberOfPages;
    if ( (unsigned __int64)NumberOfPages >= MmUserProbeAddress )
      v8 = (_QWORD *)MmUserProbeAddress;
    *v8 = *v8;
    v9 = *NumberOfPages;
    v41 = v9;
    if ( !v9 )
      return 0;
    if ( v9 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741584;
    ProbeForWrite(Address, 8 * v9, 8u);
  }
  else
  {
    v9 = *NumberOfPages;
    v41 = *NumberOfPages;
  }
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    v11 = Process;
    Object = Process;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
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
    if ( ProcessHandle != (HANDLE)-1LL )
      ObfDereferenceObjectWithTag(v11, 0x68506D4Du);
    return -1073741727;
  }
  if ( Process != v11 )
  {
    KiStackAttachProcess(v11, 0, (__int64)v55);
    v4 = 4;
  }
  v38 = 0LL;
  AweInfo = 0LL;
  inserted = (_RTL_BITMAP_EX **)v11[1].ActiveProcessors.Bitmap[3];
  if ( inserted )
  {
    if ( *inserted )
      v4 |= 1u;
LABEL_26:
    if ( (v4 & 1) != 0 )
    {
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11, v12, v13);
    }
    else
    {
      v4 |= 2u;
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v11, v12, v13);
    }
    v54 = (_DWORD *)&v11[1].DirectoryTableBase + 1;
    if ( (v11[1].DirectoryTableBase & 0x2000000000LL) != 0 )
    {
      if ( AweInfo )
        MiFreeAweInfo(AweInfo);
      v16 = -1073741558;
      goto LABEL_23;
    }
    if ( AweInfo )
      inserted = (_RTL_BITMAP_EX **)MiInsertAweInfo((__int64)v11, (__int64)AweInfo);
    if ( !(unsigned int)MiChargeProcessPhysicalPages((__int64)v11, v9)
      || (v4 |= 0x10u, !(unsigned int)MiChargeProcessCommitment(v18, v9)) )
    {
      v16 = -1073741523;
      goto LABEL_23;
    }
    v4 |= 8u;
    v19 = *inserted;
    v49 = v19;
    if ( !v19 )
    {
      v20 = qword_14034EC10 + 1;
      v45 = 8 * (((((_BYTE)qword_14034EC10 + 1) & 0x3F) != 0) + ((unsigned __int64)(qword_14034EC10 + 1) >> 6)) + 16;
      PoolWithTag = (_RTL_BITMAP_EX *)ExAllocatePoolWithTag(NonPagedPoolNx, v45, 0x4C646156u);
      v19 = PoolWithTag;
      v49 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_22;
      PoolWithTag->SizeOfBitMap = v20;
      PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
      RtlClearAllBitsEx(PoolWithTag);
      v16 = PsChargeProcessNonPagedPoolQuota((__int64)v11, v45);
      if ( v16 < 0 )
      {
        ExFreePoolWithTag(v19, 0);
        goto LABEL_23;
      }
      *inserted = v19;
    }
    SizeOfBitMap = v19->SizeOfBitMap;
    if ( (v4 & 1) != 0 )
    {
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11);
      v4 &= ~1u;
    }
    else
    {
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v11);
      v4 &= ~2u;
    }
    v36 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 1600) + 146LL);
    v23 = 0LL;
    v50 = 0LL;
    v45 = 0LL;
    if ( v11[1].ActiveProcessors.Bitmap[7] && SizeOfBitMap > 0x100000000LL )
      SizeOfBitMap = 0x100000000LL;
    ProcessPartition = MiGetProcessPartition((__int64)v11);
    v43 = ProcessPartition;
    v26 = (SizeOfBitMap - 1) << 12;
    v16 = 0;
    while ( 1 )
    {
      v12 = 1048574LL;
      PagesForMdl = 0LL;
      P = 0LL;
      v28 = v9 - v38;
      if ( v9 - v38 > 0xFFFFE )
        v28 = 1048574LL;
      v48 = v28;
      if ( v28 >= 0x200 && (v4 & 0x20) == 0 )
      {
        Buffer = v28 & 0xFFFFFFFFFFFFFE00uLL;
        PagesForMdl = MiAllocatePagesForMdl(
                        (__int64)ProcessPartition,
                        0LL,
                        v26,
                        0x200000LL,
                        (v28 & 0xFFFFFFFFFFFFFE00uLL) << 12,
                        1,
                        v24,
                        0x80000060);
        P = PagesForMdl;
        ProcessPartition = v43;
        v24 = v36;
        if ( PagesForMdl )
        {
          v28 = Buffer;
        }
        else
        {
          v4 |= 0x20u;
          v28 = v48;
        }
      }
      if ( !PagesForMdl )
      {
        PagesForMdl = MiAllocatePagesForMdl((__int64)ProcessPartition, 0LL, v26, 0LL, v28 << 12, 1, v24, 0x80000000);
        P = PagesForMdl;
        if ( !PagesForMdl )
          break;
      }
      v48 = (unsigned __int64)*((unsigned int *)PagesForMdl + 10) >> 12;
      v47 = v48;
      v44 = PagesForMdl + 6;
      Buffer = (unsigned __int64)v49->Buffer;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11, v12, v13);
      if ( (*v54 & 0x20) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11);
        MiFreePagesFromMdl((__int64)v43, (ULONG_PTR)P, 1u);
        ExFreePoolWithTag(P, 0);
        v16 = -1073741558;
        v32 = v38;
        goto LABEL_68;
      }
      v29 = v44;
      v30 = &v44[v48];
      do
      {
        _InterlockedOr((volatile signed __int32 *)(Buffer + 4LL * (*v29 >> 5)), 1 << (*v29 & 0x1F));
        v29 = v44 + 1;
        v44 = v29;
      }
      while ( v29 != v30 );
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Object);
      *P = v23;
      v23 = P;
      v50 = P;
      v45 = (SIZE_T)P;
      ProcessPartition = v43;
      _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 719, v47);
      v31 = v47 + v38;
      v38 = v31;
      v9 = v41;
      v11 = (_KPROCESS *)Object;
      if ( v31 == v41 )
      {
        v32 = v31;
        goto LABEL_68;
      }
      v24 = v36;
    }
    v32 = v38;
    if ( !v38 )
      v16 = -1073741670;
LABEL_68:
    if ( (v4 & 4) != 0 )
    {
      KiUnstackDetachProcess((struct _KTHREAD *)v55, 0);
      v4 &= ~4u;
    }
    if ( v16 >= 0 )
      *v51 = v32;
    while ( v23 )
    {
      v44 = v23 + 6;
      v47 = (unsigned __int64)*((unsigned int *)v23 + 10) >> 12;
      v33 = 8 * v47;
      memmove((void *)Address, v23 + 6, 8 * v47);
      Address = (char *)Address + v33;
      v23 = (_QWORD *)*v23;
    }
    v34 = v50;
    v17 = ProcessHandle;
    while ( v34 )
    {
      v35 = (_QWORD *)*v34;
      ExFreePoolWithTag(v34, 0);
      v34 = v35;
    }
    v9 -= v38;
    v41 = v9;
    goto LABEL_78;
  }
  AweInfo = MiAllocateAweInfo();
  if ( AweInfo )
    goto LABEL_26;
LABEL_22:
  v16 = -1073741670;
LABEL_23:
  v17 = ProcessHandle;
LABEL_78:
  if ( v9 )
  {
    if ( (v4 & 0xB) == 8 )
    {
      v4 |= 1u;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11, v12, v13);
    }
    if ( (v4 & 8) != 0 )
      MiReturnProcessCommitment((__int64)v11, v9);
  }
  if ( (v4 & 1) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v11);
  }
  else if ( (v4 & 2) != 0 )
  {
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v11);
  }
  if ( v9 && (v4 & 0x10) != 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v11[2].Affinity.Bitmap[4], -(__int64)v9);
    v11 = (_KPROCESS *)Object;
  }
  if ( (v4 & 4) != 0 )
    KiUnstackDetachProcess((struct _KTHREAD *)v55, 0);
  if ( v17 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(v11, 0x68506D4Du);
  return v16;
}

/*
 * XREFs of NtFreeUserPhysicalPages @ 0x140627AE0
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     MiFreePagesFromMdl @ 0x140011298 (MiFreePagesFromMdl.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MiReturnProcessCommitment @ 0x14006C314 (MiReturnProcessCommitment.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1400DCA70 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400DE500 (ExAcquireAutoExpandPushLockExclusive.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiSynchronizePageFree @ 0x1401DF454 (MiSynchronizePageFree.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     MiCaptureUlongPtrArray @ 0x140626A20 (MiCaptureUlongPtrArray.c)
 */

NTSTATUS __stdcall NtFreeUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  struct _KTHREAD *CurrentThread; // r8
  KPROCESSOR_MODE PreviousMode; // r9
  _QWORD *v6; // rcx
  unsigned __int64 v7; // r15
  int v9; // edi
  PMDL Mdl; // r13
  unsigned __int64 v11; // r12
  _KPROCESS *Process; // rsi
  NTSTATUS v13; // r14d
  char *i; // rdx
  PMDL v15; // r14
  struct _MDL *v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 *v18; // rcx
  signed __int64 *v19; // rdx
  unsigned __int64 *v20; // rsi
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r15
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-318h]
  PMDL v28; // [rsp+48h] [rbp-310h]
  __int64 v29; // [rsp+48h] [rbp-310h]
  PVOID Object; // [rsp+50h] [rbp-308h] BYREF
  struct _KTHREAD *v31; // [rsp+58h] [rbp-300h]
  unsigned __int64 v32; // [rsp+60h] [rbp-2F8h]
  void *Src; // [rsp+68h] [rbp-2F0h]
  unsigned __int64 v34; // [rsp+70h] [rbp-2E8h]
  unsigned __int64 v35; // [rsp+78h] [rbp-2E0h]
  unsigned __int64 v36; // [rsp+80h] [rbp-2D8h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-2D0h]
  int *ProcessPartition; // [rsp+90h] [rbp-2C8h]
  PULONG_PTR v39; // [rsp+98h] [rbp-2C0h]
  signed __int64 *v40; // [rsp+A8h] [rbp-2B0h]
  $D4FCF91253F76F57393CBFE908971F67 v41; // [rsp+B0h] [rbp-2A8h] BYREF
  _BYTE v42[560]; // [rsp+E0h] [rbp-278h] BYREF

  Src = UserPfnArray;
  v39 = NumberOfPages;
  CurrentThread = KeGetCurrentThread();
  v31 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v6 = NumberOfPages;
    if ( (unsigned __int64)NumberOfPages >= MmUserProbeAddress )
      v6 = (_QWORD *)MmUserProbeAddress;
    *v6 = *v6;
    v7 = *NumberOfPages;
    v32 = *NumberOfPages;
    *NumberOfPages = 0LL;
  }
  else
  {
    v7 = *NumberOfPages;
    v32 = *NumberOfPages;
  }
  if ( !v7 )
    return -1073741584;
  v9 = 0;
  v35 = 0LL;
  Mdl = 0LL;
  v11 = 0LL;
  if ( v7 > 0x40 )
  {
    v11 = v7;
    if ( v7 > 0xFFFFE )
      v11 = 1048574LL;
    do
    {
      Mdl = IoAllocateMdl(0LL, (_DWORD)v11 << 12, 0, 0, 0LL);
      if ( Mdl )
        break;
      v11 >>= 1;
    }
    while ( v11 > 0x40 );
    CurrentThread = v31;
    PreviousMode = AccessMode;
  }
  if ( !Mdl )
  {
    v11 = 64LL;
    Mdl = (PMDL)v42;
  }
  Process = CurrentThread->ApcState.Process;
  Object = Process;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Object = Process;
    goto LABEL_20;
  }
  v13 = ObReferenceObjectByHandleWithTag(
          ProcessHandle,
          8u,
          (POBJECT_TYPE)PsProcessType,
          PreviousMode,
          0x68506D4Du,
          &Object,
          0LL);
  Process = (_KPROCESS *)Object;
  if ( v13 >= 0 )
  {
    v9 = 2;
LABEL_20:
    ProcessPartition = MiGetProcessPartition((__int64)Process);
    for ( i = (char *)Src; ; Src = i )
    {
      if ( v7 < v11 )
        v11 = v7;
      Mdl->Next = 0LL;
      Mdl->Size = 8 * ((((v11 << 12) + 4095) >> 12) + 6);
      Mdl->MdlFlags = 0;
      Mdl->StartVa = 0LL;
      Mdl->ByteOffset = 0;
      Mdl->ByteCount = (_DWORD)v11 << 12;
      v15 = Mdl + 1;
      v28 = Mdl + 1;
      v9 &= ~1u;
      v16 = Mdl + 1;
      if ( AccessMode )
      {
        v13 = MiCaptureUlongPtrArray(v16, i, v11);
        if ( v13 < 0 )
          goto LABEL_57;
        v15 = Mdl + 1;
      }
      else
      {
        memmove(v16, i, 8 * v11);
      }
      v17 = (__int64)v31;
      if ( v31->ApcState.Process != Process )
      {
        KiStackAttachProcess(Process, 0LL, (__int64)&v41);
        v9 |= 1u;
        v17 = (__int64)v31;
      }
      v34 = Process[1].ActiveProcessors.Bitmap[3];
      if ( !v34 )
        break;
      v36 = (unsigned __int64)v15 + 8 * v11;
      v13 = 0;
      LOCK_ADDRESS_SPACE(v17, (__int64)Process);
      if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        UNLOCK_ADDRESS_SPACE((__int64)v31, (__int64)Process);
        v13 = -1073741558;
        goto LABEL_57;
      }
      --v31->SpecialApcDisable;
      BugCheckParameter2 = v34 + 16;
      ExAcquireAutoExpandPushLockExclusive(v34 + 16, 0LL);
      v18 = (unsigned __int64 *)v34;
      v19 = *(signed __int64 **)(v34 + 8);
      v40 = v19;
      if ( (unsigned __int64)v28 < v36 )
      {
        v20 = (unsigned __int64 *)&Mdl[1];
        while ( 1 )
        {
          v21 = *v20;
          if ( *v20 >= *v18 || !_bittest64(v19, v21) )
            break;
          ++v35;
          _bittestandreset64(v19, v21);
          v22 = 48 * v21 - 0x58000000000LL;
          v23 = *(_QWORD **)(v22 + 8);
          if ( v23 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 8), 0LL);
            *v23 = 0LL;
            if ( MiPteInShadowRange((__int64)v23) )
              MiWritePteShadow((__int64)v23, 0LL);
            v18 = (unsigned __int64 *)v34;
          }
          v28 = (PMDL)++v20;
          v19 = v40;
          if ( (unsigned __int64)v20 >= v36 )
            goto LABEL_42;
        }
        v13 = -1073741800;
LABEL_42:
        v7 = v32;
        Process = (_KPROCESS *)Object;
      }
      KeFlushTb(1u, 0);
      ExReleaseAutoExpandPushLockExclusive((_DWORD *)BugCheckParameter2, 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)v31);
      v24 = ((char *)v28 - (char *)Mdl - 48) >> 3;
      v29 = v24;
      if ( v24 )
        MiReturnProcessCommitment((__int64)Process, v24);
      UNLOCK_ADDRESS_SPACE((__int64)v31, (__int64)Process);
      v25 = v29;
      Mdl->ByteCount = (_DWORD)v29 << 12;
      if ( v29 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[2].Affinity.Bitmap[5], -v29);
        v26 = (__int64)ProcessPartition;
        _InterlockedExchangeAdd64((volatile signed __int64 *)ProcessPartition + 767, -v29);
        Process = (_KPROCESS *)Object;
        MiSynchronizePageFree((__int64)Object);
        MiFreePagesFromMdl(v26, (ULONG_PTR)Mdl, 1u);
        v7 = v32;
        v25 = v29;
      }
      v7 -= v25;
      v32 = v7;
      if ( v13 || !v7 )
        goto LABEL_57;
      if ( (v9 & 1) != 0 )
      {
        KiUnstackDetachProcess(&v41, 0LL);
        v9 &= ~1u;
      }
      if ( Process[1].ActiveProcessors.Bitmap[7] )
        i = (char *)Src + 4 * v11;
      else
        i = (char *)Src + 8 * v11;
    }
    v13 = -1073741585;
  }
LABEL_57:
  if ( Mdl != (PMDL)v42 )
    IoFreeMdl(Mdl);
  if ( (v9 & 1) != 0 )
    KiUnstackDetachProcess(&v41, 0LL);
  if ( (v9 & 2) != 0 )
    ObfDereferenceObjectWithTag(Process, 0x68506D4Du);
  *v39 = v35;
  return v13;
}

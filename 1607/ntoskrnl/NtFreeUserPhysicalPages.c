/*
 * XREFs of NtFreeUserPhysicalPages @ 0x14065D304
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     LOCK_ADDRESS_SPACE @ 0x14002BF10 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140096C30 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140097AA0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     MiReturnProcessCommitment @ 0x1400A2774 (MiReturnProcessCommitment.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiSynchronizePageFree @ 0x1401EFFD0 (MiSynchronizePageFree.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     MiCaptureUlongPtrArray @ 0x14065C2C4 (MiCaptureUlongPtrArray.c)
 */

NTSTATUS __stdcall NtFreeUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  struct _KTHREAD *CurrentThread; // r8
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v6; // rcx
  unsigned __int64 v7; // r15
  int v9; // edi
  PMDL Mdl; // r12
  unsigned __int64 v11; // r13
  _KPROCESS *Process; // rsi
  NTSTATUS v13; // r14d
  char *i; // rdx
  PMDL v15; // r14
  struct _MDL *v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 *v18; // rcx
  signed __int64 *v19; // r10
  unsigned __int64 *v20; // r9
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // rax
  _QWORD *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 *v26; // rcx
  unsigned __int64 v27; // rcx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-318h]
  PVOID Object; // [rsp+48h] [rbp-310h] BYREF
  unsigned __int64 *v30; // [rsp+50h] [rbp-308h]
  struct _KTHREAD *v31; // [rsp+58h] [rbp-300h]
  unsigned __int64 v32; // [rsp+60h] [rbp-2F8h]
  void *Src; // [rsp+68h] [rbp-2F0h]
  unsigned __int64 v34; // [rsp+70h] [rbp-2E8h]
  unsigned __int64 v35; // [rsp+78h] [rbp-2E0h]
  unsigned __int64 *v36; // [rsp+88h] [rbp-2D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-2C8h]
  int *ProcessPartition; // [rsp+98h] [rbp-2C0h]
  PULONG_PTR v39; // [rsp+A0h] [rbp-2B8h]
  _BYTE v40[56]; // [rsp+A8h] [rbp-2B0h] BYREF
  _BYTE v41[560]; // [rsp+E0h] [rbp-278h] BYREF

  Src = UserPfnArray;
  v39 = NumberOfPages;
  CurrentThread = KeGetCurrentThread();
  v31 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v6 = (__int64)NumberOfPages;
    if ( (unsigned __int64)NumberOfPages >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v6 = *(_QWORD *)v6;
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
    Mdl = (PMDL)v41;
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
      v30 = (unsigned __int64 *)&Mdl[1];
      v9 &= ~1u;
      v16 = Mdl + 1;
      if ( AccessMode )
      {
        v13 = MiCaptureUlongPtrArray(v16, i, v11);
        if ( v13 < 0 )
          goto LABEL_56;
        v15 = (PMDL)v30;
      }
      else
      {
        memmove(v16, i, 8 * v11);
      }
      v17 = (__int64)v31;
      if ( v31->ApcState.Process != Process )
      {
        KiStackAttachProcess(Process, 0, (__int64)v40);
        v9 |= 1u;
        v17 = (__int64)v31;
      }
      v34 = Process[1].ActiveProcessors.Bitmap[3];
      if ( !v34 )
        break;
      v36 = (unsigned __int64 *)(&v15->Next + v11);
      v13 = 0;
      LOCK_ADDRESS_SPACE(v17, (__int64)Process);
      if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        UNLOCK_ADDRESS_SPACE((__int64)v31, (__int64)Process);
        v13 = -1073741558;
        goto LABEL_56;
      }
      --v31->SpecialApcDisable;
      BugCheckParameter2 = v34 + 16;
      ExAcquireAutoExpandPushLockExclusive(v34 + 16, 0LL);
      v18 = (unsigned __int64 *)v34;
      v19 = *(signed __int64 **)(v34 + 8);
      v20 = v30;
      v21 = (unsigned __int64)v36;
      if ( v30 < v36 )
      {
        while ( 1 )
        {
          v22 = *v20;
          if ( *v20 >= *v18 || !_bittest64(v19, v22) )
            break;
          ++v35;
          _bittestandreset64(v19, v22);
          v23 = *(_QWORD **)(48 * v22 - 0x58000000000LL + 8);
          if ( v23 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(48 * v22 - 0x58000000000LL + 8), 0LL);
            *v23 = 0LL;
            if ( MiPteInShadowRange((unsigned __int64)v23) )
              MiWritePteShadow(v24, 0LL);
            v18 = (unsigned __int64 *)v34;
          }
          v30 = ++v20;
          if ( (unsigned __int64)v20 >= v21 )
            goto LABEL_41;
        }
        v13 = -1073741800;
LABEL_41:
        v7 = v32;
        Process = (_KPROCESS *)Object;
      }
      KeFlushTb(1u, 0);
      ExReleaseAutoExpandPushLockExclusive((_DWORD *)BugCheckParameter2, 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)v31);
      v25 = ((char *)v30 - (char *)Mdl - 48) >> 3;
      v30 = (unsigned __int64 *)v25;
      if ( v25 )
        MiReturnProcessCommitment((__int64)Process, v25);
      UNLOCK_ADDRESS_SPACE((__int64)v31, (__int64)Process);
      v26 = v30;
      Mdl->ByteCount = (_DWORD)v30 << 12;
      if ( v26 )
      {
        v27 = -(__int64)v26;
        _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[2].Affinity.Bitmap[7], v27);
        _InterlockedExchangeAdd64((volatile signed __int64 *)ProcessPartition + 919, v27);
        Process = (_KPROCESS *)Object;
        MiSynchronizePageFree((__int64)Object);
        Mdl->MdlFlags |= 2u;
        MiFreePagesFromMdl((ULONG_PTR)Mdl, 0x80000000);
        v7 = v32;
        v26 = v30;
      }
      v7 -= (unsigned __int64)v26;
      v32 = v7;
      if ( v13 || !v7 )
        goto LABEL_56;
      if ( (v9 & 1) != 0 )
      {
        KiUnstackDetachProcess((struct _KTHREAD *)v40, 0);
        v9 &= ~1u;
      }
      if ( Process[1].ActiveProcessors.Bitmap[7] )
        i = (char *)Src + 4 * v11;
      else
        i = (char *)Src + 8 * v11;
    }
    v13 = -1073741585;
  }
LABEL_56:
  if ( Mdl != (PMDL)v41 )
  {
    Mdl->MdlFlags &= ~2u;
    IoFreeMdl(Mdl);
  }
  if ( (v9 & 1) != 0 )
    KiUnstackDetachProcess((struct _KTHREAD *)v40, 0);
  if ( (v9 & 2) != 0 )
    ObfDereferenceObjectWithTag(Process, 0x68506D4Du);
  *v39 = v35;
  return v13;
}

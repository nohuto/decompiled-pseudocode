/*
 * XREFs of NtFreeUserPhysicalPages @ 0x1406A6AD8
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     MiReturnProcessCommitment @ 0x14008D1B8 (MiReturnProcessCommitment.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiFreePagesFromMdl @ 0x1400E2D98 (MiFreePagesFromMdl.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14010E920 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14010FFE0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MiSynchronizePageFree @ 0x140224B8C (MiSynchronizePageFree.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     MiCaptureUlongPtrArray @ 0x1406A5D90 (MiCaptureUlongPtrArray.c)
 */

NTSTATUS __stdcall NtFreeUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  struct _KTHREAD *CurrentThread; // rdx
  KPROCESSOR_MODE PreviousMode; // r9
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r15
  int v10; // edi
  _BYTE *v11; // r13
  unsigned __int64 v12; // r12
  PMDL v13; // rax
  _KPROCESS *Process; // rsi
  NTSTATUS v15; // r14d
  unsigned __int64 *v16; // r8
  char *v17; // rdx
  unsigned __int64 *v18; // r13
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int64 *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 *v25; // rcx
  unsigned __int64 *v26; // r15
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rsi
  __int64 v30; // r8
  __int16 v31; // ax
  __int64 v32; // r13
  __int64 v33; // r15
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-328h]
  PMDL Mdl; // [rsp+50h] [rbp-318h]
  PVOID Object; // [rsp+58h] [rbp-310h] BYREF
  struct _KTHREAD *v37; // [rsp+60h] [rbp-308h]
  unsigned __int64 v38; // [rsp+68h] [rbp-300h]
  void *Src; // [rsp+70h] [rbp-2F8h]
  unsigned __int64 *v40; // [rsp+78h] [rbp-2F0h]
  unsigned __int64 v41; // [rsp+80h] [rbp-2E8h]
  unsigned __int64 *v42; // [rsp+88h] [rbp-2E0h]
  signed __int64 *v43; // [rsp+90h] [rbp-2D8h]
  __int16 *ProcessPartition; // [rsp+98h] [rbp-2D0h]
  unsigned __int64 *v45; // [rsp+A0h] [rbp-2C8h]
  PULONG_PTR v46; // [rsp+A8h] [rbp-2C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-2B8h]
  _BYTE v48[48]; // [rsp+C0h] [rbp-2A8h] BYREF
  _BYTE v49[560]; // [rsp+F0h] [rbp-278h] BYREF

  Src = UserPfnArray;
  v46 = NumberOfPages;
  CurrentThread = KeGetCurrentThread();
  v37 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v7 = NumberOfPages;
    if ( (unsigned __int64)NumberOfPages >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v8 = *NumberOfPages;
    v38 = *NumberOfPages;
    *NumberOfPages = 0LL;
  }
  else
  {
    v8 = *NumberOfPages;
    v38 = *NumberOfPages;
  }
  if ( !v8 )
    return -1073741584;
  v10 = 0;
  v41 = 0LL;
  v11 = 0LL;
  Mdl = 0LL;
  v12 = 0LL;
  if ( v8 > 0x40 )
  {
    v12 = v8;
    if ( v8 > 0xFFFFE )
      v12 = 1048574LL;
    do
    {
      v13 = IoAllocateMdl(0LL, (_DWORD)v12 << 12, 0, 0, 0LL);
      Mdl = v13;
      if ( v13 )
        break;
      v12 >>= 1;
    }
    while ( v12 > 0x40 );
    v10 = 0;
    v11 = v13;
    CurrentThread = v37;
    PreviousMode = AccessMode;
  }
  if ( !v11 )
  {
    v12 = 64LL;
    v11 = v49;
    Mdl = (PMDL)v49;
  }
  Process = CurrentThread->ApcState.Process;
  Object = Process;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Object = Process;
    goto LABEL_20;
  }
  v15 = ObReferenceObjectByHandleWithTag(
          ProcessHandle,
          8u,
          (POBJECT_TYPE)PsProcessType,
          PreviousMode,
          0x68506D4Du,
          &Object,
          0LL);
  Process = (_KPROCESS *)Object;
  if ( v15 >= 0 )
  {
    v10 = 2;
LABEL_20:
    ProcessPartition = MiGetProcessPartition((__int64)Process);
    v16 = (unsigned __int64 *)(v11 + 48);
    v42 = (unsigned __int64 *)(v11 + 48);
    v17 = (char *)Src;
    while ( 1 )
    {
      if ( v8 < v12 )
        v12 = v8;
      *(_QWORD *)v11 = 0LL;
      *((_WORD *)v11 + 4) = 8 * ((((v12 << 12) + 4095) >> 12) + 6);
      *((_WORD *)v11 + 5) = 0;
      *((_QWORD *)v11 + 4) = 0LL;
      *((_DWORD *)v11 + 11) = 0;
      *((_DWORD *)v11 + 10) = (_DWORD)v12 << 12;
      v18 = v16;
      v10 &= ~1u;
      if ( AccessMode )
      {
        v15 = MiCaptureUlongPtrArray(v16, v17, v12);
        if ( v15 < 0 )
          goto LABEL_60;
      }
      else
      {
        memmove(v16, v17, 8 * v12);
      }
      v21 = (__int64)v37;
      if ( v37->ApcState.Process != Process )
      {
        KiStackAttachProcess(Process, 0, (__int64)v48);
        v10 |= 1u;
        v21 = (__int64)v37;
      }
      v22 = (unsigned __int64 *)Process[1].ActiveProcessors.Bitmap[3];
      v40 = v22;
      if ( !v22 || !*v22 )
        break;
      v15 = 0;
      LOCK_ADDRESS_SPACE(v21, (__int64)Process, v19, v20);
      if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        UNLOCK_ADDRESS_SPACE((__int64)v37, (__int64)Process);
        v15 = -1073741558;
        goto LABEL_60;
      }
      v25 = v40;
      v45 = (unsigned __int64 *)*v40;
      v43 = (signed __int64 *)v45[1];
      v40 = &v18[v12];
      --v37->SpecialApcDisable;
      BugCheckParameter2 = (ULONG_PTR)(v25 + 1);
      ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)(v25 + 1), 0LL, v23, v24);
      if ( v18 < v40 )
      {
        v26 = v45;
        while ( 1 )
        {
          v27 = *v18;
          if ( *v18 >= *v26 || !_bittest64(v43, v27) )
            break;
          ++v41;
          _bittestandreset64(v43, v27);
          v28 = 48 * v27 - 0x58000000000LL;
          v29 = *(_QWORD **)(v28 + 8);
          if ( v29 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 8), 0LL);
            *v29 = 0LL;
            if ( MiPteInShadowRange((__int64)v29) )
              MiWritePteShadow((__int64)v29, 0LL);
          }
          if ( ++v18 >= v40 )
            goto LABEL_42;
        }
        v15 = -1073741800;
LABEL_42:
        v8 = v38;
        Process = (_KPROCESS *)Object;
      }
      KeFlushTb(1, 0);
      ExReleaseAutoExpandPushLockExclusive((_DWORD *)BugCheckParameter2, 0LL);
      v30 = (__int64)v37;
      v31 = v37->SpecialApcDisable + 1;
      v37->SpecialApcDisable = v31;
      if ( !v31 && *(_QWORD *)(v30 + 152) != v30 + 152 )
      {
        KiCheckForKernelApcDelivery();
        v30 = (__int64)v37;
      }
      v32 = ((char *)v18 - (char *)Mdl - 48) >> 3;
      if ( v32 )
        MiReturnProcessCommitment((__int64)Process, v32);
      UNLOCK_ADDRESS_SPACE(v30, (__int64)Process);
      Mdl->ByteCount = (_DWORD)v32 << 12;
      if ( v32 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[2].Affinity.Bitmap[4], -v32);
        v33 = (__int64)ProcessPartition;
        _InterlockedExchangeAdd64((volatile signed __int64 *)ProcessPartition + 719, -v32);
        Process = (_KPROCESS *)Object;
        MiSynchronizePageFree((__int64)Object);
        MiFreePagesFromMdl(v33, (ULONG_PTR)Mdl, 1u);
        v8 = v38;
      }
      v8 -= v32;
      v38 = v8;
      if ( v15 || !v8 )
        goto LABEL_60;
      if ( (v10 & 1) != 0 )
      {
        KiUnstackDetachProcess((struct _KTHREAD *)v48, 0);
        v10 &= ~1u;
      }
      if ( Process[1].ActiveProcessors.Bitmap[7] )
        v17 = (char *)Src + 4 * v12;
      else
        v17 = (char *)Src + 8 * v12;
      Src = v17;
      v11 = Mdl;
      v16 = v42;
    }
    v15 = -1073741585;
  }
LABEL_60:
  if ( Mdl != (PMDL)v49 )
    IoFreeMdl(Mdl);
  if ( (v10 & 1) != 0 )
    KiUnstackDetachProcess((struct _KTHREAD *)v48, 0);
  if ( (v10 & 2) != 0 )
    ObfDereferenceObjectWithTag(Process, 0x68506D4Du);
  *v46 = v41;
  return v15;
}

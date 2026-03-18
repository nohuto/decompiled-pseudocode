/*
 * XREFs of NtLockFile @ 0x1404A4FE4
 * Callers:
 *     VerifierNtLockFile @ 0x1407543A0 (VerifierNtLockFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IopSetLockOperationProcess @ 0x14006DB64 (IopSetLockOperationProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1401F1F5C (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1401F2578 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IoSetIoCompletion @ 0x14042D0C8 (IoSetIoCompletion.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x140739E88 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140739F38 (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtLockFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock)
{
  KPROCESSOR_MODE PreviousMode; // r12
  int v12; // esi
  __int64 v13; // r9
  _DWORD *v14; // rax
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v16; // rbx
  NTSTATUS result; // eax
  _DWORD *v18; // rcx
  ULONG64 Status; // rcx
  struct _FILE_OBJECT *v20; // rbx
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // r15
  __int64 (__fastcall *FastIoLock)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT); // r15
  void *v27; // rsi
  char v28; // r12
  int v29; // eax
  int v30; // edx
  ULONG *p_Flags; // rsi
  struct _KTHREAD *v32; // rax
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  NTSTATUS v35; // r15d
  char v36; // r12
  __int64 Irp; // rax
  IRP *v38; // r15
  __int64 v39; // rsi
  CHAR *PoolWithTagPriority; // rcx
  int HandleInformation; // [rsp+28h] [rbp-C0h]
  char v42; // [rsp+50h] [rbp-98h]
  _BYTE v43[7]; // [rsp+51h] [rbp-97h] BYREF
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  PRKEVENT Eventa; // [rsp+60h] [rbp-88h]
  __int128 v46; // [rsp+68h] [rbp-80h] BYREF
  PVOID TokenInformation; // [rsp+78h] [rbp-70h] BYREF
  LONGLONG v48; // [rsp+80h] [rbp-68h] BYREF
  PVOID v49; // [rsp+88h] [rbp-60h] BYREF
  LONGLONG QuadPart; // [rsp+90h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-50h]
  __int64 v52; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v54[2]; // [rsp+B0h] [rbp-38h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  Eventa = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v42 = PreviousMode;
  v12 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, v54);
  v54[1] = (struct _OBJECT_HANDLE_INFORMATION)Object;
  if ( v12 >= 0 )
  {
    v14 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v14 )
    {
      if ( (*v14 & 4) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        LODWORD(TokenInformation) = 0;
        v16 = PsReferencePrimaryToken(Process);
        SeQueryInformationToken(v16, TokenIsAppContainer, &TokenInformation);
        ObfDereferenceObject(v16);
        if ( (_DWORD)TokenInformation )
        {
          ObfDereferenceObject(Object);
          v12 = -1073739504;
        }
      }
    }
  }
  if ( v12 < 0 )
    return v12;
  if ( PreviousMode )
  {
    if ( (v54[0].GrantedAccess & 3) == 0 )
    {
      ObfDereferenceObject(Object);
      return -1073741790;
    }
    v18 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v18 = (_DWORD *)MmUserProbeAddress;
    *v18 = *v18;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] && (*((_DWORD *)Object + 20) & 2) == 0 )
    {
      ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
      Status = (unsigned int)IoStatusBlock->Status;
      IoStatusBlock = (PIO_STATUS_BLOCK)Status;
      if ( Status >= MmUserProbeAddress )
        Status = MmUserProbeAddress;
      *(_DWORD *)Status = *(_DWORD *)Status;
    }
    if ( ((unsigned __int8)ByteOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = ByteOffset->QuadPart;
    if ( ((unsigned __int8)Length & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v48 = Length->QuadPart;
    if ( *((_QWORD *)Object + 22) && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(Object);
      return -1073741811;
    }
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v48 = Length->QuadPart;
  }
  *((_BYTE *)Object + 72) = 1;
  v20 = (struct _FILE_OBJECT *)Object;
  result = IopSetLockOperationProcess((__int64)Object, (__int64)KeGetCurrentThread()->ApcState.Process, 0, v13);
  if ( result >= 0 )
  {
    if ( Event )
    {
      v21 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v49, 0LL);
      Eventa = (PRKEVENT)v49;
      if ( v21 >= 0 )
        KeResetEvent((PRKEVENT)v49);
    }
    RelatedDeviceObject = IoGetRelatedDeviceObject(v20);
    FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
    if ( FastIoDispatch )
    {
      FastIoLock = (__int64 (__fastcall *)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoLock;
      if ( FastIoLock )
      {
        v46 = 0uLL;
        if ( (MmVerifierData & 0x10) != 0 )
          v27 = (void *)VfFastIoSnapState();
        else
          v27 = 0LL;
        LOBYTE(HandleInformation) = FailImmediately;
        v28 = FastIoLock(
                v20,
                &QuadPart,
                &v48,
                CurrentThread->ApcState.Process,
                Key,
                HandleInformation,
                ExclusiveLock,
                &v46,
                RelatedDeviceObject);
        if ( v27 )
          VfFastIoCheckState(v27, (int)FastIoLock);
        if ( v28 )
        {
          if ( ((unsigned __int8)ApcRoutine & 1) != 0 )
          {
            HIDWORD(IoStatusBlock->Pointer) = DWORD2(v46);
            IoStatusBlock->Status = v46;
          }
          else
          {
            *(_OWORD *)&IoStatusBlock->Status = v46;
          }
          if ( Eventa )
          {
            if ( (v20->Flags & 0x8000000) == 0 )
              KeSetEvent(Eventa, 0, 0);
            ObfDereferenceObject(Eventa);
          }
          if ( v20->CompletionContext && ApcContext && (v20->Flags & 0x2000000) == 0 )
          {
            v52 = 0LL;
            v53 = 0LL;
            v43[0] = 0;
            IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v20, v43, &v52, &v53);
            if ( v52 )
            {
              v29 = IoSetIoCompletion(v52, v53, (__int64)ApcContext, v46, *((__int64 *)&v46 + 1), 1u);
              v30 = v46;
              if ( v29 < 0 )
                v30 = -1073741670;
              LODWORD(v46) = v30;
            }
            if ( v43[0] )
              IopDecrementCompletionContextUsageCount((ULONG_PTR)v20);
          }
          ObfDereferenceObject(v20);
          return v46;
        }
      }
    }
    p_Flags = &v20->Flags;
    if ( (v20->Flags & 2) == 0 )
    {
      v36 = 0;
      goto LABEL_69;
    }
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      v20 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
LABEL_67:
      v36 = 1;
LABEL_69:
      if ( (*p_Flags & 0x4000000) == 0 )
        KeResetEvent(&v20->Event);
      LOBYTE(v23) = v36 == 0;
      LOBYTE(v22) = RelatedDeviceObject->StackSize;
      Irp = pIoAllocateIrp(RelatedDeviceObject, v22, v23, retaddr);
      v38 = (IRP *)Irp;
      v49 = (PVOID)Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v20;
        *(_QWORD *)(Irp + 152) = CurrentThread;
        *(_BYTE *)(Irp + 64) = v42;
        *(_QWORD *)(Irp + 80) = Eventa;
        *(_QWORD *)(Irp + 72) = IoStatusBlock;
        *(_QWORD *)(Irp + 88) = ApcRoutine;
        *(_QWORD *)(Irp + 96) = ApcContext;
        v39 = *(_QWORD *)(Irp + 184);
        *(_WORD *)(v39 - 72) = 273;
        *(_QWORD *)(v39 - 24) = v20;
        *(_BYTE *)(v39 - 70) = 0;
        *(_BYTE *)(v39 - 70) = FailImmediately != 0;
        if ( ExclusiveLock )
          *(_BYTE *)(v39 - 70) |= 2u;
        *(_DWORD *)(v39 - 56) = Key;
        *(_QWORD *)(v39 - 48) = QuadPart;
        if ( ViVerifierDriverAddedThunkListHead )
        {
          PoolWithTagPriority = (CHAR *)ExAllocatePoolWithTagPriority(
                                          NonPagedPoolNx,
                                          8uLL,
                                          0x20206F49u,
                                          (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
          if ( !PoolWithTagPriority )
            RtlRaiseStatus(-1073741670);
        }
        else
        {
          PoolWithTagPriority = (CHAR *)ExAllocatePoolWithQuotaTag(NonPagedPoolNx, 8uLL, 0x20206F49u);
        }
        *(_QWORD *)PoolWithTagPriority = v48;
        v38->Tail.Overlay.AuxiliaryBuffer = PoolWithTagPriority;
        *(_QWORD *)(v39 - 64) = PoolWithTagPriority;
        return IopSynchronousServiceTail(RelatedDeviceObject, v38, v20, v42, v36, 2);
      }
      else
      {
        IopAllocateIrpCleanup(v20, Eventa);
        return -1073741670;
      }
    }
    v33 = KeGetCurrentThread();
    v34 = v33->KernelApcDisable + 1;
    v33->KernelApcDisable = v34;
    if ( !v34
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
      && !v33->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v20 = (struct _FILE_OBJECT *)Object;
    v35 = IopAcquireFileObjectLock(Object);
    if ( !v43[1] )
      goto LABEL_67;
    if ( Eventa )
      ObfDereferenceObject(Eventa);
    ObfDereferenceObject(v20);
    return v35;
  }
  return result;
}

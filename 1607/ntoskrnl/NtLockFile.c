/*
 * XREFs of NtLockFile @ 0x140469D2C
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopResetEvent @ 0x14002E140 (IopResetEvent.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopSetLockOperationProcess @ 0x140078558 (IopSetLockOperationProcess.c)
 *     IopReferenceFileObject @ 0x14007B6B0 (IopReferenceFileObject.c)
 *     IopAcquireFastLock @ 0x14007BB34 (IopAcquireFastLock.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x140133428 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1401C48B4 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1401C4DC4 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     IoSetIoCompletion @ 0x1404BF508 (IoSetIoCompletion.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1407058F8 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407059A8 (VfFastIoSnapState.c)
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
  char PreviousMode; // r14
  NTSTATUS result; // eax
  __int64 v13; // r9
  __int64 v14; // rcx
  struct _IO_STATUS_BLOCK *Status; // rcx
  _BYTE *v16; // rax
  struct _FILE_OBJECT *v17; // rdi
  NTSTATUS v18; // eax
  struct _KEVENT *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // r12
  __int64 (__fastcall *FastIoLock)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT); // r12
  void *v26; // r14
  char v27; // al
  int v28; // eax
  int v29; // edx
  NTSTATUS v30; // r14d
  char v31; // r12
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 Irp; // rax
  IRP *v35; // r14
  __int64 v36; // rsi
  CHAR *PoolWithQuota_2; // rax
  int HandleInformation; // [rsp+28h] [rbp-B0h]
  char v39; // [rsp+50h] [rbp-88h] BYREF
  char v40; // [rsp+51h] [rbp-87h]
  _BYTE v41[6]; // [rsp+52h] [rbp-86h] BYREF
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  __int128 v43; // [rsp+60h] [rbp-78h] BYREF
  PVOID v44; // [rsp+70h] [rbp-68h]
  LONGLONG QuadPart; // [rsp+78h] [rbp-60h] BYREF
  LONGLONG v46; // [rsp+80h] [rbp-58h] BYREF
  PVOID v47; // [rsp+88h] [rbp-50h] BYREF
  __int64 v48; // [rsp+90h] [rbp-48h] BYREF
  __int64 v49; // [rsp+98h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-38h]
  struct _OBJECT_HANDLE_INFORMATION v51; // [rsp+A8h] [rbp-30h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v40 = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v51);
  if ( result >= 0 )
  {
    if ( PreviousMode )
    {
      if ( (v51.GrantedAccess & 3) == 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
      v14 = (__int64)IoStatusBlock;
      if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] && (*((_DWORD *)Object + 20) & 2) == 0 )
      {
        ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
        Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
        IoStatusBlock = Status;
        Status->Status = Status->Status;
      }
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      if ( ((unsigned __int8)Length & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v46 = Length->QuadPart;
      v16 = Object;
      if ( *((_QWORD *)Object + 22) && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741811;
      }
    }
    else
    {
      QuadPart = ByteOffset->QuadPart;
      v46 = Length->QuadPart;
      v16 = Object;
    }
    v16[72] = 1;
    v17 = (struct _FILE_OBJECT *)Object;
    result = IopSetLockOperationProcess((__int64)Object, (__int64)KeGetCurrentThread()->ApcState.Process, 0, v13);
    if ( result >= 0 )
    {
      if ( Event )
      {
        v18 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v47, 0LL);
        v19 = (struct _KEVENT *)v47;
        v44 = v47;
        if ( v18 >= 0 )
          KeResetEvent((PRKEVENT)v47);
      }
      else
      {
        v19 = (struct _KEVENT *)v44;
      }
      RelatedDeviceObject = IoGetRelatedDeviceObject(v17);
      FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoLock = (__int64 (__fastcall *)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoLock;
        if ( FastIoLock )
        {
          v43 = 0uLL;
          if ( (MmVerifierData & 0x10) != 0 )
            v26 = (void *)VfFastIoSnapState();
          else
            v26 = 0LL;
          LOBYTE(HandleInformation) = FailImmediately;
          v27 = FastIoLock(
                  v17,
                  &QuadPart,
                  &v46,
                  CurrentThread->ApcState.Process,
                  Key,
                  HandleInformation,
                  ExclusiveLock,
                  &v43,
                  RelatedDeviceObject);
          v39 = v27;
          if ( v26 )
          {
            VfFastIoCheckState(v26, (int)FastIoLock);
            v27 = v39;
          }
          if ( v27 )
          {
            if ( ((unsigned __int8)ApcRoutine & 1) != 0 )
            {
              HIDWORD(IoStatusBlock->Pointer) = DWORD2(v43);
              IoStatusBlock->Status = v43;
            }
            else
            {
              *(_OWORD *)&IoStatusBlock->Status = v43;
            }
            if ( v19 )
            {
              if ( (v17->Flags & 0x8000000) == 0 )
                KeSetEvent(v19, 0, 0);
              ObfDereferenceObject(v19);
            }
            if ( v17->CompletionContext && ApcContext && (v17->Flags & 0x2000000) == 0 )
            {
              v48 = 0LL;
              v49 = 0LL;
              v39 = 0;
              IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v17, &v39, &v48, &v49);
              if ( v48 )
              {
                v28 = IoSetIoCompletion(v48, v49, (_DWORD)ApcContext, v43, *((__int64 *)&v43 + 1), 1);
                v29 = v43;
                if ( v28 < 0 )
                  v29 = -1073741670;
                LODWORD(v43) = v29;
              }
              if ( v39 )
                IopDecrementCompletionContextUsageCount((ULONG_PTR)v17);
            }
            ObfDereferenceObject(v17);
            return v43;
          }
          PreviousMode = v40;
        }
      }
      if ( (v17->Flags & 2) != 0 )
      {
        if ( !IopAcquireFastLock((volatile __int32 *)&v17->Type, v20, v21, v22) )
        {
          v30 = IopAcquireFileObjectLock((char *)v17, PreviousMode, (v17->Flags & 4) != 0, v41);
          if ( v41[0] )
          {
            if ( v19 )
              ObfDereferenceObject(v19);
            ObfDereferenceObject(v17);
            return v30;
          }
        }
        v31 = 1;
      }
      else
      {
        v31 = 0;
      }
      IopResetEvent((__int64)v17);
      LOBYTE(v32) = v31 == 0;
      LOBYTE(v33) = RelatedDeviceObject->StackSize;
      Irp = pIoAllocateIrp(RelatedDeviceObject, v33, v32, retaddr);
      v35 = (IRP *)Irp;
      v47 = (PVOID)Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v17;
        *(_QWORD *)(Irp + 152) = CurrentThread;
        *(_BYTE *)(Irp + 64) = v40;
        *(_QWORD *)(Irp + 80) = v19;
        *(_QWORD *)(Irp + 72) = IoStatusBlock;
        *(_QWORD *)(Irp + 88) = ApcRoutine;
        *(_QWORD *)(Irp + 96) = ApcContext;
        v36 = *(_QWORD *)(Irp + 184);
        *(_WORD *)(v36 - 72) = 273;
        *(_QWORD *)(v36 - 24) = v17;
        *(_BYTE *)(v36 - 70) = 0;
        *(_BYTE *)(v36 - 70) = FailImmediately != 0;
        if ( ExclusiveLock )
          *(_BYTE *)(v36 - 70) |= 2u;
        *(_DWORD *)(v36 - 56) = Key;
        *(_QWORD *)(v36 - 48) = QuadPart;
        PoolWithQuota_2 = (CHAR *)IopVerifierExAllocatePoolWithQuota_2();
        *(_QWORD *)PoolWithQuota_2 = v46;
        v35->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_2;
        *(_QWORD *)(v36 - 64) = PoolWithQuota_2;
        return IopSynchronousServiceTail(RelatedDeviceObject, v35, (__int64)v17, 0, v40, v31, 2u);
      }
      else
      {
        IopAllocateIrpCleanup(v17, v19);
        return -1073741670;
      }
    }
  }
  return result;
}

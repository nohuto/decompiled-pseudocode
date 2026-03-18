/*
 * XREFs of NtLockFile @ 0x14048F14C
 * Callers:
 *     VerifierNtLockFile @ 0x1406D08D4 (VerifierNtLockFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     sub_14008E8A8 @ 0x14008E8A8 (sub_14008E8A8.c)
 *     IopSetLockOperationProcess @ 0x1400CC17C (IopSetLockOperationProcess.c)
 *     IopReferenceFileObject @ 0x1400CC3D8 (IopReferenceFileObject.c)
 *     sub_1400CCC88 @ 0x1400CCC88 (sub_1400CCC88.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IoSetIoCompletion @ 0x1404F5440 (IoSetIoCompletion.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1406B9854 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1406B9904 (VfFastIoSnapState.c)
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
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS result; // eax
  __int64 v13; // r9
  _DWORD *v14; // rcx
  _BYTE *v15; // rax
  ULONG64 Status; // rcx
  struct _FILE_OBJECT *v17; // rdi
  struct _KEVENT *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // r12
  __int64 (__fastcall *FastIoLock)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT); // r12
  void *v24; // r15
  char v25; // al
  _QWORD *p_Port; // rcx
  NTSTATUS v27; // eax
  char v28; // r12
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 Irp; // rax
  IRP *v32; // r15
  __int64 v33; // rsi
  CHAR *v34; // rax
  int v35; // eax
  int v36; // edx
  NTSTATUS v37; // r15d
  int HandleInformation; // [rsp+28h] [rbp-A0h]
  char v39; // [rsp+50h] [rbp-78h]
  char v40; // [rsp+51h] [rbp-77h]
  char v41; // [rsp+52h] [rbp-76h]
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  __int128 v43; // [rsp+60h] [rbp-68h] BYREF
  PRKEVENT Eventa; // [rsp+70h] [rbp-58h]
  LONGLONG QuadPart; // [rsp+78h] [rbp-50h] BYREF
  PVOID v46; // [rsp+80h] [rbp-48h] BYREF
  LONGLONG v47; // [rsp+88h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-38h]
  struct _OBJECT_HANDLE_INFORMATION v49; // [rsp+98h] [rbp-30h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+0h]

  Eventa = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v39 = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v49);
  if ( result >= 0 )
  {
    if ( PreviousMode )
    {
      if ( (v49.GrantedAccess & 3) == 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
      v14 = &IoStatusBlock->0;
      if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
        v14 = (_DWORD *)MmUserProbeAddress;
      *v14 = *v14;
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
      v47 = Length->QuadPart;
      v15 = Object;
      if ( *((_QWORD *)Object + 22) && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741811;
      }
    }
    else
    {
      QuadPart = ByteOffset->QuadPart;
      v47 = Length->QuadPart;
      v15 = Object;
    }
    v15[72] = 1;
    v17 = (struct _FILE_OBJECT *)Object;
    result = IopSetLockOperationProcess((__int64)Object, (__int64)KeGetCurrentThread()->ApcState.Process, 0, v13);
    if ( result >= 0 )
    {
      if ( Event )
      {
        v27 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v46, 0LL);
        v18 = (struct _KEVENT *)v46;
        Eventa = (PRKEVENT)v46;
        if ( v27 >= 0 )
          KeResetEvent((PRKEVENT)v46);
      }
      else
      {
        v18 = Eventa;
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
            v24 = (void *)VfFastIoSnapState();
          else
            v24 = 0LL;
          LOBYTE(HandleInformation) = FailImmediately;
          v25 = FastIoLock(
                  v17,
                  &QuadPart,
                  &v47,
                  CurrentThread->ApcState.Process,
                  Key,
                  HandleInformation,
                  ExclusiveLock,
                  &v43,
                  RelatedDeviceObject);
          v41 = v25;
          if ( v24 )
          {
            VfFastIoCheckState(v24, (int)FastIoLock);
            v25 = v41;
          }
          if ( v25 )
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
            if ( v18 )
            {
              if ( (v17->Flags & 0x8000000) == 0 )
                KeSetEvent(v18, 0, 0);
              ObfDereferenceObject(v18);
            }
            p_Port = &v17->CompletionContext->Port;
            if ( p_Port && ApcContext && (v17->Flags & 0x2000000) == 0 )
            {
              v35 = IoSetIoCompletion(*p_Port, p_Port[1], (_DWORD)ApcContext, v43, *((__int64 *)&v43 + 1), 1);
              v36 = v43;
              if ( v35 < 0 )
                v36 = -1073741670;
              LODWORD(v43) = v36;
            }
            ObfDereferenceObject(v17);
            return v43;
          }
        }
      }
      if ( (v17->Flags & 2) != 0 )
      {
        if ( !sub_14008E8A8((volatile __int32 *)&v17->Type) )
        {
          v37 = IopAcquireFileObjectLock(v17);
          if ( v40 )
          {
            if ( v18 )
              ObfDereferenceObject(v18);
            ObfDereferenceObject(v17);
            return v37;
          }
        }
        v28 = 1;
      }
      else
      {
        v28 = 0;
      }
      IopResetEvent((__int64)v17, v19, v20);
      LOBYTE(v29) = v28 == 0;
      LOBYTE(v30) = RelatedDeviceObject->StackSize;
      Irp = pIoAllocateIrp(RelatedDeviceObject, v30, v29, retaddr);
      v32 = (IRP *)Irp;
      v46 = (PVOID)Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v17;
        *(_QWORD *)(Irp + 152) = CurrentThread;
        *(_BYTE *)(Irp + 64) = v39;
        *(_QWORD *)(Irp + 80) = v18;
        *(_QWORD *)(Irp + 72) = IoStatusBlock;
        *(_QWORD *)(Irp + 88) = ApcRoutine;
        *(_QWORD *)(Irp + 96) = ApcContext;
        v33 = *(_QWORD *)(Irp + 184);
        *(_WORD *)(v33 - 72) = 273;
        *(_QWORD *)(v33 - 24) = v17;
        *(_BYTE *)(v33 - 70) = 0;
        *(_BYTE *)(v33 - 70) = FailImmediately != 0;
        if ( ExclusiveLock )
          *(_BYTE *)(v33 - 70) |= 2u;
        *(_DWORD *)(v33 - 56) = Key;
        *(_QWORD *)(v33 - 48) = QuadPart;
        v34 = (CHAR *)sub_1400CCC88();
        *(_QWORD *)v34 = v47;
        v32->Tail.Overlay.AuxiliaryBuffer = v34;
        *(_QWORD *)(v33 - 64) = v34;
        return IopSynchronousServiceTail(RelatedDeviceObject, v32, (char *)v17, 0, v39, v28, 2);
      }
      else
      {
        IopAllocateIrpCleanup(v17, v18);
        return -1073741670;
      }
    }
  }
  return result;
}

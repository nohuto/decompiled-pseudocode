/*
 * XREFs of NtQueryEaFile @ 0x14048E36C
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     sub_14008E44C @ 0x14008E44C (sub_14008E44C.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     sub_14008E8A8 @ 0x14008E8A8 (sub_14008E8A8.c)
 *     IopReferenceFileObject @ 0x1400CC3D8 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     sub_1401BCE10 @ 0x1401BCE10 (sub_1401BCE10.c)
 *     sub_1401BCE54 @ 0x1401BCE54 (sub_1401BCE54.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x140490974 (IopSynchronousApiServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryEaFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID EaList,
        ULONG EaListLength,
        PULONG EaIndex,
        BOOLEAN RestartScan)
{
  KPROCESSOR_MODE PreviousMode; // r13
  _DWORD *v12; // rcx
  ULONG *v13; // rcx
  char *v14; // rax
  unsigned int *v15; // rbx
  unsigned int *v16; // rdi
  signed int v17; // ecx
  NTSTATUS result; // eax
  unsigned int v19; // eax
  __int64 v20; // rdx
  NTSTATUS v21; // edi
  struct _KEVENT *v22; // rsi
  struct _FILE_OBJECT *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // r8
  char v26; // r13
  struct _KEVENT *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  IRP *Irp; // rdi
  unsigned __int8 *v31; // rsi
  struct _DEVICE_OBJECT *v32; // rbx
  ULONG Flags; // eax
  ULONG v34; // eax
  struct _IRP *v35; // rcx
  struct _MDL *Mdl; // rcx
  __int64 v37; // r9
  char v38; // [rsp+40h] [rbp-88h]
  char v39; // [rsp+41h] [rbp-87h]
  char v40; // [rsp+42h] [rbp-86h]
  ULONG v41; // [rsp+50h] [rbp-78h]
  struct _KEVENT *v42; // [rsp+58h] [rbp-70h]
  PVOID Object[2]; // [rsp+60h] [rbp-68h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-58h]
  _DWORD v45[2]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v46; // [rsp+80h] [rbp-48h]
  unsigned int *v47; // [rsp+88h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-38h]
  void *retaddr; // [rsp+C8h] [rbp+0h]

  v42 = 0LL;
  v38 = 0;
  v41 = 0;
  v45[0] = 0;
  v45[1] = 0;
  v46 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v39 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( EaList && EaListLength )
    {
      v38 = 1;
      v15 = (unsigned int *)sub_14008E44C((__int64)FileHandle, EaListLength);
      memmove(v15, EaList, EaListLength);
    }
    else
    {
      v15 = 0LL;
    }
    if ( EaIndex )
      v41 = *EaIndex;
LABEL_36:
    v21 = IopReferenceFileObject(FileHandle, 8u, PreviousMode, Object, 0LL);
    v22 = 0LL;
    if ( v21 < 0 )
    {
      if ( v38 )
        ExFreePoolWithTag(v15, 0);
      return v21;
    }
    v23 = (struct _FILE_OBJECT *)Object[0];
    if ( (*((_DWORD *)Object[0] + 20) & 2) != 0 )
    {
      if ( !sub_14008E8A8((volatile __int32 *)Object[0]) )
      {
        v21 = IopAcquireFileObjectLock(v23);
        if ( v40 )
        {
          if ( v38 )
            ExFreePoolWithTag(v15, 0);
LABEL_50:
          ObfDereferenceObject(v23);
          return v21;
        }
      }
      v26 = 1;
    }
    else
    {
      v27 = (struct _KEVENT *)sub_1401BCE54();
      v22 = v27;
      v42 = v27;
      if ( !v27 )
      {
        if ( v38 )
          ExFreePoolWithTag(v15, 0);
        v21 = -1073741670;
        goto LABEL_50;
      }
      KeInitializeEvent(v27, SynchronizationEvent, 0);
      v26 = 0;
    }
    IopResetEvent((__int64)v23, v24, v25);
    DeviceObject = IoGetRelatedDeviceObject(v23);
    LOBYTE(v28) = DeviceObject->StackSize;
    v29 = pIoAllocateIrp(DeviceObject, v28, 0LL, retaddr);
    Irp = (IRP *)v29;
    Object[1] = (PVOID)v29;
    if ( !v29 )
    {
      if ( (v23->Flags & 2) == 0 )
        ExFreePoolWithTag(v22, 0);
      IopAllocateIrpCleanup(v23, 0LL);
      if ( v38 )
        ExFreePoolWithTag(v15, 0);
      return -1073741670;
    }
    *(_QWORD *)(v29 + 192) = v23;
    *(_QWORD *)(v29 + 152) = CurrentThread;
    *(_BYTE *)(v29 + 64) = v39;
    if ( v26 )
    {
      *(_QWORD *)(v29 + 80) = 0LL;
      *(_QWORD *)(v29 + 72) = IoStatusBlock;
    }
    else
    {
      *(_QWORD *)(v29 + 80) = v22;
      *(_QWORD *)(v29 + 72) = v45;
      *(_DWORD *)(v29 + 16) = 4;
    }
    *(_QWORD *)(v29 + 88) = 0LL;
    v31 = (unsigned __int8 *)(*(_QWORD *)(v29 + 184) - 72LL);
    *v31 = 7;
    *((_QWORD *)v31 + 6) = v23;
    if ( v38 )
    {
      *(_QWORD *)(v29 + 160) = v15;
      *((_QWORD *)v31 + 2) = v15;
      *((_DWORD *)v31 + 6) = EaListLength;
    }
    v32 = DeviceObject;
    Flags = DeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      v34 = Length;
      if ( !Length )
      {
        Irp->AssociatedIrp.MasterIrp = 0LL;
        Irp->Flags |= 0x50u;
LABEL_76:
        *((_DWORD *)v31 + 2) = v34;
        *((_DWORD *)v31 + 8) = v41;
        v31[2] = 0;
        v31[2] = RestartScan != 0;
        if ( ReturnSingleEntry )
          v31[2] |= 2u;
        if ( EaIndex )
          v31[2] |= 4u;
        result = IopSynchronousServiceTail(v32, Irp, (char *)v23, 0, v39, v26, 2);
        if ( !v26 )
        {
          LOBYTE(v37) = v39;
          return IopSynchronousApiServiceTail((unsigned int)result, v42, Irp, v37, v45, IoStatusBlock);
        }
        return result;
      }
      v35 = (struct _IRP *)sub_14008E44C(0LL, Length);
      Irp->AssociatedIrp.MasterIrp = v35;
      if ( !IopDisableBufferedIoInit )
        memset(v35, 0, Length);
      Irp->Flags |= 0x70u;
      v32 = DeviceObject;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      v34 = Length;
      if ( Length )
      {
        Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        sub_1401BCE10(Mdl, v39, IoWriteAccess, (__int64)v32, *v31);
        v34 = Length;
      }
      goto LABEL_76;
    }
    Irp->UserBuffer = Buffer;
    v34 = Length;
    goto LABEL_76;
  }
  v12 = &IoStatusBlock->0;
  if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
    v12 = (_DWORD *)MmUserProbeAddress;
  *v12 = *v12;
  ProbeForWrite(Buffer, Length, 4u);
  if ( EaIndex )
  {
    v13 = EaIndex;
    if ( (unsigned __int64)EaIndex >= MmUserProbeAddress )
      v13 = (ULONG *)MmUserProbeAddress;
    v41 = *v13;
  }
  if ( !EaList || !EaListLength )
  {
    v15 = 0LL;
    goto LABEL_36;
  }
  v38 = 1;
  if ( ((unsigned __int8)EaList & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (char *)EaList + EaListLength;
  if ( (unsigned __int64)v14 > MmUserProbeAddress || v14 < EaList )
    *(_BYTE *)MmUserProbeAddress = 0;
  v15 = (unsigned int *)sub_14008E44C(MmUserProbeAddress, EaListLength);
  memmove(v15, EaList, EaListLength);
  v16 = v15;
  v47 = v15;
  v17 = EaListLength;
  while ( 1 )
  {
    if ( v17 < 5 )
    {
      ExFreePoolWithTag(v15, 0);
      IoStatusBlock->Status = -2147483628;
      IoStatusBlock->Information = 0LL;
      return -2147483628;
    }
    v19 = *((unsigned __int8 *)v16 + 4) + 6;
    if ( v17 < v19 )
      break;
    v20 = *v16;
    if ( !(_DWORD)v20 )
    {
      if ( (int)(v17 - v19) >= 0 )
        goto LABEL_36;
      break;
    }
    if ( ((*((unsigned __int8 *)v16 + 4) + 9) & 0xFFFFFFFC) != (_DWORD)v20 )
      break;
    if ( (int)v20 < 0 )
      break;
    v17 -= v20;
    if ( v17 < 0 )
      break;
    v16 = (unsigned int *)((char *)v16 + v20);
    v47 = v16;
  }
  ExFreePoolWithTag(v15, 0);
  IoStatusBlock->Status = -2147483628;
  IoStatusBlock->Information = (int)v16 - (int)v15;
  return -2147483628;
}

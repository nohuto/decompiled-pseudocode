/*
 * XREFs of IopSetEaOrQuotaInformationFile @ 0x1405F8964
 * Callers:
 *     NtSetQuotaInformationFile @ 0x1405FC2FC (NtSetQuotaInformationFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     sub_14008E8A8 @ 0x14008E8A8 (sub_14008E8A8.c)
 *     IopReferenceFileObject @ 0x1400CC3D8 (IopReferenceFileObject.c)
 *     sub_1400CC928 @ 0x1400CC928 (sub_1400CC928.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     sub_1401BCE10 @ 0x1401BCE10 (sub_1401BCE10.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x140490974 (IopSynchronousApiServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     IoCheckQuotaBufferValidity @ 0x1405F9B18 (IoCheckQuotaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopSetEaOrQuotaInformationFile(void *a1, ULONG64 a2, char *a3, ULONG a4)
{
  SIZE_T v4; // rbx
  struct _KEVENT *v8; // r15
  KPROCESSOR_MODE PreviousMode; // di
  _DWORD *v10; // rcx
  __int64 result; // rax
  char *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // ebx
  struct _KEVENT *PoolWithTagPriority; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  IRP *Irp; // rsi
  struct _KTHREAD *v20; // rdi
  ULONG Flags; // eax
  _FILE_QUOTA_INFORMATION *v22; // rdi
  int v23; // eax
  struct _MDL *Mdl; // rcx
  char v25; // r12
  char v26; // bl
  char v27; // [rsp+40h] [rbp-78h] BYREF
  char v28; // [rsp+41h] [rbp-77h]
  int v29; // [rsp+44h] [rbp-74h]
  PVOID P; // [rsp+48h] [rbp-70h]
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-68h]
  ULONG ErrorOffset; // [rsp+58h] [rbp-60h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-58h]
  PVOID Object[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v35[6]; // [rsp+78h] [rbp-40h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  KPROCESSOR_MODE v38; // [rsp+E0h] [rbp+28h]

  v4 = a4;
  v8 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v38 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = (_DWORD *)a2;
    if ( a2 >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
    if ( a4 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[a4] > MmUserProbeAddress || &a3[a4] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  result = IopReferenceFileObject(a1, 2u, PreviousMode, Object, 0LL);
  v29 = result;
  if ( (int)result >= 0 )
  {
    v12 = (char *)Object[0];
    if ( (*((_DWORD *)Object[0] + 20) & 2) != 0 )
    {
      if ( sub_14008E8A8((volatile __int32 *)Object[0]) )
      {
LABEL_15:
        v27 = 1;
        goto LABEL_23;
      }
      v15 = IopAcquireFileObjectLock(v12, PreviousMode, (v12[80] & 4) != 0, &v27);
      v29 = v15;
      if ( !v27 )
      {
        v4 = a4;
        goto LABEL_15;
      }
    }
    else
    {
      if ( ViVerifierDriverAddedThunkListHead )
        PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTagPriority(
                                                  NonPagedPoolNx,
                                                  0x18uLL,
                                                  0x20206F49u,
                                                  (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
      v8 = PoolWithTagPriority;
      P = PoolWithTagPriority;
      if ( PoolWithTagPriority )
      {
        KeInitializeEvent(PoolWithTagPriority, SynchronizationEvent, 0);
        v27 = 0;
LABEL_23:
        IopResetEvent((__int64)v12, v13, v14);
        DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v12);
        LOBYTE(v17) = DeviceObject->StackSize;
        v18 = pIoAllocateIrp(DeviceObject, v17, 0LL, retaddr);
        Irp = (IRP *)v18;
        Object[1] = (PVOID)v18;
        if ( !v18 )
        {
          if ( (*((_DWORD *)v12 + 20) & 2) == 0 )
            ExFreePoolWithTag(v8, 0);
          IopAllocateIrpCleanup(v12, 0LL);
          return 3221225626LL;
        }
        *(_QWORD *)(v18 + 192) = v12;
        *(_QWORD *)(v18 + 152) = CurrentThread;
        *(_BYTE *)(v18 + 64) = PreviousMode;
        if ( v27 )
        {
          *(_QWORD *)(v18 + 80) = 0LL;
          *(_QWORD *)(v18 + 72) = a2;
          *(_BYTE *)(v18 + 71) |= 2u;
        }
        else
        {
          *(_QWORD *)(v18 + 80) = v8;
          *(_QWORD *)(v18 + 72) = v35;
          *(_DWORD *)(v18 + 16) = 4;
        }
        *(_QWORD *)(v18 + 88) = 0LL;
        v20 = (struct _KTHREAD *)(*(_QWORD *)(v18 + 184) - 72LL);
        CurrentThread = v20;
        v20->Header.Type = 26;
        v20->StackLimit = v12;
        Flags = DeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          if ( (_DWORD)v4 )
          {
            v28 = 0;
            v22 = (_FILE_QUOTA_INFORMATION *)sub_1400CC928(NonPagedPoolNx, v4);
            Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v22;
            memmove(v22, a3, v4);
            LODWORD(v4) = a4;
            v23 = IoCheckQuotaBufferValidity(v22, a4, &ErrorOffset);
            v29 = v23;
            if ( v23 < 0 )
            {
              v28 = 1;
              *(_DWORD *)a2 = v23;
              *(_QWORD *)(a2 + 8) = ErrorOffset;
              RtlRaiseStatus(v23);
            }
            Irp->Flags |= 0x30u;
            v20 = CurrentThread;
            goto LABEL_42;
          }
          Irp->AssociatedIrp.MasterIrp = 0LL;
        }
        else if ( (Flags & 0x10) != 0 )
        {
          if ( (_DWORD)v4 )
          {
            Mdl = IoAllocateMdl(a3, v4, 0, 1u, Irp);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            v25 = v38;
            sub_1401BCE10(Mdl, v38, IoReadAccess, (__int64)DeviceObject, v20->Header.Type);
            goto LABEL_43;
          }
LABEL_42:
          v25 = v38;
LABEL_43:
          LODWORD(v20->Header.WaitListHead.Flink) = v4;
          v26 = v27;
          result = IopSynchronousServiceTail(DeviceObject, Irp, v12, 0, v25, v27, 2);
          if ( !v26 )
            return IopSynchronousApiServiceTail(result, v8, Irp, v25, v35, (_OWORD *)a2);
          return result;
        }
        Irp->UserBuffer = a3;
        goto LABEL_42;
      }
      v15 = -1073741670;
    }
    ObfDereferenceObject(v12);
    return v15;
  }
  return result;
}

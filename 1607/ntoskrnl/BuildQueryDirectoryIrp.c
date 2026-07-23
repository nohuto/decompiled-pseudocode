/*
 * XREFs of BuildQueryDirectoryIrp @ 0x1404F0410
 * Callers:
 *     NtQueryDirectoryFile @ 0x1404F0330 (NtQueryDirectoryFile.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140079FA0 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopFileObjectRevoked @ 0x1400CF590 (IopFileObjectRevoked.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopProbeAndLockPages_0 @ 0x1401CAC3C (IopProbeAndLockPages_0.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 */

__int64 __fastcall BuildQueryDirectoryIrp(
        void *a1,
        void *a2,
        LARGE_INTEGER a3,
        void *a4,
        struct _IO_STATUS_BLOCK *a5,
        volatile void *Address,
        SIZE_T Length,
        ULONG a8,
        char a9,
        __int128 *a10,
        char a11,
        char a12,
        _BYTE *a13,
        PDEVICE_OBJECT *a14,
        PIRP *a15,
        struct _FILE_OBJECT **a16,
        PIRP Irp)
{
  void *v17; // rbx
  struct _KTHREAD *CurrentThread; // r9
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 result; // rax
  SIZE_T v23; // rdx
  ULONG v24; // r8d
  unsigned __int64 v25; // rcx
  const void *v26; // r15
  unsigned __int16 v27; // r14
  UNICODE_STRING *PoolWithQuota; // rsi
  __int64 v29; // rdx
  int v30; // edi
  __int64 v31; // r8
  __int64 v32; // r9
  struct _FILE_OBJECT *v33; // rbx
  ULONG *p_Flags; // r14
  struct _KTHREAD *v35; // rax
  _BYTE *v36; // rdi
  __int64 Status; // rcx
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v39; // r8
  PIRP v40; // rax
  __int64 v41; // rcx
  IRP *v42; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  ULONG Flags; // eax
  ULONG v45; // r13d
  struct _IRP *v46; // rax
  struct _MDL *Mdl; // rcx
  __int64 v48; // r8
  char v49; // al
  UNICODE_STRING *P; // [rsp+38h] [rbp-80h]
  PVOID Object; // [rsp+40h] [rbp-78h] BYREF
  PVOID v52; // [rsp+48h] [rbp-70h]
  PVOID v53; // [rsp+50h] [rbp-68h] BYREF
  struct _KTHREAD *v54; // [rsp+58h] [rbp-60h]
  PVOID v55; // [rsp+60h] [rbp-58h]
  __int128 v56; // [rsp+68h] [rbp-50h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v17 = a1;
  v52 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v54 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(Irp->Type) = PreviousMode;
  if ( !PreviousMode )
  {
LABEL_21:
    v25 = (unsigned __int64)a10;
    if ( !a10 )
      goto LABEL_37;
    if ( PreviousMode )
    {
      if ( (unsigned __int64)a10 >= 0x7FFFFFFF0000LL )
        v25 = 0x7FFFFFFF0000LL;
      LODWORD(v56) = *(_DWORD *)v25;
      v26 = *(const void **)(v25 + 8);
      *((_QWORD *)&v56 + 1) = v26;
    }
    else
    {
      v56 = *a10;
      v26 = (const void *)*((_QWORD *)&v56 + 1);
    }
    if ( (v56 & 1) != 0 )
      return 3221225485LL;
    v27 = v56;
    if ( (_WORD)v56 )
    {
      if ( PreviousMode )
      {
        v25 = (unsigned __int64)v26 + (unsigned __int16)v56;
        if ( v25 > 0x7FFFFFFF0000LL || v25 < (unsigned __int64)v26 )
          MEMORY[0x7FFFFFFF0000] = 0;
        if ( (unsigned __int16)v56 >= 0x200u )
          RtlRaiseStatus(-1073741811);
      }
      PoolWithQuota = (UNICODE_STRING *)IopVerifierExAllocatePoolWithQuota(v25, (unsigned __int16)v56 + 16LL);
      P = PoolWithQuota;
      memmove(&PoolWithQuota[1], v26, (unsigned __int16)v56);
      PoolWithQuota->Length = v56;
      PoolWithQuota->MaximumLength = v27;
      PoolWithQuota->Buffer = &PoolWithQuota[1].Length;
      v17 = a1;
    }
    else
    {
LABEL_37:
      PoolWithQuota = 0LL;
    }
    v30 = ObReferenceObjectByHandle(v17, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
    v33 = (struct _FILE_OBJECT *)Object;
    v55 = Object;
    if ( v30 >= 0 && IopFileObjectRevoked((__int64)Object) )
    {
      ObfDereferenceObject(v33);
      v30 = -1073739504;
      goto LABEL_42;
    }
    if ( v30 < 0 )
    {
LABEL_42:
      if ( PoolWithQuota )
        ExFreePoolWithTag(PoolWithQuota, 0);
      return (unsigned int)v30;
    }
    *a16 = v33;
    if ( v33->CompletionContext && (a3.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(v33);
      if ( PoolWithQuota )
        ExFreePoolWithTag(PoolWithQuota, 0);
      return 3221225485LL;
    }
    if ( a2 )
    {
      v30 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v53, 0LL);
      v52 = v53;
      if ( v30 < 0 )
      {
        if ( PoolWithQuota )
          ExFreePoolWithTag(PoolWithQuota, 0);
LABEL_88:
        ObfDereferenceObject(v33);
        return (unsigned int)v30;
      }
      KeResetEvent((PRKEVENT)v53);
    }
    p_Flags = &v33->Flags;
    if ( (v33->Flags & 2) != 0 )
    {
      v35 = KeGetCurrentThread();
      --v35->KernelApcDisable;
      if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
      {
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v29, v31, v32);
        v33 = (struct _FILE_OBJECT *)Object;
        v30 = IopAcquireFileObjectLock((char *)Object, PreviousMode, (*(_BYTE *)p_Flags & 4) != 0, &a12);
        if ( a12 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
          if ( v52 )
            ObfDereferenceObject(v52);
          goto LABEL_88;
        }
      }
      else
      {
        v33 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
      }
      v36 = a13;
      *a13 = 1;
      PoolWithQuota = P;
    }
    else
    {
      v36 = a13;
      *a13 = 0;
      if ( PreviousMode )
      {
        if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
        {
          a3.QuadPart |= 1uLL;
          Status = (unsigned int)a5->Status;
          a5 = (struct _IO_STATUS_BLOCK *)Status;
          *(_DWORD *)Status = *(_DWORD *)Status;
        }
        PoolWithQuota = P;
        v33 = (struct _FILE_OBJECT *)Object;
      }
    }
    if ( (*p_Flags & 0x4000000) == 0 )
      KeResetEvent(&v33->Event);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v33);
    *a14 = RelatedDeviceObject;
    LOBYTE(v39) = *v36 == 0;
    v40 = (PIRP)pIoAllocateIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, v39, retaddr);
    v42 = v40;
    Irp = v40;
    if ( !v40 )
    {
      IopAllocateIrpCleanup(v33, v52);
      if ( PoolWithQuota )
        ExFreePoolWithTag(PoolWithQuota, 0);
      return 3221225626LL;
    }
    *a15 = v40;
    v40->Tail.Overlay.OriginalFileObject = v33;
    v40->Tail.Overlay.Thread = v54;
    v40->RequestorMode = PreviousMode;
    v40->UserEvent = (PKEVENT)v52;
    v40->UserIosb = a5;
    v40->Overlay.AllocationSize = a3;
    v40->Overlay.AsynchronousParameters.UserApcContext = a4;
    CurrentStackLocation = v40->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 268;
    CurrentStackLocation[-1].FileObject = v33;
    v40->Tail.Overlay.AuxiliaryBuffer = (PCHAR)PoolWithQuota;
    v40->AssociatedIrp.MasterIrp = 0LL;
    v40->MdlAddress = 0LL;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      v45 = Length;
      v46 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v41, (unsigned int)Length);
      v42->AssociatedIrp.MasterIrp = v46;
      if ( !IopDisableBufferedIoInit )
        memset(v46, 0, (unsigned int)Length);
      v42->Flags = 112;
    }
    else
    {
      if ( (Flags & 0x10) != 0 )
      {
        v45 = Length;
        Mdl = IoAllocateMdl((PVOID)Address, Length, 0, 1u, v42);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        IopProbeAndLockPages_0(
          Mdl,
          PreviousMode,
          v48,
          (__int64)RelatedDeviceObject,
          CurrentStackLocation[-1].MajorFunction);
        goto LABEL_83;
      }
      v45 = Length;
    }
    v42->UserBuffer = (PVOID)Address;
LABEL_83:
    CurrentStackLocation[-1].Parameters.Read.Length = v45;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a8;
    CurrentStackLocation[-1].Parameters.Create.EaLength = 0;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = PoolWithQuota;
    CurrentStackLocation[-1].Flags = 0;
    v49 = CurrentStackLocation[-1].Flags;
    if ( a11 )
      v49 = 1;
    CurrentStackLocation[-1].Flags = v49;
    if ( a9 )
      CurrentStackLocation[-1].Flags |= 2u;
    v42->Flags |= 0x800u;
    return 0LL;
  }
  v20 = (__int64)a5;
  if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
    v20 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v20 = *(_DWORD *)v20;
  if ( a8 == 1 )
  {
    v21 = 72;
LABEL_14:
    if ( (unsigned int)Length < v21 )
      return 3221225476LL;
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      v23 = (unsigned int)Length;
      v24 = 4;
    }
    else
    {
      v24 = *((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)a8);
      v23 = (unsigned int)Length;
    }
    ProbeForWrite(Address, v23, v24);
    goto LABEL_21;
  }
  switch ( a8 )
  {
    case 2u:
    case 0x1Du:
      v21 = 72;
      goto LABEL_14;
    case 3u:
    case 0x32u:
    case 0x3Cu:
      v21 = 96;
      goto LABEL_14;
    case 0xCu:
    case 0x21u:
      v21 = 16;
      goto LABEL_14;
    case 0x20u:
      v21 = 56;
      goto LABEL_14;
    case 0x25u:
      v21 = 112;
      goto LABEL_14;
    case 0x26u:
      v21 = 88;
      goto LABEL_14;
    case 0x3Fu:
      v21 = 120;
      goto LABEL_14;
    default:
      result = 3221225475LL;
      break;
  }
  return result;
}

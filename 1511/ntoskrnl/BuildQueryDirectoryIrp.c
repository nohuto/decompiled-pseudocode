/*
 * XREFs of BuildQueryDirectoryIrp @ 0x1404379F0
 * Callers:
 *     NtQueryDirectoryFile @ 0x1404374A0 (NtQueryDirectoryFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     IopFileObjectRevoked @ 0x14008E37C (IopFileObjectRevoked.c)
 *     sub_14008E44C @ 0x14008E44C (sub_14008E44C.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     sub_1401BCDC8 @ 0x1401BCDC8 (sub_1401BCDC8.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 */

__int64 __fastcall BuildQueryDirectoryIrp(
        void *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        volatile void *Address,
        SIZE_T Length,
        int a8,
        char a9,
        __int128 *a10,
        char a11,
        char a12,
        _BYTE *a13,
        PDEVICE_OBJECT *a14,
        __int64 *a15,
        struct _FILE_OBJECT **a16,
        PIRP Irp)
{
  void *v17; // rbx
  struct _KTHREAD *CurrentThread; // r9
  KPROCESSOR_MODE PreviousMode; // r12
  _DWORD *v20; // rcx
  unsigned int v21; // eax
  __int64 result; // rax
  void *v23; // r13
  ULONG64 v24; // rcx
  const void *v25; // r15
  unsigned __int16 v26; // r14
  char *v27; // rsi
  NTSTATUS v28; // edi
  struct _FILE_OBJECT *v29; // rbx
  ULONG *p_Flags; // r14
  struct _KTHREAD *v31; // rax
  _BYTE *v32; // rdi
  ULONG64 v33; // rcx
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rcx
  IRP *v38; // r14
  __int64 v39; // rdi
  ULONG Flags; // eax
  struct _IRP *v41; // rax
  struct _MDL *Mdl; // rcx
  __int64 v43; // r8
  char v44; // al
  char *P; // [rsp+38h] [rbp-80h]
  PVOID Object; // [rsp+40h] [rbp-78h] BYREF
  PVOID v47; // [rsp+48h] [rbp-70h]
  PVOID v48; // [rsp+50h] [rbp-68h] BYREF
  struct _KTHREAD *v49; // [rsp+58h] [rbp-60h]
  PVOID v50; // [rsp+60h] [rbp-58h]
  __int128 v51; // [rsp+68h] [rbp-50h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v17 = a1;
  v47 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v49 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(Irp->Type) = PreviousMode;
  if ( !PreviousMode )
  {
    v23 = (void *)Address;
LABEL_21:
    v24 = (ULONG64)a10;
    if ( !a10 )
      goto LABEL_37;
    if ( PreviousMode )
    {
      if ( (unsigned __int64)a10 >= MmUserProbeAddress )
        v24 = MmUserProbeAddress;
      LODWORD(v51) = *(_DWORD *)v24;
      v25 = *(const void **)(v24 + 8);
      *((_QWORD *)&v51 + 1) = v25;
    }
    else
    {
      v51 = *a10;
      v25 = (const void *)*((_QWORD *)&v51 + 1);
    }
    if ( (v51 & 1) != 0 )
      return 3221225485LL;
    v26 = v51;
    if ( (_WORD)v51 )
    {
      if ( PreviousMode )
      {
        v24 = (ULONG64)v25 + (unsigned __int16)v51;
        if ( v24 > MmUserProbeAddress || v24 < (unsigned __int64)v25 )
          *(_BYTE *)MmUserProbeAddress = 0;
        if ( v26 >= 0x200u )
          RtlRaiseStatus(-1073741811);
      }
      v27 = (char *)sub_14008E44C(v24, v26 + 16LL);
      P = v27;
      memmove(v27 + 16, v25, v26);
      *(_WORD *)v27 = v26;
      *((_WORD *)v27 + 1) = v26;
      *((_QWORD *)v27 + 1) = v27 + 16;
      v17 = a1;
    }
    else
    {
LABEL_37:
      v27 = 0LL;
    }
    v28 = ObReferenceObjectByHandle(v17, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
    v29 = (struct _FILE_OBJECT *)Object;
    v50 = Object;
    if ( v28 >= 0 && IopFileObjectRevoked((__int64)Object) )
    {
      ObfDereferenceObject(v29);
      v28 = -1073739504;
      goto LABEL_42;
    }
    if ( v28 < 0 )
    {
LABEL_42:
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
      return (unsigned int)v28;
    }
    *a16 = v29;
    if ( v29->CompletionContext && (a3 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(v29);
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
      return 3221225485LL;
    }
    if ( a2 )
    {
      v28 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v48, 0LL);
      v47 = v48;
      if ( v28 < 0 )
      {
        if ( v27 )
          ExFreePoolWithTag(v27, 0);
LABEL_89:
        ObfDereferenceObject(v29);
        return (unsigned int)v28;
      }
      KeResetEvent((PRKEVENT)v48);
    }
    p_Flags = &v29->Flags;
    if ( (v29->Flags & 2) != 0 )
    {
      v31 = KeGetCurrentThread();
      --v31->KernelApcDisable;
      if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
      {
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v29 = (struct _FILE_OBJECT *)Object;
        v28 = IopAcquireFileObjectLock(Object);
        if ( a12 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
          if ( v47 )
            ObfDereferenceObject(v47);
          goto LABEL_89;
        }
      }
      else
      {
        v29 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
      }
      v32 = a13;
      *a13 = 1;
      v27 = P;
    }
    else
    {
      v32 = a13;
      *a13 = 0;
      if ( PreviousMode )
      {
        if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
        {
          a3 |= 1uLL;
          v33 = *a5;
          a5 = (unsigned int *)v33;
          if ( v33 >= MmUserProbeAddress )
            v33 = MmUserProbeAddress;
          *(_DWORD *)v33 = *(_DWORD *)v33;
        }
        v27 = P;
        v29 = (struct _FILE_OBJECT *)Object;
      }
    }
    if ( (*p_Flags & 0x4000000) == 0 )
      KeResetEvent(&v29->Event);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v29);
    *a14 = RelatedDeviceObject;
    LOBYTE(v35) = *v32 == 0;
    v36 = pIoAllocateIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, v35, retaddr);
    v38 = (IRP *)v36;
    if ( !v36 )
    {
      IopAllocateIrpCleanup(v29, v47);
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
      return 3221225626LL;
    }
    *a15 = v36;
    *(_QWORD *)(v36 + 192) = v29;
    *(_QWORD *)(v36 + 152) = v49;
    *(_BYTE *)(v36 + 64) = PreviousMode;
    *(_QWORD *)(v36 + 80) = v47;
    *(_QWORD *)(v36 + 72) = a5;
    *(_QWORD *)(v36 + 88) = a3;
    *(_QWORD *)(v36 + 96) = a4;
    v39 = *(_QWORD *)(v36 + 184);
    *(_WORD *)(v39 - 72) = 268;
    *(_QWORD *)(v39 - 24) = v29;
    *(_QWORD *)(v36 + 160) = v27;
    *(_QWORD *)(v36 + 24) = 0LL;
    *(_QWORD *)(v36 + 8) = 0LL;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      v41 = (struct _IRP *)sub_14008E44C(v37, (unsigned int)Length);
      v38->AssociatedIrp.MasterIrp = v41;
      if ( !IopDisableBufferedIoInit )
        memset(v41, 0, (unsigned int)Length);
      v38->Flags = 112;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl(v23, Length, 0, 1u, v38);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      sub_1401BCDC8(Mdl, PreviousMode, v43, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v39 - 72));
      goto LABEL_84;
    }
    v38->UserBuffer = v23;
LABEL_84:
    *(_DWORD *)(v39 - 64) = Length;
    *(_DWORD *)(v39 - 48) = a8;
    *(_DWORD *)(v39 - 40) = 0;
    *(_QWORD *)(v39 - 56) = v27;
    *(_BYTE *)(v39 - 70) = 0;
    v44 = *(_BYTE *)(v39 - 70);
    if ( a11 )
      v44 = 1;
    *(_BYTE *)(v39 - 70) = v44;
    if ( a9 )
      *(_BYTE *)(v39 - 70) |= 2u;
    v38->Flags |= 0x800u;
    return 0LL;
  }
  v20 = a5;
  if ( (unsigned __int64)a5 >= MmUserProbeAddress )
    v20 = (_DWORD *)MmUserProbeAddress;
  *v20 = *v20;
  if ( a8 == 1 )
  {
    v21 = 72;
LABEL_14:
    if ( (unsigned int)Length < v21 )
      return 3221225476LL;
    v23 = (void *)Address;
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
      ProbeForWrite(Address, (unsigned int)Length, 4u);
    else
      ProbeForWrite(Address, (unsigned int)Length, *((unsigned __int8 *)IopQuerySetAlignmentRequirement + a8));
    goto LABEL_21;
  }
  switch ( a8 )
  {
    case 2:
    case 29:
      v21 = 72;
      goto LABEL_14;
    case 3:
    case 50:
    case 60:
      v21 = 96;
      goto LABEL_14;
    case 12:
    case 33:
      v21 = 16;
      goto LABEL_14;
    case 32:
      v21 = 56;
      goto LABEL_14;
    case 37:
      v21 = 112;
      goto LABEL_14;
    case 38:
      v21 = 88;
      goto LABEL_14;
    case 63:
      v21 = 120;
      goto LABEL_14;
    default:
      result = 3221225475LL;
      break;
  }
  return result;
}

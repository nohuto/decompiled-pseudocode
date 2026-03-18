/*
 * XREFs of BuildQueryDirectoryIrp @ 0x1404BC130
 * Callers:
 *     NtQueryDirectoryFile @ 0x1404BC990 (NtQueryDirectoryFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     sub_1401F8708 @ 0x1401F8708 (sub_1401F8708.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
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
  void *v17; // r15
  void *v18; // rbx
  struct _KTHREAD *CurrentThread; // r9
  KPROCESSOR_MODE PreviousMode; // r12
  _DWORD *v21; // rcx
  unsigned int v22; // eax
  __int64 result; // rax
  SIZE_T v24; // rdx
  ULONG v25; // r8d
  ULONG64 v26; // rcx
  const void *v27; // r14
  unsigned __int16 v28; // si
  ULONG64 v29; // rcx
  SIZE_T v30; // rdx
  unsigned __int16 *PoolWithTagPriority; // rax
  unsigned __int16 *v32; // rdi
  NTSTATUS v33; // esi
  struct _FILE_OBJECT *v34; // rbx
  _DWORD *v35; // rax
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v37; // rbx
  ULONG *p_Flags; // r14
  struct _KTHREAD *v39; // rax
  struct _KTHREAD *v40; // rcx
  __int16 v41; // ax
  unsigned int v42; // edi
  _BYTE *v43; // rsi
  ULONG64 v44; // rcx
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v46; // r8
  __int64 v47; // rax
  IRP *v48; // r14
  __int64 v49; // rsi
  ULONG Flags; // eax
  struct _IRP *PoolWithQuotaTag; // rax
  struct _MDL *Mdl; // rcx
  __int64 v53; // r8
  char v54; // al
  unsigned __int16 *P; // [rsp+38h] [rbp-80h]
  PVOID Object; // [rsp+40h] [rbp-78h] BYREF
  PVOID v57; // [rsp+48h] [rbp-70h]
  PVOID TokenInformation; // [rsp+50h] [rbp-68h] BYREF
  __int128 v59; // [rsp+58h] [rbp-60h]
  struct _KTHREAD *v60; // [rsp+68h] [rbp-50h]
  PVOID v61[9]; // [rsp+70h] [rbp-48h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v17 = a2;
  v18 = a1;
  v57 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v60 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(Irp->Type) = PreviousMode;
  if ( PreviousMode )
  {
    v21 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v21 = (_DWORD *)MmUserProbeAddress;
    *v21 = *v21;
    if ( a8 != 1 )
    {
      switch ( a8 )
      {
        case 2:
        case 29:
          v22 = 72;
          goto LABEL_14;
        case 3:
        case 50:
        case 60:
          v22 = 96;
          goto LABEL_14;
        case 12:
        case 33:
          v22 = 16;
          goto LABEL_14;
        case 32:
          v22 = 56;
          goto LABEL_14;
        case 37:
          v22 = 112;
          goto LABEL_14;
        case 38:
          v22 = 88;
          goto LABEL_14;
        case 63:
          v22 = 120;
          goto LABEL_14;
        default:
          result = 3221225475LL;
          break;
      }
      return result;
    }
    v22 = 72;
LABEL_14:
    if ( (unsigned int)Length < v22 )
      return 3221225476LL;
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      v24 = (unsigned int)Length;
      v25 = 4;
    }
    else
    {
      v25 = *((unsigned __int8 *)IopQuerySetAlignmentRequirement + a8);
      v24 = (unsigned int)Length;
    }
    ProbeForWrite(Address, v24, v25);
  }
  v26 = (ULONG64)a10;
  if ( !a10 )
    goto LABEL_41;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)a10 >= MmUserProbeAddress )
      v26 = MmUserProbeAddress;
    LODWORD(v59) = *(_DWORD *)v26;
    v27 = *(const void **)(v26 + 8);
    *((_QWORD *)&v59 + 1) = v27;
  }
  else
  {
    v59 = *a10;
    v27 = (const void *)*((_QWORD *)&v59 + 1);
  }
  if ( (v59 & 1) != 0 )
    return 3221225485LL;
  v28 = v59;
  if ( (_WORD)v59 )
  {
    if ( PreviousMode )
    {
      v29 = (ULONG64)v27 + (unsigned __int16)v59;
      if ( v29 > MmUserProbeAddress || v29 < (unsigned __int64)v27 )
        *(_BYTE *)MmUserProbeAddress = 0;
      if ( v28 >= 0x200u )
        RtlRaiseStatus(-1073741811);
    }
    v30 = v28 + 16LL;
    if ( ViVerifierDriverAddedThunkListHead )
    {
      PoolWithTagPriority = (unsigned __int16 *)ExAllocatePoolWithTagPriority(
                                                  NonPagedPoolNx,
                                                  v30,
                                                  0x20206F49u,
                                                  (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      v32 = PoolWithTagPriority;
      if ( !PoolWithTagPriority )
        RtlRaiseStatus(-1073741670);
    }
    else
    {
      PoolWithTagPriority = (unsigned __int16 *)ExAllocatePoolWithQuotaTag(NonPagedPoolNx, v30, 0x20206F49u);
      v32 = PoolWithTagPriority;
    }
    P = PoolWithTagPriority;
    memmove(v32 + 8, v27, v28);
    *v32 = v28;
    v32[1] = v28;
    *((_QWORD *)v32 + 1) = v32 + 8;
    v18 = a1;
    v17 = a2;
  }
  else
  {
LABEL_41:
    v32 = 0LL;
  }
  v33 = ObReferenceObjectByHandle(v18, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v34 = (struct _FILE_OBJECT *)Object;
  v61[1] = Object;
  if ( v33 >= 0 )
  {
    v35 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v35 )
    {
      if ( (*v35 & 4) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        LODWORD(TokenInformation) = 0;
        v37 = PsReferencePrimaryToken(Process);
        SeQueryInformationToken(v37, TokenIsAppContainer, &TokenInformation);
        ObfDereferenceObject(v37);
        if ( (_DWORD)TokenInformation )
        {
          ObfDereferenceObject(Object);
          v33 = -1073739504;
          v32 = P;
          goto LABEL_49;
        }
        v32 = P;
        v34 = (struct _FILE_OBJECT *)Object;
      }
    }
  }
  if ( v33 < 0 )
  {
LABEL_49:
    if ( v32 )
      ExFreePoolWithTag(v32, 0);
    return (unsigned int)v33;
  }
  *a16 = v34;
  if ( v34->CompletionContext && (a3 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(v34);
    if ( v32 )
      ExFreePoolWithTag(v32, 0);
    return 3221225485LL;
  }
  if ( v17 )
  {
    v33 = ObReferenceObjectByHandle(v17, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, v61, 0LL);
    v57 = v61[0];
    if ( v33 < 0 )
    {
      if ( v32 )
        ExFreePoolWithTag(v32, 0);
      ObfDereferenceObject(v34);
      return (unsigned int)v33;
    }
    KeResetEvent((PRKEVENT)v61[0]);
  }
  p_Flags = &v34->Flags;
  if ( (v34->Flags & 2) == 0 )
  {
    v43 = a13;
    *a13 = 0;
    if ( PreviousMode )
    {
      if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
      {
        a3 |= 1uLL;
        v44 = *a5;
        a5 = (unsigned int *)v44;
        if ( v44 >= MmUserProbeAddress )
          v44 = MmUserProbeAddress;
        *(_DWORD *)v44 = *(_DWORD *)v44;
      }
      v32 = P;
      v34 = (struct _FILE_OBJECT *)Object;
    }
LABEL_82:
    if ( (*p_Flags & 0x4000000) == 0 )
      KeResetEvent(&v34->Event);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v34);
    *a14 = RelatedDeviceObject;
    LOBYTE(v46) = *v43 == 0;
    v47 = pIoAllocateIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, v46, retaddr);
    v48 = (IRP *)v47;
    if ( !v47 )
    {
      IopAllocateIrpCleanup(v34, v57);
      if ( v32 )
        ExFreePoolWithTag(v32, 0);
      return 3221225626LL;
    }
    *a15 = v47;
    *(_QWORD *)(v47 + 192) = v34;
    *(_QWORD *)(v47 + 152) = v60;
    *(_BYTE *)(v47 + 64) = PreviousMode;
    *(_QWORD *)(v47 + 80) = v57;
    *(_QWORD *)(v47 + 72) = a5;
    *(_QWORD *)(v47 + 88) = a3;
    *(_QWORD *)(v47 + 96) = a4;
    v49 = *(_QWORD *)(v47 + 184);
    *(_WORD *)(v49 - 72) = 268;
    *(_QWORD *)(v49 - 24) = v34;
    *(_QWORD *)(v47 + 160) = v32;
    *(_QWORD *)(v47 + 24) = 0LL;
    *(_QWORD *)(v47 + 8) = 0LL;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      if ( ViVerifierDriverAddedThunkListHead )
      {
        PoolWithQuotaTag = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                            NonPagedPoolNx,
                                            (unsigned int)Length,
                                            0x20206F49u,
                                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        if ( !PoolWithQuotaTag )
          RtlRaiseStatus(-1073741670);
      }
      else
      {
        PoolWithQuotaTag = (struct _IRP *)ExAllocatePoolWithQuotaTag(NonPagedPoolNx, (unsigned int)Length, 0x20206F49u);
      }
      v48->AssociatedIrp.MasterIrp = PoolWithQuotaTag;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuotaTag, 0, (unsigned int)Length);
      v48->Flags = 112;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl((PVOID)Address, Length, 0, 1u, v48);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      sub_1401F8708(Mdl, PreviousMode, v53, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v49 - 72));
      goto LABEL_101;
    }
    v48->UserBuffer = (PVOID)Address;
LABEL_101:
    *(_DWORD *)(v49 - 64) = Length;
    *(_DWORD *)(v49 - 48) = a8;
    *(_DWORD *)(v49 - 40) = 0;
    *(_QWORD *)(v49 - 56) = v32;
    *(_BYTE *)(v49 - 70) = 0;
    v54 = *(_BYTE *)(v49 - 70);
    if ( a11 )
      v54 = 1;
    *(_BYTE *)(v49 - 70) = v54;
    if ( a9 )
      *(_BYTE *)(v49 - 70) |= 2u;
    v48->Flags |= 0x800u;
    return 0LL;
  }
  v39 = KeGetCurrentThread();
  --v39->KernelApcDisable;
  if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    v34 = (struct _FILE_OBJECT *)Object;
    ObfReferenceObject(Object);
LABEL_75:
    v43 = a13;
    *a13 = 1;
    v32 = P;
    goto LABEL_82;
  }
  v40 = KeGetCurrentThread();
  v41 = v40->KernelApcDisable + 1;
  v40->KernelApcDisable = v41;
  if ( !v41
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v40->ApcState.ApcListHead[0].Flink != &v40->152
    && !v40->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v34 = (struct _FILE_OBJECT *)Object;
  v42 = IopAcquireFileObjectLock(Object);
  if ( !a12 )
    goto LABEL_75;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v57 )
    ObfDereferenceObject(v57);
  ObfDereferenceObject(v34);
  return v42;
}

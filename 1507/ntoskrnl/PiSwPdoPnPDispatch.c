/*
 * XREFs of PiSwPdoPnPDispatch @ 0x14045ADD4
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x14043B32C (PnpAllocatePWSTR.c)
 *     _PnpStringFromGuid @ 0x140440494 (_PnpStringFromGuid.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x14045B338 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwCompleteCreate @ 0x14045B4C4 (PiSwCompleteCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14045B774 (PiSwDeviceInterfacesUpdateState.c)
 *     PnpAllocateMultiSZ @ 0x14045BA80 (PnpAllocateMultiSZ.c)
 *     PiSwProcessRemove @ 0x140539C30 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x140539CF4 (PiSwDestroyDeviceObject.c)
 */

__int64 __fastcall PiSwPdoPnPDispatch(_QWORD *Object, PIRP Irp)
{
  _QWORD *v2; // r14
  NTSTATUS Status; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int MinorFunction; // ecx
  struct _KTHREAD *CurrentThread; // rax
  PIO_SECURITY_CONTEXT SecurityContext; // r8
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  struct _KTHREAD *v22; // rax
  _QWORD *v23; // r10
  ULONG v24; // ecx
  ULONG v25; // ecx
  ULONG v26; // ecx
  ULONG v27; // ecx
  const wchar_t *v28; // rcx
  NTSTATUS CompatibleIds; // eax
  __int16 v30; // ax
  struct _KTHREAD *v31; // rax
  __int64 v32; // rdx
  ULONG Length; // ecx
  const wchar_t *v34; // rcx
  struct _KTHREAD *v35; // rax
  __int64 v36; // rdx
  GUID *v37; // rax
  struct _KTHREAD *v38; // rax
  wchar_t *v39; // rax
  void *v40; // rcx
  struct _KTHREAD *v41; // rax
  __int64 v42; // rdx
  struct _KTHREAD *v43; // rcx
  __int16 v44; // ax
  struct _KTHREAD *v45; // rax
  __int64 v46; // rdx
  __int16 v47; // ax
  _QWORD *PoolWithTag; // rax
  ULONG_PTR v49; // rdi

  v2 = (_QWORD *)Object[8];
  Status = Irp->IoStatus.Status;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (v2[1] & 0x10) != 0 )
  {
    Status = -1073741810;
    goto LABEL_14;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction <= 0xC )
  {
    if ( MinorFunction != 12 )
    {
      if ( CurrentStackLocation->MinorFunction )
      {
        if ( MinorFunction == 1 )
          goto LABEL_22;
        if ( MinorFunction != 2 )
        {
          if ( CurrentStackLocation->MinorFunction > 6u )
          {
            if ( MinorFunction != 7 )
            {
              if ( MinorFunction != 9 )
                goto LABEL_14;
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
              if ( *v2 )
              {
                SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
                SecurityContext->DesiredAccess = 0;
                SecurityContext->FullCreateOptions = 1;
                SecurityContext[1].SecurityQos = (PSECURITY_QUALITY_OF_SERVICE)0x400000004LL;
                SecurityContext[1].AccessState = (PACCESS_STATE)0x400000004LL;
                *(_QWORD *)&SecurityContext[1].DesiredAccess = 4LL;
                HIDWORD(SecurityContext->SecurityQos) |= 0x40u;
                v10 = HIDWORD(SecurityContext->SecurityQos) | 0x200;
                LODWORD(SecurityContext[2].SecurityQos) = 0;
                HIDWORD(SecurityContext->SecurityQos) = v10;
                v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(16 * (*(_BYTE *)(*v2 + 64LL) & 1))) & 0x10;
                HIDWORD(SecurityContext->SecurityQos) = v11;
                v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(((*(_BYTE *)(*v2 + 64LL) & 2) != 0) << 7)) & 0x80;
                HIDWORD(SecurityContext->SecurityQos) = v12;
                v13 = v12 ^ (v12 ^ (((*(unsigned __int8 *)(*v2 + 64LL) >> 2) & 1) << 17)) & 0x20000;
                HIDWORD(SecurityContext->SecurityQos) = v13;
                HIDWORD(SecurityContext->SecurityQos) = v13 ^ ((unsigned __int16)v13 ^ ((((unsigned int)~*(unsigned __int8 *)(*v2 + 64LL) >> 3) & 1) << 8)) & 0x100;
LABEL_12:
                Status = 0;
                goto LABEL_13;
              }
              goto LABEL_68;
            }
            if ( CurrentStackLocation->Parameters.Read.Length != 4 )
              goto LABEL_14;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x57706E50u);
            v49 = (ULONG_PTR)PoolWithTag;
            if ( PoolWithTag )
            {
              *(_DWORD *)PoolWithTag = 1;
              PoolWithTag[1] = Object;
              ObfReferenceObject(Object);
              Irp->IoStatus.Information = v49;
              goto LABEL_22;
            }
LABEL_76:
            Status = -1073741670;
            goto LABEL_14;
          }
LABEL_22:
          Status = 0;
          goto LABEL_14;
        }
        v41 = KeGetCurrentThread();
        --v41->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
        v42 = ((unsigned __int8)(*((_BYTE *)v2 + 8) | 2) >> 3) & 1;
        *((_DWORD *)v2 + 2) |= 2u;
        PiSwProcessRemove(Object, v42);
        if ( (v2[1] & 8) == 0 )
          PiSwDestroyDeviceObject(Object);
        ExReleaseResourceLite(&PiSwLockObj);
        v43 = KeGetCurrentThread();
        v44 = v43->KernelApcDisable + 1;
        v43->KernelApcDisable = v44;
        if ( v44 )
          goto LABEL_22;
        goto LABEL_71;
      }
      v35 = KeGetCurrentThread();
      --v35->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
      if ( (v2[1] & 1) != 0 )
        goto LABEL_12;
      LOBYTE(v36) = 1;
      Status = PiSwDeviceInterfacesUpdateState(*v2, v36);
      if ( Status < 0 )
        PiSwDeviceInterfacesUpdateState(*v2, 0LL);
      else
        *((_DWORD *)v2 + 2) |= 1u;
LABEL_13:
      ExReleaseResourceLite(&PiSwLockObj);
      v14 = KeGetCurrentThread();
      v15 = v14->KernelApcDisable + 1;
      v14->KernelApcDisable = v15;
      if ( v15 )
        goto LABEL_14;
      goto LABEL_59;
    }
    v31 = KeGetCurrentThread();
    --v31->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v32 = *v2;
    if ( *v2 )
    {
      Length = CurrentStackLocation->Parameters.Read.Length;
      if ( Length )
      {
        if ( Length != 1 )
          goto LABEL_13;
        v34 = *(const wchar_t **)(v32 + 56);
      }
      else
      {
        v34 = *(const wchar_t **)(v32 + 48);
      }
      if ( v34 )
        Status = PnpAllocatePWSTR(v34, 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)&Irp->IoStatus.Information);
      goto LABEL_13;
    }
LABEL_68:
    Status = -1073741810;
    goto LABEL_13;
  }
  v17 = MinorFunction - 19;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( !v19 )
      {
        v37 = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x57706E50u);
        if ( !v37 )
          goto LABEL_76;
        *(_QWORD *)&v37[1].Data1 = 15LL;
        *v37 = GUID_BUS_TYPE_SW_DEVICE;
        Irp->IoStatus.Information = (ULONG_PTR)v37;
        goto LABEL_22;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        Status = CurrentStackLocation->Parameters.SetLock.Lock != 0 ? 0xC00000BB : 0;
        goto LABEL_14;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 != 2 )
          goto LABEL_14;
        PiSwCompleteCreate(Object);
        goto LABEL_22;
      }
      v45 = KeGetCurrentThread();
      --v45->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
      v46 = ((unsigned __int8)(*((_BYTE *)v2 + 8) | 4) >> 3) & 1;
      *((_DWORD *)v2 + 2) |= 4u;
      PiSwProcessRemove(Object, v46);
      ExReleaseResourceLite(&PiSwLockObj);
      v43 = KeGetCurrentThread();
      v47 = v43->KernelApcDisable + 1;
      v43->KernelApcDisable = v47;
      if ( v47 )
        goto LABEL_22;
LABEL_71:
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v43->ApcState.ApcListHead[0].Flink != &v43->152
        && !v43->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      goto LABEL_22;
    }
    v38 = KeGetCurrentThread();
    --v38->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( *v2 )
    {
      if ( (*(_DWORD *)(*v2 + 64LL) & 4) != 0 )
        Irp->IoStatus.Information |= 2uLL;
      else
        Irp->IoStatus.Information &= ~2uLL;
      goto LABEL_12;
    }
    goto LABEL_68;
  }
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  v23 = (_QWORD *)*v2;
  if ( *v2 )
  {
    v24 = CurrentStackLocation->Parameters.Read.Length;
    if ( !v24 )
    {
      v28 = (const wchar_t *)v23[1];
      goto LABEL_29;
    }
    v25 = v24 - 1;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( !v26 )
      {
        CompatibleIds = PiSwDeviceMakeCompatibleIds(*v2, &Irp->IoStatus.Information);
        goto LABEL_30;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        v28 = (const wchar_t *)v23[2];
LABEL_29:
        CompatibleIds = PnpAllocatePWSTR(v28, 0xC8uLL, 0x57706E50u, (PVOID *)&Irp->IoStatus.Information);
LABEL_30:
        Status = CompatibleIds;
        goto LABEL_31;
      }
      if ( v27 == 2 && v23[5] )
      {
        v39 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x57706E50u);
        Irp->IoStatus.Information = (ULONG_PTR)v39;
        if ( v39 )
        {
          CompatibleIds = PnpStringFromGuid(*(int **)(*v2 + 40LL), v39);
          goto LABEL_30;
        }
        Status = -1073741670;
      }
    }
    else
    {
      v40 = (void *)v23[3];
      if ( v40 )
      {
        CompatibleIds = PnpAllocateMultiSZ(v40);
        goto LABEL_30;
      }
    }
  }
  else
  {
    Status = -1073741810;
  }
LABEL_31:
  ExReleaseResourceLite(&PiSwLockObj);
  v14 = KeGetCurrentThread();
  v30 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v30;
  if ( v30 )
    goto LABEL_14;
LABEL_59:
  if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 && !v14->SpecialApcDisable )
    KiCheckForKernelApcDelivery();
LABEL_14:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}

/*
 * XREFs of PiSwPdoPnPDispatch @ 0x14049479C
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x14043FAE0 (PnpAllocatePWSTR.c)
 *     _PnpStringFromGuid @ 0x14045C050 (_PnpStringFromGuid.c)
 *     PiSwDestroyDeviceObject @ 0x140493B44 (PiSwDestroyDeviceObject.c)
 *     PiSwLock @ 0x140494B8C (PiSwLock.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140494BAC (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwProcessRemove @ 0x140494C74 (PiSwProcessRemove.c)
 *     PiSwCompleteCreate @ 0x1404E4050 (PiSwCompleteCreate.c)
 *     PnpAllocateMultiSZ @ 0x1404E48E8 (PnpAllocateMultiSZ.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1404EA67C (PiSwDeviceMakeCompatibleIds.c)
 */

__int64 __fastcall PiSwPdoPnPDispatch(struct _DEVICE_OBJECT *Object, PIRP Irp)
{
  _DWORD *DeviceExtension; // rdi
  signed int Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int MinorFunction; // ecx
  PIO_SECURITY_CONTEXT SecurityContext; // r8
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  const wchar_t *v18; // rcx
  size_t v19; // rdx
  signed int MultiSZ; // eax
  _QWORD *v22; // r10
  ULONG Length; // ecx
  ULONG v24; // ecx
  ULONG v25; // ecx
  ULONG v26; // ecx
  wchar_t *v27; // rax
  __int64 v28; // rdx
  ULONG v29; // ecx
  __int64 v30; // rdx
  GUID *PoolWithTag; // rax
  void *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  _QWORD *v35; // rax
  ULONG_PTR v36; // rbx

  DeviceExtension = Object->DeviceExtension;
  Status = Irp->IoStatus.Status;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (DeviceExtension[2] & 0x10) != 0 )
  {
    Status = -1073741810;
    goto LABEL_26;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 0xC )
  {
    v13 = MinorFunction - 19;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        PiSwLock();
        if ( *(_QWORD *)DeviceExtension )
        {
          if ( (*(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL) & 4) != 0 )
            Irp->IoStatus.Information |= 2uLL;
          else
            Irp->IoStatus.Information &= ~2uLL;
          goto LABEL_12;
        }
LABEL_69:
        Status = -1073741810;
        goto LABEL_25;
      }
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
        {
          Status = CurrentStackLocation->Parameters.SetLock.Lock != 0 ? 0xC00000BB : 0;
          goto LABEL_26;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
          PiSwLock();
          v33 = ((unsigned __int8)(*((_BYTE *)DeviceExtension + 8) | 4) >> 3) & 1;
          DeviceExtension[2] |= 4u;
          PiSwProcessRemove(Object, v33);
LABEL_59:
          ExReleaseResourceLite(&PiSwLockObj);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          goto LABEL_20;
        }
        if ( v17 != 2 )
          goto LABEL_26;
        PiSwCompleteCreate(Object);
      }
      else
      {
        PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x57706E50u);
        if ( !PoolWithTag )
          goto LABEL_67;
        *(_DWORD *)&PoolWithTag[1].Data2 = 0;
        PoolWithTag[1].Data1 = 15;
        *PoolWithTag = GUID_BUS_TYPE_SW_DEVICE;
        Irp->IoStatus.Information = (ULONG_PTR)PoolWithTag;
      }
LABEL_20:
      Status = 0;
      goto LABEL_26;
    }
    PiSwLock();
    v22 = *(_QWORD **)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_69;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length )
    {
      v24 = Length - 1;
      if ( !v24 )
      {
        v32 = (void *)v22[3];
        if ( !v32 )
          goto LABEL_25;
        MultiSZ = PnpAllocateMultiSZ(v32);
        goto LABEL_24;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        MultiSZ = PiSwDeviceMakeCompatibleIds(*(_QWORD *)DeviceExtension, &Irp->IoStatus.Information);
        goto LABEL_24;
      }
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 != 2 || !v22[5] )
          goto LABEL_25;
        v27 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x57706E50u);
        Irp->IoStatus.Information = (ULONG_PTR)v27;
        if ( !v27 )
        {
          Status = -1073741670;
          goto LABEL_25;
        }
        MultiSZ = PnpStringFromGuid(*(int **)(*(_QWORD *)DeviceExtension + 40LL), v27);
        goto LABEL_24;
      }
      v18 = (const wchar_t *)v22[2];
    }
    else
    {
      v18 = (const wchar_t *)v22[1];
    }
    v19 = 200LL;
LABEL_23:
    MultiSZ = PnpAllocatePWSTR(v18, v19, 0x57706E50u, (PVOID *)&Irp->IoStatus.Information);
LABEL_24:
    Status = MultiSZ;
    goto LABEL_25;
  }
  if ( MinorFunction == 12 )
  {
    PiSwLock();
    v28 = *(_QWORD *)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_69;
    v29 = CurrentStackLocation->Parameters.Read.Length;
    if ( v29 )
    {
      if ( v29 != 1 )
        goto LABEL_25;
      v18 = *(const wchar_t **)(v28 + 56);
    }
    else
    {
      v18 = *(const wchar_t **)(v28 + 48);
    }
    if ( !v18 )
      goto LABEL_25;
    v19 = 0x7FFFFFFFLL;
    goto LABEL_23;
  }
  if ( !CurrentStackLocation->MinorFunction )
  {
    PiSwLock();
    if ( (DeviceExtension[2] & 1) == 0 )
    {
      LOBYTE(v30) = 1;
      Status = PiSwDeviceInterfacesUpdateState(*(_QWORD *)DeviceExtension, v30);
      if ( Status < 0 )
        PiSwDeviceInterfacesUpdateState(*(_QWORD *)DeviceExtension, 0LL);
      else
        DeviceExtension[2] |= 1u;
      goto LABEL_25;
    }
    goto LABEL_12;
  }
  if ( MinorFunction == 1 )
    goto LABEL_20;
  if ( MinorFunction == 2 )
  {
    PiSwLock();
    v34 = ((unsigned __int8)(*((_BYTE *)DeviceExtension + 8) | 2) >> 3) & 1;
    DeviceExtension[2] |= 2u;
    PiSwProcessRemove(Object, v34);
    if ( (DeviceExtension[2] & 8) == 0 )
      PiSwDestroyDeviceObject(Object);
    goto LABEL_59;
  }
  if ( CurrentStackLocation->MinorFunction <= 6u )
    goto LABEL_20;
  if ( MinorFunction == 7 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 4 )
      goto LABEL_26;
    v35 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x57706E50u);
    v36 = (ULONG_PTR)v35;
    if ( v35 )
    {
      *(_DWORD *)v35 = 1;
      v35[1] = Object;
      ObfReferenceObject(Object);
      Irp->IoStatus.Information = v36;
      goto LABEL_20;
    }
LABEL_67:
    Status = -1073741670;
    goto LABEL_26;
  }
  if ( MinorFunction == 9 )
  {
    PiSwLock();
    if ( *(_QWORD *)DeviceExtension )
    {
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      SecurityContext->DesiredAccess = 0;
      SecurityContext->FullCreateOptions = 1;
      SecurityContext[1].SecurityQos = (PSECURITY_QUALITY_OF_SERVICE)0x400000004LL;
      SecurityContext[1].AccessState = (PACCESS_STATE)0x400000004LL;
      SecurityContext[1].DesiredAccess = 4;
      HIDWORD(SecurityContext->SecurityQos) |= 0x40u;
      SecurityContext[1].FullCreateOptions = 0;
      LODWORD(SecurityContext[2].SecurityQos) = 0;
      v9 = HIDWORD(SecurityContext->SecurityQos) | 0x200;
      HIDWORD(SecurityContext->SecurityQos) = v9;
      v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(16 * (*(_BYTE *)(*(_QWORD *)DeviceExtension + 64LL) & 1))) & 0x10;
      HIDWORD(SecurityContext->SecurityQos) = v10;
      v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(((*(_BYTE *)(*(_QWORD *)DeviceExtension + 64LL) & 2) != 0) << 7)) & 0x80;
      HIDWORD(SecurityContext->SecurityQos) = v11;
      v12 = v11 ^ (v11 ^ (((*(unsigned __int8 *)(*(_QWORD *)DeviceExtension + 64LL) >> 2) & 1) << 17)) & 0x20000;
      HIDWORD(SecurityContext->SecurityQos) = v12;
      HIDWORD(SecurityContext->SecurityQos) = v12 ^ ((unsigned __int16)v12 ^ ((((unsigned int)~*(unsigned __int8 *)(*(_QWORD *)DeviceExtension + 64LL) >> 3) & 1) << 8)) & 0x100;
LABEL_12:
      Status = 0;
LABEL_25:
      ExReleaseResourceLite(&PiSwLockObj);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_26;
    }
    goto LABEL_69;
  }
LABEL_26:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}

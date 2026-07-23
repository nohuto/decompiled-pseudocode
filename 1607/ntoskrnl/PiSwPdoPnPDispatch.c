/*
 * XREFs of PiSwPdoPnPDispatch @ 0x1403F0544
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiSwLock @ 0x1403F0938 (PiSwLock.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140483938 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwProcessRemove @ 0x140483A18 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x140483C74 (PiSwDestroyDeviceObject.c)
 *     PiSwCompleteCreate @ 0x140487650 (PiSwCompleteCreate.c)
 *     PnpAllocateMultiSZ @ 0x140487D60 (PnpAllocateMultiSZ.c)
 *     _PnpStringFromGuid @ 0x1404CB360 (_PnpStringFromGuid.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1404CE6F8 (PiSwDeviceMakeCompatibleIds.c)
 *     PnpAllocatePWSTR @ 0x1404E4D00 (PnpAllocatePWSTR.c)
 */

__int64 __fastcall PiSwPdoPnPDispatch(_QWORD *Object, PIRP Irp)
{
  _DWORD *v2; // rdi
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
  signed int MultiSZ; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v24; // r10
  ULONG Length; // ecx
  ULONG v26; // ecx
  ULONG v27; // ecx
  ULONG v28; // ecx
  PVOID v29; // rax
  __int64 v30; // rdx
  ULONG v31; // ecx
  __int64 v32; // rdx
  GUID *PoolWithTag; // rax
  void *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  _QWORD *v40; // rax
  ULONG_PTR v41; // rbx

  v2 = (_DWORD *)Object[8];
  Status = Irp->IoStatus.Status;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (v2[2] & 0x10) != 0 )
  {
    Status = -1073741810;
    goto LABEL_25;
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
        if ( *(_QWORD *)v2 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)v2 + 64LL) & 4) != 0 )
            Irp->IoStatus.Information |= 2uLL;
          else
            Irp->IoStatus.Information &= ~2uLL;
          goto LABEL_12;
        }
LABEL_68:
        Status = -1073741810;
        goto LABEL_24;
      }
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
        {
          Status = CurrentStackLocation->Parameters.SetLock.Lock != 0 ? 0xC00000BB : 0;
          goto LABEL_25;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
          PiSwLock();
          v35 = ((unsigned __int8)(*((_BYTE *)v2 + 8) | 4) >> 3) & 1;
          v2[2] |= 4u;
          PiSwProcessRemove(Object, v35);
LABEL_57:
          ExReleaseResourceLite(&PiSwLockObj);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v36, v37, v38);
          goto LABEL_20;
        }
        if ( v17 != 2 )
          goto LABEL_25;
        PiSwCompleteCreate(Object);
      }
      else
      {
        PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x57706E50u);
        if ( !PoolWithTag )
          goto LABEL_66;
        *(_DWORD *)&PoolWithTag[1].Data2 = 0;
        PoolWithTag[1].Data1 = 15;
        *PoolWithTag = GUID_BUS_TYPE_SW_DEVICE;
        Irp->IoStatus.Information = (ULONG_PTR)PoolWithTag;
      }
LABEL_20:
      Status = 0;
      goto LABEL_25;
    }
    PiSwLock();
    v24 = *(_QWORD **)v2;
    if ( !*(_QWORD *)v2 )
      goto LABEL_68;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length )
    {
      v26 = Length - 1;
      if ( !v26 )
      {
        v34 = (void *)v24[3];
        if ( !v34 )
          goto LABEL_24;
        MultiSZ = PnpAllocateMultiSZ(v34);
        goto LABEL_23;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        MultiSZ = PiSwDeviceMakeCompatibleIds(*(_QWORD *)v2, &Irp->IoStatus.Information);
        goto LABEL_23;
      }
      v28 = v27 - 1;
      if ( v28 )
      {
        if ( v28 != 2 || !v24[5] )
          goto LABEL_24;
        v29 = ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x57706E50u);
        Irp->IoStatus.Information = (ULONG_PTR)v29;
        if ( !v29 )
        {
          Status = -1073741670;
          goto LABEL_24;
        }
        MultiSZ = PnpStringFromGuid(*(_QWORD *)(*(_QWORD *)v2 + 40LL), v29);
        goto LABEL_23;
      }
      v18 = (const wchar_t *)v24[2];
    }
    else
    {
      v18 = (const wchar_t *)v24[1];
    }
LABEL_22:
    MultiSZ = PnpAllocatePWSTR(v18);
LABEL_23:
    Status = MultiSZ;
    goto LABEL_24;
  }
  if ( MinorFunction == 12 )
  {
    PiSwLock();
    v30 = *(_QWORD *)v2;
    if ( !*(_QWORD *)v2 )
      goto LABEL_68;
    v31 = CurrentStackLocation->Parameters.Read.Length;
    if ( v31 )
    {
      if ( v31 != 1 )
        goto LABEL_24;
      v18 = *(const wchar_t **)(v30 + 56);
    }
    else
    {
      v18 = *(const wchar_t **)(v30 + 48);
    }
    if ( !v18 )
      goto LABEL_24;
    goto LABEL_22;
  }
  if ( !CurrentStackLocation->MinorFunction )
  {
    PiSwLock();
    if ( (v2[2] & 1) == 0 )
    {
      LOBYTE(v32) = 1;
      Status = PiSwDeviceInterfacesUpdateState(*(_QWORD *)v2, v32);
      if ( Status < 0 )
        PiSwDeviceInterfacesUpdateState(*(_QWORD *)v2, 0LL);
      else
        v2[2] |= 1u;
      goto LABEL_24;
    }
    goto LABEL_12;
  }
  if ( MinorFunction == 1 )
    goto LABEL_20;
  if ( MinorFunction == 2 )
  {
    PiSwLock();
    v39 = ((unsigned __int8)(*((_BYTE *)v2 + 8) | 2) >> 3) & 1;
    v2[2] |= 2u;
    PiSwProcessRemove(Object, v39);
    if ( (v2[2] & 8) == 0 )
      PiSwDestroyDeviceObject(Object);
    goto LABEL_57;
  }
  if ( CurrentStackLocation->MinorFunction <= 6u )
    goto LABEL_20;
  if ( MinorFunction == 7 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 4 )
      goto LABEL_25;
    v40 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x57706E50u);
    v41 = (ULONG_PTR)v40;
    if ( v40 )
    {
      *(_DWORD *)v40 = 1;
      v40[1] = Object;
      ObfReferenceObject(Object);
      Irp->IoStatus.Information = v41;
      goto LABEL_20;
    }
LABEL_66:
    Status = -1073741670;
    goto LABEL_25;
  }
  if ( MinorFunction == 9 )
  {
    PiSwLock();
    if ( *(_QWORD *)v2 )
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
      v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(16 * (*(_BYTE *)(*(_QWORD *)v2 + 64LL) & 1))) & 0x10;
      HIDWORD(SecurityContext->SecurityQos) = v10;
      v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(((*(_BYTE *)(*(_QWORD *)v2 + 64LL) & 2) != 0) << 7)) & 0x80;
      HIDWORD(SecurityContext->SecurityQos) = v11;
      v12 = v11 ^ (v11 ^ (((*(unsigned __int8 *)(*(_QWORD *)v2 + 64LL) >> 2) & 1) << 17)) & 0x20000;
      HIDWORD(SecurityContext->SecurityQos) = v12;
      HIDWORD(SecurityContext->SecurityQos) = v12 ^ ((unsigned __int16)v12 ^ ((((unsigned int)~*(unsigned __int8 *)(*(_QWORD *)v2 + 64LL) >> 3) & 1) << 8)) & 0x100;
LABEL_12:
      Status = 0;
LABEL_24:
      ExReleaseResourceLite(&PiSwLockObj);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v20, v21, v22);
      goto LABEL_25;
    }
    goto LABEL_68;
  }
LABEL_25:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}

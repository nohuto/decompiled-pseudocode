/*
 * XREFs of ndisDispatchRequest @ 0x1C0098EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C0008E18 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C0021E20 (ndisIfDereferenceCompartmentForUser.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     NdisMSleep @ 0x1C00AFE00 (NdisMSleep.c)
 *     ndisDriverSystemDispatch @ 0x1C00B1A30 (ndisDriverSystemDispatch.c)
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 */

__int64 __fastcall ndisDispatchRequest(__int64 a1, _IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int v3; // ebx
  KPROCESSOR_MODE AccessMode; // r12
  PVOID v7; // rcx
  signed __int32 v8; // eax
  unsigned int v9; // eax
  BOOLEAN *PoolWithTag; // rax
  BOOLEAN *v12; // r14
  GENERIC_MAPPING *FileObjectGenericMapping; // rax
  struct _ACCESS_STATE *v14; // rsi
  GENERIC_MAPPING *GenericMapping; // rax
  BOOLEAN v16; // r12
  GENERIC_MAPPING *v17; // rax
  struct _ACCESS_STATE *v18; // rsi
  KPROCESSOR_MODE RequestorMode; // r12
  GENERIC_MAPPING *v20; // rax
  BOOLEAN v21; // r12
  GENERIC_MAPPING *v22; // rax
  struct _ACCESS_STATE *v23; // rsi
  KPROCESSOR_MODE v24; // r12
  GENERIC_MAPPING *v25; // rax
  BOOLEAN v26; // r12
  void *FsContext; // rsi
  int v28; // r14d
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int *v31; // rcx
  ACCESS_MASK v32; // [rsp+50h] [rbp-19h] BYREF
  ACCESS_MASK v33; // [rsp+54h] [rbp-15h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+58h] [rbp-11h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-9h] BYREF
  PPRIVILEGE_SET v36; // [rsp+68h] [rbp-1h] BYREF
  PPRIVILEGE_SET v37; // [rsp+70h] [rbp+7h] BYREF
  NTSTATUS v38; // [rsp+78h] [rbp+Fh] BYREF
  NTSTATUS AccessStatus; // [rsp+7Ch] [rbp+13h] BYREF
  NTSTATUS v40; // [rsp+80h] [rbp+17h] BYREF
  PSECURITY_DESCRIPTOR v41; // [rsp+88h] [rbp+1Fh]
  ACCESS_MASK AccessMask; // [rsp+D8h] [rbp+6Fh] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+E0h] [rbp+77h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+E8h] [rbp+7Fh] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  a2->IoStatus.Status = 259;
  a2->IoStatus.Information = 0LL;
  AccessMode = 1;
  v7 = ImageSectionHandle;
  v8 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v8 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
      v7 = ImageSectionHandle;
    }
    else
    {
      do
      {
        NdisMSleep(0x32u);
        v7 = ImageSectionHandle;
      }
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(v7);
  if ( CurrentStackLocation->MajorFunction )
  {
    switch ( CurrentStackLocation->MajorFunction )
    {
      case 2u:
LABEL_8:
        a2->IoStatus.Status = v3;
        IofCompleteRequest(a2, 2);
        goto LABEL_9;
      case 0xEu:
        v9 = ndisHandlePnPRequest(a2);
        break;
      case 0xFu:
        goto LABEL_8;
      case 0x12u:
        FsContext = CurrentStackLocation->FileObject->FsContext;
        KeEnterCriticalRegion();
        v28 = *((_DWORD *)FsContext + 16);
        if ( v28 )
        {
          ExAcquirePushLockExclusiveEx(&qword_1C00859C8, 0LL);
          if ( _InterlockedExchangeAdd(&dword_1C0100004, -v28) == v28 )
          {
            dword_1C0100000 &= 0xFFFFFFF9;
            KeSetEvent(&Event, 0, 0);
            dword_1C0100000 |= 1u;
            KeSetCoalescableTimer(&Timer, (LARGE_INTEGER)-100000000LL, 0, 0x1F4u, &Dpc);
            if ( (unsigned __int8)byte_1C0085322 >= 5u )
              WPP_SF_(0x1Bu, &WPP_98be5e8eac0fef6790683cac5c76438b_Traceguids);
          }
          ExReleasePushLockExclusiveEx(&qword_1C00859C8, 0LL);
        }
        KeLeaveCriticalRegion();
        ndisNicActiveHandleCleanup((struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext, v29, v30);
        v31 = (unsigned int *)*((_QWORD *)FsContext + 9);
        if ( v31 )
        {
          ndisIfDereferenceCompartmentForUser(v31);
          *((_QWORD *)FsContext + 9) = 0LL;
        }
        CurrentStackLocation->FileObject->FsContext = 0LL;
        ExFreePoolWithTag(FsContext, 0);
        _InterlockedDecrement(&dword_1C0085870);
        goto LABEL_8;
      case 0x17u:
        v9 = ndisDriverSystemDispatch(a1, a2);
        break;
      default:
        v3 = -1073741822;
        goto LABEL_8;
    }
    v3 = v9;
  }
  else
  {
    PoolWithTag = (BOOLEAN *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x636F444Eu);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v3 = -1073741670;
      goto LABEL_8;
    }
    memset(PoolWithTag, 0, 0x50uLL);
    SecurityDescriptor = ndisSecurityDescriptor;
    Privileges = 0LL;
    AccessMask = 0x10000000;
    FileObjectGenericMapping = IoGetFileObjectGenericMapping();
    RtlMapGenericMask(&AccessMask, FileObjectGenericMapping);
    v14 = *(struct _ACCESS_STATE **)(CurrentStackLocation->Parameters.WMI.ProviderId + 8);
    SeLockSubjectContext(&v14->SubjectSecurityContext);
    if ( (CurrentStackLocation->Flags & 1) == 0 )
      AccessMode = a2->RequestorMode;
    GenericMapping = IoGetFileObjectGenericMapping();
    v16 = SeAccessCheck(
            SecurityDescriptor,
            &v14->SubjectSecurityContext,
            1u,
            AccessMask,
            0,
            &Privileges,
            GenericMapping,
            AccessMode,
            &GrantedAccess,
            &AccessStatus);
    if ( Privileges )
    {
      SeAppendPrivileges(v14, Privileges);
      SeFreePrivileges(Privileges);
    }
    if ( v16 )
    {
      v14->PreviouslyGrantedAccess |= GrantedAccess;
      v14->RemainingDesiredAccess &= ~(GrantedAccess | 0x2000000);
    }
    SeUnlockSubjectContext(&v14->SubjectSecurityContext);
    *v12 = v16;
    v37 = 0LL;
    LODWORD(SecurityDescriptor) = 0x10000000;
    v17 = IoGetFileObjectGenericMapping();
    RtlMapGenericMask((PACCESS_MASK)&SecurityDescriptor, v17);
    v18 = *(struct _ACCESS_STATE **)(CurrentStackLocation->Parameters.WMI.ProviderId + 8);
    SeLockSubjectContext(&v18->SubjectSecurityContext);
    RequestorMode = 1;
    if ( (CurrentStackLocation->Flags & 1) == 0 )
      RequestorMode = a2->RequestorMode;
    v20 = IoGetFileObjectGenericMapping();
    v21 = SeAccessCheck(
            &ndisPnpSecurityDescriptor,
            &v18->SubjectSecurityContext,
            1u,
            (ACCESS_MASK)SecurityDescriptor,
            0,
            &v37,
            v20,
            RequestorMode,
            &v33,
            &v38);
    if ( v37 )
    {
      SeAppendPrivileges(v18, v37);
      SeFreePrivileges(v37);
    }
    if ( v21 )
    {
      v18->PreviouslyGrantedAccess |= v33;
      v18->RemainingDesiredAccess &= ~(v33 | 0x2000000);
    }
    SeUnlockSubjectContext(&v18->SubjectSecurityContext);
    v12[1] = v21;
    *((_QWORD *)v12 + 7) = 0LL;
    v41 = (PSECURITY_DESCRIPTOR)qword_1C0100010;
    v36 = 0LL;
    DesiredAccess = 0x10000000;
    v22 = IoGetFileObjectGenericMapping();
    RtlMapGenericMask(&DesiredAccess, v22);
    v23 = *(struct _ACCESS_STATE **)(CurrentStackLocation->Parameters.WMI.ProviderId + 8);
    SeLockSubjectContext(&v23->SubjectSecurityContext);
    v24 = 1;
    if ( (CurrentStackLocation->Flags & 1) == 0 )
      v24 = a2->RequestorMode;
    v25 = IoGetFileObjectGenericMapping();
    v26 = SeAccessCheck(v41, &v23->SubjectSecurityContext, 1u, DesiredAccess, 0, &v36, v25, v24, &v32, &v40);
    if ( v36 )
    {
      SeAppendPrivileges(v23, v36);
      SeFreePrivileges(v36);
    }
    if ( v26 )
    {
      v23->PreviouslyGrantedAccess |= v32;
      v23->RemainingDesiredAccess &= ~(v32 | 0x2000000);
    }
    SeUnlockSubjectContext(&v23->SubjectSecurityContext);
    v12[48] = v26;
    CurrentStackLocation->FileObject->FsContext = v12;
    _InterlockedIncrement(&dword_1C0085870);
  }
  if ( v3 != 259 )
    goto LABEL_8;
LABEL_9:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v3;
}

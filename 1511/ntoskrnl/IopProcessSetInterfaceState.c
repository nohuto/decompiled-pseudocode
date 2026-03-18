/*
 * XREFs of IopProcessSetInterfaceState @ 0x140456288
 * Callers:
 *     IoSetDeviceInterfaceState @ 0x140454BA4 (IoSetDeviceInterfaceState.c)
 *     IopDoDeferredSetInterfaceState @ 0x1404F16E8 (IopDoDeferredSetInterfaceState.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x140151C80 (ZwCreateSymbolicLinkObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x140152980 (ZwOpenSymbolicLinkObject.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x14043D410 (PiDmGetObject.c)
 *     PnpUnicodeStringToWstrFree @ 0x14043F59C (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043F5D0 (PnpUnicodeStringToWstr.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140441CC0 (_CmGetDeviceInterfaceClassGuid.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140456068 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     IoGetDeviceProperty @ 0x1404596E0 (IoGetDeviceProperty.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140459F5C (_PnpObjectRaisePropertyChangeEvent.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x14045AC18 (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404B07CC (PiDmRemoveCacheReferenceForObject.c)
 *     PnpSetDeviceClassChange @ 0x1404E242C (PnpSetDeviceClassChange.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E5114 (PiDmAddCacheReferenceForObject.c)
 *     PiDeferSetInterfaceState @ 0x1404EA11C (PiDeferSetInterfaceState.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x1405484C0 (PiRemoveDeferredSetInterfaceState.c)
 */

__int64 __fastcall IopProcessSetInterfaceState(__int64 a1, char a2, char a3)
{
  char v3; // al
  PVOID v7; // r15
  unsigned int *v8; // r14
  void *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  int DeviceInterfaceClassGuid; // ebx
  const WCHAR *PoolWithTag; // rax
  int ObjectProperty; // eax
  struct _DEVICE_OBJECT *v15; // rax
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _DWORD *DeviceNode; // rcx
  int v18; // eax
  struct _DEVICE_OBJECT *v19; // r13
  signed __int64 *v20; // rdi
  signed __int64 v21; // rax
  signed __int64 v22; // rcx
  signed __int64 v23; // rtt
  ULONG_PTR v24; // rdi
  GUID *v25; // rcx
  void *v27; // rcx
  __int16 NumberOfBytes; // [rsp+68h] [rbp-A0h]
  ULONG NumberOfBytes_4; // [rsp+6Ch] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-98h] BYREF
  void *v31; // [rsp+78h] [rbp-90h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-88h]
  int v33; // [rsp+88h] [rbp-80h] BYREF
  PCWSTR SourceString; // [rsp+90h] [rbp-78h]
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-70h] BYREF
  char v36[8]; // [rsp+A8h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING Name; // [rsp+F0h] [rbp-18h] BYREF
  GUID v40; // [rsp+100h] [rbp-8h] BYREF

  v3 = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  SourceString = 0LL;
  UnicodeString.Length = 0;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  v7 = 0LL;
  HIWORD(UnicodeString.Buffer) = 0;
  v8 = 0LL;
  BugCheckParameter2 = 0LL;
  v9 = 0LL;
  DeviceObject = 0LL;
  v31 = 0LL;
  NumberOfBytes = 0;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
  {
    DeviceInterfaceClassGuid = -1073741811;
LABEL_41:
    if ( v3 )
    {
      v25 = &GUID_DEVICE_INTERFACE_ARRIVAL;
      if ( !a2 )
        v25 = &GUID_DEVICE_INTERFACE_REMOVAL;
      PnpSetDeviceClassChange(v25, &v40, a1);
      PnpObjectRaisePropertyChangeEvent(PiPnpRtlCtx, (_DWORD)v9, 3, 0, 0LL, (__int64)&DEVPKEY_DeviceInterface_Enabled);
    }
    if ( (_BYTE)NumberOfBytes )
      PiDmRemoveCacheReferenceForObject(3LL, v9);
    goto LABEL_47;
  }
  v10 = PnpUnicodeStringToWstr(&v31, 0LL, (unsigned __int16 *)a1);
  v9 = v31;
  DeviceInterfaceClassGuid = v10;
  if ( v10 < 0 )
    goto LABEL_47;
  DeviceInterfaceClassGuid = CmGetDeviceInterfaceClassGuid(v11, (__int64)v31, &v40);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_47;
  DeviceInterfaceClassGuid = IopBuildGlobalSymbolicLinkString((unsigned __int16 *)a1, &UnicodeString);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_47;
  PoolWithTag = (const WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
  SourceString = PoolWithTag;
  if ( !PoolWithTag )
  {
    DeviceInterfaceClassGuid = -1073741670;
    goto LABEL_47;
  }
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)v9,
                     3u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v33,
                     (__int64)PoolWithTag,
                     400,
                     (__int64)v36,
                     0);
  DeviceInterfaceClassGuid = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
    goto LABEL_66;
  if ( ObjectProperty < 0 )
    goto LABEL_47;
  if ( v33 != 18 )
    goto LABEL_66;
  DeviceInterfaceClassGuid = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_47;
  v15 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance(&DestinationString);
  DeviceObject = v15;
  if ( !v15 )
  {
    if ( !a2 )
      goto LABEL_47;
    goto LABEL_66;
  }
  DeviceObjectExtension = v15->DeviceObjectExtension;
  DeviceNode = DeviceObjectExtension->DeviceNode;
  if ( a2 )
  {
    v18 = DeviceNode[75];
    if ( v18 <= 769 || v18 > 781 && v18 != 784 )
    {
LABEL_66:
      DeviceInterfaceClassGuid = -1073741808;
      goto LABEL_47;
    }
  }
  if ( a3 && (DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
  {
    if ( a2 )
      DeviceInterfaceClassGuid = PiDeferSetInterfaceState(DeviceNode, a1);
    else
      PiRemoveDeferredSetInterfaceState(DeviceNode, a1);
    goto LABEL_47;
  }
  if ( !a2 )
  {
    DeviceInterfaceClassGuid = PiDmGetObject(3LL, (__int64)v9, &BugCheckParameter2);
    if ( DeviceInterfaceClassGuid >= 0 )
    {
      v20 = (signed __int64 *)BugCheckParameter2;
      PiDmObjectAcquireExclusiveLock(BugCheckParameter2);
      v27 = (void *)v20[5];
      if ( !v27 )
      {
        DeviceInterfaceClassGuid = -1073741772;
        goto LABEL_35;
      }
      ZwClose(v27);
      v20[5] = 0LL;
      HIBYTE(NumberOfBytes) = 1;
LABEL_61:
      LOBYTE(NumberOfBytes) = 1;
LABEL_35:
      _m_prefetchw(v20);
      v21 = *v20;
      if ( (*v20 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v22 = v21 - 16;
      else
        v22 = 0LL;
      if ( (v21 & 2) != 0
        || (v23 = *v20, v23 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v22, v21)) )
      {
        v24 = BugCheckParameter2;
        ExfReleasePushLock((_QWORD *)BugCheckParameter2);
      }
      else
      {
        v24 = BugCheckParameter2;
      }
      KeAbPostRelease(v24);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v3 = HIBYTE(NumberOfBytes);
      v8 = (unsigned int *)BugCheckParameter2;
      v9 = v31;
      goto LABEL_41;
    }
LABEL_63:
    v8 = (unsigned int *)BugCheckParameter2;
    goto LABEL_47;
  }
  v19 = DeviceObject;
  NumberOfBytes_4 = 512;
  while ( 1 )
  {
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    v7 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes_4, 0x20207050u);
    if ( !v7 )
      break;
    DeviceInterfaceClassGuid = IoGetDeviceProperty(
                                 v19,
                                 DevicePropertyPhysicalDeviceObjectName,
                                 NumberOfBytes_4,
                                 v7,
                                 &NumberOfBytes_4);
    if ( DeviceInterfaceClassGuid != -1073741789 )
      goto LABEL_26;
  }
  DeviceInterfaceClassGuid = -1073741670;
LABEL_26:
  if ( DeviceInterfaceClassGuid >= 0 && NumberOfBytes_4 )
  {
    RtlInitUnicodeString(&Name, (PCWSTR)v7);
    DeviceInterfaceClassGuid = PiDmAddCacheReferenceForObject(3LL, v9, &BugCheckParameter2);
    if ( DeviceInterfaceClassGuid >= 0 )
    {
      v20 = (signed __int64 *)BugCheckParameter2;
      PiDmObjectAcquireExclusiveLock(BugCheckParameter2);
      if ( (v20[4] & 1) != 0 )
      {
        if ( !v20[5] )
        {
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          ObjectAttributes.ObjectName = &UnicodeString;
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          DeviceInterfaceClassGuid = ZwOpenSymbolicLinkObject((PHANDLE)v20 + 5, 0xF0001u, &ObjectAttributes);
          if ( DeviceInterfaceClassGuid == -1073741772 )
            DeviceInterfaceClassGuid = ZwCreateSymbolicLinkObject((PHANDLE)v20 + 5, 0xF0001u, &ObjectAttributes, &Name);
          if ( DeviceInterfaceClassGuid >= 0 )
            HIBYTE(NumberOfBytes) = 1;
          goto LABEL_35;
        }
        DeviceInterfaceClassGuid = 0x40000000;
      }
      else
      {
        DeviceInterfaceClassGuid = -1073741772;
      }
      goto LABEL_61;
    }
    goto LABEL_63;
  }
LABEL_47:
  RtlFreeAnsiString(&UnicodeString);
  PnpUnicodeStringToWstrFree(v9, a1);
  if ( DeviceObject )
    ObfDereferenceObject(DeviceObject);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v8 )
    PiDmObjectRelease(v8);
  return (unsigned int)DeviceInterfaceClassGuid;
}

/*
 * XREFs of IopRegisterDeviceInterface @ 0x1404E4A9C
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x1404E3ABC (PiSwIrpInterfaceRegister.c)
 *     IoRegisterDeviceInterface @ 0x14050927C (IoRegisterDeviceInterface.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1405142AC (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiCMRegisterDeviceInterface @ 0x140613C84 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x14043D410 (PiDmGetObject.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043E03C (PiDmObjectAcquireSharedLock.c)
 *     PiPnpRtlBeginOperation @ 0x140440904 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
 *     _PnpStringFromGuid @ 0x14045C050 (_PnpStringFromGuid.c)
 *     _PnpSetObjectProperty @ 0x14045C530 (_PnpSetObjectProperty.c)
 *     PnpIsNullGuid @ 0x14045E9F8 (PnpIsNullGuid.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404B07CC (PiDmRemoveCacheReferenceForObject.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1404DDC2C (_CmSetDeviceInterfacePathFormat.c)
 *     PiDmListAddObject @ 0x1404E4F54 (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E5114 (PiDmAddCacheReferenceForObject.c)
 *     _CmGetDeviceInterfaceName @ 0x1404E5254 (_CmGetDeviceInterfaceName.c)
 *     PipCheckForDenyExecute @ 0x1404E54A4 (PipCheckForDenyExecute.c)
 *     _CmCreateDeviceInterface @ 0x140517990 (_CmCreateDeviceInterface.c)
 *     _CmDeleteDeviceInterface @ 0x140692EB4 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall IopRegisterDeviceInterface(__int64 a1, int *a2, __int64 a3, char a4, PVOID *a5, _DWORD *a6)
{
  PVOID v7; // rdi
  PVOID v8; // rsi
  PVOID v9; // r14
  int DeviceInterfaceName; // ebx
  unsigned int *v11; // r8
  PVOID PoolWithTag; // rax
  __int64 v13; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // r14
  signed __int64 *v16; // rbx
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  signed __int64 v19; // rtt
  ULONG_PTR v20; // rbx
  int ObjectProperty; // eax
  ULONG_PTR v22; // rdi
  char v23; // si
  __int64 v24; // rcx
  unsigned int v26; // ebx
  PVOID v27; // rax
  __int64 v28; // r9
  int v29; // [rsp+20h] [rbp-E0h]
  char v30; // [rsp+60h] [rbp-A0h] BYREF
  char v31; // [rsp+61h] [rbp-9Fh]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v33; // [rsp+70h] [rbp-90h] BYREF
  PVOID v34; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  PVOID v36; // [rsp+88h] [rbp-78h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h]
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  PVOID v39; // [rsp+A0h] [rbp-60h] BYREF
  char v40[4]; // [rsp+A8h] [rbp-58h] BYREF
  char v41[4]; // [rsp+ACh] [rbp-54h] BYREF
  _QWORD Source2[2]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str2[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v44[40]; // [rsp+110h] [rbp+10h] BYREF

  v37 = a1;
  v31 = a4;
  *a5 = 0LL;
  v7 = 0LL;
  v34 = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  v9 = 0LL;
  v36 = 0LL;
  v39 = 0LL;
  v30 = 0;
  BugCheckParameter2 = 0LL;
  P = 0LL;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_53;
  v33 = 512;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
  *a5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_52;
  DeviceInterfaceName = CmGetDeviceInterfaceName(&v33, Str2, v37, a3, 0, PoolWithTag, 512, &v33);
  if ( DeviceInterfaceName != -1073741789 )
  {
    v13 = v37;
    goto LABEL_5;
  }
  ExFreePoolWithTag(*a5, 0);
  v26 = v33;
  v27 = ExAllocatePoolWithTag(PagedPool, 2LL * v33, 0x20207050u);
  *a5 = v27;
  if ( !v27 )
  {
LABEL_52:
    DeviceInterfaceName = -1073741670;
    goto LABEL_53;
  }
  v28 = a3;
  v13 = v37;
  LOBYTE(v29) = 0;
  DeviceInterfaceName = CmGetDeviceInterfaceName(&v33, Str2, v37, v28, v29, v27, v26, &v33);
LABEL_5:
  if ( DeviceInterfaceName < 0 )
    goto LABEL_53;
  if ( a6 )
    *a6 = (unsigned __int8)PipCheckForDenyExecute(Str2) != 0 ? 0x800000 : 0;
  CurrentThread = KeGetCurrentThread();
  v15 = -1LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  if ( (int)PiDmGetObject(3LL, (__int64)*a5, &BugCheckParameter2) >= 0 )
  {
    v16 = (signed __int64 *)BugCheckParameter2;
    PiDmObjectAcquireSharedLock((volatile signed __int64 *)BugCheckParameter2);
    LOBYTE(v7) = v16[4] & 1;
    _m_prefetchw(v16);
    v17 = *v16;
    v18 = *v16 - 16;
    if ( (*v16 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v18 = 0LL;
    if ( (v17 & 2) != 0
      || (v19 = *v16, v19 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v18, v17)) )
    {
      v20 = BugCheckParameter2;
      ExfReleasePushLock((_QWORD *)BugCheckParameter2);
    }
    else
    {
      v20 = BugCheckParameter2;
    }
    KeAbPostRelease(v20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(4LL, Str2, &P);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_29;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1LL, v13, &v36);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_29;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     v13,
                     1u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ContainerId,
                     (__int64)v41,
                     (__int64)Source2,
                     16,
                     (__int64)v40,
                     0);
  DeviceInterfaceName = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
  {
    Source2[0] = 0LL;
    Source2[1] = 0LL;
  }
  else if ( ObjectProperty < 0 )
  {
    goto LABEL_29;
  }
  if ( !PnpIsNullGuid(Source2) )
  {
    DeviceInterfaceName = PnpStringFromGuid((int *)Source2, v44);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_29;
    DeviceInterfaceName = PiDmAddCacheReferenceForObject(5LL, v44, &v34);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_29;
  }
  if ( !(_BYTE)v7 )
  {
    DeviceInterfaceName = PiPnpRtlBeginOperation((__int64 **)&v39);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_29;
    DeviceInterfaceName = CmCreateDeviceInterface(
                            PiPnpRtlCtx,
                            (unsigned int)*a5,
                            2,
                            (unsigned int)&Handle,
                            (__int64)&v30,
                            0);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_29;
  }
  v22 = BugCheckParameter2;
  if ( BugCheckParameter2 )
  {
LABEL_24:
    PiDmListAddObject(0LL, P, v22, 0LL);
    v23 = v30;
    do
      ++v15;
    while ( *(_WORD *)(v13 + 2 * v15) );
    DeviceInterfaceName = PnpSetObjectProperty(
                            *(__int64 *)&PiPnpRtlCtx,
                            (__int64)*a5,
                            3u,
                            (__int64)Handle,
                            0LL,
                            (__int64)&DEVPKEY_Device_InstanceId,
                            18,
                            v13,
                            2 * (int)v15 + 2,
                            v30 != 0 ? 0x20000 : 0);
    if ( DeviceInterfaceName < 0 )
    {
      if ( v23 )
        CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, *a5, 0LL);
    }
    else
    {
      PiDmListAddObject(1LL, v36, v22, 0LL);
      if ( v34 )
        PiDmListAddObject(2LL, v34, v22, 0LL);
    }
    goto LABEL_29;
  }
  DeviceInterfaceName = PiDmGetObject(3LL, (__int64)*a5, &BugCheckParameter2);
  if ( DeviceInterfaceName >= 0 )
  {
    v22 = BugCheckParameter2;
    goto LABEL_24;
  }
LABEL_29:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( DeviceInterfaceName >= 0 )
  {
    if ( !v31 )
      DeviceInterfaceName = CmSetDeviceInterfacePathFormat(v24, *a5, 1);
    v7 = v34;
    v8 = v36;
    v9 = P;
    goto LABEL_33;
  }
  v7 = v34;
  v8 = v36;
  v9 = P;
LABEL_53:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0);
    *a5 = 0LL;
  }
LABEL_33:
  if ( Handle )
    ZwClose(Handle);
  if ( v39 )
    PiPnpRtlEndOperation((char *)v39);
  if ( BugCheckParameter2 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
  if ( v9 )
  {
    PiDmRemoveCacheReferenceForObject(*((_DWORD *)v9 + 7), *((_QWORD *)v9 + 2), v11);
    PiDmObjectRelease((unsigned int *)v9);
  }
  if ( v8 )
  {
    PiDmRemoveCacheReferenceForObject(*((_DWORD *)v8 + 7), *((_QWORD *)v8 + 2), v11);
    PiDmObjectRelease((unsigned int *)v8);
  }
  if ( v7 )
  {
    PiDmRemoveCacheReferenceForObject(*((_DWORD *)v7 + 7), *((_QWORD *)v7 + 2), v11);
    PiDmObjectRelease((unsigned int *)v7);
  }
  return (unsigned int)DeviceInterfaceName;
}

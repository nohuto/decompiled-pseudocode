/*
 * XREFs of IopRegisterDeviceInterface @ 0x14050FDE8
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x140487098 (PiSwIrpInterfaceRegister.c)
 *     IoRegisterDeviceInterface @ 0x140540DA8 (IoRegisterDeviceInterface.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140635480 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiCMRegisterDeviceInterface @ 0x140648504 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpIsNullGuid @ 0x14048C8AC (PnpIsNullGuid.c)
 *     _PnpStringFromGuid @ 0x1404CB360 (_PnpStringFromGuid.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1404D9D6C (_CmSetDeviceInterfacePathFormat.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiDmObjectAcquireSharedLock @ 0x1404E2AE0 (PiDmObjectAcquireSharedLock.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     PiDmListAddObject @ 0x1404E8EF4 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E9110 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E9218 (PiDmAddCacheReferenceForObject.c)
 *     _PnpSetObjectProperty @ 0x140511490 (_PnpSetObjectProperty.c)
 *     PipCheckForDenyExecute @ 0x140512538 (PipCheckForDenyExecute.c)
 *     _CmGetDeviceInterfaceName @ 0x140512634 (_CmGetDeviceInterfaceName.c)
 *     _CmCreateDeviceInterface @ 0x1406D7260 (_CmCreateDeviceInterface.c)
 *     _CmDeleteDeviceInterface @ 0x1406D7F18 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall IopRegisterDeviceInterface(wchar_t *a1, int *a2, __int64 a3, char a4, PVOID *a5, _DWORD *a6)
{
  PVOID v7; // rdi
  PVOID v8; // rsi
  PVOID v9; // r14
  int DeviceInterfaceName; // ebx
  unsigned int *v11; // r8
  PVOID PoolWithTag; // rax
  wchar_t *v13; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // r14
  signed __int64 *v16; // rbx
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  signed __int64 v19; // rtt
  ULONG_PTR v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int ObjectProperty; // eax
  volatile signed __int64 *v25; // rdi
  char v26; // si
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  unsigned int v32; // ebx
  PVOID v33; // rax
  __int64 v34; // r9
  int v35; // [rsp+20h] [rbp-E0h]
  char v36[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v37; // [rsp+62h] [rbp-9Eh]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v39; // [rsp+70h] [rbp-90h] BYREF
  PVOID v40; // [rsp+78h] [rbp-88h] BYREF
  PVOID v41; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  wchar_t *v43; // [rsp+90h] [rbp-70h]
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  PVOID v45; // [rsp+A0h] [rbp-60h] BYREF
  char v46[4]; // [rsp+A8h] [rbp-58h] BYREF
  char v47[4]; // [rsp+ACh] [rbp-54h] BYREF
  _QWORD Source2[2]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str2[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v50[40]; // [rsp+110h] [rbp+10h] BYREF

  v43 = a1;
  v37 = a4;
  *a5 = 0LL;
  v7 = 0LL;
  v40 = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  v9 = 0LL;
  v41 = 0LL;
  v45 = 0LL;
  v36[0] = 0;
  BugCheckParameter2 = 0LL;
  P = 0LL;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_47;
  v39 = 512;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
  *a5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_46;
  DeviceInterfaceName = CmGetDeviceInterfaceName(&v39, Str2, v43, a3, 0, PoolWithTag, 512, &v39);
  if ( DeviceInterfaceName != -1073741789 )
  {
    v13 = v43;
    goto LABEL_5;
  }
  ExFreePoolWithTag(*a5, 0);
  v32 = v39;
  v33 = ExAllocatePoolWithTag(PagedPool, 2LL * v39, 0x20207050u);
  *a5 = v33;
  if ( !v33 )
  {
LABEL_46:
    DeviceInterfaceName = -1073741670;
    goto LABEL_47;
  }
  v34 = a3;
  v13 = v43;
  LOBYTE(v35) = 0;
  DeviceInterfaceName = CmGetDeviceInterfaceName(&v39, Str2, v43, v34, v35, v33, v32, &v39);
LABEL_5:
  if ( DeviceInterfaceName < 0 )
    goto LABEL_47;
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
  }
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(4u, Str2, (volatile signed __int32 **)&P);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_29;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1u, v13, (volatile signed __int32 **)&v41);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_29;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)v13,
                     1u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ContainerId,
                     (__int64)v47,
                     (__int64)Source2,
                     16,
                     (__int64)v46,
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
  if ( PnpIsNullGuid(Source2)
    || (DeviceInterfaceName = PnpStringFromGuid((int *)Source2, v50), DeviceInterfaceName >= 0)
    && (DeviceInterfaceName = PiDmAddCacheReferenceForObject(5u, v50, (volatile signed __int32 **)&v40),
        DeviceInterfaceName >= 0) )
  {
    if ( (_BYTE)v7
      || (DeviceInterfaceName = PiPnpRtlBeginOperation((__int64 **)&v45), DeviceInterfaceName >= 0)
      && (DeviceInterfaceName = CmCreateDeviceInterface(
                                  PiPnpRtlCtx,
                                  (unsigned int)*a5,
                                  2,
                                  (unsigned int)&Handle,
                                  (__int64)v36,
                                  0),
          DeviceInterfaceName >= 0) )
    {
      v25 = (volatile signed __int64 *)BugCheckParameter2;
      if ( BugCheckParameter2 )
      {
LABEL_24:
        PiDmListAddObject(0, (int *)P, v25, 0LL);
        v26 = v36[0];
        do
          ++v15;
        while ( v13[v15] );
        DeviceInterfaceName = PnpSetObjectProperty(
                                PiPnpRtlCtx,
                                (unsigned int)*a5,
                                3,
                                0LL,
                                (__int64)&DEVPKEY_Device_InstanceId,
                                18,
                                (__int64)v13,
                                2 * (int)v15 + 2,
                                v36[0] != 0 ? 0x20000 : 0);
        if ( DeviceInterfaceName < 0 )
        {
          if ( v26 )
            CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, *a5, 0LL);
        }
        else
        {
          PiDmListAddObject(1u, (int *)v41, v25, 0LL);
          if ( v40 )
            PiDmListAddObject(2u, (int *)v40, v25, 0LL);
        }
        goto LABEL_29;
      }
      DeviceInterfaceName = PiDmGetObject(3LL, (__int64)*a5, &BugCheckParameter2);
      if ( DeviceInterfaceName >= 0 )
      {
        v25 = (volatile signed __int64 *)BugCheckParameter2;
        goto LABEL_24;
      }
    }
  }
LABEL_29:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v27, v28, v29);
  if ( DeviceInterfaceName >= 0 )
  {
    if ( !v37 )
      DeviceInterfaceName = CmSetDeviceInterfacePathFormat(v30, *a5, 1);
    v7 = v40;
    v8 = v41;
    v9 = P;
    goto LABEL_33;
  }
  v7 = v40;
  v8 = v41;
  v9 = P;
LABEL_47:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0);
    *a5 = 0LL;
  }
LABEL_33:
  if ( Handle )
    ZwClose(Handle);
  if ( v45 )
    PiPnpRtlEndOperation((char *)v45);
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

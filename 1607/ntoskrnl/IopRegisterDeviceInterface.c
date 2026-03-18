/*
 * XREFs of IopRegisterDeviceInterface @ 0x14048756C
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x1404C648C (PiSwIrpInterfaceRegister.c)
 *     IoRegisterDeviceInterface @ 0x140540868 (IoRegisterDeviceInterface.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406353CC (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiCMRegisterDeviceInterface @ 0x140648420 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceInterfaceName @ 0x140487220 (_CmGetDeviceInterfaceName.c)
 *     PipCheckForDenyExecute @ 0x140487470 (PipCheckForDenyExecute.c)
 *     _PnpSetObjectProperty @ 0x140488D1C (_PnpSetObjectProperty.c)
 *     PnpIsNullGuid @ 0x14048C348 (PnpIsNullGuid.c)
 *     _PnpStringFromGuid @ 0x1404E9270 (_PnpStringFromGuid.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1404F6DE0 (_CmSetDeviceInterfacePathFormat.c)
 *     _PnpGetObjectProperty @ 0x1404FE7B0 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1404FEFC0 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1404FF000 (PiDmGetObject.c)
 *     PiDmObjectAcquireSharedLock @ 0x1404FFB50 (PiDmObjectAcquireSharedLock.c)
 *     PiPnpRtlEndOperation @ 0x14050147C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x14050173C (PiPnpRtlBeginOperation.c)
 *     PiDmListAddObject @ 0x140505F64 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140506180 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140506288 (PiDmAddCacheReferenceForObject.c)
 *     _CmCreateDeviceInterface @ 0x1406D7128 (_CmCreateDeviceInterface.c)
 *     _CmDeleteDeviceInterface @ 0x1406D7DE0 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall IopRegisterDeviceInterface(
        const wchar_t *a1,
        __int64 a2,
        const wchar_t *a3,
        char a4,
        PVOID *a5,
        _DWORD *a6)
{
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  _QWORD *v9; // r14
  int DeviceInterfaceName; // ebx
  wchar_t *PoolWithTag; // rax
  const wchar_t *v12; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r14
  signed __int64 *v15; // rbx
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  signed __int64 v18; // rtt
  ULONG_PTR v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int ObjectProperty; // eax
  ULONG_PTR v24; // rdi
  char v25; // si
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v32; // ebx
  wchar_t *v33; // rax
  const wchar_t *v34; // r9
  size_t v35; // [rsp+30h] [rbp-D0h]
  size_t v36; // [rsp+30h] [rbp-D0h]
  _BYTE v37[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v38; // [rsp+62h] [rbp-9Eh]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v40; // [rsp+70h] [rbp-90h] BYREF
  PVOID v41; // [rsp+78h] [rbp-88h] BYREF
  PVOID v42; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  const wchar_t *v44; // [rsp+90h] [rbp-70h]
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  PVOID v46; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v47[4]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v48[4]; // [rsp+ACh] [rbp-54h] BYREF
  _QWORD Source2[2]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str2[40]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v51[80]; // [rsp+110h] [rbp+10h] BYREF

  v44 = a1;
  v38 = a4;
  *a5 = 0LL;
  v7 = 0LL;
  v41 = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  v9 = 0LL;
  v42 = 0LL;
  v46 = 0LL;
  v37[0] = 0;
  BugCheckParameter2 = 0LL;
  P = 0LL;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_47;
  v40 = 512;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
  *a5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_46;
  LODWORD(v35) = 512;
  DeviceInterfaceName = CmGetDeviceInterfaceName((size_t)&v40, Str2, v44, a3, 0, PoolWithTag, v35, &v40);
  if ( DeviceInterfaceName != -1073741789 )
  {
    v12 = v44;
    goto LABEL_5;
  }
  ExFreePoolWithTag(*a5, 0);
  v32 = v40;
  v33 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v40, 0x20207050u);
  *a5 = v33;
  if ( !v33 )
  {
LABEL_46:
    DeviceInterfaceName = -1073741670;
    goto LABEL_47;
  }
  v34 = a3;
  v12 = v44;
  LODWORD(v36) = v32;
  DeviceInterfaceName = CmGetDeviceInterfaceName((size_t)&v40, Str2, v44, v34, 0, v33, v36, &v40);
LABEL_5:
  if ( DeviceInterfaceName < 0 )
    goto LABEL_47;
  if ( a6 )
    *a6 = PipCheckForDenyExecute(Str2) ? 0x800000 : 0;
  CurrentThread = KeGetCurrentThread();
  v14 = -1LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  if ( (int)PiDmGetObject(3LL, *a5, &BugCheckParameter2) >= 0 )
  {
    v15 = (signed __int64 *)BugCheckParameter2;
    PiDmObjectAcquireSharedLock(BugCheckParameter2);
    LOBYTE(v7) = v15[4] & 1;
    _m_prefetchw(v15);
    v16 = *v15;
    v17 = *v15 - 16;
    if ( (*v15 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v17 = 0LL;
    if ( (v16 & 2) != 0
      || (v18 = *v15, v18 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v17, v16)) )
    {
      v19 = BugCheckParameter2;
      ExfReleasePushLock((_QWORD *)BugCheckParameter2);
    }
    else
    {
      v19 = BugCheckParameter2;
    }
    KeAbPostRelease(v19);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v20, v21, v22);
  }
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(4LL, Str2, &P);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_29;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1LL, v12, &v42);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_29;
  ObjectProperty = PnpGetObjectProperty(
                     PiPnpRtlCtx,
                     (_DWORD)v12,
                     1,
                     0,
                     0LL,
                     (__int64)&DEVPKEY_Device_ContainerId,
                     (__int64)v48,
                     (__int64)Source2,
                     16,
                     (__int64)v47,
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
  if ( (unsigned __int8)PnpIsNullGuid(Source2)
    || (DeviceInterfaceName = PnpStringFromGuid(Source2, v51), DeviceInterfaceName >= 0)
    && (DeviceInterfaceName = PiDmAddCacheReferenceForObject(5LL, v51, &v41), DeviceInterfaceName >= 0) )
  {
    if ( (_BYTE)v7
      || (DeviceInterfaceName = PiPnpRtlBeginOperation(&v46), DeviceInterfaceName >= 0)
      && (DeviceInterfaceName = CmCreateDeviceInterface(
                                  PiPnpRtlCtx,
                                  (unsigned int)*a5,
                                  2,
                                  (unsigned int)&Handle,
                                  (__int64)v37,
                                  0),
          DeviceInterfaceName >= 0) )
    {
      v24 = BugCheckParameter2;
      if ( BugCheckParameter2 )
      {
LABEL_24:
        PiDmListAddObject(0LL, P, v24, 0LL);
        v25 = v37[0];
        do
          ++v14;
        while ( v12[v14] );
        DeviceInterfaceName = PnpSetObjectProperty(
                                PiPnpRtlCtx,
                                (unsigned int)*a5,
                                3,
                                0LL,
                                (__int64)&DEVPKEY_Device_InstanceId,
                                18,
                                (__int64)v12,
                                2 * (int)v14 + 2,
                                v37[0] != 0 ? 0x20000 : 0);
        if ( DeviceInterfaceName < 0 )
        {
          if ( v25 )
            CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, *a5, 0LL);
        }
        else
        {
          PiDmListAddObject(1LL, v42, v24, 0LL);
          if ( v41 )
            PiDmListAddObject(2LL, v41, v24, 0LL);
        }
        goto LABEL_29;
      }
      DeviceInterfaceName = PiDmGetObject(3LL, *a5, &BugCheckParameter2);
      if ( DeviceInterfaceName >= 0 )
      {
        v24 = BugCheckParameter2;
        goto LABEL_24;
      }
    }
  }
LABEL_29:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v26, v27, v28);
  if ( DeviceInterfaceName >= 0 )
  {
    if ( !v38 )
    {
      LOBYTE(v30) = 1;
      DeviceInterfaceName = CmSetDeviceInterfacePathFormat(v29, *a5, v30);
    }
    v7 = v41;
    v8 = v42;
    v9 = P;
    goto LABEL_33;
  }
  v7 = v41;
  v8 = v42;
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
  if ( v46 )
    PiPnpRtlEndOperation(v46);
  if ( BugCheckParameter2 )
    PiDmObjectRelease((PVOID)BugCheckParameter2);
  if ( v9 )
  {
    PiDmRemoveCacheReferenceForObject(*((unsigned int *)v9 + 7), v9[2]);
    PiDmObjectRelease(v9);
  }
  if ( v8 )
  {
    PiDmRemoveCacheReferenceForObject(*((unsigned int *)v8 + 7), v8[2]);
    PiDmObjectRelease(v8);
  }
  if ( v7 )
  {
    PiDmRemoveCacheReferenceForObject(*((unsigned int *)v7 + 7), v7[2]);
    PiDmObjectRelease(v7);
  }
  return (unsigned int)DeviceInterfaceName;
}

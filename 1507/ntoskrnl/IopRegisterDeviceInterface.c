/*
 * XREFs of IopRegisterDeviceInterface @ 0x1404DED78
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14045A410 (PiSwIrpInterfaceRegister.c)
 *     IoRegisterDeviceInterface @ 0x14057EEA0 (IoRegisterDeviceInterface.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406835F4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiCMRegisterDeviceInterface @ 0x1406934E4 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PipCheckForDenyExecute @ 0x140417394 (PipCheckForDenyExecute.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043ABF4 (PiDmObjectAcquireSharedLock.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     _PnpStringFromGuid @ 0x140440494 (_PnpStringFromGuid.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x140458398 (_CmSetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceName @ 0x140459864 (_CmGetDeviceInterfaceName.c)
 *     _PnpSetObjectProperty @ 0x1404D8694 (_PnpSetObjectProperty.c)
 *     PiDmListAddObject @ 0x1404DF9D4 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E0538 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E066C (PiDmAddCacheReferenceForObject.c)
 *     PnpIsNullGuid @ 0x14054E1B4 (PnpIsNullGuid.c)
 *     _CmCreateDeviceInterface @ 0x14058B4E4 (_CmCreateDeviceInterface.c)
 *     _CmDeleteDeviceInterface @ 0x140712A50 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall IopRegisterDeviceInterface(
        const wchar_t *a1,
        int *a2,
        const wchar_t *a3,
        char a4,
        PVOID *a5,
        _DWORD *a6)
{
  unsigned int *v7; // rdi
  unsigned int *v8; // rsi
  unsigned int *v9; // r14
  int DeviceInterfaceName; // ebx
  wchar_t *PoolWithTag; // rax
  const wchar_t *v12; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  signed __int64 *v18; // rbx
  ULONG_PTR v19; // rdx
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  signed __int64 v22; // rtt
  ULONG_PTR v23; // rbx
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  int ObjectProperty; // eax
  ULONG_PTR v27; // rdi
  char v28; // si
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax
  unsigned int v32; // ebx
  wchar_t *v33; // rax
  const wchar_t *v34; // r9
  size_t v35; // [rsp+30h] [rbp-D0h]
  size_t v36; // [rsp+30h] [rbp-D0h]
  char v37; // [rsp+60h] [rbp-A0h] BYREF
  char v38; // [rsp+61h] [rbp-9Fh]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v40; // [rsp+70h] [rbp-90h] BYREF
  PVOID v41; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  PVOID v43; // [rsp+88h] [rbp-78h] BYREF
  const wchar_t *v44; // [rsp+90h] [rbp-70h]
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  PVOID v46; // [rsp+A0h] [rbp-60h] BYREF
  char v47[4]; // [rsp+A8h] [rbp-58h] BYREF
  char v48[4]; // [rsp+ACh] [rbp-54h] BYREF
  _QWORD Source2[2]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str2[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v51[40]; // [rsp+110h] [rbp+10h] BYREF

  v44 = a1;
  v38 = a4;
  *a5 = 0LL;
  v7 = 0LL;
  v41 = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  v9 = 0LL;
  v43 = 0LL;
  v46 = 0LL;
  v37 = 0;
  BugCheckParameter2 = 0LL;
  P = 0LL;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_56;
  v40 = 512;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
  *a5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_55;
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
LABEL_55:
    DeviceInterfaceName = -1073741670;
    goto LABEL_56;
  }
  v34 = a3;
  v12 = v44;
  LODWORD(v36) = v32;
  DeviceInterfaceName = CmGetDeviceInterfaceName((size_t)&v40, Str2, v44, v34, 0, v33, v36, &v40);
LABEL_5:
  if ( DeviceInterfaceName < 0 )
    goto LABEL_56;
  if ( a6 )
    *a6 = PipCheckForDenyExecute(Str2) ? 0x800000 : 0;
  CurrentThread = KeGetCurrentThread();
  v14 = -1LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  if ( (int)PiDmGetObject(3LL, (__int64)*a5, &BugCheckParameter2) >= 0 )
  {
    v18 = (signed __int64 *)BugCheckParameter2;
    PiDmObjectAcquireSharedLock((volatile signed __int64 *)BugCheckParameter2, v15, v16, v17);
    LOBYTE(v7) = v18[4] & 1;
    _m_prefetchw(v18);
    v20 = *v18;
    v21 = *v18 - 16;
    if ( (*v18 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v21 = 0LL;
    if ( (v20 & 2) != 0
      || (v19 = BugCheckParameter2,
          v22 = *v18,
          v22 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v21, v20)) )
    {
      v23 = BugCheckParameter2;
      ExfReleasePushLock((_QWORD *)BugCheckParameter2, v19);
    }
    else
    {
      v23 = BugCheckParameter2;
    }
    KeAbPostRelease(v23);
    v24 = KeGetCurrentThread();
    v25 = v24->KernelApcDisable + 1;
    v24->KernelApcDisable = v25;
    if ( !v25
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
      && !v24->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(4LL, Str2, &P);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_29;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1LL, v12, &v43);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_29;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)v12,
                     1u,
                     0LL,
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
  if ( !(unsigned __int8)PnpIsNullGuid(Source2) )
  {
    DeviceInterfaceName = PnpStringFromGuid((int *)Source2, v51);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_29;
    DeviceInterfaceName = PiDmAddCacheReferenceForObject(5LL, v51, &v41);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_29;
  }
  if ( !(_BYTE)v7 )
  {
    DeviceInterfaceName = PiPnpRtlBeginOperation((__int64 **)&v46);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_29;
    DeviceInterfaceName = CmCreateDeviceInterface(
                            PiPnpRtlCtx,
                            (unsigned int)*a5,
                            2,
                            (unsigned int)&Handle,
                            (__int64)&v37,
                            0);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_29;
  }
  v27 = BugCheckParameter2;
  if ( BugCheckParameter2 )
  {
LABEL_24:
    PiDmListAddObject(0LL, P, v27, 0LL);
    v28 = v37;
    do
      ++v14;
    while ( v12[v14] );
    DeviceInterfaceName = PnpSetObjectProperty(
                            *(__int64 *)&PiPnpRtlCtx,
                            (__int64)*a5,
                            3u,
                            (__int64)Handle,
                            0LL,
                            (__int64)&DEVPKEY_Device_InstanceId,
                            18,
                            (__int64)v12,
                            2 * (int)v14 + 2,
                            v37 != 0 ? 0x20000 : 0);
    if ( DeviceInterfaceName < 0 )
    {
      if ( v28 )
        CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, *a5, 0LL);
    }
    else
    {
      PiDmListAddObject(1LL, v43, v27, 0LL);
      if ( v41 )
        PiDmListAddObject(2LL, v41, v27, 0LL);
    }
    goto LABEL_29;
  }
  DeviceInterfaceName = PiDmGetObject(3LL, (__int64)*a5, &BugCheckParameter2);
  if ( DeviceInterfaceName >= 0 )
  {
    v27 = BugCheckParameter2;
    goto LABEL_24;
  }
LABEL_29:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  v29 = KeGetCurrentThread();
  v30 = v29->KernelApcDisable + 1;
  v29->KernelApcDisable = v30;
  if ( !v30
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
    && !v29->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( DeviceInterfaceName >= 0 )
  {
    if ( !v38 )
      DeviceInterfaceName = CmSetDeviceInterfacePathFormat((__int64)v29, *a5, 1);
    v7 = (unsigned int *)v41;
    v8 = (unsigned int *)v43;
    v9 = (unsigned int *)P;
    goto LABEL_34;
  }
  v7 = (unsigned int *)v41;
  v8 = (unsigned int *)v43;
  v9 = (unsigned int *)P;
LABEL_56:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0);
    *a5 = 0LL;
  }
LABEL_34:
  if ( Handle )
    ZwClose(Handle);
  if ( v46 )
    PiPnpRtlEndOperation((char *)v46);
  if ( BugCheckParameter2 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
  if ( v9 )
  {
    PiDmRemoveCacheReferenceForObject(v9[7], *((_QWORD *)v9 + 2));
    PiDmObjectRelease(v9);
  }
  if ( v8 )
  {
    PiDmRemoveCacheReferenceForObject(v8[7], *((_QWORD *)v8 + 2));
    PiDmObjectRelease(v8);
  }
  if ( v7 )
  {
    PiDmRemoveCacheReferenceForObject(v7[7], *((_QWORD *)v7 + 2));
    PiDmObjectRelease(v7);
  }
  return (unsigned int)DeviceInterfaceName;
}

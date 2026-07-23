/*
 * XREFs of IopLegacyResourceAllocation @ 0x140554EEC
 * Callers:
 *     IopDestroyDeviceNode @ 0x1403F1B98 (IopDestroyDeviceNode.c)
 *     IopReleaseDeviceResources @ 0x1404844F8 (IopReleaseDeviceResources.c)
 *     IoAssignResources @ 0x140629D40 (IoAssignResources.c)
 *     IoReportResourceUsageInternal @ 0x14062C348 (IoReportResourceUsageInternal.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeReleaseSemaphore @ 0x140052530 (KeReleaseSemaphore.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     IoDeleteDevice @ 0x14007F38C (IoDeleteDevice.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopSetLegacyResourcesFlag @ 0x1401CDF00 (IopSetLegacyResourcesFlag.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopDestroyDeviceNode @ 0x1403F1B98 (IopDestroyDeviceNode.c)
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 *     IoCreateDevice @ 0x140472390 (IoCreateDevice.c)
 *     PipAllocateDeviceNode @ 0x1404CB638 (PipAllocateDeviceNode.c)
 *     PnpAllocateResources @ 0x14050B1A0 (PnpAllocateResources.c)
 *     PnpDetermineResourceListSize @ 0x14050F344 (PnpDetermineResourceListSize.c)
 *     IopRemoveLegacyDeviceNode @ 0x140555018 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseResources @ 0x140555054 (IopReleaseResources.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140556210 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopCombineLegacyResources @ 0x14062E734 (IopCombineLegacyResources.c)
 */

__int64 __fastcall IopLegacyResourceAllocation(int a1, __int64 a2, __int64 a3, __int64 a4, const void **a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v10; // edi
  _QWORD *v11; // rbx
  struct _DEVICE_OBJECT *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int DeviceNode; // eax
  PDEVICE_OBJECT v19; // rcx
  const void **v20; // rsi
  _DWORD *v21; // rcx
  PVOID PoolWithTag; // r12
  size_t v23; // r8
  _DWORD *v24; // rax
  void *v25; // rbx
  unsigned int v26; // eax
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v28[14]; // [rsp+58h] [rbp-21h] BYREF
  size_t Size; // [rsp+E8h] [rbp+6Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  v10 = -1073741823;
  if ( a3 )
  {
    v11 = *(_QWORD **)(*(_QWORD *)(a3 + 312) + 40LL);
    Size = (size_t)v11;
    if ( v11 )
    {
LABEL_3:
      v12 = (struct _DEVICE_OBJECT *)a3;
LABEL_4:
      v10 = 0;
      goto LABEL_5;
    }
    if ( (*(_DWORD *)(a3 + 48) & 0x1000) != 0 )
      goto LABEL_35;
    DeviceNode = PipAllocateDeviceNode(a3, (void **)&Size);
    v11 = (_QWORD *)Size;
    v10 = DeviceNode;
    if ( Size )
    {
      if ( DeviceNode == -1073740946 )
      {
        IopDestroyDeviceNode((char *)Size);
        goto LABEL_16;
      }
      PipSetDevNodeFlags(Size, 0x20000);
      goto LABEL_3;
    }
    goto LABEL_34;
  }
  v11 = (_QWORD *)IopLegacyDeviceNode;
  Size = IopLegacyDeviceNode;
  if ( IopLegacyDeviceNode )
  {
    do
    {
      if ( v11[54] == a2 )
        break;
      v11 = (_QWORD *)*v11;
      Size = (size_t)v11;
    }
    while ( v11 );
    if ( v11 )
    {
      v12 = (struct _DEVICE_OBJECT *)v11[4];
      goto LABEL_4;
    }
  }
  v10 = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &DeviceObject);
  if ( v10 < 0 )
    goto LABEL_35;
  v12 = DeviceObject;
  v19 = DeviceObject;
  DeviceObject->Flags |= 0x1000u;
  v10 = PipAllocateDeviceNode((__int64)v19, (void **)&Size);
  if ( v10 == -1073740946 || (v11 = (_QWORD *)Size) == 0LL )
  {
    IoDeleteDevice(v12);
LABEL_34:
    v10 = -1073741670;
LABEL_35:
    v12 = (struct _DEVICE_OBJECT *)Size;
    v11 = (_QWORD *)Size;
    goto LABEL_36;
  }
  v12->DriverObject = (struct _DRIVER_OBJECT *)a2;
  PipSetDevNodeFlags((__int64)v11, 131073);
  PipSetDevNodeState((__int64)v11, 770);
  v11[54] = a2;
  *v11 = IopLegacyDeviceNode;
  if ( IopLegacyDeviceNode )
    *(_QWORD *)(IopLegacyDeviceNode + 8) = v11;
  IopLegacyDeviceNode = (__int64)v11;
LABEL_36:
  if ( v10 < 0 )
    goto LABEL_16;
LABEL_5:
  v13 = 0LL;
  if ( v11[2] )
    goto LABEL_6;
  if ( a4 )
  {
    if ( *(_DWORD *)(a4 + 4) == -1 )
      *(_DWORD *)(a4 + 4) = PnpDefaultInterfaceType;
    v11[2] = IopRootDeviceNode;
LABEL_6:
    if ( a4 )
      goto LABEL_42;
  }
  if ( v11[2] )
  {
LABEL_8:
    IopReleaseResources(v11);
    goto LABEL_9;
  }
LABEL_42:
  if ( v11[52] || v11[68] )
    goto LABEL_8;
LABEL_9:
  if ( !a4 )
  {
    v13 = v11[66];
    goto LABEL_11;
  }
  memset(v28, 0, 0x40uLL);
  HIDWORD(v28[1]) = a1;
  v28[0] = v12;
  v28[3] = a4;
  LODWORD(v28[1]) = 128;
  PnpAllocateResources(1u, v28, 1, 0LL);
  v10 = v28[7];
  if ( SLODWORD(v28[7]) < 0 )
    goto LABEL_11;
  v20 = a5;
  v21 = (_DWORD *)v28[5];
  if ( *a5 )
    v21 = *a5;
  Size = (unsigned int)PnpDetermineResourceListSize(v21);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x20207050u);
  if ( PoolWithTag )
  {
    if ( *v20 )
      ExFreePoolWithTag((PVOID)v28[5], 0);
    else
      *v20 = (const void *)v28[5];
    ExAcquireFastMutex(&PiResourceListLock);
    v23 = Size;
    v11[52] = PoolWithTag;
    memmove(PoolWithTag, *v20, v23);
    v11[53] = v28[6];
    KeReleaseGuardedMutex(&PiResourceListLock);
    v13 = v11[66];
  }
  else
  {
    ExAcquireFastMutex(&PiResourceListLock);
    v11[52] = v28[5];
    v11[53] = v28[6];
    KeReleaseGuardedMutex(&PiResourceListLock);
    IopReleaseResources(v11);
    v10 = -1073741670;
  }
  if ( v10 < 0 )
  {
LABEL_11:
    IopRemoveLegacyDeviceNode(a3, v11);
    if ( v10 < 0 )
      goto LABEL_16;
  }
  if ( v13 )
  {
    v24 = (_DWORD *)IopCombineLegacyResources(v13);
    v25 = v24;
    if ( v24 )
    {
      v26 = PnpDetermineResourceListSize(v24);
      IopWriteAllocatedResourcesToRegistry(v13, v25, v26);
      ExFreePoolWithTag(v25, 0);
    }
  }
  if ( a1 != 3 && a4 )
    IopSetLegacyResourcesFlag(a2);
LABEL_16:
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
  return (unsigned int)v10;
}

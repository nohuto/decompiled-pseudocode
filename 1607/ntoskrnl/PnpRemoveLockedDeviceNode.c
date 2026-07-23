/*
 * XREFs of PnpRemoveLockedDeviceNode @ 0x140085A68
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140485CFC (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PipRestoreDevNodeState @ 0x140084EBC (PipRestoreDevNodeState.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IoDeleteAllDependencyRelations @ 0x1403F1C9C (IoDeleteAllDependencyRelations.c)
 *     PnpDisableDeviceInterfaces @ 0x14048367C (PnpDisableDeviceInterfaces.c)
 *     PpHotSwapInitRemovalPolicy @ 0x140484264 (PpHotSwapInitRemovalPolicy.c)
 *     PipSetDevNodeProblem @ 0x140484270 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404844A0 (PipClearDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x1404844F8 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x140484840 (IopRemoveDevice.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404E9804 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpUnloadAttachedDriver @ 0x1405452B8 (PnpUnloadAttachedDriver.c)
 *     PipIsProblemReadonly @ 0x14062E304 (PipIsProblemReadonly.c)
 *     PpProfileCommitTransitioningDock @ 0x1406424D0 (PpProfileCommitTransitioningDock.c)
 */

__int64 __fastcall PnpRemoveLockedDeviceNode(__int64 a1, unsigned int a2, unsigned int a3)
{
  struct _DEVICE_OBJECT *v3; // r13
  unsigned int v4; // r15d
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 result; // rax
  bool v10; // bp
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  __int64 *PoolWithTag; // rdi
  PVOID v13; // r12
  KIRQL v14; // r8
  __int64 *v15; // rdx
  PVOID *v16; // r14
  KIRQL v17; // al
  int v18; // edx
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // esi
  struct _DEVICE_OBJECT *v23; // rsi
  struct _DEVICE_OBJECT **v24; // r14
  struct _DRIVER_OBJECT **v25; // r15
  __int64 i; // rcx
  __int64 v27; // rax
  KIRQL v28; // al
  int v29; // eax
  __int64 v30; // rbp

  v3 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v4 = a2;
  v6 = 0;
  PpHotSwapInitRemovalPolicy();
  v8 = *(_QWORD *)(v7 + 8);
  if ( v8 )
  {
    do
    {
      v29 = *(_DWORD *)(v8 + 396);
      v30 = *(_QWORD *)v8;
      if ( (v29 & 0x10) != 0 )
        *(_DWORD *)(v8 + 396) = v29 & 0xFFFFFFEF;
      if ( *(_QWORD *)(v8 + 416) || *(_QWORD *)(v8 + 544) || (*(_DWORD *)(v8 + 396) & 0x40) != 0 )
      {
        IopRemoveDevice(*(PDEVICE_OBJECT *)(v8 + 32));
        IopReleaseDeviceResources(v8, 0LL);
      }
      PipSetDevNodeState(v8, 788);
      v8 = v30;
    }
    while ( v30 );
  }
  result = (unsigned int)(*(_DWORD *)(a1 + 300) - 782);
  if ( (unsigned int)result <= 1 )
  {
    if ( *(_DWORD *)(a1 + 304) == 785 )
      return result;
    PipRestoreDevNodeState(a1);
  }
  v10 = *(_DWORD *)(a1 + 300) != 788;
  AttachedDevice = v3->AttachedDevice;
  while ( AttachedDevice )
  {
    AttachedDevice = AttachedDevice->AttachedDevice;
    ++v6;
  }
  PoolWithTag = 0LL;
  v13 = 0LL;
  if ( v6 )
  {
    v22 = 8 * v6 + 16;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, v22, 0x65647050u);
    if ( PoolWithTag )
    {
      v13 = ExAllocatePoolWithTag(PagedPool, v22, 0x65647050u);
      if ( v13 )
      {
        memset(PoolWithTag, 0, v22);
        memset(v13, 0, v22);
        v23 = v3->AttachedDevice;
        v24 = (struct _DEVICE_OBJECT **)PoolWithTag;
        v25 = (struct _DRIVER_OBJECT **)v13;
        while ( v23 )
        {
          ObfReferenceObjectWithTag(v23, 0x746C6644u);
          *v24++ = v23;
          *v25++ = v23->DriverObject;
          v23 = v23->AttachedDevice;
        }
        v4 = a2;
      }
      else
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
    }
  }
  v14 = KeAcquireQueuedSpinLock(0xAuLL);
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    for ( i = *PoolWithTag; i; i = *v15 )
    {
      *(_DWORD *)(*(_QWORD *)(i + 312) + 32LL) &= ~4u;
      v27 = *v15++;
      *(_DWORD *)(*(_QWORD *)(v27 + 312) + 32LL) |= 8u;
    }
  }
  v3->DeviceObjectExtension->ExtensionFlags &= ~4u;
  v3->DeviceObjectExtension->ExtensionFlags |= 8u;
  KeReleaseQueuedSpinLock(0xAuLL, v14);
  if ( v10 )
  {
    IopRemoveDevice(v3);
    if ( *(_DWORD *)(a1 + 300) == 784 )
      PnpDisableDeviceInterfaces(a1 + 40);
    IopReleaseDeviceResources(a1, (*(_BYTE *)(a1 + 396) & 0x10) != 0);
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x10) == 0 && (unsigned int)(*(_DWORD *)(a1 + 568) - 3) <= 1 )
    PpProfileCommitTransitioningDock(a1);
  v16 = (PVOID *)PoolWithTag;
  if ( PoolWithTag )
  {
    if ( *PoolWithTag )
    {
      do
      {
        v28 = KeAcquireQueuedSpinLock(0xAuLL);
        *(_DWORD *)(*((_QWORD *)*v16 + 39) + 32LL) &= ~8u;
        *(_DWORD *)(*((_QWORD *)*v16 + 39) + 32LL) |= 0x10u;
        KeReleaseQueuedSpinLock(0xAuLL, v28);
        PnpUnloadAttachedDriver(*(PVOID *)((char *)v16 + (_BYTE *)v13 - (_BYTE *)PoolWithTag));
        ObfDereferenceObjectWithTag(*v16++, 0x746C6644u);
      }
      while ( *v16 );
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    ExFreePoolWithTag(v13, 0);
  }
  v17 = KeAcquireQueuedSpinLock(0xAuLL);
  v3->DeviceObjectExtension->ExtensionFlags &= ~8u;
  v3->DeviceObjectExtension->ExtensionFlags |= 0x10u;
  KeReleaseQueuedSpinLock(0xAuLL, v17);
  v18 = 786;
  if ( (*(_DWORD *)(a1 + 396) & 0x10) == 0 )
    v18 = 788;
  PipSetDevNodeState(a1, v18);
  if ( v4
    && ((*(_DWORD *)(a1 + 396) & 0x6000) == 0
     || ((v4 - 22) & 0xFFFFFFFD) == 0
     || (unsigned int)PipIsProblemReadonly(a1, v4)
     && !(unsigned int)PipIsProblemReadonly(v19, *(unsigned int *)(a1 + 404))) )
  {
    PipClearDevNodeProblem(a1);
    v20 = a3;
    if ( !a3 )
      v20 = *(_DWORD *)(a1 + 392);
    PipSetDevNodeProblem(a1, v4, v20);
  }
  result = *(unsigned int *)(a1 + 396);
  if ( (result & 0x10) == 0 )
    result = IoDeleteAllDependencyRelations(v3);
  v21 = *(_QWORD *)(a1 + 48);
  if ( v21 )
    return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v19, v21, 23LL);
  return result;
}

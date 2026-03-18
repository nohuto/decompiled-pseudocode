/*
 * XREFs of PnpRemoveLockedDeviceNode @ 0x1400DA4F4
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1404A0664 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PipSetDevNodeState @ 0x140099720 (PipSetDevNodeState.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     PipRestoreDevNodeState @ 0x1400DA400 (PipRestoreDevNodeState.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoDeleteAllDependencyRelations @ 0x140455F30 (IoDeleteAllDependencyRelations.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140459EF0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpUnloadAttachedDriver @ 0x140493B70 (PnpUnloadAttachedDriver.c)
 *     PnpDisableDeviceInterfaces @ 0x1404A091C (PnpDisableDeviceInterfaces.c)
 *     PpHotSwapInitRemovalPolicy @ 0x1404A0BD8 (PpHotSwapInitRemovalPolicy.c)
 *     PipSetDevNodeProblem @ 0x1404A0BE4 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404A0DFC (PipClearDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x1404A0EBC (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x1404A0FEC (IopRemoveDevice.c)
 *     PipIsProblemReadonly @ 0x140603F14 (PipIsProblemReadonly.c)
 *     PpProfileCommitTransitioningDock @ 0x14060DFE0 (PpProfileCommitTransitioningDock.c)
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
  unsigned int v14; // esi
  struct _DEVICE_OBJECT *v15; // rsi
  struct _DEVICE_OBJECT **v16; // r14
  struct _DRIVER_OBJECT **v17; // r15
  KIRQL v18; // r8
  __int64 *v19; // rdx
  __int64 i; // rcx
  PVOID *v21; // r14
  KIRQL v22; // al
  KIRQL v23; // al
  int v24; // edx
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rax
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
    v14 = 8 * v6 + 16;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x65647050u);
    if ( PoolWithTag )
    {
      v13 = ExAllocatePoolWithTag(PagedPool, v14, 0x65647050u);
      if ( v13 )
      {
        memset(PoolWithTag, 0, v14);
        memset(v13, 0, v14);
        v15 = v3->AttachedDevice;
        v16 = (struct _DEVICE_OBJECT **)PoolWithTag;
        v17 = (struct _DRIVER_OBJECT **)v13;
        while ( v15 )
        {
          ObfReferenceObjectWithTag(v15, 0x746C6644u);
          *v16++ = v15;
          *v17++ = v15->DriverObject;
          v15 = v15->AttachedDevice;
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
  v18 = KeAcquireQueuedSpinLock(0xAuLL);
  v19 = PoolWithTag;
  if ( PoolWithTag )
  {
    for ( i = *PoolWithTag; i; i = *v19 )
    {
      *(_DWORD *)(*(_QWORD *)(i + 312) + 32LL) &= ~4u;
      v28 = *v19++;
      *(_DWORD *)(*(_QWORD *)(v28 + 312) + 32LL) |= 8u;
    }
  }
  v3->DeviceObjectExtension->ExtensionFlags &= ~4u;
  v3->DeviceObjectExtension->ExtensionFlags |= 8u;
  KeReleaseQueuedSpinLock(0xAuLL, v18);
  if ( v10 )
  {
    IopRemoveDevice(v3);
    if ( *(_DWORD *)(a1 + 300) == 784 )
      PnpDisableDeviceInterfaces(a1 + 40);
    IopReleaseDeviceResources(a1, (*(_BYTE *)(a1 + 396) & 0x10) != 0);
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x10) == 0 && (unsigned int)(*(_DWORD *)(a1 + 568) - 3) <= 1 )
    PpProfileCommitTransitioningDock(a1);
  v21 = (PVOID *)PoolWithTag;
  if ( PoolWithTag )
  {
    if ( *PoolWithTag )
    {
      do
      {
        v22 = KeAcquireQueuedSpinLock(0xAuLL);
        *(_DWORD *)(*((_QWORD *)*v21 + 39) + 32LL) &= ~8u;
        *(_DWORD *)(*((_QWORD *)*v21 + 39) + 32LL) |= 0x10u;
        KeReleaseQueuedSpinLock(0xAuLL, v22);
        PnpUnloadAttachedDriver(*(PVOID *)((char *)v21 + (_BYTE *)v13 - (_BYTE *)PoolWithTag));
        ObfDereferenceObjectWithTag(*v21++, 0x746C6644u);
      }
      while ( *v21 );
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    ExFreePoolWithTag(v13, 0);
  }
  v23 = KeAcquireQueuedSpinLock(0xAuLL);
  v3->DeviceObjectExtension->ExtensionFlags &= ~8u;
  v3->DeviceObjectExtension->ExtensionFlags |= 0x10u;
  KeReleaseQueuedSpinLock(0xAuLL, v23);
  v24 = 786;
  if ( (*(_DWORD *)(a1 + 396) & 0x10) == 0 )
    v24 = 788;
  PipSetDevNodeState(a1, v24);
  if ( v4
    && ((*(_DWORD *)(a1 + 396) & 0x6000) == 0
     || ((v4 - 22) & 0xFFFFFFFD) == 0
     || (unsigned int)PipIsProblemReadonly(a1, v4)
     && !(unsigned int)PipIsProblemReadonly(v25, *(unsigned int *)(a1 + 404))) )
  {
    PipClearDevNodeProblem(a1);
    v26 = a3;
    if ( !a3 )
      v26 = *(_DWORD *)(a1 + 392);
    PipSetDevNodeProblem(a1, v4, v26);
  }
  result = *(unsigned int *)(a1 + 396);
  if ( (result & 0x10) == 0 )
    result = IoDeleteAllDependencyRelations(v3);
  v27 = *(_QWORD *)(a1 + 48);
  if ( v27 )
    return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v25, v27, 23LL);
  return result;
}

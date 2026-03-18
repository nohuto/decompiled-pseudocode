/*
 * XREFs of PnpRemoveLockedDeviceNode @ 0x14011BB6C
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140536DF4 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x14011C394 (PipRestoreDevNodeState.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DF4DC (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     IoDeleteAllDependencyRelations @ 0x140534DB0 (IoDeleteAllDependencyRelations.c)
 *     IopReleaseDeviceResources @ 0x1405383A4 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x1405383EC (IopRemoveDevice.c)
 *     PpHotSwapInitRemovalPolicy @ 0x140538A7C (PpHotSwapInitRemovalPolicy.c)
 *     PipSetDevNodeProblem @ 0x140538A88 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140538C94 (PipClearDevNodeProblem.c)
 *     PnpDisableDeviceInterfaces @ 0x140538D8C (PnpDisableDeviceInterfaces.c)
 *     PnpUnloadAttachedDriver @ 0x1405395A8 (PnpUnloadAttachedDriver.c)
 *     PipIsProblemReadonly @ 0x14058C4FC (PipIsProblemReadonly.c)
 *     PpProfileCommitTransitioningDock @ 0x14068DC08 (PpProfileCommitTransitioningDock.c)
 */

__int64 __fastcall PnpRemoveLockedDeviceNode(__int64 a1, unsigned int a2)
{
  struct _DEVICE_OBJECT *v2; // r13
  unsigned int v3; // r15d
  int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 result; // rax
  bool v9; // bp
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  __int64 *PoolWithTag; // rdi
  PVOID v12; // r12
  KIRQL v13; // r8
  __int64 *v14; // rdx
  PVOID *v15; // r14
  KIRQL v16; // al
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // esi
  struct _DEVICE_OBJECT *v21; // rsi
  struct _DEVICE_OBJECT **v22; // r14
  struct _DRIVER_OBJECT **v23; // r15
  __int64 i; // rcx
  __int64 v25; // rax
  KIRQL v26; // al
  int v27; // eax
  __int64 v28; // rbp

  v2 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v3 = a2;
  v5 = 0;
  PpHotSwapInitRemovalPolicy();
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 )
  {
    do
    {
      v27 = *(_DWORD *)(v7 + 396);
      v28 = *(_QWORD *)v7;
      if ( (v27 & 0x10) != 0 )
        *(_DWORD *)(v7 + 396) = v27 & 0xFFFFFFEF;
      if ( *(_QWORD *)(v7 + 416) || *(_QWORD *)(v7 + 544) || (*(_DWORD *)(v7 + 396) & 0x40) != 0 )
      {
        IopRemoveDevice(*(PDEVICE_OBJECT *)(v7 + 32));
        IopReleaseDeviceResources(v7, 0LL);
      }
      PipSetDevNodeState(v7, 788);
      v7 = v28;
    }
    while ( v28 );
  }
  result = (unsigned int)(*(_DWORD *)(a1 + 300) - 782);
  if ( (unsigned int)result <= 1 )
  {
    if ( *(_DWORD *)(a1 + 304) == 785 )
      return result;
    PipRestoreDevNodeState(a1);
  }
  v9 = *(_DWORD *)(a1 + 300) != 788;
  AttachedDevice = v2->AttachedDevice;
  while ( AttachedDevice )
  {
    AttachedDevice = AttachedDevice->AttachedDevice;
    ++v5;
  }
  PoolWithTag = 0LL;
  v12 = 0LL;
  if ( v5 )
  {
    v20 = 8 * v5 + 16;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, v20, 0x65647050u);
    if ( PoolWithTag )
    {
      v12 = ExAllocatePoolWithTag(PagedPool, v20, 0x65647050u);
      if ( v12 )
      {
        memset(PoolWithTag, 0, v20);
        memset(v12, 0, v20);
        v21 = v2->AttachedDevice;
        v22 = (struct _DEVICE_OBJECT **)PoolWithTag;
        v23 = (struct _DRIVER_OBJECT **)v12;
        while ( v21 )
        {
          ObfReferenceObjectWithTag(v21, 0x746C6644u);
          *v22++ = v21;
          *v23++ = v21->DriverObject;
          v21 = v21->AttachedDevice;
        }
        v3 = a2;
      }
      else
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
    }
  }
  v13 = KeAcquireQueuedSpinLock(0xAuLL);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    for ( i = *PoolWithTag; i; i = *v14 )
    {
      *(_DWORD *)(*(_QWORD *)(i + 312) + 32LL) &= ~4u;
      v25 = *v14++;
      *(_DWORD *)(*(_QWORD *)(v25 + 312) + 32LL) |= 8u;
    }
  }
  v2->DeviceObjectExtension->ExtensionFlags &= ~4u;
  v2->DeviceObjectExtension->ExtensionFlags |= 8u;
  KeReleaseQueuedSpinLock(0xAuLL, v13);
  if ( v9 )
  {
    IopRemoveDevice(v2);
    if ( *(_DWORD *)(a1 + 300) == 784 )
      PnpDisableDeviceInterfaces(a1 + 40);
    IopReleaseDeviceResources(a1, (*(_BYTE *)(a1 + 396) & 0x10) != 0);
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x10) == 0 && (unsigned int)(*(_DWORD *)(a1 + 568) - 3) <= 1 )
    PpProfileCommitTransitioningDock(a1);
  v15 = (PVOID *)PoolWithTag;
  if ( PoolWithTag )
  {
    if ( *PoolWithTag )
    {
      do
      {
        v26 = KeAcquireQueuedSpinLock(0xAuLL);
        *(_DWORD *)(*((_QWORD *)*v15 + 39) + 32LL) &= ~8u;
        *(_DWORD *)(*((_QWORD *)*v15 + 39) + 32LL) |= 0x10u;
        KeReleaseQueuedSpinLock(0xAuLL, v26);
        PnpUnloadAttachedDriver(*(PVOID *)((char *)v15 + (_BYTE *)v12 - (_BYTE *)PoolWithTag));
        ObfDereferenceObjectWithTag(*v15++, 0x746C6644u);
      }
      while ( *v15 );
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    ExFreePoolWithTag(v12, 0);
  }
  v16 = KeAcquireQueuedSpinLock(0xAuLL);
  v2->DeviceObjectExtension->ExtensionFlags &= ~8u;
  v2->DeviceObjectExtension->ExtensionFlags |= 0x10u;
  KeReleaseQueuedSpinLock(0xAuLL, v16);
  v17 = 786;
  if ( (*(_DWORD *)(a1 + 396) & 0x10) == 0 )
    v17 = 788;
  PipSetDevNodeState(a1, v17);
  if ( v3
    && ((*(_DWORD *)(a1 + 396) & 0x6000) == 0
     || ((v3 - 22) & 0xFFFFFFFD) == 0
     || (unsigned int)PipIsProblemReadonly(a1, v3)
     && !(unsigned int)PipIsProblemReadonly(v18, *(unsigned int *)(a1 + 404))) )
  {
    PipClearDevNodeProblem(a1);
    PipSetDevNodeProblem(a1, v3, *(unsigned int *)(a1 + 392));
  }
  result = *(unsigned int *)(a1 + 396);
  if ( (result & 0x10) == 0 )
    result = IoDeleteAllDependencyRelations(v2);
  v19 = *(_QWORD *)(a1 + 48);
  if ( v19 )
    return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v18, v19, 23LL);
  return result;
}

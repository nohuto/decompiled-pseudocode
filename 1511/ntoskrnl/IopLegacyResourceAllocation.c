/*
 * XREFs of IopLegacyResourceAllocation @ 0x1406045CC
 * Callers:
 *     IopDestroyDeviceNode @ 0x140455E40 (IopDestroyDeviceNode.c)
 *     IopReleaseDeviceResources @ 0x1404A0EBC (IopReleaseDeviceResources.c)
 *     IoAssignResources @ 0x1405FFC38 (IoAssignResources.c)
 *     IoReportResourceUsageInternal @ 0x140602248 (IoReportResourceUsageInternal.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IopSetLegacyResourcesFlag @ 0x1401BFB2C (IopSetLegacyResourcesFlag.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PnpDetermineResourceListSize @ 0x1404EF918 (PnpDetermineResourceListSize.c)
 *     PnpAllocateResources @ 0x1404F213C (PnpAllocateResources.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140529A40 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopReleaseResources @ 0x140603E54 (IopReleaseResources.c)
 *     IopCombineLegacyResources @ 0x140604350 (IopCombineLegacyResources.c)
 *     IopFindLegacyDeviceNode @ 0x140604424 (IopFindLegacyDeviceNode.c)
 *     IopRemoveLegacyDeviceNode @ 0x140604864 (IopRemoveLegacyDeviceNode.c)
 */

__int64 __fastcall IopLegacyResourceAllocation(
        int a1,
        struct _DRIVER_OBJECT *a2,
        __int64 a3,
        __int64 a4,
        const void **a5)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r15
  int LegacyDeviceNode; // r14d
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  _DWORD *v13; // rcx
  SIZE_T v14; // r13
  PVOID PoolWithTag; // r12
  _DWORD *v16; // rax
  void *v17; // rbx
  ULONG v18; // eax
  _QWORD *v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v22[8]; // [rsp+40h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  v8 = a3;
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  LegacyDeviceNode = IopFindLegacyDeviceNode(a2, v8, &v20, &v21);
  if ( LegacyDeviceNode < 0 )
    goto LABEL_32;
  v11 = v20;
  v12 = 0LL;
  if ( v20[2] )
  {
LABEL_7:
    if ( a4 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( a4 )
  {
    if ( *(_DWORD *)(a4 + 4) == -1 )
      *(_DWORD *)(a4 + 4) = PnpDefaultInterfaceType;
    v11[2] = IopRootDeviceNode;
    goto LABEL_7;
  }
LABEL_8:
  if ( v11[2] )
  {
LABEL_11:
    IopReleaseResources((__int64)v11);
    goto LABEL_12;
  }
LABEL_9:
  if ( v11[52] || v11[68] )
    goto LABEL_11;
LABEL_12:
  if ( !a4 )
  {
    v12 = v11[66];
LABEL_25:
    IopRemoveLegacyDeviceNode(v8, v11);
    if ( LegacyDeviceNode < 0 )
      goto LABEL_32;
    goto LABEL_26;
  }
  memset(v22, 0, sizeof(v22));
  HIDWORD(v22[1]) = a1;
  v22[0] = v21;
  v22[3] = a4;
  LODWORD(v22[1]) = 128;
  PnpAllocateResources(1u, v22, 1, 0LL);
  LegacyDeviceNode = v22[7];
  if ( SLODWORD(v22[7]) < 0 )
    goto LABEL_25;
  v13 = (_DWORD *)v22[5];
  if ( *a5 )
    v13 = *a5;
  v14 = (unsigned int)PnpDetermineResourceListSize(v13);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x20207050u);
  if ( PoolWithTag )
  {
    if ( *a5 )
      ExFreePoolWithTag((PVOID)v22[5], 0);
    else
      *a5 = (const void *)v22[5];
    ExAcquireFastMutex(&PiResourceListLock);
    v11[52] = PoolWithTag;
    memmove(PoolWithTag, *a5, v14);
    v11[53] = v22[6];
    KeReleaseGuardedMutex(&PiResourceListLock);
    v12 = v11[66];
  }
  else
  {
    ExAcquireFastMutex(&PiResourceListLock);
    v11[52] = v22[5];
    v11[53] = v22[6];
    KeReleaseGuardedMutex(&PiResourceListLock);
    IopReleaseResources((__int64)v11);
    LegacyDeviceNode = -1073741670;
  }
  if ( LegacyDeviceNode < 0 )
  {
    v8 = a3;
    goto LABEL_25;
  }
LABEL_26:
  if ( v12 )
  {
    v16 = IopCombineLegacyResources(v12);
    v17 = v16;
    if ( v16 )
    {
      v18 = PnpDetermineResourceListSize(v16);
      IopWriteAllocatedResourcesToRegistry(v12, v17, v18);
      ExFreePoolWithTag(v17, 0);
    }
  }
  if ( a1 != 3 && a4 )
    IopSetLegacyResourcesFlag((__int64)a2);
LABEL_32:
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)LegacyDeviceNode;
}

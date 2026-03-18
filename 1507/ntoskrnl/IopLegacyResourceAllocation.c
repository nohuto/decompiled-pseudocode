/*
 * XREFs of IopLegacyResourceAllocation @ 0x14067F1F4
 * Callers:
 *     IopDestroyDeviceNode @ 0x140534C48 (IopDestroyDeviceNode.c)
 *     IopReleaseDeviceResources @ 0x1405383A4 (IopReleaseDeviceResources.c)
 *     IoAssignResources @ 0x14067A81C (IoAssignResources.c)
 *     IoReportResourceUsageInternal @ 0x14067D0F0 (IoReportResourceUsageInternal.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IopSetLegacyResourcesFlag @ 0x1401FB71C (IopSetLegacyResourcesFlag.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpAllocateResources @ 0x14045C42C (PnpAllocateResources.c)
 *     PnpDetermineResourceListSize @ 0x14045D228 (PnpDetermineResourceListSize.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14059C324 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopReleaseResources @ 0x14067EA80 (IopReleaseResources.c)
 *     IopCombineLegacyResources @ 0x14067EF78 (IopCombineLegacyResources.c)
 *     IopFindLegacyDeviceNode @ 0x14067F04C (IopFindLegacyDeviceNode.c)
 *     IopRemoveLegacyDeviceNode @ 0x14067F5C8 (IopRemoveLegacyDeviceNode.c)
 */

__int64 __fastcall IopLegacyResourceAllocation(
        int a1,
        struct _DRIVER_OBJECT *a2,
        __int64 a3,
        __int64 a4,
        const void **a5)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  int LegacyDeviceNode; // r15d
  _QWORD *v11; // rbx
  __int64 v12; // r14
  _DWORD *v13; // rcx
  __int64 v14; // r9
  PVOID PoolWithTag; // r13
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int8 CurrentIrql; // r14
  signed __int8 v19; // cf
  _QWORD *v20; // rbx
  size_t v21; // r8
  unsigned __int8 v22; // bl
  signed __int32 v23; // eax
  __int64 v24; // rax
  __int64 v25; // rbx
  unsigned __int8 v26; // r15
  _QWORD *v27; // rcx
  unsigned __int8 v28; // bl
  signed __int32 v29; // eax
  _DWORD *v30; // rax
  void *v31; // rbx
  ULONG v32; // eax
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  _QWORD *v36; // [rsp+38h] [rbp-41h] BYREF
  __int64 v37; // [rsp+40h] [rbp-39h] BYREF
  size_t Size; // [rsp+48h] [rbp-31h]
  _QWORD v39[14]; // [rsp+58h] [rbp-21h] BYREF

  CurrentThread = KeGetCurrentThread();
  v8 = a3;
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  LegacyDeviceNode = IopFindLegacyDeviceNode(a2, v8, &v36, &v37);
  if ( LegacyDeviceNode < 0 )
    goto LABEL_44;
  v11 = v36;
  v12 = 0LL;
  if ( v36[2] )
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
LABEL_37:
    IopRemoveLegacyDeviceNode(v8, v11);
    if ( LegacyDeviceNode < 0 )
      goto LABEL_44;
    goto LABEL_38;
  }
  memset(v39, 0, 0x40uLL);
  HIDWORD(v39[1]) = a1;
  v39[0] = v37;
  v39[3] = a4;
  LODWORD(v39[1]) = 128;
  PnpAllocateResources(1u, v39, 1, 0LL);
  LegacyDeviceNode = v39[7];
  if ( SLODWORD(v39[7]) < 0 )
    goto LABEL_37;
  v13 = (_DWORD *)v39[5];
  if ( *a5 )
    v13 = *a5;
  Size = (unsigned int)PnpDetermineResourceListSize(v13);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x20207050u);
  if ( PoolWithTag )
  {
    if ( *a5 )
      ExFreePoolWithTag((PVOID)v39[5], 0);
    else
      *a5 = (const void *)v39[5];
    v16 = KeAbPreAcquire((ULONG_PTR)&PiResourceListLock, 0LL, 0LL, v14);
    v17 = v16;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    v19 = _interlockedbittestandreset((volatile signed __int32 *)&PiResourceListLock, 0);
    if ( !v19 )
      ExpAcquireFastMutexContended((ULONG_PTR)&PiResourceListLock, v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    v20 = v36;
    v21 = Size;
    qword_14034AA48 = (__int64)KeGetCurrentThread();
    dword_14034AA70 = CurrentIrql;
    v36[52] = PoolWithTag;
    memmove(PoolWithTag, *a5, v21);
    v20[53] = v39[6];
    v22 = dword_14034AA70;
    qword_14034AA48 = 0LL;
    v23 = _InterlockedCompareExchange((volatile signed __int32 *)&PiResourceListLock, 1, 0);
    if ( v23 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PiResourceListLock, v23);
    __writecr8(v22);
    KeAbPostRelease((ULONG_PTR)&PiResourceListLock);
    v11 = v36;
    v12 = v36[66];
  }
  else
  {
    v24 = KeAbPreAcquire((ULONG_PTR)&PiResourceListLock, 0LL, 0LL, v14);
    v25 = v24;
    v26 = KeGetCurrentIrql();
    __writecr8(1uLL);
    v19 = _interlockedbittestandreset((volatile signed __int32 *)&PiResourceListLock, 0);
    if ( !v19 )
      ExpAcquireFastMutexContended((ULONG_PTR)&PiResourceListLock, v24);
    if ( v25 )
      *(_BYTE *)(v25 + 26) |= 1u;
    v27 = v36;
    dword_14034AA70 = v26;
    v36[52] = v39[5];
    v27[53] = v39[6];
    v28 = dword_14034AA70;
    qword_14034AA48 = 0LL;
    v29 = _InterlockedCompareExchange((volatile signed __int32 *)&PiResourceListLock, 1, 0);
    if ( v29 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PiResourceListLock, v29);
    __writecr8(v28);
    KeAbPostRelease((ULONG_PTR)&PiResourceListLock);
    v11 = v36;
    IopReleaseResources((__int64)v36);
    LegacyDeviceNode = -1073741670;
  }
  if ( LegacyDeviceNode < 0 )
  {
    v8 = a3;
    goto LABEL_37;
  }
LABEL_38:
  if ( v12 )
  {
    v30 = IopCombineLegacyResources(v12);
    v31 = v30;
    if ( v30 )
    {
      v32 = PnpDetermineResourceListSize(v30);
      IopWriteAllocatedResourcesToRegistry(v12, v31, v32);
      ExFreePoolWithTag(v31, 0);
    }
  }
  if ( a1 != 3 && a4 )
    IopSetLegacyResourcesFlag((__int64)a2);
LABEL_44:
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  v33 = KeGetCurrentThread();
  v34 = v33->KernelApcDisable + 1;
  v33->KernelApcDisable = v34;
  if ( !v34
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
    && !v33->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)LegacyDeviceNode;
}

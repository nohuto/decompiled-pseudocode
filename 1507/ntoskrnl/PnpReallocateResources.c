/*
 * XREFs of PnpReallocateResources @ 0x140695AF8
 * Callers:
 *     PiProcessResourceRequirementsChanged @ 0x140693CC4 (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14045C80C (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpStartDeviceNode @ 0x14045E860 (PnpStartDeviceNode.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1404E3CDC (PipClearDevNodeFlags.c)
 *     PnpRequestDeviceRemoval @ 0x140534B48 (PnpRequestDeviceRemoval.c)
 *     IopCommitConfiguration @ 0x14059C184 (IopCommitConfiguration.c)
 *     PnpBuildCmResourceLists @ 0x14059C214 (PnpBuildCmResourceLists.c)
 *     PnpFindBestConfiguration @ 0x14059C42C (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14059C7B4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpRebalance @ 0x140680EDC (PnpRebalance.c)
 *     PnpReleaseResourcesInternal @ 0x140695CE8 (PnpReleaseResourcesInternal.c)
 *     PnpRestoreResourcesInternal @ 0x140695F48 (PnpRestoreResourcesInternal.c)
 */

void __fastcall PnpReallocateResources(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // esi
  __int64 v4; // rax
  __int64 v5; // r9
  int ResourceRequirementsForAssignTable; // edi
  __int64 v7; // r9
  int v8; // r8d
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax
  _QWORD *v11[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v12[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE vars0[24]; // [rsp+80h] [rbp+0h] BYREF
  unsigned int v14; // [rsp+A0h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 396) & 0x400) == 0 )
    goto LABEL_17;
  v3 = *(_DWORD *)(a1 + 396) & 0x100;
  PipClearDevNodeFlags(a1, 256);
  if ( (*(_DWORD *)(a1 + 396) & 0x800) != 0 )
  {
    memset(v12, 0, sizeof(v12));
    v4 = *(_QWORD *)(a1 + 32);
    LODWORD(v12[1]) |= 0x280u;
    v12[0] = v4;
    v12[3] = 0LL;
    HIDWORD(v12[1]) = 4;
    ResourceRequirementsForAssignTable = PnpGetResourceRequirementsForAssignTable(
                                           (unsigned __int64)v12,
                                           (unsigned __int64)vars0,
                                           &v14,
                                           v5);
    if ( !v14 )
      goto LABEL_15;
    if ( *(_QWORD *)(a1 + 416) )
      PnpReleaseResourcesInternal(a1);
    ResourceRequirementsForAssignTable = PnpFindBestConfiguration((__int64)v12, v14, (__int64)v11);
    if ( ResourceRequirementsForAssignTable < 0
      || (ResourceRequirementsForAssignTable = IopCommitConfiguration(v11), ResourceRequirementsForAssignTable < 0) )
    {
      if ( (int)PnpRestoreResourcesInternal(a1) < 0 )
      {
        v8 = 14;
        goto LABEL_12;
      }
    }
    else
    {
      PipClearDevNodeFlags(a1, 3072);
      PnpBuildCmResourceLists((unsigned __int64)v12, (unsigned __int64)vars0, 1, v7);
      ResourceRequirementsForAssignTable = PnpStartDeviceNode(a1, 1, 1);
      if ( ResourceRequirementsForAssignTable < 0 )
      {
        v8 = 12;
LABEL_12:
        PnpRequestDeviceRemoval(a1, 0, v8);
      }
    }
    PnpFreeResourceRequirementsForAssignTable((unsigned __int64)v12, (unsigned __int64)vars0);
    goto LABEL_15;
  }
  ResourceRequirementsForAssignTable = PnpRebalance(a1, 0LL, 0, 0);
LABEL_15:
  if ( ResourceRequirementsForAssignTable < 0 )
  {
    PipClearDevNodeFlags(a1, 256);
    PipSetDevNodeFlags(a1, v3);
  }
LABEL_17:
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  v9 = KeGetCurrentThread();
  v10 = v9->KernelApcDisable + 1;
  v9->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
    && !v9->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}

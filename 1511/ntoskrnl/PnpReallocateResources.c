/*
 * XREFs of PnpReallocateResources @ 0x140617258
 * Callers:
 *     PiProcessResourceRequirementsChanged @ 0x140614E5C (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PipClearDevNodeFlags @ 0x1404574A4 (PipClearDevNodeFlags.c)
 *     PipSetDevNodeFlags @ 0x140457CF8 (PipSetDevNodeFlags.c)
 *     PnpRequestDeviceRemoval @ 0x14049EA8C (PnpRequestDeviceRemoval.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1404F189C (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpStartDeviceNode @ 0x1404F2A48 (PnpStartDeviceNode.c)
 *     IopCommitConfiguration @ 0x1405298B8 (IopCommitConfiguration.c)
 *     PnpBuildCmResourceLists @ 0x140529948 (PnpBuildCmResourceLists.c)
 *     PnpFindBestConfiguration @ 0x140529B2C (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140529EB4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpRebalance @ 0x140606198 (PnpRebalance.c)
 *     PnpReleaseResourcesInternal @ 0x140617424 (PnpReleaseResourcesInternal.c)
 *     PnpRestoreResourcesInternal @ 0x140617684 (PnpRestoreResourcesInternal.c)
 */

__int64 __fastcall PnpReallocateResources(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // esi
  __int64 v4; // rax
  int ResourceRequirementsForAssignTable; // edi
  int started; // eax
  int v7; // r8d
  _QWORD *v9[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v10[8]; // [rsp+40h] [rbp-40h] BYREF
  char vars0; // [rsp+80h] [rbp+0h] BYREF
  unsigned int v12; // [rsp+90h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 396) & 0x400) == 0 )
    goto LABEL_17;
  v3 = *(_DWORD *)(a1 + 396) & 0x100;
  PipClearDevNodeFlags(a1, 256);
  if ( (*(_DWORD *)(a1 + 396) & 0x800) != 0 )
  {
    memset(v10, 0, sizeof(v10));
    v4 = *(_QWORD *)(a1 + 32);
    v10[3] = 0LL;
    LODWORD(v10[1]) |= 0x280u;
    v10[0] = v4;
    HIDWORD(v10[1]) = 4;
    ResourceRequirementsForAssignTable = PnpGetResourceRequirementsForAssignTable(
                                           (unsigned __int64)v10,
                                           (unsigned __int64)&vars0,
                                           &v12);
    if ( !v12 )
      goto LABEL_15;
    if ( *(_QWORD *)(a1 + 416) )
      PnpReleaseResourcesInternal(a1);
    ResourceRequirementsForAssignTable = PnpFindBestConfiguration((__int64)v10, v12, (__int64)v9);
    if ( ResourceRequirementsForAssignTable < 0
      || (ResourceRequirementsForAssignTable = IopCommitConfiguration(v9), ResourceRequirementsForAssignTable < 0) )
    {
      started = PnpRestoreResourcesInternal(a1);
      if ( started < 0 )
      {
        v7 = 14;
        goto LABEL_12;
      }
    }
    else
    {
      PipClearDevNodeFlags(a1, 3072);
      PnpBuildCmResourceLists((unsigned __int64)v10, (unsigned __int64)&vars0, 1);
      started = PnpStartDeviceNode(a1, 1, 1);
      ResourceRequirementsForAssignTable = started;
      if ( started < 0 )
      {
        v7 = 12;
LABEL_12:
        PnpRequestDeviceRemoval(a1, 0, v7, started);
      }
    }
    PnpFreeResourceRequirementsForAssignTable((unsigned __int64)v10, (unsigned __int64)&vars0);
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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}

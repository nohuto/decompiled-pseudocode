/*
 * XREFs of PnpReallocateResources @ 0x14064BC7C
 * Callers:
 *     PiProcessResourceRequirementsChanged @ 0x1406498B8 (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x1400529B0 (KeReleaseSemaphore.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     PnpStartDeviceNode @ 0x1403F10D4 (PnpStartDeviceNode.c)
 *     PipSetDevNodeFlags @ 0x1403F33A0 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1403F3414 (PipClearDevNodeFlags.c)
 *     PnpRequestDeviceRemoval @ 0x1404C3E90 (PnpRequestDeviceRemoval.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1404C866C (PnpGetResourceRequirementsForAssignTable.c)
 *     IopCommitConfiguration @ 0x14055593C (IopCommitConfiguration.c)
 *     PnpReleaseResourcesInternal @ 0x1405559CC (PnpReleaseResourcesInternal.c)
 *     PnpBuildCmResourceLists @ 0x140555BD8 (PnpBuildCmResourceLists.c)
 *     PnpFindBestConfiguration @ 0x140555DBC (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1405560E4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpRebalance @ 0x1406303D0 (PnpRebalance.c)
 *     PnpRestoreResourcesInternal @ 0x14064BE48 (PnpRestoreResourcesInternal.c)
 */

__int64 __fastcall PnpReallocateResources(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // esi
  __int64 v4; // rax
  int ResourceRequirementsForAssignTable; // edi
  int started; // eax
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v12[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v13[8]; // [rsp+40h] [rbp-40h] BYREF
  char vars0; // [rsp+80h] [rbp+0h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 396) & 0x400) == 0 )
    goto LABEL_17;
  v3 = *(_DWORD *)(a1 + 396) & 0x100;
  PipClearDevNodeFlags(a1, 256);
  if ( (*(_DWORD *)(a1 + 396) & 0x800) != 0 )
  {
    memset(v13, 0, sizeof(v13));
    v4 = *(_QWORD *)(a1 + 32);
    v13[3] = 0LL;
    LODWORD(v13[1]) |= 0x280u;
    v13[0] = v4;
    HIDWORD(v13[1]) = 4;
    ResourceRequirementsForAssignTable = PnpGetResourceRequirementsForAssignTable(
                                           (unsigned __int64)v13,
                                           (unsigned __int64)&vars0,
                                           &v15);
    if ( !v15 )
      goto LABEL_15;
    if ( *(_QWORD *)(a1 + 416) )
      PnpReleaseResourcesInternal((_QWORD *)a1);
    ResourceRequirementsForAssignTable = PnpFindBestConfiguration((__int64)v13, v15, (__int64)v12);
    if ( ResourceRequirementsForAssignTable < 0
      || (ResourceRequirementsForAssignTable = IopCommitConfiguration(v12), ResourceRequirementsForAssignTable < 0) )
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
      PnpBuildCmResourceLists((unsigned __int64)v13, (unsigned __int64)&vars0, 1);
      started = PnpStartDeviceNode(a1, 1, 1);
      ResourceRequirementsForAssignTable = started;
      if ( started < 0 )
      {
        v7 = 12;
LABEL_12:
        PnpRequestDeviceRemoval(a1, 0, v7, started);
      }
    }
    PnpFreeResourceRequirementsForAssignTable((unsigned __int64)v13, (unsigned __int64)&vars0);
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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
}

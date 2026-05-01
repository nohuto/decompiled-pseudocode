/*
 * XREFs of RmpActivityHostIsRevocable @ 0x180014E34
 * Callers:
 *     RmpPolicyFilterActivityHostWithFlags @ 0x180002E80 (RmpPolicyFilterActivityHostWithFlags.c)
 *     RmpPolicyPopulateActivityHostMetrics @ 0x180007510 (RmpPolicyPopulateActivityHostMetrics.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000F850 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInf.c)
 *     RmpActivityHostResourceSetsChanged @ 0x180014D98 (RmpActivityHostResourceSetsChanged.c)
 *     ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180032310 (-RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180033424 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     RmpPolicyGenerateReclaimListForCommit @ 0x180034060 (RmpPolicyGenerateReclaimListForCommit.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpActivityHostIsRevocable(__int64 a1)
{
  return ((*(_BYTE *)(*(_QWORD *)(a1 + 40) + 1840LL) & 0x10) != 0
       || (*(_BYTE *)(a1 + 664) & 4) != 0 && (*(_BYTE *)(a1 + 666) & 4) != 0)
      && (*(_BYTE *)(a1 + 666) & 0x30) != 0;
}

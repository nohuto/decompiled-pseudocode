/*
 * XREFs of RmpActivityHostOnAppliedResourceSetChange @ 0x18003BD54
 * Callers:
 *     ?SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x18002E9F0 (-SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z.c)
 *     ?TryUnapplyResourceSet@ModernActivationResourceInfo@ExecutionModel@@AEAA_NPEAVResourceSet@2@@Z @ 0x18002EE80 (-TryUnapplyResourceSet@ModernActivationResourceInfo@ExecutionModel@@AEAA_NPEAVResourceSet@2@@Z.c)
 *     ?UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@_N@Z @ 0x180038EE0 (-UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJV-$CComPtr@VResourceSet@Executio.c)
 * Callees:
 *     RmpActivityImportanceMergeVectors @ 0x180004670 (RmpActivityImportanceMergeVectors.c)
 *     RmpActivityHostActOnResourceSets @ 0x18003B704 (RmpActivityHostActOnResourceSets.c)
 *     RmpActivityHostComputeAndApplyExecutionSpeed @ 0x18003B8CC (RmpActivityHostComputeAndApplyExecutionSpeed.c)
 *     RmpGpuMonitorDisableForHost @ 0x180041B94 (RmpGpuMonitorDisableForHost.c)
 *     RmpGpuMonitorEnableForHost @ 0x180041C80 (RmpGpuMonitorEnableForHost.c)
 */

int __fastcall RmpActivityHostOnAppliedResourceSetChange(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char *v4; // rcx
  char v7; // si
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  const GUID *v12; // r8
  const GUID *v13; // r9
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = (char *)RmSvcGlobals;
  if ( a4 )
  {
    v7 = 0;
    v8 = -1;
  }
  else
  {
    v7 = 1;
    v8 = 1;
  }
  if ( (*(_DWORD *)(a3 + 1756) & 0x80000) != 0 )
  {
    *(_DWORD *)(a2 + 908) += v8;
    v9 = *(_DWORD *)(a2 + 908);
    if ( v9 == 1 && v7 )
    {
      RmpGpuMonitorEnableForHost((struct _RM_GPU_MONITOR *)(v4 + 112));
    }
    else if ( !v9 )
    {
      RmpGpuMonitorDisableForHost((struct _RM_GPU_MONITOR *)(v4 + 112));
    }
  }
  if ( !*(_DWORD *)(a2 + 40) )
    RmpActivityHostComputeAndApplyExecutionSpeed(a2);
  v10 = *(_DWORD *)(a2 + 904);
  if ( v7 )
  {
    v11 = RmpActivityImportanceMergeVectors(v10, *(_DWORD *)(a3 + 1428));
  }
  else
  {
    v15 = 1;
    RmpActivityHostActOnResourceSets(
      a2,
      a2,
      1,
      (__int64 (__fastcall *)(__int64, __int64, __int64))RmpActivityHostComputeImportanceCallback,
      (__int64)&v15);
    v11 = v15;
  }
  *(_DWORD *)(a2 + 904) = v11;
  return RmpActivityHostOnImportanceChange((struct _RM_ACTIVITY_HOST *)a2, v10, v12, v13);
}

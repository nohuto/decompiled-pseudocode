/*
 * XREFs of RmpActivityHostOnGpuMonitoredResourceSetCountChange @ 0x180041108
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18000DE80 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     RmpActivityHostOnAppliedResourceSetChange @ 0x180041048 (RmpActivityHostOnAppliedResourceSetChange.c)
 * Callees:
 *     RmpGpuMonitorDisableForHost @ 0x1800467C4 (RmpGpuMonitorDisableForHost.c)
 */

__int64 __fastcall RmpActivityHostOnGpuMonitoredResourceSetCountChange(__int64 a1, struct _RM_GPU_MONITOR *a2, int a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 940);
  *(_DWORD *)(a1 + 940) = result + a3;
  if ( !((_DWORD)result + a3) )
    goto LABEL_5;
  if ( !(_DWORD)result )
    return RmpGpuMonitorEnableForHost(a2);
  if ( !((_DWORD)result + a3) )
  {
LABEL_5:
    if ( (_DWORD)result )
      return RmpGpuMonitorDisableForHost(a2);
  }
  return result;
}

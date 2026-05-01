/*
 * XREFs of RmpActivityHostGetResourceSetCount @ 0x18002F230
 * Callers:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000EBB0 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180012630 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180033424 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostGetResourceSetCount(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int i; // r9d

  result = 0LL;
  for ( i = 0; i < 2; ++i )
  {
    if ( _bittest(&a2, i) )
      result = (unsigned int)(*(_DWORD *)(a1 + 24LL * (int)i + 632) + result);
  }
  return result;
}

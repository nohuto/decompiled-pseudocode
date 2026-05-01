/*
 * XREFs of ?RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002088C
 * Callers:
 *     ?RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180005580 (-RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D74C (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018330 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpActivityHostTrySetCommitTargetForPple@@YAJPEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x18002EBC4 (-RmpActivityHostTrySetCommitTargetForPple@@YAJPEAU_RM_ACTIVITY_HOST@@_K@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180036DDC (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180004834 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180004FC0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 */

struct _RM_RESOURCE_SET *__fastcall RmpActivityHostTryGetPpleResourceSet(struct _RM_ACTIVITY_HOST *a1)
{
  struct _RM_RESOURCE_SET *result; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = 2LL;
  v2[0] = RmpActivityHostEnumerateResourceSetGetFirst((__int64)a1, 2, 0);
  while ( 1 )
  {
    result = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v2);
    if ( !result )
      break;
    if ( (*((_BYTE *)result + 1450) & 7) == 3 )
      return (struct _RM_RESOURCE_SET *)*((_QWORD *)result + 173);
  }
  return result;
}

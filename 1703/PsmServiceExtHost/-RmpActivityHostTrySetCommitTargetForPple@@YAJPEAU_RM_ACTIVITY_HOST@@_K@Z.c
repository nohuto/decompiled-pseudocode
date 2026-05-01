/*
 * XREFs of ?RmpActivityHostTrySetCommitTargetForPple@@YAJPEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x18002EBC4
 * Callers:
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x18002CFF4 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 * Callees:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002088C (-RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z @ 0x18002D920 (-RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z.c)
 */

__int64 __fastcall RmpActivityHostTrySetCommitTargetForPple(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 a2)
{
  struct _RM_RESOURCE_SET *PpleResourceSet; // rax
  __int64 result; // rax

  PpleResourceSet = RmpActivityHostTryGetPpleResourceSet(a1);
  if ( !PpleResourceSet )
    return 3489701907LL;
  result = RmpResourceSetTrySetPpleTarget(PpleResourceSet, a2, 0);
  if ( (int)result >= 0 )
  {
    RmpActivityHostComputeAndApplyEnforcementSettings(a1);
    return 0LL;
  }
  return result;
}

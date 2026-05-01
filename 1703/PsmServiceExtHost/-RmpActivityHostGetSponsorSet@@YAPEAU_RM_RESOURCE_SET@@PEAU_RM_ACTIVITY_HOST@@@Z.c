/*
 * XREFs of ?RmpActivityHostGetSponsorSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C520
 * Callers:
 *     ?RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z @ 0x180019420 (-RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180004834 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180004FC0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180013C34 (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 */

struct _RM_RESOURCE_SET *__fastcall RmpActivityHostGetSponsorSet(struct _RM_ACTIVITY_HOST *a1)
{
  struct _RM_RESOURCE_SET *result; // rax
  __int64 v2; // r8
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = 3LL;
  v3[0] = RmpActivityHostEnumerateResourceSetGetFirst((__int64)a1, 3, 0);
  while ( 1 )
  {
    result = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v3);
    if ( !result )
      break;
    if ( (int)RmpEmPriorityCompare(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)result + 173) + 40LL) + 1680LL), 101) > 0 )
      return (struct _RM_RESOURCE_SET *)v2;
  }
  return result;
}

/*
 * XREFs of RmpActivityHostHasPpleResourceSet @ 0x18001A19C
 * Callers:
 *     RmpPolicyFilterActivityHostWithFlags @ 0x180002E80 (RmpPolicyFilterActivityHostWithFlags.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004C9C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     RmpPolicyPopulateActivityHostMetrics @ 0x180007510 (RmpPolicyPopulateActivityHostMetrics.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BB48 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180033424 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800073E0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x180017280 (RmpActivityHostEnumerateResourceSetGetNext.c)
 */

char __fastcall RmpActivityHostHasPpleResourceSet(__int64 a1)
{
  struct ExecutionModel::ResourceSet *Next; // rax
  struct ExecutionModel::ResourceSet *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = (struct ExecutionModel::ResourceSet *)2;
  v3[0] = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetFirst(a1, 2, 0);
  while ( 1 )
  {
    Next = RmpActivityHostEnumerateResourceSetGetNext(v3);
    if ( !Next )
      break;
    if ( (*((_DWORD *)Next + 447) & 0x20000) != 0 )
    {
      LOBYTE(Next) = 1;
      return (char)Next;
    }
  }
  return (char)Next;
}

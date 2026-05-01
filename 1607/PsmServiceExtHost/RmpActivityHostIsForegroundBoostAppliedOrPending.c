/*
 * XREFs of RmpActivityHostIsForegroundBoostAppliedOrPending @ 0x180019F30
 * Callers:
 *     RmpEnforcementUnoptimizeHost @ 0x180019DBC (RmpEnforcementUnoptimizeHost.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800073E0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x180017280 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     RmpResourceSetGetExecutionSpeed @ 0x18001AE50 (RmpResourceSetGetExecutionSpeed.c)
 */

__int64 __fastcall RmpActivityHostIsForegroundBoostAppliedOrPending(__int64 a1)
{
  unsigned int v1; // ebx
  struct ExecutionModel::ResourceSet *Next; // r8
  int ExecutionSpeed; // eax
  __int64 v5; // r8
  int v6; // r11d
  struct ExecutionModel::ResourceSet *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(int *)(a1 + 712) < 2 )
  {
    v7[1] = (struct ExecutionModel::ResourceSet *)1;
    v7[0] = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetFirst(a1, 1, 0);
    v1 = 0;
    Next = RmpActivityHostEnumerateResourceSetGetNext(v7);
    if ( !Next )
      return v1;
    while ( 1 )
    {
      ExecutionSpeed = RmpResourceSetGetExecutionSpeed(Next);
      if ( v6 <= ExecutionSpeed )
        v6 = RmpResourceSetGetExecutionSpeed(v5);
      if ( v6 >= 2 )
        break;
      Next = RmpActivityHostEnumerateResourceSetGetNext(v7);
      if ( !Next )
        return v1;
    }
  }
  return 1;
}

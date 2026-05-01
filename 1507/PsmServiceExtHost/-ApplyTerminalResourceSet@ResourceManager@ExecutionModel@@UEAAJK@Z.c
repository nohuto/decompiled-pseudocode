/*
 * XREFs of ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJK@Z @ 0x180034A30
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivityHostFindProcessResourceSet @ 0x180002CA8 (RmpActivityHostFindProcessResourceSet.c)
 *     RmpEnforcementWorkerSynchronize @ 0x180005104 (RmpEnforcementWorkerSynchronize.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     ?ApplyResourceSetWithoutFreezeOrOptimize@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012CE0 (-ApplyResourceSetWithoutFreezeOrOptimize@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyTerminalResourceSet(
        ExecutionModel::ResourceManager *this,
        unsigned int a2)
{
  struct _RM_ACTIVITY_HOST *v2; // rsi
  ExecutionModel::ResourceManager **v4; // r14
  __int64 ProcessResourceSet; // rax
  __int64 v6; // r15
  int v7; // edi
  int v8; // eax
  struct _RM_ACTIVITY_HOST *v10; // [rsp+60h] [rbp+18h] BYREF
  struct ExecutionModel::ResourceSet *v11; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0LL;
  v10 = 0LL;
  v4 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(a2);
  v6 = ProcessResourceSet;
  if ( !ProcessResourceSet )
    goto LABEL_9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)ProcessResourceSet + 8LL))(ProcessResourceSet);
  if ( (*(_BYTE *)(v6 + 1912) & 2) != 0 )
    goto LABEL_9;
  v7 = (*(__int64 (__fastcall **)(__int64, struct ExecutionModel::ResourceSet **))(*(_QWORD *)(v6 + 1368) + 48LL))(
         v6 + 1368,
         &v11);
  if ( v7 >= 0 )
  {
    v4 = (ExecutionModel::ResourceManager **)v11;
    if ( v11 )
      v4 = (ExecutionModel::ResourceManager **)((char *)v11 - 1368);
    v8 = ExecutionModel::ResourceManager::ApplyResourceSetWithoutFreezeOrOptimize(
           v4[3],
           (struct ExecutionModel::ResourceSet *)v4,
           a2,
           &v10);
    v2 = v10;
    v7 = v8;
    if ( v8 >= 0 )
    {
      if ( v10 )
      {
        RmpEnforcementWorkerSynchronize((__int64)v10);
LABEL_9:
        v7 = 0;
      }
    }
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v4 )
    (*((void (__fastcall **)(ExecutionModel::ResourceManager **))*v4 + 2))(v4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v2 )
    RmpObjectRelease((volatile signed __int32 *)v2);
  return (unsigned int)v7;
}

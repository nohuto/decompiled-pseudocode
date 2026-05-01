/*
 * XREFs of ?Apply@ResourceSet@ExecutionModel@@QEAAJK@Z @ 0x18000FF88
 * Callers:
 *     ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180014D90 (-RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 * Callees:
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D5B8 (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 *     ?RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013CDC (-RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::Apply(ExecutionModel::ResourceManager **this, unsigned int a2)
{
  struct _RM_OBJECT_HEADER *v3; // rbx
  int v5; // eax
  unsigned int v6; // edi
  struct _RM_OBJECT_HEADER *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v8 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( a2 || *((_DWORD *)this + 34) )
  {
    v5 = ExecutionModel::ResourceManager::ApplyResourceSetWithoutEnforcement(
           this[3],
           (struct ExecutionModel::ResourceSet *)this,
           a2,
           &v8);
    v3 = v8;
    v6 = v5;
    if ( v5 >= 0 && v8 )
    {
      RmpEnforcementWorkerSynchronize(v8);
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147418113;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v3 )
    RmpObjectRelease(v3);
  return v6;
}

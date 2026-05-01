/*
 * XREFs of ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18002B61C
 * Callers:
 *     ?RmpEnforcerJobCompletionThread@@YAKPEAX@Z @ 0x180020820 (-RmpEnforcerJobCompletionThread@@YAKPEAX@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AE68 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?RmSrvOnProcessTerminated@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18002D1E8 (-RmSrvOnProcessTerminated@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 * Callees:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800025B8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D064 (-RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800153D0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

void __fastcall ExecutionModel::ResourceManager::OnProcessTerminated(ExecutionModel::ResourceManager *this, int a2)
{
  __int64 v4; // rcx
  struct _RM_OBJECT_HEADER *v5; // [rsp+20h] [rbp-258h] BYREF
  unsigned __int8 v6[560]; // [rsp+30h] [rbp-248h] BYREF

  RtlEnterCriticalSection(&RmpGlobalLock);
  memset_0(v6, 0, 0x228uLL);
  v4 = *((_QWORD *)this + 26);
  *(_DWORD *)v6 = a2;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(v4, 1, v6, (__int64 *)&v5) >= 0 )
  {
    RmpActivityHostZeroProcessNotification(v5);
    RmpObjectRelease(v5);
  }
  ExecutionModel::ResourceManager::RemoveExternalResources(this, a2, 0LL);
  RtlLeaveCriticalSection(&RmpGlobalLock);
}

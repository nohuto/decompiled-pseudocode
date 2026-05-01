/*
 * XREFs of ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18002CCC0
 * Callers:
 *     ?RmpEnforcerJobCompletionThread@@YAKPEAX@Z @ 0x18001F990 (-RmpEnforcerJobCompletionThread@@YAKPEAX@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BBC4 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?RmSrvOnProcessTerminated@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18002DD64 (-RmSrvOnProcessTerminated@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000F444 (-RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017C20 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     RmpActivityHostZeroProcessNotification @ 0x180019964 (RmpActivityHostZeroProcessNotification.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

void __fastcall ExecutionModel::ResourceManager::OnProcessTerminated(ExecutionModel::ResourceManager *this, int a2)
{
  __int64 v4; // rcx
  PVOID P; // [rsp+20h] [rbp-258h] BYREF
  unsigned __int8 v6[560]; // [rsp+30h] [rbp-248h] BYREF

  RtlEnterCriticalSection(&RmpGlobalLock);
  memset_0(v6, 0, 0x228uLL);
  v4 = *((_QWORD *)this + 28);
  *(_DWORD *)v6 = a2;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(v4, 1, v6, (volatile signed __int32 **)&P) >= 0 )
  {
    RmpActivityHostZeroProcessNotification((struct _RM_ACTIVITY_HOST *)P);
    RmpObjectRelease((volatile signed __int32 *)P);
  }
  ExecutionModel::ResourceManager::RemoveExternalResources(this, a2, 0LL);
  RtlLeaveCriticalSection(&RmpGlobalLock);
}

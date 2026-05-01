/*
 * XREFs of ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180012750
 * Callers:
 *     ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800167D0 (-RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FA54 (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 *     RmpEnforcementWorkerSynchronize @ 0x180017480 (RmpEnforcementWorkerSynchronize.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::Apply(__int64 ***this, unsigned int a2)
{
  volatile signed __int32 *v3; // rbx
  int v5; // eax
  unsigned int v6; // edi
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  P = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( a2 || *((_DWORD *)this - 308) )
  {
    v5 = ExecutionModel::ResourceManager::ApplyResourceSetWithoutEnforcement(
           *(this - 168),
           (struct ExecutionModel::ResourceSet *)(this - 171),
           a2,
           (struct _RM_ACTIVITY_HOST **)&P);
    v3 = (volatile signed __int32 *)P;
    v6 = v5;
    if ( v5 >= 0 && P )
    {
      RmpEnforcementWorkerSynchronize(P);
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

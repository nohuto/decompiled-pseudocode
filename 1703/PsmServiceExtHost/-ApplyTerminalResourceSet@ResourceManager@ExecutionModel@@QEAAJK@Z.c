/*
 * XREFs of ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z @ 0x18002B19C
 * Callers:
 *     ?RmSrvApplyTerminalResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18002BDF4 (-RmSrvApplyTerminalResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 * Callees:
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z @ 0x180001504 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z.c)
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D5B8 (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 *     ?RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013CDC (-RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostFindProcessResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180018D40 (-RmpActivityHostFindProcessResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_SERVICE_GLOBAL.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyTerminalResourceSet(
        struct _RM_SERVICE_GLOBALS **this,
        unsigned int a2)
{
  struct ExecutionModel::ResourceSet *v3; // r14
  struct _RM_ACTIVITY_HOST *v4; // rbx
  struct ExecutionModel::ResourceSet *ProcessResourceSet; // rax
  ExecutionModel::ResourceSet *v7; // rsi
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  struct _RM_ACTIVITY_HOST *v12; // [rsp+50h] [rbp+8h] BYREF
  struct ExecutionModel::ResourceSet *v13; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(this[26], a2);
  v7 = ProcessResourceSet;
  if ( !ProcessResourceSet )
    goto LABEL_7;
  (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)ProcessResourceSet + 8LL))(ProcessResourceSet);
  if ( (*((_BYTE *)v7 + 1404) & 2) != 0 )
    goto LABEL_7;
  v8 = ExecutionModel::ResourceSet::CreateTerminalResourceSet(v7, &v13);
  v3 = v13;
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = ExecutionModel::ResourceManager::ApplyResourceSetWithoutEnforcement(
            (ExecutionModel::ResourceManager *)this,
            v13,
            a2,
            &v12);
    v4 = v12;
    v9 = v10;
    if ( v10 >= 0 )
    {
      if ( v12 )
      {
        RmpEnforcementWorkerSynchronize(v12);
LABEL_7:
        v9 = 0;
      }
    }
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v3 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v7 )
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v4 )
    RmpObjectRelease(v4);
  return v9;
}

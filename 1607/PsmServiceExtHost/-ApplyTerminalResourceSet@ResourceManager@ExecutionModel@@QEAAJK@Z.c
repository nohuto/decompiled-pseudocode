/*
 * XREFs of ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z @ 0x18002BEE8
 * Callers:
 *     ?RmSrvApplyTerminalResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18002D728 (-RmSrvApplyTerminalResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FA54 (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 *     RmpEnforcementWorkerSynchronize @ 0x180017480 (RmpEnforcementWorkerSynchronize.c)
 *     RmpActivityHostFindProcessResourceSet @ 0x18001A1E8 (RmpActivityHostFindProcessResourceSet.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyTerminalResourceSet(
        ExecutionModel::ResourceManager *this,
        unsigned int a2)
{
  struct _RM_ACTIVITY_HOST *v3; // rbx
  struct ExecutionModel::ResourceSet *v5; // rsi
  __int64 ProcessResourceSet; // rax
  __int64 v7; // r14
  int v8; // edi
  int v9; // eax
  struct _RM_ACTIVITY_HOST *v11; // [rsp+50h] [rbp+8h] BYREF
  struct ExecutionModel::ResourceSet *v12; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  v5 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(*((_QWORD *)this + 28), a2);
  v7 = ProcessResourceSet;
  if ( !ProcessResourceSet )
    goto LABEL_9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)ProcessResourceSet + 8LL))(ProcessResourceSet);
  if ( (*(_BYTE *)(v7 + 1412) & 2) != 0 )
    goto LABEL_9;
  v8 = (*(__int64 (__fastcall **)(__int64, struct ExecutionModel::ResourceSet **))(*(_QWORD *)(v7 + 1368) + 40LL))(
         v7 + 1368,
         &v12);
  if ( v8 >= 0 )
  {
    v5 = v12;
    if ( v12 )
      v5 = (struct ExecutionModel::ResourceSet *)((char *)v12 - 1368);
    v9 = ExecutionModel::ResourceManager::ApplyResourceSetWithoutEnforcement((__int64 **)this, v5, a2, &v11);
    v3 = v11;
    v8 = v9;
    if ( v9 >= 0 )
    {
      if ( v11 )
      {
        RmpEnforcementWorkerSynchronize((__int64)v11);
LABEL_9:
        v8 = 0;
      }
    }
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v5 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v3 )
    RmpObjectRelease((volatile signed __int32 *)v3);
  return (unsigned int)v8;
}

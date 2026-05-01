/*
 * XREFs of ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000F850
 * Callers:
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FA54 (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 * Callees:
 *     RmpResourceSetIsValidPredecessor @ 0x1800030B8 (RmpResourceSetIsValidPredecessor.c)
 *     RmpCommitValuesSubtract @ 0x180007034 (RmpCommitValuesSubtract.c)
 *     RmpActivityHostComputeAndApplyEnforcementSettings @ 0x180007AA0 (RmpActivityHostComputeAndApplyEnforcementSettings.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18000F710 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     RmpActivityHostApplyResourceSet @ 0x180013ED0 (RmpActivityHostApplyResourceSet.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014270 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     RmpActivityHostUpdateDigests @ 0x180014920 (RmpActivityHostUpdateDigests.c)
 *     RmpActivityHostIsRevocable @ 0x180014E34 (RmpActivityHostIsRevocable.c)
 *     RmpActivityHostUnapplyResourceSet @ 0x180019A9C (RmpActivityHostUnapplyResourceSet.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BB48 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyResourceSet_Modern(
        __int64 **this,
        struct ExecutionModel::ResourceSet *a2,
        struct _RM_ACTIVITY_HOST **a3)
{
  struct ExecutionModel::ResourceSet *v3; // rdi
  _QWORD *v5; // rsi
  unsigned int v8; // ebx
  unsigned __int64 v9; // rdx
  _QWORD *v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rbx
  _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-D8h] BYREF

  v3 = (struct ExecutionModel::ResourceSet *)*((_QWORD *)a2 + 229);
  v5 = (_QWORD *)*((_QWORD *)a2 + 175);
  if ( v3 && (v3 = (struct ExecutionModel::ResourceSet *)((char *)v3 - 1368)) != 0LL )
  {
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v3 + 8LL))(v3);
    if ( !RmpResourceSetIsValidPredecessor((__int64)v3) )
    {
      v8 = -2147220218;
      goto LABEL_18;
    }
    ExecutionModel::ResourceManager::TransitionResources(this, v3, a2);
    RmpActivityHostUnapplyResourceSet(v5, v3, 1u);
  }
  else
  {
    v9 = *((_QWORD *)a2 + 186);
    v10 = v5 + 118;
    v11 = v5[118];
    if ( v11 == v9 )
      *v10 = 0LL;
    else
      RmpCommitValuesSubtract(v11, v9, v10);
  }
  RmpActivityHostApplyResourceSet(v5, a2);
  RmpActivityHostUpdateDigests(v5, 3LL);
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v5, 3u);
  QueryUnbiasedInterruptTime(v5 + 138);
  v12 = v5[5];
  if ( (unsigned int)RmpActivityHostIsRevocable(v5, v13, v14, v15) )
    SetEvent(*(HANDLE *)(v12 + 368));
  v5[96] = 0LL;
  v16 = *(_QWORD *)(v12 + 3344);
  v17 = *(_DWORD *)(v16 + 256);
  if ( (v17 & 3) == 0 )
  {
    *(_DWORD *)(v16 + 256) = v17 | 1;
    TpPostWork(*(_QWORD *)(v16 + 240));
  }
  v18 = RmpActivityHostComputeAndApplyEnforcementSettings((struct _RM_ACTIVITY_HOST *)v5);
  if ( v18 >= 0 )
  {
    ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
      (ExecutionModel::ResourceManager *)this,
      (struct _RM_ACTIVITY_HOST *)v5);
    v19 = *((_QWORD *)a2 + 175);
    if ( _InterlockedIncrement((volatile signed __int32 *)(v19 + 16)) < 1 )
    {
      memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
      pExceptionRecord.ExceptionCode = -1073741675;
      pExceptionRecord.ExceptionFlags = 1;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    *a3 = (struct _RM_ACTIVITY_HOST *)v19;
    v8 = 0;
  }
  else
  {
    v8 = v18 | 0x10000000;
  }
LABEL_18:
  if ( v3 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v3 + 16LL))(v3);
  return v8;
}

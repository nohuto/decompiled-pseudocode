/*
 * XREFs of ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AE68
 * Callers:
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D5B8 (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 * Callees:
 *     ?RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@Z @ 0x180002510 (-RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18000D334 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D74C (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180011DF0 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18001287C (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     ?RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800140A0 (-RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800153D0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     ?RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x18001754C (-RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018264 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ?RmpUtilIsProcessLive@@YAKK@Z @ 0x18002ACC8 (-RmpUtilIsProcessLive@@YAKK@Z.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18002B61C (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpActivityHostCreateHostProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PROCESS_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E298 (-RmpActivityHostCreateHostProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PROCES.c)
 *     ?RmpEnforcementInfoInitializeProcess@@YAJPEAU_RM_ACTIVITY_HOST@@KPEAX@Z @ 0x180032AF0 (-RmpEnforcementInfoInitializeProcess@@YAJPEAU_RM_ACTIVITY_HOST@@KPEAX@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyResourceSet_Legacy(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2,
        DWORD a3,
        struct _RM_ACTIVITY_HOST **a4)
{
  struct _RM_ACTIVITY_HOST **v4; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 FirstResourceSet; // rax
  struct ExecutionModel::ResourceSet *v12; // r14
  __int64 v13; // rax
  struct _RM_SERVICE_GLOBALS *v14; // rcx
  int v15; // eax
  int v16; // ebx
  char v17; // al
  int v18; // ebx
  int v19; // eax
  const struct _TlgProvider_t *v20; // rcx
  const struct _TlgProvider_t *v21; // rcx
  const GUID *v22; // r8
  const GUID *v23; // r9
  int v24; // ebx
  char v26; // [rsp+30h] [rbp-D0h]
  int v27; // [rsp+34h] [rbp-CCh]
  _RM_PROCESS_INFO pData; // [rsp+38h] [rbp-C8h] BYREF

  v4 = a4;
  *(_QWORD *)&pData.strAppName[2] = a4;
  *(_QWORD *)&pData.Process.ProcessStartTime.dwHighDateTime = 0LL;
  v26 = 0;
  v27 = 0;
  v8 = 0LL;
  memset_0(&pData.strAppName[6], 0, 0x228uLL);
  v9 = *((_QWORD *)this + 26);
  *(_DWORD *)&pData.strAppName[6] = a3;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(
              v9,
              1,
              (unsigned __int8 *)&pData.strAppName[6],
              (__int64 *)&pData.Process.ProcessStartTime.dwHighDateTime) < 0 )
  {
    v13 = *((_QWORD *)a2 + 173);
    v14 = (struct _RM_SERVICE_GLOBALS *)*((_QWORD *)this + 26);
    v12 = 0LL;
    pData.Process.dwProcessId = a3;
    v15 = RmpActivityHostCreateHostProcess(
            v14,
            *(struct _RM_PARTITION **)(v13 + 112),
            &pData,
            (struct _RM_ACTIVITY_HOST **)&pData.Process.ProcessStartTime.dwHighDateTime);
    v10 = *(_QWORD *)&pData.Process.ProcessStartTime.dwHighDateTime;
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 0;
      v18 = v16 | 0x10000000;
      goto LABEL_42;
    }
    v4 = *(struct _RM_ACTIVITY_HOST ***)&pData.strAppName[2];
    v26 = 1;
  }
  else
  {
    v10 = *(_QWORD *)&pData.Process.ProcessStartTime.dwHighDateTime;
    FirstResourceSet = RmpActivityHostGetFirstResourceSet(*(__int64 *)&pData.Process.ProcessStartTime.dwHighDateTime, 1);
    v12 = (struct ExecutionModel::ResourceSet *)FirstResourceSet;
    if ( FirstResourceSet )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)FirstResourceSet + 8LL))(FirstResourceSet);
  }
  if ( v12 == a2 )
    goto LABEL_34;
  v8 = *((_QWORD *)a2 + 228);
  if ( !v8 )
    goto LABEL_14;
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)a2 + 228));
  if ( v12 )
  {
    if ( (struct ExecutionModel::ResourceSet *)v8 != v12 )
    {
LABEL_11:
      v18 = -2147024809;
      goto LABEL_35;
    }
    goto LABEL_14;
  }
  if ( *(_DWORD *)(v8 + 1352) )
  {
LABEL_14:
    if ( (*((_BYTE *)a2 + 1404) & 2) != 0 && !v12 )
    {
      *v4 = 0LL;
      v18 = 0;
      goto LABEL_37;
    }
    if ( v8 )
    {
      if ( *(_DWORD *)(v8 + 1352) != 2 || *(_BYTE *)(v8 + 12) != 1 && (*(_BYTE *)(v8 + 1404) & 4) != 0 )
        goto LABEL_11;
      ExecutionModel::ResourceManager::TransitionResources(
        (__int64 **)this,
        (struct ExecutionModel::ResourceSet *)v8,
        a2);
      v18 = RmpResourceSetTransition(*(struct _RM_RESOURCE_SET **)(v8 + 1384), *((struct _RM_RESOURCE_SET **)a2 + 173));
      if ( v18 < 0 )
      {
LABEL_35:
        if ( v12 )
          (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v12 + 16LL))(v12);
        goto LABEL_37;
      }
    }
    *((_QWORD *)a2 + 18) = *(_QWORD *)(v10 + 24);
    if ( v12 )
      RmpActivityHostUnapplyResourceSet((struct _RM_ACTIVITY_HOST *)v10, v12, 1u);
    RmpActivityHostApplyResourceSet((struct _RM_ACTIVITY_HOST *)v10, a2);
    RmpActivityHostResourceSetsChanged((struct _RM_ACTIVITY_HOST *)v10, 3u);
    if ( v26
      && (v19 = RmpEnforcementInfoInitializeProcess(
                  (struct _RM_ACTIVITY_HOST *)v10,
                  a3,
                  *(void **)(*((_QWORD *)this + 26) + 40LL)),
          v18 = v19 | 0x10000000,
          v19 < 0) )
    {
      if ( (unsigned int)RmpUtilIsProcessLive(a3) )
      {
        v27 = 0;
        goto LABEL_35;
      }
      v27 = 1;
      if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v20, 1uLL) )
      {
        *(_DWORD *)&pData.strServiceShortName[52] = 0;
        *(_QWORD *)&pData.strServiceShortName[46] = &pData;
        pData.Process.dwProcessId = a3;
        *(_DWORD *)&pData.strServiceShortName[50] = 4;
        TlgWrite(v21, &unk_18003FDB9, v22, v23, 3u, (EVENT_DATA_DESCRIPTOR *)&pData.strServiceShortName[30]);
      }
    }
    else
    {
      v24 = RmpActivityHostComputeAndApplyEnforcementSettings((struct _RM_ACTIVITY_HOST *)v10);
      if ( v24 < 0 )
      {
        v18 = v24 | 0x10000000;
        goto LABEL_35;
      }
      ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(this, (struct _RM_ACTIVITY_HOST *)v10);
      **(_QWORD **)&pData.strAppName[2] = v10;
      v10 = 0LL;
    }
LABEL_34:
    v18 = 0;
    goto LABEL_35;
  }
  v18 = -2147220218;
LABEL_37:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v27 )
  {
    ExecutionModel::ResourceManager::OnProcessTerminated(this, a3);
    v17 = 0;
  }
  else
  {
    v17 = v26;
  }
LABEL_42:
  if ( v10 )
  {
    if ( v17 )
      RmpActivityHostDelete((struct _RM_ACTIVITY_HOST *)v10);
    RmpObjectRelease((struct _RM_OBJECT_HEADER *)v10);
  }
  return (unsigned int)v18;
}

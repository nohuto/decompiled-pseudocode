/*
 * XREFs of ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BBC4
 * Callers:
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FA54 (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpActivityHostDelete @ 0x180004E58 (RmpActivityHostDelete.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007418 (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     RmpActivityHostComputeAndApplyEnforcementSettings @ 0x180007AA0 (RmpActivityHostComputeAndApplyEnforcementSettings.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18000F710 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     RmpActivityHostApplyResourceSet @ 0x180013ED0 (RmpActivityHostApplyResourceSet.c)
 *     RmpActivityHostResourceSetsChanged @ 0x180014D98 (RmpActivityHostResourceSetsChanged.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017C20 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     RmpActivityHostUnapplyResourceSet @ 0x180019A9C (RmpActivityHostUnapplyResourceSet.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BB48 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18002CCC0 (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     ExecutionModel::ProcessDead @ 0x18002CD7C (ExecutionModel--ProcessDead.c)
 *     RmpActivityHostCreateHostProcess @ 0x18002EDFC (RmpActivityHostCreateHostProcess.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyResourceSet_Legacy(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2,
        DWORD a3,
        struct _RM_ACTIVITY_HOST **a4)
{
  char v7; // r12
  struct ExecutionModel::ResourceSet *v8; // rsi
  __int64 v9; // rcx
  struct _RM_ACTIVITY_HOST *v10; // rdi
  __int64 FirstResourceSet; // rax
  struct ExecutionModel::ResourceSet *v12; // r14
  __int64 v13; // rcx
  int HostProcess; // eax
  int v15; // ebx
  unsigned int v16; // r15d
  const struct _TlgProvider_t *v17; // rcx
  const struct _TlgProvider_t *v18; // rcx
  const GUID *v19; // r8
  const GUID *v20; // r9
  int v21; // ebx
  DWORD v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h]
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_ACTIVITY_HOST **v27; // [rsp+48h] [rbp-B8h]
  unsigned __int8 v28[560]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+280h] [rbp+180h] BYREF
  DWORD *v30; // [rsp+2A0h] [rbp+1A0h]
  int v31; // [rsp+2A8h] [rbp+1A8h]
  int v32; // [rsp+2ACh] [rbp+1ACh]

  P = 0LL;
  v25 = 0;
  v27 = a4;
  v7 = 0;
  v8 = 0LL;
  memset_0(v28, 0, 0x228uLL);
  v9 = *((_QWORD *)this + 28);
  *(_DWORD *)v28 = a3;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(v9, 1, v28, (volatile signed __int32 **)&P) < 0 )
  {
    v13 = *((_QWORD *)this + 28);
    v24 = a3;
    v12 = 0LL;
    HostProcess = RmpActivityHostCreateHostProcess(v13, (unsigned int)&v24, 0, 0, (__int64)&P);
    v10 = (struct _RM_ACTIVITY_HOST *)P;
    if ( HostProcess < 0 )
    {
      v15 = HostProcess | 0x10000000;
      goto LABEL_45;
    }
    v7 = 1;
  }
  else
  {
    v10 = (struct _RM_ACTIVITY_HOST *)P;
    FirstResourceSet = RmpActivityHostGetFirstResourceSet((__int64)P, 1);
    v12 = (struct ExecutionModel::ResourceSet *)FirstResourceSet;
    if ( FirstResourceSet )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)FirstResourceSet + 8LL))(FirstResourceSet);
  }
  if ( v12 == a2 )
    goto LABEL_37;
  v8 = (struct ExecutionModel::ResourceSet *)*((_QWORD *)a2 + 229);
  if ( v8 )
    v8 = (struct ExecutionModel::ResourceSet *)((char *)v8 - 1368);
  if ( !v8 )
    goto LABEL_17;
  (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v12 )
  {
    if ( v8 != v12 )
    {
LABEL_13:
      v15 = -2147024809;
LABEL_38:
      v16 = a3;
LABEL_39:
      if ( v12 )
        (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v12 + 16LL))(v12);
      goto LABEL_41;
    }
    goto LABEL_17;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*((_QWORD *)v8 + 171) + 72LL))((_QWORD *)v8 + 171) )
  {
LABEL_17:
    if ( (*((_BYTE *)a2 + 1412) & 2) != 0 && !v12 )
    {
      *v27 = 0LL;
      v15 = 0;
      goto LABEL_16;
    }
    if ( v8 )
    {
      if ( *((_DWORD *)v8 + 338) != 2 || *((_BYTE *)v8 + 12) != 1 && (*((_BYTE *)v8 + 1412) & 4) != 0 )
        goto LABEL_13;
      ExecutionModel::ResourceManager::TransitionResources((__int64 **)this, v8, a2);
    }
    *((_QWORD *)a2 + 18) = *((_QWORD *)v10 + 3);
    if ( v12 )
      RmpActivityHostUnapplyResourceSet(v10, v12, 1);
    RmpActivityHostApplyResourceSet((__int64)v10, (__int64 *)a2);
    RmpActivityHostResourceSetsChanged(v10, 3);
    if ( v7 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, struct _RM_ACTIVITY_HOST *))(**((_QWORD **)this + 3) + 24LL))(
              *((_QWORD *)this + 3),
              v10);
      if ( v15 < 0 )
      {
        v16 = a3;
        v25 = ExecutionModel::ProcessDead(a3);
        if ( v25 )
        {
          if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v17, 1uLL) )
          {
            v32 = 0;
            v30 = &v24;
            v24 = a3;
            v31 = 4;
            TlgWrite(v18, &unk_18003FC40, v19, v20, 3u, &pData);
          }
          v15 = 0;
        }
        goto LABEL_39;
      }
    }
    v21 = RmpActivityHostComputeAndApplyEnforcementSettings(v10);
    if ( v21 < 0 )
    {
      v15 = v21 | 0x10000000;
      goto LABEL_38;
    }
    ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(this, v10);
    *v27 = v10;
    v10 = 0LL;
LABEL_37:
    v15 = 0;
    goto LABEL_38;
  }
  v15 = -2147220218;
LABEL_16:
  v16 = a3;
LABEL_41:
  if ( v8 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v25 )
  {
    ExecutionModel::ResourceManager::OnProcessTerminated(this, v16);
    v7 = 0;
  }
LABEL_45:
  if ( v10 )
  {
    if ( v7 )
      RmpActivityHostDelete(v10);
    RmpObjectRelease((volatile signed __int32 *)v10);
  }
  return (unsigned int)v15;
}

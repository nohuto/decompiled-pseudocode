/*
 * XREFs of ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180034400
 * Callers:
 *     ?ApplyResourceSetWithoutFreezeOrOptimize@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012CE0 (-ApplyResourceSetWithoutFreezeOrOptimize@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@.c)
 * Callees:
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002D10 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     RmpEnforcementSettingsUpdateLimit @ 0x180004914 (RmpEnforcementSettingsUpdateLimit.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000509C (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     RmpActivityHostDelete @ 0x1800083A8 (RmpActivityHostDelete.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000AE28 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x180011B24 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@2@PEAVModernActivationResourceInfo@2@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180011EF0 (-UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PE.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@_N@Z @ 0x180012D74 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@_N@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     ?SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x18002E9F0 (-SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z.c)
 *     ?Attach@?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVResourceSet@ExecutionModel@@@Z @ 0x1800319E0 (-Attach@-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVResourceSet@ExecutionModel@@@Z.c)
 *     ExecutionModel::ProcessDead @ 0x1800375BC (ExecutionModel--ProcessDead.c)
 *     ?UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@_N@Z @ 0x180038EE0 (-UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJV-$CComPtr@VResourceSet@Executio.c)
 *     RmpActivityHostCreateHostProcess @ 0x18003BA18 (RmpActivityHostCreateHostProcess.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyResourceSet_Legacy(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2,
        DWORD a3,
        struct _RM_ACTIVITY_HOST **a4)
{
  __int64 v4; // rbx
  char v5; // r12
  DWORD v7; // esi
  struct _RM_ACTIVITY_HOST *v9; // r13
  __int64 v10; // rdi
  int v11; // eax
  __int64 *v12; // r12
  __int64 v13; // rsi
  int v14; // edx
  const GUID *v15; // r8
  const GUID *v16; // r9
  unsigned int v17; // esi
  __int64 (__fastcall *v18)(ExecutionModel::ResourceSet *); // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  void **v21; // rsi
  ExecutionModel::ResourceManager *v22; // r14
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  const GUID *v26; // r8
  const GUID *v27; // r9
  int v28; // eax
  char IsFrozen; // al
  char v31; // [rsp+30h] [rbp-D0h]
  int v32; // [rsp+34h] [rbp-CCh] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+3Ch] [rbp-C4h] BYREF
  DWORD v35; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  ExecutionModel::ResourceManager *v38; // [rsp+58h] [rbp-A8h] BYREF
  ExecutionModel::ResourceManager *v39; // [rsp+60h] [rbp-A0h] BYREF
  void *Block; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v41[8]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+A0h] [rbp-60h]
  int v46; // [rsp+A8h] [rbp-58h]
  WCHAR v47[280]; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v49; // [rsp+310h] [rbp+210h]
  int v50; // [rsp+318h] [rbp+218h]
  int v51; // [rsp+31Ch] [rbp+21Ch]
  ExecutionModel::ResourceManager **v52; // [rsp+320h] [rbp+220h]
  int v53; // [rsp+328h] [rbp+228h]
  int v54; // [rsp+32Ch] [rbp+22Ch]
  DWORD *v55; // [rsp+330h] [rbp+230h]
  int v56; // [rsp+338h] [rbp+238h]
  int v57; // [rsp+33Ch] [rbp+23Ch]
  int *v58; // [rsp+340h] [rbp+240h]
  int v59; // [rsp+348h] [rbp+248h]
  int v60; // [rsp+34Ch] [rbp+24Ch]
  char *v61; // [rsp+350h] [rbp+250h]
  int v62; // [rsp+358h] [rbp+258h]
  int v63; // [rsp+35Ch] [rbp+25Ch]
  DWORD *p_dwProcessId; // [rsp+360h] [rbp+260h]
  int v65; // [rsp+368h] [rbp+268h]
  int v66; // [rsp+36Ch] [rbp+26Ch]
  EVENT_DATA_DESCRIPTOR v67; // [rsp+370h] [rbp+270h] BYREF
  DWORD *v68; // [rsp+390h] [rbp+290h]
  int v69; // [rsp+398h] [rbp+298h]
  int v70; // [rsp+39Ch] [rbp+29Ch]

  Block = 0LL;
  v4 = 0LL;
  P = 0LL;
  v5 = 0;
  v34 = 0;
  v32 = 0;
  v7 = a3;
  v38 = (ExecutionModel::ResourceManager *)a4;
  dwProcessId = a3;
  v39 = this;
  v37 = 0LL;
  v31 = 0;
  if ( !a2 )
  {
    v32 = -2147024809;
    goto LABEL_23;
  }
  if ( *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 2) != a3 )
  {
    v32 = -2147220220;
    goto LABEL_23;
  }
  memset_0(v47, 0, 0x228uLL);
  *(_DWORD *)v47 = v7;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(1, v47, (volatile signed __int32 **)&P) < 0 )
  {
    v35 = v7;
    v10 = 0LL;
    v11 = RmpActivityHostCreateHostProcess(&v35, 0LL, 0LL, &P);
    v9 = (struct _RM_ACTIVITY_HOST *)P;
    if ( v11 < 0 )
    {
      v32 = v11 | 0x10000000;
      goto LABEL_19;
    }
    v31 = 1;
  }
  else
  {
    v9 = (struct _RM_ACTIVITY_HOST *)P;
    v10 = *((_QWORD *)P + 75);
  }
  if ( v10 )
  {
    ATL::CComPtrBase<ExecutionModel::ResourceSet>::Attach(&v37, v10);
    v4 = v37;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
  }
  v12 = (__int64 *)((char *)a2 + 1800);
  v13 = *((_QWORD *)a2 + 225);
  if ( v13 )
  {
    if ( v4 )
    {
      if ( v13 != v4 + 1368 )
      {
LABEL_16:
        v32 = -2147024809;
LABEL_17:
        v7 = dwProcessId;
LABEL_18:
        v5 = v31;
        goto LABEL_19;
      }
    }
    else
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 72LL))(*((_QWORD *)a2 + 225)) )
      {
        v32 = -2147220218;
        goto LABEL_17;
      }
      v19 = *v12;
      if ( *v12 )
        v19 -= 1368LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      ATL::CComPtrBase<ExecutionModel::ResourceSet>::Attach(&v37, v19);
      v4 = v37;
    }
  }
  if ( (*((_BYTE *)a2 + 1912) & 2) != 0 && !v4 )
  {
    *a4 = 0LL;
    v32 = 0;
    goto LABEL_17;
  }
  v20 = *((_QWORD *)a2 + 171);
  v21 = tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
  v32 = (*(__int64 (__fastcall **)(char *, void **))(v20 + 56))((char *)a2 + 1368, v21);
  if ( v32 < 0 )
    goto LABEL_17;
  if ( *v12 )
  {
    if ( *(_DWORD *)(v4 + 1352) != 2 || *(_BYTE *)(v4 + 12) != 1 && (*(_BYTE *)(v4 + 1912) & 4) != 0 )
      goto LABEL_16;
    v22 = v39;
    ExecutionModel::ResourceManager::TransitionResources(v39, (struct ExecutionModel::ResourceSet *)v4, a2);
  }
  else
  {
    v22 = v39;
  }
  v32 = 0;
  if ( v31 )
  {
    v32 = (*(__int64 (__fastcall **)(_QWORD, struct _RM_ACTIVITY_HOST *))(**((_QWORD **)v22 + 14) + 24LL))(
            *((_QWORD *)v22 + 14),
            v9);
    if ( v32 < 0 )
      goto LABEL_53;
  }
  ExecutionModel::ResourceManager::UpdateEnforcerRunabilitySettings(
    this,
    v9,
    a2,
    0LL,
    (struct _RM_ENFORCEMENT_SETTINGS *)v41);
  v23 = *((_QWORD *)a2 + 181);
  v24 = *((_QWORD *)a2 + 28);
  v25 = *((_QWORD *)a2 + 182);
  v43 = v25;
  if ( v23 < v24 )
    v24 = v23;
  v42 = v24;
  if ( v46 == 0x100000 || v46 == 64 || v46 == 0x4000 )
    v45 = 0x2000000LL;
  v44 = v25;
  RmpEnforcementSettingsUpdateLimit((__int64)v9, (__int64)v41);
  v32 = (*(__int64 (__fastcall **)(_QWORD, struct _RM_ACTIVITY_HOST *, _BYTE *))(**((_QWORD **)v22 + 14) + 40LL))(
          *((_QWORD *)v22 + 14),
          v9,
          v41);
  if ( v32 < 0 )
  {
LABEL_53:
    v7 = dwProcessId;
    v34 = ExecutionModel::ProcessDead(dwProcessId);
    if ( v34 )
    {
      if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(this, 1uLL) )
      {
        v70 = 0;
        v68 = &v35;
        v35 = dwProcessId;
        v69 = 4;
        TlgWrite(this, &unk_18005AADF, v26, v27, 3u, &v67);
      }
      v32 = 0;
    }
    if ( v32 < 0 )
      goto LABEL_59;
  }
  else
  {
    v7 = dwProcessId;
  }
  if ( v4 )
  {
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v39,
      v4);
    ExecutionModel::ResourceManager::UnapplyResourceSet_Legacy(v22);
  }
  if ( *v12 )
    ATL::AtlComPtrAssign((struct IUnknown **)a2 + 225, 0LL);
  *((_DWORD *)a2 + 2) = v7;
  *((_BYTE *)a2 + 12) = 1;
  *((_QWORD *)a2 + 222) = 0LL;
  *((_QWORD *)a2 + 223) = 0LL;
  *((_QWORD *)a2 + 224) = 0LL;
  ExecutionModel::ResourceManager::SetResourceSetAsApplied(v22, a2);
  IsFrozen = ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)Block);
  v32 = ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(v22, v9, IsFrozen);
  if ( v32 < 0 )
  {
LABEL_59:
    v28 = v34;
    goto LABEL_60;
  }
  if ( *((_DWORD *)a2 + 366) )
    SetEvent(*((HANDLE *)RmSvcGlobals + 214));
  v28 = v34;
  this = v38;
  if ( !v34 )
  {
    *(_QWORD *)v38 = v9;
    goto LABEL_23;
  }
  *(_QWORD *)v38 = 0LL;
LABEL_60:
  if ( !v28 )
    goto LABEL_18;
  (*(void (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD))(*(_QWORD *)v22 + 200LL))(v22, v7);
  v5 = 0;
LABEL_19:
  if ( v9 )
  {
    if ( v5 )
      RmpActivityHostDelete((PVOID **)v9);
    RmpObjectRelease((volatile signed __int32 *)v9);
  }
LABEL_23:
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(this, 9uLL) )
  {
    v51 = 0;
    v54 = 0;
    v57 = 0;
    v60 = 0;
    v63 = 0;
    v66 = 0;
    v49 = &v32;
    v52 = &v38;
    v55 = &v35;
    v34 = *((_DWORD *)a2 + 352);
    v58 = &v34;
    v61 = (char *)a2 + 1456;
    dwProcessId = *((_DWORD *)a2 + 356);
    p_dwProcessId = &dwProcessId;
    v50 = 4;
    v38 = a2;
    v53 = v14 - 1;
    v35 = v7;
    v56 = 4;
    v59 = 4;
    v62 = v14 - 1;
    v65 = 4;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v14 - 1), &unk_18005A5A2, v15, v16, v14 - 1, &pData);
  }
  v17 = v32;
  if ( v4 )
  {
    v18 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v4 + 16LL);
    if ( v18 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v4);
    else
      v18((ExecutionModel::ResourceSet *)v4);
  }
  if ( Block )
    operator delete(Block);
  return v17;
}

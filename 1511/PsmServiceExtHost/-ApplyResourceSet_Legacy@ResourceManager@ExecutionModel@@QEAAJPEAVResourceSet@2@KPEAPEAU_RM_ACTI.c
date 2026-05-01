/*
 * XREFs of ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B580
 * Callers:
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800112FC (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 * Callees:
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000456C (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     ?Attach@?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSetCallback@ExecutionModel@@@Z @ 0x1800046B4 (-Attach@-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSetCallback@.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     RmpActivityHostDelete @ 0x180007508 (RmpActivityHostDelete.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000919C (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x1800101DC (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@2@PEAVModernActivationResourceInfo@2@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800103D0 (-UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PE.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@_N@Z @ 0x1800113A8 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@_N@.c)
 *     RmpEnforcementSettingsUpdateLimit @ 0x180019220 (RmpEnforcementSettingsUpdateLimit.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F5B0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ?SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x180036330 (-SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z.c)
 *     ExecutionModel::ProcessDead @ 0x18003D82C (ExecutionModel--ProcessDead.c)
 *     ?UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAXV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@_N@Z @ 0x18003E488 (-UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAXV-$CComPtr@VResourceSet@Executio.c)
 *     RmpActivityHostCreateHostProcess @ 0x180040D9C (RmpActivityHostCreateHostProcess.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyResourceSet_Legacy(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2,
        DWORD a3,
        struct _RM_ACTIVITY_HOST **a4)
{
  DWORD v4; // esi
  struct ExecutionModel::ResourceSet *v6; // rbx
  char v8; // r12
  ExecutionModel::ResourceManager *v9; // rcx
  struct _RM_ACTIVITY_HOST *v10; // r13
  __int64 v11; // rdi
  int v12; // eax
  __int64 *v13; // r12
  struct ExecutionModel::ResourceSet *v14; // rsi
  int v15; // edx
  const GUID *v16; // r8
  const GUID *v17; // r9
  unsigned int v18; // esi
  __int64 (__fastcall *v19)(ExecutionModel::ResourceSet *); // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  void **v22; // rsi
  ExecutionModel::ResourceManager *v23; // r14
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // eax
  const GUID *v28; // r8
  const GUID *v29; // r9
  __int64 v30; // r8
  __int64 v31; // rcx
  char IsFrozen; // al
  char v34; // [rsp+30h] [rbp-D0h]
  int v35; // [rsp+34h] [rbp-CCh] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp-C8h] BYREF
  int v37; // [rsp+3Ch] [rbp-C4h] BYREF
  DWORD v38; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  struct ExecutionModel::ResourceSet *v40; // [rsp+50h] [rbp-B0h] BYREF
  struct _RM_ACTIVITY_HOST **v41; // [rsp+58h] [rbp-A8h] BYREF
  ExecutionModel::ResourceManager *v42; // [rsp+60h] [rbp-A0h] BYREF
  void *Block; // [rsp+68h] [rbp-98h] BYREF
  __int64 v44[8]; // [rsp+70h] [rbp-90h] BYREF
  int v45; // [rsp+B4h] [rbp-4Ch]
  WCHAR v46[280]; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v48; // [rsp+310h] [rbp+210h]
  int v49; // [rsp+318h] [rbp+218h]
  int v50; // [rsp+31Ch] [rbp+21Ch]
  struct _RM_ACTIVITY_HOST ***v51; // [rsp+320h] [rbp+220h]
  int v52; // [rsp+328h] [rbp+228h]
  int v53; // [rsp+32Ch] [rbp+22Ch]
  DWORD *v54; // [rsp+330h] [rbp+230h]
  int v55; // [rsp+338h] [rbp+238h]
  int v56; // [rsp+33Ch] [rbp+23Ch]
  int *v57; // [rsp+340h] [rbp+240h]
  int v58; // [rsp+348h] [rbp+248h]
  int v59; // [rsp+34Ch] [rbp+24Ch]
  char *v60; // [rsp+350h] [rbp+250h]
  int v61; // [rsp+358h] [rbp+258h]
  int v62; // [rsp+35Ch] [rbp+25Ch]
  DWORD *p_dwProcessId; // [rsp+360h] [rbp+260h]
  int v64; // [rsp+368h] [rbp+268h]
  int v65; // [rsp+36Ch] [rbp+26Ch]
  EVENT_DATA_DESCRIPTOR v66; // [rsp+370h] [rbp+270h] BYREF
  DWORD *v67; // [rsp+390h] [rbp+290h]
  int v68; // [rsp+398h] [rbp+298h]
  int v69; // [rsp+39Ch] [rbp+29Ch]

  dwProcessId = a3;
  v4 = a3;
  v42 = this;
  v41 = a4;
  v6 = 0LL;
  Block = 0LL;
  v40 = 0LL;
  P = 0LL;
  v34 = 0;
  v37 = 0;
  v8 = 0;
  v35 = 0;
  memset_0(v46, 0, 0x228uLL);
  *(_DWORD *)v46 = v4;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(1, v46, (volatile signed __int32 **)&P) < 0 )
  {
    v38 = v4;
    v11 = 0LL;
    v12 = RmpActivityHostCreateHostProcess(&v38, 0LL, 0LL, &P);
    v10 = (struct _RM_ACTIVITY_HOST *)P;
    if ( v12 < 0 )
    {
      v35 = v12 | 0x10000000;
      goto LABEL_14;
    }
    v34 = 1;
  }
  else
  {
    v10 = (struct _RM_ACTIVITY_HOST *)P;
    v11 = *((_QWORD *)P + 75);
  }
  if ( v11 )
  {
    ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::Attach(&v40, v11);
    v6 = v40;
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v40 + 8LL))(v40);
  }
  v13 = (__int64 *)((char *)a2 + 1808);
  v14 = (struct ExecutionModel::ResourceSet *)*((_QWORD *)a2 + 226);
  if ( v14 )
  {
    if ( v6 )
    {
      if ( v14 != (struct ExecutionModel::ResourceSet *)((char *)v6 + 1368) )
      {
LABEL_11:
        v35 = -2147024809;
LABEL_12:
        v4 = dwProcessId;
LABEL_13:
        v8 = v34;
        goto LABEL_14;
      }
    }
    else
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 72LL))(*((_QWORD *)a2 + 226)) )
      {
        v35 = -2147220218;
        goto LABEL_12;
      }
      v20 = *v13;
      if ( *v13 )
        v20 -= 1368LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::Attach(&v40, v20);
      v6 = v40;
    }
  }
  if ( (*((_BYTE *)a2 + 1920) & 2) != 0 && !v6 )
  {
    *a4 = 0LL;
    v35 = 0;
    goto LABEL_12;
  }
  v21 = *((_QWORD *)a2 + 171);
  v22 = tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
  v35 = (*(__int64 (__fastcall **)(char *, void **))(v21 + 56))((char *)a2 + 1368, v22);
  if ( v35 < 0 )
    goto LABEL_12;
  if ( *v13 )
  {
    if ( *((_DWORD *)v6 + 338) != 2 || *((_BYTE *)v6 + 12) != 1 && (*((_BYTE *)v6 + 1920) & 4) != 0 )
      goto LABEL_11;
    v23 = v42;
    ExecutionModel::ResourceManager::TransitionResources(v42, v6, a2);
  }
  else
  {
    v23 = v42;
  }
  v35 = 0;
  if ( v34 )
  {
    v35 = (*(__int64 (__fastcall **)(_QWORD, struct _RM_ACTIVITY_HOST *))(**((_QWORD **)v23 + 14) + 24LL))(
            *((_QWORD *)v23 + 14),
            v10);
    if ( v35 < 0 )
      goto LABEL_48;
  }
  ExecutionModel::ResourceManager::UpdateEnforcerRunabilitySettings(
    v9,
    v10,
    a2,
    0LL,
    (struct _RM_ENFORCEMENT_SETTINGS *)v44);
  v24 = *((_QWORD *)a2 + 182);
  v25 = *((_QWORD *)a2 + 28);
  v26 = *((_QWORD *)a2 + 183);
  v44[2] = v26;
  if ( v24 < v25 )
    v25 = v24;
  v44[1] = v25;
  if ( v45 == 0x100000 || v45 == 64 || v45 == 0x4000 )
    v44[6] = 0x2000000LL;
  v44[4] = v26;
  RmpEnforcementSettingsUpdateLimit((__int64)v10, v44);
  v35 = (*(__int64 (__fastcall **)(_QWORD, struct _RM_ACTIVITY_HOST *, __int64 *))(**((_QWORD **)v23 + 14) + 40LL))(
          *((_QWORD *)v23 + 14),
          v10,
          v44);
  if ( v35 < 0 )
  {
LABEL_48:
    v4 = dwProcessId;
    v27 = ExecutionModel::ProcessDead(dwProcessId);
    v37 = v27;
    if ( v27 )
    {
      if ( (unsigned int)dword_180071060 > 4 )
      {
        if ( TlgKeywordOn(v9, 1uLL) )
        {
          v69 = 0;
          v67 = &v38;
          v38 = dwProcessId;
          v68 = 4;
          TlgWrite(v9, &unk_18006229F, v28, v29, 3u, &v66);
        }
        v27 = v37;
      }
      v35 = 0;
    }
    if ( v35 < 0 )
      goto LABEL_66;
  }
  else
  {
    v4 = dwProcessId;
  }
  if ( v6 )
  {
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v42,
      (__int64)v6);
    LOBYTE(v30) = v6 != a2;
    ExecutionModel::ResourceManager::UnapplyResourceSet_Legacy(v31, &v42, v30);
  }
  if ( *v13 )
    ATL::AtlComPtrAssign((struct IUnknown **)a2 + 226, 0LL);
  *((_DWORD *)a2 + 2) = v4;
  *((_BYTE *)a2 + 12) = 1;
  *((_QWORD *)a2 + 223) = 0LL;
  *((_QWORD *)a2 + 224) = 0LL;
  *((_QWORD *)a2 + 225) = 0LL;
  ExecutionModel::ResourceManager::SetResourceSetAsApplied(v23, a2);
  IsFrozen = ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)Block);
  ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(v23, v10, IsFrozen);
  if ( *((_DWORD *)a2 + 368) )
    SetEvent(*((HANDLE *)RmSvcGlobals + 205));
  v27 = v37;
  v9 = (ExecutionModel::ResourceManager *)v41;
  if ( !v37 )
  {
    *v41 = v10;
    goto LABEL_18;
  }
  *v41 = 0LL;
LABEL_66:
  if ( !v27 )
    goto LABEL_13;
  (*(void (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD))(*(_QWORD *)v23 + 200LL))(v23, v4);
  v8 = 0;
LABEL_14:
  if ( v10 )
  {
    if ( v8 )
      RmpActivityHostDelete((PVOID **)v10);
    RmpObjectRelease((volatile signed __int32 *)v10);
  }
LABEL_18:
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v9, 9uLL) )
  {
    v50 = 0;
    v53 = 0;
    v56 = 0;
    v59 = 0;
    v62 = 0;
    v65 = 0;
    v48 = &v35;
    v51 = &v41;
    v54 = &v38;
    v37 = *((_DWORD *)a2 + 352);
    v57 = &v37;
    v60 = (char *)a2 + 1464;
    dwProcessId = *((_DWORD *)a2 + 356);
    p_dwProcessId = &dwProcessId;
    v49 = (int)v17;
    v41 = (struct _RM_ACTIVITY_HOST **)a2;
    v52 = v15 - 1;
    v38 = v4;
    v55 = (int)v17;
    v58 = (int)v17;
    v61 = v15 - 1;
    v64 = (int)v17;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v15 - 1), &unk_18006215A, v16, v17, v15 - 1, &pData);
  }
  v18 = v35;
  if ( v6 )
  {
    v19 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v6 + 16LL);
    if ( v19 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v6);
    else
      v19(v6);
  }
  if ( Block )
    operator delete(Block);
  return v18;
}

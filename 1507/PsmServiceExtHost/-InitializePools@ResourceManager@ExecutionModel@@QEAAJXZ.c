/*
 * XREFs of ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001FD34
 * Callers:
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@2@@Z @ 0x180020044 (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceEnforcer@@PEAUIModernResourceEnfor.c)
 * Callees:
 *     ?InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z @ 0x18000E378 (-InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z.c)
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18000E3D0 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?Attach@?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSetCallback@ExecutionModel@@@Z @ 0x180016FFC (-Attach@-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSetCallback@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180017EC0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001F73C (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x180020288 (--$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV-$auto_x.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::InitializePools(struct IUnknown **this)
{
  HKEY *v2; // rax
  __int64 v3; // rax
  HKEY v4; // rbx
  HKEY *v5; // rax
  int v6; // r14d
  char *v7; // rsi
  HKEY v8; // rbx
  HKEY *v9; // rax
  LSTATUS v10; // eax
  HKEY v11; // rcx
  LSTATUS Value; // eax
  LSTATUS v13; // eax
  ExecutionModel::BaseResourceSet *v14; // rax
  ExecutionModel::BaseResourceSet *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  ExecutionModel::BaseResourceSet *v18; // rcx
  ExecutionModel::BaseResourceSet *v19; // rcx
  int v20; // r9d
  ExecutionModel::BaseResourceSet *v21; // rcx
  int v22; // r9d
  unsigned int inited; // ebx
  DWORD cbData[2]; // [rsp+38h] [rbp-D0h] BYREF
  HKEY v26; // [rsp+40h] [rbp-C8h] BYREF
  HKEY v27; // [rsp+48h] [rbp-C0h] BYREF
  HKEY hKey; // [rsp+50h] [rbp-B8h] BYREF
  BYTE lpData[4]; // [rsp+58h] [rbp-B0h] BYREF
  BYTE Data[4]; // [rsp+5Ch] [rbp-ACh] BYREF
  BYTE v31[4]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v32[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v33; // [rsp+78h] [rbp-90h]
  __int16 v34; // [rsp+7Ch] [rbp-8Ch]
  int v35; // [rsp+80h] [rbp-88h] BYREF
  __int64 v36; // [rsp+88h] [rbp-80h]
  int v37; // [rsp+90h] [rbp-78h]
  __int16 v38; // [rsp+94h] [rbp-74h]
  int v39; // [rsp+98h] [rbp-70h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-68h]
  int v41; // [rsp+A8h] [rbp-60h]
  __int16 v42; // [rsp+ACh] [rbp-5Ch]
  WCHAR SubKey[256]; // [rsp+B8h] [rbp-50h] BYREF

  hKey = 0LL;
  v27 = 0LL;
  v2 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&hKey);
  if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", v2)
    || (v3 = ((__int64 (__fastcall *)(struct IUnknown **))(*this)[17].lpVtbl)(this),
        StringCchPrintfW(SubKey, 256LL, L"Policy\\%s\\Pools", v3),
        v4 = hKey,
        v5 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v27),
        RegOpenKeyW(v4, SubKey, v5)) )
  {
    inited = -2147467259;
  }
  else
  {
    if ( this[22] )
      ATL::AtlComPtrAssign(this + 22, 0LL);
    v6 = 1;
    v7 = (char *)(this + 23);
    while ( 1 )
    {
      v26 = 0LL;
      v8 = v27;
      v9 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v26);
      v10 = RegOpenKeyW(v8, *(LPCWSTR *)&v7[(char *)&qword_18006A098 - (char *)this - 184], v9);
      v11 = v26;
      if ( v10 )
        break;
      cbData[0] = 4;
      Value = RegQueryValueExW(v26, L"Cpu", 0LL, 0LL, Data, cbData);
      v11 = v26;
      if ( Value )
        break;
      cbData[0] = 4;
      v13 = RegQueryValueExW(v26, L"CommitMem", 0LL, 0LL, lpData, cbData);
      v11 = v26;
      if ( v13 )
        break;
      cbData[0] = 4;
      if ( RegQueryValueExW(v26, L"IO", 0LL, 0LL, v31, cbData)
        || ((v14 = (ExecutionModel::BaseResourceSet *)malloc(0x558uLL)) == 0LL
          ? (v15 = 0LL)
          : (v15 = ExecutionModel::BaseResourceSet::BaseResourceSet(v14)),
            ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::Attach(&this[v6 + 22], (__int64)v15),
            (v16 = *(_QWORD *)v7) == 0) )
      {
        v11 = v26;
        break;
      }
      LODWORD(v32[0]) = 0;
      v34 = 1;
      *(_DWORD *)(v16 + 1352) = 2;
      v17 = *(_QWORD *)v7;
      v33 = 101;
      *(_DWORD *)(v17 + 16) = v6;
      *(_QWORD *)(*(_QWORD *)v7 + 24LL) = this;
      v18 = *(ExecutionModel::BaseResourceSet **)v7;
      v32[1] = *(unsigned int *)Data;
      ExecutionModel::BaseResourceSet::InitializeResource(v18, (const struct ExecutionModel::_ResourceInfo *)v32);
      v19 = *(ExecutionModel::BaseResourceSet **)v7;
      v40 = *(unsigned int *)lpData;
      v39 = 1;
      v41 = v20;
      v42 = 1;
      ExecutionModel::BaseResourceSet::InitializeResource(v19, (const struct ExecutionModel::_ResourceInfo *)&v39);
      v21 = *(ExecutionModel::BaseResourceSet **)v7;
      v36 = *(unsigned int *)v31;
      v35 = 2;
      v37 = v22;
      v38 = 1;
      ExecutionModel::BaseResourceSet::InitializeResource(v21, (const struct ExecutionModel::_ResourceInfo *)&v35);
      if ( v26 )
        RegCloseKey(v26);
      ++v6;
      v7 += 8;
      if ( v6 >= 2 )
      {
        inited = ExecutionModel::ResourceManager::InitResourcesFromRegisteredDlls((ExecutionModel::ResourceManager *)this);
        goto LABEL_17;
      }
    }
    inited = -2147467259;
    if ( v11 )
      RegCloseKey(v11);
  }
LABEL_17:
  if ( v27 )
    RegCloseKey(v27);
  if ( hKey )
    RegCloseKey(hKey);
  return inited;
}

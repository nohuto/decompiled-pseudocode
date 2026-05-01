/*
 * XREFs of ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800230A4
 * Callers:
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18002370C (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ?Attach@?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSetCallback@ExecutionModel@@@Z @ 0x1800046B4 (-Attach@-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSetCallback@.c)
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18000CCD0 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x180023A44 (--$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV-$auto_x.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::InitResourcesFromRegisteredDlls(
        ExecutionModel::ResourceManager *this)
{
  unsigned int v1; // edi
  DWORD v3; // r14d
  char *v4; // rsi
  ExecutionModel::BaseResourceSet *v5; // rax
  HKEY *v6; // rax
  HKEY v7; // rbx
  HKEY *v8; // rax
  DWORD v9; // edx
  HMODULE LibraryW; // rax
  HMODULE v12; // rbx
  FARPROC ProcAddress; // rax
  DWORD cbData; // [rsp+48h] [rbp-C0h] BYREF
  DWORD Type; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD cchValueName[2]; // [rsp+50h] [rbp-B8h] BYREF
  HKEY v17; // [rsp+58h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A8h] BYREF
  WCHAR ValueName[264]; // [rsp+68h] [rbp-A0h] BYREF
  WCHAR Data[1024]; // [rsp+278h] [rbp+170h] BYREF

  v1 = 0;
  cchValueName[0] = 259;
  hKey = 0LL;
  v17 = 0LL;
  Type = 0;
  cbData = 2046;
  v3 = 0;
  memset_0(ValueName, 0, 0x208uLL);
  memset_0(Data, 0, sizeof(Data));
  v4 = (char *)this + 176;
  if ( !*((_QWORD *)this + 22) )
  {
    v5 = (ExecutionModel::BaseResourceSet *)malloc(0x558uLL);
    if ( v5 )
      v5 = ExecutionModel::BaseResourceSet::BaseResourceSet(v5);
    ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::Attach((_QWORD *)this + 22, (__int64)v5);
    if ( !*(_QWORD *)v4 )
      goto LABEL_14;
  }
  v6 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&hKey);
  if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", v6)
    || (v7 = hKey,
        v8 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v17),
        RegOpenKeyW(v7, L"Registrars\\", v8)) )
  {
LABEL_14:
    v1 = -2147467259;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)v4 + 1352LL) = 2;
    *(_DWORD *)(*(_QWORD *)v4 + 16LL) = 0;
    v9 = 0;
    while ( !RegEnumValueW(v17, v9, ValueName, cchValueName, 0LL, &Type, (LPBYTE)Data, &cbData) )
    {
      ++v3;
      if ( Type == 1 && cbData > 2 )
      {
        LibraryW = LoadLibraryW(Data);
        v12 = LibraryW;
        if ( LibraryW )
        {
          ProcAddress = GetProcAddress(LibraryW, "Register");
          if ( ProcAddress )
            ((void (__fastcall *)(ExecutionModel::ResourceManager *))ProcAddress)(this);
          FreeLibrary(v12);
        }
      }
      memset_0(ValueName, 0, 0x208uLL);
      memset_0(Data, 0, sizeof(Data));
      v9 = v3;
      cchValueName[0] = 259;
      cbData = 2046;
    }
  }
  if ( v17 )
    RegCloseKey(v17);
  if ( hKey )
    RegCloseKey(hKey);
  return v1;
}

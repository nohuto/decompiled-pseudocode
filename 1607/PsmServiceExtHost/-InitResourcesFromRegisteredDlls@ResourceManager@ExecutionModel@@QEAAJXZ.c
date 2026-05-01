/*
 * XREFs of ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001B79C
 * Callers:
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001BDE4 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x180011100 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x18001C084 (--$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV-$auto_x.c)
 *     ?Attach@?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18001CA10 (-Attach@-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionM.c)
 *     ??2@YAPEAX_K@Z @ 0x18001FB10 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::InitResourcesFromRegisteredDlls(
        ExecutionModel::ResourceManager *this)
{
  unsigned int v1; // edi
  DWORD v3; // r14d
  ExecutionModel::BaseResourceSet *v4; // rax
  __int64 v5; // rsi
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
  v4 = (ExecutionModel::BaseResourceSet *)operator new(0x558uLL);
  if ( v4 )
    v4 = ExecutionModel::BaseResourceSet::BaseResourceSet(v4);
  ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::Attach((char *)this + 112, v4);
  v5 = *((_QWORD *)this + 14);
  if ( v5 )
  {
    v6 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&hKey);
    if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", v6)
      || (v7 = hKey,
          v8 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v17),
          RegOpenKeyW(v7, L"Registrars\\", v8)) )
    {
      v1 = -2147467259;
    }
    else
    {
      *(_DWORD *)(v5 + 16) = 0;
      v9 = 0;
      *(_DWORD *)(v5 + 1352) = 2;
      *(_QWORD *)(v5 + 24) = this;
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
  }
  else
  {
    v1 = -2147024882;
  }
  if ( v17 )
    RegCloseKey(v17);
  if ( hKey )
    RegCloseKey(hKey);
  return v1;
}

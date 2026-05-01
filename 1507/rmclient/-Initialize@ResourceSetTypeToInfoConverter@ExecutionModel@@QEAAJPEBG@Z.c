/*
 * XREFs of ?Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z @ 0x180007860
 * Callers:
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x1800073AC (-Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z.c)
 *     ?GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@ExecutionModel@@@Z @ 0x18000EA20 (-GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@Ex.c)
 * Callees:
 *     ?GetResourceManagerRootHive@ExecutionModel@@YAPEAUHKEY__@@XZ @ 0x1800028D4 (-GetResourceManagerRootHive@ExecutionModel@@YAPEAUHKEY__@@XZ.c)
 *     ?ReadMediumThreshold@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAXPEAUHKEY__@@PEAN@Z @ 0x1800077E4 (-ReadMediumThreshold@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAXPEAUHKEY__@@PEAN@Z.c)
 *     ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x180007CE0 (--$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV-$auto_x.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetTypeToInfoConverter::Initialize(
        ExecutionModel::ResourceSetTypeToInfoConverter *this,
        const unsigned __int16 *a2)
{
  __int64 v2; // rsi
  HKEY ResourceManagerRootHive; // rdi
  HKEY *v5; // rax
  LSTATUS v6; // eax
  HKEY *v7; // rax
  LSTATUS v8; // eax
  ExecutionModel::ResourceSetTypeToInfoConverter *v9; // rcx
  HKEY v10; // xmm7_8
  const WCHAR **v11; // rdi
  char *v12; // r13
  signed int v13; // r14d
  const WCHAR *v14; // rdx
  HKEY v15; // r12
  unsigned int v16; // ebx
  wchar_t **v17; // rdi
  const WCHAR *v18; // rdx
  BYTE *lpData; // rsi
  HKEY v20; // r14
  LSTATUS Value; // eax
  int v22; // eax
  DWORD v23; // r14d
  __int64 v24; // rcx
  __int64 v25; // rcx
  bool v26; // al
  double v27; // xmm0_8
  int v28; // edi
  HKEY v29; // rbx
  const WCHAR **v30; // rdi
  BYTE *v31; // rbx
  const WCHAR *v32; // rdx
  _DWORD *v34; // rdi
  __int64 i; // rcx
  BYTE Data[8]; // [rsp+30h] [rbp-29h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-21h] BYREF
  HKEY phkResult; // [rsp+40h] [rbp-19h] BYREF
  HKEY v39; // [rsp+48h] [rbp-11h] BYREF
  HKEY v40; // [rsp+50h] [rbp-9h] BYREF
  const unsigned __int16 *const near *const *v41; // [rsp+58h] [rbp-1h]
  DWORD lpcbData; // [rsp+D0h] [rbp+77h] BYREF
  HKEY cbData; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  hKey = 0LL;
  ResourceManagerRootHive = (HKEY)ExecutionModel::GetResourceManagerRootHive(this);
  v5 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v39);
  v6 = RegOpenKeyW(ResourceManagerRootHive, L"System\\ResourceManager\\Policy\\ResourceSetTypePolicyTable", v5);
  if ( v6 )
    __fastfail(v6);
  v7 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v40);
  v8 = RegOpenKeyW(ResourceManagerRootHive, L"System\\ResourceManager", v7);
  if ( v8 )
    __fastfail(v8);
  ExecutionModel::ResourceSetTypeToInfoConverter::ReadMediumThreshold(v9, v40, (double *)&cbData);
  v10 = cbData;
  v11 = (const WCHAR **)&ExecutionModel::ResourceSetTypeName;
  v12 = (char *)this + 80;
  v41 = &ExecutionModel::ResourceSetTypeName;
  v13 = 0;
  lpcbData = 0;
  while ( 1 )
  {
    if ( hKey )
      RegCloseKey(hKey);
    v14 = *v11;
    hKey = (HKEY)v2;
    if ( RegOpenKeyW(v39, v14, &hKey) )
      break;
    v15 = hKey;
    *((_DWORD *)v12 - 20) = v13;
    if ( (v13 >= 26 || v13 < 8) && (v13 < 42 || v13 >= 52) && (v13 < 35 || v13 >= 41) )
    {
      switch ( v13 )
      {
        case 0:
        case 5:
        case 6:
        case 7:
        case 26:
        case 30:
        case 32:
        case 33:
        case 34:
        case 41:
        case 52:
          *((_WORD *)v12 - 30) &= 0xFFE9u;
          *((_WORD *)v12 - 30) |= 0x69u;
          break;
        default:
          break;
      }
    }
    phkResult = (HKEY)v2;
    RegOpenKeyW(v15, a2, &phkResult);
    v16 = v2;
    v17 = &off_180016868;
    do
    {
      v18 = *v17;
      lpData = (BYTE *)&v12[*((unsigned int *)v17 - 2) - 80];
      v20 = phkResult;
      LODWORD(cbData) = 4;
      Value = RegQueryValueExW(v15, v18, 0LL, 0LL, lpData, (LPDWORD)&cbData);
      if ( Value )
      {
        if ( v20 )
          Value = RegQueryValueExW(v20, *v17, 0LL, 0LL, lpData, (LPDWORD)&cbData);
        if ( Value )
        {
          if ( !*((_BYTE *)v17 + 8) )
          {
            v23 = lpcbData;
            v28 = -2147024809;
            v2 = 0LL;
            goto LABEL_28;
          }
          *(_DWORD *)lpData = *((_DWORD *)v17 + 3);
        }
      }
      ++v16;
      v17 += 3;
    }
    while ( v16 < 0xD );
    v22 = *((_DWORD *)v12 - 17);
    *(_DWORD *)v12 = v22;
    *((_DWORD *)v12 + 6) = v22;
    *((_DWORD *)v12 + 12) = v22;
    if ( *((_QWORD *)v12 + 2) )
    {
      v23 = lpcbData;
    }
    else
    {
      v23 = lpcbData;
      if ( lpcbData > 0x38 || (v24 = 0x100002002000400LL, !_bittest64(&v24, lpcbData)) )
        *((_QWORD *)v12 + 2) = *((_QWORD *)v12 - 4);
    }
    v25 = *((_QWORD *)v12 - 4);
    v2 = 0LL;
    v26 = v25 != *((_QWORD *)v12 + 2);
    *((_DWORD *)v12 + 67) &= ~0x40000u;
    *((_DWORD *)v12 + 67) |= v26 << 18;
    v27 = (double)(int)v25;
    if ( v25 < 0 )
      v27 = v27 + 1.844674407370955e19;
    v28 = 0;
    *((_QWORD *)v12 + 32) = (unsigned int)(int)(v27 * *(double *)&v10);
LABEL_28:
    if ( phkResult )
      RegCloseKey(phkResult);
    if ( v28 < 0 )
      goto LABEL_41;
    v29 = hKey;
    cbData = 0LL;
    lpcbData = 4;
    if ( !RegQueryValueExW(hKey, L"StandardExternalResources", 0LL, 0LL, Data, &lpcbData) )
    {
      v34 = v12 + 68;
      for ( i = 44LL; i; --i )
        *v34++ = 1;
    }
    if ( cbData )
      RegCloseKey(cbData);
    cbData = 0LL;
    if ( !RegOpenKeyW(v29, L"ExternalResources", &cbData) )
    {
      v30 = (const WCHAR **)off_180016D88;
      v31 = (BYTE *)(v12 + 68);
      v2 = 45LL;
      do
      {
        v32 = *v30;
        lpcbData = 4;
        RegQueryValueExW(cbData, v32, 0LL, 0LL, v31, &lpcbData);
        v31 += 4;
        ++v30;
        --v2;
      }
      while ( v2 );
    }
    if ( cbData )
      RegCloseKey(cbData);
    v11 = (const WCHAR **)(v41 + 1);
    v13 = v23 + 1;
    v12 += 352;
    lpcbData = v13;
    ++v41;
    if ( (unsigned int)v13 >= 0x39 )
    {
      v28 = v2;
      goto LABEL_41;
    }
  }
  v28 = -2147467259;
LABEL_41:
  if ( hKey )
    RegCloseKey(hKey);
  if ( v39 )
    RegCloseKey(v39);
  if ( v40 )
    RegCloseKey(v40);
  return (unsigned int)v28;
}

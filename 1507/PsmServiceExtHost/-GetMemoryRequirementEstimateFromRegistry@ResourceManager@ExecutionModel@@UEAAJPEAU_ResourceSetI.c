/*
 * XREFs of ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x180035DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180016A90 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x180020288 (--$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV-$auto_x.c)
 *     ?ResourceSetUsesEstimation@ResourceManager@ExecutionModel@@QEBA_NPEBU_ResourceSetInfo@2@PEBG@Z @ 0x18002EB20 (-ResourceSetUsesEstimation@ResourceManager@ExecutionModel@@QEBA_NPEBU_ResourceSetInfo@2@PEBG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180039668 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetMemoryRequirementEstimateFromRegistry(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        const unsigned __int16 *a3,
        int a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rsi
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  const wchar_t *v11; // rdx
  const WCHAR *v13; // rbx
  HKEY *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rdx
  DWORD Type; // [rsp+38h] [rbp-21h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-19h] BYREF
  BYTE Data[8]; // [rsp+48h] [rbp-11h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+50h] [rbp-9h] BYREF
  _WORD v22[8]; // [rsp+60h] [rbp+7h] BYREF
  LPCWSTR lpValueName[2]; // [rsp+70h] [rbp+17h] BYREF
  _WORD v24[12]; // [rsp+80h] [rbp+27h] BYREF
  DWORD cbData; // [rsp+C0h] [rbp+67h] BYREF

  v5 = *(int *)a2;
  lpSubKey[0] = v22;
  v22[0] = 0;
  lpSubKey[1] = v22;
  v24[0] = 0;
  lpValueName[0] = v24;
  hKey = 0LL;
  lpValueName[1] = v24;
  v8 = 0;
  if ( !ExecutionModel::ResourceManager::ResourceSetUsesEstimation(this, a2, a3) )
    goto LABEL_16;
  if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
          (__int64)lpSubKey,
          (__int64 *)L"System\\ResourceManager\\MemoryHistory",
          v9,
          v10)
    || !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           L"\\")
    || !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           a3)
    || !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           L"\\") )
  {
    goto LABEL_13;
  }
  if ( a4 )
  {
    switch ( a4 )
    {
      case 2:
        v11 = L"Mixed";
        break;
      case 4:
        v11 = L"Pure";
        break;
      case 8:
        v11 = L"System";
        break;
      default:
        __fastfail(0x8000FFFF);
    }
  }
  else
  {
    if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             (&ExecutionModel::ResourceSetTypeName)[v5])
      || !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             L"\\") )
    {
      goto LABEL_13;
    }
    v11 = L"Legacy";
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           v11) )
  {
LABEL_13:
    v8 = -2147418113;
    goto LABEL_14;
  }
  v13 = lpSubKey[0];
  v14 = tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&hKey);
  if ( !RegOpenKeyW(HKEY_LOCAL_MACHINE, v13, v14) )
  {
    if ( (unsigned int)(v5 - 5) > 4 )
      v17 = (__int64 *)L"Generic";
    else
      v17 = (__int64 *)(&ExecutionModel::ResourceSetTypeName)[v5];
    if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
            (__int64)lpValueName,
            v17,
            v15,
            v16) )
      goto LABEL_13;
    cbData = 8;
    if ( !RegQueryValueExW(hKey, lpValueName[0], 0LL, &Type, Data, &cbData) )
    {
      if ( Type != 11 || cbData != 8 )
        goto LABEL_13;
      *a5 = *(_QWORD *)Data;
    }
  }
LABEL_14:
  if ( hKey )
    RegCloseKey(hKey);
LABEL_16:
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)lpValueName);
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)lpSubKey);
  return v8;
}

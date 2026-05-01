/*
 * XREFs of ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x18000DD0C
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x180011250 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18000807C (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?ResourceSetUsesEstimation@ResourceManager@ExecutionModel@@QEBA_NPEBU_ResourceSetInfo@2@PEBG@Z @ 0x18000DE04 (-ResourceSetUsesEstimation@ResourceManager@ExecutionModel@@QEBA_NPEBU_ResourceSetInfo@2@PEBG@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180021724 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RmpGetEstimationKeyFromPsmKey@@YAXPEBGPEAU_RM_PSM_KEY@@@Z @ 0x18002ABE4 (-RmpGetEstimationKeyFromPsmKey@@YAXPEBGPEAU_RM_PSM_KEY@@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18002BCBC (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetMemoryRequirementEstimateFromRegistry(
        __int64 **this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        wchar_t *a3,
        int a4,
        unsigned __int64 *a5)
{
  __int64 v6; // rsi
  unsigned int v9; // ebx
  const wchar_t *v11; // rdx
  __int64 *v12; // rdx
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v16[8]; // [rsp+50h] [rbp-B0h] BYREF
  DWORD Type; // [rsp+60h] [rbp-A0h] BYREF
  LPCWSTR lpValueName[2]; // [rsp+68h] [rbp-98h] BYREF
  _WORD v19[8]; // [rsp+78h] [rbp-88h] BYREF
  BYTE Data[8]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Destination[232]; // [rsp+90h] [rbp-70h] BYREF

  lpSubKey[0] = v16;
  v16[0] = 0;
  lpSubKey[1] = v16;
  *a5 = 0LL;
  v6 = *(int *)a2;
  lpValueName[0] = v19;
  v19[0] = 0;
  lpValueName[1] = v19;
  v9 = 0;
  hKey = 0LL;
  if ( ExecutionModel::ResourceManager::ResourceSetUsesEstimation((ExecutionModel::ResourceManager *)this, a2, a3) )
  {
    RmpGetEstimationKeyFromPsmKey(a3, Destination);
    if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
           (__int64)lpSubKey,
           this[2])
      && (unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                            lpSubKey,
                            L"\\")
      && (unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                            lpSubKey,
                            Destination)
      && (unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                            lpSubKey,
                            L"\\") )
    {
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
LABEL_20:
        if ( (unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                                lpSubKey,
                                v11) )
        {
          hKey = 0LL;
          if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, lpSubKey[0], &hKey) )
            goto LABEL_2;
          v12 = (unsigned int)(v6 - 5) > 4
              ? (__int64 *)L"Generic"
              : (__int64 *)(&ExecutionModel::ResourceSetTypeName)[v6];
          if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                 (__int64)lpValueName,
                 v12) )
          {
            cbData = 8;
            if ( RegQueryValueExW(hKey, lpValueName[0], 0LL, &Type, Data, &cbData) )
              goto LABEL_2;
            if ( Type == 11 && cbData == 8 )
            {
              *a5 = *(_QWORD *)Data;
              goto LABEL_2;
            }
          }
        }
        goto LABEL_34;
      }
      if ( (unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                              lpSubKey,
                              (&ExecutionModel::ResourceSetTypeName)[v6])
        && (unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                              lpSubKey,
                              L"\\") )
      {
        v11 = L"Legacy";
        goto LABEL_20;
      }
    }
LABEL_34:
    v9 = -2147418113;
  }
LABEL_2:
  if ( hKey )
    RegCloseKey(hKey);
  if ( lpValueName[0] != v19 )
    operator delete((void *)lpValueName[0]);
  if ( lpSubKey[0] != v16 )
    operator delete((void *)lpSubKey[0]);
  return v9;
}

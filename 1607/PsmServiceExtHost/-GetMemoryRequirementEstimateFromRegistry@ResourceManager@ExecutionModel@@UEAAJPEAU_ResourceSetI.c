/*
 * XREFs of ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x180010590
 * Callers:
 *     ?AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAUIResourceSet@2@PEAPEAU72@@Z @ 0x180010354 (-AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResou.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18000DAA0 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?ResourceSetUsesEstimation@ResourceManager@ExecutionModel@@QEBA_NPEBU_ResourceSetInfo@2@PEBG@Z @ 0x180010690 (-ResourceSetUsesEstimation@ResourceManager@ExecutionModel@@QEBA_NPEBU_ResourceSetInfo@2@PEBG@Z.c)
 *     ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x18001C084 (--$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV-$auto_x.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     RmpGetEstimationKeyFromPsmKey @ 0x18002A088 (RmpGetEstimationKeyFromPsmKey.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18002D588 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetMemoryRequirementEstimateFromRegistry(
        __int64 **this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        wchar_t *a3,
        int a4,
        unsigned __int64 *a5)
{
  __int64 v6; // rsi
  unsigned int v9; // edi
  const wchar_t *v11; // rdx
  const WCHAR *v12; // rbx
  HKEY *v13; // rax
  __int64 *v14; // rdx
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v17[8]; // [rsp+48h] [rbp-B8h] BYREF
  DWORD Type; // [rsp+58h] [rbp-A8h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A0h] BYREF
  LPCWSTR lpValueName[2]; // [rsp+68h] [rbp-98h] BYREF
  _WORD v21[8]; // [rsp+78h] [rbp-88h] BYREF
  BYTE Data[8]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Destination[232]; // [rsp+90h] [rbp-70h] BYREF

  lpSubKey[0] = v17;
  v17[0] = 0;
  lpSubKey[1] = v17;
  *a5 = 0LL;
  v6 = *(int *)a2;
  lpValueName[0] = v21;
  v21[0] = 0;
  lpValueName[1] = v21;
  v9 = 0;
  hKey = 0LL;
  if ( ExecutionModel::ResourceManager::ResourceSetUsesEstimation((ExecutionModel::ResourceManager *)this, a2, a3) )
  {
    RmpGetEstimationKeyFromPsmKey(a3, Destination);
    if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
           (__int64)lpSubKey,
           this[4])
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
          v12 = lpSubKey[0];
          v13 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&hKey);
          if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, v12, v13) )
            goto LABEL_2;
          v14 = (unsigned int)(v6 - 5) > 4
              ? (__int64 *)L"Generic"
              : (__int64 *)(&ExecutionModel::ResourceSetTypeName)[v6];
          if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                 (__int64)lpValueName,
                 v14) )
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
  if ( lpValueName[0] != v21 )
    operator delete((void *)lpValueName[0]);
  if ( lpSubKey[0] != v17 )
    operator delete((void *)lpSubKey[0]);
  return v9;
}

/*
 * XREFs of ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x180012590
 * Callers:
 *     ?AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011F90 (-AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResou.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180012860 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x180023A44 (--$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV-$auto_x.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?HasMemoryUsageHistory@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x18003CE10 (-HasMemoryUsageHistory@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18003EAA8 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     RmpGetEstimationKeyFromPsmKey @ 0x18003ED9C (RmpGetEstimationKeyFromPsmKey.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetMemoryRequirementEstimateFromRegistry(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        wchar_t *a3,
        int a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 v7; // r15
  const wchar_t *v11; // rdx
  const WCHAR *v12; // rdi
  HKEY *v13; // rax
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v16[8]; // [rsp+48h] [rbp-B8h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  DWORD Type; // [rsp+60h] [rbp-A0h] BYREF
  LPCWSTR lpValueName[2]; // [rsp+68h] [rbp-98h] BYREF
  _WORD v20[8]; // [rsp+78h] [rbp-88h] BYREF
  BYTE Data[8]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Destination[232]; // [rsp+90h] [rbp-70h] BYREF

  v5 = 0;
  lpSubKey[0] = v16;
  v16[0] = 0;
  lpSubKey[1] = v16;
  lpValueName[0] = v20;
  *a5 = 0LL;
  v7 = *(int *)a2;
  lpValueName[1] = v20;
  v20[0] = 0;
  hKey = 0LL;
  if ( a3
    && *a3
    && (*((_DWORD *)a2 + 89) & 0x40000) != 0
    && *((_QWORD *)a2 + 13)
    && (unsigned __int8)ExecutionModel::ResourceSetType::HasMemoryUsageHistory((unsigned int)v7)
    && wcsnlen(a3, 0xE7uLL) != 231 )
  {
    RmpGetEstimationKeyFromPsmKey(a3, Destination);
    if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                             lpSubKey,
                             *((_QWORD *)this + 4))
      || !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             L"\\")
      || !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             Destination)
      || !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             L"\\") )
    {
      goto LABEL_33;
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
                               (&ExecutionModel::ResourceSetTypeName)[v7])
        || !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                               lpSubKey,
                               L"\\") )
      {
        goto LABEL_33;
      }
      v11 = L"Legacy";
    }
    if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             v11) )
    {
LABEL_33:
      v5 = -2147418113;
      goto LABEL_4;
    }
    v12 = lpSubKey[0];
    v13 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&hKey);
    if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, v12, v13) )
      goto LABEL_4;
    if ( (unsigned int)(v7 - 5) > 4 )
    {
      if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                               lpValueName,
                               L"Generic") )
        goto LABEL_33;
    }
    else if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                                  lpValueName,
                                  (&ExecutionModel::ResourceSetTypeName)[v7]) )
    {
      goto LABEL_33;
    }
    cbData = 8;
    if ( !RegQueryValueExW(hKey, lpValueName[0], 0LL, &Type, Data, &cbData) )
    {
      if ( Type != 11 || cbData != 8 )
        goto LABEL_33;
      *a5 = *(_QWORD *)Data;
    }
  }
LABEL_4:
  if ( hKey )
    RegCloseKey(hKey);
  if ( lpValueName[0] != v20 )
    operator delete((void *)lpValueName[0]);
  if ( lpSubKey[0] != v16 )
    operator delete((void *)lpSubKey[0]);
  return v5;
}

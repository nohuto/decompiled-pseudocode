/*
 * XREFs of ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000CB20
 * Callers:
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18000D334 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180010080 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180004C74 (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180006D00 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18000807C (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?ResourceSetUsesEstimation@ResourceManager@ExecutionModel@@QEBA_NPEBU_ResourceSetInfo@2@PEBG@Z @ 0x18000DE04 (-ResourceSetUsesEstimation@ResourceManager@ExecutionModel@@QEBA_NPEBU_ResourceSetInfo@2@PEBG@Z.c)
 *     ?GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z @ 0x18000E2FC (-GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z.c)
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x1800102CC (-GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180020994 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180021724 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RmpGetEstimationKeyFromPsmKey@@YAXPEBGPEAU_RM_PSM_KEY@@@Z @ 0x18002ABE4 (-RmpGetEstimationKeyFromPsmKey@@YAXPEBGPEAU_RM_PSM_KEY@@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18002BCBC (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?RmpSystemQueryActivityHostPeakPrivateCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180037D40 (-RmpSystemQueryActivityHostPeakPrivateCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::UpdateMemoryUsageEstimates(
        __int64 **this,
        const unsigned __int16 **a2,
        unsigned __int64 *a3)
{
  int ResourceSetInfo; // eax
  ExecutionModel::ResourceManager *v7; // rcx
  _QWORD *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // r15
  unsigned __int16 *v12; // r12
  LSTATUS v13; // eax
  void *v14; // r12
  int v15; // eax
  const wchar_t *v16; // rdx
  LSTATUS v17; // eax
  __int64 *v18; // rdx
  __int64 Amount; // rax
  double v20; // xmm3_8
  double v21; // xmm1_8
  double v22; // xmm0_8
  double v23; // xmm1_8
  unsigned __int64 v24; // rcx
  double v25; // xmm0_8
  LSTATUS v26; // eax
  DWORD cbData; // [rsp+50h] [rbp-B0h] BYREF
  DWORD Type; // [rsp+54h] [rbp-ACh] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  void *Block; // [rsp+60h] [rbp-A0h] BYREF
  BYTE Data[8]; // [rsp+68h] [rbp-98h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-90h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+78h] [rbp-88h] BYREF
  _WORD v34[8]; // [rsp+88h] [rbp-78h] BYREF
  struct _RM_ACTIVITY_HOST *v35; // [rsp+98h] [rbp-68h]
  BYTE v36[8]; // [rsp+A0h] [rbp-60h] BYREF
  BYTE v37[8]; // [rsp+A8h] [rbp-58h] BYREF
  LPCWSTR lpValueName[2]; // [rsp+B0h] [rbp-50h] BYREF
  _WORD v39[8]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t Destination[232]; // [rsp+D0h] [rbp-30h] BYREF

  lpSubKey[0] = v34;
  lpSubKey[1] = v34;
  lpValueName[0] = v39;
  lpValueName[1] = v39;
  v34[0] = 0;
  v39[0] = 0;
  phkResult = 0LL;
  hKey = 0LL;
  if ( a3 )
    *a3 = 0LL;
  Block = 0LL;
  ResourceSetInfo = ExecutionModel::ResourceSet::GetResourceSetInfo(
                      (ExecutionModel::ResourceSet *)a2,
                      (struct ExecutionModel::_ResourceSetInfo **)&Block);
  v8 = Block;
  v9 = ResourceSetInfo;
  if ( ResourceSetInfo < 0 )
    goto LABEL_6;
  v10 = *(int *)Block;
  if ( !ExecutionModel::ResourceManager::ResourceSetUsesEstimation(
          v7,
          (const struct ExecutionModel::_ResourceSetInfo *)Block,
          a2[4])
    || !ExecutionModel::_ResourceSetInfo::GetAmount(v8, 1LL) )
  {
    v9 = 0;
    goto LABEL_6;
  }
  v12 = (unsigned __int16 *)a2[174];
  v35 = (struct _RM_ACTIVITY_HOST *)v12;
  if ( !v12 )
  {
    v9 = 0;
    goto LABEL_6;
  }
  if ( (unsigned int)RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)v12, 2) > 1 )
  {
    v9 = 0;
    goto LABEL_6;
  }
  if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
          (__int64)lpSubKey,
          this[2]) )
  {
    v9 = -2147024882;
    goto LABEL_6;
  }
  if ( hKey )
    RegCloseKey(hKey);
  hKey = 0LL;
  v13 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, lpSubKey[0], 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
  if ( v13 )
  {
    if ( v13 > 0 )
      v9 = (unsigned __int16)v13 | 0x80070000;
    else
      v9 = v13;
    goto LABEL_6;
  }
  cbData = 4;
  if ( RegQueryValueExW(hKey, L"EstimationEnabled", 0LL, &Type, Data, &cbData) || Type != 4 || cbData != 4 )
    goto LABEL_37;
  if ( *(_DWORD *)Data != 1 )
  {
    if ( !*(_DWORD *)Data )
    {
      v9 = 0;
      goto LABEL_6;
    }
LABEL_37:
    *(_DWORD *)Data = 1;
  }
  v14 = (void *)*((_QWORD *)v12 + 127);
  if ( (int)RmpSystemQueryActivityHostPeakPrivateCommit(v35, (unsigned __int64 *)&Block) >= 0 && v14 <= Block )
    v14 = Block;
  if ( (int)RmpActivityHostQueryCommit(v35, 0LL, 0LL, (unsigned __int64 *)&Block) >= 0 && v14 <= Block )
    v14 = Block;
  if ( (unsigned __int64)v14 > v8[9] )
    v14 = (void *)v8[9];
  if ( !v14 )
  {
    v9 = 0;
    goto LABEL_6;
  }
  RmpGetEstimationKeyFromPsmKey((wchar_t *)a2[4], Destination);
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           L"\\") )
  {
    v9 = -2147024882;
    goto LABEL_6;
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           Destination) )
  {
    v9 = -2147024882;
    goto LABEL_6;
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           L"\\") )
  {
    v9 = -2147024882;
    goto LABEL_6;
  }
  v15 = *((_DWORD *)a2 + 34);
  if ( v15 )
  {
    switch ( v15 )
    {
      case 2:
        v16 = L"Mixed";
        break;
      case 4:
        v16 = L"Pure";
        break;
      case 8:
        v16 = L"System";
        break;
      default:
        __fastfail(0xC000000D);
    }
  }
  else
  {
    if ( (unsigned int)v10 > 0x38 )
    {
      v9 = 0;
      goto LABEL_6;
    }
    if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             (&ExecutionModel::ResourceSetTypeName)[v10]) )
    {
      v9 = -2147024882;
      goto LABEL_6;
    }
    if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             L"\\") )
    {
      v9 = -2147024882;
      goto LABEL_6;
    }
    v16 = L"Legacy";
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           v16) )
    goto LABEL_75;
  if ( phkResult )
    RegCloseKey(phkResult);
  phkResult = 0LL;
  v17 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, lpSubKey[0], 0, 0LL, 0, 0xF003Fu, 0LL, &phkResult, 0LL);
  if ( v17 )
  {
    if ( v17 > 0 )
      v9 = (unsigned __int16)v17 | 0x80070000;
    else
      v9 = v17;
    goto LABEL_6;
  }
  if ( (unsigned int)(v10 - 5) > 4 )
  {
    v18 = (__int64 *)L"Generic";
  }
  else
  {
    if ( (unsigned int)v10 > 0x38 )
    {
      v9 = 0;
      goto LABEL_6;
    }
    v18 = (__int64 *)(&ExecutionModel::ResourceSetTypeName)[v10];
  }
  if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
          (__int64)lpValueName,
          v18) )
  {
LABEL_75:
    v9 = -2147024882;
    goto LABEL_6;
  }
  cbData = 8;
  if ( !RegQueryValueExW(phkResult, lpValueName[0], 0LL, &Type, v36, &cbData) && Type == 11 && cbData == 8 )
  {
    Amount = *(_QWORD *)v36;
  }
  else
  {
    Amount = ExecutionModel::_ResourceSetInfo::GetAmount(v8, 1LL);
    *(_QWORD *)v36 = Amount;
  }
  v20 = *((double *)this + 9);
  v21 = (double)(int)v14;
  if ( (__int64)v14 < 0 )
    v21 = v21 + 1.844674407370955e19;
  v22 = (1.0 - v20) * v21;
  v23 = (double)(int)Amount;
  if ( Amount < 0 )
    v23 = v23 + 1.844674407370955e19;
  v24 = 0LL;
  v25 = v22 + v23 * v20;
  if ( v25 >= 9.223372036854776e18 )
  {
    v25 = v25 - 9.223372036854776e18;
    if ( v25 < 9.223372036854776e18 )
      v24 = 0x8000000000000000uLL;
  }
  *(_QWORD *)v37 = (v24 + 4095 + (unsigned int)(int)v25) & 0xFFFFFFFFFFFFF000uLL;
  v26 = RegSetValueExW(phkResult, lpValueName[0], 0, 0xBu, v37, 8u);
  if ( v26 )
  {
    if ( v26 > 0 )
      v9 = (unsigned __int16)v26 | 0x80070000;
    else
      v9 = v26;
  }
  else if ( a3 )
  {
    *a3 = *(_QWORD *)v37;
  }
LABEL_6:
  if ( hKey )
    RegCloseKey(hKey);
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( v8 )
    operator delete(v8);
  if ( lpValueName[0] != v39 )
    operator delete((void *)lpValueName[0]);
  if ( lpSubKey[0] != v34 )
    operator delete((void *)lpSubKey[0]);
  return v9;
}

/*
 * XREFs of ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000F6F0
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x1800101DC (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 * Callees:
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x18000DDEC (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x18000EAC0 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180012860 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     RmpActivityHostQueryCommit @ 0x180015DC0 (RmpActivityHostQueryCommit.c)
 *     ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x180023A44 (--$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV-$auto_x.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?HasMemoryUsageHistory@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x18003CE10 (-HasMemoryUsageHistory@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18003EAA8 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     RmpGetEstimationKeyFromPsmKey @ 0x18003ED9C (RmpGetEstimationKeyFromPsmKey.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::UpdateMemoryUsageEstimates(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2,
        unsigned __int64 *a3)
{
  __int64 v3; // r14
  ExecutionModel::ResourceManager *v4; // rsi
  __int64 v7; // rax
  __int64 (__fastcall *v8)(ExecutionModel::ResourceSet *, struct ExecutionModel::_ResourceSetInfo **); // rdi
  int ResourceSetInfo; // eax
  signed int v10; // edi
  _WORD *v11; // r10
  __int64 v12; // r13
  char HasMemoryUsageHistory; // al
  const wchar_t *v15; // r10
  const WCHAR *v16; // rbx
  HKEY *phkResult; // rax
  LSTATUS Key; // eax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rcx
  wchar_t *v24; // rcx
  int v25; // eax
  const wchar_t *v26; // rdx
  const WCHAR *v27; // rbx
  HKEY *v28; // rax
  LSTATUS v29; // eax
  const wchar_t *v30; // rdx
  __int64 v31; // rcx
  double v32; // xmm3_8
  double v33; // xmm1_8
  double v34; // xmm0_8
  double v35; // xmm1_8
  unsigned __int64 v36; // rcx
  double v37; // xmm0_8
  LSTATUS v38; // eax
  DWORD cbData; // [rsp+50h] [rbp-B0h] BYREF
  void *Block; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  DWORD Type; // [rsp+68h] [rbp-98h] BYREF
  BYTE Data[4]; // [rsp+6Ch] [rbp-94h] BYREF
  HKEY v44; // [rsp+70h] [rbp-90h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+78h] [rbp-88h] BYREF
  _WORD v46[8]; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v47; // [rsp+98h] [rbp-68h] BYREF
  HKEY hKey; // [rsp+A0h] [rbp-60h] BYREF
  BYTE v49[8]; // [rsp+A8h] [rbp-58h] BYREF
  BYTE v50[8]; // [rsp+B0h] [rbp-50h] BYREF
  LPCWSTR lpValueName[2]; // [rsp+B8h] [rbp-48h] BYREF
  _WORD v52[8]; // [rsp+C8h] [rbp-38h] BYREF
  ExecutionModel::ResourceManager *v53; // [rsp+D8h] [rbp-28h]
  wchar_t Destination[232]; // [rsp+E0h] [rbp-20h] BYREF

  v3 = 0LL;
  v53 = this;
  v46[0] = 0;
  lpSubKey[0] = v46;
  v4 = this;
  v52[0] = 0;
  lpSubKey[1] = v46;
  Block = 0LL;
  lpValueName[0] = v52;
  v44 = 0LL;
  lpValueName[1] = v52;
  hKey = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( a3 )
    *a3 = 0LL;
  if ( Block )
    operator delete(Block);
  v7 = *((_QWORD *)a2 + 171);
  Block = 0LL;
  v8 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, struct ExecutionModel::_ResourceSetInfo **))(v7 + 56);
  if ( v8 == ExecutionModel::ResourceSet::GetResourceSetInfo )
    ResourceSetInfo = ExecutionModel::ResourceSet::GetResourceSetInfo(
                        (struct ExecutionModel::ResourceSet *)((char *)a2 + 1368),
                        (struct ExecutionModel::_ResourceSetInfo **)&Block);
  else
    ResourceSetInfo = v8(
                        (struct ExecutionModel::ResourceSet *)((char *)a2 + 1368),
                        (struct ExecutionModel::_ResourceSetInfo **)&Block);
  v10 = ResourceSetInfo;
  if ( ResourceSetInfo < 0 )
    goto LABEL_12;
  v11 = (_WORD *)*((_QWORD *)a2 + 4);
  v12 = *(int *)Block;
  if ( !v11
    || !*v11
    || (*((_DWORD *)Block + 89) & 0x40000) == 0
    || !*((_QWORD *)Block + 13)
    || (HasMemoryUsageHistory = ExecutionModel::ResourceSetType::HasMemoryUsageHistory((unsigned int)v12),
        !HasMemoryUsageHistory || wcsnlen(v15, 0xE7uLL) == 231 || !*((_QWORD *)Block + 13)) )
  {
    v10 = 0;
    goto LABEL_12;
  }
  if ( !ExecutionModel::ResourceSet::IsLegacy(a2) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)a2 + 175) + 600LL);
    if ( !v3 )
      __fastfail(0xC0000034);
    if ( *(_QWORD *)(v3 + 40) > 1uLL )
    {
      v10 = 0;
      goto LABEL_12;
    }
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                           lpSubKey,
                           *((_QWORD *)v4 + 4)) )
  {
    v10 = -2147024882;
    goto LABEL_12;
  }
  v16 = lpSubKey[0];
  phkResult = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&hKey);
  Key = RegCreateKeyExW(HKEY_LOCAL_MACHINE, v16, 0, 0LL, 0, 0xF003Fu, 0LL, phkResult, 0LL);
  v10 = Key;
  if ( Key )
  {
    if ( Key > 0 )
      v10 = (unsigned __int16)Key | 0x80070000;
    if ( v10 < 0 )
      goto LABEL_12;
  }
  cbData = 4;
  if ( !RegQueryValueExW(hKey, L"EstimationEnabled", 0LL, &Type, Data, &cbData) && Type == 4 && cbData == 4 )
  {
    if ( *(_DWORD *)Data == 1 )
      goto LABEL_47;
    if ( !*(_DWORD *)Data )
    {
      v10 = 0;
      goto LABEL_12;
    }
  }
  *(_DWORD *)Data = 1;
LABEL_47:
  if ( ExecutionModel::ResourceSet::IsLegacy(a2) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)v4 + 14) + 48LL))(
            *((_QWORD *)v4 + 14),
            *((unsigned int *)a2 + 460),
            &v41);
    if ( v10 < 0 )
    {
      v10 = 0;
      goto LABEL_12;
    }
    v19 = v41;
  }
  else
  {
    v20 = *(_QWORD *)(v3 + 56);
    v21 = *((_QWORD *)v4 + 15);
    v22 = *((_QWORD *)a2 + 4);
    v41 = v20;
    if ( (*(int (__fastcall **)(__int64, __int64, char *, _QWORD, _DWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)v21 + 40LL))(
           v21,
           v22,
           (char *)a2 + 64,
           *((unsigned int *)a2 + 33),
           *((_DWORD *)a2 + 34),
           *((_QWORD *)a2 + 18),
           &v47) >= 0 )
    {
      v23 = v41;
      if ( v41 <= v47 )
        v23 = v47;
      v41 = v23;
    }
    RmpActivityHostQueryCommit(*((_QWORD *)a2 + 175), 0LL, &v47);
    v19 = v41;
    v4 = v53;
    if ( v41 <= v47 )
      v19 = v47;
    v10 = 0;
    v41 = v19;
  }
  v24 = (wchar_t *)*((_QWORD *)a2 + 4);
  if ( v19 > *((_QWORD *)Block + 7) )
    v19 = *((_QWORD *)Block + 7);
  v41 = v19;
  RmpGetEstimationKeyFromPsmKey(v24, Destination);
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           L"\\") )
  {
    v10 = -2147024882;
    goto LABEL_12;
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           Destination) )
  {
    v10 = -2147024882;
    goto LABEL_12;
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           L"\\") )
  {
    v10 = -2147024882;
    goto LABEL_12;
  }
  v25 = *((_DWORD *)a2 + 34);
  if ( v25 )
  {
    switch ( v25 )
    {
      case 2:
        v26 = L"Mixed";
        break;
      case 4:
        v26 = L"Pure";
        break;
      case 8:
        v26 = L"System";
        break;
      default:
        __fastfail(0xC000000D);
    }
  }
  else
  {
    if ( (unsigned int)v12 > 0x38 )
    {
      v10 = 0;
      goto LABEL_12;
    }
    if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             (&ExecutionModel::ResourceSetTypeName)[v12]) )
    {
      v10 = -2147024882;
      goto LABEL_12;
    }
    if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             L"\\") )
    {
      v10 = -2147024882;
      goto LABEL_12;
    }
    v26 = L"Legacy";
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           v26) )
    goto LABEL_85;
  v27 = lpSubKey[0];
  v28 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v44);
  v29 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, v27, 0, 0LL, 0, 0xF003Fu, 0LL, v28, 0LL);
  if ( v29 )
  {
    if ( v29 > 0 )
      v10 = (unsigned __int16)v29 | 0x80070000;
    else
      v10 = v29;
    goto LABEL_12;
  }
  if ( (unsigned int)(v12 - 5) > 4 )
  {
    v30 = L"Generic";
  }
  else
  {
    if ( (unsigned int)v12 > 0x38 )
    {
      v10 = 0;
      goto LABEL_12;
    }
    v30 = (const wchar_t *)(&ExecutionModel::ResourceSetTypeName)[v12];
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                           lpValueName,
                           v30) )
  {
LABEL_85:
    v10 = -2147024882;
    goto LABEL_12;
  }
  cbData = 8;
  if ( !RegQueryValueExW(v44, lpValueName[0], 0LL, &Type, v50, &cbData) && Type == 11 && cbData == 8 )
  {
    v31 = *(_QWORD *)v50;
  }
  else
  {
    v31 = *((_QWORD *)Block + 13);
    *(_QWORD *)v50 = v31;
  }
  v32 = *((double *)v4 + 11);
  v33 = (double)(int)v41;
  if ( v41 < 0 )
    v33 = v33 + 1.844674407370955e19;
  v34 = (1.0 - v32) * v33;
  v35 = (double)(int)v31;
  if ( v31 < 0 )
    v35 = v35 + 1.844674407370955e19;
  v36 = 0LL;
  v37 = v34 + v35 * v32;
  if ( v37 >= 9.223372036854776e18 )
  {
    v37 = v37 - 9.223372036854776e18;
    if ( v37 < 9.223372036854776e18 )
      v36 = 0x8000000000000000uLL;
  }
  *(_QWORD *)v49 = (v36 + 4095 + (unsigned int)(int)v37) & 0xFFFFFFFFFFFFF000uLL;
  v38 = RegSetValueExW(v44, lpValueName[0], 0, 0xBu, v49, 8u);
  if ( v38 )
  {
    if ( v38 > 0 )
      v10 = (unsigned __int16)v38 | 0x80070000;
    else
      v10 = v38;
  }
  else if ( a3 )
  {
    *a3 = *(_QWORD *)v49;
  }
LABEL_12:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( hKey )
    RegCloseKey(hKey);
  if ( v44 )
    RegCloseKey(v44);
  if ( Block )
    operator delete(Block);
  if ( lpValueName[0] != v52 )
    operator delete((void *)lpValueName[0]);
  if ( lpSubKey[0] != v46 )
    operator delete((void *)lpSubKey[0]);
  return (unsigned int)v10;
}

/*
 * XREFs of ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000EBB0
 * Callers:
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18000F710 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011700 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     RmpActivityHostQueryCommit @ 0x18000AFD0 (RmpActivityHostQueryCommit.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18000DAA0 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?ResourceSetUsesEstimation@ResourceManager@ExecutionModel@@QEBA_NPEBU_ResourceSetInfo@2@PEBG@Z @ 0x180010690 (-ResourceSetUsesEstimation@ResourceManager@ExecutionModel@@QEBA_NPEBU_ResourceSetInfo@2@PEBG@Z.c)
 *     ?GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z @ 0x1800106FC (-GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z.c)
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x180012800 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x18001C084 (--$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV-$auto_x.c)
 *     ??3@YAXPEAX@Z @ 0x18001FB04 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     RmpGetEstimationKeyFromPsmKey @ 0x18002A088 (RmpGetEstimationKeyFromPsmKey.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18002D588 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     RmpActivityHostGetResourceSetCount @ 0x18002F230 (RmpActivityHostGetResourceSetCount.c)
 *     RmpSystemQueryActivityHostPeakPrivateCommit @ 0x180037B8C (RmpSystemQueryActivityHostPeakPrivateCommit.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::UpdateMemoryUsageEstimates(
        __int64 **this,
        struct ExecutionModel::ResourceSet *a2,
        unsigned __int64 *a3)
{
  ExecutionModel::ResourceSet *v6; // rcx
  __int64 (__fastcall *v7)(ExecutionModel::ResourceSet *__hidden, struct ExecutionModel::_ResourceSetInfo **); // rax
  int ResourceSetInfo; // eax
  ExecutionModel::ResourceManager *v9; // rcx
  signed int v10; // edi
  __int64 v11; // r15
  __int64 v13; // r12
  const WCHAR *v14; // rbx
  HKEY *phkResult; // rax
  LSTATUS Key; // eax
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // eax
  wchar_t *v20; // rcx
  int v21; // eax
  const wchar_t *v22; // rdx
  const WCHAR *v23; // rbx
  HKEY *v24; // rax
  LSTATUS v25; // eax
  __int64 *v26; // rdx
  __int64 Amount; // rax
  double v28; // xmm3_8
  double v29; // xmm1_8
  double v30; // xmm0_8
  double v31; // xmm1_8
  unsigned __int64 v32; // rcx
  double v33; // xmm0_8
  LSTATUS v34; // eax
  DWORD cbData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  void *Block; // [rsp+60h] [rbp-A0h] BYREF
  DWORD Type; // [rsp+68h] [rbp-98h] BYREF
  BYTE Data[4]; // [rsp+6Ch] [rbp-94h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-90h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+78h] [rbp-88h] BYREF
  _WORD v42[8]; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v43; // [rsp+98h] [rbp-68h] BYREF
  HKEY v44; // [rsp+A0h] [rbp-60h] BYREF
  BYTE v45[8]; // [rsp+A8h] [rbp-58h] BYREF
  BYTE v46[8]; // [rsp+B0h] [rbp-50h] BYREF
  LPCWSTR lpValueName[2]; // [rsp+B8h] [rbp-48h] BYREF
  _WORD v48[12]; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t Destination[232]; // [rsp+E0h] [rbp-20h] BYREF

  lpSubKey[0] = v42;
  v42[0] = 0;
  lpSubKey[1] = v42;
  v48[0] = 0;
  lpValueName[0] = v48;
  Block = 0LL;
  lpValueName[1] = v48;
  hKey = 0LL;
  v44 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( a3 )
    *a3 = 0LL;
  if ( Block )
    operator delete(Block);
  Block = 0LL;
  v6 = (struct ExecutionModel::ResourceSet *)((char *)a2 + 1368);
  v7 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *__hidden, struct ExecutionModel::_ResourceSetInfo **))(*((_QWORD *)a2 + 171) + 48LL);
  if ( v7 == ExecutionModel::ResourceSet::GetResourceSetInfo )
    ResourceSetInfo = ExecutionModel::ResourceSet::GetResourceSetInfo(
                        v6,
                        (struct ExecutionModel::_ResourceSetInfo **)&Block);
  else
    ResourceSetInfo = v7(v6, (struct ExecutionModel::_ResourceSetInfo **)&Block);
  v10 = ResourceSetInfo;
  if ( ResourceSetInfo < 0 )
    goto LABEL_10;
  v11 = *(int *)Block;
  if ( !ExecutionModel::ResourceManager::ResourceSetUsesEstimation(
          v9,
          (const struct ExecutionModel::_ResourceSetInfo *)Block,
          *((const unsigned __int16 **)a2 + 4))
    || !ExecutionModel::_ResourceSetInfo::GetAmount(Block, 1LL)
    || (v13 = *((_QWORD *)a2 + 175)) != 0
    && (unsigned int)RmpActivityHostGetResourceSetCount(*((_QWORD *)a2 + 175), 2LL) > 1 )
  {
    v10 = 0;
    goto LABEL_10;
  }
  if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
          (__int64)lpSubKey,
          this[4]) )
  {
    v10 = -2147024882;
    goto LABEL_10;
  }
  v14 = lpSubKey[0];
  phkResult = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v44);
  Key = RegCreateKeyExW(HKEY_LOCAL_MACHINE, v14, 0, 0LL, 0, 0xF003Fu, 0LL, phkResult, 0LL);
  v10 = Key;
  if ( Key )
  {
    if ( Key > 0 )
      v10 = (unsigned __int16)Key | 0x80070000;
    if ( v10 < 0 )
      goto LABEL_10;
  }
  cbData = 4;
  if ( !RegQueryValueExW(v44, L"EstimationEnabled", 0LL, &Type, Data, &cbData) && Type == 4 && cbData == 4 )
  {
    if ( *(_DWORD *)Data == 1 )
      goto LABEL_38;
    if ( !*(_DWORD *)Data )
    {
      v10 = 0;
      goto LABEL_10;
    }
  }
  *(_DWORD *)Data = 1;
LABEL_38:
  if ( *((_DWORD *)a2 + 34) )
  {
    v36 = *(_QWORD *)(v13 + 976);
    if ( (int)RmpSystemQueryActivityHostPeakPrivateCommit(v13, &v43) >= 0 )
    {
      v18 = v36;
      if ( v36 <= v43 )
        v18 = v43;
      v36 = v18;
    }
    v19 = RmpActivityHostQueryCommit(v13, 0LL, &v43);
    v17 = v36;
    if ( v19 >= 0 )
    {
      if ( v36 <= v43 )
        v17 = v43;
      v36 = v17;
    }
    v10 = 0;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD, __int64 *))(*this[3] + 48))(
            this[3],
            this[28],
            *((unsigned int *)a2 + 460),
            &v36);
    if ( v10 < 0 )
    {
      v10 = 0;
      goto LABEL_10;
    }
    v17 = v36;
  }
  v20 = (wchar_t *)*((_QWORD *)a2 + 4);
  if ( v17 > *((_QWORD *)Block + 9) )
    v17 = *((_QWORD *)Block + 9);
  v36 = v17;
  RmpGetEstimationKeyFromPsmKey(v20, Destination);
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           L"\\") )
  {
    v10 = -2147024882;
    goto LABEL_10;
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           Destination) )
  {
    v10 = -2147024882;
    goto LABEL_10;
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           L"\\") )
  {
    v10 = -2147024882;
    goto LABEL_10;
  }
  v21 = *((_DWORD *)a2 + 34);
  if ( v21 )
  {
    switch ( v21 )
    {
      case 2:
        v22 = L"Mixed";
        break;
      case 4:
        v22 = L"Pure";
        break;
      case 8:
        v22 = L"System";
        break;
      default:
        __fastfail(0xC000000D);
    }
  }
  else
  {
    if ( (unsigned int)v11 > 0x38 )
    {
      v10 = 0;
      goto LABEL_10;
    }
    if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             (&ExecutionModel::ResourceSetTypeName)[v11]) )
    {
      v10 = -2147024882;
      goto LABEL_10;
    }
    if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             L"\\") )
    {
      v10 = -2147024882;
      goto LABEL_10;
    }
    v22 = L"Legacy";
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           v22) )
    goto LABEL_78;
  v23 = lpSubKey[0];
  v24 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&hKey);
  v25 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, v23, 0, 0LL, 0, 0xF003Fu, 0LL, v24, 0LL);
  if ( v25 )
  {
    if ( v25 > 0 )
      v10 = (unsigned __int16)v25 | 0x80070000;
    else
      v10 = v25;
    goto LABEL_10;
  }
  if ( (unsigned int)(v11 - 5) > 4 )
  {
    v26 = (__int64 *)L"Generic";
  }
  else
  {
    if ( (unsigned int)v11 > 0x38 )
    {
      v10 = 0;
      goto LABEL_10;
    }
    v26 = (__int64 *)(&ExecutionModel::ResourceSetTypeName)[v11];
  }
  if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
          (__int64)lpValueName,
          v26) )
  {
LABEL_78:
    v10 = -2147024882;
    goto LABEL_10;
  }
  cbData = 8;
  if ( !RegQueryValueExW(hKey, lpValueName[0], 0LL, &Type, v45, &cbData) && Type == 11 && cbData == 8 )
  {
    Amount = *(_QWORD *)v45;
  }
  else
  {
    Amount = ExecutionModel::_ResourceSetInfo::GetAmount(Block, 1LL);
    *(_QWORD *)v45 = Amount;
  }
  v28 = *((double *)this + 11);
  v29 = (double)(int)v36;
  if ( v36 < 0 )
    v29 = v29 + 1.844674407370955e19;
  v30 = (1.0 - v28) * v29;
  v31 = (double)(int)Amount;
  if ( Amount < 0 )
    v31 = v31 + 1.844674407370955e19;
  v32 = 0LL;
  v33 = v30 + v31 * v28;
  if ( v33 >= 9.223372036854776e18 )
  {
    v33 = v33 - 9.223372036854776e18;
    if ( v33 < 9.223372036854776e18 )
      v32 = 0x8000000000000000uLL;
  }
  *(_QWORD *)v46 = (v32 + 4095 + (unsigned int)(int)v33) & 0xFFFFFFFFFFFFF000uLL;
  v34 = RegSetValueExW(hKey, lpValueName[0], 0, 0xBu, v46, 8u);
  if ( v34 )
  {
    if ( v34 > 0 )
      v10 = (unsigned __int16)v34 | 0x80070000;
    else
      v10 = v34;
  }
  else if ( a3 )
  {
    *a3 = *(_QWORD *)v46;
  }
LABEL_10:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v44 )
    RegCloseKey(v44);
  if ( hKey )
    RegCloseKey(hKey);
  if ( Block )
    operator delete(Block);
  if ( lpValueName[0] != v48 )
    operator delete((void *)lpValueName[0]);
  if ( lpSubKey[0] != v42 )
    operator delete((void *)lpSubKey[0]);
  return (unsigned int)v10;
}

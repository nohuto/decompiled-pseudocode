/*
 * XREFs of ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x180011440
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x180011B24 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 * Callees:
 *     ?GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z @ 0x18000AE04 (-GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z.c)
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x180010910 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180016A90 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x180020288 (--$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV-$auto_x.c)
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x180023A90 (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?HasMemoryUsageHistory@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x1800363AC (-HasMemoryUsageHistory@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180039668 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180039690 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?replace@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_N_K00G@Z @ 0x180039808 (-replace@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_N_K00G@Z.c)
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
  _WORD *v11; // rax
  __int64 v12; // r13
  char HasMemoryUsageHistory; // al
  __int64 v15; // r10
  unsigned __int64 v16; // rdx
  const WCHAR *v17; // rbx
  HKEY *phkResult; // rax
  LSTATUS Key; // eax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  char *v30; // r8
  unsigned __int64 v31; // rax
  char *v32; // rbx
  int v33; // eax
  const wchar_t *v34; // rdx
  const WCHAR *v35; // rbx
  HKEY *v36; // rax
  LSTATUS v37; // eax
  const wchar_t *v38; // rdx
  __int64 Amount; // rax
  double v40; // xmm3_8
  double v41; // xmm1_8
  double v42; // xmm0_8
  double v43; // xmm1_8
  unsigned __int64 v44; // rcx
  double v45; // xmm0_8
  LSTATUS v46; // eax
  void *Block; // [rsp+50h] [rbp-89h] BYREF
  __int64 v48; // [rsp+58h] [rbp-81h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-79h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+68h] [rbp-71h] BYREF
  _WORD v51[8]; // [rsp+78h] [rbp-61h] BYREF
  HKEY v52; // [rsp+88h] [rbp-51h] BYREF
  void *v53; // [rsp+90h] [rbp-49h] BYREF
  char *v54; // [rsp+98h] [rbp-41h]
  _WORD v55[8]; // [rsp+A0h] [rbp-39h] BYREF
  BYTE v56[8]; // [rsp+B0h] [rbp-29h] BYREF
  BYTE v57[8]; // [rsp+B8h] [rbp-21h] BYREF
  LPCWSTR lpValueName[2]; // [rsp+C0h] [rbp-19h] BYREF
  _WORD v59[8]; // [rsp+D0h] [rbp-9h] BYREF
  unsigned __int64 v60[3]; // [rsp+E0h] [rbp+7h] BYREF
  DWORD cbData; // [rsp+148h] [rbp+6Fh] BYREF
  DWORD Type; // [rsp+150h] [rbp+77h] BYREF
  int Data; // [rsp+158h] [rbp+7Fh] BYREF

  v3 = 0LL;
  lpSubKey[0] = v51;
  v4 = this;
  v51[0] = 0;
  lpSubKey[1] = v51;
  v59[0] = 0;
  lpValueName[0] = v59;
  Block = 0LL;
  lpValueName[1] = v59;
  hKey = 0LL;
  v53 = v55;
  v54 = (char *)v55;
  v52 = 0LL;
  v55[0] = 0;
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
    || (*((_DWORD *)Block + 87) & 0x40000) == 0
    || !*((_QWORD *)Block + 12)
    || (HasMemoryUsageHistory = ExecutionModel::ResourceSetType::HasMemoryUsageHistory((unsigned int)v12),
        !HasMemoryUsageHistory || !ExecutionModel::_ResourceSetInfo::GetAmount(v15, 1)) )
  {
    v10 = 0;
    goto LABEL_12;
  }
  if ( !ExecutionModel::ResourceSet::IsLegacy(a2) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)a2 + 175) + 600LL);
    if ( !v3 )
      __fastfail(0xC0000034);
    if ( *(_QWORD *)(v3 + 40) > v16 )
    {
      v10 = 0;
      goto LABEL_12;
    }
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                           lpSubKey,
                           L"System\\ResourceManager\\MemoryHistory") )
  {
    v10 = -2147024882;
    goto LABEL_12;
  }
  v17 = lpSubKey[0];
  phkResult = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v52);
  Key = RegCreateKeyExW(HKEY_LOCAL_MACHINE, v17, 0, 0LL, 0, 0xF003Fu, 0LL, phkResult, 0LL);
  v10 = Key;
  if ( Key )
  {
    if ( Key > 0 )
      v10 = (unsigned __int16)Key | 0x80070000;
    if ( v10 < 0 )
      goto LABEL_12;
  }
  cbData = 4;
  if ( !RegQueryValueExW(v52, L"EstimationEnabled", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 && cbData == 4 )
  {
    if ( Data == 1 )
      goto LABEL_48;
    if ( !Data )
    {
      v10 = 0;
      goto LABEL_12;
    }
  }
  Data = 1;
LABEL_48:
  if ( ExecutionModel::ResourceSet::IsLegacy(a2) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)v4 + 14) + 48LL))(
            *((_QWORD *)v4 + 14),
            *((unsigned int *)a2 + 458),
            &v48);
    if ( v10 < 0 )
    {
      v10 = 0;
      goto LABEL_12;
    }
    v20 = v48;
  }
  else
  {
    v21 = *(_QWORD *)(v3 + 80);
    v22 = *((_QWORD *)v4 + 15);
    v23 = *((_QWORD *)a2 + 4);
    v48 = v21;
    v24 = (*(__int64 (__fastcall **)(__int64, __int64, char *, _QWORD, _DWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)v22 + 40LL))(
            v22,
            v23,
            (char *)a2 + 64,
            *((unsigned int *)a2 + 33),
            *((_DWORD *)a2 + 34),
            *((_QWORD *)a2 + 18),
            v60);
    v20 = v48;
    if ( v24 >= 0 )
    {
      if ( v48 <= v60[0] )
        v20 = v60[0];
      v48 = v20;
    }
    v4 = this;
    v10 = 0;
  }
  v25 = *((_QWORD *)a2 + 5);
  if ( v20 > *((_QWORD *)Block + 6) )
    v20 = *((_QWORD *)Block + 6);
  v48 = v20;
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
    &v53,
    *((_QWORD *)a2 + 4),
    (v25 - *((_QWORD *)a2 + 4)) >> 1);
  if ( (v54 - (_BYTE *)v53) >> 1 )
  {
    v26 = 0LL;
    while ( *((_WORD *)v53 + v26) != 92 )
    {
      if ( ++v26 == (v54 - (_BYTE *)v53) >> 1 )
        goto LABEL_63;
    }
    if ( !((char *)v53 + 2 * v26) )
    {
LABEL_63:
      v27 = -1LL;
      goto LABEL_64;
    }
    v27 = (2 * v26) >> 1;
LABEL_64:
    while ( v27 != -1LL )
    {
      utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::replace(
        &v53,
        v27);
      v28 = (v54 - (_BYTE *)v53) >> 1;
      if ( v28 <= v27 )
        break;
      v29 = 0LL;
      v30 = (char *)v53 + 2 * v27;
      v31 = v28 - v27;
      if ( !v31 )
        goto LABEL_69;
      while ( *(_WORD *)&v30[2 * v29] != 92 )
      {
        if ( ++v29 == v31 )
          goto LABEL_69;
      }
      v32 = &v30[2 * v29];
      if ( v32 )
        v27 = (v32 - (_BYTE *)v53) >> 1;
      else
LABEL_69:
        v27 = -1LL;
    }
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           L"\\") )
  {
    v10 = -2147024882;
    goto LABEL_12;
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           v53,
                           (v54 - (_BYTE *)v53) >> 1) )
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
  v33 = *((_DWORD *)a2 + 34);
  if ( v33 )
  {
    switch ( v33 )
    {
      case 2:
        v34 = L"Mixed";
        break;
      case 4:
        v34 = L"Pure";
        break;
      case 8:
        v34 = L"System";
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
    v34 = L"Legacy";
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                           lpSubKey,
                           v34) )
    goto LABEL_100;
  v35 = lpSubKey[0];
  v36 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&hKey);
  v37 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, v35, 0, 0LL, 0, 0xF003Fu, 0LL, v36, 0LL);
  if ( v37 )
  {
    if ( v37 > 0 )
      v10 = (unsigned __int16)v37 | 0x80070000;
    else
      v10 = v37;
    goto LABEL_12;
  }
  if ( (unsigned int)(v12 - 5) > 4 )
  {
    v38 = L"Generic";
  }
  else
  {
    if ( (unsigned int)v12 > 0x38 )
    {
      v10 = 0;
      goto LABEL_12;
    }
    v38 = (const wchar_t *)(&ExecutionModel::ResourceSetTypeName)[v12];
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                           lpValueName,
                           v38) )
  {
LABEL_100:
    v10 = -2147024882;
    goto LABEL_12;
  }
  cbData = 8;
  if ( !RegQueryValueExW(hKey, lpValueName[0], 0LL, &Type, v56, &cbData) && Type == 11 && cbData == 8 )
  {
    Amount = *(_QWORD *)v56;
  }
  else
  {
    Amount = ExecutionModel::_ResourceSetInfo::GetAmount((__int64)Block, 1);
    *(_QWORD *)v56 = Amount;
  }
  v40 = *((double *)v4 + 11);
  v41 = (double)(int)v48;
  if ( v48 < 0 )
    v41 = v41 + 1.844674407370955e19;
  v42 = (1.0 - v40) * v41;
  v43 = (double)(int)Amount;
  if ( Amount < 0 )
    v43 = v43 + 1.844674407370955e19;
  v44 = 0LL;
  v45 = v42 + v43 * v40;
  if ( v45 >= 9.223372036854776e18 )
  {
    v45 = v45 - 9.223372036854776e18;
    if ( v45 < 9.223372036854776e18 )
      v44 = 0x8000000000000000uLL;
  }
  *(_QWORD *)v57 = (v44 + 4095 + (unsigned int)(int)v45) & 0xFFFFFFFFFFFFF000uLL;
  v46 = RegSetValueExW(hKey, lpValueName[0], 0, 0xBu, v57, 8u);
  if ( v46 )
  {
    if ( v46 > 0 )
      v10 = (unsigned __int16)v46 | 0x80070000;
    else
      v10 = v46;
  }
  else if ( a3 )
  {
    *a3 = *(_QWORD *)v57;
  }
LABEL_12:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v53 != v55 )
    operator delete(v53);
  if ( v52 )
    RegCloseKey(v52);
  if ( hKey )
    RegCloseKey(hKey);
  if ( Block )
    operator delete(Block);
  if ( lpValueName[0] != v59 )
    operator delete((void *)lpValueName[0]);
  if ( lpSubKey[0] != v51 )
    operator delete((void *)lpSubKey[0]);
  return (unsigned int)v10;
}

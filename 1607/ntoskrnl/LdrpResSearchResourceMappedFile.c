/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x1400F5198
 * Callers:
 *     LdrResSearchResource @ 0x1404FE548 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x1405434E0 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpFindMessageInAlternateModule @ 0x1400F7F58 (LdrpFindMessageInAlternateModule.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1400F8494 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrIsResItemExist @ 0x1400F869C (LdrIsResItemExist.c)
 *     DownLevelLangIDToLanguageName @ 0x140132934 (DownLevelLangIDToLanguageName.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     LdrpResGetResourceDirectory @ 0x1404FE824 (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x1404FEBB4 (LdrpResGetMappingSize.c)
 *     LdrResFallbackLangList @ 0x1404FF484 (LdrResFallbackLangList.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x14051E630 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResGetRCConfig @ 0x1405434E0 (LdrResGetRCConfig.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        ULONGLONG ullAugend,
        ULONGLONG a2,
        __int16 a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        __int64 *a7,
        void *a8,
        __int64 a9)
{
  __int16 v10; // bx
  char v12; // cl
  unsigned __int16 v13; // r14
  int v14; // esi
  int v15; // edi
  int v16; // eax
  int v17; // edx
  int MappingSize; // edi
  unsigned int v19; // r15d
  int v20; // ecx
  unsigned int i; // r14d
  char v22; // r13
  __int64 v23; // rdx
  __int64 v24; // r9
  ULONGLONG v25; // r8
  PVOID v26; // rcx
  int v27; // eax
  _DWORD *v28; // r14
  __int64 result; // rax
  __int16 v30; // dx
  int RCConfig; // eax
  NTSTATUS v32; // eax
  ULONGLONG v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rsi
  _WORD *v36; // r15
  LANGID v37; // [rsp+70h] [rbp-388h]
  bool v38; // [rsp+74h] [rbp-384h]
  int v39; // [rsp+78h] [rbp-380h]
  PVOID ResourceDllBase; // [rsp+80h] [rbp-378h] BYREF
  ULONG_PTR ResourceOffset; // [rsp+88h] [rbp-370h] BYREF
  int v42; // [rsp+90h] [rbp-368h]
  ULONGLONG Size; // [rsp+98h] [rbp-360h]
  _QWORD *v44; // [rsp+A0h] [rbp-358h]
  __int64 v45; // [rsp+A8h] [rbp-350h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-348h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-340h]
  __int64 v48; // [rsp+C0h] [rbp-338h]
  PVOID DllHandle; // [rsp+C8h] [rbp-330h]
  __int64 *v50; // [rsp+D0h] [rbp-328h]
  __int64 v51; // [rsp+D8h] [rbp-320h]
  __int64 v52; // [rsp+E0h] [rbp-318h]
  void *v53; // [rsp+E8h] [rbp-310h]
  unsigned __int16 v54[2]; // [rsp+F0h] [rbp-308h] BYREF
  _WORD v55[262]; // [rsp+F4h] [rbp-304h]
  _WORD Src[88]; // [rsp+300h] [rbp-F8h] BYREF

  v10 = a3;
  Size = a2;
  DllHandle = (PVOID)ullAugend;
  v44 = a6;
  v50 = a7;
  v53 = a8;
  v52 = a9;
  ResourceDllBase = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v12 = 0;
  v38 = (a3 & 0x40) != 0;
  v13 = 0;
  v14 = 0;
  if ( (a3 & 0x80u) != 0 )
    v14 = 128;
  v15 = a5;
  if ( a5 == 3 )
  {
    v13 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v16 = wcsicmp(*(const wchar_t **)a4, L"MUI"), v12 = 1, v16) )
      v12 = 0;
  }
  if ( (v10 & 0x10) == 0 && (unsigned int)(a5 - 1) <= 2 )
  {
    if ( a5 == 3 )
      v30 = *(_WORD *)(a4 + 16);
    else
      v30 = 0;
    if ( ((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v12
      || (~(_BYTE)v10 & 8) == 0
      || (v30 & 0xF3FF) != 0
      || v30 == 3072 )
    {
      RCConfig = LdrResGetRCConfig(ullAugend, 1);
      MappingSize = RCConfig;
      if ( RCConfig < 0 )
      {
        if ( RCConfig != -1073741686 )
          return (unsigned int)MappingSize;
        v14 |= 0x80000u;
        v15 = a5;
      }
      else
      {
        v14 |= LdrIsResItemExist(ullAugend, a4, 0LL);
        v15 = a5;
      }
    }
    else
    {
      v10 |= 0x10u;
    }
  }
  if ( (v14 & 0x60000) == 0x60000 )
    return (unsigned int)-1073741686;
  v17 = ~v14;
  v54[0] = 1;
  v55[0] = 0;
  if ( ((~v14 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0 && (~v14 & 0x20000) != 0 || v15 == 3)
    && ((v10 & 0x10) == 0 || (v10 & 0x20) == 0) )
  {
    if ( (v10 & 4) != 0 )
      v14 |= 4u;
    result = LdrResFallbackLangList(1, v17, v13, v14, (__int64)v54);
    if ( (int)result < 0 && (v10 & 0x1000) != 0 )
      return result;
  }
  if ( (v10 & 0x10) != 0 || (~v14 & 0x40000) != 0 || (v14 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(ullAugend, Size, (__int64)&v45);
    if ( (int)result < 0 )
      return result;
  }
  MappingSize = 0;
  v19 = 0;
LABEL_15:
  if ( v19 >= v54[0] )
    return (unsigned int)MappingSize;
  ResourceDllBase = 0LL;
  ResourceOffset = 0LL;
  v37 = v55[4 * v19];
  v20 = *(_DWORD *)&v55[4 * v19 + 2];
  v39 = v20;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
    {
LABEL_41:
      ++v19;
      goto LABEL_15;
    }
    if ( i )
    {
      v22 = 0;
      goto LABEL_20;
    }
    if ( v20 != 9 )
      break;
    v10 |= 0x20u;
LABEL_40:
    ;
  }
  if ( (v14 & 0xA0000) != 0 || (v10 & 0x10) != 0 || !v37 || !PnPBootDriversInitialized )
    goto LABEL_39;
  v22 = 1;
  v32 = LdrLoadAlternateResourceModuleEx(DllHandle, v37, &ResourceDllBase, &ResourceOffset, v14 | 0x1000);
  MappingSize = v32;
  if ( v32 < 0 )
  {
    if ( v32 == -1073741772 || v32 == -1073741766 )
      MappingSize = -1073020927;
    goto LABEL_39;
  }
  v33 = ResourceOffset;
  if ( !ResourceOffset )
  {
    MappingSize = LdrpResGetMappingSize(ResourceDllBase, &ResourceOffset, 512LL);
    v33 = ResourceOffset;
  }
  if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
    goto LABEL_41;
  MappingSize = LdrpResGetResourceDirectory((ULONGLONG)ResourceDllBase, v33, (__int64)&v46);
  if ( MappingSize < 0 )
    goto LABEL_39;
LABEL_20:
  if ( (~(_BYTE)v10 & 2) != 0 && a5 > 2 )
    *(_QWORD *)(a4 + 16) = v37;
  v51 = 0LL;
  v23 = v45;
  if ( v22 )
    v23 = v46;
  v24 = v47;
  if ( v22 )
    v24 = v48;
  v25 = Size;
  if ( v22 )
    v25 = ResourceOffset;
  v26 = DllHandle;
  if ( v22 )
    v26 = ResourceDllBase;
  v27 = LdrpResSearchResourceInsideDirectory(v26, v23, v25, v24, v23);
  MappingSize = v27;
  if ( v38 && v27 >= 0 && v44 && v22 )
  {
    if ( v50 )
      v34 = *v50;
    else
      LODWORD(v34) = v51;
    MappingSize = LdrpFindMessageInAlternateModule((_DWORD)ResourceDllBase, *v44, v34, *(_DWORD *)(a4 + 24), 1);
    if ( MappingSize < 0 )
    {
      *v44 = 0LL;
      if ( MappingSize == -1073741701 )
        return (unsigned int)MappingSize;
    }
  }
  if ( MappingSize < 0 )
  {
LABEL_39:
    v20 = v39;
    goto LABEL_40;
  }
  v28 = (_DWORD *)v52;
  if ( !v52 )
    return (unsigned int)MappingSize;
  if ( v37 )
  {
    if ( (unsigned int)DownLevelLangIDToLanguageName(v37, Src, 86LL) )
    {
      v35 = -1LL;
      do
        ++v35;
      while ( Src[v35] );
      goto LABEL_92;
    }
    return (unsigned int)-1073741823;
  }
  else
  {
    Src[0] = 0;
    LODWORD(v35) = 0;
LABEL_92:
    if ( (unsigned int)v35 < *v28 && (v36 = v53) != 0LL )
    {
      memmove(v53, Src, 2LL * (unsigned int)v35);
      *v28 = v35 + 1;
      v36[(unsigned int)v35] = 0;
    }
    else
    {
      *v28 = v35 + 1;
      MappingSize = -1073741789;
      v42 = -1073741789;
    }
  }
  return (unsigned int)MappingSize;
}

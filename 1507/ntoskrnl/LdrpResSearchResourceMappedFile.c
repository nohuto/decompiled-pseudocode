/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x14002AB60
 * Callers:
 *     LdrResSearchResource @ 0x14046391C (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x1405807EC (LdrResGetRCConfig.c)
 * Callees:
 *     LdrLoadAlternateResourceModuleEx @ 0x14002A0FC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrIsResItemExist @ 0x14002A30C (LdrIsResItemExist.c)
 *     LdrpFindMessageInAlternateModule @ 0x14002A948 (LdrpFindMessageInAlternateModule.c)
 *     DownLevelLangIDToLanguageName @ 0x14014FD60 (DownLevelLangIDToLanguageName.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     LdrResFallbackLangList @ 0x140462860 (LdrResFallbackLangList.c)
 *     LdrpResGetMappingSize @ 0x140463BF8 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x140463D78 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x14046410C (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResGetRCConfig @ 0x1405807EC (LdrResGetRCConfig.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        ULONGLONG ullAugend,
        ULONGLONG a2,
        __int16 a3,
        __int64 a4,
        int a5,
        unsigned int **a6,
        _QWORD *a7,
        void *a8,
        __int64 a9)
{
  __int16 v10; // bx
  char v12; // cl
  unsigned __int16 v13; // r14
  int v14; // edx
  int v15; // esi
  int v16; // edi
  int v17; // eax
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
  int RCConfig; // eax
  NTSTATUS v31; // eax
  ULONGLONG v32; // rdx
  unsigned __int64 v33; // r8
  __int64 v34; // rsi
  _WORD *v35; // r15
  LANGID v36; // [rsp+70h] [rbp-388h]
  int v37; // [rsp+74h] [rbp-384h]
  bool v38; // [rsp+78h] [rbp-380h]
  PVOID ResourceDllBase; // [rsp+80h] [rbp-378h] BYREF
  ULONG_PTR ResourceOffset; // [rsp+88h] [rbp-370h] BYREF
  int v41; // [rsp+90h] [rbp-368h]
  ULONGLONG Size; // [rsp+98h] [rbp-360h]
  unsigned int **v43; // [rsp+A0h] [rbp-358h]
  __int64 v44; // [rsp+A8h] [rbp-350h] BYREF
  _QWORD *v45; // [rsp+B0h] [rbp-348h]
  __int64 v46; // [rsp+B8h] [rbp-340h]
  __int64 v47; // [rsp+C0h] [rbp-338h]
  __int64 v48; // [rsp+C8h] [rbp-330h] BYREF
  PVOID DllHandle; // [rsp+D0h] [rbp-328h]
  __int64 v50; // [rsp+D8h] [rbp-320h]
  __int64 v51; // [rsp+E0h] [rbp-318h]
  void *v52; // [rsp+E8h] [rbp-310h]
  unsigned __int16 v53[2]; // [rsp+F0h] [rbp-308h] BYREF
  _WORD v54[262]; // [rsp+F4h] [rbp-304h]
  _WORD Src[88]; // [rsp+300h] [rbp-F8h] BYREF

  v10 = a3;
  Size = a2;
  DllHandle = (PVOID)ullAugend;
  v43 = a6;
  v45 = a7;
  v52 = a8;
  v51 = a9;
  ResourceDllBase = 0LL;
  v47 = 0LL;
  v50 = 0LL;
  v44 = 0LL;
  v48 = 0LL;
  v12 = 0;
  v38 = (a3 & 0x40) != 0;
  v13 = 0;
  v14 = 128;
  v15 = 0;
  if ( (a3 & 0x80u) != 0 )
    v15 = 128;
  v16 = a5;
  if ( a5 == 3 )
  {
    v13 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v17 = wcsicmp(*(const wchar_t **)a4, L"MUI"), v12 = 1, v17) )
      v12 = 0;
  }
  if ( (v10 & 0x10) == 0 && (unsigned int)(a5 - 1) <= 2 )
  {
    if ( a5 == 3 )
      v14 = *(unsigned __int16 *)(a4 + 16);
    else
      v14 = 0;
    if ( ((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v12
      || (~(_BYTE)v10 & 8) == 0
      || (v14 & 0xF3FF) != 0
      || (_WORD)v14 == 3072 )
    {
      RCConfig = LdrResGetRCConfig(ullAugend, 1);
      MappingSize = RCConfig;
      if ( RCConfig < 0 )
      {
        if ( RCConfig != -1073741686 )
          return (unsigned int)MappingSize;
        v15 |= 0x80000u;
        v16 = a5;
      }
      else
      {
        v15 |= LdrIsResItemExist((void *)ullAugend, (_QWORD *)a4);
        v16 = a5;
      }
    }
    else
    {
      v10 |= 0x10u;
    }
  }
  if ( (v15 & 0x60000) == 0x60000 )
    return (unsigned int)-1073741686;
  LOBYTE(v14) = (~v15 & 0x20000) != 0 && (~v15 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0;
  v53[0] = 1;
  v54[0] = 0;
  if ( ((_BYTE)v14 || v16 == 3) && ((v10 & 0x10) == 0 || (v10 & 0x20) == 0) )
  {
    if ( (v10 & 4) != 0 )
      v15 |= 4u;
    result = LdrResFallbackLangList(1, v14, v13, v15, (__int64)v53);
    if ( (int)result < 0 && (v10 & 0x1000) != 0 )
      return result;
  }
  if ( (v10 & 0x10) != 0 || (~v15 & 0x40000) != 0 || (v15 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(ullAugend, Size, (__int64)&v44);
    if ( (int)result < 0 )
      return result;
  }
  MappingSize = 0;
  v19 = 0;
LABEL_15:
  if ( v19 >= v53[0] )
    return (unsigned int)MappingSize;
  ResourceDllBase = 0LL;
  ResourceOffset = 0LL;
  v36 = v54[4 * v19];
  v20 = *(_DWORD *)&v54[4 * v19 + 2];
  v37 = v20;
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
  if ( (v15 & 0xA0000) != 0 || (v10 & 0x10) != 0 || !v36 || !PnPBootDriversInitialized )
    goto LABEL_39;
  v22 = 1;
  v31 = LdrLoadAlternateResourceModuleEx(DllHandle, v36, &ResourceDllBase, &ResourceOffset, v15 | 0x1000);
  MappingSize = v31;
  if ( v31 < 0 )
  {
    if ( v31 == -1073741772 || v31 == -1073741766 )
      MappingSize = -1073020927;
    goto LABEL_39;
  }
  v32 = ResourceOffset;
  if ( !ResourceOffset )
  {
    MappingSize = LdrpResGetMappingSize(ResourceDllBase, &ResourceOffset, 512LL);
    v32 = ResourceOffset;
  }
  if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
    goto LABEL_41;
  MappingSize = LdrpResGetResourceDirectory((ULONGLONG)ResourceDllBase, v32, (__int64)&v48);
  if ( MappingSize < 0 )
    goto LABEL_39;
LABEL_20:
  if ( (~(_BYTE)v10 & 2) != 0 && a5 > 2 )
    *(_QWORD *)(a4 + 16) = v36;
  v46 = 0LL;
  v23 = v44;
  if ( v22 )
    v23 = v48;
  v24 = v47;
  if ( v22 )
    v24 = v50;
  v25 = Size;
  if ( v22 )
    v25 = ResourceOffset;
  v26 = DllHandle;
  if ( v22 )
    v26 = ResourceDllBase;
  v27 = LdrpResSearchResourceInsideDirectory(v26, v23, v25, v24, v23);
  MappingSize = v27;
  if ( v38 && v27 >= 0 && v43 && v22 )
  {
    v33 = v45 ? *v45 : v46;
    MappingSize = LdrpFindMessageInAlternateModule(ResourceDllBase, *v43, v33, *(_DWORD *)(a4 + 24), 1);
    if ( MappingSize < 0 )
    {
      *v43 = 0LL;
      if ( MappingSize == -1073741701 )
        return (unsigned int)MappingSize;
    }
  }
  if ( MappingSize < 0 )
  {
LABEL_39:
    v20 = v37;
    goto LABEL_40;
  }
  v28 = (_DWORD *)v51;
  if ( !v51 )
    return (unsigned int)MappingSize;
  if ( v36 )
  {
    if ( (unsigned int)DownLevelLangIDToLanguageName(v36, Src, 86LL) )
    {
      v34 = -1LL;
      do
        ++v34;
      while ( Src[v34] );
      goto LABEL_92;
    }
    return (unsigned int)-1073741823;
  }
  else
  {
    Src[0] = 0;
    LODWORD(v34) = 0;
LABEL_92:
    if ( (unsigned int)v34 < *v28 && (v35 = v52) != 0LL )
    {
      memmove(v52, Src, 2LL * (unsigned int)v34);
      *v28 = v34 + 1;
      v35[(unsigned int)v34] = 0;
    }
    else
    {
      *v28 = v34 + 1;
      MappingSize = -1073741789;
      v41 = -1073741789;
    }
  }
  return (unsigned int)MappingSize;
}

/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x180037A68
 * Callers:
 *     LdrResSearchResource @ 0x180039300 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x18003A810 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpFindMessageInAlternateModule @ 0x18000D970 (LdrpFindMessageInAlternateModule.c)
 *     LdrResFallbackLangList @ 0x18000FD84 (LdrResFallbackLangList.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AA0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResGetResourceDirectory @ 0x1800376B0 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800381CC (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetMappingSize @ 0x180039850 (LdrpResGetMappingSize.c)
 *     LdrResGetRCConfig @ 0x18003A810 (LdrResGetRCConfig.c)
 *     LdrIsResItemExist @ 0x18003F138 (LdrIsResItemExist.c)
 *     RtlLcidToLocaleName @ 0x180042E70 (RtlLcidToLocaleName.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1E8 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800726B0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpIsReparsePoint @ 0x180075EE4 (LdrpIsReparsePoint.c)
 *     LdrpResReportResourceAccessInternal @ 0x180082730 (LdrpResReportResourceAccessInternal.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC934 (LdrpTraceLoadMUIDll.c)
 */

int __fastcall LdrpResSearchResourceMappedFile(
        PVOID BaseOfImage,
        ULONG64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int **a6,
        __int64 *a7,
        void *a8,
        unsigned int *a9)
{
  unsigned int v10; // r15d
  PVOID v11; // rdi
  char v12; // bl
  int v13; // eax
  unsigned __int16 v14; // si
  int v15; // r14d
  int v16; // ecx
  ULONG64 v17; // rbx
  bool v18; // r13
  int MappingSize; // edi
  unsigned __int16 v20; // si
  unsigned int i; // ebx
  unsigned __int64 v22; // r8
  unsigned __int16 *v23; // r11
  int v24; // r10d
  unsigned __int64 *v25; // rax
  __int64 v26; // rdx
  int v27; // r9d
  int v28; // r8d
  int v29; // ecx
  int result; // eax
  unsigned int *v31; // rcx
  __int16 v32; // cx
  int RCConfig; // eax
  __int64 v34; // r8
  __int64 v35; // r8
  PVOID v36; // rdi
  NTSTATUS v37; // eax
  __int64 v38; // r9
  __int64 v39; // rbx
  __int64 v40; // rax
  unsigned int v41; // esi
  char v42; // [rsp+70h] [rbp-3E8h]
  char v43; // [rsp+71h] [rbp-3E7h]
  bool v44; // [rsp+72h] [rbp-3E6h]
  unsigned __int16 v45; // [rsp+74h] [rbp-3E4h] BYREF
  ULONG_PTR ResourceOffset; // [rsp+78h] [rbp-3E0h] BYREF
  PVOID ResourceDllBase; // [rsp+80h] [rbp-3D8h] BYREF
  char v48; // [rsp+88h] [rbp-3D0h]
  int v49; // [rsp+8Ch] [rbp-3CCh]
  PVOID DllHandle; // [rsp+90h] [rbp-3C8h]
  ULONG64 Size; // [rsp+98h] [rbp-3C0h]
  __int64 v52; // [rsp+A0h] [rbp-3B8h] BYREF
  unsigned __int64 v53; // [rsp+A8h] [rbp-3B0h] BYREF
  __int64 MUIFromCMFSegment; // [rsp+B0h] [rbp-3A8h]
  unsigned int **v55; // [rsp+B8h] [rbp-3A0h]
  int v56; // [rsp+C0h] [rbp-398h]
  __int64 *v57; // [rsp+C8h] [rbp-390h]
  unsigned int *v58; // [rsp+D0h] [rbp-388h]
  __int64 v59; // [rsp+D8h] [rbp-380h]
  __int64 v60; // [rsp+E0h] [rbp-378h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-370h] BYREF
  __int64 v62; // [rsp+F0h] [rbp-368h] BYREF
  PIMAGE_NT_HEADERS v63; // [rsp+F8h] [rbp-360h] BYREF
  PIMAGE_NT_HEADERS v64; // [rsp+100h] [rbp-358h] BYREF
  void *v65; // [rsp+108h] [rbp-350h]
  _QWORD v66[2]; // [rsp+110h] [rbp-348h] BYREF
  __int64 v67; // [rsp+120h] [rbp-338h]
  _UNICODE_STRING LocaleName; // [rsp+128h] [rbp-330h] BYREF
  int v69; // [rsp+138h] [rbp-320h] BYREF
  const wchar_t *v70; // [rsp+140h] [rbp-318h]
  unsigned __int16 v71[2]; // [rsp+150h] [rbp-308h] BYREF
  _WORD v72[262]; // [rsp+154h] [rbp-304h]
  _WORD Src[88]; // [rsp+360h] [rbp-F8h] BYREF

  v59 = a4;
  v10 = a3;
  Size = a2;
  v11 = BaseOfImage;
  DllHandle = BaseOfImage;
  v55 = a6;
  v57 = a7;
  v13 = (int)a8;
  v65 = a8;
  v58 = a9;
  ResourceDllBase = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v12 = 0;
  v44 = (a3 & 0x40) != 0;
  v60 = 0LL;
  v42 = 0;
  MUIFromCMFSegment = 0LL;
  LOBYTE(v13) = 0;
  v49 = v13;
  v43 = 0;
  LODWORD(v66[0]) = 4980810;
  v66[1] = L"LdrpResSearchResourceMappedFile Enter";
  v69 = 4849736;
  v70 = L"LdrpResSearchResourceMappedFile Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
  {
    LdrpTraceLoadMUIDll(v66, MEMORY[0x7FFE0384]);
    LOBYTE(v13) = v49;
  }
  v14 = 0;
  v15 = 0;
  if ( (v10 & 0x80u) != 0 )
    v15 = 128;
  if ( (v10 & 8) != 0 )
  {
    v13 = (unsigned __int8)v13;
    if ( *(_QWORD *)a4 == 16LL )
      v13 = 1;
    v49 = v13;
  }
  v16 = a5;
  if ( a5 == 3 )
  {
    v14 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v12 = 1, wcsicmp(*(const wchar_t **)a4, L"MUI")) )
      v12 = 0;
    v48 = v12;
    v16 = 3;
  }
  if ( (v10 & 0x10) != 0 || (unsigned int)(v16 - 1) > 2 )
    goto LABEL_8;
  if ( v16 == 3 )
    v32 = *(_WORD *)(a4 + 16);
  else
    v32 = 0;
  if ( (((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 || v12)
    && (~(_BYTE)v10 & 8) != 0
    && (v32 & 0xF3FF) == 0
    && v32 != 3072 )
  {
    v10 |= 0x10u;
LABEL_8:
    v17 = Size;
    goto LABEL_9;
  }
  v17 = Size;
  RCConfig = LdrResGetRCConfig(v11, 1);
  MappingSize = RCConfig;
  if ( RCConfig >= 0 )
  {
    v11 = DllHandle;
    v15 |= LdrIsResItemExist(DllHandle, a4, v34, v10);
  }
  else
  {
    if ( RCConfig != -1073741686 )
      goto LABEL_41;
    v15 |= 0x80000u;
    v11 = DllHandle;
  }
LABEL_9:
  if ( (v15 & 0x60000) == 0x60000 )
  {
    MappingSize = -1073741686;
    goto LABEL_41;
  }
  v18 = (~v15 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0 && (~v15 & 0x20000) != 0;
  v71[0] = 1;
  v72[0] = 0;
  if ( ((~v15 & 0x80000) == 0 || (~(_BYTE)v10 & 0x10) == 0 || (~v15 & 0x20000) == 0) && a5 != 3
    || (v10 & 0x10) != 0 && (v10 & 0x20) != 0 )
  {
    goto LABEL_140;
  }
  if ( (v10 & 4) != 0 )
    v15 |= 4u;
  result = LdrResFallbackLangList(v11, v17, v14, v15, v71);
  if ( result >= 0 || (v10 & 0x1000) == 0 )
  {
LABEL_140:
    if ( (v10 & 0x10) == 0 && (~v15 & 0x40000) == 0 && (v15 & 0x80000) == 0
      || (result = LdrpResGetResourceDirectory((unsigned __int64)v11, v17, v10, &v63, (PIMAGE_NT_HEADERS *)&v61),
          result >= 0) )
    {
      while ( 1 )
      {
        if ( (v15 & 0x20000) != 0 )
          v18 = 0;
        MappingSize = 0;
        ResourceOffset = 0LL;
        v20 = 0;
        v45 = 0;
        for ( i = 0; ; ++i )
        {
          LODWORD(v53) = i;
          if ( i >= v71[0] )
            break;
          if ( !v18 )
            goto LABEL_18;
          ResourceDllBase = 0LL;
          ResourceOffset = 0LL;
          if ( !v72[4 * i] )
          {
            if ( *(_DWORD *)&v72[4 * i + 2] == 2 )
              continue;
LABEL_86:
            MappingSize = -1073741811;
            continue;
          }
          if ( *(_DWORD *)&v72[4 * i + 2] == 10 )
            goto LABEL_86;
          v20 = v72[4 * i];
          v45 = v20;
          v35 = 0LL;
          MUIFromCMFSegment = 0LL;
          v36 = DllHandle;
          if ( (_BYTE)v49 )
          {
            LODWORD(v52) = 0;
            MUIFromCMFSegment = LdrpGetMUIFromCMFSegment(DllHandle, (__int64)&v52, (__int64)&v60);
            if ( !MUIFromCMFSegment )
              goto LABEL_77;
            v39 = v60;
            LdrpSetAlternateResourceModuleHandle((_DWORD)v36, 0, 0, 0, v52, v20, 4, 0, v60);
            v35 = MUIFromCMFSegment;
            if ( v55 )
              *v55 = (unsigned int *)MUIFromCMFSegment;
            if ( v57 )
              *v57 = v39;
            i = v53;
          }
          if ( v35 )
            goto LABEL_18;
LABEL_77:
          v37 = LdrLoadAlternateResourceModuleEx(v36, v20, &ResourceDllBase, &ResourceOffset, v15 | 0x1000);
          MappingSize = v37;
          v38 = 0LL;
          if ( v37 < 0 )
          {
            if ( v37 == -1073741772 || v37 == -1073741766 )
              MappingSize = -1073020927;
            continue;
          }
          v42 = 1;
          if ( !ResourceOffset )
          {
            LOBYTE(v38) = 1;
            MappingSize = LdrpResGetMappingSize(ResourceDllBase, &ResourceOffset, 512LL, v38);
          }
          if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
            break;
          MappingSize = LdrpResGetResourceDirectory(
                          (unsigned __int64)ResourceDllBase,
                          ResourceOffset,
                          v10,
                          &v64,
                          (PIMAGE_NT_HEADERS *)&v62);
          if ( MappingSize >= 0 )
          {
LABEL_18:
            v22 = 0LL;
            v53 = 0LL;
            if ( MUIFromCMFSegment )
            {
              MappingSize = 0;
            }
            else
            {
              v23 = &v45;
              if ( v18 )
                v23 = 0LL;
              v24 = v10;
              if ( v18 )
                v24 = v10 | 0x20;
              v25 = &v53;
              if ( v57 )
                v25 = (unsigned __int64 *)v57;
              v26 = v61;
              if ( v18 )
                v26 = v62;
              v27 = (int)v63;
              if ( v18 )
                v27 = (int)v64;
              v28 = Size;
              if ( v18 )
                v28 = ResourceOffset;
              v29 = (int)DllHandle;
              if ( v18 )
                v29 = (int)ResourceDllBase;
              MappingSize = LdrpResSearchResourceInsideDirectory(
                              v29,
                              0,
                              v28,
                              v27,
                              v26,
                              0LL,
                              v59,
                              a5,
                              (__int64)v71,
                              (__int64)v55,
                              (__int64)v25,
                              v24,
                              (__int64)v23);
              v20 = v45;
              v22 = v53;
            }
            if ( v44 && (~v15 & 0x40000) != 0 )
            {
              if ( MappingSize >= 0 )
              {
                if ( v55 && v18 )
                {
                  if ( v57 )
                    v22 = *v57;
                  MappingSize = LdrpFindMessageInAlternateModule(ResourceDllBase, *v55, v22, *(_DWORD *)(v59 + 24), 1);
                  if ( MappingSize < 0 )
                  {
                    *v55 = 0LL;
                    if ( MappingSize == -1073741701 )
                      goto LABEL_41;
                  }
                }
                goto LABEL_35;
              }
            }
            else
            {
LABEL_35:
              if ( MappingSize >= 0 )
              {
                v31 = v58;
                if ( v58 )
                {
                  if ( v20 )
                  {
                    LocaleName.Buffer = Src;
                    LocaleName.MaximumLength = 172;
                    MappingSize = RtlLcidToLocaleName(v20, &LocaleName, 2u, 0);
                    if ( MappingSize < 0 )
                      goto LABEL_41;
                    v41 = LocaleName.Length >> 1;
                    v31 = v58;
                  }
                  else
                  {
                    Src[0] = 0;
                    v41 = 0;
                  }
                  if ( v41 >= *v31 || !v65 )
                  {
                    *v31 = v41 + 1;
                    MappingSize = -1073741789;
                    v56 = -1073741789;
                    goto LABEL_41;
                  }
                  memmove(v65, Src, 2LL * v41);
                  *v58 = v41 + 1;
                  *((_WORD *)v65 + v41) = 0;
                }
                break;
              }
            }
            if ( !v18 )
              break;
            if ( (int)LdrResGetRCConfig(DllHandle, 1) >= 0 && (int)LdrResGetRCConfig(ResourceDllBase, 0) >= 0 )
            {
              v40 = *(_QWORD *)(v66[0] + 28LL) - *(_QWORD *)(v67 + 28);
              if ( !v40 )
                v40 = *(_QWORD *)(v66[0] + 36LL) - *(_QWORD *)(v67 + 36);
              if ( !v40 )
                break;
            }
            continue;
          }
        }
        if ( v18 && (v10 & 0x200000) == 0 )
          LdrpResReportResourceAccessInternal(ResourceDllBase);
        if ( MappingSize < 0 )
        {
          if ( v18 )
          {
            if ( v43 || v42 || (int)LdrpIsReparsePoint(DllHandle) < 0 )
            {
              if ( (v15 & 0x40000) != 0 )
                v18 = 0;
              else
                v15 |= 0x20000u;
            }
            else
            {
              v15 |= 0x400000u;
              v43 = 1;
            }
          }
          if ( v18 )
            continue;
        }
LABEL_41:
        if ( (MEMORY[0x7FFE0385] & 1) != 0 )
          LdrpTraceLoadMUIDll(&v69, MEMORY[0x7FFE0384]);
        return MappingSize;
      }
    }
  }
  return result;
}

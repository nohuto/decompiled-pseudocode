/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x180037C1C
 * Callers:
 *     LdrResSearchResource @ 0x1800394E0 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x18003BEB0 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlLcidToLocaleName @ 0x18001CA60 (RtlLcidToLocaleName.c)
 *     LdrpResGetResourceDirectory @ 0x180037860 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x18003839C (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetMappingSize @ 0x1800397F0 (LdrpResGetMappingSize.c)
 *     LdrResFallbackLangList @ 0x18003A1E8 (LdrResFallbackLangList.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x18003BEB0 (LdrResGetRCConfig.c)
 *     LdrIsResItemExist @ 0x18003C3B4 (LdrIsResItemExist.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18003C78C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpFindMessageInAlternateModule @ 0x18003D460 (LdrpFindMessageInAlternateModule.c)
 *     LdrpIsReparsePoint @ 0x180042D10 (LdrpIsReparsePoint.c)
 *     LdrpGetMUIFromCMFSegment @ 0x180048A70 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpResReportResourceAccessInternal @ 0x18005246C (LdrpResReportResourceAccessInternal.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     _wcsicmp @ 0x180096F90 (_wcsicmp.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800D44B4 (LdrpTraceLoadMUIDll.c)
 */

NTSTATUS __fastcall LdrpResSearchResourceMappedFile(
        PVOID BaseOfImage,
        ULONG64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 *a6,
        __int64 *a7,
        void *a8,
        unsigned int *a9)
{
  unsigned int v10; // r15d
  PVOID v11; // rdi
  char v12; // bl
  int v13; // ecx
  unsigned __int16 v14; // si
  int v15; // r14d
  int v16; // ecx
  ULONG64 v17; // rbx
  bool v18; // r13
  bool v19; // cl
  NTSTATUS MappingSize; // edi
  unsigned __int16 v21; // si
  unsigned int i; // ebx
  __int64 v23; // r8
  unsigned __int16 *v24; // r11
  int v25; // r10d
  __int64 *v26; // rax
  __int64 v27; // rdx
  int v28; // r9d
  int v29; // r8d
  int v30; // ecx
  NTSTATUS result; // eax
  unsigned int *v32; // rcx
  __int16 v33; // cx
  int RCConfig; // eax
  __int64 v35; // r8
  __int64 v36; // r8
  PVOID v37; // rdi
  NTSTATUS v38; // eax
  __int64 v39; // r9
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned int v42; // esi
  char v43; // [rsp+70h] [rbp-3F8h]
  char v44; // [rsp+71h] [rbp-3F7h]
  unsigned __int16 v45; // [rsp+74h] [rbp-3F4h] BYREF
  bool v46; // [rsp+78h] [rbp-3F0h]
  PVOID ResourceDllBase; // [rsp+80h] [rbp-3E8h] BYREF
  ULONG_PTR ResourceOffset; // [rsp+88h] [rbp-3E0h] BYREF
  char v49; // [rsp+90h] [rbp-3D8h]
  PVOID DllHandle; // [rsp+98h] [rbp-3D0h]
  int v51; // [rsp+A0h] [rbp-3C8h]
  ULONG64 Size; // [rsp+A8h] [rbp-3C0h]
  __int64 v53; // [rsp+B0h] [rbp-3B8h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-3B0h] BYREF
  __int64 MUIFromCMFSegment; // [rsp+C0h] [rbp-3A8h]
  __int64 *v56; // [rsp+C8h] [rbp-3A0h]
  __int64 *v57; // [rsp+D0h] [rbp-398h]
  unsigned int *v58; // [rsp+D8h] [rbp-390h]
  int v59; // [rsp+E0h] [rbp-388h]
  __int64 v60; // [rsp+E8h] [rbp-380h]
  PIMAGE_NT_HEADERS v61; // [rsp+F0h] [rbp-378h] BYREF
  __int64 v62; // [rsp+F8h] [rbp-370h] BYREF
  PIMAGE_NT_HEADERS v63; // [rsp+100h] [rbp-368h] BYREF
  __int64 v64; // [rsp+108h] [rbp-360h] BYREF
  void *v65; // [rsp+110h] [rbp-358h]
  _QWORD v66[2]; // [rsp+118h] [rbp-350h] BYREF
  __int64 v67; // [rsp+128h] [rbp-340h] BYREF
  __int64 v68; // [rsp+130h] [rbp-338h]
  int v69; // [rsp+138h] [rbp-330h] BYREF
  const wchar_t *v70; // [rsp+140h] [rbp-328h]
  _UNICODE_STRING LocaleName; // [rsp+148h] [rbp-320h] BYREF
  _WORD v72[2]; // [rsp+160h] [rbp-308h] BYREF
  _WORD v73[262]; // [rsp+164h] [rbp-304h]
  _WORD Src[88]; // [rsp+370h] [rbp-F8h] BYREF

  v60 = a4;
  v10 = a3;
  Size = a2;
  v11 = BaseOfImage;
  DllHandle = BaseOfImage;
  v56 = a6;
  v57 = a7;
  v65 = a8;
  v13 = (int)a9;
  v58 = a9;
  ResourceDllBase = 0LL;
  v61 = 0LL;
  v63 = 0LL;
  v67 = 0LL;
  v64 = 0LL;
  v12 = 0;
  v46 = (a3 & 0x40) != 0;
  v62 = 0LL;
  v43 = 0;
  MUIFromCMFSegment = 0LL;
  LOBYTE(v13) = 0;
  v51 = v13;
  v44 = 0;
  LODWORD(v66[0]) = 4980810;
  v66[1] = L"LdrpResSearchResourceMappedFile Enter";
  v69 = 4849736;
  v70 = L"LdrpResSearchResourceMappedFile Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
  {
    LdrpTraceLoadMUIDll(v66, MEMORY[0x7FFE0384]);
    LOBYTE(v13) = v51;
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
    v51 = v13;
  }
  v16 = a5;
  if ( a5 == 3 )
  {
    v14 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v12 = 1, wcsicmp(*(const wchar_t **)a4, L"MUI")) )
      v12 = 0;
    v49 = v12;
    v16 = 3;
  }
  if ( (v10 & 0x10) != 0 || (unsigned int)(v16 - 1) > 2 )
    goto LABEL_8;
  if ( v16 == 3 )
    v33 = *(_WORD *)(a4 + 16);
  else
    v33 = 0;
  if ( (((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 || v12)
    && (~(_BYTE)v10 & 8) != 0
    && (v33 & 0xF3FF) == 0
    && v33 != 3072 )
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
    v15 |= LdrIsResItemExist(DllHandle, a4, v35, v10);
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
  v18 = (~v15 & 0x20000) != 0 && (~v15 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0;
  v72[0] = 1;
  v73[0] = 0;
  if ( ((~v15 & 0x20000) == 0 || (~v15 & 0x80000) == 0 || (~(_BYTE)v10 & 0x10) == 0) && a5 != 3
    || (v10 & 0x10) != 0 && (v10 & 0x20) != 0 )
  {
    goto LABEL_140;
  }
  if ( (v10 & 4) != 0 )
    v15 |= 4u;
  result = LdrResFallbackLangList((_DWORD)v11, v17, v14, v15, (__int64)v72);
  if ( result >= 0 || (v10 & 0x1000) == 0 )
  {
LABEL_140:
    if ( (v10 & 0x10) == 0 && (~v15 & 0x40000) == 0 && (v15 & 0x80000) == 0
      || (result = LdrpResGetResourceDirectory((unsigned __int64)v11, v17, v10, &v61, (PIMAGE_NT_HEADERS *)&v67),
          result >= 0) )
    {
      while ( 1 )
      {
        v19 = v18;
        if ( (v15 & 0x20000) != 0 )
          v19 = 0;
        v18 = v19;
        MappingSize = 0;
        ResourceOffset = 0LL;
        v21 = 0;
        v45 = 0;
        for ( i = 0; ; ++i )
        {
          LODWORD(v54) = i;
          if ( i >= v72[0] )
            break;
          if ( !v18 )
            goto LABEL_18;
          ResourceDllBase = 0LL;
          ResourceOffset = 0LL;
          if ( !v73[4 * i] )
          {
            if ( *(_DWORD *)&v73[4 * i + 2] == 2 )
              continue;
LABEL_86:
            MappingSize = -1073741811;
            continue;
          }
          if ( *(_DWORD *)&v73[4 * i + 2] == 10 )
            goto LABEL_86;
          v21 = v73[4 * i];
          v45 = v21;
          v36 = 0LL;
          MUIFromCMFSegment = 0LL;
          v37 = DllHandle;
          if ( (_BYTE)v51 )
          {
            LODWORD(v53) = 0;
            MUIFromCMFSegment = LdrpGetMUIFromCMFSegment(DllHandle, (__int64)&v53, (__int64)&v62);
            if ( !MUIFromCMFSegment )
              goto LABEL_77;
            v40 = v62;
            LdrpSetAlternateResourceModuleHandle((_DWORD)v37, 0, 0, 0, v53, v21, 4, 0, v62);
            v36 = MUIFromCMFSegment;
            if ( v56 )
              *v56 = MUIFromCMFSegment;
            if ( v57 )
              *v57 = v40;
            i = v54;
          }
          if ( v36 )
            goto LABEL_18;
LABEL_77:
          v38 = LdrLoadAlternateResourceModuleEx(v37, v21, &ResourceDllBase, &ResourceOffset, v15 | 0x1000);
          MappingSize = v38;
          v39 = 0LL;
          if ( v38 < 0 )
          {
            if ( v38 == -1073741772 || v38 == -1073741766 )
              MappingSize = -1073020927;
            continue;
          }
          v43 = 1;
          if ( !ResourceOffset )
          {
            LOBYTE(v39) = 1;
            MappingSize = LdrpResGetMappingSize(ResourceDllBase, &ResourceOffset, 512LL, v39);
          }
          if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
            break;
          MappingSize = LdrpResGetResourceDirectory(
                          (unsigned __int64)ResourceDllBase,
                          ResourceOffset,
                          v10,
                          &v63,
                          (PIMAGE_NT_HEADERS *)&v64);
          if ( MappingSize >= 0 )
          {
LABEL_18:
            LODWORD(v23) = 0;
            v54 = 0LL;
            if ( MUIFromCMFSegment )
            {
              MappingSize = 0;
            }
            else
            {
              v24 = &v45;
              if ( v18 )
                v24 = 0LL;
              v25 = v10;
              if ( v18 )
                v25 = v10 | 0x20;
              v26 = &v54;
              if ( v57 )
                v26 = v57;
              v27 = v67;
              if ( v18 )
                v27 = v64;
              v28 = (int)v61;
              if ( v18 )
                v28 = (int)v63;
              v29 = Size;
              if ( v18 )
                v29 = ResourceOffset;
              v30 = (int)DllHandle;
              if ( v18 )
                v30 = (int)ResourceDllBase;
              MappingSize = LdrpResSearchResourceInsideDirectory(
                              v30,
                              0,
                              v29,
                              v28,
                              v27,
                              0LL,
                              v60,
                              a5,
                              (__int64)v72,
                              (__int64)v56,
                              (__int64)v26,
                              v25,
                              (__int64)v24);
              v21 = v45;
              LODWORD(v23) = v54;
            }
            if ( v46 && (~v15 & 0x40000) != 0 )
            {
              if ( MappingSize >= 0 )
              {
                if ( v56 && v18 )
                {
                  if ( v57 )
                    v23 = *v57;
                  MappingSize = LdrpFindMessageInAlternateModule(
                                  (_DWORD)ResourceDllBase,
                                  *v56,
                                  v23,
                                  *(_DWORD *)(v60 + 24),
                                  1);
                  if ( MappingSize < 0 )
                  {
                    *v56 = 0LL;
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
                v32 = v58;
                if ( v58 )
                {
                  if ( v21 )
                  {
                    LocaleName.Buffer = Src;
                    LocaleName.MaximumLength = 172;
                    MappingSize = RtlLcidToLocaleName(v21, &LocaleName, 2u, 0);
                    if ( MappingSize < 0 )
                      goto LABEL_41;
                    v42 = LocaleName.Length >> 1;
                    v32 = v58;
                  }
                  else
                  {
                    Src[0] = 0;
                    v42 = 0;
                  }
                  if ( v42 >= *v32 || !v65 )
                  {
                    *v32 = v42 + 1;
                    MappingSize = -1073741789;
                    v59 = -1073741789;
                    goto LABEL_41;
                  }
                  memmove(v65, Src, 2LL * v42);
                  *v58 = v42 + 1;
                  *((_WORD *)v65 + v42) = 0;
                }
                break;
              }
            }
            if ( !v18 )
              break;
            if ( (int)LdrResGetRCConfig(DllHandle, 1) >= 0 && (int)LdrResGetRCConfig(ResourceDllBase, 0) >= 0 )
            {
              v41 = *(_QWORD *)(v66[0] + 28LL) - *(_QWORD *)(v68 + 28);
              if ( !v41 )
                v41 = *(_QWORD *)(v66[0] + 36LL) - *(_QWORD *)(v68 + 36);
              if ( !v41 )
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
            if ( v44 || v43 || (int)LdrpIsReparsePoint(DllHandle) < 0 )
            {
              if ( (v15 & 0x40000) != 0 )
                v18 = 0;
              else
                v15 |= 0x20000u;
            }
            else
            {
              v15 |= 0x400000u;
              v44 = 1;
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

/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x180018FCC
 * Callers:
 *     LdrResSearchResource @ 0x18001AAA0 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x180056F50 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpGetMUIFromCMFSegment @ 0x18000EF20 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpResGetResourceDirectory @ 0x180018C10 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800196E8 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrIsResItemExist @ 0x18001A80C (LdrIsResItemExist.c)
 *     LdrpResGetMappingSize @ 0x18001AFF0 (LdrpResGetMappingSize.c)
 *     LdrResFallbackLangList @ 0x18001BC14 (LdrResFallbackLangList.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001C5F0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlLcidToLocaleName @ 0x18001F420 (RtlLcidToLocaleName.c)
 *     LdrResGetRCConfig @ 0x180056F50 (LdrResGetRCConfig.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180057378 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpFindMessageInAlternateModule @ 0x180065170 (LdrpFindMessageInAlternateModule.c)
 *     LdrpIsReparsePoint @ 0x180069B2C (LdrpIsReparsePoint.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800857E0 (_wcsicmp.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800CBC78 (LdrpTraceLoadMUIDll.c)
 */

NTSTATUS __fastcall LdrpResSearchResourceMappedFile(
        void *a1,
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
  char v11; // bl
  int v12; // ecx
  unsigned __int16 v13; // si
  int v14; // r14d
  int v15; // edi
  PVOID v16; // rbx
  bool v17; // r13
  ULONG64 v18; // rdi
  NTSTATUS MappingSize; // edi
  unsigned int v20; // ecx
  int v21; // edi
  __int64 v22; // r8
  unsigned __int16 *v23; // r11
  int v24; // r10d
  __int64 *v25; // rax
  __int64 v26; // rdx
  int v27; // r9d
  int v28; // r8d
  int v29; // ecx
  __int64 *v30; // rsi
  __int64 v31; // rbx
  NTSTATUS result; // eax
  unsigned int *v33; // rcx
  __int16 v34; // cx
  int RCConfig; // eax
  __int64 v36; // r8
  __int64 v37; // rax
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // si
  __int64 v40; // r8
  NTSTATUS v41; // eax
  __int64 v42; // r9
  ULONG64 v43; // rdx
  __int64 v44; // rbx
  int MessageInAlternateModule; // eax
  PVOID v46; // rsi
  __int64 v47; // rax
  unsigned int v48; // esi
  unsigned __int16 v49; // [rsp+70h] [rbp-3E8h] BYREF
  char v50; // [rsp+74h] [rbp-3E4h]
  char v51; // [rsp+75h] [rbp-3E3h]
  bool v52; // [rsp+76h] [rbp-3E2h]
  PVOID DllHandle; // [rsp+78h] [rbp-3E0h]
  int v54; // [rsp+80h] [rbp-3D8h]
  char v55; // [rsp+84h] [rbp-3D4h]
  ULONG_PTR ResourceOffset; // [rsp+88h] [rbp-3D0h] BYREF
  PVOID ResourceDllBase; // [rsp+90h] [rbp-3C8h] BYREF
  ULONG64 Size; // [rsp+98h] [rbp-3C0h]
  __int64 v59; // [rsp+A0h] [rbp-3B8h] BYREF
  unsigned int v60; // [rsp+A8h] [rbp-3B0h]
  __int64 MUIFromCMFSegment; // [rsp+B0h] [rbp-3A8h]
  __int64 *v62; // [rsp+B8h] [rbp-3A0h]
  __int64 *v63; // [rsp+C0h] [rbp-398h]
  int v64; // [rsp+C8h] [rbp-390h]
  unsigned int *v65; // [rsp+D0h] [rbp-388h]
  PIMAGE_NT_HEADERS v66; // [rsp+D8h] [rbp-380h] BYREF
  void *v67; // [rsp+E0h] [rbp-378h]
  __int64 v68; // [rsp+E8h] [rbp-370h] BYREF
  __int64 v69; // [rsp+F0h] [rbp-368h]
  PIMAGE_NT_HEADERS v70; // [rsp+F8h] [rbp-360h] BYREF
  __int64 v71; // [rsp+100h] [rbp-358h] BYREF
  _QWORD v72[2]; // [rsp+108h] [rbp-350h] BYREF
  __int64 v73; // [rsp+118h] [rbp-340h] BYREF
  __int64 v74; // [rsp+120h] [rbp-338h]
  int v75; // [rsp+128h] [rbp-330h] BYREF
  const wchar_t *v76; // [rsp+130h] [rbp-328h]
  _UNICODE_STRING LocaleName; // [rsp+138h] [rbp-320h] BYREF
  _WORD v78[2]; // [rsp+150h] [rbp-308h] BYREF
  _WORD v79[262]; // [rsp+154h] [rbp-304h]
  _WORD Src[88]; // [rsp+360h] [rbp-F8h] BYREF

  v69 = a4;
  v10 = a3;
  Size = a2;
  DllHandle = a1;
  v62 = a6;
  v63 = a7;
  v67 = a8;
  v12 = (int)a9;
  v65 = a9;
  ResourceDllBase = 0LL;
  v70 = 0LL;
  v66 = 0LL;
  v71 = 0LL;
  v73 = 0LL;
  v11 = 0;
  v52 = (a3 & 0x40) != 0;
  v68 = 0LL;
  v50 = 0;
  MUIFromCMFSegment = 0LL;
  LOBYTE(v12) = 0;
  v54 = v12;
  v51 = 0;
  LODWORD(v72[0]) = 4980810;
  v72[1] = L"LdrpResSearchResourceMappedFile Enter";
  v75 = 4849736;
  v76 = L"LdrpResSearchResourceMappedFile Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
  {
    LdrpTraceLoadMUIDll(v72, MEMORY[0x7FFE0384]);
    LOBYTE(v12) = v54;
  }
  v13 = 0;
  v14 = 0;
  if ( (v10 & 0x80u) != 0 )
    v14 = 128;
  if ( (v10 & 8) != 0 )
  {
    v12 = (unsigned __int8)v12;
    if ( *(_QWORD *)a4 == 16LL )
      v12 = 1;
    v54 = v12;
  }
  v15 = a5;
  if ( a5 == 3 )
  {
    v13 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v11 = 1, wcsicmp(*(const wchar_t **)a4, L"MUI")) )
      v11 = 0;
    v55 = v11;
  }
  if ( (v10 & 0x10) != 0 || (unsigned int)(a5 - 1) > 2 )
    goto LABEL_8;
  if ( a5 == 3 )
    v34 = *(_WORD *)(a4 + 16);
  else
    v34 = 0;
  if ( (((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 || v11)
    && (~(_BYTE)v10 & 8) != 0
    && (v34 & 0xF3FF) == 0
    && v34 != 3072 )
  {
    v10 |= 0x10u;
LABEL_8:
    v16 = DllHandle;
    goto LABEL_9;
  }
  v16 = DllHandle;
  RCConfig = LdrResGetRCConfig(DllHandle, 1);
  MappingSize = RCConfig;
  if ( RCConfig >= 0 )
  {
    v14 |= LdrIsResItemExist(DllHandle, a4, v36, v10);
    v15 = a5;
  }
  else
  {
    if ( RCConfig != -1073741686 )
      goto LABEL_41;
    v14 |= 0x80000u;
    v15 = a5;
  }
LABEL_9:
  if ( (v14 & 0x60000) == 0x60000 )
  {
    MappingSize = -1073741686;
    goto LABEL_41;
  }
  v17 = (~v14 & 0x20000) != 0 && (~v14 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0;
  v78[0] = 1;
  v79[0] = 0;
  if ( ((~v14 & 0x20000) == 0 || (~v14 & 0x80000) == 0 || (~(_BYTE)v10 & 0x10) == 0) && v15 != 3
    || (v10 & 0x10) != 0 && (v10 & 0x20) != 0 )
  {
    v18 = Size;
    goto LABEL_13;
  }
  if ( (v10 & 4) != 0 )
    v14 |= 4u;
  v18 = Size;
  result = LdrResFallbackLangList((_DWORD)v16, Size, v13, v14, (__int64)v78);
  if ( result >= 0 || (v10 & 0x1000) == 0 )
  {
LABEL_13:
    if ( (v10 & 0x10) != 0 || (~v14 & 0x40000) != 0 || (v14 & 0x80000) != 0 )
    {
      result = LdrpResGetResourceDirectory((unsigned __int64)v16, v18, v10, &v70, (PIMAGE_NT_HEADERS *)&v71);
      if ( result < 0 )
        return result;
    }
    while ( 1 )
    {
      if ( (v14 & 0x20000) != 0 )
        v17 = 0;
      MappingSize = 0;
      ResourceOffset = 0LL;
      v49 = 0;
      v20 = 0;
      while ( 1 )
      {
        v60 = v20;
        if ( v20 >= v78[0] )
          break;
        if ( !v17 )
          goto LABEL_19;
        ResourceDllBase = 0LL;
        ResourceOffset = 0LL;
        v37 = v20;
        v38 = v79[4 * v20];
        if ( !v38 )
        {
          if ( *(_DWORD *)&v79[4 * v37 + 2] == 2 )
            goto LABEL_126;
LABEL_88:
          MappingSize = -1073741811;
          goto LABEL_126;
        }
        if ( *(_DWORD *)&v79[4 * v37 + 2] == 10 )
          goto LABEL_88;
        v39 = v38;
        v49 = v38;
        v40 = 0LL;
        MUIFromCMFSegment = 0LL;
        if ( (_BYTE)v54 )
        {
          LODWORD(v59) = 0;
          MUIFromCMFSegment = LdrpGetMUIFromCMFSegment(v16, v38, 0x1000000, 0, &v59, &v68);
          if ( !MUIFromCMFSegment )
            goto LABEL_79;
          v44 = v68;
          v21 = (int)DllHandle;
          LdrpSetAlternateResourceModuleHandle((_DWORD)DllHandle, 0, 0, 0, v59, v39, 4, 0, v68);
          v40 = MUIFromCMFSegment;
          if ( v62 )
            *v62 = MUIFromCMFSegment;
          if ( v63 )
            *v63 = v44;
        }
        else
        {
          v21 = (int)DllHandle;
        }
        if ( v40 )
          goto LABEL_20;
        v16 = DllHandle;
LABEL_79:
        v41 = LdrLoadAlternateResourceModuleEx(v16, v39, &ResourceDllBase, &ResourceOffset, v14 | 0x1000);
        MappingSize = v41;
        v42 = 0LL;
        if ( v41 < 0 )
        {
          if ( v41 == -1073741772 || v41 == -1073741766 )
            MappingSize = -1073020927;
          goto LABEL_126;
        }
        v50 = 1;
        v43 = ResourceOffset;
        if ( !ResourceOffset )
        {
          LOBYTE(v42) = 1;
          MappingSize = LdrpResGetMappingSize(ResourceDllBase, &ResourceOffset, 512LL, v42);
          v43 = ResourceOffset;
        }
        if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
          goto LABEL_39;
        MappingSize = LdrpResGetResourceDirectory(
                        (unsigned __int64)ResourceDllBase,
                        v43,
                        v10,
                        &v66,
                        (PIMAGE_NT_HEADERS *)&v73);
        if ( MappingSize >= 0 )
        {
LABEL_19:
          v21 = (int)DllHandle;
LABEL_20:
          LODWORD(v22) = 0;
          v59 = 0LL;
          if ( MUIFromCMFSegment )
          {
            MappingSize = 0;
            v31 = v69;
            v30 = v62;
          }
          else
          {
            v23 = &v49;
            if ( v17 )
              v23 = 0LL;
            v24 = v10;
            if ( v17 )
              v24 = v10 | 0x20;
            v25 = &v59;
            if ( v63 )
              v25 = v63;
            v26 = v71;
            if ( v17 )
              v26 = v73;
            v27 = (int)v70;
            if ( v17 )
              v27 = (int)v66;
            v28 = Size;
            if ( v17 )
              v28 = ResourceOffset;
            v29 = v21;
            if ( v17 )
              v29 = (int)ResourceDllBase;
            v30 = v62;
            v31 = v69;
            MappingSize = LdrpResSearchResourceInsideDirectory(
                            v29,
                            0,
                            v28,
                            v27,
                            v26,
                            0LL,
                            v69,
                            a5,
                            (__int64)v78,
                            (__int64)v62,
                            (__int64)v25,
                            v24,
                            (__int64)v23);
            LODWORD(v22) = v59;
          }
          if ( v52 && (~v14 & 0x40000) != 0 )
          {
            if ( MappingSize >= 0 )
            {
              if ( v30 && v17 )
              {
                if ( v63 )
                  v22 = *v63;
                MessageInAlternateModule = LdrpFindMessageInAlternateModule(
                                             (_DWORD)ResourceDllBase,
                                             *v30,
                                             v22,
                                             *(_DWORD *)(v31 + 24),
                                             1);
                MappingSize = MessageInAlternateModule;
                if ( MessageInAlternateModule < 0 )
                {
                  *v30 = 0LL;
                  if ( MessageInAlternateModule == -1073741701 )
                    goto LABEL_41;
                }
              }
              goto LABEL_37;
            }
          }
          else
          {
LABEL_37:
            if ( MappingSize >= 0 )
            {
              v33 = v65;
              if ( v65 )
              {
                if ( v49 )
                {
                  LocaleName.Buffer = Src;
                  LocaleName.MaximumLength = 172;
                  MappingSize = RtlLcidToLocaleName(v49, &LocaleName, 2u, 0);
                  if ( MappingSize < 0 )
                    goto LABEL_41;
                  v48 = LocaleName.Length >> 1;
                  v33 = v65;
                }
                else
                {
                  Src[0] = 0;
                  v48 = 0;
                }
                if ( v48 >= *v33 || !v67 )
                {
                  *v33 = v48 + 1;
                  MappingSize = -1073741789;
                  v64 = -1073741789;
                  goto LABEL_41;
                }
                memmove(v67, Src, 2LL * v48);
                *v65 = v48 + 1;
                *((_WORD *)v67 + v48) = 0;
              }
              break;
            }
          }
          if ( !v17 )
            goto LABEL_39;
          v46 = ResourceDllBase;
          if ( (int)LdrResGetRCConfig(DllHandle, 1) >= 0 && (int)LdrResGetRCConfig(v46, 0) >= 0 )
          {
            v47 = *(_QWORD *)(v72[0] + 28LL) - *(_QWORD *)(v74 + 28);
            if ( !v47 )
              v47 = *(_QWORD *)(v72[0] + 36LL) - *(_QWORD *)(v74 + 36);
            if ( !v47 )
              break;
          }
        }
LABEL_126:
        v20 = v60 + 1;
        v16 = DllHandle;
      }
      if ( MappingSize >= 0 )
        goto LABEL_41;
LABEL_39:
      if ( v17 )
      {
        if ( v51 || v50 || (int)LdrpIsReparsePoint(DllHandle) < 0 )
        {
          if ( (v14 & 0x40000) != 0 )
            v17 = 0;
          else
            v14 |= 0x20000u;
        }
        else
        {
          v14 |= 0x400000u;
          v51 = 1;
        }
      }
      v16 = DllHandle;
      if ( !v17 )
      {
LABEL_41:
        if ( (MEMORY[0x7FFE0385] & 1) != 0 )
          LdrpTraceLoadMUIDll(&v75, MEMORY[0x7FFE0384]);
        return MappingSize;
      }
    }
  }
  return result;
}

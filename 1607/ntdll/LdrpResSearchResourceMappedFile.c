/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x180037A78
 * Callers:
 *     LdrResSearchResource @ 0x180039310 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x18003A820 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpFindMessageInAlternateModule @ 0x18000D980 (LdrpFindMessageInAlternateModule.c)
 *     LdrResFallbackLangList @ 0x18000FD94 (LdrResFallbackLangList.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AB0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResGetResourceDirectory @ 0x1800376C0 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800381DC (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetMappingSize @ 0x180039860 (LdrpResGetMappingSize.c)
 *     LdrResGetRCConfig @ 0x18003A820 (LdrResGetRCConfig.c)
 *     LdrIsResItemExist @ 0x18003F148 (LdrIsResItemExist.c)
 *     RtlLcidToLocaleName @ 0x180042E80 (RtlLcidToLocaleName.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1F8 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800726C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpIsReparsePoint @ 0x180075EF4 (LdrpIsReparsePoint.c)
 *     LdrpResReportResourceAccessInternal @ 0x180082740 (LdrpResReportResourceAccessInternal.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     _wcsicmp @ 0x180098360 (_wcsicmp.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC874 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int **a6,
        __int64 *a7,
        void *a8,
        unsigned int *a9)
{
  unsigned int v10; // r15d
  unsigned __int64 v11; // rdi
  char v12; // bl
  int v13; // eax
  unsigned __int16 v14; // si
  int v15; // r14d
  int v16; // ecx
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  bool v19; // r13
  int MappingSize; // edi
  unsigned __int16 v21; // si
  unsigned int i; // ebx
  unsigned __int64 v23; // r8
  unsigned __int16 *v24; // r11
  int v25; // r10d
  unsigned __int64 *v26; // rax
  __int64 v27; // rdx
  int v28; // r9d
  int v29; // r8d
  int v30; // ecx
  __int64 result; // rax
  unsigned int *v32; // rcx
  __int16 v33; // cx
  int RCConfig; // eax
  __int64 v35; // r8
  unsigned __int16 v36; // cx
  __int64 v37; // r8
  __int64 v38; // rdi
  int v39; // eax
  __int64 v40; // r9
  __int64 v41; // rbx
  __int64 v42; // rax
  unsigned int v43; // esi
  char v44; // [rsp+70h] [rbp-3E8h]
  char v45; // [rsp+71h] [rbp-3E7h]
  bool v46; // [rsp+72h] [rbp-3E6h]
  unsigned __int16 v47; // [rsp+74h] [rbp-3E4h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp-3E0h] BYREF
  unsigned __int64 v49; // [rsp+80h] [rbp-3D8h] BYREF
  char v50; // [rsp+88h] [rbp-3D0h]
  int v51; // [rsp+8Ch] [rbp-3CCh]
  unsigned __int64 v52; // [rsp+90h] [rbp-3C8h]
  unsigned __int64 v53; // [rsp+98h] [rbp-3C0h]
  int v54; // [rsp+A0h] [rbp-3B8h] BYREF
  unsigned __int64 v55; // [rsp+A8h] [rbp-3B0h] BYREF
  __int64 MUIFromCMFSegment; // [rsp+B0h] [rbp-3A8h]
  unsigned int **v57; // [rsp+B8h] [rbp-3A0h]
  int v58; // [rsp+C0h] [rbp-398h]
  __int64 *v59; // [rsp+C8h] [rbp-390h]
  unsigned int *v60; // [rsp+D0h] [rbp-388h]
  __int64 v61; // [rsp+D8h] [rbp-380h]
  __int64 v62; // [rsp+E0h] [rbp-378h] BYREF
  __int64 v63; // [rsp+E8h] [rbp-370h] BYREF
  __int64 v64; // [rsp+F0h] [rbp-368h] BYREF
  unsigned __int64 v65; // [rsp+F8h] [rbp-360h] BYREF
  unsigned __int64 v66; // [rsp+100h] [rbp-358h] BYREF
  void *v67; // [rsp+108h] [rbp-350h]
  _QWORD v68[2]; // [rsp+110h] [rbp-348h] BYREF
  __int64 v69; // [rsp+120h] [rbp-338h] BYREF
  _WORD v70[4]; // [rsp+128h] [rbp-330h] BYREF
  _WORD *v71; // [rsp+130h] [rbp-328h]
  int v72; // [rsp+138h] [rbp-320h] BYREF
  const wchar_t *v73; // [rsp+140h] [rbp-318h]
  unsigned __int16 v74[2]; // [rsp+150h] [rbp-308h] BYREF
  _WORD v75[262]; // [rsp+154h] [rbp-304h]
  _WORD Src[88]; // [rsp+360h] [rbp-F8h] BYREF

  v61 = a4;
  v10 = a3;
  v53 = a2;
  v11 = a1;
  v52 = a1;
  v57 = a6;
  v59 = a7;
  v13 = (int)a8;
  v67 = a8;
  v60 = a9;
  v49 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v12 = 0;
  v46 = (a3 & 0x40) != 0;
  v62 = 0LL;
  v44 = 0;
  MUIFromCMFSegment = 0LL;
  LOBYTE(v13) = 0;
  v51 = v13;
  v45 = 0;
  LODWORD(v68[0]) = 4980810;
  v68[1] = L"LdrpResSearchResourceMappedFile Enter";
  v72 = 4849736;
  v73 = L"LdrpResSearchResourceMappedFile Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
  {
    LdrpTraceLoadMUIDll(v68, MEMORY[0x7FFE0384]);
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
    v50 = v12;
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
    v17 = v53;
    goto LABEL_9;
  }
  v17 = v53;
  RCConfig = LdrResGetRCConfig(v11, v53, 0, v10, 1);
  MappingSize = RCConfig;
  if ( RCConfig >= 0 )
  {
    v11 = v52;
    v15 |= LdrIsResItemExist(v52, a4, v35, v10);
  }
  else
  {
    if ( RCConfig != -1073741686 )
      goto LABEL_41;
    v15 |= 0x80000u;
    v11 = v52;
  }
LABEL_9:
  if ( (v15 & 0x60000) == 0x60000 )
  {
    MappingSize = -1073741686;
    goto LABEL_41;
  }
  v18 = (unsigned int)~v15;
  v19 = (v18 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0 && (v18 & 0x20000) != 0;
  v74[0] = 1;
  v75[0] = 0;
  if ( ((v18 & 0x80000) == 0 || (~(_BYTE)v10 & 0x10) == 0 || (v18 & 0x20000) == 0) && a5 != 3
    || (v10 & 0x10) != 0 && (v10 & 0x20) != 0 )
  {
    goto LABEL_140;
  }
  if ( (v10 & 4) != 0 )
    v15 |= 4u;
  result = LdrResFallbackLangList(v11, v17, v14, v15, v74);
  if ( (int)result >= 0 || (v10 & 0x1000) == 0 )
  {
LABEL_140:
    if ( (v10 & 0x10) == 0 && (~v15 & 0x40000) == 0 && (v15 & 0x80000) == 0
      || (result = LdrpResGetResourceDirectory(v11, v17, v10, &v65, (unsigned __int64 *)&v63), (int)result >= 0) )
    {
      while ( 1 )
      {
        if ( (v15 & 0x20000) != 0 )
          v19 = 0;
        MappingSize = 0;
        v48 = 0LL;
        v21 = 0;
        v47 = 0;
        for ( i = 0; ; ++i )
        {
          LODWORD(v55) = i;
          if ( i >= v74[0] )
            break;
          if ( !v19 )
            goto LABEL_18;
          v49 = 0LL;
          v48 = 0LL;
          v36 = v75[4 * i];
          if ( !v36 )
          {
            if ( *(_DWORD *)&v75[4 * i + 2] == 2 )
              continue;
LABEL_86:
            MappingSize = -1073741811;
            continue;
          }
          if ( *(_DWORD *)&v75[4 * i + 2] == 10 )
            goto LABEL_86;
          v21 = v75[4 * i];
          v47 = v21;
          v37 = 0LL;
          MUIFromCMFSegment = 0LL;
          v38 = v52;
          if ( (_BYTE)v51 )
          {
            v54 = 0;
            MUIFromCMFSegment = LdrpGetMUIFromCMFSegment(v52, v36, 0x1000000, 0, (__int64)&v54, (__int64)&v62);
            if ( !MUIFromCMFSegment )
              goto LABEL_77;
            v41 = v62;
            LdrpSetAlternateResourceModuleHandle(v38, 0, 0, 0, v54, v21, 4, 0, v62);
            v37 = MUIFromCMFSegment;
            if ( v57 )
              *v57 = (unsigned int *)MUIFromCMFSegment;
            if ( v59 )
              *v59 = v41;
            i = v55;
          }
          if ( v37 )
            goto LABEL_18;
LABEL_77:
          v39 = LdrLoadAlternateResourceModuleEx(v38, v21, (__int64 *)&v49, &v48, v15 | 0x1000u);
          MappingSize = v39;
          v40 = 0LL;
          if ( v39 < 0 )
          {
            if ( v39 == -1073741772 || v39 == -1073741766 )
              MappingSize = -1073020927;
            continue;
          }
          v44 = 1;
          if ( !v48 )
          {
            LOBYTE(v40) = 1;
            MappingSize = LdrpResGetMappingSize(v49, &v48, 512LL, v40);
          }
          if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
            break;
          MappingSize = LdrpResGetResourceDirectory(v49, v48, v10, &v66, (unsigned __int64 *)&v64);
          if ( MappingSize >= 0 )
          {
LABEL_18:
            v23 = 0LL;
            v55 = 0LL;
            if ( MUIFromCMFSegment )
            {
              MappingSize = 0;
            }
            else
            {
              v24 = &v47;
              if ( v19 )
                v24 = 0LL;
              v25 = v10;
              if ( v19 )
                v25 = v10 | 0x20;
              v26 = &v55;
              if ( v59 )
                v26 = (unsigned __int64 *)v59;
              v27 = v63;
              if ( v19 )
                v27 = v64;
              v28 = v65;
              if ( v19 )
                v28 = v66;
              v29 = v53;
              if ( v19 )
                v29 = v48;
              v30 = v52;
              if ( v19 )
                v30 = v49;
              MappingSize = LdrpResSearchResourceInsideDirectory(
                              v30,
                              0,
                              v29,
                              v28,
                              v27,
                              0LL,
                              v61,
                              a5,
                              (__int64)v74,
                              (__int64)v57,
                              (__int64)v26,
                              v25,
                              (__int64)v24);
              v21 = v47;
              v23 = v55;
            }
            if ( v46 && (~v15 & 0x40000) != 0 )
            {
              if ( MappingSize >= 0 )
              {
                if ( v57 && v19 )
                {
                  if ( v59 )
                    v23 = *v59;
                  MappingSize = LdrpFindMessageInAlternateModule(v49, *v57, v23, *(_DWORD *)(v61 + 24), 1);
                  if ( MappingSize < 0 )
                  {
                    *v57 = 0LL;
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
                v32 = v60;
                if ( v60 )
                {
                  if ( v21 )
                  {
                    v71 = Src;
                    v70[1] = 172;
                    MappingSize = RtlLcidToLocaleName(v21, v70, 2LL);
                    if ( MappingSize < 0 )
                      goto LABEL_41;
                    v43 = v70[0] >> 1;
                    v32 = v60;
                  }
                  else
                  {
                    Src[0] = 0;
                    v43 = 0;
                  }
                  if ( v43 >= *v32 || !v67 )
                  {
                    *v32 = v43 + 1;
                    MappingSize = -1073741789;
                    v58 = -1073741789;
                    goto LABEL_41;
                  }
                  memmove(v67, Src, 2LL * v43);
                  *v60 = v43 + 1;
                  *((_WORD *)v67 + v43) = 0;
                }
                break;
              }
            }
            if ( !v19 )
              break;
            if ( (int)LdrResGetRCConfig(v52, v53, (unsigned int)v68, 4096, 1) >= 0
              && (int)LdrResGetRCConfig(v49, v48, (unsigned int)&v69, 4096, 0) >= 0 )
            {
              v18 = v68[0];
              v42 = *(_QWORD *)(v68[0] + 28LL) - *(_QWORD *)(v69 + 28);
              if ( !v42 )
                v42 = *(_QWORD *)(v68[0] + 36LL) - *(_QWORD *)(v69 + 36);
              if ( !v42 )
                break;
            }
            continue;
          }
        }
        if ( v19 && (v10 & 0x200000) == 0 )
          LdrpResReportResourceAccessInternal(v49, v48, v61, a5);
        if ( MappingSize < 0 )
        {
          if ( v19 )
          {
            if ( v45 || v44 || (int)LdrpIsReparsePoint(v52, v18) < 0 )
            {
              if ( (v15 & 0x40000) != 0 )
                v19 = 0;
              else
                v15 |= 0x20000u;
            }
            else
            {
              v15 |= 0x400000u;
              v45 = 1;
            }
          }
          if ( v19 )
            continue;
        }
LABEL_41:
        if ( (MEMORY[0x7FFE0385] & 1) != 0 )
          LdrpTraceLoadMUIDll(&v72, MEMORY[0x7FFE0384]);
        return (unsigned int)MappingSize;
      }
    }
  }
  return result;
}

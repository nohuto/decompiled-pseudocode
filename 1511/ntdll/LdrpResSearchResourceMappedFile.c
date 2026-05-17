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

__int64 __fastcall LdrpResSearchResourceMappedFile(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 *a6,
        __int64 *a7,
        void *a8,
        unsigned int *a9)
{
  unsigned __int64 v11; // rdi
  __int64 v12; // r8
  char v13; // bl
  int v14; // ecx
  unsigned __int16 v15; // si
  __int64 v16; // rdx
  int v17; // r14d
  int v18; // ecx
  unsigned __int64 v19; // rbx
  bool v20; // r13
  bool v21; // cl
  int MappingSize; // edi
  unsigned __int16 v23; // si
  unsigned int i; // ebx
  unsigned __int16 *v25; // r11
  int v26; // r10d
  __int64 *v27; // rax
  __int64 v28; // rdx
  int v29; // r9d
  int v30; // r8d
  int v31; // ecx
  __int64 result; // rax
  int v33; // eax
  unsigned int *v34; // rcx
  __int16 v35; // cx
  int RCConfig; // eax
  unsigned __int16 v37; // cx
  __int64 v38; // r8
  int v39; // edi
  int AlternateResourceModule; // eax
  __int64 v41; // r9
  __int64 v42; // rbx
  __int64 v43; // rax
  unsigned int v44; // esi
  char v45; // [rsp+70h] [rbp-3F8h]
  char v46; // [rsp+71h] [rbp-3F7h]
  unsigned __int16 v47; // [rsp+74h] [rbp-3F4h] BYREF
  bool v48; // [rsp+78h] [rbp-3F0h]
  unsigned __int64 v49; // [rsp+80h] [rbp-3E8h] BYREF
  unsigned __int64 v50; // [rsp+88h] [rbp-3E0h] BYREF
  char v51; // [rsp+90h] [rbp-3D8h]
  unsigned __int64 v52; // [rsp+98h] [rbp-3D0h]
  int v53; // [rsp+A0h] [rbp-3C8h]
  unsigned __int64 v54; // [rsp+A8h] [rbp-3C0h]
  int v55; // [rsp+B0h] [rbp-3B8h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-3B0h] BYREF
  __int64 MUIFromCMFSegment; // [rsp+C0h] [rbp-3A8h]
  __int64 *v58; // [rsp+C8h] [rbp-3A0h]
  __int64 *v59; // [rsp+D0h] [rbp-398h]
  unsigned int *v60; // [rsp+D8h] [rbp-390h]
  int v61; // [rsp+E0h] [rbp-388h]
  __int64 v62; // [rsp+E8h] [rbp-380h]
  unsigned __int64 v63; // [rsp+F0h] [rbp-378h] BYREF
  __int64 v64; // [rsp+F8h] [rbp-370h] BYREF
  unsigned __int64 v65; // [rsp+100h] [rbp-368h] BYREF
  __int64 v66; // [rsp+108h] [rbp-360h] BYREF
  void *v67; // [rsp+110h] [rbp-358h]
  _QWORD v68[2]; // [rsp+118h] [rbp-350h] BYREF
  __int64 v69; // [rsp+128h] [rbp-340h] BYREF
  __int64 v70; // [rsp+130h] [rbp-338h] BYREF
  int v71; // [rsp+138h] [rbp-330h] BYREF
  const wchar_t *v72; // [rsp+140h] [rbp-328h]
  _WORD v73[4]; // [rsp+148h] [rbp-320h] BYREF
  _WORD *v74; // [rsp+150h] [rbp-318h]
  _WORD v75[2]; // [rsp+160h] [rbp-308h] BYREF
  _WORD v76[262]; // [rsp+164h] [rbp-304h]
  _WORD Src[88]; // [rsp+370h] [rbp-F8h] BYREF

  v62 = a4;
  v54 = a2;
  v11 = a1;
  v52 = a1;
  v58 = a6;
  v59 = a7;
  v67 = a8;
  v14 = (int)a9;
  v60 = a9;
  v12 = 0LL;
  v49 = 0LL;
  v63 = 0LL;
  v65 = 0LL;
  v69 = 0LL;
  v66 = 0LL;
  v13 = 0;
  v48 = (a3 & 0x40) != 0;
  v64 = 0LL;
  v45 = 0;
  MUIFromCMFSegment = 0LL;
  LOBYTE(v14) = 0;
  v53 = v14;
  v46 = 0;
  LODWORD(v68[0]) = 4980810;
  v68[1] = L"LdrpResSearchResourceMappedFile Enter";
  v71 = 4849736;
  v72 = L"LdrpResSearchResourceMappedFile Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
  {
    LdrpTraceLoadMUIDll(v68, MEMORY[0x7FFE0384]);
    LOBYTE(v14) = v53;
    v12 = 0LL;
  }
  v15 = 0;
  v16 = 128LL;
  v17 = 0;
  if ( (a3 & 0x80u) != 0 )
    v17 = 128;
  if ( (a3 & 8) != 0 )
  {
    v14 = (unsigned __int8)v14;
    if ( *(_QWORD *)a4 == 16LL )
      v14 = 1;
    v53 = v14;
  }
  v18 = a5;
  if ( a5 == 3 )
  {
    v15 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0
      || (v33 = wcsicmp(*(const wchar_t **)a4, L"MUI"), v12 = 0LL, v13 = 1, v33) )
    {
      v13 = 0;
    }
    v51 = v13;
    v18 = 3;
  }
  if ( (a3 & 0x10) != 0 || (unsigned int)(v18 - 1) > 2 )
    goto LABEL_8;
  if ( v18 == 3 )
    v35 = *(_WORD *)(a4 + 16);
  else
    v35 = 0;
  if ( (((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 || v13)
    && (~(_BYTE)a3 & 8) != 0
    && (v35 & 0xF3FF) == 0
    && v35 != 3072 )
  {
    a3 |= 0x10u;
LABEL_8:
    v19 = v54;
    goto LABEL_9;
  }
  v19 = v54;
  RCConfig = LdrResGetRCConfig(v11, v54, 0, a3, 1);
  MappingSize = RCConfig;
  if ( RCConfig >= 0 )
  {
    v11 = v52;
    v17 |= LdrIsResItemExist(v52, a4, v12, a3);
  }
  else
  {
    if ( RCConfig != -1073741686 )
      goto LABEL_41;
    v17 |= 0x80000u;
    v11 = v52;
  }
LABEL_9:
  if ( (v17 & 0x60000) == 0x60000 )
  {
    MappingSize = -1073741686;
    goto LABEL_41;
  }
  LOBYTE(v16) = (~v17 & 0x20000) != 0 && (~v17 & 0x80000) != 0 && (~(_BYTE)a3 & 0x10) != 0;
  v20 = (_BYTE)v16 != 0;
  v75[0] = 1;
  v76[0] = 0;
  if ( !(_BYTE)v16 && a5 != 3 || (a3 & 0x10) != 0 && (a3 & 0x20) != 0 )
    goto LABEL_140;
  if ( (a3 & 4) != 0 )
    v17 |= 4u;
  result = LdrResFallbackLangList(v11, v19, v15, v17, (__int64)v75);
  if ( (int)result >= 0 || (a3 & 0x1000) == 0 )
  {
LABEL_140:
    if ( (a3 & 0x10) == 0 && (~v17 & 0x40000) == 0 && (v17 & 0x80000) == 0
      || (result = LdrpResGetResourceDirectory(v11, v19, a3, &v63, (unsigned __int64 *)&v69), (int)result >= 0) )
    {
      while ( 1 )
      {
        v21 = v20;
        if ( (v17 & 0x20000) != 0 )
          v21 = 0;
        v20 = v21;
        MappingSize = 0;
        v50 = 0LL;
        v23 = 0;
        v47 = 0;
        for ( i = 0; ; ++i )
        {
          LODWORD(v56) = i;
          if ( i >= v75[0] )
            break;
          if ( !v20 )
            goto LABEL_18;
          v49 = 0LL;
          v50 = 0LL;
          v37 = v76[4 * i];
          if ( !v37 )
          {
            if ( *(_DWORD *)&v76[4 * i + 2] == 2 )
              continue;
LABEL_86:
            MappingSize = -1073741811;
            continue;
          }
          if ( *(_DWORD *)&v76[4 * i + 2] == 10 )
            goto LABEL_86;
          v23 = v76[4 * i];
          v47 = v23;
          v38 = 0LL;
          MUIFromCMFSegment = 0LL;
          v39 = v52;
          if ( (_BYTE)v53 )
          {
            v55 = 0;
            MUIFromCMFSegment = LdrpGetMUIFromCMFSegment(v52, v37, 0x1000000, 0, (__int64)&v55, (__int64)&v64);
            if ( !MUIFromCMFSegment )
              goto LABEL_77;
            v42 = v64;
            LdrpSetAlternateResourceModuleHandle(v39, 0, 0, 0, v55, v23, 4, 0, v64);
            v38 = MUIFromCMFSegment;
            if ( v58 )
              *v58 = MUIFromCMFSegment;
            if ( v59 )
              *v59 = v42;
            i = v56;
          }
          if ( v38 )
            goto LABEL_18;
LABEL_77:
          AlternateResourceModule = LdrLoadAlternateResourceModuleEx(
                                      v39,
                                      v23,
                                      (unsigned int)&v49,
                                      (unsigned int)&v50,
                                      v17 | 0x1000u);
          MappingSize = AlternateResourceModule;
          v41 = 0LL;
          if ( AlternateResourceModule < 0 )
          {
            if ( AlternateResourceModule == -1073741772 || AlternateResourceModule == -1073741766 )
              MappingSize = -1073020927;
            continue;
          }
          v45 = 1;
          if ( !v50 )
          {
            LOBYTE(v41) = 1;
            MappingSize = LdrpResGetMappingSize(v49, &v50, 512LL, v41);
          }
          if ( (a3 & 0x1000) != 0 && MappingSize < 0 )
            break;
          MappingSize = LdrpResGetResourceDirectory(v49, v50, a3, &v65, (unsigned __int64 *)&v66);
          if ( MappingSize >= 0 )
          {
LABEL_18:
            v12 = 0LL;
            v56 = 0LL;
            if ( MUIFromCMFSegment )
            {
              MappingSize = 0;
            }
            else
            {
              v25 = &v47;
              if ( v20 )
                v25 = 0LL;
              v26 = a3;
              if ( v20 )
                v26 = a3 | 0x20;
              v27 = &v56;
              if ( v59 )
                v27 = v59;
              v28 = v69;
              if ( v20 )
                v28 = v66;
              v29 = v63;
              if ( v20 )
                v29 = v65;
              v30 = v54;
              if ( v20 )
                v30 = v50;
              v31 = v52;
              if ( v20 )
                v31 = v49;
              MappingSize = LdrpResSearchResourceInsideDirectory(
                              v31,
                              0,
                              v30,
                              v29,
                              v28,
                              0LL,
                              v62,
                              a5,
                              (__int64)v75,
                              (__int64)v58,
                              (__int64)v27,
                              v26,
                              (__int64)v25);
              v23 = v47;
              v12 = v56;
            }
            if ( v48 && (~v17 & 0x40000) != 0 )
            {
              if ( MappingSize >= 0 )
              {
                if ( v58 && v20 )
                {
                  if ( v59 )
                    v12 = *v59;
                  MappingSize = LdrpFindMessageInAlternateModule(v49, *v58, v12, *(_DWORD *)(v62 + 24), 1);
                  if ( MappingSize < 0 )
                  {
                    *v58 = 0LL;
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
                v34 = v60;
                if ( v60 )
                {
                  if ( v23 )
                  {
                    v74 = Src;
                    v73[1] = 172;
                    MappingSize = RtlLcidToLocaleName(v23, (__int64)v73, 2, 0);
                    if ( MappingSize < 0 )
                      goto LABEL_41;
                    v44 = v73[0] >> 1;
                    v34 = v60;
                  }
                  else
                  {
                    Src[0] = 0;
                    v44 = 0;
                  }
                  if ( v44 >= *v34 || !v67 )
                  {
                    *v34 = v44 + 1;
                    MappingSize = -1073741789;
                    v61 = -1073741789;
                    goto LABEL_41;
                  }
                  memmove(v67, Src, 2LL * v44);
                  *v60 = v44 + 1;
                  *((_WORD *)v67 + v44) = 0;
                }
                break;
              }
            }
            if ( !v20 )
              break;
            if ( (int)LdrResGetRCConfig(v52, v54, (unsigned int)v68, 4096, 1) >= 0
              && (int)LdrResGetRCConfig(v49, v50, (unsigned int)&v70, 4096, 0) >= 0 )
            {
              v16 = v68[0];
              v43 = *(_QWORD *)(v68[0] + 28LL) - *(_QWORD *)(v70 + 28);
              if ( !v43 )
                v43 = *(_QWORD *)(v68[0] + 36LL) - *(_QWORD *)(v70 + 36);
              if ( !v43 )
                break;
            }
            continue;
          }
        }
        if ( v20 && (a3 & 0x200000) == 0 )
          LdrpResReportResourceAccessInternal(v49, v50, v62, a5);
        if ( MappingSize < 0 )
        {
          if ( v20 )
          {
            if ( v46 || v45 || (int)LdrpIsReparsePoint(v52, v16, v12, 0LL) < 0 )
            {
              if ( (v17 & 0x40000) != 0 )
                v20 = 0;
              else
                v17 |= 0x20000u;
            }
            else
            {
              v17 |= 0x400000u;
              v46 = 1;
            }
          }
          if ( v20 )
            continue;
        }
LABEL_41:
        if ( (MEMORY[0x7FFE0385] & 1) != 0 )
          LdrpTraceLoadMUIDll(&v71, MEMORY[0x7FFE0384]);
        return (unsigned int)MappingSize;
      }
    }
  }
  return result;
}

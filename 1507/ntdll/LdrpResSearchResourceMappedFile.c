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

__int64 __fastcall LdrpResSearchResourceMappedFile(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 *a6,
        __int64 *a7,
        void *a8,
        unsigned int *a9)
{
  __int64 v11; // r8
  char v12; // bl
  int v13; // ecx
  unsigned __int16 v14; // si
  unsigned __int64 v15; // rdx
  int v16; // r14d
  int v17; // edi
  unsigned __int64 v18; // rbx
  bool v19; // r13
  unsigned __int64 v20; // rdi
  int MappingSize; // edi
  unsigned int v22; // ecx
  int v23; // edi
  unsigned __int16 *v24; // r11
  int v25; // r10d
  __int64 *v26; // rax
  __int64 v27; // rdx
  int v28; // r9d
  int v29; // r8d
  int v30; // ecx
  __int64 *v31; // rsi
  __int64 v32; // rbx
  __int64 result; // rax
  int v34; // eax
  unsigned int *v35; // rcx
  __int16 v36; // cx
  int RCConfig; // eax
  __int64 v38; // rax
  unsigned __int16 v39; // cx
  unsigned __int16 v40; // si
  __int64 v41; // r8
  int AlternateResourceModule; // eax
  __int64 v43; // r9
  __int64 v44; // rbx
  int MessageInAlternateModule; // eax
  int v46; // ebx
  int v47; // esi
  __int64 v48; // rax
  unsigned int v49; // esi
  unsigned __int16 v50; // [rsp+70h] [rbp-3E8h] BYREF
  char v51; // [rsp+74h] [rbp-3E4h]
  char v52; // [rsp+75h] [rbp-3E3h]
  bool v53; // [rsp+76h] [rbp-3E2h]
  unsigned __int64 v54; // [rsp+78h] [rbp-3E0h]
  int v55; // [rsp+80h] [rbp-3D8h]
  char v56; // [rsp+84h] [rbp-3D4h]
  unsigned __int64 v57; // [rsp+88h] [rbp-3D0h] BYREF
  unsigned __int64 v58; // [rsp+90h] [rbp-3C8h] BYREF
  unsigned __int64 v59; // [rsp+98h] [rbp-3C0h]
  __int64 v60; // [rsp+A0h] [rbp-3B8h] BYREF
  unsigned int v61; // [rsp+A8h] [rbp-3B0h]
  __int64 MUIFromCMFSegment; // [rsp+B0h] [rbp-3A8h]
  __int64 *v63; // [rsp+B8h] [rbp-3A0h]
  __int64 *v64; // [rsp+C0h] [rbp-398h]
  int v65; // [rsp+C8h] [rbp-390h]
  unsigned int *v66; // [rsp+D0h] [rbp-388h]
  unsigned __int64 v67; // [rsp+D8h] [rbp-380h] BYREF
  void *v68; // [rsp+E0h] [rbp-378h]
  __int64 v69; // [rsp+E8h] [rbp-370h] BYREF
  __int64 v70; // [rsp+F0h] [rbp-368h]
  unsigned __int64 v71; // [rsp+F8h] [rbp-360h] BYREF
  __int64 v72; // [rsp+100h] [rbp-358h] BYREF
  _QWORD v73[2]; // [rsp+108h] [rbp-350h] BYREF
  __int64 v74; // [rsp+118h] [rbp-340h] BYREF
  __int64 v75; // [rsp+120h] [rbp-338h] BYREF
  int v76; // [rsp+128h] [rbp-330h] BYREF
  const wchar_t *v77; // [rsp+130h] [rbp-328h]
  _WORD v78[4]; // [rsp+138h] [rbp-320h] BYREF
  _WORD *v79; // [rsp+140h] [rbp-318h]
  _WORD v80[2]; // [rsp+150h] [rbp-308h] BYREF
  _WORD v81[262]; // [rsp+154h] [rbp-304h]
  _WORD Src[88]; // [rsp+360h] [rbp-F8h] BYREF

  v70 = a4;
  v59 = a2;
  v54 = a1;
  v63 = a6;
  v64 = a7;
  v68 = a8;
  v13 = (int)a9;
  v66 = a9;
  v11 = 0LL;
  v58 = 0LL;
  v71 = 0LL;
  v67 = 0LL;
  v72 = 0LL;
  v74 = 0LL;
  v12 = 0;
  v53 = (a3 & 0x40) != 0;
  v69 = 0LL;
  v51 = 0;
  MUIFromCMFSegment = 0LL;
  LOBYTE(v13) = 0;
  v55 = v13;
  v52 = 0;
  LODWORD(v73[0]) = 4980810;
  v73[1] = L"LdrpResSearchResourceMappedFile Enter";
  v76 = 4849736;
  v77 = L"LdrpResSearchResourceMappedFile Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
  {
    LdrpTraceLoadMUIDll(v73, MEMORY[0x7FFE0384]);
    LOBYTE(v13) = v55;
    v11 = 0LL;
  }
  v14 = 0;
  v15 = 128LL;
  v16 = 0;
  if ( (a3 & 0x80u) != 0 )
    v16 = 128;
  if ( (a3 & 8) != 0 )
  {
    v13 = (unsigned __int8)v13;
    if ( *(_QWORD *)a4 == 16LL )
      v13 = 1;
    v55 = v13;
  }
  v17 = a5;
  if ( a5 == 3 )
  {
    v14 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0
      || (v34 = wcsicmp(*(const wchar_t **)a4, L"MUI"), v11 = 0LL, v12 = 1, v34) )
    {
      v12 = 0;
    }
    v56 = v12;
  }
  if ( (a3 & 0x10) != 0 || (unsigned int)(a5 - 1) > 2 )
    goto LABEL_8;
  if ( a5 == 3 )
    v36 = *(_WORD *)(a4 + 16);
  else
    v36 = 0;
  if ( (((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 || v12)
    && (~(_BYTE)a3 & 8) != 0
    && (v36 & 0xF3FF) == 0
    && v36 != 3072 )
  {
    a3 |= 0x10u;
LABEL_8:
    v18 = v54;
    goto LABEL_9;
  }
  v18 = v54;
  RCConfig = LdrResGetRCConfig(v54, v59, 0, a3, 1);
  MappingSize = RCConfig;
  if ( RCConfig >= 0 )
  {
    v16 |= LdrIsResItemExist(v54, a4, v11, a3);
    v17 = a5;
  }
  else
  {
    if ( RCConfig != -1073741686 )
      goto LABEL_41;
    v16 |= 0x80000u;
    v17 = a5;
  }
LABEL_9:
  if ( (v16 & 0x60000) == 0x60000 )
  {
    MappingSize = -1073741686;
    goto LABEL_41;
  }
  LOBYTE(v15) = (~v16 & 0x20000) != 0 && (~v16 & 0x80000) != 0 && (~(_BYTE)a3 & 0x10) != 0;
  v19 = (_BYTE)v15 != 0;
  v80[0] = 1;
  v81[0] = 0;
  if ( !(_BYTE)v15 && v17 != 3 || (a3 & 0x10) != 0 && (a3 & 0x20) != 0 )
  {
    v20 = v59;
    goto LABEL_13;
  }
  if ( (a3 & 4) != 0 )
    v16 |= 4u;
  v20 = v59;
  result = LdrResFallbackLangList(v18, v59, v14, v16, (__int64)v80);
  if ( (int)result >= 0 || (a3 & 0x1000) == 0 )
  {
LABEL_13:
    if ( (a3 & 0x10) != 0 || (~v16 & 0x40000) != 0 || (v16 & 0x80000) != 0 )
    {
      result = LdrpResGetResourceDirectory(v18, v20, a3, &v71, (unsigned __int64 *)&v72);
      if ( (int)result < 0 )
        return result;
    }
    while ( 1 )
    {
      if ( (v16 & 0x20000) != 0 )
        v19 = 0;
      MappingSize = 0;
      v57 = 0LL;
      v50 = 0;
      v22 = 0;
      while ( 1 )
      {
        v61 = v22;
        if ( v22 >= v80[0] )
          break;
        if ( !v19 )
          goto LABEL_19;
        v58 = 0LL;
        v57 = 0LL;
        v38 = v22;
        v39 = v81[4 * v22];
        if ( !v39 )
        {
          if ( *(_DWORD *)&v81[4 * v38 + 2] == 2 )
            goto LABEL_126;
LABEL_88:
          MappingSize = -1073741811;
          goto LABEL_126;
        }
        if ( *(_DWORD *)&v81[4 * v38 + 2] == 10 )
          goto LABEL_88;
        v40 = v39;
        v50 = v39;
        v41 = 0LL;
        MUIFromCMFSegment = 0LL;
        if ( (_BYTE)v55 )
        {
          LODWORD(v60) = 0;
          MUIFromCMFSegment = LdrpGetMUIFromCMFSegment(v18, v39, 0x1000000, 0, &v60, &v69);
          if ( !MUIFromCMFSegment )
            goto LABEL_79;
          v44 = v69;
          v23 = v54;
          LdrpSetAlternateResourceModuleHandle(v54, 0, 0, 0, v60, v40, 4, 0, v69);
          v41 = MUIFromCMFSegment;
          if ( v63 )
            *v63 = MUIFromCMFSegment;
          if ( v64 )
            *v64 = v44;
        }
        else
        {
          v23 = v54;
        }
        if ( v41 )
          goto LABEL_20;
        LODWORD(v18) = v54;
LABEL_79:
        AlternateResourceModule = LdrLoadAlternateResourceModuleEx(
                                    v18,
                                    v40,
                                    (unsigned int)&v58,
                                    (unsigned int)&v57,
                                    v16 | 0x1000u);
        MappingSize = AlternateResourceModule;
        v43 = 0LL;
        if ( AlternateResourceModule < 0 )
        {
          if ( AlternateResourceModule == -1073741772 || AlternateResourceModule == -1073741766 )
            MappingSize = -1073020927;
          goto LABEL_126;
        }
        v51 = 1;
        v15 = v57;
        if ( !v57 )
        {
          LOBYTE(v43) = 1;
          MappingSize = LdrpResGetMappingSize(v58, &v57, 512LL, v43);
          v15 = v57;
        }
        if ( (a3 & 0x1000) != 0 && MappingSize < 0 )
          goto LABEL_39;
        MappingSize = LdrpResGetResourceDirectory(v58, v15, a3, &v67, (unsigned __int64 *)&v74);
        if ( MappingSize >= 0 )
        {
LABEL_19:
          v23 = v54;
LABEL_20:
          v11 = 0LL;
          v60 = 0LL;
          if ( MUIFromCMFSegment )
          {
            MappingSize = 0;
            v32 = v70;
            v31 = v63;
          }
          else
          {
            v24 = &v50;
            if ( v19 )
              v24 = 0LL;
            v25 = a3;
            if ( v19 )
              v25 = a3 | 0x20;
            v26 = &v60;
            if ( v64 )
              v26 = v64;
            v27 = v72;
            if ( v19 )
              v27 = v74;
            v28 = v71;
            if ( v19 )
              v28 = v67;
            v29 = v59;
            if ( v19 )
              v29 = v57;
            v30 = v23;
            if ( v19 )
              v30 = v58;
            v31 = v63;
            v32 = v70;
            MappingSize = LdrpResSearchResourceInsideDirectory(
                            v30,
                            0,
                            v29,
                            v28,
                            v27,
                            0LL,
                            v70,
                            a5,
                            (__int64)v80,
                            (__int64)v63,
                            (__int64)v26,
                            v25,
                            (__int64)v24);
            v11 = v60;
          }
          if ( v53 && (~v16 & 0x40000) != 0 )
          {
            if ( MappingSize >= 0 )
            {
              if ( v31 && v19 )
              {
                if ( v64 )
                  v11 = *v64;
                MessageInAlternateModule = LdrpFindMessageInAlternateModule(v58, *v31, v11, *(_DWORD *)(v32 + 24), 1);
                MappingSize = MessageInAlternateModule;
                if ( MessageInAlternateModule < 0 )
                {
                  *v31 = 0LL;
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
              v35 = v66;
              if ( v66 )
              {
                if ( v50 )
                {
                  v79 = Src;
                  v78[1] = 172;
                  MappingSize = RtlLcidToLocaleName(v50, v78, 2LL);
                  if ( MappingSize < 0 )
                    goto LABEL_41;
                  v49 = v78[0] >> 1;
                  v35 = v66;
                }
                else
                {
                  Src[0] = 0;
                  v49 = 0;
                }
                if ( v49 >= *v35 || !v68 )
                {
                  *v35 = v49 + 1;
                  MappingSize = -1073741789;
                  v65 = -1073741789;
                  goto LABEL_41;
                }
                memmove(v68, Src, 2LL * v49);
                *v66 = v49 + 1;
                *((_WORD *)v68 + v49) = 0;
              }
              break;
            }
          }
          if ( !v19 )
            goto LABEL_39;
          v46 = v57;
          v47 = v58;
          if ( (int)LdrResGetRCConfig(v54, v59, (unsigned int)v73, 4096, 1) >= 0
            && (int)LdrResGetRCConfig(v47, v46, (unsigned int)&v75, 4096, 0) >= 0 )
          {
            v15 = v73[0];
            v48 = *(_QWORD *)(v73[0] + 28LL) - *(_QWORD *)(v75 + 28);
            if ( !v48 )
              v48 = *(_QWORD *)(v73[0] + 36LL) - *(_QWORD *)(v75 + 36);
            if ( !v48 )
              break;
          }
        }
LABEL_126:
        v22 = v61 + 1;
        v18 = v54;
      }
      if ( MappingSize >= 0 )
        goto LABEL_41;
LABEL_39:
      if ( v19 )
      {
        if ( v52 || v51 || (int)LdrpIsReparsePoint(v54, v15, v11, 0LL) < 0 )
        {
          if ( (v16 & 0x40000) != 0 )
            v19 = 0;
          else
            v16 |= 0x20000u;
        }
        else
        {
          v16 |= 0x400000u;
          v52 = 1;
        }
      }
      v18 = v54;
      if ( !v19 )
      {
LABEL_41:
        if ( (MEMORY[0x7FFE0385] & 1) != 0 )
          LdrpTraceLoadMUIDll(&v76, MEMORY[0x7FFE0384]);
        return (unsigned int)MappingSize;
      }
    }
  }
  return result;
}

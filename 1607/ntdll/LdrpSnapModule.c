/*
 * XREFs of LdrpSnapModule @ 0x180033FA0
 * Callers:
 *     LdrpProcessWork @ 0x18000E19C (LdrpProcessWork.c)
 *     LdrpMapAndSnapDependency @ 0x180016434 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     CompatCachepLookupCdb @ 0x180010768 (CompatCachepLookupCdb.c)
 *     LdrpLogDllState @ 0x180015E20 (LdrpLogDllState.c)
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     LdrpDoPostSnapWork @ 0x18002DE4C (LdrpDoPostSnapWork.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1800316C4 (RtlpImageDirectoryEntryToData32.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 *     RtlpxLookupFunctionTable @ 0x1800362F0 (RtlpxLookupFunctionTable.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     LdrpFreeReplacedModule @ 0x18006B66C (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x18006B7D8 (LdrpHandlePendingModuleReplaced.c)
 *     LdrpReportError @ 0x18007AF88 (LdrpReportError.c)
 *     RtlCharToInteger @ 0x18007B8E0 (RtlCharToInteger.c)
 *     RtlAddressInSectionTable @ 0x180080BF0 (RtlAddressInSectionTable.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180081EC4 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogError @ 0x180086114 (LdrpLogError.c)
 *     strrchr @ 0x18009BAA0 (strrchr.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2D24 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpSnapModule(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  unsigned int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // r12
  unsigned __int64 v12; // r14
  bool v13; // di
  unsigned __int64 v14; // rbx
  _DWORD *v15; // r13
  int v16; // eax
  __int16 v17; // ax
  __int64 v18; // rdx
  char *v19; // r10
  unsigned __int64 v20; // r8
  unsigned int v21; // r9d
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // r15
  unsigned __int64 *v25; // r12
  __int64 v26; // rax
  int v27; // esi
  bool v28; // bl
  unsigned __int64 v29; // rcx
  unsigned __int16 *v30; // rax
  const char *v31; // r11
  int v32; // r8d
  int v33; // r10d
  int v34; // r9d
  const char *v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int8 v37; // cl
  int v38; // eax
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // r13
  unsigned __int64 v42; // rdi
  __int64 v43; // rsi
  char *v44; // r12
  char *v45; // rax
  __int16 v46; // bx
  const char *v47; // r14
  unsigned __int64 v48; // rsi
  bool v49; // bl
  unsigned __int64 v50; // rdi
  char *v51; // r15
  int v52; // eax
  __int16 v53; // ax
  __int64 v54; // rdx
  int v55; // r10d
  int v56; // r9d
  int v57; // r8d
  const char *v58; // rax
  signed __int64 v59; // rdx
  unsigned __int8 v60; // cl
  int v61; // eax
  ULONG v62; // edx
  unsigned __int64 v63; // rbx
  int v64; // eax
  ULONG v66; // ebx
  char v67; // al
  __int64 v68; // r14
  int v69; // ebx
  unsigned __int16 *v70; // rdx
  __int64 v71; // [rsp+40h] [rbp-138h]
  _DWORD *v72; // [rsp+48h] [rbp-130h]
  ULONG Value; // [rsp+50h] [rbp-128h] BYREF
  int v74; // [rsp+54h] [rbp-124h] BYREF
  unsigned int v75; // [rsp+58h] [rbp-120h]
  unsigned int v76; // [rsp+5Ch] [rbp-11Ch]
  __int64 v77; // [rsp+60h] [rbp-118h]
  __int64 v78; // [rsp+68h] [rbp-110h]
  _DWORD *v79; // [rsp+70h] [rbp-108h] BYREF
  __int64 v80; // [rsp+78h] [rbp-100h] BYREF
  __int64 *v81; // [rsp+80h] [rbp-F8h]
  unsigned __int64 *v82; // [rsp+88h] [rbp-F0h]
  unsigned __int64 v83; // [rsp+90h] [rbp-E8h]
  __int64 v84; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v85; // [rsp+A0h] [rbp-D8h] BYREF
  char *v86; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v87; // [rsp+B0h] [rbp-C8h] BYREF
  unsigned __int64 v88; // [rsp+B8h] [rbp-C0h]
  unsigned __int16 *v89; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 v90; // [rsp+C8h] [rbp-B0h]
  char *v91; // [rsp+D0h] [rbp-A8h]
  __int64 v92; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v93; // [rsp+E0h] [rbp-98h]
  char *v94; // [rsp+E8h] [rbp-90h]
  STRING SourceString; // [rsp+F0h] [rbp-88h] BYREF
  __int128 v96; // [rsp+100h] [rbp-78h] BYREF
  __int64 v97; // [rsp+110h] [rbp-68h]
  __int128 v98; // [rsp+118h] [rbp-60h] BYREF
  __int64 v99; // [rsp+128h] [rbp-50h]
  bool v101; // [rsp+188h] [rbp+10h]
  int v102; // [rsp+190h] [rbp+18h]
  unsigned int v103; // [rsp+198h] [rbp+20h] BYREF

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 48);
  v78 = v2;
  v92 = *(_QWORD *)(v2 + 48);
  LdrpLogDllState(v92, v2 + 72, 0x14A6u);
  LdrpHandlePendingModuleReplaced(v1);
  v75 = 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)(v1 + 112);
    if ( v3 >= *(_DWORD *)(v1 + 88) )
    {
      v27 = LdrpDoPostSnapWork(v1);
      if ( v27 >= 0 )
      {
        LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 0x14A7u);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
LABEL_108:
      if ( v27 >= 0 )
        return (unsigned int)v27;
LABEL_165:
      LdrpLogError((unsigned int)v27, 25LL, 0LL, v1);
      return (unsigned int)v27;
    }
    v4 = v3;
    v5 = *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8LL * v3);
    v6 = v5;
    v77 = v5;
    if ( v5 )
    {
      v7 = *(_QWORD *)(v5 + 176);
      if ( v7 )
      {
        if ( (*(_DWORD *)(v7 + 24) & 0x80000) == 0 && *(_QWORD *)(v7 + 48) != v5 )
        {
          v6 = *(_QWORD *)(v7 + 48);
          v77 = v6;
          *(_QWORD *)(v7 + 48) = v5;
        }
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8 * v4) != v6 )
    {
      LdrpFreeReplacedModule();
      *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8 * v4) = v6;
    }
    v8 = *(_QWORD *)(v1 + 120);
    v9 = *(unsigned int *)(v8 + 20 * v4);
    v10 = v92 + v9;
    v11 = v92 + *(unsigned int *)(v8 + 20 * v4 + 16);
    if ( !(_DWORD)v9 || (unsigned int)v9 > *(_DWORD *)(v2 + 64) )
      v10 = v92 + *(unsigned int *)(v8 + 20 * v4 + 16);
    if ( v6 )
      break;
LABEL_49:
    ++*(_DWORD *)(v1 + 112);
  }
  v12 = *(_QWORD *)(v6 + 48);
  v88 = v12;
  v13 = 1;
  v14 = v12;
  v84 = 0LL;
  v15 = 0LL;
  v72 = 0LL;
  v79 = 0LL;
  if ( (v12 & 3) != 0 )
  {
    v13 = (v12 & 1) == 0;
    v14 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v16 = RtlImageNtHeaderEx(1LL, v14, 0LL, &v84);
  if ( !v84 )
  {
LABEL_126:
    if ( v16 >= 0 )
      goto LABEL_20;
    goto LABEL_127;
  }
  v17 = *(_WORD *)(v84 + 24);
  if ( v17 == 267 )
  {
    v16 = RtlpImageDirectoryEntryToData32(v14, v13, 0, &v103, v84, &v79);
    v15 = v79;
    v72 = v79;
    goto LABEL_126;
  }
  if ( v17 != 523 || !*(_DWORD *)(v84 + 132) || (v18 = *(unsigned int *)(v84 + 136), !(_DWORD)v18) )
  {
LABEL_127:
    v15 = 0LL;
    goto LABEL_19;
  }
  v103 = *(_DWORD *)(v84 + 140);
  if ( !v13 && (unsigned int)v18 >= *(_DWORD *)(v84 + 84) )
  {
    v15 = (_DWORD *)RtlAddressInSectionTable(v84, v14, (unsigned int)v18);
    v72 = v15;
    if ( v15 )
    {
      v16 = 0;
      goto LABEL_126;
    }
    goto LABEL_127;
  }
  v15 = (_DWORD *)(v14 + v18);
LABEL_19:
  v72 = v15;
LABEL_20:
  if ( !v15 )
  {
    v67 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2371,
        (unsigned int)"LdrpSnapModule",
        0,
        (__int64)"DLL \"%wZ\" does not contain an export table\n",
        v77 + 72);
      v67 = LdrpDebugFlags;
    }
    if ( (v67 & 0x10) != 0 )
      __debugbreak();
    v27 = -1073741701;
    v1 = a1;
    goto LABEL_165;
  }
  if ( qword_180163310 )
  {
    if ( v12 < *((_QWORD *)&xmmword_180163430 + 1)
      || v12 >= *((_QWORD *)&xmmword_180163430 + 1) + (unsigned __int64)(unsigned int)qword_180163440 )
    {
      RtlpxLookupFunctionTable(v12, &v96);
    }
    else
    {
      v96 = xmmword_180163430;
      v97 = qword_180163440;
    }
    if ( *((_QWORD *)&v96 + 1) != v12 )
      __fastfail(0x18u);
  }
  v19 = (char *)v15 + v103;
  v91 = v19;
  v20 = v12 + (unsigned int)v15[7];
  v90 = v20;
  v21 = v15[6];
  v76 = v21;
  v22 = v12 + (unsigned int)v15[8];
  v83 = v22;
  v93 = v12 + (unsigned int)v15[9];
  v1 = a1;
  v23 = 8LL * *(unsigned int *)(a1 + 116);
  v24 = (__int64 *)(v23 + v10);
  v25 = (unsigned __int64 *)(v23 + v11);
  while ( 1 )
  {
    v82 = v25;
    v81 = v24;
    v26 = *v24;
    if ( !*v24 )
    {
      *(_DWORD *)(v1 + 116) = 0;
      v2 = v78;
      goto LABEL_49;
    }
    v27 = -1073741702;
    v28 = v26 < 0;
    v101 = v26 < 0;
    v29 = -4530927LL;
    v71 = -4530927LL;
    v89 = 0LL;
    if ( v26 < 0 )
    {
      v75 = (unsigned __int16)v26;
      v39 = (unsigned __int16)v26 - v15[4];
    }
    else
    {
      v30 = (unsigned __int16 *)(*(_QWORD *)(v78 + 48) + (unsigned int)v26);
      v31 = (const char *)(v30 + 1);
      v89 = v30 + 1;
      v32 = *v30;
      v33 = 0;
      v34 = v21 - 1;
      if ( v32 >= v76 )
      {
        v32 = v34 / 2;
        v22 = v83;
      }
      if ( v34 < 0 )
        goto LABEL_134;
      while ( 1 )
      {
        v35 = v31;
        v36 = v12 + *(unsigned int *)(v22 + 4LL * v32) - (_QWORD)v31;
        while ( 1 )
        {
          v37 = *v35;
          if ( *v35 != v35[v36] )
            break;
          ++v35;
          if ( !v37 )
          {
            v38 = 0;
            goto LABEL_35;
          }
        }
        v38 = v37 < (unsigned int)v35[v36] ? -1 : 1;
LABEL_35:
        if ( !v38 )
          break;
        if ( v38 < 0 )
          v34 = v32 - 1;
        else
          v33 = v32 + 1;
        v32 = (v34 + v33) / 2;
        v22 = v83;
        if ( v34 < v33 )
        {
          v29 = -4530927LL;
LABEL_134:
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              1325,
              (unsigned int)"LdrpNameToOrdinal",
              1,
              (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
              v31,
              (const void *)v12);
            v29 = -4530927LL;
          }
          if ( (LdrpDebugFlags & 0x40) != 0 )
            __debugbreak();
          goto LABEL_45;
        }
      }
      v39 = *(unsigned __int16 *)(v93 + 2LL * v32);
      v20 = v90;
      v19 = v91;
    }
    if ( (unsigned int)v39 >= v15[5] )
      goto LABEL_155;
    _mm_lfence();
    v40 = *(unsigned int *)(v20 + 4LL * v39);
    if ( !(_DWORD)v40 )
    {
      v27 = -1073741702;
      goto LABEL_155;
    }
    v29 = v12 + v40;
    v71 = v29;
    v27 = 0;
    if ( v29 > (unsigned __int64)v15 && v29 < (unsigned __int64)v19 )
      break;
LABEL_45:
    if ( v27 < 0 )
    {
      if ( v27 == -1073741702 || v27 == -1073741515 )
      {
        v68 = v78;
        if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v78 + 80), 128)
          || (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v77 + 80), 128) )
        {
          v69 = v77 + 72;
          LdrpLogLoadFailureEtwEvent(v68 + 72, v77 + 72, 1, (unsigned int)&LoadFailure, 0);
          LdrpLogLoadFailureEtwEvent(v68 + 72, v69, 1, (unsigned int)&LoadFailureOperational, 1);
          v28 = v101;
          v1 = a1;
        }
        if ( v28 )
        {
          v27 = -1073741512;
          v70 = (unsigned __int16 *)v75;
        }
        else
        {
          v27 = -1073741511;
          v70 = v89;
        }
        LdrpReportError(v68 + 72, v70, (unsigned int)v27);
      }
      goto LABEL_108;
    }
    *v25 = v29;
    ++v24;
    ++v25;
    ++*(_DWORD *)(v1 + 116);
    v22 = v83;
    v21 = v76;
    v20 = v90;
    v19 = v91;
  }
  v41 = v77;
  v42 = v29;
  v102 = 0;
  v80 = 0LL;
  v43 = *(_QWORD *)(v78 + 176);
  v79 = (_DWORD *)v43;
  v87 = 0LL;
  v44 = v94;
  while ( 1 )
  {
    v45 = strrchr((const char *)v42, 46);
    if ( !v45 || (v46 = (_WORD)v45 - v42, (unsigned __int64)&v45[-v42] > 0xFFFF) )
    {
LABEL_152:
      v27 = -1073741701;
      goto LABEL_91;
    }
    SourceString.Buffer = (char *)v42;
    SourceString.Length = (_WORD)v45 - v42;
    SourceString.MaximumLength = (_WORD)v45 - v42;
    v47 = v45 + 1;
    if ( v45[1] == 35 )
    {
      if ( RtlCharToInteger(v45 + 2, 0, &Value) < 0 )
        goto LABEL_152;
      v47 = 0LL;
    }
    if ( v46 == 5 && (*(_DWORD *)v42 | 0x20202020) == 0x6C64746E && (*(_BYTE *)(v42 + 4) | 0x20) == 0x6C )
    {
      v41 = LdrpNtDllDataTableEntry;
      v80 = LdrpNtDllDataTableEntry;
    }
    else
    {
      v64 = LdrpLoadDependentModule(&SourceString, v43, v41, 1, (__int64)&v80, &v87);
      v27 = v64;
      if ( v64 < 0 || v64 == 259 )
        goto LABEL_91;
      v41 = v80;
    }
    v48 = *(_QWORD *)(v41 + 48);
    v49 = 1;
    v50 = v48;
    v85 = 0LL;
    v51 = 0LL;
    v86 = 0LL;
    if ( (v48 & 3) != 0 )
    {
      v49 = (v48 & 1) == 0;
      v50 = v48 & 0xFFFFFFFFFFFFFFFCuLL;
    }
    v52 = RtlImageNtHeaderEx(1LL, v50, 0LL, &v85);
    if ( !v85 )
      goto LABEL_142;
    v53 = *(_WORD *)(v85 + 24);
    if ( v53 == 267 )
    {
      v52 = RtlpImageDirectoryEntryToData32(v50, v49, 0, &v74, v85, &v86);
      v51 = v86;
      goto LABEL_142;
    }
    if ( v53 == 523 )
    {
      if ( *(_DWORD *)(v85 + 132) )
      {
        v54 = *(unsigned int *)(v85 + 136);
        if ( (_DWORD)v54 )
        {
          v74 = *(_DWORD *)(v85 + 140);
          if ( v49 || (unsigned int)v54 < *(_DWORD *)(v85 + 84) )
          {
            v51 = (char *)(v50 + v54);
            goto LABEL_68;
          }
          v51 = (char *)RtlAddressInSectionTable(v85, v50, (unsigned int)v54);
          if ( v51 )
          {
            v52 = 0;
LABEL_142:
            if ( v52 >= 0 )
              goto LABEL_68;
          }
        }
      }
    }
    v51 = 0LL;
LABEL_68:
    if ( !v51 )
      goto LABEL_148;
    if ( v47 )
    {
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          638,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          (__int64)"Locating procedure \"%s\" by name\n",
          v47);
      v55 = 0;
      v56 = *((_DWORD *)v51 + 6) - 1;
      v57 = v56 / 2;
      if ( v56 < 0 )
      {
LABEL_144:
        if ( (LdrpDebugFlags & 3) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            1325,
            (unsigned int)"LdrpNameToOrdinal",
            1,
            (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
            v47,
            (const void *)v48);
        if ( (LdrpDebugFlags & 0x40) != 0 )
          __debugbreak();
LABEL_148:
        v27 = -1073741702;
        goto LABEL_91;
      }
      while ( 1 )
      {
        v58 = v47;
        v59 = v48 + *(unsigned int *)(v48 + *((unsigned int *)v51 + 8) + 4LL * v57) - (_QWORD)v47;
        while ( 1 )
        {
          v60 = *v58;
          if ( *v58 != v58[v59] )
            break;
          ++v58;
          if ( !v60 )
          {
            v61 = 0;
            goto LABEL_77;
          }
        }
        v61 = v60 < (unsigned int)v58[v59] ? -1 : 1;
LABEL_77:
        if ( !v61 )
          break;
        if ( v61 >= 0 )
          v55 = v57 + 1;
        else
          v56 = v57 - 1;
        v57 = (v56 + v55) / 2;
        if ( v56 < v55 )
          goto LABEL_144;
      }
      v62 = *(unsigned __int16 *)(v48 + *((unsigned int *)v51 + 9) + 2LL * v57);
    }
    else
    {
      v66 = Value;
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          656,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          (__int64)"Loading procedure 0x%lx by ordinal\n",
          Value);
      if ( !v66 )
      {
        v27 = -1073741811;
        goto LABEL_91;
      }
      v62 = v66 - *((_DWORD *)v51 + 4);
    }
    if ( v62 >= *((_DWORD *)v51 + 5) )
    {
      v27 = (v47 != 0LL) - 1073741512;
      goto LABEL_91;
    }
    v44 = (char *)(v48 + *(unsigned int *)(v48 + *((unsigned int *)v51 + 7) + 4LL * (int)v62));
    v94 = v44;
    if ( v44 < v51 || v44 >= &v51[v74] )
      break;
    if ( ++v102 == 32 )
      goto LABEL_152;
    v42 = (unsigned __int64)v44;
    v43 = (__int64)v79;
  }
  v27 = 0;
  v63 = *(_QWORD *)(v41 + 48);
  if ( qword_180163310 )
  {
    if ( v63 < *((_QWORD *)&xmmword_180163430 + 1)
      || v63 >= *((_QWORD *)&xmmword_180163430 + 1) + (unsigned __int64)(unsigned int)qword_180163440 )
    {
      RtlpxLookupFunctionTable(*(_QWORD *)(v41 + 48), &v98);
    }
    else
    {
      v98 = xmmword_180163430;
      v99 = qword_180163440;
    }
    if ( *((_QWORD *)&v98 + 1) != v63 )
      __fastfail(0x18u);
  }
LABEL_91:
  if ( v87 )
    RtlFreeHeap(LdrpHeap, 0LL, v87);
  if ( v27 != 259 )
  {
    v12 = v88;
    v24 = v81;
    v28 = v101;
    v15 = v72;
    v1 = a1;
    if ( v27 >= 0 )
    {
      v29 = (unsigned __int64)v44;
      v25 = v82;
      goto LABEL_45;
    }
    v25 = v82;
LABEL_155:
    v29 = v71;
    goto LABEL_45;
  }
  return 0LL;
}

/*
 * XREFs of LdrpSnapModule @ 0x180033F90
 * Callers:
 *     LdrpProcessWork @ 0x18000E18C (LdrpProcessWork.c)
 *     LdrpMapAndSnapDependency @ 0x180016424 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     CompatCachepLookupCdb @ 0x180010758 (CompatCachepLookupCdb.c)
 *     LdrpLogDllState @ 0x180015E10 (LdrpLogDllState.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     LdrpDoPostSnapWork @ 0x18002DE3C (LdrpDoPostSnapWork.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1800316B4 (RtlpImageDirectoryEntryToData32.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     RtlpxLookupFunctionTable @ 0x1800362E0 (RtlpxLookupFunctionTable.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     LdrpFreeReplacedModule @ 0x18006B65C (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x18006B7C8 (LdrpHandlePendingModuleReplaced.c)
 *     LdrpReportError @ 0x18007AF78 (LdrpReportError.c)
 *     RtlCharToInteger @ 0x18007B8D0 (RtlCharToInteger.c)
 *     RtlAddressInSectionTable @ 0x180080BE0 (RtlAddressInSectionTable.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180081EB4 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogError @ 0x180086104 (LdrpLogError.c)
 *     strrchr @ 0x18009BA90 (strrchr.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2DE4 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpSnapModule(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  unsigned int v3; // eax
  __int64 v4; // rbx
  unsigned __int64 *v5; // rcx
  unsigned __int64 *v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // r12
  unsigned __int64 v13; // r14
  bool v14; // di
  char *v15; // rbx
  char *v16; // r13
  int v17; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rdx
  char *v20; // r10
  unsigned __int64 v21; // r8
  unsigned int v22; // r9d
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 *v25; // r15
  unsigned __int64 *v26; // r12
  __int64 v27; // rax
  NTSTATUS v28; // esi
  bool v29; // bl
  unsigned __int64 v30; // rcx
  unsigned __int16 *v31; // rax
  const char *v32; // r11
  int v33; // r8d
  int v34; // r10d
  int v35; // r9d
  const char *v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int8 v38; // cl
  int v39; // eax
  int v40; // ecx
  __int64 v41; // rcx
  __int64 v42; // r13
  unsigned __int64 v43; // rdi
  __int64 v44; // rsi
  char *v45; // r12
  char *v46; // rax
  __int16 v47; // bx
  const char *v48; // r14
  unsigned __int64 v49; // rsi
  bool v50; // bl
  char *v51; // rdi
  char *v52; // r15
  int v53; // eax
  unsigned __int16 v54; // ax
  __int64 v55; // rdx
  int v56; // r10d
  int v57; // r9d
  int v58; // r8d
  const char *v59; // rax
  signed __int64 v60; // rdx
  unsigned __int8 v61; // cl
  int v62; // eax
  ULONG v63; // edx
  unsigned __int64 v64; // rbx
  int v65; // eax
  ULONG v67; // ebx
  char v68; // al
  __int64 v69; // r14
  __int64 v70; // rbx
  unsigned __int16 *v71; // rdx
  int v72; // [rsp+20h] [rbp-158h]
  int v73; // [rsp+20h] [rbp-158h]
  __int64 v74; // [rsp+40h] [rbp-138h]
  __int64 v75; // [rsp+48h] [rbp-130h]
  ULONG Value; // [rsp+50h] [rbp-128h] BYREF
  int v77; // [rsp+54h] [rbp-124h] BYREF
  unsigned int v78; // [rsp+58h] [rbp-120h]
  unsigned int v79; // [rsp+5Ch] [rbp-11Ch]
  __int64 v80; // [rsp+60h] [rbp-118h]
  __int64 v81; // [rsp+68h] [rbp-110h]
  __int64 v82; // [rsp+70h] [rbp-108h] BYREF
  __int64 v83; // [rsp+78h] [rbp-100h] BYREF
  __int64 *v84; // [rsp+80h] [rbp-F8h]
  unsigned __int64 *v85; // [rsp+88h] [rbp-F0h]
  unsigned __int64 v86; // [rsp+90h] [rbp-E8h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+98h] [rbp-E0h] BYREF
  PIMAGE_NT_HEADERS NtHeaders; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v89; // [rsp+A8h] [rbp-D0h] BYREF
  PVOID BaseAddress; // [rsp+B0h] [rbp-C8h] BYREF
  unsigned __int64 v91; // [rsp+B8h] [rbp-C0h]
  unsigned __int16 *v92; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 v93; // [rsp+C8h] [rbp-B0h]
  char *v94; // [rsp+D0h] [rbp-A8h]
  __int64 v95; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v96; // [rsp+E0h] [rbp-98h]
  char *v97; // [rsp+E8h] [rbp-90h]
  ANSI_STRING SourceString; // [rsp+F0h] [rbp-88h] BYREF
  __int128 v99; // [rsp+100h] [rbp-78h]
  __int64 v100; // [rsp+110h] [rbp-68h]
  __int128 v101; // [rsp+118h] [rbp-60h]
  __int64 v102; // [rsp+128h] [rbp-50h]
  bool v104; // [rsp+188h] [rbp+10h]
  int v105; // [rsp+190h] [rbp+18h]
  int Size; // [rsp+198h] [rbp+20h] BYREF

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 48);
  v81 = v2;
  v95 = *(_QWORD *)(v2 + 48);
  LdrpLogDllState(v95, v2 + 72, 0x14A6u);
  LdrpHandlePendingModuleReplaced(v1);
  v78 = 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)(v1 + 112);
    if ( v3 >= *(_DWORD *)(v1 + 88) )
    {
      v28 = LdrpDoPostSnapWork(v1);
      if ( v28 >= 0 )
      {
        LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 0x14A7u);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
LABEL_108:
      if ( v28 >= 0 )
        return (unsigned int)v28;
LABEL_165:
      LdrpLogError((unsigned int)v28, 25LL, 0LL, v1);
      return (unsigned int)v28;
    }
    v4 = v3;
    v5 = *(unsigned __int64 **)(*(_QWORD *)(v1 + 80) + 8LL * v3);
    v6 = v5;
    v80 = (__int64)v5;
    if ( v5 )
    {
      v7 = v5[22];
      if ( v7 )
      {
        if ( (*(_DWORD *)(v7 + 24) & 0x80000) == 0 && *(unsigned __int64 **)(v7 + 48) != v5 )
        {
          v6 = *(unsigned __int64 **)(v7 + 48);
          v80 = (__int64)v6;
          *(_QWORD *)(v7 + 48) = v5;
        }
      }
    }
    v8 = *(unsigned __int64 **)(*(_QWORD *)(v1 + 80) + 8 * v4);
    if ( v8 != v6 )
    {
      LdrpFreeReplacedModule(v8);
      *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8 * v4) = v6;
    }
    v9 = *(_QWORD *)(v1 + 120);
    v10 = *(unsigned int *)(v9 + 20 * v4);
    v11 = v95 + v10;
    v12 = v95 + *(unsigned int *)(v9 + 20 * v4 + 16);
    if ( !(_DWORD)v10 || (unsigned int)v10 > *(_DWORD *)(v2 + 64) )
      v11 = v95 + *(unsigned int *)(v9 + 20 * v4 + 16);
    if ( v6 )
      break;
LABEL_49:
    ++*(_DWORD *)(v1 + 112);
  }
  v13 = v6[6];
  v91 = v13;
  v14 = 1;
  v15 = (char *)v13;
  OutHeaders = 0LL;
  v16 = 0LL;
  v75 = 0LL;
  v82 = 0LL;
  if ( (v13 & 3) != 0 )
  {
    v14 = (v13 & 1) == 0;
    v15 = (char *)(v13 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  v17 = RtlImageNtHeaderEx(1u, v15, 0LL, &OutHeaders);
  if ( !OutHeaders )
  {
LABEL_126:
    if ( v17 >= 0 )
      goto LABEL_20;
    goto LABEL_127;
  }
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic == 267 )
  {
    v17 = RtlpImageDirectoryEntryToData32((__int64)v15, (void *)v14, 0, &Size, OutHeaders, &v82);
    v16 = (char *)v82;
    v75 = v82;
    goto LABEL_126;
  }
  if ( Magic != 523
    || !OutHeaders->OptionalHeader.NumberOfRvaAndSizes
    || (VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress, !(_DWORD)VirtualAddress) )
  {
LABEL_127:
    v16 = 0LL;
    goto LABEL_19;
  }
  Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
  if ( !v14 && (unsigned int)VirtualAddress >= OutHeaders->OptionalHeader.SizeOfHeaders )
  {
    v16 = (char *)RtlAddressInSectionTable(OutHeaders, v15, VirtualAddress);
    v75 = (__int64)v16;
    if ( v16 )
    {
      v17 = 0;
      goto LABEL_126;
    }
    goto LABEL_127;
  }
  v16 = &v15[VirtualAddress];
LABEL_19:
  v75 = (__int64)v16;
LABEL_20:
  if ( !v16 )
  {
    v68 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2371,
        (unsigned int)"LdrpSnapModule",
        0,
        (__int64)"DLL \"%wZ\" does not contain an export table\n",
        v80 + 72);
      v68 = LdrpDebugFlags;
    }
    if ( (v68 & 0x10) != 0 )
      __debugbreak();
    v28 = -1073741701;
    v1 = a1;
    goto LABEL_165;
  }
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
  {
    if ( v13 < *((_QWORD *)&xmmword_180163430 + 1)
      || v13 >= *((_QWORD *)&xmmword_180163430 + 1) + (unsigned __int64)(unsigned int)qword_180163440 )
    {
      RtlpxLookupFunctionTable((PVOID)v13);
    }
    else
    {
      v99 = xmmword_180163430;
      v100 = qword_180163440;
    }
    if ( *((_QWORD *)&v99 + 1) != v13 )
      __fastfail(0x18u);
  }
  v20 = &v16[Size];
  v94 = v20;
  v21 = v13 + *((unsigned int *)v16 + 7);
  v93 = v21;
  v22 = *((_DWORD *)v16 + 6);
  v79 = v22;
  v23 = v13 + *((unsigned int *)v16 + 8);
  v86 = v23;
  v96 = v13 + *((unsigned int *)v16 + 9);
  v1 = a1;
  v24 = 8LL * *(unsigned int *)(a1 + 116);
  v25 = (__int64 *)(v24 + v11);
  v26 = (unsigned __int64 *)(v24 + v12);
  while ( 1 )
  {
    v85 = v26;
    v84 = v25;
    v27 = *v25;
    if ( !*v25 )
    {
      *(_DWORD *)(v1 + 116) = 0;
      v2 = v81;
      goto LABEL_49;
    }
    v28 = -1073741702;
    v29 = v27 < 0;
    v104 = v27 < 0;
    v30 = -4530927LL;
    v74 = -4530927LL;
    v92 = 0LL;
    if ( v27 < 0 )
    {
      v78 = (unsigned __int16)v27;
      v40 = (unsigned __int16)v27 - *((_DWORD *)v16 + 4);
    }
    else
    {
      v31 = (unsigned __int16 *)(*(_QWORD *)(v81 + 48) + (unsigned int)v27);
      v32 = (const char *)(v31 + 1);
      v92 = v31 + 1;
      v33 = *v31;
      v34 = 0;
      v35 = v22 - 1;
      if ( v33 >= v79 )
      {
        v33 = v35 / 2;
        v23 = v86;
      }
      if ( v35 < 0 )
        goto LABEL_134;
      while ( 1 )
      {
        v36 = v32;
        v37 = v13 + *(unsigned int *)(v23 + 4LL * v33) - (_QWORD)v32;
        while ( 1 )
        {
          v38 = *v36;
          if ( *v36 != v36[v37] )
            break;
          ++v36;
          if ( !v38 )
          {
            v39 = 0;
            goto LABEL_35;
          }
        }
        v39 = v38 < (unsigned int)v36[v37] ? -1 : 1;
LABEL_35:
        if ( !v39 )
          break;
        if ( v39 < 0 )
          v35 = v33 - 1;
        else
          v34 = v33 + 1;
        v33 = (v35 + v34) / 2;
        v23 = v86;
        if ( v35 < v34 )
        {
          v30 = -4530927LL;
LABEL_134:
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              1325,
              (unsigned int)"LdrpNameToOrdinal",
              1,
              (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
              v32,
              (const void *)v13);
            v30 = -4530927LL;
          }
          if ( (LdrpDebugFlags & 0x40) != 0 )
            __debugbreak();
          goto LABEL_45;
        }
      }
      v40 = *(unsigned __int16 *)(v96 + 2LL * v33);
      v21 = v93;
      v20 = v94;
    }
    if ( (unsigned int)v40 >= *((_DWORD *)v16 + 5) )
      goto LABEL_155;
    _mm_lfence();
    v41 = *(unsigned int *)(v21 + 4LL * v40);
    if ( !(_DWORD)v41 )
    {
      v28 = -1073741702;
      goto LABEL_155;
    }
    v30 = v13 + v41;
    v74 = v30;
    v28 = 0;
    if ( v30 > (unsigned __int64)v16 && v30 < (unsigned __int64)v20 )
      break;
LABEL_45:
    if ( v28 < 0 )
    {
      if ( v28 == -1073741702 || v28 == -1073741515 )
      {
        v69 = v81;
        if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v81 + 80), 128)
          || (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v80 + 80), 128) )
        {
          v70 = v80 + 72;
          LOBYTE(v72) = 0;
          LdrpLogLoadFailureEtwEvent(v69 + 72, v80 + 72, 1LL, &LoadFailure, v72);
          LOBYTE(v73) = 1;
          LdrpLogLoadFailureEtwEvent(v69 + 72, v70, 1LL, &LoadFailureOperational, v73);
          v29 = v104;
          v1 = a1;
        }
        if ( v29 )
        {
          v28 = -1073741512;
          v71 = (unsigned __int16 *)v78;
        }
        else
        {
          v28 = -1073741511;
          v71 = v92;
        }
        LdrpReportError(v69 + 72, v71, (unsigned int)v28);
      }
      goto LABEL_108;
    }
    *v26 = v30;
    ++v25;
    ++v26;
    ++*(_DWORD *)(v1 + 116);
    v23 = v86;
    v22 = v79;
    v21 = v93;
    v20 = v94;
  }
  v42 = v80;
  v43 = v30;
  v105 = 0;
  v83 = 0LL;
  v44 = *(_QWORD *)(v81 + 176);
  v82 = v44;
  BaseAddress = 0LL;
  v45 = v97;
  while ( 1 )
  {
    v46 = strrchr((const char *)v43, 46);
    if ( !v46 || (v47 = (_WORD)v46 - v43, (unsigned __int64)&v46[-v43] > 0xFFFF) )
    {
LABEL_152:
      v28 = -1073741701;
      goto LABEL_91;
    }
    SourceString.Buffer = (char *)v43;
    SourceString.Length = (_WORD)v46 - v43;
    SourceString.MaximumLength = (_WORD)v46 - v43;
    v48 = v46 + 1;
    if ( v46[1] == 35 )
    {
      if ( RtlCharToInteger(v46 + 2, 0, &Value) < 0 )
        goto LABEL_152;
      v48 = 0LL;
    }
    if ( v47 == 5 && (*(_DWORD *)v43 | 0x20202020) == 0x6C64746E && (*(_BYTE *)(v43 + 4) | 0x20) == 0x6C )
    {
      v42 = LdrpNtDllDataTableEntry;
      v83 = LdrpNtDllDataTableEntry;
    }
    else
    {
      v65 = LdrpLoadDependentModule(&SourceString, v44, v42, 1, (PVOID *)&v83, &BaseAddress);
      v28 = v65;
      if ( v65 < 0 || v65 == 259 )
        goto LABEL_91;
      v42 = v83;
    }
    v49 = *(_QWORD *)(v42 + 48);
    v50 = 1;
    v51 = (char *)v49;
    NtHeaders = 0LL;
    v52 = 0LL;
    v89 = 0LL;
    if ( (v49 & 3) != 0 )
    {
      v50 = (v49 & 1) == 0;
      v51 = (char *)(v49 & 0xFFFFFFFFFFFFFFFCuLL);
    }
    v53 = RtlImageNtHeaderEx(1u, v51, 0LL, &NtHeaders);
    if ( !NtHeaders )
      goto LABEL_142;
    v54 = NtHeaders->OptionalHeader.Magic;
    if ( v54 == 267 )
    {
      v53 = RtlpImageDirectoryEntryToData32((__int64)v51, (void *)v50, 0, &v77, NtHeaders, &v89);
      v52 = (char *)v89;
      goto LABEL_142;
    }
    if ( v54 == 523 )
    {
      if ( NtHeaders->OptionalHeader.NumberOfRvaAndSizes )
      {
        v55 = NtHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
        if ( (_DWORD)v55 )
        {
          v77 = NtHeaders->OptionalHeader.DataDirectory[0].Size;
          if ( v50 || (unsigned int)v55 < NtHeaders->OptionalHeader.SizeOfHeaders )
          {
            v52 = &v51[v55];
            goto LABEL_68;
          }
          v52 = (char *)RtlAddressInSectionTable(NtHeaders, v51, v55);
          if ( v52 )
          {
            v53 = 0;
LABEL_142:
            if ( v53 >= 0 )
              goto LABEL_68;
          }
        }
      }
    }
    v52 = 0LL;
LABEL_68:
    if ( !v52 )
      goto LABEL_148;
    if ( v48 )
    {
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          638,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          (__int64)"Locating procedure \"%s\" by name\n",
          v48);
      v56 = 0;
      v57 = *((_DWORD *)v52 + 6) - 1;
      v58 = v57 / 2;
      if ( v57 < 0 )
      {
LABEL_144:
        if ( (LdrpDebugFlags & 3) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            1325,
            (unsigned int)"LdrpNameToOrdinal",
            1,
            (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
            v48,
            (const void *)v49);
        if ( (LdrpDebugFlags & 0x40) != 0 )
          __debugbreak();
LABEL_148:
        v28 = -1073741702;
        goto LABEL_91;
      }
      while ( 1 )
      {
        v59 = v48;
        v60 = v49 + *(unsigned int *)(v49 + *((unsigned int *)v52 + 8) + 4LL * v58) - (_QWORD)v48;
        while ( 1 )
        {
          v61 = *v59;
          if ( *v59 != v59[v60] )
            break;
          ++v59;
          if ( !v61 )
          {
            v62 = 0;
            goto LABEL_77;
          }
        }
        v62 = v61 < (unsigned int)v59[v60] ? -1 : 1;
LABEL_77:
        if ( !v62 )
          break;
        if ( v62 >= 0 )
          v56 = v58 + 1;
        else
          v57 = v58 - 1;
        v58 = (v57 + v56) / 2;
        if ( v57 < v56 )
          goto LABEL_144;
      }
      v63 = *(unsigned __int16 *)(v49 + *((unsigned int *)v52 + 9) + 2LL * v58);
    }
    else
    {
      v67 = Value;
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          656,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          (__int64)"Loading procedure 0x%lx by ordinal\n",
          Value);
      if ( !v67 )
      {
        v28 = -1073741811;
        goto LABEL_91;
      }
      v63 = v67 - *((_DWORD *)v52 + 4);
    }
    if ( v63 >= *((_DWORD *)v52 + 5) )
    {
      v28 = (v48 != 0LL) - 1073741512;
      goto LABEL_91;
    }
    v45 = (char *)(v49 + *(unsigned int *)(v49 + *((unsigned int *)v52 + 7) + 4LL * (int)v63));
    v97 = v45;
    if ( v45 < v52 || v45 >= &v52[v77] )
      break;
    if ( ++v105 == 32 )
      goto LABEL_152;
    v43 = (unsigned __int64)v45;
    v44 = v82;
  }
  v28 = 0;
  v64 = *(_QWORD *)(v42 + 48);
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
  {
    if ( v64 < *((_QWORD *)&xmmword_180163430 + 1)
      || v64 >= *((_QWORD *)&xmmword_180163430 + 1) + (unsigned __int64)(unsigned int)qword_180163440 )
    {
      RtlpxLookupFunctionTable(*(PVOID *)(v42 + 48));
    }
    else
    {
      v101 = xmmword_180163430;
      v102 = qword_180163440;
    }
    if ( *((_QWORD *)&v101 + 1) != v64 )
      __fastfail(0x18u);
  }
LABEL_91:
  if ( BaseAddress )
    RtlFreeHeap(LdrpHeap, 0, BaseAddress);
  if ( v28 != 259 )
  {
    v13 = v91;
    v25 = v84;
    v29 = v104;
    v16 = (char *)v75;
    v1 = a1;
    if ( v28 >= 0 )
    {
      v30 = (unsigned __int64)v45;
      v26 = v85;
      goto LABEL_45;
    }
    v26 = v85;
LABEL_155:
    v30 = v74;
    goto LABEL_45;
  }
  return 0LL;
}

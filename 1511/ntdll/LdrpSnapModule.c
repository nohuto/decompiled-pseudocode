/*
 * XREFs of LdrpSnapModule @ 0x180033FC0
 * Callers:
 *     LdrpProcessWork @ 0x18000928C (LdrpProcessWork.c)
 *     LdrpMapAndSnapDependency @ 0x180012FB8 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     LdrpLogError @ 0x180003CE8 (LdrpLogError.c)
 *     LdrpLogDllState @ 0x180012678 (LdrpLogDllState.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x180031578 (RtlpImageDirectoryEntryToData32.c)
 *     LdrpGetProcedureAddress @ 0x180034810 (LdrpGetProcedureAddress.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     RtlpxLookupFunctionTable @ 0x180036540 (RtlpxLookupFunctionTable.c)
 *     LdrpDoPostSnapWork @ 0x1800408DC (LdrpDoPostSnapWork.c)
 *     LdrpFreeReplacedModule @ 0x18006E7CC (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x18006E938 (LdrpHandlePendingModuleReplaced.c)
 *     CompatCachepLookupCdb @ 0x180075C80 (CompatCachepLookupCdb.c)
 *     LdrpReportError @ 0x1800785E8 (LdrpReportError.c)
 *     RtlCharToInteger @ 0x180078DA0 (RtlCharToInteger.c)
 *     RtlAddressInSectionTable @ 0x18007C2B0 (RtlAddressInSectionTable.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x18007E464 (LdrpLogLoadFailureEtwEvent.c)
 *     strrchr @ 0x18009A700 (strrchr.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     LdrpGenericExceptionFilter @ 0x1800CB5E8 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpSnapModule(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r12
  __int64 v3; // rsi
  unsigned int v4; // eax
  __int64 v5; // rdi
  ULONG_PTR *v6; // rcx
  ULONG_PTR *v7; // r13
  ULONG_PTR v8; // rax
  ULONG_PTR *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 *v12; // rax
  ULONG_PTR v13; // r14
  bool v14; // si
  char *v15; // rdi
  int v16; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rdx
  char *v19; // rsi
  char v20; // al
  int v21; // ebx
  char *v22; // r8
  ULONG_PTR v23; // r9
  unsigned int v24; // edx
  ULONG_PTR v25; // rcx
  __int64 v26; // rax
  unsigned __int16 *v27; // rdi
  __int64 v28; // rax
  unsigned __int64 v29; // r13
  int v30; // r10d
  unsigned __int16 *v31; // rax
  unsigned __int16 *v32; // r11
  int v33; // r8d
  int v34; // r9d
  unsigned __int16 *v35; // rax
  ULONG_PTR v36; // rdx
  unsigned __int8 v37; // cl
  int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // r14
  unsigned __int64 v42; // rsi
  int v43; // r15d
  _QWORD *v44; // r12
  char *v45; // rax
  __int16 v46; // bx
  int v47; // eax
  int ProcedureAddress; // eax
  ULONG_PTR v49; // rdi
  __int64 v51; // rbx
  unsigned __int16 *v52; // rdx
  unsigned __int64 *v53; // rcx
  int NtHeaders; // [rsp+20h] [rbp-108h]
  int NtHeadersa; // [rsp+20h] [rbp-108h]
  __int64 v56; // [rsp+28h] [rbp-100h]
  __int64 v57; // [rsp+28h] [rbp-100h]
  ULONG_PTR v58; // [rsp+30h] [rbp-F8h]
  __int64 v59; // [rsp+30h] [rbp-F8h]
  __int64 v60; // [rsp+48h] [rbp-E0h]
  __int64 v61; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int16 *v62; // [rsp+58h] [rbp-D0h]
  __int64 v63; // [rsp+60h] [rbp-C8h]
  unsigned __int64 *v64; // [rsp+68h] [rbp-C0h]
  unsigned int v65; // [rsp+70h] [rbp-B8h]
  ULONG Value; // [rsp+74h] [rbp-B4h] BYREF
  unsigned __int64 v67; // [rsp+78h] [rbp-B0h]
  ULONG_PTR v68; // [rsp+80h] [rbp-A8h]
  char *v69; // [rsp+88h] [rbp-A0h]
  unsigned __int16 *v70; // [rsp+90h] [rbp-98h]
  ULONG_PTR v71; // [rsp+98h] [rbp-90h]
  PVOID BaseAddress; // [rsp+A0h] [rbp-88h] BYREF
  PS_MITIGATION_OPTIONS_MAP MitigationOptionsMap; // [rsp+A8h] [rbp-80h]
  ULONG_PTR v74; // [rsp+C0h] [rbp-68h]
  __int64 v75; // [rsp+C8h] [rbp-60h]
  ANSI_STRING SourceString; // [rsp+D0h] [rbp-58h] BYREF
  ULONG_PTR v77; // [rsp+E0h] [rbp-48h]
  __int64 v78; // [rsp+E8h] [rbp-40h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+138h] [rbp+10h] BYREF
  int Size; // [rsp+140h] [rbp+18h] BYREF
  unsigned int v82; // [rsp+148h] [rbp+20h]

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 48);
  v78 = v2;
  v3 = *(_QWORD *)(v2 + 48);
  v75 = v3;
  LdrpLogDllState(v3, v2 + 72, 0x14A6u);
  LdrpHandlePendingModuleReplaced(v1);
  v82 = 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(v1 + 112);
    if ( v4 >= *(_DWORD *)(v1 + 88) )
      break;
    v5 = v4;
    v6 = *(ULONG_PTR **)(*(_QWORD *)(v1 + 80) + 8LL * v4);
    v7 = v6;
    v63 = (__int64)v6;
    if ( v6 )
    {
      v8 = v6[22];
      if ( v8 )
      {
        if ( (*(_DWORD *)(v8 + 24) & 0x80000) == 0 && *(ULONG_PTR **)(v8 + 48) != v6 )
        {
          v7 = *(ULONG_PTR **)(v8 + 48);
          v63 = (__int64)v7;
          *(_QWORD *)(v8 + 48) = v6;
        }
      }
    }
    v9 = *(ULONG_PTR **)(*(_QWORD *)(v1 + 80) + 8 * v5);
    if ( v9 != v7 )
    {
      LdrpFreeReplacedModule(v9);
      *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8 * v5) = v7;
    }
    v10 = *(_QWORD *)(v1 + 120);
    v11 = *(unsigned int *)(v10 + 20 * v5);
    v62 = (unsigned __int16 *)(v3 + v11);
    v12 = (unsigned __int64 *)(v3 + *(unsigned int *)(v10 + 20 * v5 + 16));
    v64 = v12;
    if ( !(_DWORD)v11 || (unsigned int)v11 > *(_DWORD *)(v2 + 64) )
      v62 = (unsigned __int16 *)v12;
    if ( v7 )
    {
      v13 = v7[6];
      v77 = v13;
      v14 = 1;
      v15 = (char *)v13;
      OutHeaders = 0LL;
      v60 = 0LL;
      v61 = 0LL;
      if ( (v13 & 3) != 0 )
      {
        v14 = (v13 & 1) == 0;
        v15 = (char *)(v13 & 0xFFFFFFFFFFFFFFFCuLL);
      }
      v16 = RtlImageNtHeaderEx(1u, v15, 0LL, &OutHeaders);
      if ( OutHeaders )
      {
        Magic = OutHeaders->OptionalHeader.Magic;
        if ( Magic == 267 )
        {
          v16 = RtlpImageDirectoryEntryToData32((__int64)v15, (void *)v14, 0, &Size, OutHeaders, &v61);
          v60 = v61;
          goto LABEL_27;
        }
        if ( Magic != 523 )
          goto LABEL_28;
        if ( !OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
          goto LABEL_28;
        VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
        if ( !(_DWORD)VirtualAddress )
          goto LABEL_28;
        Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
        if ( v14 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
        {
          v19 = &v15[VirtualAddress];
          v60 = (__int64)&v15[VirtualAddress];
        }
        else
        {
          v60 = (__int64)RtlAddressInSectionTable(OutHeaders, v15, VirtualAddress);
          if ( v60 )
          {
            v16 = 0;
            goto LABEL_27;
          }
LABEL_28:
          v19 = 0LL;
          v60 = 0LL;
        }
      }
      else
      {
LABEL_27:
        if ( v16 < 0 )
          goto LABEL_28;
        v19 = (char *)v60;
      }
      if ( !v19 )
      {
        v20 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            2371,
            (unsigned int)"LdrpSnapModule",
            0,
            (__int64)"DLL \"%wZ\" does not contain an export table\n");
          v20 = LdrpDebugFlags;
        }
        if ( (v20 & 0x10) != 0 )
          __debugbreak();
        v21 = -1073741701;
        goto LABEL_118;
      }
      if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
      {
        if ( v13 < LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
          || v13 >= LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
                  + LODWORD(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]) )
        {
          RtlpxLookupFunctionTable((PVOID)v13);
        }
        else
        {
          MitigationOptionsMap = LdrSystemDllInitBlock.MitigationOptionsMap;
        }
        if ( MitigationOptionsMap.Map[1] != v13 )
          __fastfail(0x18u);
      }
      v22 = &v19[Size];
      v69 = v22;
      v23 = v13 + *((unsigned int *)v19 + 7);
      v71 = v23;
      v24 = *((_DWORD *)v19 + 6);
      v65 = v24;
      v25 = v13 + *((unsigned int *)v19 + 8);
      v68 = v25;
      v74 = v13 + *((unsigned int *)v19 + 9);
      v26 = 4LL * *(unsigned int *)(v1 + 116);
      v27 = &v62[v26];
      v64 = (unsigned __int64 *)((char *)v64 + v26 * 2);
      while ( 2 )
      {
        v62 = v27;
        v28 = *(_QWORD *)v27;
        if ( !*(_QWORD *)v27 )
        {
          *(_DWORD *)(v1 + 116) = 0;
          v3 = v75;
          break;
        }
        v21 = -1073741702;
        LOBYTE(OutHeaders) = v28 < 0;
        v29 = -4530927LL;
        v30 = 0;
        v70 = 0LL;
        if ( v28 < 0 )
        {
          v82 = *v27;
          v39 = v82 - *((_DWORD *)v19 + 4);
LABEL_66:
          if ( v39 < *((_DWORD *)v19 + 5) )
          {
            v40 = *(unsigned int *)(v23 + 4LL * (int)v39);
            if ( (_DWORD)v40 )
            {
              v29 = v13 + v40;
              v21 = 0;
              if ( v13 + v40 > (unsigned __int64)v19 && v29 < (unsigned __int64)v22 )
              {
                v41 = v63;
                v42 = v29;
                v43 = 0;
                v61 = 0LL;
                v44 = *(_QWORD **)(v2 + 176);
                BaseAddress = 0LL;
                while ( 1 )
                {
                  v45 = strrchr((const char *)v42, 46);
                  if ( !v45
                    || (v46 = (_WORD)v45 - v42, (unsigned __int64)&v45[-v42] > 0xFFFF)
                    || (SourceString.Buffer = (char *)v42,
                        SourceString.Length = (_WORD)v45 - v42,
                        SourceString.MaximumLength = (_WORD)v45 - v42,
                        v45[1] == 35)
                    && RtlCharToInteger(v45 + 2, 0, &Value) < 0 )
                  {
LABEL_93:
                    v21 = -1073741701;
                    goto LABEL_94;
                  }
                  if ( v46 == 5 && (*(_DWORD *)v42 | 0x20202020) == 0x6C64746E && (*(_BYTE *)(v42 + 4) | 0x20) == 0x6C )
                  {
                    v41 = LdrpNtDllDataTableEntry;
                    v61 = LdrpNtDllDataTableEntry;
                  }
                  else
                  {
                    v47 = LdrpLoadDependentModule(&SourceString, v44, v41, 1, (PVOID *)&v61, (__int64)&BaseAddress);
                    v21 = v47;
                    if ( v47 < 0 || v47 == 259 )
                      goto LABEL_94;
                    v41 = v61;
                  }
                  ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(v41 + 48));
                  v21 = ProcedureAddress;
                  if ( ProcedureAddress != -1073741267 )
                    break;
                  if ( ++v43 == 32 )
                    goto LABEL_93;
                  v42 = v67;
                }
                if ( ProcedureAddress >= 0 )
                {
                  v49 = *(_QWORD *)(v41 + 48);
                  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
                  {
                    if ( v49 < LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
                      || v49 >= LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
                              + LODWORD(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]) )
                    {
                      RtlpxLookupFunctionTable(*(PVOID *)(v41 + 48));
                    }
                    else
                    {
                      MitigationOptionsMap = LdrSystemDllInitBlock.MitigationOptionsMap;
                    }
                    if ( MitigationOptionsMap.Map[1] != v49 )
                      __fastfail(0x18u);
                  }
                }
LABEL_94:
                if ( BaseAddress )
                  RtlFreeHeap(LdrpHeap, 0, BaseAddress);
                if ( v21 == 259 )
                  return 0LL;
                if ( v21 >= 0 )
                  v29 = v67;
                v2 = v78;
                v13 = v77;
                v1 = a1;
                v19 = (char *)v60;
                v27 = v62;
              }
            }
          }
        }
        else
        {
          v31 = (unsigned __int16 *)(*(_QWORD *)(v2 + 48) + *(unsigned int *)v27);
          v32 = v31 + 1;
          v70 = v31 + 1;
          v33 = *v31;
          v34 = v24 - 1;
          if ( v33 >= v24 )
            v33 = v34 / 2;
          if ( v34 >= 0 )
          {
            while ( 1 )
            {
              v35 = v32;
              v36 = v13 + *(unsigned int *)(v25 + 4LL * v33) - (_QWORD)v32;
              while ( 1 )
              {
                v37 = *(_BYTE *)v35;
                if ( *(_BYTE *)v35 != *((_BYTE *)v35 + v36) )
                  break;
                v35 = (unsigned __int16 *)((char *)v35 + 1);
                if ( !v37 )
                {
                  v38 = 0;
                  goto LABEL_54;
                }
              }
              v38 = v37 < *((_BYTE *)v35 + v36) ? -1 : 1;
LABEL_54:
              if ( !v38 )
                break;
              if ( v38 >= 0 )
                v30 = v33 + 1;
              else
                v34 = v33 - 1;
              v33 = (v34 + v30) / 2;
              v25 = v68;
              if ( v34 < v30 )
                goto LABEL_61;
            }
            v39 = *(unsigned __int16 *)(v74 + 2LL * v33);
            v22 = v69;
            v23 = v71;
            goto LABEL_66;
          }
LABEL_61:
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            v58 = v13;
            v56 = (__int64)v32;
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              1325,
              (unsigned int)"LdrpNameToOrdinal",
              1,
              (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n");
          }
          if ( (LdrpDebugFlags & 0x40) != 0 )
            __debugbreak();
        }
        if ( v21 < 0 )
        {
          if ( v21 == -1073741702 || v21 == -1073741515 )
          {
            if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v2 + 80))
              || (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v63 + 80)) )
            {
              v51 = v63;
              LOBYTE(NtHeaders) = 0;
              LdrpLogLoadFailureEtwEvent(v2 + 72, v63 + 72, 1LL, &LoadFailure, NtHeaders, v56, v58);
              LOBYTE(NtHeadersa) = 1;
              LdrpLogLoadFailureEtwEvent(v2 + 72, v51 + 72, 1LL, &LoadFailureOperational, NtHeadersa, v57, v59);
            }
            if ( (_BYTE)OutHeaders )
            {
              v21 = -1073741512;
              v52 = (unsigned __int16 *)v82;
            }
            else
            {
              v21 = -1073741511;
              v52 = v70;
            }
            LdrpReportError(v2 + 72, v52, (unsigned int)v21);
          }
          v1 = a1;
          goto LABEL_117;
        }
        v53 = v64;
        *v64 = v29;
        v27 += 4;
        v64 = v53 + 1;
        ++*(_DWORD *)(v1 + 116);
        v25 = v68;
        v24 = v65;
        v22 = v69;
        v23 = v71;
        continue;
      }
    }
    ++*(_DWORD *)(v1 + 112);
  }
  v21 = LdrpDoPostSnapWork(v1);
  if ( v21 >= 0 )
  {
    LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 0x14A7u);
    *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
  }
LABEL_117:
  if ( v21 < 0 )
LABEL_118:
    LdrpLogError(v21, 25, 0, v1);
  return (unsigned int)v21;
}

/*
 * XREFs of LdrpSnapModule @ 0x1800156C0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180021DC4 (LdrpMapAndSnapDependency.c)
 *     LdrpProcessWork @ 0x18003913C (LdrpProcessWork.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180015180 (RtlpxLookupFunctionTable.c)
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 *     LdrpResolveForwarder @ 0x18001664C (LdrpResolveForwarder.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x180017390 (RtlpImageDirectoryEntryToData32.c)
 *     RtlAddressInSectionTable @ 0x180017410 (RtlAddressInSectionTable.c)
 *     LdrpLogDllState @ 0x180021298 (LdrpLogDllState.c)
 *     LdrpDoPostSnapWork @ 0x1800556CC (LdrpDoPostSnapWork.c)
 *     LdrpFreeReplacedModule @ 0x180061FF8 (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x180062164 (LdrpHandlePendingModuleReplaced.c)
 *     LdrpReportError @ 0x18006A65C (LdrpReportError.c)
 *     CompatCachepLookupCdb @ 0x18006B4E0 (CompatCachepLookupCdb.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180073030 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogError @ 0x180075B80 (LdrpLogError.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     LdrpGenericExceptionFilter @ 0x1800C0F28 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpSnapModule(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // r11
  unsigned int v5; // eax
  __int64 v6; // rbx
  ULONG_PTR *v7; // rcx
  ULONG_PTR *v8; // rsi
  ULONG_PTR v9; // rax
  ULONG_PTR *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // r13
  ULONG_PTR v15; // r12
  bool v16; // di
  char *v17; // rbx
  NTSTATUS v18; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rdx
  char *v21; // rdx
  char *v22; // r10
  ULONG_PTR v23; // r8
  unsigned int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // r15
  unsigned __int64 *v28; // r13
  __int64 v29; // rax
  int v30; // r14d
  char v31; // di
  unsigned __int64 v32; // rbx
  const char *v33; // rsi
  unsigned __int16 *v34; // rax
  int v35; // r8d
  int v36; // r10d
  int v37; // r9d
  const char *v38; // rax
  ULONG_PTR v39; // rdx
  unsigned __int8 v40; // cl
  int v41; // eax
  int v42; // ecx
  __int64 v43; // rcx
  int v44; // eax
  char v46; // al
  __int64 v47; // r15
  ULONG_PTR *v48; // rbx
  const char *v49; // rdx
  int NtHeaders; // [rsp+20h] [rbp-C8h]
  int NtHeadersa; // [rsp+20h] [rbp-C8h]
  __int64 v52; // [rsp+40h] [rbp-A8h] BYREF
  int v53; // [rsp+48h] [rbp-A0h]
  __int64 v54; // [rsp+50h] [rbp-98h]
  unsigned int v55; // [rsp+58h] [rbp-90h]
  __int64 v56; // [rsp+60h] [rbp-88h]
  ULONG_PTR *v57; // [rsp+68h] [rbp-80h]
  ULONG_PTR v58; // [rsp+70h] [rbp-78h]
  char *v59; // [rsp+78h] [rbp-70h]
  ULONG_PTR v60; // [rsp+80h] [rbp-68h]
  __int64 v61; // [rsp+88h] [rbp-60h]
  unsigned __int64 v62; // [rsp+90h] [rbp-58h]
  PS_MITIGATION_OPTIONS_MAP MitigationOptionsMap; // [rsp+98h] [rbp-50h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+F8h] [rbp+10h] BYREF
  unsigned int Size; // [rsp+100h] [rbp+18h]
  unsigned int v67; // [rsp+108h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 48);
  v56 = v2;
  v3 = *(_QWORD *)(v2 + 48);
  v61 = v3;
  LdrpLogDllState(v3, v2 + 72, 5286LL);
  LdrpHandlePendingModuleReplaced(a1);
  v67 = 0;
  for ( i = a1; ; ++*(_DWORD *)(i + 112) )
  {
    v5 = *(_DWORD *)(i + 112);
    if ( v5 >= *(_DWORD *)(i + 88) )
      break;
    v6 = v5;
    v7 = *(ULONG_PTR **)(*(_QWORD *)(i + 80) + 8LL * v5);
    v8 = v7;
    v57 = v7;
    if ( v7 )
    {
      v9 = v7[22];
      if ( v9 )
      {
        if ( (*(_DWORD *)(v9 + 24) & 0x80000) == 0 && *(ULONG_PTR **)(v9 + 48) != v7 )
        {
          v8 = *(ULONG_PTR **)(v9 + 48);
          v57 = v8;
          *(_QWORD *)(v9 + 48) = v7;
        }
      }
    }
    v10 = *(ULONG_PTR **)(*(_QWORD *)(i + 80) + 8 * v6);
    if ( v10 != v8 )
    {
      LdrpFreeReplacedModule(v10);
      i = a1;
      *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * v6) = v8;
    }
    v11 = *(_QWORD *)(i + 120);
    v12 = *(unsigned int *)(v11 + 20 * v6);
    v13 = v3 + v12;
    v14 = v3 + *(unsigned int *)(v11 + 20 * v6 + 16);
    if ( !(_DWORD)v12 || (unsigned int)v12 > *(_DWORD *)(v2 + 64) )
      v13 = v3 + *(unsigned int *)(v11 + 20 * v6 + 16);
    if ( v8 )
    {
      v15 = v8[6];
      v16 = 1;
      v17 = (char *)v15;
      OutHeaders = 0LL;
      v54 = 0LL;
      v52 = 0LL;
      if ( (v15 & 3) != 0 )
      {
        v16 = (v15 & 1) == 0;
        v17 = (char *)(v15 & 0xFFFFFFFFFFFFFFFCuLL);
      }
      v18 = RtlImageNtHeaderEx(1u, v17, 0LL, &OutHeaders);
      if ( OutHeaders )
      {
        Magic = OutHeaders->OptionalHeader.Magic;
        if ( Magic == 267 )
        {
          v18 = RtlpImageDirectoryEntryToData32(v17, OutHeaders, (__int64)&v52);
          v21 = (char *)v52;
          v54 = v52;
          goto LABEL_73;
        }
        if ( Magic != 523 )
          goto LABEL_74;
        if ( !OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
          goto LABEL_74;
        VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
        if ( !(_DWORD)VirtualAddress )
          goto LABEL_74;
        Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
        if ( !v16 && (unsigned int)VirtualAddress >= OutHeaders->OptionalHeader.SizeOfHeaders )
        {
          v21 = (char *)RtlAddressInSectionTable(OutHeaders, v17, VirtualAddress);
          v54 = (__int64)v21;
          if ( v21 )
          {
            v18 = 0;
            goto LABEL_73;
          }
          goto LABEL_74;
        }
        v21 = &v17[VirtualAddress];
LABEL_19:
        v54 = (__int64)v21;
      }
      else
      {
        v21 = (char *)v54;
LABEL_73:
        if ( v18 < 0 )
        {
LABEL_74:
          v21 = 0LL;
          goto LABEL_19;
        }
      }
      if ( v21 )
      {
        if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
        {
          if ( v15 < LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
            || v15 >= LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
                    + LODWORD(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]) )
          {
            RtlpxLookupFunctionTable((PVOID)v15, (__int64)&MitigationOptionsMap);
            v21 = (char *)v54;
          }
          else
          {
            MitigationOptionsMap = LdrSystemDllInitBlock.MitigationOptionsMap;
          }
          if ( MitigationOptionsMap.Map[1] != v15 )
            __fastfail(0x18u);
        }
        v22 = &v21[Size];
        v59 = v22;
        v23 = v15 + *((unsigned int *)v21 + 7);
        v58 = v23;
        v24 = *((_DWORD *)v21 + 6);
        v55 = v24;
        v25 = v15 + *((unsigned int *)v21 + 8);
        v52 = v25;
        v60 = v15 + *((unsigned int *)v21 + 9);
        i = a1;
        v26 = 8LL * *(unsigned int *)(a1 + 116);
        v27 = (__int64 *)(v26 + v13);
        v28 = (unsigned __int64 *)(v26 + v14);
        while ( 1 )
        {
          v29 = *v27;
          if ( !*v27 )
          {
            *(_DWORD *)(i + 116) = 0;
            v2 = v56;
            v3 = v61;
            goto LABEL_50;
          }
          v30 = -1073741702;
          v53 = -1073741702;
          v31 = v29 < 0;
          LOBYTE(OutHeaders) = v29 < 0;
          v32 = -4530927LL;
          v33 = 0LL;
          if ( v29 < 0 )
          {
            v67 = (unsigned __int16)v29;
            v42 = (unsigned __int16)v29 - *((_DWORD *)v21 + 4);
          }
          else
          {
            v34 = (unsigned __int16 *)(*(_QWORD *)(v56 + 48) + (unsigned int)v29);
            v33 = (const char *)(v34 + 1);
            v35 = *v34;
            v36 = 0;
            v37 = v24 - 1;
            if ( v35 >= v55 )
              v35 = v37 / 2;
            if ( v37 < 0 )
            {
LABEL_81:
              if ( (LdrpDebugFlags & 3) != 0 )
              {
                LdrpLogDbgPrint(
                  (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
                  1329,
                  (unsigned int)"LdrpNameToOrdinal",
                  1,
                  (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
                  v33,
                  (const void *)v15);
                i = a1;
                v25 = v52;
              }
              if ( (LdrpDebugFlags & 0x40) != 0 )
                __debugbreak();
              goto LABEL_46;
            }
            while ( 1 )
            {
              v38 = v33;
              v39 = v15 + *(unsigned int *)(v25 + 4LL * v35) - (_QWORD)v33;
              while ( 1 )
              {
                v40 = *v38;
                if ( *v38 != v38[v39] )
                  break;
                ++v38;
                if ( !v40 )
                {
                  v41 = 0;
                  goto LABEL_35;
                }
              }
              v41 = v40 < (unsigned int)v38[v39] ? -1 : 1;
LABEL_35:
              if ( !v41 )
                break;
              if ( v41 < 0 )
                v37 = v35 - 1;
              else
                v36 = v35 + 1;
              v35 = (v37 + v36) / 2;
              v25 = v52;
              if ( v37 < v36 )
                goto LABEL_81;
            }
            v42 = *(unsigned __int16 *)(v60 + 2LL * v35);
            v21 = (char *)v54;
            v23 = v58;
            v22 = v59;
          }
          if ( (unsigned int)v42 < *((_DWORD *)v21 + 5)
            && (v43 = *(unsigned int *)(v23 + 4LL * v42), (_DWORD)v43)
            && (v32 = v15 + v43, v30 = 0, v53 = 0, v15 + v43 > (unsigned __int64)v21)
            && v32 < (unsigned __int64)v22 )
          {
            v44 = LdrpResolveForwarder((char *)(v15 + v43));
            v30 = v44;
            v53 = v44;
            if ( v44 == 259 )
              return 0LL;
            i = a1;
            v25 = v52;
            if ( v44 >= 0 )
              v32 = v62;
          }
          else
          {
            v25 = v52;
          }
LABEL_46:
          if ( v30 < 0 )
          {
            if ( v30 == -1073741702 || v30 == -1073741515 )
            {
              v47 = v56;
              if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v56 + 80))
                || (unsigned int)CompatCachepLookupCdb((wchar_t *)v57[10]) )
              {
                v48 = v57;
                LOBYTE(NtHeaders) = 0;
                LdrpLogLoadFailureEtwEvent(v47 + 72, v57 + 9, 1LL, &LoadFailure, NtHeaders);
                LOBYTE(NtHeadersa) = 1;
                LdrpLogLoadFailureEtwEvent(v47 + 72, v48 + 9, 1LL, &LoadFailureOperational, NtHeadersa);
                v31 = (char)OutHeaders;
              }
              if ( v31 )
              {
                v30 = -1073741512;
                v49 = (const char *)v67;
              }
              else
              {
                v30 = -1073741511;
                v49 = v33;
              }
              v53 = v30;
              LdrpReportError(v47 + 72, v49, (unsigned int)v30);
              i = a1;
            }
            goto LABEL_64;
          }
          *v28 = v32;
          ++v27;
          ++v28;
          ++*(_DWORD *)(i + 116);
          v21 = (char *)v54;
          v24 = v55;
          v23 = v58;
          v22 = v59;
        }
      }
      v46 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          2375,
          (unsigned int)"LdrpSnapModule",
          0,
          (__int64)"DLL \"%wZ\" does not contain an export table\n",
          v8 + 9);
        v46 = LdrpDebugFlags;
      }
      if ( (v46 & 0x10) != 0 )
        __debugbreak();
      v30 = -1073741701;
      i = a1;
      goto LABEL_94;
    }
LABEL_50:
    ;
  }
  v30 = LdrpDoPostSnapWork(i);
  if ( v30 >= 0 )
  {
    LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 5287LL);
    *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
  }
  i = a1;
LABEL_64:
  if ( v30 < 0 )
LABEL_94:
    LdrpLogError((unsigned int)v30, 25LL, 0LL, i);
  return (unsigned int)v30;
}

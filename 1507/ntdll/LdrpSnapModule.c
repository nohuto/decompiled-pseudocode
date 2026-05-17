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
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // r13
  unsigned __int64 v14; // r12
  bool v15; // di
  unsigned __int64 v16; // rbx
  int v17; // eax
  __int16 v18; // ax
  __int64 v19; // rdx
  _DWORD *v20; // rdx
  char *v21; // r10
  unsigned __int64 v22; // r8
  unsigned int v23; // r9d
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // r15
  unsigned __int64 *v27; // r13
  __int64 v28; // rax
  int v29; // r14d
  char v30; // di
  unsigned __int64 v31; // rbx
  const char *v32; // rsi
  unsigned __int16 *v33; // rax
  int v34; // r8d
  int v35; // r10d
  int v36; // r9d
  const char *v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int8 v39; // cl
  int v40; // eax
  int v41; // ecx
  __int64 v42; // rcx
  int v43; // eax
  char v45; // al
  __int64 v46; // r15
  int v47; // ebx
  const char *v48; // rdx
  _DWORD *v49; // [rsp+40h] [rbp-A8h] BYREF
  int v50; // [rsp+48h] [rbp-A0h]
  _DWORD *v51; // [rsp+50h] [rbp-98h]
  unsigned int v52; // [rsp+58h] [rbp-90h]
  __int64 v53; // [rsp+60h] [rbp-88h]
  __int64 v54; // [rsp+68h] [rbp-80h]
  unsigned __int64 v55; // [rsp+70h] [rbp-78h]
  char *v56; // [rsp+78h] [rbp-70h]
  unsigned __int64 v57; // [rsp+80h] [rbp-68h]
  __int64 v58; // [rsp+88h] [rbp-60h]
  unsigned __int64 v59; // [rsp+90h] [rbp-58h]
  __int128 v60; // [rsp+98h] [rbp-50h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-40h]
  __int64 v63; // [rsp+F8h] [rbp+10h] BYREF
  unsigned int v64; // [rsp+100h] [rbp+18h] BYREF
  unsigned int v65; // [rsp+108h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 48);
  v53 = v2;
  v3 = *(_QWORD *)(v2 + 48);
  v58 = v3;
  LdrpLogDllState(v3, v2 + 72, 5286LL);
  LdrpHandlePendingModuleReplaced(a1);
  v65 = 0;
  for ( i = a1; ; ++*(_DWORD *)(i + 112) )
  {
    v5 = *(_DWORD *)(i + 112);
    if ( v5 >= *(_DWORD *)(i + 88) )
      break;
    v6 = v5;
    v7 = *(_QWORD *)(*(_QWORD *)(i + 80) + 8LL * v5);
    v8 = v7;
    v54 = v7;
    if ( v7 )
    {
      v9 = *(_QWORD *)(v7 + 176);
      if ( v9 )
      {
        if ( (*(_DWORD *)(v9 + 24) & 0x80000) == 0 && *(_QWORD *)(v9 + 48) != v7 )
        {
          v8 = *(_QWORD *)(v9 + 48);
          v54 = v8;
          *(_QWORD *)(v9 + 48) = v7;
        }
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)(i + 80) + 8 * v6) != v8 )
    {
      LdrpFreeReplacedModule();
      i = a1;
      *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * v6) = v8;
    }
    v10 = *(_QWORD *)(i + 120);
    v11 = *(unsigned int *)(v10 + 20 * v6);
    v12 = v3 + v11;
    v13 = v3 + *(unsigned int *)(v10 + 20 * v6 + 16);
    if ( !(_DWORD)v11 || (unsigned int)v11 > *(_DWORD *)(v2 + 64) )
      v12 = v3 + *(unsigned int *)(v10 + 20 * v6 + 16);
    if ( v8 )
    {
      v14 = *(_QWORD *)(v8 + 48);
      v15 = 1;
      v16 = v14;
      v63 = 0LL;
      v51 = 0LL;
      v49 = 0LL;
      if ( (v14 & 3) != 0 )
      {
        v15 = (v14 & 1) == 0;
        v16 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      v17 = RtlImageNtHeaderEx(1LL, v16, 0LL, &v63);
      if ( v63 )
      {
        v18 = *(_WORD *)(v63 + 24);
        if ( v18 == 267 )
        {
          v17 = RtlpImageDirectoryEntryToData32(v16, v15, 0, (unsigned int)&v64, v63, (__int64)&v49);
          v20 = v49;
          v51 = v49;
          goto LABEL_73;
        }
        if ( v18 != 523 )
          goto LABEL_74;
        if ( !*(_DWORD *)(v63 + 132) )
          goto LABEL_74;
        v19 = *(unsigned int *)(v63 + 136);
        if ( !(_DWORD)v19 )
          goto LABEL_74;
        v64 = *(_DWORD *)(v63 + 140);
        if ( !v15 && (unsigned int)v19 >= *(_DWORD *)(v63 + 84) )
        {
          v20 = (_DWORD *)RtlAddressInSectionTable(v63, v16, (unsigned int)v19);
          v51 = v20;
          if ( v20 )
          {
            v17 = 0;
            goto LABEL_73;
          }
          goto LABEL_74;
        }
        v20 = (_DWORD *)(v16 + v19);
LABEL_19:
        v51 = v20;
      }
      else
      {
        v20 = v51;
LABEL_73:
        if ( v17 < 0 )
        {
LABEL_74:
          v20 = 0LL;
          goto LABEL_19;
        }
      }
      if ( v20 )
      {
        if ( qword_1801572F0 )
        {
          if ( v14 < *((_QWORD *)&xmmword_180157330 + 1)
            || v14 >= *((_QWORD *)&xmmword_180157330 + 1) + (unsigned __int64)(unsigned int)qword_180157340 )
          {
            RtlpxLookupFunctionTable(v14, (__int64 *)&v60);
            v20 = v51;
          }
          else
          {
            v60 = xmmword_180157330;
            v61 = qword_180157340;
          }
          if ( *((_QWORD *)&v60 + 1) != v14 )
            __fastfail(0x18u);
        }
        v21 = (char *)v20 + v64;
        v56 = v21;
        v22 = v14 + (unsigned int)v20[7];
        v55 = v22;
        v23 = v20[6];
        v52 = v23;
        v24 = v14 + (unsigned int)v20[8];
        v49 = (_DWORD *)v24;
        v57 = v14 + (unsigned int)v20[9];
        i = a1;
        v25 = 8LL * *(unsigned int *)(a1 + 116);
        v26 = (__int64 *)(v25 + v12);
        v27 = (unsigned __int64 *)(v25 + v13);
        while ( 1 )
        {
          v28 = *v26;
          if ( !*v26 )
          {
            *(_DWORD *)(i + 116) = 0;
            v2 = v53;
            v3 = v58;
            goto LABEL_50;
          }
          v29 = -1073741702;
          v50 = -1073741702;
          v30 = v28 < 0;
          LOBYTE(v63) = v28 < 0;
          v31 = -4530927LL;
          v32 = 0LL;
          if ( v28 < 0 )
          {
            v65 = (unsigned __int16)v28;
            v41 = (unsigned __int16)v28 - v20[4];
          }
          else
          {
            v33 = (unsigned __int16 *)(*(_QWORD *)(v53 + 48) + (unsigned int)v28);
            v32 = (const char *)(v33 + 1);
            v34 = *v33;
            v35 = 0;
            v36 = v23 - 1;
            if ( v34 >= v52 )
              v34 = v36 / 2;
            if ( v36 < 0 )
            {
LABEL_81:
              if ( (LdrpDebugFlags & 3) != 0 )
              {
                LdrpLogDbgPrint(
                  (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
                  1329,
                  (unsigned int)"LdrpNameToOrdinal",
                  1,
                  "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
                  v32,
                  (const void *)v14);
                i = a1;
                v24 = (unsigned __int64)v49;
              }
              if ( (LdrpDebugFlags & 0x40) != 0 )
                __debugbreak();
              goto LABEL_46;
            }
            while ( 1 )
            {
              v37 = v32;
              v38 = v14 + *(unsigned int *)(v24 + 4LL * v34) - (_QWORD)v32;
              while ( 1 )
              {
                v39 = *v37;
                if ( *v37 != v37[v38] )
                  break;
                ++v37;
                if ( !v39 )
                {
                  v40 = 0;
                  goto LABEL_35;
                }
              }
              v40 = v39 < (unsigned int)v37[v38] ? -1 : 1;
LABEL_35:
              if ( !v40 )
                break;
              if ( v40 < 0 )
                v36 = v34 - 1;
              else
                v35 = v34 + 1;
              v34 = (v36 + v35) / 2;
              v24 = (unsigned __int64)v49;
              if ( v36 < v35 )
                goto LABEL_81;
            }
            v41 = *(unsigned __int16 *)(v57 + 2LL * v34);
            v20 = v51;
            v22 = v55;
            v21 = v56;
          }
          if ( (unsigned int)v41 < v20[5]
            && (v42 = *(unsigned int *)(v22 + 4LL * v41), (_DWORD)v42)
            && (v31 = v14 + v42, v29 = 0, v50 = 0, v14 + v42 > (unsigned __int64)v20)
            && v31 < (unsigned __int64)v21 )
          {
            v43 = LdrpResolveForwarder((char *)(v14 + v42));
            v29 = v43;
            v50 = v43;
            if ( v43 == 259 )
              return 0LL;
            i = a1;
            v24 = (unsigned __int64)v49;
            if ( v43 >= 0 )
              v31 = v59;
          }
          else
          {
            v24 = (unsigned __int64)v49;
          }
LABEL_46:
          if ( v29 < 0 )
          {
            if ( v29 == -1073741702 || v29 == -1073741515 )
            {
              v46 = v53;
              if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v53 + 80))
                || (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v54 + 80)) )
              {
                v47 = v54;
                LdrpLogLoadFailureEtwEvent(v46 + 72, v54 + 72, 1, (unsigned int)&LoadFailure, 0);
                LdrpLogLoadFailureEtwEvent(v46 + 72, v47 + 72, 1, (unsigned int)&LoadFailureOperational, 1);
                v30 = v63;
              }
              if ( v30 )
              {
                v29 = -1073741512;
                v48 = (const char *)v65;
              }
              else
              {
                v29 = -1073741511;
                v48 = v32;
              }
              v50 = v29;
              LdrpReportError(v46 + 72, v48, (unsigned int)v29);
              i = a1;
            }
            goto LABEL_64;
          }
          *v27 = v31;
          ++v26;
          ++v27;
          ++*(_DWORD *)(i + 116);
          v20 = v51;
          v23 = v52;
          v22 = v55;
          v21 = v56;
        }
      }
      v45 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          2375,
          (unsigned int)"LdrpSnapModule",
          0,
          "DLL \"%wZ\" does not contain an export table\n",
          v8 + 72);
        v45 = LdrpDebugFlags;
      }
      if ( (v45 & 0x10) != 0 )
        __debugbreak();
      v29 = -1073741701;
      i = a1;
      goto LABEL_94;
    }
LABEL_50:
    ;
  }
  v29 = LdrpDoPostSnapWork(i);
  if ( v29 >= 0 )
  {
    LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 5287LL);
    *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
  }
  i = a1;
LABEL_64:
  if ( v29 < 0 )
LABEL_94:
    LdrpLogError((unsigned int)v29, 25LL, 0LL, i);
  return (unsigned int)v29;
}

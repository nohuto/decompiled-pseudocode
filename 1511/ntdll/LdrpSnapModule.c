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
  __int64 v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // r14
  bool v13; // si
  unsigned __int64 v14; // rdi
  int v15; // eax
  __int16 v16; // ax
  __int64 v17; // rdx
  _DWORD *v18; // rsi
  char v19; // al
  int v20; // ebx
  char *v21; // r8
  unsigned __int64 v22; // r9
  unsigned int v23; // edx
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int16 *v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // r13
  int v29; // r10d
  unsigned __int16 *v30; // rax
  unsigned __int16 *v31; // r11
  int v32; // r8d
  int v33; // r9d
  unsigned __int16 *v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int8 v36; // cl
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // r14
  unsigned __int64 v41; // rsi
  int v42; // r15d
  _QWORD *v43; // r12
  char *v44; // rax
  __int16 v45; // bx
  char *v46; // rdi
  int v47; // eax
  int ProcedureAddress; // eax
  unsigned __int64 v49; // rdi
  int v51; // ebx
  unsigned __int16 *v52; // rdx
  unsigned __int64 *v53; // rcx
  __int64 v54; // [rsp+48h] [rbp-E0h]
  __int64 v55; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int16 *v56; // [rsp+58h] [rbp-D0h]
  __int64 v57; // [rsp+60h] [rbp-C8h]
  unsigned __int64 *v58; // [rsp+68h] [rbp-C0h]
  unsigned int v59; // [rsp+70h] [rbp-B8h]
  ULONG Value; // [rsp+74h] [rbp-B4h] BYREF
  unsigned __int64 v61; // [rsp+78h] [rbp-B0h] BYREF
  unsigned __int64 v62; // [rsp+80h] [rbp-A8h]
  char *v63; // [rsp+88h] [rbp-A0h]
  unsigned __int16 *v64; // [rsp+90h] [rbp-98h]
  unsigned __int64 v65; // [rsp+98h] [rbp-90h]
  __int64 v66; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v67; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v68; // [rsp+B8h] [rbp-70h]
  unsigned __int64 v69; // [rsp+C0h] [rbp-68h]
  __int64 v70; // [rsp+C8h] [rbp-60h]
  STRING SourceString; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v72; // [rsp+E0h] [rbp-48h]
  __int64 v73; // [rsp+E8h] [rbp-40h]
  __int64 v75; // [rsp+138h] [rbp+10h] BYREF
  unsigned int v76; // [rsp+140h] [rbp+18h] BYREF
  unsigned int v77; // [rsp+148h] [rbp+20h]

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 48);
  v73 = v2;
  v3 = *(_QWORD *)(v2 + 48);
  v70 = v3;
  LdrpLogDllState(v3, v2 + 72, 0x14A6u);
  LdrpHandlePendingModuleReplaced(v1);
  v77 = 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(v1 + 112);
    if ( v4 >= *(_DWORD *)(v1 + 88) )
      break;
    v5 = v4;
    v6 = *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8LL * v4);
    v7 = v6;
    v57 = v6;
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 176);
      if ( v8 )
      {
        if ( (*(_DWORD *)(v8 + 24) & 0x80000) == 0 && *(_QWORD *)(v8 + 48) != v6 )
        {
          v7 = *(_QWORD *)(v8 + 48);
          v57 = v7;
          *(_QWORD *)(v8 + 48) = v6;
        }
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8 * v5) != v7 )
    {
      LdrpFreeReplacedModule();
      *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8 * v5) = v7;
    }
    v9 = *(_QWORD *)(v1 + 120);
    v10 = *(unsigned int *)(v9 + 20 * v5);
    v56 = (unsigned __int16 *)(v3 + v10);
    v11 = (unsigned __int64 *)(v3 + *(unsigned int *)(v9 + 20 * v5 + 16));
    v58 = v11;
    if ( !(_DWORD)v10 || (unsigned int)v10 > *(_DWORD *)(v2 + 64) )
      v56 = (unsigned __int16 *)v11;
    if ( v7 )
    {
      v12 = *(_QWORD *)(v7 + 48);
      v72 = v12;
      v13 = 1;
      v14 = v12;
      v75 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      if ( (v12 & 3) != 0 )
      {
        v13 = (v12 & 1) == 0;
        v14 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      v15 = RtlImageNtHeaderEx(1LL, v14, 0LL, &v75);
      if ( v75 )
      {
        v16 = *(_WORD *)(v75 + 24);
        if ( v16 == 267 )
        {
          v15 = RtlpImageDirectoryEntryToData32(v14, v13, 0, &v76, v75, &v55);
          v54 = v55;
          goto LABEL_27;
        }
        if ( v16 != 523 )
          goto LABEL_28;
        if ( !*(_DWORD *)(v75 + 132) )
          goto LABEL_28;
        v17 = *(unsigned int *)(v75 + 136);
        if ( !(_DWORD)v17 )
          goto LABEL_28;
        v76 = *(_DWORD *)(v75 + 140);
        if ( v13 || (unsigned int)v17 < *(_DWORD *)(v75 + 84) )
        {
          v18 = (_DWORD *)(v14 + v17);
          v54 = v14 + v17;
        }
        else
        {
          v54 = RtlAddressInSectionTable(v75, v14, (unsigned int)v17);
          if ( v54 )
          {
            v15 = 0;
            goto LABEL_27;
          }
LABEL_28:
          v18 = 0LL;
          v54 = 0LL;
        }
      }
      else
      {
LABEL_27:
        if ( v15 < 0 )
          goto LABEL_28;
        v18 = (_DWORD *)v54;
      }
      if ( !v18 )
      {
        v19 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            2371,
            (unsigned int)"LdrpSnapModule",
            0,
            (__int64)"DLL \"%wZ\" does not contain an export table\n");
          v19 = LdrpDebugFlags;
        }
        if ( (v19 & 0x10) != 0 )
          __debugbreak();
        v20 = -1073741701;
        goto LABEL_119;
      }
      if ( qword_1801552F0 )
      {
        if ( v12 < *((_QWORD *)&xmmword_180155330 + 1)
          || v12 >= *((_QWORD *)&xmmword_180155330 + 1) + (unsigned __int64)(unsigned int)qword_180155340 )
        {
          RtlpxLookupFunctionTable(v12, &v67);
        }
        else
        {
          v67 = xmmword_180155330;
          v68 = qword_180155340;
        }
        if ( *((_QWORD *)&v67 + 1) != v12 )
          __fastfail(0x18u);
      }
      v21 = (char *)v18 + v76;
      v63 = v21;
      v22 = v12 + (unsigned int)v18[7];
      v65 = v22;
      v23 = v18[6];
      v59 = v23;
      v24 = v12 + (unsigned int)v18[8];
      v62 = v24;
      v69 = v12 + (unsigned int)v18[9];
      v25 = 4LL * *(unsigned int *)(v1 + 116);
      v26 = &v56[v25];
      v58 = (unsigned __int64 *)((char *)v58 + v25 * 2);
      while ( 2 )
      {
        v56 = v26;
        v27 = *(_QWORD *)v26;
        if ( !*(_QWORD *)v26 )
        {
          *(_DWORD *)(v1 + 116) = 0;
          v3 = v70;
          break;
        }
        v20 = -1073741702;
        LOBYTE(v75) = v27 < 0;
        v28 = -4530927LL;
        v29 = 0;
        v64 = 0LL;
        if ( v27 < 0 )
        {
          v77 = *v26;
          v38 = v77 - v18[4];
LABEL_66:
          if ( v38 < v18[5] )
          {
            v39 = *(unsigned int *)(v22 + 4LL * (int)v38);
            if ( (_DWORD)v39 )
            {
              v28 = v12 + v39;
              v20 = 0;
              if ( v12 + v39 > (unsigned __int64)v18 && v28 < (unsigned __int64)v21 )
              {
                v40 = v57;
                v41 = v28;
                v42 = 0;
                v55 = 0LL;
                v43 = *(_QWORD **)(v2 + 176);
                v66 = 0LL;
                while ( 1 )
                {
                  v44 = strrchr((const char *)v41, 46);
                  if ( !v44 || (v45 = (_WORD)v44 - v41, (unsigned __int64)&v44[-v41] > 0xFFFF) )
                  {
LABEL_94:
                    v20 = -1073741701;
                    goto LABEL_95;
                  }
                  SourceString.Buffer = (char *)v41;
                  SourceString.Length = (_WORD)v44 - v41;
                  SourceString.MaximumLength = (_WORD)v44 - v41;
                  v46 = v44 + 1;
                  if ( v44[1] == 35 )
                  {
                    if ( RtlCharToInteger(v44 + 2, 0, &Value) < 0 )
                      goto LABEL_94;
                    v46 = 0LL;
                  }
                  if ( v45 == 5 && (*(_DWORD *)v41 | 0x20202020) == 0x6C64746E && (*(_BYTE *)(v41 + 4) | 0x20) == 0x6C )
                  {
                    v40 = LdrpNtDllDataTableEntry;
                    v55 = LdrpNtDllDataTableEntry;
                  }
                  else
                  {
                    v47 = LdrpLoadDependentModule(&SourceString, v43, v40, 1, &v55, (__int64)&v66);
                    v20 = v47;
                    if ( v47 < 0 || v47 == 259 )
                      goto LABEL_95;
                    v40 = v55;
                  }
                  ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(v40 + 48), v46, Value, &v61);
                  v20 = ProcedureAddress;
                  if ( ProcedureAddress != -1073741267 )
                    break;
                  if ( ++v42 == 32 )
                    goto LABEL_94;
                  v41 = v61;
                }
                if ( ProcedureAddress >= 0 )
                {
                  v49 = *(_QWORD *)(v40 + 48);
                  if ( qword_1801552F0 )
                  {
                    if ( v49 < *((_QWORD *)&xmmword_180155330 + 1)
                      || v49 >= *((_QWORD *)&xmmword_180155330 + 1) + (unsigned __int64)(unsigned int)qword_180155340 )
                    {
                      RtlpxLookupFunctionTable(*(_QWORD *)(v40 + 48), &v67);
                    }
                    else
                    {
                      v67 = xmmword_180155330;
                      v68 = qword_180155340;
                    }
                    if ( *((_QWORD *)&v67 + 1) != v49 )
                      __fastfail(0x18u);
                  }
                }
LABEL_95:
                if ( v66 )
                  RtlFreeHeap(LdrpHeap, 0, v66);
                if ( v20 == 259 )
                  return 0LL;
                if ( v20 >= 0 )
                  v28 = v61;
                v2 = v73;
                v12 = v72;
                v1 = a1;
                v18 = (_DWORD *)v54;
                v26 = v56;
              }
            }
          }
        }
        else
        {
          v30 = (unsigned __int16 *)(*(_QWORD *)(v2 + 48) + *(unsigned int *)v26);
          v31 = v30 + 1;
          v64 = v30 + 1;
          v32 = *v30;
          v33 = v23 - 1;
          if ( v32 >= v23 )
            v32 = v33 / 2;
          if ( v33 >= 0 )
          {
            while ( 1 )
            {
              v34 = v31;
              v35 = v12 + *(unsigned int *)(v24 + 4LL * v32) - (_QWORD)v31;
              while ( 1 )
              {
                v36 = *(_BYTE *)v34;
                if ( *(_BYTE *)v34 != *((_BYTE *)v34 + v35) )
                  break;
                v34 = (unsigned __int16 *)((char *)v34 + 1);
                if ( !v36 )
                {
                  v37 = 0;
                  goto LABEL_54;
                }
              }
              v37 = v36 < *((_BYTE *)v34 + v35) ? -1 : 1;
LABEL_54:
              if ( !v37 )
                break;
              if ( v37 >= 0 )
                v29 = v32 + 1;
              else
                v33 = v32 - 1;
              v32 = (v33 + v29) / 2;
              v24 = v62;
              if ( v33 < v29 )
                goto LABEL_61;
            }
            v38 = *(unsigned __int16 *)(v69 + 2LL * v32);
            v21 = v63;
            v22 = v65;
            goto LABEL_66;
          }
LABEL_61:
          if ( (LdrpDebugFlags & 3) != 0 )
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              1325,
              (unsigned int)"LdrpNameToOrdinal",
              1,
              (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n");
          if ( (LdrpDebugFlags & 0x40) != 0 )
            __debugbreak();
        }
        if ( v20 < 0 )
        {
          if ( v20 == -1073741702 || v20 == -1073741515 )
          {
            if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v2 + 80))
              || (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v57 + 80)) )
            {
              v51 = v57;
              LdrpLogLoadFailureEtwEvent(v2 + 72, v57 + 72, 1, (unsigned int)&LoadFailure, 0);
              LdrpLogLoadFailureEtwEvent(v2 + 72, v51 + 72, 1, (unsigned int)&LoadFailureOperational, 1);
            }
            if ( (_BYTE)v75 )
            {
              v20 = -1073741512;
              v52 = (unsigned __int16 *)v77;
            }
            else
            {
              v20 = -1073741511;
              v52 = v64;
            }
            LdrpReportError(v2 + 72, v52, (unsigned int)v20);
          }
          v1 = a1;
          goto LABEL_118;
        }
        v53 = v58;
        *v58 = v28;
        v26 += 4;
        v58 = v53 + 1;
        ++*(_DWORD *)(v1 + 116);
        v24 = v62;
        v23 = v59;
        v21 = v63;
        v22 = v65;
        continue;
      }
    }
    ++*(_DWORD *)(v1 + 112);
  }
  v20 = LdrpDoPostSnapWork(v1);
  if ( v20 >= 0 )
  {
    LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 0x14A7u);
    *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
  }
LABEL_118:
  if ( v20 < 0 )
LABEL_119:
    LdrpLogError(v20, 25, 0, v1);
  return (unsigned int)v20;
}

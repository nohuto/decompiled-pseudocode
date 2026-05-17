/*
 * XREFs of LdrpLoadDependentModule @ 0x180022010
 * Callers:
 *     LdrpResolveForwarder @ 0x18001664C (LdrpResolveForwarder.c)
 *     LdrpMapAndSnapDependency @ 0x180021DC4 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     ApiSetpSearchForApiSetHost @ 0x180020A10 (ApiSetpSearchForApiSetHost.c)
 *     LdrpLogDllState @ 0x180021298 (LdrpLogDllState.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180021564 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800239A0 (RtlAnsiStringToUnicodeString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180023E00 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlEqualUnicodeString @ 0x180023F50 (RtlEqualUnicodeString.c)
 *     NtdllpAllocateStringRoutine @ 0x180024358 (NtdllpAllocateStringRoutine.c)
 *     LdrpFindLoadedDllByName @ 0x18002467C (LdrpFindLoadedDllByName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800248B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180026DE4 (RtlDetermineDosPathNameType_Ustr.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpQueueWork @ 0x1800390B0 (LdrpQueueWork.c)
 *     LdrpProcessWork @ 0x18003913C (LdrpProcessWork.c)
 *     RtlReleaseActivationContext @ 0x18003D9D0 (RtlReleaseActivationContext.c)
 *     LdrpGetFullPath @ 0x18003FC30 (LdrpGetFullPath.c)
 *     LdrpLoadKnownDll @ 0x18003FE98 (LdrpLoadKnownDll.c)
 *     LdrpAllocatePlaceHolder @ 0x180040198 (LdrpAllocatePlaceHolder.c)
 *     LdrpFreeUnicodeString @ 0x180042C80 (LdrpFreeUnicodeString.c)
 *     LdrpDestroyNode @ 0x18004416C (LdrpDestroyNode.c)
 *     LdrpReleaseTlsEntry @ 0x1800451C8 (LdrpReleaseTlsEntry.c)
 *     RtlpWakeSRWLock @ 0x18005FA44 (RtlpWakeSRWLock.c)
 *     LdrpFreeReplacedModule @ 0x180061FF8 (LdrpFreeReplacedModule.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18006CB9C (RtlRemoveInvertedFunctionTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800BD334 (LdrpLogEtwEvent.c)
 *     NtdllpReallocateStringRoutine @ 0x1800C0C28 (NtdllpReallocateStringRoutine.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800D2480 (RtlxOemStringToUnicodeSize.c)
 */

__int64 __fastcall LdrpLoadDependentModule(
        PCANSI_STRING SourceString,
        _QWORD *a2,
        __int64 a3,
        int a4,
        volatile signed __int32 **a5,
        __int64 *a6)
{
  __int64 v6; // r14
  _QWORD *v7; // r13
  volatile signed __int32 **v9; // r15
  __int64 v10; // rdx
  unsigned __int16 v11; // di
  unsigned int v12; // ebx
  int FullPath; // r12d
  unsigned int v14; // eax
  __int64 v15; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  int v17; // edi
  unsigned __int64 ActiveFrame; // rcx
  int *v19; // r15
  struct _PEB *v20; // r13
  _DWORD *ApiSetMap; // rsi
  unsigned __int16 v22; // bx
  unsigned int v23; // r11d
  unsigned int v24; // eax
  unsigned __int16 *v25; // r8
  unsigned __int16 v26; // r10
  unsigned int *v27; // r13
  int v28; // r10d
  int v29; // r8d
  unsigned int *v30; // rcx
  unsigned __int16 *v31; // r8
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rax
  unsigned int v34; // r10d
  unsigned int v35; // r11d
  unsigned __int16 *v36; // r9
  int v37; // r10d
  __int64 v38; // rcx
  char v39; // al
  __int64 v40; // rbx
  unsigned __int64 v41; // rbx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  char *v44; // rcx
  unsigned int v45; // ecx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  _WORD *v47; // rax
  __int16 v48; // cx
  _WORD *v49; // rcx
  __int64 *v50; // r14
  __int64 v51; // r12
  int v52; // r15d
  __int64 v53; // r13
  __int64 v54; // rdi
  unsigned __int16 *v55; // r8
  int v56; // r10d
  unsigned __int64 v57; // r11
  int v58; // eax
  unsigned __int16 v59; // r9
  int v60; // eax
  int v61; // r14d
  __int64 v62; // r8
  _QWORD **v63; // rbx
  char v64; // cl
  _QWORD *j; // rsi
  volatile signed __int32 *v66; // rdi
  __int64 v67; // rax
  int LoadedDllByName; // ebx
  __int64 v69; // rbx
  __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // rdx
  int v73; // esi
  volatile signed __int32 *v74; // rax
  volatile signed __int32 *v75; // rdi
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // r14
  int v80; // edx
  __int64 *v81; // rbx
  int v82; // ecx
  __int64 v83; // rax
  signed __int64 v84; // rax
  volatile signed __int32 **v85; // rdi
  volatile signed __int32 *v86; // rbx
  _QWORD *v87; // rdx
  _QWORD *v88; // rax
  __int64 *v89; // rdx
  _QWORD *v90; // rdx
  _QWORD *v91; // r8
  bool v92; // zf
  int v93; // eax
  __int64 Heap; // rax
  unsigned __int16 v95; // r8
  int v96; // ebx
  _WORD *v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rdx
  signed __int64 v100; // rtt
  unsigned __int64 v101; // rcx
  unsigned int v102; // ebx
  _WORD *v103; // rax
  unsigned int v104; // esi
  void *v105; // r14
  unsigned int v106; // ebx
  void *v107; // rdi
  unsigned int v108; // edi
  void *v109; // rsi
  const char *v110; // rax
  int v111; // r9d
  int v112; // eax
  __int64 v113; // rax
  __int64 v114; // rdx
  volatile signed __int32 **v115; // rcx
  _QWORD *v116; // rbx
  bool v117; // si
  void *StringRoutine; // rax
  void *v120; // r14
  _BYTE v121[32]; // [rsp+0h] [rbp-568h] BYREF
  int *v122; // [rsp+20h] [rbp-548h]
  __int64 v123; // [rsp+30h] [rbp-538h]
  char v124; // [rsp+50h] [rbp-518h]
  char v125; // [rsp+51h] [rbp-517h]
  int v126; // [rsp+58h] [rbp-510h]
  int v127; // [rsp+60h] [rbp-508h]
  char v128; // [rsp+64h] [rbp-504h]
  char v129; // [rsp+65h] [rbp-503h]
  int v130; // [rsp+68h] [rbp-500h]
  char v131; // [rsp+6Ch] [rbp-4FCh]
  char v132; // [rsp+6Dh] [rbp-4FBh]
  int appended; // [rsp+70h] [rbp-4F8h]
  int v134; // [rsp+74h] [rbp-4F4h]
  int v135; // [rsp+78h] [rbp-4F0h]
  int v136; // [rsp+7Ch] [rbp-4ECh]
  unsigned __int16 v137; // [rsp+80h] [rbp-4E8h]
  int v138; // [rsp+84h] [rbp-4E4h]
  int v139; // [rsp+88h] [rbp-4E0h]
  int v140; // [rsp+8Ch] [rbp-4DCh]
  unsigned int v141; // [rsp+90h] [rbp-4D8h]
  struct _PEB *v142; // [rsp+98h] [rbp-4D0h]
  _QWORD *v143; // [rsp+A0h] [rbp-4C8h]
  int v144; // [rsp+A8h] [rbp-4C0h]
  volatile signed __int32 **v145; // [rsp+B0h] [rbp-4B8h]
  __int64 v146; // [rsp+B8h] [rbp-4B0h]
  void *Src; // [rsp+C0h] [rbp-4A8h]
  __int64 v148; // [rsp+C8h] [rbp-4A0h]
  int v149; // [rsp+D0h] [rbp-498h]
  unsigned int v150; // [rsp+D4h] [rbp-494h]
  int v151; // [rsp+D8h] [rbp-490h]
  int v152; // [rsp+DCh] [rbp-48Ch]
  int v153; // [rsp+E0h] [rbp-488h]
  int v154; // [rsp+E4h] [rbp-484h]
  int *v155; // [rsp+E8h] [rbp-480h]
  int v156; // [rsp+F0h] [rbp-478h]
  unsigned __int16 *v157; // [rsp+F8h] [rbp-470h]
  int v158; // [rsp+100h] [rbp-468h]
  __int64 *v159; // [rsp+108h] [rbp-460h]
  unsigned int v160; // [rsp+110h] [rbp-458h]
  unsigned int v161; // [rsp+114h] [rbp-454h]
  int v162; // [rsp+118h] [rbp-450h]
  int v163; // [rsp+11Ch] [rbp-44Ch]
  unsigned int v164; // [rsp+120h] [rbp-448h]
  int v165; // [rsp+124h] [rbp-444h]
  __int64 v166; // [rsp+128h] [rbp-440h]
  _WORD v167[4]; // [rsp+130h] [rbp-438h] BYREF
  unsigned __int16 *v168; // [rsp+138h] [rbp-430h]
  UNICODE_STRING DestinationString; // [rsp+140h] [rbp-428h] BYREF
  int v170; // [rsp+150h] [rbp-418h]
  __int64 v171; // [rsp+158h] [rbp-410h]
  unsigned __int16 *v172; // [rsp+160h] [rbp-408h]
  __int64 v173; // [rsp+168h] [rbp-400h]
  volatile signed __int32 *v174; // [rsp+170h] [rbp-3F8h]
  __int64 v175; // [rsp+178h] [rbp-3F0h]
  int v176; // [rsp+180h] [rbp-3E8h]
  volatile signed __int32 *v177; // [rsp+188h] [rbp-3E0h]
  void *v178; // [rsp+190h] [rbp-3D8h]
  _WORD *v179; // [rsp+198h] [rbp-3D0h]
  void *v180; // [rsp+1A0h] [rbp-3C8h]
  _WORD *v181; // [rsp+1A8h] [rbp-3C0h]
  void *v182; // [rsp+1B0h] [rbp-3B8h]
  unsigned __int16 *v183; // [rsp+1B8h] [rbp-3B0h]
  int v184; // [rsp+1C0h] [rbp-3A8h]
  unsigned __int16 *v185; // [rsp+1C8h] [rbp-3A0h]
  _WORD *v186; // [rsp+1D0h] [rbp-398h]
  _WORD *v187; // [rsp+1D8h] [rbp-390h]
  void *i; // [rsp+1E0h] [rbp-388h]
  __int64 v189; // [rsp+1F0h] [rbp-378h] BYREF
  int v190; // [rsp+1F8h] [rbp-370h]
  _QWORD v191[7]; // [rsp+200h] [rbp-368h] BYREF
  _BYTE v192[16]; // [rsp+240h] [rbp-328h] BYREF
  struct _TEB *v193; // [rsp+250h] [rbp-318h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+260h] [rbp-308h] BYREF
  int v195; // [rsp+300h] [rbp-268h] BYREF
  void *v196; // [rsp+308h] [rbp-260h]
  _WORD v197[128]; // [rsp+310h] [rbp-258h] BYREF
  int v198; // [rsp+410h] [rbp-158h] BYREF
  void *v199; // [rsp+418h] [rbp-150h]
  _WORD v200[128]; // [rsp+420h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+568h] [rbp+0h]

  v149 = a4;
  v6 = a3;
  v148 = a3;
  v7 = a2;
  v143 = a2;
  v9 = a5;
  v145 = a5;
  v159 = a6;
  v196 = v197;
  v195 = 0x1000000;
  v10 = 256LL;
  v197[0] = 0;
  v199 = v200;
  v11 = 0;
  v198 = 0x1000000;
  LOWORD(v12) = 256;
  v200[0] = 0;
  FullPath = 0;
  if ( SourceString->Length )
  {
    if ( NlsMbCodePageTag )
    {
      v14 = RtlxOemStringToUnicodeSize(SourceString);
      v10 = 256LL;
    }
    else
    {
      v14 = 2 * SourceString->Length + 2;
    }
    FullPath = 0;
    if ( v14 > 0x100 )
    {
      if ( v14 <= 0xFFFE )
      {
        v12 = (v14 + 63) & 0xFFFFFFC0;
        if ( v12 > 0xFFFE )
          v12 = 65534;
        StringRoutine = (void *)NtdllpAllocateStringRoutine(v12, 256LL);
        v120 = StringRoutine;
        v11 = v198;
        if ( StringRoutine && (_WORD)v198 )
        {
          memmove(StringRoutine, v199, (unsigned __int16)v198);
          v11 = v198;
        }
        if ( v120 )
        {
          v199 = v120;
          HIWORD(v198) = v12;
        }
        else
        {
          FullPath = -1073741801;
          LOWORD(v12) = HIWORD(v198);
        }
      }
      else
      {
        FullPath = -1073741562;
      }
    }
    if ( FullPath >= 0 )
    {
      DestinationString.Buffer = (unsigned __int16 *)((char *)v199 + v11);
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v12 - v11;
      RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
      LOWORD(v198) = DestinationString.Length + v198;
    }
    v6 = v148;
  }
  if ( FullPath >= 0 )
  {
    v189 = 72LL;
    v190 = 1;
    memset(v191, 0, sizeof(v191));
    v15 = *(_QWORD *)(v6 + 136);
    ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
    v17 = 0;
    if ( ActivationContextStackPointer )
      ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
    else
      ActiveFrame = 0LL;
    v191[3] = ~ActiveFrame;
    v191[4] = ~v15;
    v191[5] = retaddr;
    if ( ActiveFrame && (*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20 )
    {
      ExceptionRecord.ExceptionRecord = 0LL;
      ExceptionRecord.NumberParameters = 4;
      ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
      ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
      ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
      ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
      ExceptionRecord.ExceptionCode = -1072365548;
      ExceptionRecord.ExceptionFlags = 1;
      RtlRaiseException(&ExceptionRecord);
      goto LABEL_15;
    }
    v191[0] = ActiveFrame;
    v191[1] = v15;
    LODWORD(v191[2]) = 32;
    if ( ActiveFrame )
    {
      if ( *(_QWORD *)(ActiveFrame + 8) == v15 )
        goto LABEL_14;
    }
    else if ( !v15 )
    {
LABEL_14:
      LODWORD(v191[2]) = 48;
LABEL_15:
      v127 = 0;
      appended = 0;
      v19 = &v198;
      v155 = &v198;
      v20 = NtCurrentPeb();
      v142 = v20;
      v125 = 0;
      LOBYTE(v6) = 1;
      v126 = v6;
      v131 = 1;
      ApiSetMap = v20->ApiSetMap;
      if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
        LdrpLogEtwEvent(5328, 0, 0, 0, (__int64)&v198);
      v39 = 0;
      v146 = 0LL;
      Src = 0LL;
      FullPath = 0;
      v124 = 0;
      if ( (unsigned __int16)v198 >= 8u )
      {
        v101 = *(_QWORD *)v199 & 0xFFFFFFDFFFDFFFDFuLL;
        if ( v101 == 0x2D004900500041LL || v101 == 0x2D005400580045LL )
        {
          v36 = (unsigned __int16 *)v199;
          v102 = (unsigned __int16)v198;
          v103 = (char *)v199 + (unsigned __int16)v198;
          v186 = v103;
          v160 = (unsigned __int16)v198;
          do
          {
            if ( v102 <= 1 )
              break;
            v102 -= 2;
            v160 = v102;
            v186 = --v103;
          }
          while ( *v103 != 45 );
          v22 = (unsigned __int16)v102 >> 1;
          if ( v22 )
          {
            v23 = 0;
            v24 = 0;
            v25 = (unsigned __int16 *)v199;
            for ( i = v199; ; i = v25 )
            {
              v150 = v24;
              if ( v24 >= v22 )
                break;
              v137 = *v25;
              v26 = v137;
              if ( (unsigned __int16)(v137 - 65) <= 0x19u )
              {
                v26 = v137 + 32;
                v137 += 32;
              }
              v23 = v23 * ApiSetMap[6] + v26;
              ++v24;
              ++v25;
            }
            v27 = 0LL;
            v153 = 0;
            v28 = ApiSetMap[3] - 1;
            v151 = v28;
            while ( v17 <= v28 )
            {
              v29 = (v28 + v17) >> 1;
              v30 = (_DWORD *)((char *)&ApiSetMap[2 * v29] + (unsigned int)ApiSetMap[5]);
              if ( v23 < *v30 )
              {
                v28 = v29 - 1;
                v151 = v29 - 1;
              }
              else
              {
                if ( v23 <= *v30 )
                {
                  v27 = (_DWORD *)((char *)&ApiSetMap[6 * v30[1]] + (unsigned int)ApiSetMap[4]);
                  break;
                }
                v17 = v29 + 1;
                v153 = v29 + 1;
              }
            }
            if ( v27 )
            {
              v31 = (unsigned __int16 *)((char *)ApiSetMap + v27[1]);
              v32 = v27[3] >> 1;
              v183 = (unsigned __int16 *)v199;
              v172 = v31;
              v33 = v22 > v32 ? v32 : v22;
              while ( 1 )
              {
                if ( v36 >= (unsigned __int16 *)((char *)v199 + 2 * v33) )
                {
                  v37 = v22 - (_DWORD)v32;
                  goto LABEL_37;
                }
                v34 = *v36;
                v161 = v34;
                v35 = *v31;
                v164 = v35;
                if ( v34 != v35 )
                {
                  if ( v34 >= 0x61 )
                  {
                    if ( v34 > 0x7A )
                      v34 = (unsigned __int16)(v34
                                             + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                        + 2LL
                                                        * ((v34 & 0xF)
                                                         + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                               + 2LL
                                                                               * (((unsigned __int8)v34 >> 4)
                                                                                + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v34)))))));
                    else
                      v34 -= 32;
                  }
                  v161 = v34;
                  if ( v35 >= 0x61 )
                  {
                    if ( v35 > 0x7A )
                      v35 = (unsigned __int16)(v35
                                             + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                        + 2LL
                                                        * ((v35 & 0xF)
                                                         + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                               + 2LL
                                                                               * (((unsigned __int8)v35 >> 4)
                                                                                + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v35)))))));
                    else
                      v35 -= 32;
                  }
                  v164 = v35;
                  if ( v34 != v35 )
                    break;
                }
                v183 = ++v36;
                v172 = ++v31;
              }
              v37 = v34 - v35;
LABEL_37:
              if ( !v37 )
              {
                LOBYTE(v6) = v126;
                v19 = v155;
                if ( v148 != -88 && v27[5] > 1 )
                {
                  v38 = ApiSetpSearchForApiSetHost(
                          (__int64)v27,
                          *(_QWORD *)(v148 + 96),
                          *(_WORD *)(v148 + 88) >> 1,
                          (__int64)ApiSetMap);
                  goto LABEL_42;
                }
                if ( v27[5] )
                {
                  v38 = (__int64)ApiSetMap + v27[4];
LABEL_42:
                  Src = (char *)ApiSetMap + *(unsigned int *)(v38 + 12);
                  WORD1(v146) = *(_WORD *)(v38 + 16);
                  LOWORD(v146) = WORD1(v146);
                  v39 = 1;
                  v124 = 1;
                  v20 = v142;
                  goto LABEL_43;
                }
              }
            }
            LOBYTE(v6) = v126;
            v19 = v155;
            v20 = v142;
          }
        }
        v39 = v124;
      }
LABEL_43:
      v129 = v39;
      if ( v39 )
      {
        if ( (_WORD)v146 )
        {
          if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
            LdrpLogEtwEvent(5329, 0, 0, 0, (__int64)v19);
LABEL_46:
          v134 = 0;
          if ( v129 )
          {
            if ( !(_WORD)v146 )
            {
              FullPath = -1073740671;
              v134 = -1073740671;
LABEL_70:
              appended = FullPath;
              if ( FullPath < 0 )
                goto LABEL_276;
              if ( !(_WORD)v195 )
              {
                v97 = (char *)v199 + (unsigned __int16)v198;
                v179 = v97;
                while ( 1 )
                {
                  v179 = --v97;
                  if ( v97 < v199 )
                    break;
                  if ( *v97 == 92 || *v97 == 47 )
                  {
                    if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(&v198) != 5 )
                    {
                      FullPath = LdrpGetFullPath(&v198, &v195);
                      appended = FullPath;
                      if ( FullPath >= 0 )
                        v127 |= 0x600u;
                      goto LABEL_75;
                    }
LABEL_179:
                    appended = LdrpAppendUnicodeStringToFilenameBuffer(
                                 (unsigned __int16 *)&v195,
                                 (unsigned __int16 *)&v198);
                    FullPath = appended;
                    goto LABEL_75;
                  }
                }
                v127 |= 0x20u;
                goto LABEL_179;
              }
              if ( (LdrpDebugFlags & 5) != 0 )
              {
                v110 = "SxS";
                if ( !v125 )
                  v110 = "API set";
                LdrpLogDbgPrint(
                  (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                  2595,
                  (unsigned int)"LdrpPreprocessDllName",
                  2,
                  "DLL %wZ was redirected to %wZ by %s\n",
                  &v198,
                  &v195,
                  v110);
              }
              v127 |= 0x200u;
              if ( v125 )
                v127 |= 4u;
LABEL_75:
              if ( FullPath < 0 )
                goto LABEL_276;
              v47 = (char *)v196 + (unsigned __int16)v195;
              v187 = v47;
              v132 = 0;
              while ( 1 )
              {
                v187 = --v47;
                if ( v47 < v196 )
                {
LABEL_201:
                  FullPath = LdrpAppendUnicodeStringToFilenameBuffer((unsigned __int16 *)&v195, L"\b\n");
                  appended = FullPath;
                  goto LABEL_86;
                }
                v48 = *v47;
                if ( *v47 == 46 )
                  break;
                if ( v48 == 47 || v48 == 92 )
                  goto LABEL_201;
              }
              v132 = 1;
              v49 = (char *)v196 + (unsigned __int16)v195;
              v181 = v49;
              while ( 1 )
              {
                v181 = --v49;
                if ( v49 < v196 || *v49 != 46 )
                  break;
                LOWORD(v195) = v195 - 2;
              }
              v49[1] = 0;
LABEL_86:
              if ( FullPath < 0 )
              {
LABEL_276:
                if ( (LdrpDebugFlags & 3) != 0 )
                {
                  LODWORD(v123) = FullPath;
                  LdrpLogDbgPrint(
                    (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                    2644,
                    (unsigned int)"LdrpPreprocessDllName",
                    0,
                    "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
                    &v198,
                    v123);
                }
                if ( (LdrpDebugFlags & 0x10) != 0 )
                  __debugbreak();
              }
              v130 = FullPath;
              if ( FullPath < 0 )
                goto LABEL_322;
              v50 = v159;
              if ( !*v159 )
              {
                v184 = NtdllBaseTag + 2621440;
                Heap = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 2621440), 32LL);
                *v159 = Heap;
                if ( !Heap )
                {
                  FullPath = -1073741801;
                  v130 = -1073741801;
                  goto LABEL_322;
                }
              }
              v51 = v143[4];
              v52 = v127;
              v53 = v143[2];
              v54 = (__int64)v145;
              *v145 = 0LL;
              if ( (v52 & 0x20) != 0 )
              {
                LoadedDllByName = LdrpFindLoadedDllByName((unsigned int)&v195, 0, v52, v54, 0LL);
                v126 = LoadedDllByName;
                v135 = LoadedDllByName;
LABEL_119:
                if ( LoadedDllByName != -1073741515 )
                {
                  v69 = *(_QWORD *)v54;
                  v158 = 0;
                  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                  v70 = *(_QWORD *)(v69 + 152);
                  v71 = *(_DWORD *)(v70 + 24);
                  if ( v71 != -1 )
                  {
                    if ( v71 )
                    {
                      *(_DWORD *)(v70 + 24) = v71 + 1;
                    }
                    else
                    {
                      v193 = NtCurrentTeb();
                      if ( (v193->SameTebFlags & 0x1000) != 0 )
                        ++*(_DWORD *)(v70 + 28);
                      else
                        v158 = -1073741515;
                    }
                  }
                  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
                  FullPath = v126;
                  goto LABEL_122;
                }
LABEL_189:
                FullPath = LdrpAllocatePlaceHolder((unsigned int)&v195, v53, v52, v149, v148, v54, v51);
                v135 = FullPath;
                if ( FullPath >= 0 )
                {
                  FullPath = LdrpLoadKnownDll(*(_QWORD *)(*(_QWORD *)v54 + 176LL));
                  v135 = FullPath;
                }
LABEL_122:
                v130 = FullPath;
                if ( !*(_QWORD *)v54 )
                {
LABEL_322:
                  v7 = v143;
LABEL_323:
                  RtlDeactivateActivationContextUnsafeFast(&v189);
                  v9 = v145;
                  goto LABEL_324;
                }
                v73 = v127 & 0x400;
                if ( (v127 & 0x400) != 0 && FullPath == -1073741515 )
                {
                  LOBYTE(v72) = 1;
                  LdrpProcessWork(*(_QWORD *)(*(_QWORD *)v54 + 176LL), v72);
                  FullPath = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)v54 + 176LL) + 32LL);
                  v130 = FullPath;
                }
                RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                v74 = *(volatile signed __int32 **)v54;
                v75 = v74;
                v177 = v74;
                if ( v74 )
                {
                  v76 = *((_QWORD *)v74 + 22);
                  if ( v76 )
                  {
                    if ( (*(_DWORD *)(v76 + 24) & 0x80000) == 0 && *(volatile signed __int32 **)(v76 + 48) != v74 )
                    {
                      v75 = *(volatile signed __int32 **)(v76 + 48);
                      v177 = v75;
                      *(_QWORD *)(v76 + 48) = v74;
                    }
                  }
                }
                v174 = v75;
                *(_DWORD *)(*v50 + 24) &= ~1u;
                v77 = *v50;
                v166 = *v50;
                v7 = v143;
                v78 = *((_QWORD *)v75 + 19);
                v79 = *(_QWORD *)(v143[6] + 152LL);
                if ( v79 != v78
                  && (*(_DWORD *)(v78 + 56) != 9
                   || *(_DWORD *)(v78 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v78 - 56LL) & 0x20) == 0) )
                {
                  v87 = *(_QWORD **)(v79 + 40);
                  if ( !v87 )
                  {
LABEL_153:
                    if ( !v77 )
                    {
                      v176 = NtdllBaseTag + 2359296;
                      v113 = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 2359296), 32LL);
                      v77 = v113;
                      v166 = v113;
                      if ( !v113 )
                      {
                        MEMORY[0] = -1073741801;
                        v77 = 0LL;
                        goto LABEL_131;
                      }
                      *(_DWORD *)(v113 + 24) |= 1u;
                    }
                    v89 = *(__int64 **)(v79 + 40);
                    if ( v89 )
                    {
                      *(_QWORD *)v77 = *v89;
                      *v89 = v77;
                    }
                    else
                    {
                      *(_QWORD *)v77 = v77;
                    }
                    *(_QWORD *)(v79 + 40) = v77;
                    *(_QWORD *)(v77 + 8) = v78;
                    v90 = (_QWORD *)(v77 + 16);
                    v91 = *(_QWORD **)(v78 + 48);
                    if ( v91 )
                    {
                      *v90 = *v91;
                      *v91 = v90;
                    }
                    else
                    {
                      *v90 = v90;
                    }
                    *(_QWORD *)(v78 + 48) = v90;
                    v92 = (*(_DWORD *)(v77 + 24) & 1) == 0;
                    v93 = *(_DWORD *)(v77 + 24) & 1;
                    *(_QWORD *)(v77 + 24) = v79;
                    if ( !v92 )
                    {
                      *(_DWORD *)(v77 + 24) &= ~1u;
                      *(_DWORD *)(v77 + 24) |= v93 & 1;
                    }
                    v77 = 0LL;
                    v166 = 0LL;
LABEL_131:
                    v173 = v77;
                    v81 = v159;
                    *v159 = v77;
                    if ( FullPath != -1073741515 || v73 )
                    {
                      if ( FullPath < 0 )
                      {
LABEL_136:
                        v83 = *((_QWORD *)v75 + 19);
                        if ( *(_DWORD *)(v83 + 24) != -1
                          && (*(_BYTE *)(*(_QWORD *)v83 - 56LL) & 0x20) == 0
                          && _InterlockedExchangeAdd(v75 + 69, 0xFFFFFFFF) == 1 )
                        {
                          RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                          v114 = *((_QWORD *)v75 + 20);
                          v115 = (volatile signed __int32 **)*((_QWORD *)v75 + 21);
                          if ( *(volatile signed __int32 **)(v114 + 8) != v75 + 40 || *v115 != v75 + 40 )
                            __fastfail(3u);
                          *v115 = (volatile signed __int32 *)v114;
                          *(_QWORD *)(v114 + 8) = v115;
                          v116 = (_QWORD *)*((_QWORD *)v75 + 19);
                          v117 = *v116 == (_QWORD)v116;
                          RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
                          if ( *((_WORD *)v75 + 55) )
                            LdrpReleaseTlsEntry(v75, 0LL);
                          if ( (v75[26] & 0x200) != 0 )
                            RtlRemoveInvertedFunctionTable(*((_QWORD *)v75 + 6));
                          if ( *((_QWORD *)v75 + 6) )
                            NtUnmapViewOfSection(-1LL);
                          if ( (unsigned __int64)(*((_QWORD *)v75 + 17) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
                            RtlReleaseActivationContext();
                          if ( *((_QWORD *)v75 + 10) )
                            LdrpFreeUnicodeString(v75 + 18);
                          RtlFreeHeap(LdrpHeap, 0LL, v75);
                          if ( v117 )
                            LdrpDestroyNode(v116);
                        }
                        v84 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
                        if ( v84 != 1 )
                        {
                          do
                          {
                            if ( (v84 & 6) == 2 )
                              v98 = 3LL;
                            else
                              v98 = -1LL;
                            v99 = v98 + v84;
                            v100 = v84;
                            v84 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v98 + v84, v84);
                          }
                          while ( v100 != v84 );
                          if ( v98 == 3 )
                            RtlpWakeSRWLock(&LdrpModuleDatatableLock, v99, 0LL);
                        }
                        v85 = v145;
                        v86 = v174;
                        if ( v174 != *v145 )
                        {
                          LdrpFreeReplacedModule();
                          *v85 = v86;
                        }
                        FullPath = v130;
                        goto LABEL_323;
                      }
                    }
                    else
                    {
                      LdrpQueueWork(*((_QWORD *)v75 + 22));
                      v130 = 0;
                    }
                    v82 = *((_DWORD *)v7 + 23);
                    if ( v82 )
                    {
                      if ( *v81 || *(int *)(*((_QWORD *)v75 + 19) + 56LL) >= 2 )
                        *((_DWORD *)v7 + 23) = v82 - 1;
                    }
                    else if ( *(int *)(*((_QWORD *)v75 + 19) + 56LL) < 2 )
                    {
                      v7[9] = v75;
                      *((_DWORD *)v7 + 23) = 1;
                      *(_DWORD *)(*(_QWORD *)(v7[6] + 152LL) + 56LL) = 3;
                      v130 = 259;
                    }
                    goto LABEL_136;
                  }
                  v88 = *(_QWORD **)(v79 + 40);
                  while ( 1 )
                  {
                    v88 = (_QWORD *)*v88;
                    if ( v88[1] == v78 )
                      break;
                    if ( v88 == v87 )
                      goto LABEL_153;
                  }
                }
                v80 = *(_DWORD *)(v78 + 24);
                if ( (unsigned int)(v80 - 2) <= 0xFFFFFFFC )
                  *(_DWORD *)(v78 + 24) = v80 - 1;
                goto LABEL_131;
              }
              if ( (v52 & 0x200) == 0 )
              {
                v135 = -1073741515;
                goto LABEL_189;
              }
              v55 = (unsigned __int16 *)((char *)v196 + (unsigned __int16)v195);
              v157 = v55;
              while ( 1 )
              {
                v157 = --v55;
                if ( v55 <= v196 )
                  break;
                if ( *v55 == 92 || *v55 == 47 )
                {
                  v157 = ++v55;
                  break;
                }
              }
              v168 = v55;
              v167[0] = v195 - ((_WORD)v55 - (_WORD)v196);
              v167[1] = HIWORD(v195) - ((_WORD)v55 - (_WORD)v196);
              v56 = 0;
              v156 = 0;
              v185 = v55;
              v136 = 0;
              v57 = (unsigned __int64)v167[0] >> 1;
              v165 = v57;
              while ( 1 )
              {
                v58 = v57;
                LODWORD(v57) = v57 - 1;
                v165 = v57;
                if ( !v58 )
                  break;
                v59 = *v55++;
                v185 = v55;
                if ( v59 < 0x61u )
                {
                  v60 = v59;
                }
                else if ( v59 > 0x7Au )
                {
                  v60 = (unsigned __int16)(v59
                                         + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                    + 2LL
                                                    * ((v59 & 0xF)
                                                     + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                         + 2LL
                                                                                         * (((v59 >> 4) & 0xF)
                                                                                          + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v59 >> 8)))))));
                }
                else
                {
                  v60 = v59 - 32;
                }
                v56 = v60 + 65599 * v56;
                v156 = v56;
              }
              v136 = v56;
              v61 = v56;
              RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
              v63 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v61 & 0x1F));
              v64 = 0;
              v128 = 0;
              for ( j = *v63; j != v63; j = (_QWORD *)*j )
              {
                v66 = (volatile signed __int32 *)(j - 14);
                if ( v61 == *((_DWORD *)j + 38) && ((v52 & 8) == 0 || (v66[26] & 1) != 0) )
                {
                  if ( v121 == (_BYTE *)-768LL )
                  {
                    v64 = 0;
                    if ( (v66[26] & 0x10000000) == 0 )
                    {
                      LOBYTE(v62) = 1;
                      if ( (unsigned __int8)RtlEqualUnicodeString(v167, v66 + 22, v62) )
                        v64 = 1;
                    }
                    v128 = v64;
                  }
                  else
                  {
                    LOBYTE(v62) = 1;
                    v64 = RtlEqualUnicodeString(&v195, v66 + 18, v62);
                    v128 = v64;
                  }
                  if ( v64 )
                  {
                    v67 = *((_QWORD *)v66 + 19);
                    if ( *(_DWORD *)(v67 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v67 - 56LL) & 0x20) == 0 )
                      _InterlockedIncrement(v66 + 69);
                    *v145 = v66;
                    break;
                  }
                }
              }
              if ( v64 )
                LoadedDllByName = 0;
              else
                LoadedDllByName = -1073741515;
              v126 = LoadedDllByName;
              RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
              if ( v121 == (_BYTE *)-768LL )
              {
                v112 = 3;
                if ( LoadedDllByName >= 0 )
                  v112 = 0;
                v163 = v112;
                if ( !MEMORY[0x7FFE0384] || (NtCurrentPeb()->TracingFlags & 4) == 0 || (MEMORY[0x7FFE0385] & 0x20) == 0 )
                  goto LABEL_118;
                v122 = (int *)v167;
                v111 = (unsigned __int8)v163;
              }
              else
              {
                if ( LoadedDllByName < 0 )
                  v139 = 3;
                else
                  v139 = 0;
                if ( !MEMORY[0x7FFE0384] || (NtCurrentPeb()->TracingFlags & 4) == 0 || (MEMORY[0x7FFE0385] & 0x20) == 0 )
                  goto LABEL_118;
                v122 = &v195;
                v111 = (unsigned __int8)v139;
              }
              LdrpLogEtwEvent(5280, 0, 0, v111, (__int64)v122);
LABEL_118:
              v135 = LoadedDllByName;
              v50 = v159;
              v54 = (__int64)v145;
              goto LABEL_119;
            }
            v170 = 0;
            v171 = 2147352624LL;
            v40 = -1LL;
            do
              ++v40;
            while ( *(_WORD *)(2 * v40 + 0x7FFE0030) );
            v41 = 2 * v40;
            v175 = v41;
            if ( v41 >= 0xFFFE )
            {
              LOWORD(v41) = -4;
              v175 = 65532LL;
            }
            LOWORD(v170) = v41;
            HIWORD(v170) = v41 + 2;
            FullPath = 0;
            v152 = 0;
            if ( (_WORD)v41 )
            {
              v42 = (unsigned __int16)v41 + (unsigned __int16)v195 + 2;
              v141 = v42;
              v140 = 0;
              if ( v42 > HIWORD(v195) )
              {
                if ( v42 <= 0xFFFE )
                {
                  v104 = (v42 + 63) & 0xFFFFFFC0;
                  v141 = v104;
                  if ( v104 > 0xFFFE )
                    v104 = 65534;
                  v141 = v104;
                  if ( v196 == v197 )
                  {
                    v105 = (void *)NtdllpAllocateStringRoutine(v104, v196);
                    v180 = v105;
                    if ( v105 && (_WORD)v195 )
                      memmove(v105, v196, (unsigned __int16)v195);
                  }
                  else
                  {
                    v105 = (void *)NtdllpReallocateStringRoutine(v104);
                    v180 = v105;
                  }
                  if ( v105 )
                  {
                    v196 = v105;
                    HIWORD(v195) = v104;
                  }
                  else
                  {
                    FullPath = -1073741801;
                    v140 = -1073741801;
                  }
                }
                else
                {
                  FullPath = -1073741562;
                  v140 = -1073741562;
                }
              }
              v152 = FullPath;
              if ( FullPath >= 0 )
              {
                memmove((char *)v196 + (unsigned __int16)v195, (const void *)0x7FFE0030, (unsigned __int16)v41);
                LOWORD(v195) = v41 + v195;
                *((_WORD *)v196 + ((unsigned __int64)(unsigned __int16)v195 >> 1)) = 0;
              }
            }
            v134 = FullPath;
            if ( FullPath < 0 )
              goto LABEL_70;
            v162 = 0;
            v43 = (unsigned __int16)v195 + 22;
            v126 = v43;
            FullPath = 0;
            v144 = 0;
            if ( v43 > HIWORD(v195) )
            {
              if ( v43 <= 0xFFFE )
              {
                v106 = ((unsigned __int16)v195 + 85) & 0xFFFFFFC0;
                v126 = v106;
                if ( v106 > 0xFFFE )
                  v106 = 65534;
                v126 = v106;
                if ( v196 == v197 )
                {
                  v107 = (void *)NtdllpAllocateStringRoutine(v106, v196);
                  v182 = v107;
                  if ( v107 && (_WORD)v195 )
                    memmove(v107, v196, (unsigned __int16)v195);
                }
                else
                {
                  v107 = (void *)NtdllpReallocateStringRoutine(v106);
                  v182 = v107;
                }
                if ( v107 )
                {
                  v196 = v107;
                  HIWORD(v195) = v106;
                }
                else
                {
                  FullPath = -1073741801;
                  v144 = -1073741801;
                }
              }
              else
              {
                FullPath = -1073741562;
                v144 = -1073741562;
              }
            }
            v162 = FullPath;
            if ( FullPath >= 0 )
            {
              v44 = (char *)v196 + (unsigned __int16)v195;
              *(_OWORD *)v44 = *(_OWORD *)L"\\SYSTEM32\\";
              *((_DWORD *)v44 + 4) = *(_DWORD *)L"2\\";
              LOWORD(v195) = v195 + 20;
              *((_WORD *)v196 + ((unsigned __int64)(unsigned __int16)v195 >> 1)) = 0;
            }
            v134 = FullPath;
            if ( FullPath < 0 )
              goto LABEL_70;
            v154 = 0;
            v45 = (unsigned __int16)v146 + (unsigned __int16)v195 + 2;
            LODWORD(v142) = v45;
            FullPath = 0;
            v138 = 0;
            if ( v45 > HIWORD(v195) )
            {
              if ( v45 <= 0xFFFE )
              {
                v108 = (v45 + 63) & 0xFFFFFFC0;
                LODWORD(v142) = v108;
                if ( v108 > 0xFFFE )
                  v108 = 65534;
                LODWORD(v142) = v108;
                if ( v196 == v197 )
                {
                  v109 = (void *)NtdllpAllocateStringRoutine(v108, v196);
                  v178 = v109;
                  if ( v109 && (_WORD)v195 )
                    memmove(v109, v196, (unsigned __int16)v195);
                }
                else
                {
                  v109 = (void *)NtdllpReallocateStringRoutine(v108);
                  v178 = v109;
                }
                if ( v109 )
                {
                  v196 = v109;
                  HIWORD(v195) = v108;
                }
                else
                {
                  FullPath = -1073741801;
                  v138 = -1073741801;
                }
              }
              else
              {
                FullPath = -1073741562;
                v138 = -1073741562;
              }
            }
            v154 = FullPath;
            if ( FullPath >= 0 )
            {
              memmove((char *)v196 + (unsigned __int16)v195, Src, (unsigned __int16)v146);
              LOWORD(v195) = v146 + v195;
              *((_WORD *)v196 + ((unsigned __int64)(unsigned __int16)v195 >> 1)) = 0;
            }
            v134 = FullPath;
            ProcessParameters = v20->ProcessParameters;
            LOBYTE(v6) = ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0;
            v131 = v6;
            v19 = &v195;
            v155 = &v195;
          }
          if ( FullPath >= 0 && (_BYTE)v6 && !LdrpIsSecureProcess )
          {
            v96 = RtlDosApplyFileIsolationRedirection_Ustr(
                    1,
                    (_DWORD)v19,
                    (unsigned int)L"\b\n",
                    0,
                    (__int64)v192,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
            if ( v96 >= 0 )
            {
              v125 = 1;
              LdrpGetFullPath(v192, &v195);
              LdrpFreeUnicodeString(v192);
            }
            if ( v96 != -1072365560 )
            {
              FullPath = v96;
              v134 = v96;
            }
          }
          goto LABEL_70;
        }
        v95 = 5330;
      }
      else
      {
        v95 = 5331;
      }
      LdrpLogDllState(0, (__int64)v19, v95);
      goto LABEL_46;
    }
    ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)v191;
    goto LABEL_15;
  }
LABEL_324:
  if ( FullPath < 0 )
  {
    *v9 = 0LL;
    *(_DWORD *)v7[4] = FullPath;
  }
  if ( v200 != v199 )
    NtdllpFreeStringRoutine(v199, v10, a3);
  v199 = v200;
  v198 = 0x1000000;
  v200[0] = 0;
  if ( v197 != v196 )
    NtdllpFreeStringRoutine(v196, v10, a3);
  return (unsigned int)FullPath;
}

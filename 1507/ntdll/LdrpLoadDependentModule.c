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
        PVOID *a5,
        _QWORD *a6)
{
  __int64 v6; // r14
  _QWORD *v7; // r13
  PVOID *v9; // r15
  __int64 v10; // rdx
  unsigned __int16 v11; // di
  unsigned int v12; // ebx
  int FullPath; // r12d
  unsigned int v14; // eax
  __int64 v15; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  int v17; // edi
  unsigned __int64 ActiveFrame; // rcx
  _UNICODE_STRING *p_String1; // r15
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
  unsigned __int16 *v47; // rax
  unsigned __int16 v48; // cx
  unsigned __int16 *v49; // rcx
  _QWORD *v50; // r14
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
  _QWORD **v62; // rbx
  char v63; // cl
  _QWORD *j; // rsi
  _QWORD *v65; // rdi
  __int64 v66; // rax
  int LoadedDllByName; // ebx
  __int64 v68; // rbx
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rdx
  int v72; // esi
  __int64 v73; // rax
  __int64 v74; // rdi
  __int64 v75; // rcx
  _DWORD *v76; // rcx
  __int64 v77; // rbx
  __int64 v78; // r14
  int v79; // edx
  _QWORD *v80; // rbx
  int v81; // ecx
  __int64 v82; // rax
  signed __int64 v83; // rax
  PVOID *v84; // rdi
  void *v85; // rbx
  _QWORD *v86; // rdx
  _QWORD *v87; // rax
  _QWORD *v88; // rdx
  _QWORD *v89; // rdx
  _QWORD *v90; // r8
  bool v91; // zf
  int v92; // eax
  PVOID Heap; // rax
  unsigned __int16 v94; // r8
  NTSTATUS v95; // ebx
  _WORD *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rdx
  signed __int64 v99; // rtt
  unsigned __int64 v100; // rcx
  unsigned int v101; // ebx
  _WORD *v102; // rax
  unsigned int v103; // esi
  void *v104; // r14
  unsigned int v105; // ebx
  void *v106; // rdi
  unsigned int v107; // edi
  void *v108; // rsi
  const char *v109; // rax
  int v110; // r9d
  int v111; // eax
  _DWORD *v112; // rax
  __int64 v113; // rdx
  _QWORD *v114; // rcx
  _QWORD *v115; // rbx
  bool v116; // si
  void *v117; // rdx
  _ACTIVATION_CONTEXT *v118; // rcx
  void *StringRoutine; // rax
  void *v121; // r14
  _BYTE v122[32]; // [rsp+0h] [rbp-568h] BYREF
  PUNICODE_STRING DynamicString; // [rsp+20h] [rbp-548h]
  PULONG NewFlags; // [rsp+30h] [rbp-538h]
  char v125; // [rsp+50h] [rbp-518h]
  char v126; // [rsp+51h] [rbp-517h]
  int v127; // [rsp+58h] [rbp-510h]
  int v128; // [rsp+60h] [rbp-508h]
  char v129; // [rsp+64h] [rbp-504h]
  char v130; // [rsp+65h] [rbp-503h]
  int v131; // [rsp+68h] [rbp-500h]
  char v132; // [rsp+6Ch] [rbp-4FCh]
  char v133; // [rsp+6Dh] [rbp-4FBh]
  int appended; // [rsp+70h] [rbp-4F8h]
  int v135; // [rsp+74h] [rbp-4F4h]
  int v136; // [rsp+78h] [rbp-4F0h]
  int v137; // [rsp+7Ch] [rbp-4ECh]
  unsigned __int16 v138; // [rsp+80h] [rbp-4E8h]
  int v139; // [rsp+84h] [rbp-4E4h]
  int v140; // [rsp+88h] [rbp-4E0h]
  int v141; // [rsp+8Ch] [rbp-4DCh]
  unsigned int v142; // [rsp+90h] [rbp-4D8h]
  struct _PEB *v143; // [rsp+98h] [rbp-4D0h]
  _QWORD *v144; // [rsp+A0h] [rbp-4C8h]
  int v145; // [rsp+A8h] [rbp-4C0h]
  PVOID *v146; // [rsp+B0h] [rbp-4B8h]
  __int64 v147; // [rsp+B8h] [rbp-4B0h]
  void *Src; // [rsp+C0h] [rbp-4A8h]
  __int64 v149; // [rsp+C8h] [rbp-4A0h]
  int v150; // [rsp+D0h] [rbp-498h]
  unsigned int v151; // [rsp+D4h] [rbp-494h]
  int v152; // [rsp+D8h] [rbp-490h]
  int v153; // [rsp+DCh] [rbp-48Ch]
  int v154; // [rsp+E0h] [rbp-488h]
  int v155; // [rsp+E4h] [rbp-484h]
  PUNICODE_STRING OriginalName; // [rsp+E8h] [rbp-480h]
  int v157; // [rsp+F0h] [rbp-478h]
  unsigned __int16 *v158; // [rsp+F8h] [rbp-470h]
  int v159; // [rsp+100h] [rbp-468h]
  _QWORD *v160; // [rsp+108h] [rbp-460h]
  unsigned int v161; // [rsp+110h] [rbp-458h]
  unsigned int v162; // [rsp+114h] [rbp-454h]
  int v163; // [rsp+118h] [rbp-450h]
  int v164; // [rsp+11Ch] [rbp-44Ch]
  unsigned int v165; // [rsp+120h] [rbp-448h]
  int v166; // [rsp+124h] [rbp-444h]
  _DWORD *v167; // [rsp+128h] [rbp-440h]
  _UNICODE_STRING v168; // [rsp+130h] [rbp-438h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+140h] [rbp-428h] BYREF
  int v170; // [rsp+150h] [rbp-418h]
  __int64 v171; // [rsp+158h] [rbp-410h]
  unsigned __int16 *v172; // [rsp+160h] [rbp-408h]
  _DWORD *v173; // [rsp+168h] [rbp-400h]
  PVOID v174; // [rsp+170h] [rbp-3F8h]
  __int64 v175; // [rsp+178h] [rbp-3F0h]
  ULONG v176; // [rsp+180h] [rbp-3E8h]
  __int64 v177; // [rsp+188h] [rbp-3E0h]
  void *v178; // [rsp+190h] [rbp-3D8h]
  _WORD *v179; // [rsp+198h] [rbp-3D0h]
  void *v180; // [rsp+1A0h] [rbp-3C8h]
  unsigned __int16 *v181; // [rsp+1A8h] [rbp-3C0h]
  void *v182; // [rsp+1B0h] [rbp-3B8h]
  unsigned __int16 *v183; // [rsp+1B8h] [rbp-3B0h]
  ULONG v184; // [rsp+1C0h] [rbp-3A8h]
  unsigned __int16 *v185; // [rsp+1C8h] [rbp-3A0h]
  _WORD *v186; // [rsp+1D0h] [rbp-398h]
  unsigned __int16 *v187; // [rsp+1D8h] [rbp-390h]
  void *i; // [rsp+1E0h] [rbp-388h]
  __int64 v189; // [rsp+1F0h] [rbp-378h] BYREF
  int v190; // [rsp+1F8h] [rbp-370h]
  _QWORD v191[7]; // [rsp+200h] [rbp-368h] BYREF
  _UNICODE_STRING v192; // [rsp+240h] [rbp-328h] BYREF
  struct _TEB *v193; // [rsp+250h] [rbp-318h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+260h] [rbp-308h] BYREF
  _UNICODE_STRING String1; // [rsp+300h] [rbp-268h] BYREF
  _WORD v196[128]; // [rsp+310h] [rbp-258h] BYREF
  int v197; // [rsp+410h] [rbp-158h] BYREF
  void *v198; // [rsp+418h] [rbp-150h]
  _WORD v199[128]; // [rsp+420h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+568h] [rbp+0h]

  v150 = a4;
  v6 = a3;
  v149 = a3;
  v7 = a2;
  v144 = a2;
  v9 = a5;
  v146 = a5;
  v160 = a6;
  String1.Buffer = v196;
  *(_DWORD *)&String1.Length = 0x1000000;
  v10 = 256LL;
  v196[0] = 0;
  v198 = v199;
  v11 = 0;
  v197 = 0x1000000;
  LOWORD(v12) = 256;
  v199[0] = 0;
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
        v121 = StringRoutine;
        v11 = v197;
        if ( StringRoutine && (_WORD)v197 )
        {
          memmove(StringRoutine, v198, (unsigned __int16)v197);
          v11 = v197;
        }
        if ( v121 )
        {
          v198 = v121;
          HIWORD(v197) = v12;
        }
        else
        {
          FullPath = -1073741801;
          LOWORD(v12) = HIWORD(v197);
        }
      }
      else
      {
        FullPath = -1073741562;
      }
    }
    if ( FullPath >= 0 )
    {
      DestinationString.Buffer = (unsigned __int16 *)((char *)v198 + v11);
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v12 - v11;
      RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
      LOWORD(v197) = DestinationString.Length + v197;
    }
    v6 = v149;
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
      v128 = 0;
      appended = 0;
      p_String1 = (_UNICODE_STRING *)&v197;
      OriginalName = (PUNICODE_STRING)&v197;
      v20 = NtCurrentPeb();
      v143 = v20;
      v126 = 0;
      LOBYTE(v6) = 1;
      v127 = v6;
      v132 = 1;
      ApiSetMap = v20->ApiSetMap;
      if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
        LdrpLogEtwEvent(5328, 0, 0, 0, (__int64)&v197);
      v39 = 0;
      v147 = 0LL;
      Src = 0LL;
      FullPath = 0;
      v125 = 0;
      if ( (unsigned __int16)v197 >= 8u )
      {
        v100 = *(_QWORD *)v198 & 0xFFFFFFDFFFDFFFDFuLL;
        if ( v100 == 0x2D004900500041LL || v100 == 0x2D005400580045LL )
        {
          v36 = (unsigned __int16 *)v198;
          v101 = (unsigned __int16)v197;
          v102 = (char *)v198 + (unsigned __int16)v197;
          v186 = v102;
          v161 = (unsigned __int16)v197;
          do
          {
            if ( v101 <= 1 )
              break;
            v101 -= 2;
            v161 = v101;
            v186 = --v102;
          }
          while ( *v102 != 45 );
          v22 = (unsigned __int16)v101 >> 1;
          if ( v22 )
          {
            v23 = 0;
            v24 = 0;
            v25 = (unsigned __int16 *)v198;
            for ( i = v198; ; i = v25 )
            {
              v151 = v24;
              if ( v24 >= v22 )
                break;
              v138 = *v25;
              v26 = v138;
              if ( (unsigned __int16)(v138 - 65) <= 0x19u )
              {
                v26 = v138 + 32;
                v138 += 32;
              }
              v23 = v23 * ApiSetMap[6] + v26;
              ++v24;
              ++v25;
            }
            v27 = 0LL;
            v154 = 0;
            v28 = ApiSetMap[3] - 1;
            v152 = v28;
            while ( v17 <= v28 )
            {
              v29 = (v28 + v17) >> 1;
              v30 = (_DWORD *)((char *)&ApiSetMap[2 * v29] + (unsigned int)ApiSetMap[5]);
              if ( v23 < *v30 )
              {
                v28 = v29 - 1;
                v152 = v29 - 1;
              }
              else
              {
                if ( v23 <= *v30 )
                {
                  v27 = (_DWORD *)((char *)&ApiSetMap[6 * v30[1]] + (unsigned int)ApiSetMap[4]);
                  break;
                }
                v17 = v29 + 1;
                v154 = v29 + 1;
              }
            }
            if ( v27 )
            {
              v31 = (unsigned __int16 *)((char *)ApiSetMap + v27[1]);
              v32 = v27[3] >> 1;
              v183 = (unsigned __int16 *)v198;
              v172 = v31;
              v33 = v22 > v32 ? v32 : v22;
              while ( 1 )
              {
                if ( v36 >= (unsigned __int16 *)((char *)v198 + 2 * v33) )
                {
                  v37 = v22 - (_DWORD)v32;
                  goto LABEL_37;
                }
                v34 = *v36;
                v162 = v34;
                v35 = *v31;
                v165 = v35;
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
                  v162 = v34;
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
                  v165 = v35;
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
                LOBYTE(v6) = v127;
                p_String1 = OriginalName;
                if ( v149 != -88 && v27[5] > 1 )
                {
                  v38 = ApiSetpSearchForApiSetHost(
                          (__int64)v27,
                          *(const WCHAR **)(v149 + 96),
                          *(_WORD *)(v149 + 88) >> 1,
                          (__int64)ApiSetMap);
                  goto LABEL_42;
                }
                if ( v27[5] )
                {
                  v38 = (__int64)ApiSetMap + v27[4];
LABEL_42:
                  Src = (char *)ApiSetMap + *(unsigned int *)(v38 + 12);
                  WORD1(v147) = *(_WORD *)(v38 + 16);
                  LOWORD(v147) = WORD1(v147);
                  v39 = 1;
                  v125 = 1;
                  v20 = v143;
                  goto LABEL_43;
                }
              }
            }
            LOBYTE(v6) = v127;
            p_String1 = OriginalName;
            v20 = v143;
          }
        }
        v39 = v125;
      }
LABEL_43:
      v130 = v39;
      if ( v39 )
      {
        if ( (_WORD)v147 )
        {
          if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
            LdrpLogEtwEvent(5329, 0, 0, 0, (__int64)p_String1);
LABEL_46:
          v135 = 0;
          if ( v130 )
          {
            if ( !(_WORD)v147 )
            {
              FullPath = -1073740671;
              v135 = -1073740671;
LABEL_70:
              appended = FullPath;
              if ( FullPath < 0 )
                goto LABEL_276;
              if ( !String1.Length )
              {
                v96 = (char *)v198 + (unsigned __int16)v197;
                v179 = v96;
                while ( 1 )
                {
                  v179 = --v96;
                  if ( v96 < v198 )
                    break;
                  if ( *v96 == 92 || *v96 == 47 )
                  {
                    if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(&v197) != 5 )
                    {
                      FullPath = LdrpGetFullPath(&v197, &String1);
                      appended = FullPath;
                      if ( FullPath >= 0 )
                        v128 |= 0x600u;
                      goto LABEL_75;
                    }
LABEL_179:
                    appended = LdrpAppendUnicodeStringToFilenameBuffer(&String1.Length, (unsigned __int16 *)&v197);
                    FullPath = appended;
                    goto LABEL_75;
                  }
                }
                v128 |= 0x20u;
                goto LABEL_179;
              }
              if ( (LdrpDebugFlags & 5) != 0 )
              {
                v109 = "SxS";
                if ( !v126 )
                  v109 = "API set";
                LdrpLogDbgPrint(
                  (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                  2595,
                  (unsigned int)"LdrpPreprocessDllName",
                  2,
                  (__int64)"DLL %wZ was redirected to %wZ by %s\n",
                  &v197,
                  &String1,
                  v109);
              }
              v128 |= 0x200u;
              if ( v126 )
                v128 |= 4u;
LABEL_75:
              if ( FullPath < 0 )
                goto LABEL_276;
              v47 = (unsigned __int16 *)((char *)String1.Buffer + String1.Length);
              v187 = v47;
              v133 = 0;
              while ( 1 )
              {
                v187 = --v47;
                if ( v47 < String1.Buffer )
                {
LABEL_201:
                  FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&String1.Length, &LdrpDefaultExtension.Length);
                  appended = FullPath;
                  goto LABEL_86;
                }
                v48 = *v47;
                if ( *v47 == 46 )
                  break;
                if ( v48 == 47 || v48 == 92 )
                  goto LABEL_201;
              }
              v133 = 1;
              v49 = (unsigned __int16 *)((char *)String1.Buffer + String1.Length);
              v181 = v49;
              while ( 1 )
              {
                v181 = --v49;
                if ( v49 < String1.Buffer || *v49 != 46 )
                  break;
                String1.Length -= 2;
              }
              v49[1] = 0;
LABEL_86:
              if ( FullPath < 0 )
              {
LABEL_276:
                if ( (LdrpDebugFlags & 3) != 0 )
                {
                  LODWORD(NewFlags) = FullPath;
                  LdrpLogDbgPrint(
                    (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                    2644,
                    (unsigned int)"LdrpPreprocessDllName",
                    0,
                    (__int64)"LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
                    &v197,
                    NewFlags);
                }
                if ( (LdrpDebugFlags & 0x10) != 0 )
                  __debugbreak();
              }
              v131 = FullPath;
              if ( FullPath < 0 )
                goto LABEL_322;
              v50 = v160;
              if ( !*v160 )
              {
                v184 = NtdllBaseTag + 2621440;
                Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2621440, 0x20uLL);
                *v160 = Heap;
                if ( !Heap )
                {
                  FullPath = -1073741801;
                  v131 = -1073741801;
                  goto LABEL_322;
                }
              }
              v51 = v144[4];
              v52 = v128;
              v53 = v144[2];
              v54 = (__int64)v146;
              *v146 = 0LL;
              if ( (v52 & 0x20) != 0 )
              {
                LoadedDllByName = LdrpFindLoadedDllByName(&String1, 0LL, 0LL);
                v127 = LoadedDllByName;
                v136 = LoadedDllByName;
LABEL_119:
                if ( LoadedDllByName != -1073741515 )
                {
                  v68 = *(_QWORD *)v54;
                  v159 = 0;
                  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                  v69 = *(_QWORD *)(v68 + 152);
                  v70 = *(_DWORD *)(v69 + 24);
                  if ( v70 != -1 )
                  {
                    if ( v70 )
                    {
                      *(_DWORD *)(v69 + 24) = v70 + 1;
                    }
                    else
                    {
                      v193 = NtCurrentTeb();
                      if ( (v193->SameTebFlags & 0x1000) != 0 )
                        ++*(_DWORD *)(v69 + 28);
                      else
                        v159 = -1073741515;
                    }
                  }
                  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
                  FullPath = v127;
                  goto LABEL_122;
                }
LABEL_189:
                FullPath = LdrpAllocatePlaceHolder((unsigned int)&String1, v53, v52, v150, v149, v54, v51);
                v136 = FullPath;
                if ( FullPath >= 0 )
                {
                  FullPath = LdrpLoadKnownDll(*(_QWORD *)(*(_QWORD *)v54 + 176LL));
                  v136 = FullPath;
                }
LABEL_122:
                v131 = FullPath;
                if ( !*(_QWORD *)v54 )
                {
LABEL_322:
                  v7 = v144;
LABEL_323:
                  RtlDeactivateActivationContextUnsafeFast(&v189);
                  v9 = v146;
                  goto LABEL_324;
                }
                v72 = v128 & 0x400;
                if ( (v128 & 0x400) != 0 && FullPath == -1073741515 )
                {
                  LOBYTE(v71) = 1;
                  LdrpProcessWork(*(_QWORD *)(*(_QWORD *)v54 + 176LL), v71);
                  FullPath = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)v54 + 176LL) + 32LL);
                  v131 = FullPath;
                }
                RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                v73 = *(_QWORD *)v54;
                v74 = v73;
                v177 = v73;
                if ( v73 )
                {
                  v75 = *(_QWORD *)(v73 + 176);
                  if ( v75 )
                  {
                    if ( (*(_DWORD *)(v75 + 24) & 0x80000) == 0 && *(_QWORD *)(v75 + 48) != v73 )
                    {
                      v74 = *(_QWORD *)(v75 + 48);
                      v177 = v74;
                      *(_QWORD *)(v75 + 48) = v73;
                    }
                  }
                }
                v174 = (PVOID)v74;
                *(_DWORD *)(*v50 + 24LL) &= ~1u;
                v76 = (_DWORD *)*v50;
                v167 = (_DWORD *)*v50;
                v7 = v144;
                v77 = *(_QWORD *)(v74 + 152);
                v78 = *(_QWORD *)(v144[6] + 152LL);
                if ( v78 != v77
                  && (*(_DWORD *)(v77 + 56) != 9
                   || *(_DWORD *)(v77 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v77 - 56LL) & 0x20) == 0) )
                {
                  v86 = *(_QWORD **)(v78 + 40);
                  if ( !v86 )
                  {
LABEL_153:
                    if ( !v76 )
                    {
                      v176 = NtdllBaseTag + 2359296;
                      v112 = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 0x20uLL);
                      v76 = v112;
                      v167 = v112;
                      if ( !v112 )
                      {
                        MEMORY[0] = -1073741801;
                        v76 = 0LL;
                        goto LABEL_131;
                      }
                      v112[6] |= 1u;
                    }
                    v88 = *(_QWORD **)(v78 + 40);
                    if ( v88 )
                    {
                      *(_QWORD *)v76 = *v88;
                      *v88 = v76;
                    }
                    else
                    {
                      *(_QWORD *)v76 = v76;
                    }
                    *(_QWORD *)(v78 + 40) = v76;
                    *((_QWORD *)v76 + 1) = v77;
                    v89 = v76 + 4;
                    v90 = *(_QWORD **)(v77 + 48);
                    if ( v90 )
                    {
                      *v89 = *v90;
                      *v90 = v89;
                    }
                    else
                    {
                      *v89 = v89;
                    }
                    *(_QWORD *)(v77 + 48) = v89;
                    v91 = (v76[6] & 1) == 0;
                    v92 = v76[6] & 1;
                    *((_QWORD *)v76 + 3) = v78;
                    if ( !v91 )
                    {
                      v76[6] &= ~1u;
                      v76[6] |= v92 & 1;
                    }
                    v76 = 0LL;
                    v167 = 0LL;
LABEL_131:
                    v173 = v76;
                    v80 = v160;
                    *v160 = v76;
                    if ( FullPath != -1073741515 || v72 )
                    {
                      if ( FullPath < 0 )
                      {
LABEL_136:
                        v82 = *(_QWORD *)(v74 + 152);
                        if ( *(_DWORD *)(v82 + 24) != -1
                          && (*(_BYTE *)(*(_QWORD *)v82 - 56LL) & 0x20) == 0
                          && _InterlockedExchangeAdd((volatile signed __int32 *)(v74 + 276), 0xFFFFFFFF) == 1 )
                        {
                          RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                          v113 = *(_QWORD *)(v74 + 160);
                          v114 = *(_QWORD **)(v74 + 168);
                          if ( *(_QWORD *)(v113 + 8) != v74 + 160 || *v114 != v74 + 160 )
                            __fastfail(3u);
                          *v114 = v113;
                          *(_QWORD *)(v113 + 8) = v114;
                          v115 = *(_QWORD **)(v74 + 152);
                          v116 = *v115 == (_QWORD)v115;
                          RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
                          if ( *(_WORD *)(v74 + 110) )
                            LdrpReleaseTlsEntry(v74, 0LL);
                          if ( (*(_DWORD *)(v74 + 104) & 0x200) != 0 )
                            RtlRemoveInvertedFunctionTable(*(_QWORD *)(v74 + 48));
                          v117 = *(void **)(v74 + 48);
                          if ( v117 )
                            NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v117);
                          v118 = *(_ACTIVATION_CONTEXT **)(v74 + 136);
                          if ( (unsigned __int64)&v118[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
                            RtlReleaseActivationContext(v118);
                          if ( *(_QWORD *)(v74 + 80) )
                            LdrpFreeUnicodeString(v74 + 72);
                          RtlFreeHeap(LdrpHeap, 0, (PVOID)v74);
                          if ( v116 )
                            LdrpDestroyNode(v115);
                        }
                        v83 = _InterlockedCompareExchange64(
                                (volatile signed __int64 *)&LdrpModuleDatatableLock,
                                0LL,
                                1LL);
                        if ( v83 != 1 )
                        {
                          do
                          {
                            if ( (v83 & 6) == 2 )
                              v97 = 3LL;
                            else
                              v97 = -1LL;
                            v98 = v97 + v83;
                            v99 = v83;
                            v83 = _InterlockedCompareExchange64(
                                    (volatile signed __int64 *)&LdrpModuleDatatableLock,
                                    v97 + v83,
                                    v83);
                          }
                          while ( v99 != v83 );
                          if ( v97 == 3 )
                            RtlpWakeSRWLock(&LdrpModuleDatatableLock, v98, 0LL);
                        }
                        v84 = v146;
                        v85 = v174;
                        if ( v174 != *v146 )
                        {
                          LdrpFreeReplacedModule(*v146);
                          *v84 = v85;
                        }
                        FullPath = v131;
                        goto LABEL_323;
                      }
                    }
                    else
                    {
                      LdrpQueueWork(*(_QWORD *)(v74 + 176));
                      v131 = 0;
                    }
                    v81 = *((_DWORD *)v7 + 23);
                    if ( v81 )
                    {
                      if ( *v80 || *(int *)(*(_QWORD *)(v74 + 152) + 56LL) >= 2 )
                        *((_DWORD *)v7 + 23) = v81 - 1;
                    }
                    else if ( *(int *)(*(_QWORD *)(v74 + 152) + 56LL) < 2 )
                    {
                      v7[9] = v74;
                      *((_DWORD *)v7 + 23) = 1;
                      *(_DWORD *)(*(_QWORD *)(v7[6] + 152LL) + 56LL) = 3;
                      v131 = 259;
                    }
                    goto LABEL_136;
                  }
                  v87 = *(_QWORD **)(v78 + 40);
                  while ( 1 )
                  {
                    v87 = (_QWORD *)*v87;
                    if ( v87[1] == v77 )
                      break;
                    if ( v87 == v86 )
                      goto LABEL_153;
                  }
                }
                v79 = *(_DWORD *)(v77 + 24);
                if ( (unsigned int)(v79 - 2) <= 0xFFFFFFFC )
                  *(_DWORD *)(v77 + 24) = v79 - 1;
                goto LABEL_131;
              }
              if ( (v52 & 0x200) == 0 )
              {
                v136 = -1073741515;
                goto LABEL_189;
              }
              v55 = (unsigned __int16 *)((char *)String1.Buffer + String1.Length);
              v158 = v55;
              while ( 1 )
              {
                v158 = --v55;
                if ( v55 <= String1.Buffer )
                  break;
                if ( *v55 == 92 || *v55 == 47 )
                {
                  v158 = ++v55;
                  break;
                }
              }
              v168.Buffer = v55;
              v168.Length = String1.Length - ((_WORD)v55 - LOWORD(String1.Buffer));
              v168.MaximumLength = String1.MaximumLength - ((_WORD)v55 - LOWORD(String1.Buffer));
              v56 = 0;
              v157 = 0;
              v185 = v55;
              v137 = 0;
              v57 = (unsigned __int64)v168.Length >> 1;
              v166 = v57;
              while ( 1 )
              {
                v58 = v57;
                LODWORD(v57) = v57 - 1;
                v166 = v57;
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
                v157 = v56;
              }
              v137 = v56;
              v61 = v56;
              RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
              v62 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v61 & 0x1F));
              v63 = 0;
              v129 = 0;
              for ( j = *v62; j != v62; j = (_QWORD *)*j )
              {
                v65 = j - 14;
                if ( v61 == *((_DWORD *)j + 38) && ((v52 & 8) == 0 || (v65[13] & 1) != 0) )
                {
                  if ( v122 == (_BYTE *)-768LL )
                  {
                    v63 = (v65[13] & 0x10000000) == 0 && RtlEqualUnicodeString(&v168, (PUNICODE_STRING)(v65 + 11), 1u);
                    v129 = v63;
                  }
                  else
                  {
                    v63 = RtlEqualUnicodeString(&String1, (PUNICODE_STRING)(v65 + 9), 1u);
                    v129 = v63;
                  }
                  if ( v63 )
                  {
                    v66 = v65[19];
                    if ( *(_DWORD *)(v66 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v66 - 56LL) & 0x20) == 0 )
                      _InterlockedIncrement((volatile signed __int32 *)v65 + 69);
                    *v146 = v65;
                    break;
                  }
                }
              }
              if ( v63 )
                LoadedDllByName = 0;
              else
                LoadedDllByName = -1073741515;
              v127 = LoadedDllByName;
              RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
              if ( v122 == (_BYTE *)-768LL )
              {
                v111 = 3;
                if ( LoadedDllByName >= 0 )
                  v111 = 0;
                v164 = v111;
                if ( !MEMORY[0x7FFE0384] || (NtCurrentPeb()->TracingFlags & 4) == 0 || (MEMORY[0x7FFE0385] & 0x20) == 0 )
                  goto LABEL_118;
                DynamicString = &v168;
                v110 = (unsigned __int8)v164;
              }
              else
              {
                if ( LoadedDllByName < 0 )
                  v140 = 3;
                else
                  v140 = 0;
                if ( !MEMORY[0x7FFE0384] || (NtCurrentPeb()->TracingFlags & 4) == 0 || (MEMORY[0x7FFE0385] & 0x20) == 0 )
                  goto LABEL_118;
                DynamicString = &String1;
                v110 = (unsigned __int8)v140;
              }
              LdrpLogEtwEvent(5280, 0, 0, v110, (__int64)DynamicString);
LABEL_118:
              v136 = LoadedDllByName;
              v50 = v160;
              v54 = (__int64)v146;
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
            v153 = 0;
            if ( (_WORD)v41 )
            {
              v42 = (unsigned __int16)v41 + String1.Length + 2;
              v142 = v42;
              v141 = 0;
              if ( v42 > String1.MaximumLength )
              {
                if ( v42 <= 0xFFFE )
                {
                  v103 = (v42 + 63) & 0xFFFFFFC0;
                  v142 = v103;
                  if ( v103 > 0xFFFE )
                    v103 = 65534;
                  v142 = v103;
                  if ( String1.Buffer == v196 )
                  {
                    v104 = (void *)NtdllpAllocateStringRoutine(v103, String1.Buffer);
                    v180 = v104;
                    if ( v104 && String1.Length )
                      memmove(v104, String1.Buffer, String1.Length);
                  }
                  else
                  {
                    v104 = (void *)NtdllpReallocateStringRoutine(v103, String1.Buffer);
                    v180 = v104;
                  }
                  if ( v104 )
                  {
                    String1.Buffer = (unsigned __int16 *)v104;
                    String1.MaximumLength = v103;
                  }
                  else
                  {
                    FullPath = -1073741801;
                    v141 = -1073741801;
                  }
                }
                else
                {
                  FullPath = -1073741562;
                  v141 = -1073741562;
                }
              }
              v153 = FullPath;
              if ( FullPath >= 0 )
              {
                memmove((char *)String1.Buffer + String1.Length, (const void *)0x7FFE0030, (unsigned __int16)v41);
                String1.Length += v41;
                String1.Buffer[(unsigned __int64)String1.Length >> 1] = 0;
              }
            }
            v135 = FullPath;
            if ( FullPath < 0 )
              goto LABEL_70;
            v163 = 0;
            v43 = String1.Length + 22;
            v127 = v43;
            FullPath = 0;
            v145 = 0;
            if ( v43 > String1.MaximumLength )
            {
              if ( v43 <= 0xFFFE )
              {
                v105 = (String1.Length + 85) & 0xFFFFFFC0;
                v127 = v105;
                if ( v105 > 0xFFFE )
                  v105 = 65534;
                v127 = v105;
                if ( String1.Buffer == v196 )
                {
                  v106 = (void *)NtdllpAllocateStringRoutine(v105, String1.Buffer);
                  v182 = v106;
                  if ( v106 && String1.Length )
                    memmove(v106, String1.Buffer, String1.Length);
                }
                else
                {
                  v106 = (void *)NtdllpReallocateStringRoutine(v105, String1.Buffer);
                  v182 = v106;
                }
                if ( v106 )
                {
                  String1.Buffer = (unsigned __int16 *)v106;
                  String1.MaximumLength = v105;
                }
                else
                {
                  FullPath = -1073741801;
                  v145 = -1073741801;
                }
              }
              else
              {
                FullPath = -1073741562;
                v145 = -1073741562;
              }
            }
            v163 = FullPath;
            if ( FullPath >= 0 )
            {
              v44 = (char *)String1.Buffer + String1.Length;
              *(_OWORD *)v44 = *(_OWORD *)SlashSystem32SlashString.Buffer;
              *((_DWORD *)v44 + 4) = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
              String1.Length += 20;
              String1.Buffer[(unsigned __int64)String1.Length >> 1] = 0;
            }
            v135 = FullPath;
            if ( FullPath < 0 )
              goto LABEL_70;
            v155 = 0;
            v45 = (unsigned __int16)v147 + String1.Length + 2;
            LODWORD(v143) = v45;
            FullPath = 0;
            v139 = 0;
            if ( v45 > String1.MaximumLength )
            {
              if ( v45 <= 0xFFFE )
              {
                v107 = (v45 + 63) & 0xFFFFFFC0;
                LODWORD(v143) = v107;
                if ( v107 > 0xFFFE )
                  v107 = 65534;
                LODWORD(v143) = v107;
                if ( String1.Buffer == v196 )
                {
                  v108 = (void *)NtdllpAllocateStringRoutine(v107, String1.Buffer);
                  v178 = v108;
                  if ( v108 && String1.Length )
                    memmove(v108, String1.Buffer, String1.Length);
                }
                else
                {
                  v108 = (void *)NtdllpReallocateStringRoutine(v107, String1.Buffer);
                  v178 = v108;
                }
                if ( v108 )
                {
                  String1.Buffer = (unsigned __int16 *)v108;
                  String1.MaximumLength = v107;
                }
                else
                {
                  FullPath = -1073741801;
                  v139 = -1073741801;
                }
              }
              else
              {
                FullPath = -1073741562;
                v139 = -1073741562;
              }
            }
            v155 = FullPath;
            if ( FullPath >= 0 )
            {
              memmove((char *)String1.Buffer + String1.Length, Src, (unsigned __int16)v147);
              String1.Length += v147;
              String1.Buffer[(unsigned __int64)String1.Length >> 1] = 0;
            }
            v135 = FullPath;
            ProcessParameters = v20->ProcessParameters;
            LOBYTE(v6) = ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0;
            v132 = v6;
            p_String1 = &String1;
            OriginalName = &String1;
          }
          if ( FullPath >= 0 && (_BYTE)v6 && !LdrpIsSecureProcess )
          {
            v95 = RtlDosApplyFileIsolationRedirection_Ustr(
                    1u,
                    p_String1,
                    (PUNICODE_STRING)&LdrpDefaultExtension,
                    0LL,
                    &v192,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
            if ( v95 >= 0 )
            {
              v126 = 1;
              LdrpGetFullPath(&v192, &String1);
              LdrpFreeUnicodeString(&v192);
            }
            if ( v95 != -1072365560 )
            {
              FullPath = v95;
              v135 = v95;
            }
          }
          goto LABEL_70;
        }
        v94 = 5330;
      }
      else
      {
        v94 = 5331;
      }
      LdrpLogDllState(0, (__int64)p_String1, v94);
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
  if ( v199 != v198 )
    NtdllpFreeStringRoutine(v198, v10, a3);
  v198 = v199;
  v197 = 0x1000000;
  v199[0] = 0;
  if ( v196 != String1.Buffer )
    NtdllpFreeStringRoutine(String1.Buffer, v10, a3);
  return (unsigned int)FullPath;
}

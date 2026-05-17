/*
 * XREFs of LdrpLoadDependentModule @ 0x180016680
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180016434 (LdrpMapAndSnapDependency.c)
 *     LdrpSnapModule @ 0x180033FA0 (LdrpSnapModule.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094E0 (NtdllpFreeStringRoutine.c)
 *     LdrpProcessWork @ 0x18000E19C (LdrpProcessWork.c)
 *     LdrpFreeUnicodeString @ 0x18000E8FC (LdrpFreeUnicodeString.c)
 *     LdrpGetFullPath @ 0x18000EF04 (LdrpGetFullPath.c)
 *     LdrpAllocatePlaceHolder @ 0x18000F5F4 (LdrpAllocatePlaceHolder.c)
 *     LdrpLoadKnownDll @ 0x180012040 (LdrpLoadKnownDll.c)
 *     ApiSetpSearchForApiSetHost @ 0x1800154F8 (ApiSetpSearchForApiSetHost.c)
 *     LdrpLogDllState @ 0x180015E20 (LdrpLogDllState.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800182E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018750 (RtlDeactivateActivationContextUnsafeFast.c)
 *     NtdllpAllocateStringRoutine @ 0x180018BE8 (NtdllpAllocateStringRoutine.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180018C78 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlEqualUnicodeString @ 0x18001A1D0 (RtlEqualUnicodeString.c)
 *     LdrpFindLoadedDllByName @ 0x18001A3DC (LdrpFindLoadedDllByName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5F0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001E5F8 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlRaiseException @ 0x180036770 (RtlRaiseException.c)
 *     RtlReleaseActivationContext @ 0x18003B790 (RtlReleaseActivationContext.c)
 *     LdrpQueueWork @ 0x18003C7F0 (LdrpQueueWork.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     LdrpFreeReplacedModule @ 0x18006B66C (LdrpFreeReplacedModule.c)
 *     LdrpDestroyNode @ 0x1800747A0 (LdrpDestroyNode.c)
 *     RtlpWakeSRWLock @ 0x1800761DC (RtlpWakeSRWLock.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007AA84 (RtlRemoveInvertedFunctionTable.c)
 *     LdrpReleaseTlsEntry @ 0x18008410C (LdrpReleaseTlsEntry.c)
 *     RtlxOemStringToUnicodeSize @ 0x180088370 (RtlxOemStringToUnicodeSize.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800D1538 (LdrpLogEtwEvent.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D2B04 (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpLoadDependentModule(
        PCANSI_STRING SourceString,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v9; // r13
  unsigned __int16 v10; // di
  unsigned int v11; // ebx
  int FullPath; // r12d
  unsigned int v13; // eax
  __int64 v14; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  int v16; // edi
  unsigned __int64 ActiveFrame; // rcx
  int *v18; // r15
  struct _PEB *v19; // r13
  _DWORD *ApiSetMap; // rsi
  int v21; // r14d
  _QWORD **v22; // rdi
  bool v23; // cl
  _QWORD *v24; // rsi
  unsigned __int16 *v25; // r15
  __int64 v26; // r12
  volatile signed __int32 *v27; // rbx
  const void **v28; // r8
  unsigned __int16 *v29; // rdx
  unsigned __int16 *v30; // r9
  unsigned int v31; // r8d
  unsigned int v32; // r10d
  __int64 v33; // rax
  signed __int64 v34; // rax
  int v35; // ebx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 *v38; // r14
  __int64 v39; // rbx
  __int64 v40; // rdx
  int v41; // eax
  signed __int64 v42; // rax
  int v43; // ebx
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // r14
  int v50; // edx
  __int64 *v51; // rdi
  __int64 v52; // rdx
  int v53; // ecx
  __int64 v54; // rax
  signed __int64 v55; // rax
  __int64 v56; // rbx
  _QWORD *v57; // rdx
  _QWORD *v58; // rax
  __int64 *v59; // rdx
  _QWORD *v60; // rdx
  _QWORD *v61; // r8
  bool v62; // zf
  int v63; // eax
  __int64 *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  signed __int64 v67; // rtt
  __int64 v68; // rcx
  __int64 v69; // rdx
  signed __int64 v70; // rtt
  __int64 v71; // r8
  __int64 v72; // rdx
  signed __int64 v73; // rtt
  unsigned __int16 v74; // bx
  unsigned int v75; // r11d
  unsigned int v76; // r8d
  unsigned __int16 *v77; // r9
  unsigned __int16 v78; // r10
  unsigned int *v79; // r13
  int v80; // r10d
  int v81; // r9d
  unsigned int *v82; // rdx
  unsigned __int16 *v83; // r9
  unsigned __int64 v84; // r15
  unsigned __int64 v85; // rcx
  unsigned int v86; // r10d
  unsigned int v87; // r11d
  unsigned __int16 *v88; // rax
  int v89; // r10d
  __int64 v90; // rcx
  char v91; // al
  __int64 v92; // rbx
  unsigned __int64 v93; // rbx
  unsigned int v94; // ecx
  unsigned int v95; // ecx
  int v96; // ebx
  char *v97; // rcx
  unsigned int v98; // ecx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  int *v100; // rdi
  unsigned __int64 v101; // rdx
  _WORD *v102; // rax
  __int16 v103; // cx
  _WORD *v104; // rcx
  int v105; // r13d
  unsigned __int16 *v106; // r8
  int v107; // r9d
  unsigned __int64 v108; // r11
  int v109; // eax
  unsigned __int16 v110; // r10
  int v111; // eax
  __int64 Heap; // rax
  int v113; // ebx
  unsigned __int16 v114; // r8
  _WORD *v115; // rax
  int appended; // eax
  unsigned __int64 v117; // rcx
  unsigned int v118; // ebx
  _WORD *v119; // rcx
  unsigned int v120; // r14d
  void *v121; // r15
  unsigned int v122; // edi
  void *v123; // rsi
  unsigned int v124; // edi
  void *v125; // rsi
  const char *v126; // rax
  int v127; // r9d
  int v128; // eax
  __int64 v129; // rax
  __int64 v130; // rdx
  _QWORD *v131; // rcx
  _QWORD *v132; // rbx
  bool v133; // di
  __int64 v134; // rdx
  void *StringRoutine; // rax
  void *v137; // r14
  __int64 v138; // [rsp+0h] [rbp-588h] BYREF
  const void **v139; // [rsp+20h] [rbp-568h]
  __int64 v140; // [rsp+28h] [rbp-560h]
  __int64 v141; // [rsp+30h] [rbp-558h]
  char v142; // [rsp+50h] [rbp-538h]
  char v143; // [rsp+51h] [rbp-537h]
  char v144; // [rsp+52h] [rbp-536h]
  int v145; // [rsp+54h] [rbp-534h]
  char v146; // [rsp+58h] [rbp-530h]
  char v147; // [rsp+59h] [rbp-52Fh]
  char v148; // [rsp+5Ah] [rbp-52Eh]
  char v149; // [rsp+5Bh] [rbp-52Dh]
  char v150; // [rsp+5Ch] [rbp-52Ch]
  char v151; // [rsp+5Dh] [rbp-52Bh]
  char v152; // [rsp+5Eh] [rbp-52Ah]
  char v153; // [rsp+5Fh] [rbp-529h]
  int v154; // [rsp+60h] [rbp-528h]
  int v155; // [rsp+68h] [rbp-520h]
  int v156; // [rsp+70h] [rbp-518h]
  int v157; // [rsp+74h] [rbp-514h]
  __int64 v158; // [rsp+78h] [rbp-510h]
  unsigned __int16 v159; // [rsp+80h] [rbp-508h]
  int v160; // [rsp+84h] [rbp-504h]
  int v161; // [rsp+88h] [rbp-500h]
  unsigned int v162; // [rsp+90h] [rbp-4F8h]
  int v163; // [rsp+98h] [rbp-4F0h]
  int v164; // [rsp+9Ch] [rbp-4ECh]
  unsigned int v165; // [rsp+A0h] [rbp-4E8h]
  int v166; // [rsp+A8h] [rbp-4E0h]
  int v167; // [rsp+ACh] [rbp-4DCh]
  int *v168; // [rsp+B0h] [rbp-4D8h]
  __int64 v169; // [rsp+B8h] [rbp-4D0h]
  __int64 v170; // [rsp+C0h] [rbp-4C8h]
  __int64 v171; // [rsp+C8h] [rbp-4C0h]
  void *Src; // [rsp+D0h] [rbp-4B8h]
  __int64 v173; // [rsp+D8h] [rbp-4B0h]
  int v174; // [rsp+E0h] [rbp-4A8h]
  int v175; // [rsp+E4h] [rbp-4A4h]
  int v176; // [rsp+E8h] [rbp-4A0h]
  int v177; // [rsp+ECh] [rbp-49Ch]
  int v178; // [rsp+F0h] [rbp-498h]
  int v179; // [rsp+F4h] [rbp-494h]
  int v180; // [rsp+F8h] [rbp-490h]
  int v181; // [rsp+FCh] [rbp-48Ch]
  __int64 *v182; // [rsp+100h] [rbp-488h]
  struct _PEB *v183; // [rsp+108h] [rbp-480h]
  unsigned int v184; // [rsp+110h] [rbp-478h]
  unsigned int v185; // [rsp+114h] [rbp-474h]
  int v186; // [rsp+118h] [rbp-470h]
  int v187; // [rsp+11Ch] [rbp-46Ch]
  unsigned __int16 *v188; // [rsp+120h] [rbp-468h]
  __int64 v189; // [rsp+128h] [rbp-460h]
  unsigned int v190; // [rsp+130h] [rbp-458h]
  __int64 v191; // [rsp+138h] [rbp-450h]
  UNICODE_STRING DestinationString; // [rsp+140h] [rbp-448h] BYREF
  int v193; // [rsp+150h] [rbp-438h]
  __int64 v194; // [rsp+158h] [rbp-430h]
  _WORD v195[4]; // [rsp+160h] [rbp-428h] BYREF
  unsigned __int16 *v196; // [rsp+168h] [rbp-420h]
  int v197; // [rsp+170h] [rbp-418h]
  _WORD *v198; // [rsp+178h] [rbp-410h]
  unsigned __int16 *v199; // [rsp+180h] [rbp-408h]
  unsigned __int16 *v200; // [rsp+188h] [rbp-400h]
  unsigned __int16 *v201; // [rsp+190h] [rbp-3F8h]
  int v202; // [rsp+198h] [rbp-3F0h]
  void *v203; // [rsp+1A0h] [rbp-3E8h]
  void *v204; // [rsp+1A8h] [rbp-3E0h]
  void *v205; // [rsp+1B0h] [rbp-3D8h]
  int *v206; // [rsp+1B8h] [rbp-3D0h]
  _WORD *v207; // [rsp+1C0h] [rbp-3C8h]
  _WORD *v208; // [rsp+1C8h] [rbp-3C0h]
  _WORD *v209; // [rsp+1D0h] [rbp-3B8h]
  unsigned __int16 *v210; // [rsp+1D8h] [rbp-3B0h]
  unsigned __int16 *v211; // [rsp+1E0h] [rbp-3A8h]
  unsigned __int16 *v212; // [rsp+1E8h] [rbp-3A0h]
  __int64 v213; // [rsp+1F0h] [rbp-398h]
  __int64 v214; // [rsp+1F8h] [rbp-390h]
  __int64 v215; // [rsp+200h] [rbp-388h]
  unsigned int v216; // [rsp+208h] [rbp-380h]
  __int64 v217; // [rsp+210h] [rbp-378h] BYREF
  int v218; // [rsp+218h] [rbp-370h]
  _QWORD v219[7]; // [rsp+220h] [rbp-368h] BYREF
  _BYTE v220[16]; // [rsp+260h] [rbp-328h] BYREF
  struct _TEB *v221; // [rsp+270h] [rbp-318h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+280h] [rbp-308h] BYREF
  const void *v223; // [rsp+320h] [rbp-268h] BYREF
  void *v224; // [rsp+328h] [rbp-260h]
  _WORD v225[128]; // [rsp+330h] [rbp-258h] BYREF
  int v226; // [rsp+430h] [rbp-158h] BYREF
  void *v227; // [rsp+438h] [rbp-150h]
  _WORD v228[128]; // [rsp+440h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+588h] [rbp+0h]

  v181 = a4;
  v6 = a3;
  v169 = a3;
  v7 = a2;
  v170 = a2;
  v9 = a5;
  v158 = a5;
  v182 = a6;
  v224 = v225;
  LODWORD(v223) = 0x1000000;
  v225[0] = 0;
  v227 = v228;
  v10 = 0;
  v226 = 0x1000000;
  LOWORD(v11) = 256;
  v228[0] = 0;
  FullPath = 0;
  if ( SourceString->Length )
  {
    if ( NlsMbCodePageTag )
      v13 = RtlxOemStringToUnicodeSize(SourceString);
    else
      v13 = 2 * SourceString->Length + 2;
    FullPath = 0;
    if ( v13 > 0x100 )
    {
      if ( v13 <= 0xFFFE )
      {
        v11 = (v13 + 63) & 0xFFFFFFC0;
        if ( v11 > 0xFFFE )
          v11 = 65534;
        StringRoutine = (void *)NtdllpAllocateStringRoutine(v11);
        v137 = StringRoutine;
        v10 = v226;
        if ( StringRoutine && (_WORD)v226 )
        {
          memmove(StringRoutine, v227, (unsigned __int16)v226);
          v10 = v226;
        }
        if ( v137 )
        {
          v227 = v137;
          HIWORD(v226) = v11;
        }
        else
        {
          FullPath = -1073741801;
          LOWORD(v11) = HIWORD(v226);
        }
      }
      else
      {
        FullPath = -1073741562;
      }
    }
    if ( FullPath >= 0 )
    {
      DestinationString.Buffer = (wchar_t *)((char *)v227 + v10);
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v11 - v10;
      RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
      LOWORD(v226) = DestinationString.Length + v226;
    }
    v6 = v169;
  }
  if ( FullPath >= 0 )
  {
    v217 = 72LL;
    v218 = 1;
    memset(v219, 0, sizeof(v219));
    v14 = *(_QWORD *)(v6 + 136);
    ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
    v16 = 0;
    if ( ActivationContextStackPointer )
      ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
    else
      ActiveFrame = 0LL;
    v219[3] = ~ActiveFrame;
    v219[4] = ~v14;
    v219[5] = retaddr;
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
    v219[0] = ActiveFrame;
    v219[1] = v14;
    LODWORD(v219[2]) = 32;
    if ( ActiveFrame )
    {
      if ( *(_QWORD *)(ActiveFrame + 8) == v14 )
        goto LABEL_14;
    }
    else if ( !v14 )
    {
LABEL_14:
      LODWORD(v219[2]) = 48;
LABEL_15:
      v145 = 0;
      v156 = 0;
      v18 = &v226;
      v168 = &v226;
      v19 = NtCurrentPeb();
      v183 = v19;
      v143 = 0;
      LOBYTE(v6) = 1;
      v155 = v6;
      v148 = 1;
      ApiSetMap = v19->ApiSetMap;
      if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
        LdrpLogEtwEvent(5328, 0, 0, 0, (__int64)&v226, 0LL);
      v91 = 0;
      v171 = 0LL;
      Src = 0LL;
      FullPath = 0;
      v142 = 0;
      if ( (unsigned __int16)v226 >= 8u )
      {
        v117 = *(_QWORD *)v227 & 0xFFFFFFDFFFDFFFDFuLL;
        if ( v117 == 0x2D004900500041LL || v117 == 0x2D005400580045LL )
        {
          v88 = (unsigned __int16 *)v227;
          v118 = (unsigned __int16)v226;
          v119 = (char *)v227 + (unsigned __int16)v226;
          v198 = v119;
          v184 = (unsigned __int16)v226;
          do
          {
            if ( v118 <= 1 )
              break;
            v118 -= 2;
            v184 = v118;
            v198 = --v119;
          }
          while ( *v119 != 45 );
          v74 = (unsigned __int16)v118 >> 1;
          if ( v74 )
          {
            v75 = 0;
            v76 = 0;
            v185 = 0;
            v77 = (unsigned __int16 *)v227;
            v199 = (unsigned __int16 *)v227;
            while ( v76 < v74 )
            {
              v159 = *v77;
              v78 = v159;
              if ( (unsigned __int16)(v159 - 65) <= 0x19u )
              {
                v78 = v159 + 32;
                v159 += 32;
              }
              v75 = v75 * ApiSetMap[6] + v78;
              v185 = ++v76;
              v199 = ++v77;
            }
            v79 = 0LL;
            v187 = 0;
            v80 = ApiSetMap[3] - 1;
            v186 = v80;
            while ( v16 <= v80 )
            {
              v81 = (v80 + v16) >> 1;
              v82 = (_DWORD *)((char *)&ApiSetMap[2 * v81] + (unsigned int)ApiSetMap[5]);
              if ( v75 < *v82 )
              {
                v80 = v81 - 1;
                v186 = v81 - 1;
              }
              else
              {
                if ( v75 <= *v82 )
                {
                  v79 = (_DWORD *)((char *)&ApiSetMap[6 * v82[1]] + (unsigned int)ApiSetMap[4]);
                  break;
                }
                v16 = v81 + 1;
                v187 = v81 + 1;
              }
            }
            if ( v79 )
            {
              v83 = (unsigned __int16 *)((char *)ApiSetMap + v79[1]);
              v84 = v79[3] >> 1;
              v200 = (unsigned __int16 *)v227;
              v201 = v83;
              v85 = v74 > v84 ? v84 : v74;
              while ( 1 )
              {
                if ( v88 >= (unsigned __int16 *)((char *)v227 + 2 * v85) )
                {
                  v89 = v74 - (_DWORD)v84;
                  goto LABEL_153;
                }
                v86 = *v88;
                v190 = v86;
                v87 = *v83;
                LODWORD(v173) = v87;
                if ( v86 != v87 )
                {
                  if ( v86 >= 0x61 )
                  {
                    if ( v86 > 0x7A )
                      v86 = (unsigned __int16)(v86
                                             + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                        + 2LL
                                                        * ((v86 & 0xF)
                                                         + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                               + 2LL
                                                                               * (((unsigned __int8)v86 >> 4)
                                                                                + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v86)))))));
                    else
                      v86 -= 32;
                  }
                  v190 = v86;
                  if ( v87 >= 0x61 )
                  {
                    if ( v87 > 0x7A )
                      v87 = (unsigned __int16)(v87
                                             + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                        + 2LL
                                                        * ((v87 & 0xF)
                                                         + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                               + 2LL
                                                                               * (((unsigned __int8)v87 >> 4)
                                                                                + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v87)))))));
                    else
                      v87 -= 32;
                  }
                  LODWORD(v173) = v87;
                  if ( v86 != v87 )
                    break;
                }
                v200 = ++v88;
                v201 = ++v83;
              }
              v89 = v86 - v87;
LABEL_153:
              if ( !v89 )
              {
                LOBYTE(v6) = v155;
                v18 = v168;
                if ( v169 != -88 && v79[5] > 1 )
                {
                  v90 = ApiSetpSearchForApiSetHost(
                          (__int64)v79,
                          *(_QWORD *)(v169 + 96),
                          *(_WORD *)(v169 + 88) >> 1,
                          (__int64)ApiSetMap);
                  goto LABEL_158;
                }
                if ( v79[5] )
                {
                  v90 = (__int64)ApiSetMap + v79[4];
LABEL_158:
                  Src = (char *)ApiSetMap + *(unsigned int *)(v90 + 12);
                  WORD1(v171) = *(_WORD *)(v90 + 16);
                  LOWORD(v171) = WORD1(v171);
                  v91 = 1;
                  v142 = 1;
                  v19 = v183;
                  v16 = 0;
                  goto LABEL_159;
                }
              }
            }
            LOBYTE(v6) = v155;
            v18 = v168;
            v19 = v183;
            v16 = 0;
          }
        }
        v91 = v142;
      }
LABEL_159:
      v146 = v91;
      if ( v91 )
      {
        if ( (_WORD)v171 )
        {
          if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
            LdrpLogEtwEvent(5329, 0, 0, 0, (__int64)v18, 0LL);
LABEL_162:
          v160 = 0;
          if ( v146 )
          {
            if ( !(_WORD)v171 )
            {
              FullPath = -1073740671;
              v160 = -1073740671;
              goto LABEL_184;
            }
            LOWORD(v223) = 0;
            v193 = 0;
            v194 = 2147352624LL;
            v92 = -1LL;
            do
              ++v92;
            while ( *(_WORD *)(2 * v92 + 0x7FFE0030) );
            v93 = 2 * v92;
            v189 = v93;
            if ( v93 >= 0xFFFE )
            {
              LOWORD(v93) = -4;
              v189 = 65532LL;
            }
            LOWORD(v193) = v93;
            HIWORD(v193) = v93 + 2;
            v174 = 0;
            if ( (_WORD)v93 )
            {
              v94 = (unsigned __int16)v93 + 2;
              v162 = v94;
              v163 = 0;
              if ( v94 > WORD1(v223) )
              {
                if ( v94 <= 0xFFFE )
                {
                  v120 = ((unsigned __int16)v93 + 65) & 0xFFFFFFC0;
                  v162 = v120;
                  if ( v120 > 0xFFFE )
                    v120 = 65534;
                  v162 = v120;
                  if ( v224 == v225 )
                  {
                    v121 = (void *)NtdllpAllocateStringRoutine(v120);
                    v203 = v121;
                    if ( v121 && (_WORD)v223 )
                      memmove(v121, v224, (unsigned __int16)v223);
                  }
                  else
                  {
                    v121 = (void *)NtdllpReallocateStringRoutine(v120);
                    v203 = v121;
                  }
                  if ( v121 )
                  {
                    v224 = v121;
                    WORD1(v223) = v120;
                  }
                  else
                  {
                    v16 = -1073741801;
                    v163 = -1073741801;
                  }
                }
                else
                {
                  v16 = -1073741562;
                  v163 = -1073741562;
                }
              }
              v174 = v16;
              if ( v16 >= 0 )
              {
                memmove((char *)v224 + (unsigned __int16)v223, (const void *)0x7FFE0030, (unsigned __int16)v93);
                LOWORD(v223) = v93 + (_WORD)v223;
                *((_WORD *)v224 + ((unsigned __int64)(unsigned __int16)v223 >> 1)) = 0;
              }
            }
            v175 = 0;
            v95 = (unsigned __int16)v223 + 22;
            v155 = v95;
            v96 = 0;
            v164 = 0;
            if ( v95 > WORD1(v223) )
            {
              if ( v95 <= 0xFFFE )
              {
                v122 = ((unsigned __int16)v223 + 85) & 0xFFFFFFC0;
                v155 = v122;
                if ( v122 > 0xFFFE )
                  v122 = 65534;
                v155 = v122;
                if ( v224 == v225 )
                {
                  v123 = (void *)NtdllpAllocateStringRoutine(v122);
                  v204 = v123;
                  if ( v123 && (_WORD)v223 )
                    memmove(v123, v224, (unsigned __int16)v223);
                }
                else
                {
                  v123 = (void *)NtdllpReallocateStringRoutine(v122);
                  v204 = v123;
                }
                if ( v123 )
                {
                  v224 = v123;
                  WORD1(v223) = v122;
                }
                else
                {
                  v96 = -1073741801;
                  v164 = -1073741801;
                }
              }
              else
              {
                v96 = -1073741562;
                v164 = -1073741562;
              }
            }
            v175 = v96;
            if ( v96 >= 0 )
            {
              v97 = (char *)v224 + (unsigned __int16)v223;
              *(_OWORD *)v97 = *(_OWORD *)L"\\SYSTEM32\\";
              *((_DWORD *)v97 + 4) = *(_DWORD *)L"2\\";
              LOWORD(v223) = (_WORD)v223 + 20;
              *((_WORD *)v224 + ((unsigned __int64)(unsigned __int16)v223 >> 1)) = 0;
            }
            v176 = 0;
            v98 = (unsigned __int16)v171 + (unsigned __int16)v223 + 2;
            v165 = v98;
            FullPath = 0;
            v166 = 0;
            if ( v98 > WORD1(v223) )
            {
              if ( v98 <= 0xFFFE )
              {
                v124 = (v98 + 63) & 0xFFFFFFC0;
                v165 = v124;
                if ( v124 > 0xFFFE )
                  v124 = 65534;
                v165 = v124;
                if ( v224 == v225 )
                {
                  v125 = (void *)NtdllpAllocateStringRoutine(v124);
                  v205 = v125;
                  if ( v125 && (_WORD)v223 )
                    memmove(v125, v224, (unsigned __int16)v223);
                }
                else
                {
                  v125 = (void *)NtdllpReallocateStringRoutine(v124);
                  v205 = v125;
                }
                if ( v125 )
                {
                  v224 = v125;
                  WORD1(v223) = v124;
                }
                else
                {
                  FullPath = -1073741801;
                  v166 = -1073741801;
                }
              }
              else
              {
                FullPath = -1073741562;
                v166 = -1073741562;
              }
            }
            v176 = FullPath;
            if ( FullPath >= 0 )
            {
              memmove((char *)v224 + (unsigned __int16)v223, Src, (unsigned __int16)v171);
              LOWORD(v223) = v171 + (_WORD)v223;
              *((_WORD *)v224 + ((unsigned __int64)(unsigned __int16)v223 >> 1)) = 0;
            }
            v160 = FullPath;
            if ( FullPath < 0 )
            {
LABEL_184:
              v156 = FullPath;
              if ( FullPath < 0 )
              {
                v35 = v145;
              }
              else
              {
                v100 = &v226;
                v206 = &v226;
                if ( (_WORD)v223 )
                {
                  if ( (LdrpDebugFlags & 5) != 0 )
                  {
                    v126 = "SxS";
                    if ( !v143 )
                      v126 = "API set";
                    LdrpLogDbgPrint(
                      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                      2567,
                      (unsigned int)"LdrpPreprocessDllName",
                      2,
                      (__int64)"DLL %wZ was redirected to %wZ by %s\n",
                      &v226,
                      &v223,
                      v126);
                  }
                  v35 = v145 | 0x200;
                  v145 |= 0x200u;
                  if ( v143 )
                  {
                    v35 |= 4u;
                    v145 = v35;
                  }
                  v100 = (int *)&v223;
                  v206 = (int *)&v223;
                }
                else
                {
                  v115 = (char *)v227 + (unsigned __int16)v226;
                  v207 = v115;
                  do
                  {
                    v207 = --v115;
                    if ( v115 < v227 )
                    {
                      v149 = 1;
                      v35 = v145 | 0x20;
                      v145 |= 0x20u;
                      appended = LdrpAppendUnicodeStringToFilenameBuffer(&v223, &v226);
LABEL_234:
                      v156 = appended;
                      FullPath = appended;
                      goto LABEL_190;
                    }
                  }
                  while ( *v115 != 92 && *v115 != 47 );
                  v149 = 0;
                  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(&v226) == 5 )
                  {
                    appended = LdrpAppendUnicodeStringToFilenameBuffer(&v223, &v226);
                    v35 = v145;
                    goto LABEL_234;
                  }
                  FullPath = LdrpGetFullPath((__int64)&v226, (__int64)&v223);
                  v156 = FullPath;
                  v35 = v145;
                  if ( FullPath >= 0 )
                  {
                    v35 = v145 | 0x600;
                    v145 |= 0x600u;
                  }
                }
LABEL_190:
                if ( FullPath < 0 )
                {
LABEL_313:
                  if ( (LdrpDebugFlags & 3) != 0 )
                  {
                    LODWORD(v141) = FullPath;
                    LdrpLogDbgPrint(
                      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                      2623,
                      (unsigned int)"LdrpPreprocessDllName",
                      0,
                      (__int64)"LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
                      &v226,
                      v141);
                  }
                  if ( (LdrpDebugFlags & 0x10) != 0 )
                    __debugbreak();
LABEL_202:
                  v154 = FullPath;
                  if ( FullPath < 0 )
                  {
LABEL_362:
                    v9 = v158;
                    goto LABEL_363;
                  }
                  v38 = v182;
                  if ( !*v182 )
                  {
                    v197 = NtdllBaseTag + 2621440;
                    Heap = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 2621440), 32LL);
                    *v182 = Heap;
                    if ( !Heap )
                    {
                      FullPath = -1073741801;
                      v154 = -1073741801;
                      goto LABEL_362;
                    }
                  }
                  v36 = *(_QWORD *)(v170 + 32);
                  v189 = v36;
                  v105 = v35;
                  v37 = *(_QWORD *)(v170 + 16);
                  v173 = v37;
                  v64 = (__int64 *)v158;
                  *(_QWORD *)v158 = 0LL;
                  if ( (v35 & 0x20) != 0 )
                  {
                    FullPath = LdrpFindLoadedDllByName((unsigned int)&v223, 0, v35, (_DWORD)v64, 0LL);
                    v157 = FullPath;
                    goto LABEL_47;
                  }
                  if ( (v35 & 0x200) == 0 )
                  {
                    v157 = -1073741515;
                    goto LABEL_102;
                  }
                  v106 = (unsigned __int16 *)((char *)v224 + (unsigned __int16)v223);
                  v188 = v106;
                  while ( 1 )
                  {
                    v188 = --v106;
                    if ( v106 <= v224 )
                      break;
                    if ( *v106 == 92 || *v106 == 47 )
                    {
                      v188 = ++v106;
                      break;
                    }
                  }
                  v196 = v106;
                  v195[0] = (_WORD)v223 - ((_WORD)v106 - (_WORD)v224);
                  v195[1] = WORD1(v223) - ((_WORD)v106 - (_WORD)v224);
                  v107 = 0;
                  v178 = 0;
                  v210 = v106;
                  v161 = 0;
                  v108 = (unsigned __int64)v195[0] >> 1;
                  v177 = v108;
                  while ( 1 )
                  {
                    v109 = v108;
                    LODWORD(v108) = v108 - 1;
                    v177 = v108;
                    if ( !v109 )
                      break;
                    v110 = *v106++;
                    v210 = v106;
                    if ( v110 < 0x61u )
                    {
                      v111 = v110;
                    }
                    else if ( v110 > 0x7Au )
                    {
                      v111 = (unsigned __int16)(v110
                                              + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                         + 2LL
                                                         * ((v110 & 0xF)
                                                          + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                              + 2LL
                                                                                              * (((v110 >> 4) & 0xF)
                                                                                               + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v110 >> 8)))))));
                    }
                    else
                    {
                      v111 = v110 - 32;
                    }
                    v107 = v111 + 65599 * v107;
                    v178 = v107;
                  }
                  v161 = v107;
                  v21 = v107;
                  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                  v22 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v21 & 0x1F));
                  v23 = 0;
                  v144 = 0;
                  v24 = *v22;
                  v25 = (unsigned __int16 *)v224;
                  v26 = Nls844UnicodeUpcaseTable;
                  while ( v24 != v22 )
                  {
                    v27 = (volatile signed __int32 *)(v24 - 14);
                    if ( v21 == *((_DWORD *)v24 + 38) && ((v105 & 8) == 0 || (v27[26] & 1) != 0) )
                    {
                      v28 = &v223;
                      if ( &v138 == (__int64 *)-800LL )
                      {
                        v23 = 0;
                        if ( (v27[26] & 0x10000000) == 0 )
                        {
                          LOBYTE(v28) = 1;
                          if ( (unsigned __int8)RtlEqualUnicodeString(v195, v27 + 22, v28) )
                            v23 = 1;
                        }
                        v144 = v23;
                        if ( v23 )
                          goto LABEL_36;
                      }
                      else
                      {
                        if ( (unsigned __int16)v223 == *((unsigned __int16 *)v27 + 36) )
                        {
                          v29 = v25;
                          v211 = v25;
                          v30 = (unsigned __int16 *)*((_QWORD *)v27 + 10);
                          v212 = v30;
                          while ( v29 < (unsigned __int16 *)((char *)v25 + (unsigned __int16)v223) )
                          {
                            v31 = *v29;
                            v216 = v31;
                            v32 = *v30;
                            LODWORD(v183) = v32;
                            if ( v31 != v32 )
                            {
                              if ( v31 >= 0x61 )
                              {
                                if ( v31 > 0x7A )
                                  v31 = (unsigned __int16)(v31
                                                         + *(_WORD *)(v26
                                                                    + 2LL
                                                                    * ((v31 & 0xF)
                                                                     + *(unsigned __int16 *)(v26
                                                                                           + 2LL
                                                                                           * (((unsigned __int8)v31 >> 4)
                                                                                            + (unsigned int)*(unsigned __int16 *)(v26 + 2LL * BYTE1(v31)))))));
                                else
                                  v31 -= 32;
                              }
                              if ( v32 >= 0x61 )
                              {
                                if ( v32 > 0x7A )
                                  v32 = (unsigned __int16)(v32
                                                         + *(_WORD *)(v26
                                                                    + 2LL
                                                                    * ((v32 & 0xF)
                                                                     + *(unsigned __int16 *)(v26
                                                                                           + 2LL
                                                                                           * (((unsigned __int8)v32 >> 4)
                                                                                            + (unsigned int)*(unsigned __int16 *)(v26 + 2LL * BYTE1(v32)))))));
                                else
                                  v32 -= 32;
                              }
                              if ( v31 != v32 )
                                goto LABEL_110;
                            }
                            v211 = ++v29;
                            v212 = ++v30;
                          }
                          v23 = 1;
                          v144 = 1;
LABEL_36:
                          v33 = *((_QWORD *)v27 + 19);
                          if ( *(_DWORD *)(v33 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v33 - 56LL) & 0x20) != 0 )
                          {
                            v151 = 1;
                          }
                          else
                          {
                            v151 = 0;
                            _InterlockedIncrement(v27 + 69);
                          }
                          *(_QWORD *)v158 = v27;
                          break;
                        }
LABEL_110:
                        v23 = 0;
                        v144 = 0;
                      }
                    }
                    v24 = (_QWORD *)*v24;
                  }
                  if ( v23 )
                    FullPath = 0;
                  else
                    FullPath = -1073741515;
                  v34 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
                  if ( v34 != 1 )
                  {
                    do
                    {
                      if ( (v34 & 6) == 2 )
                        v68 = 3LL;
                      else
                        v68 = -1LL;
                      v69 = v68 + v34;
                      v70 = v34;
                      v34 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v68 + v34, v34);
                    }
                    while ( v70 != v34 );
                    if ( v68 == 3 )
                      RtlpWakeSRWLock(&LdrpModuleDatatableLock, v69, 0LL);
                  }
                  if ( &v223 )
                  {
                    if ( FullPath < 0 )
                      v167 = 3;
                    else
                      v167 = 0;
                    if ( !MEMORY[0x7FFE0384]
                      || (NtCurrentPeb()->TracingFlags & 4) == 0
                      || (MEMORY[0x7FFE0385] & 0x20) == 0 )
                    {
                      goto LABEL_46;
                    }
                    v140 = 0LL;
                    v139 = &v223;
                    v127 = (unsigned __int8)v167;
                  }
                  else
                  {
                    v128 = 3;
                    if ( FullPath >= 0 )
                      v128 = 0;
                    v179 = v128;
                    if ( !MEMORY[0x7FFE0384]
                      || (NtCurrentPeb()->TracingFlags & 4) == 0
                      || (MEMORY[0x7FFE0385] & 0x20) == 0 )
                    {
                      goto LABEL_46;
                    }
                    v140 = 0LL;
                    v139 = (const void **)v195;
                    v127 = (unsigned __int8)v179;
                  }
                  LdrpLogEtwEvent(5280, 0, 0, v127, (__int64)v139, v140);
LABEL_46:
                  v157 = FullPath;
                  LOWORD(v35) = v145;
                  v36 = v189;
                  v37 = v173;
                  v38 = v182;
LABEL_47:
                  if ( FullPath != -1073741515 )
                  {
                    v9 = v158;
                    v39 = *(_QWORD *)v158;
                    v180 = 0;
                    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                    v40 = *(_QWORD *)(v39 + 152);
                    v41 = *(_DWORD *)(v40 + 24);
                    if ( v41 != -1 )
                    {
                      if ( v41 )
                      {
                        *(_DWORD *)(v40 + 24) = v41 + 1;
                      }
                      else
                      {
                        v221 = NtCurrentTeb();
                        if ( (v221->SameTebFlags & 0x1000) != 0 )
                          ++*(_DWORD *)(v40 + 28);
                        else
                          v180 = -1073741515;
                      }
                    }
                    v42 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
                    if ( v42 != 1 )
                    {
                      do
                      {
                        v71 = -1LL;
                        if ( (v42 & 6) == 2 )
                          v71 = 3LL;
                        v72 = v71 + v42;
                        v73 = v42;
                        v42 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v71 + v42, v42);
                      }
                      while ( v73 != v42 );
                      if ( v71 == 3 )
                        RtlpWakeSRWLock(&LdrpModuleDatatableLock, v72, 0LL);
                    }
                    LOWORD(v35) = v145;
                    goto LABEL_51;
                  }
                  v64 = (__int64 *)v158;
LABEL_102:
                  FullPath = LdrpAllocatePlaceHolder(&v223, v37, v105, v181, v169, v64, v36);
                  v157 = FullPath;
                  v9 = v158;
                  if ( FullPath >= 0 )
                  {
                    FullPath = LdrpLoadKnownDll(*(_BYTE **)(*(_QWORD *)v158 + 176LL));
                    v157 = FullPath;
                  }
LABEL_51:
                  v154 = FullPath;
                  if ( !*(_QWORD *)v9 )
                    goto LABEL_363;
                  v43 = v35 & 0x400;
                  if ( v43 && FullPath == -1073741515 )
                  {
                    LdrpProcessWork(*(_QWORD *)(*(_QWORD *)v9 + 176LL), 1);
                    FullPath = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)v9 + 176LL) + 32LL);
                    v154 = FullPath;
                  }
                  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                  v44 = *(_QWORD *)v9;
                  v45 = v44;
                  v213 = *(_QWORD *)v9;
                  if ( v44 )
                  {
                    v46 = *(_QWORD *)(v44 + 176);
                    if ( v46 )
                    {
                      if ( (*(_DWORD *)(v46 + 24) & 0x80000) == 0 && *(_QWORD *)(v46 + 48) != v44 )
                      {
                        v45 = *(_QWORD *)(v46 + 48);
                        v213 = v45;
                        *(_QWORD *)(v46 + 48) = v44;
                      }
                    }
                  }
                  v215 = v45;
                  *(_DWORD *)(*v38 + 24) &= ~1u;
                  v47 = *v38;
                  v191 = *v38;
                  v48 = *(_QWORD *)(v45 + 152);
                  v49 = *(_QWORD *)(*(_QWORD *)(v170 + 48) + 152LL);
                  if ( v49 == v48 )
                    goto LABEL_59;
                  if ( *(_DWORD *)(v48 + 56) == 9 )
                  {
                    if ( *(_DWORD *)(v48 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v48 - 56LL) & 0x20) != 0 )
                    {
                      v152 = 1;
                      goto LABEL_59;
                    }
                    v152 = 0;
                  }
                  v57 = *(_QWORD **)(v49 + 40);
                  if ( !v57 )
                  {
LABEL_84:
                    v147 = 0;
                    if ( !v47 )
                    {
                      v202 = NtdllBaseTag + 2359296;
                      v129 = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 2359296), 32LL);
                      v47 = v129;
                      v191 = v129;
                      if ( !v129 )
                      {
                        MEMORY[0] = -1073741801;
                        v47 = 0LL;
                        goto LABEL_61;
                      }
                      *(_DWORD *)(v129 + 24) |= 1u;
                    }
                    v59 = *(__int64 **)(v49 + 40);
                    if ( v59 )
                    {
                      *(_QWORD *)v47 = *v59;
                      *v59 = v47;
                    }
                    else
                    {
                      *(_QWORD *)v47 = v47;
                    }
                    *(_QWORD *)(v49 + 40) = v47;
                    *(_QWORD *)(v47 + 8) = v48;
                    v60 = (_QWORD *)(v47 + 16);
                    v61 = *(_QWORD **)(v48 + 48);
                    if ( v61 )
                    {
                      *v60 = *v61;
                      *v61 = v60;
                    }
                    else
                    {
                      *v60 = v60;
                    }
                    *(_QWORD *)(v48 + 48) = v60;
                    v62 = (*(_DWORD *)(v47 + 24) & 1) == 0;
                    v63 = *(_DWORD *)(v47 + 24) & 1;
                    *(_QWORD *)(v47 + 24) = v49;
                    if ( !v62 )
                    {
                      *(_DWORD *)(v47 + 24) &= ~1u;
                      *(_DWORD *)(v47 + 24) |= v63 & 1;
                    }
                    v47 = 0LL;
                    v191 = 0LL;
LABEL_61:
                    v214 = v47;
                    v51 = v182;
                    *v182 = v47;
                    if ( FullPath != -1073741515 || v43 )
                    {
                      if ( FullPath < 0 )
                      {
LABEL_66:
                        v54 = *(_QWORD *)(v45 + 152);
                        if ( *(_DWORD *)(v54 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v54 - 56LL) & 0x20) != 0 )
                        {
                          v153 = 1;
                        }
                        else
                        {
                          v153 = 0;
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 276), 0xFFFFFFFF) == 1 )
                          {
                            RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                            v130 = *(_QWORD *)(v45 + 160);
                            v131 = *(_QWORD **)(v45 + 168);
                            if ( *(_QWORD *)(v130 + 8) != v45 + 160 || *v131 != v45 + 160 )
                              __fastfail(3u);
                            *v131 = v130;
                            *(_QWORD *)(v130 + 8) = v131;
                            v132 = *(_QWORD **)(v45 + 152);
                            v133 = *v132 == (_QWORD)v132;
                            RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
                            if ( *(_WORD *)(v45 + 110) )
                              LdrpReleaseTlsEntry(v45, 0LL);
                            if ( (*(_DWORD *)(v45 + 104) & 0x200) != 0 )
                              RtlRemoveInvertedFunctionTable(*(_QWORD *)(v45 + 48));
                            v134 = *(_QWORD *)(v45 + 48);
                            if ( v134 )
                              NtUnmapViewOfSection(-1LL, v134);
                            if ( (unsigned __int64)(*(_QWORD *)(v45 + 136) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
                              RtlReleaseActivationContext();
                            if ( *(_QWORD *)(v45 + 80) )
                              LdrpFreeUnicodeString(v45 + 72);
                            RtlFreeHeap(LdrpHeap, 0LL, v45);
                            if ( v133 )
                              LdrpDestroyNode(v132);
                          }
                        }
                        v55 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
                        if ( v55 != 1 )
                        {
                          do
                          {
                            if ( (v55 & 6) == 2 )
                              v65 = 3LL;
                            else
                              v65 = -1LL;
                            v66 = v65 + v55;
                            v67 = v55;
                            v55 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v65 + v55, v55);
                          }
                          while ( v67 != v55 );
                          if ( v65 == 3 )
                            RtlpWakeSRWLock(&LdrpModuleDatatableLock, v66, 0LL);
                        }
                        v56 = v215;
                        if ( v215 != *(_QWORD *)v9 )
                        {
                          LdrpFreeReplacedModule();
                          *(_QWORD *)v9 = v56;
                        }
                        FullPath = v154;
LABEL_363:
                        RtlDeactivateActivationContextUnsafeFast(&v217);
                        v7 = v170;
                        if ( FullPath >= 0 )
                          goto LABEL_364;
                        goto LABEL_385;
                      }
                    }
                    else
                    {
                      LdrpQueueWork(*(_QWORD *)(v45 + 176));
                      v154 = 0;
                    }
                    v52 = v170;
                    v53 = *(_DWORD *)(v170 + 92);
                    if ( v53 )
                    {
                      if ( *v51 || *(int *)(*(_QWORD *)(v45 + 152) + 56LL) >= 2 )
                        *(_DWORD *)(v170 + 92) = v53 - 1;
                    }
                    else if ( *(int *)(*(_QWORD *)(v45 + 152) + 56LL) < 2 )
                    {
                      *(_QWORD *)(v170 + 72) = v45;
                      *(_DWORD *)(v52 + 92) = 1;
                      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 48) + 152LL) + 56LL) = 3;
                      v154 = 259;
                    }
                    goto LABEL_66;
                  }
                  v58 = *(_QWORD **)(v49 + 40);
                  while ( 1 )
                  {
                    v58 = (_QWORD *)*v58;
                    if ( v58[1] == v48 )
                      break;
                    if ( v58 == v57 )
                      goto LABEL_84;
                  }
LABEL_59:
                  v147 = 1;
                  v50 = *(_DWORD *)(v48 + 24);
                  if ( (unsigned int)(v50 - 2) <= 0xFFFFFFFC )
                    *(_DWORD *)(v48 + 24) = v50 - 1;
                  goto LABEL_61;
                }
                v101 = *((_QWORD *)v100 + 1);
                v102 = (_WORD *)(v101 + *(unsigned __int16 *)v100);
                v208 = v102;
                v150 = 0;
                while ( 1 )
                {
                  v208 = --v102;
                  if ( (unsigned __int64)v102 < v101 )
                  {
LABEL_238:
                    FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&v223, L"\b\n");
                    v156 = FullPath;
                    goto LABEL_201;
                  }
                  v103 = *v102;
                  if ( *v102 == 46 )
                    break;
                  if ( v103 == 47 || v103 == 92 )
                    goto LABEL_238;
                }
                v150 = 1;
                v104 = (char *)v224 + (unsigned __int16)v223;
                v209 = v104;
                while ( 1 )
                {
                  v209 = --v104;
                  if ( v104 < v224 || *v104 != 46 )
                    break;
                  LOWORD(v223) = (_WORD)v223 - 2;
                }
                v104[1] = 0;
              }
LABEL_201:
              if ( FullPath >= 0 )
                goto LABEL_202;
              goto LABEL_313;
            }
            ProcessParameters = v19->ProcessParameters;
            LOBYTE(v6) = ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0;
            v148 = v6;
            v18 = (int *)&v223;
            v168 = (int *)&v223;
          }
          if ( (_BYTE)v6 && !LdrpIsSecureProcess )
          {
            v113 = RtlDosApplyFileIsolationRedirection_Ustr(
                     1,
                     (_DWORD)v18,
                     (unsigned int)L"\b\n",
                     0,
                     (__int64)v220,
                     0LL,
                     0LL,
                     0LL,
                     0LL);
            if ( v113 >= 0 )
            {
              v143 = 1;
              LdrpGetFullPath((__int64)v220, (__int64)&v223);
              LdrpFreeUnicodeString((__int64)v220);
            }
            if ( v113 != -1072365560 )
            {
              FullPath = v113;
              v160 = v113;
            }
          }
          goto LABEL_184;
        }
        v114 = 5330;
      }
      else
      {
        v114 = 5331;
      }
      LdrpLogDllState(0, (__int64)v18, v114);
      goto LABEL_162;
    }
    ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)v219;
    goto LABEL_15;
  }
LABEL_385:
  *(_QWORD *)v9 = 0LL;
  **(_DWORD **)(v7 + 32) = FullPath;
LABEL_364:
  if ( v228 != v227 )
    NtdllpFreeStringRoutine((__int64)v227);
  v227 = v228;
  v226 = 0x1000000;
  v228[0] = 0;
  if ( v225 != v224 )
    NtdllpFreeStringRoutine((__int64)v224);
  return (unsigned int)FullPath;
}

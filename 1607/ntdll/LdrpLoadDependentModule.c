/*
 * XREFs of LdrpLoadDependentModule @ 0x180016670
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180016424 (LdrpMapAndSnapDependency.c)
 *     LdrpSnapModule @ 0x180033F90 (LdrpSnapModule.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094D0 (NtdllpFreeStringRoutine.c)
 *     LdrpProcessWork @ 0x18000E18C (LdrpProcessWork.c)
 *     LdrpFreeUnicodeString @ 0x18000E8EC (LdrpFreeUnicodeString.c)
 *     LdrpGetFullPath @ 0x18000EEF4 (LdrpGetFullPath.c)
 *     LdrpAllocatePlaceHolder @ 0x18000F5E4 (LdrpAllocatePlaceHolder.c)
 *     LdrpLoadKnownDll @ 0x180012030 (LdrpLoadKnownDll.c)
 *     ApiSetpSearchForApiSetHost @ 0x1800154E8 (ApiSetpSearchForApiSetHost.c)
 *     LdrpLogDllState @ 0x180015E10 (LdrpLogDllState.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800182D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018740 (RtlDeactivateActivationContextUnsafeFast.c)
 *     NtdllpAllocateStringRoutine @ 0x180018BD8 (NtdllpAllocateStringRoutine.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180018C68 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlEqualUnicodeString @ 0x18001A1C0 (RtlEqualUnicodeString.c)
 *     LdrpFindLoadedDllByName @ 0x18001A3CC (LdrpFindLoadedDllByName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001E5E8 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlRaiseException @ 0x180036760 (RtlRaiseException.c)
 *     RtlReleaseActivationContext @ 0x18003B780 (RtlReleaseActivationContext.c)
 *     LdrpQueueWork @ 0x18003C7E0 (LdrpQueueWork.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     LdrpFreeReplacedModule @ 0x18006B65C (LdrpFreeReplacedModule.c)
 *     LdrpDestroyNode @ 0x180074790 (LdrpDestroyNode.c)
 *     RtlpWakeSRWLock @ 0x1800761CC (RtlpWakeSRWLock.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007AA74 (RtlRemoveInvertedFunctionTable.c)
 *     LdrpReleaseTlsEntry @ 0x1800840FC (LdrpReleaseTlsEntry.c)
 *     RtlxOemStringToUnicodeSize @ 0x180088360 (RtlxOemStringToUnicodeSize.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800D15F8 (LdrpLogEtwEvent.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D2BC4 (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpLoadDependentModule(
        PCANSI_STRING SourceString,
        __int64 a2,
        __int64 a3,
        int a4,
        PVOID *a5,
        _QWORD *a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  PVOID *v9; // r13
  unsigned __int16 v10; // di
  unsigned int v11; // ebx
  int FullPath; // r12d
  unsigned int v13; // eax
  __int64 v14; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  int v16; // edi
  unsigned __int64 ActiveFrame; // rcx
  _UNICODE_STRING *v18; // r15
  struct _PEB *v19; // r13
  _DWORD *ApiSetMap; // rsi
  int v21; // r14d
  _QWORD **v22; // rdi
  bool v23; // cl
  _QWORD *v24; // rsi
  wchar_t *Buffer; // r15
  __int64 v26; // r12
  _QWORD *v27; // rbx
  wchar_t *v28; // rdx
  unsigned __int16 *v29; // r9
  unsigned int v30; // r8d
  unsigned int v31; // r10d
  __int64 v32; // rax
  signed __int64 v33; // rax
  int v34; // ebx
  __int64 v35; // rdi
  __int64 v36; // rsi
  _QWORD *v37; // r14
  __int64 v38; // rbx
  __int64 v39; // rdx
  int v40; // eax
  signed __int64 v41; // rax
  int v42; // ebx
  char *v43; // rax
  char *v44; // rsi
  __int64 v45; // rcx
  _DWORD *v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // r14
  int v49; // edx
  _QWORD *v50; // rdi
  __int64 v51; // rdx
  int v52; // ecx
  __int64 v53; // rax
  signed __int64 v54; // rax
  void *v55; // rbx
  _QWORD *v56; // rdx
  _QWORD *v57; // rax
  _QWORD *v58; // rdx
  _QWORD *v59; // rdx
  _QWORD *v60; // r8
  bool v61; // zf
  int v62; // eax
  __int64 *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  signed __int64 v66; // rtt
  __int64 v67; // rcx
  __int64 v68; // rdx
  signed __int64 v69; // rtt
  __int64 v70; // r8
  __int64 v71; // rdx
  signed __int64 v72; // rtt
  unsigned __int16 v73; // bx
  unsigned int v74; // r11d
  unsigned int v75; // r8d
  unsigned __int16 *v76; // r9
  unsigned __int16 v77; // r10
  unsigned int *v78; // r13
  int v79; // r10d
  int v80; // r9d
  unsigned int *v81; // rdx
  unsigned __int16 *v82; // r9
  unsigned __int64 v83; // r15
  unsigned __int64 v84; // rcx
  unsigned int v85; // r10d
  unsigned int v86; // r11d
  unsigned __int16 *v87; // rax
  int v88; // r10d
  __int64 v89; // rcx
  char v90; // al
  __int64 v91; // rbx
  unsigned __int64 v92; // rbx
  unsigned int v93; // ecx
  unsigned int v94; // ecx
  int v95; // ebx
  char *v96; // rcx
  unsigned int v97; // ecx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  _UNICODE_STRING *v99; // rdi
  wchar_t *v100; // rdx
  wchar_t *v101; // rax
  wchar_t v102; // cx
  wchar_t *v103; // rcx
  int v104; // r13d
  wchar_t *v105; // r8
  int v106; // r9d
  unsigned __int64 v107; // r11
  int v108; // eax
  wchar_t v109; // r10
  int v110; // eax
  PVOID Heap; // rax
  NTSTATUS v112; // ebx
  unsigned __int16 v113; // r8
  _WORD *v114; // rax
  int appended; // eax
  unsigned __int64 v116; // rcx
  unsigned int v117; // ebx
  _WORD *v118; // rcx
  unsigned int v119; // r14d
  void *v120; // r15
  unsigned int v121; // edi
  void *v122; // rsi
  unsigned int v123; // edi
  void *v124; // rsi
  const char *v125; // rax
  int v126; // r9d
  int v127; // eax
  _DWORD *v128; // rax
  char **v129; // rdx
  PVOID *v130; // rcx
  _QWORD *v131; // rbx
  bool v132; // di
  void *v133; // rdx
  _ACTIVATION_CONTEXT *v134; // rcx
  void *StringRoutine; // rax
  void *v137; // r14
  __int64 v138; // [rsp+0h] [rbp-588h] BYREF
  PUNICODE_STRING DynamicString; // [rsp+20h] [rbp-568h]
  PUNICODE_STRING *NewName; // [rsp+28h] [rbp-560h]
  PULONG NewFlags; // [rsp+30h] [rbp-558h]
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
  PUNICODE_STRING OriginalName; // [rsp+B0h] [rbp-4D8h]
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
  _QWORD *v182; // [rsp+100h] [rbp-488h]
  struct _PEB *v183; // [rsp+108h] [rbp-480h]
  unsigned int v184; // [rsp+110h] [rbp-478h]
  unsigned int v185; // [rsp+114h] [rbp-474h]
  int v186; // [rsp+118h] [rbp-470h]
  int v187; // [rsp+11Ch] [rbp-46Ch]
  wchar_t *v188; // [rsp+120h] [rbp-468h]
  __int64 v189; // [rsp+128h] [rbp-460h]
  unsigned int v190; // [rsp+130h] [rbp-458h]
  _DWORD *v191; // [rsp+138h] [rbp-450h]
  _UNICODE_STRING DestinationString; // [rsp+140h] [rbp-448h] BYREF
  int v193; // [rsp+150h] [rbp-438h]
  __int64 v194; // [rsp+158h] [rbp-430h]
  _UNICODE_STRING String1; // [rsp+160h] [rbp-428h] BYREF
  ULONG v196; // [rsp+170h] [rbp-418h]
  _WORD *v197; // [rsp+178h] [rbp-410h]
  unsigned __int16 *v198; // [rsp+180h] [rbp-408h]
  unsigned __int16 *v199; // [rsp+188h] [rbp-400h]
  unsigned __int16 *v200; // [rsp+190h] [rbp-3F8h]
  ULONG v201; // [rsp+198h] [rbp-3F0h]
  void *v202; // [rsp+1A0h] [rbp-3E8h]
  void *v203; // [rsp+1A8h] [rbp-3E0h]
  void *v204; // [rsp+1B0h] [rbp-3D8h]
  _UNICODE_STRING *v205; // [rsp+1B8h] [rbp-3D0h]
  _WORD *v206; // [rsp+1C0h] [rbp-3C8h]
  wchar_t *v207; // [rsp+1C8h] [rbp-3C0h]
  wchar_t *v208; // [rsp+1D0h] [rbp-3B8h]
  wchar_t *v209; // [rsp+1D8h] [rbp-3B0h]
  wchar_t *v210; // [rsp+1E0h] [rbp-3A8h]
  unsigned __int16 *v211; // [rsp+1E8h] [rbp-3A0h]
  PVOID v212; // [rsp+1F0h] [rbp-398h]
  _DWORD *v213; // [rsp+1F8h] [rbp-390h]
  PVOID v214; // [rsp+200h] [rbp-388h]
  unsigned int v215; // [rsp+208h] [rbp-380h]
  __int64 v216; // [rsp+210h] [rbp-378h] BYREF
  int v217; // [rsp+218h] [rbp-370h]
  _QWORD v218[7]; // [rsp+220h] [rbp-368h] BYREF
  _UNICODE_STRING v219; // [rsp+260h] [rbp-328h] BYREF
  struct _TEB *v220; // [rsp+270h] [rbp-318h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+280h] [rbp-308h] BYREF
  _UNICODE_STRING v222; // [rsp+320h] [rbp-268h] BYREF
  _WORD v223[128]; // [rsp+330h] [rbp-258h] BYREF
  int v224; // [rsp+430h] [rbp-158h] BYREF
  void *v225; // [rsp+438h] [rbp-150h]
  _WORD v226[128]; // [rsp+440h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+588h] [rbp+0h]

  v181 = a4;
  v6 = a3;
  v169 = a3;
  v7 = a2;
  v170 = a2;
  v9 = a5;
  v158 = (__int64)a5;
  v182 = a6;
  v222.Buffer = v223;
  *(_DWORD *)&v222.Length = 0x1000000;
  v223[0] = 0;
  v225 = v226;
  v10 = 0;
  v224 = 0x1000000;
  LOWORD(v11) = 256;
  v226[0] = 0;
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
        v10 = v224;
        if ( StringRoutine && (_WORD)v224 )
        {
          memmove(StringRoutine, v225, (unsigned __int16)v224);
          v10 = v224;
        }
        if ( v137 )
        {
          v225 = v137;
          HIWORD(v224) = v11;
        }
        else
        {
          FullPath = -1073741801;
          LOWORD(v11) = HIWORD(v224);
        }
      }
      else
      {
        FullPath = -1073741562;
      }
    }
    if ( FullPath >= 0 )
    {
      DestinationString.Buffer = (wchar_t *)((char *)v225 + v10);
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v11 - v10;
      RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
      LOWORD(v224) = DestinationString.Length + v224;
    }
    v6 = v169;
  }
  if ( FullPath >= 0 )
  {
    v216 = 72LL;
    v217 = 1;
    memset(v218, 0, sizeof(v218));
    v14 = *(_QWORD *)(v6 + 136);
    ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
    v16 = 0;
    if ( ActivationContextStackPointer )
      ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
    else
      ActiveFrame = 0LL;
    v218[3] = ~ActiveFrame;
    v218[4] = ~v14;
    v218[5] = retaddr;
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
    v218[0] = ActiveFrame;
    v218[1] = v14;
    LODWORD(v218[2]) = 32;
    if ( ActiveFrame )
    {
      if ( *(_QWORD *)(ActiveFrame + 8) == v14 )
        goto LABEL_14;
    }
    else if ( !v14 )
    {
LABEL_14:
      LODWORD(v218[2]) = 48;
LABEL_15:
      v145 = 0;
      v156 = 0;
      v18 = (_UNICODE_STRING *)&v224;
      OriginalName = (PUNICODE_STRING)&v224;
      v19 = NtCurrentPeb();
      v183 = v19;
      v143 = 0;
      LOBYTE(v6) = 1;
      v155 = v6;
      v148 = 1;
      ApiSetMap = v19->ApiSetMap;
      if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
        LdrpLogEtwEvent(5328, 0, 0, 0, (__int64)&v224, 0LL);
      v90 = 0;
      v171 = 0LL;
      Src = 0LL;
      FullPath = 0;
      v142 = 0;
      if ( (unsigned __int16)v224 >= 8u )
      {
        v116 = *(_QWORD *)v225 & 0xFFFFFFDFFFDFFFDFuLL;
        if ( v116 == 0x2D004900500041LL || v116 == 0x2D005400580045LL )
        {
          v87 = (unsigned __int16 *)v225;
          v117 = (unsigned __int16)v224;
          v118 = (char *)v225 + (unsigned __int16)v224;
          v197 = v118;
          v184 = (unsigned __int16)v224;
          do
          {
            if ( v117 <= 1 )
              break;
            v117 -= 2;
            v184 = v117;
            v197 = --v118;
          }
          while ( *v118 != 45 );
          v73 = (unsigned __int16)v117 >> 1;
          if ( v73 )
          {
            v74 = 0;
            v75 = 0;
            v185 = 0;
            v76 = (unsigned __int16 *)v225;
            v198 = (unsigned __int16 *)v225;
            while ( v75 < v73 )
            {
              v159 = *v76;
              v77 = v159;
              if ( (unsigned __int16)(v159 - 65) <= 0x19u )
              {
                v77 = v159 + 32;
                v159 += 32;
              }
              v74 = v74 * ApiSetMap[6] + v77;
              v185 = ++v75;
              v198 = ++v76;
            }
            v78 = 0LL;
            v187 = 0;
            v79 = ApiSetMap[3] - 1;
            v186 = v79;
            while ( v16 <= v79 )
            {
              v80 = (v79 + v16) >> 1;
              v81 = (_DWORD *)((char *)&ApiSetMap[2 * v80] + (unsigned int)ApiSetMap[5]);
              if ( v74 < *v81 )
              {
                v79 = v80 - 1;
                v186 = v80 - 1;
              }
              else
              {
                if ( v74 <= *v81 )
                {
                  v78 = (_DWORD *)((char *)&ApiSetMap[6 * v81[1]] + (unsigned int)ApiSetMap[4]);
                  break;
                }
                v16 = v80 + 1;
                v187 = v80 + 1;
              }
            }
            if ( v78 )
            {
              v82 = (unsigned __int16 *)((char *)ApiSetMap + v78[1]);
              v83 = v78[3] >> 1;
              v199 = (unsigned __int16 *)v225;
              v200 = v82;
              v84 = v73 > v83 ? v83 : v73;
              while ( 1 )
              {
                if ( v87 >= (unsigned __int16 *)((char *)v225 + 2 * v84) )
                {
                  v88 = v73 - (_DWORD)v83;
                  goto LABEL_153;
                }
                v85 = *v87;
                v190 = v85;
                v86 = *v82;
                LODWORD(v173) = v86;
                if ( v85 != v86 )
                {
                  if ( v85 >= 0x61 )
                  {
                    if ( v85 > 0x7A )
                      v85 = (unsigned __int16)(v85
                                             + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                        + 2LL
                                                        * ((v85 & 0xF)
                                                         + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                               + 2LL
                                                                               * (((unsigned __int8)v85 >> 4)
                                                                                + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v85)))))));
                    else
                      v85 -= 32;
                  }
                  v190 = v85;
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
                  LODWORD(v173) = v86;
                  if ( v85 != v86 )
                    break;
                }
                v199 = ++v87;
                v200 = ++v82;
              }
              v88 = v85 - v86;
LABEL_153:
              if ( !v88 )
              {
                LOBYTE(v6) = v155;
                v18 = OriginalName;
                if ( v169 != -88 && v78[5] > 1 )
                {
                  v89 = ApiSetpSearchForApiSetHost(
                          (__int64)v78,
                          *(const WCHAR **)(v169 + 96),
                          *(_WORD *)(v169 + 88) >> 1,
                          (__int64)ApiSetMap);
                  goto LABEL_158;
                }
                if ( v78[5] )
                {
                  v89 = (__int64)ApiSetMap + v78[4];
LABEL_158:
                  Src = (char *)ApiSetMap + *(unsigned int *)(v89 + 12);
                  WORD1(v171) = *(_WORD *)(v89 + 16);
                  LOWORD(v171) = WORD1(v171);
                  v90 = 1;
                  v142 = 1;
                  v19 = v183;
                  v16 = 0;
                  goto LABEL_159;
                }
              }
            }
            LOBYTE(v6) = v155;
            v18 = OriginalName;
            v19 = v183;
            v16 = 0;
          }
        }
        v90 = v142;
      }
LABEL_159:
      v146 = v90;
      if ( v90 )
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
            v222.Length = 0;
            v193 = 0;
            v194 = 2147352624LL;
            v91 = -1LL;
            do
              ++v91;
            while ( *(_WORD *)(2 * v91 + 0x7FFE0030) );
            v92 = 2 * v91;
            v189 = v92;
            if ( v92 >= 0xFFFE )
            {
              LOWORD(v92) = -4;
              v189 = 65532LL;
            }
            LOWORD(v193) = v92;
            HIWORD(v193) = v92 + 2;
            v174 = 0;
            if ( (_WORD)v92 )
            {
              v93 = (unsigned __int16)v92 + 2;
              v162 = v93;
              v163 = 0;
              if ( v93 > v222.MaximumLength )
              {
                if ( v93 <= 0xFFFE )
                {
                  v119 = ((unsigned __int16)v92 + 65) & 0xFFFFFFC0;
                  v162 = v119;
                  if ( v119 > 0xFFFE )
                    v119 = 65534;
                  v162 = v119;
                  if ( v222.Buffer == v223 )
                  {
                    v120 = (void *)NtdllpAllocateStringRoutine(v119);
                    v202 = v120;
                    if ( v120 && v222.Length )
                      memmove(v120, v222.Buffer, v222.Length);
                  }
                  else
                  {
                    v120 = (void *)NtdllpReallocateStringRoutine(v119);
                    v202 = v120;
                  }
                  if ( v120 )
                  {
                    v222.Buffer = (wchar_t *)v120;
                    v222.MaximumLength = v119;
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
                memmove((char *)v222.Buffer + v222.Length, (const void *)0x7FFE0030, (unsigned __int16)v92);
                v222.Length += v92;
                v222.Buffer[(unsigned __int64)v222.Length >> 1] = 0;
              }
            }
            v175 = 0;
            v94 = v222.Length + 22;
            v155 = v94;
            v95 = 0;
            v164 = 0;
            if ( v94 > v222.MaximumLength )
            {
              if ( v94 <= 0xFFFE )
              {
                v121 = (v222.Length + 85) & 0xFFFFFFC0;
                v155 = v121;
                if ( v121 > 0xFFFE )
                  v121 = 65534;
                v155 = v121;
                if ( v222.Buffer == v223 )
                {
                  v122 = (void *)NtdllpAllocateStringRoutine(v121);
                  v203 = v122;
                  if ( v122 && v222.Length )
                    memmove(v122, v222.Buffer, v222.Length);
                }
                else
                {
                  v122 = (void *)NtdllpReallocateStringRoutine(v121);
                  v203 = v122;
                }
                if ( v122 )
                {
                  v222.Buffer = (wchar_t *)v122;
                  v222.MaximumLength = v121;
                }
                else
                {
                  v95 = -1073741801;
                  v164 = -1073741801;
                }
              }
              else
              {
                v95 = -1073741562;
                v164 = -1073741562;
              }
            }
            v175 = v95;
            if ( v95 >= 0 )
            {
              v96 = (char *)v222.Buffer + v222.Length;
              *(_OWORD *)v96 = *(_OWORD *)SlashSystem32SlashString.Buffer;
              *((_DWORD *)v96 + 4) = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
              v222.Length += 20;
              v222.Buffer[(unsigned __int64)v222.Length >> 1] = 0;
            }
            v176 = 0;
            v97 = (unsigned __int16)v171 + v222.Length + 2;
            v165 = v97;
            FullPath = 0;
            v166 = 0;
            if ( v97 > v222.MaximumLength )
            {
              if ( v97 <= 0xFFFE )
              {
                v123 = (v97 + 63) & 0xFFFFFFC0;
                v165 = v123;
                if ( v123 > 0xFFFE )
                  v123 = 65534;
                v165 = v123;
                if ( v222.Buffer == v223 )
                {
                  v124 = (void *)NtdllpAllocateStringRoutine(v123);
                  v204 = v124;
                  if ( v124 && v222.Length )
                    memmove(v124, v222.Buffer, v222.Length);
                }
                else
                {
                  v124 = (void *)NtdllpReallocateStringRoutine(v123);
                  v204 = v124;
                }
                if ( v124 )
                {
                  v222.Buffer = (wchar_t *)v124;
                  v222.MaximumLength = v123;
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
              memmove((char *)v222.Buffer + v222.Length, Src, (unsigned __int16)v171);
              v222.Length += v171;
              v222.Buffer[(unsigned __int64)v222.Length >> 1] = 0;
            }
            v160 = FullPath;
            if ( FullPath < 0 )
            {
LABEL_184:
              v156 = FullPath;
              if ( FullPath < 0 )
              {
                v34 = v145;
              }
              else
              {
                v99 = (_UNICODE_STRING *)&v224;
                v205 = (_UNICODE_STRING *)&v224;
                if ( v222.Length )
                {
                  if ( (LdrpDebugFlags & 5) != 0 )
                  {
                    v125 = "SxS";
                    if ( !v143 )
                      v125 = "API set";
                    LdrpLogDbgPrint(
                      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                      2567,
                      (unsigned int)"LdrpPreprocessDllName",
                      2,
                      (__int64)"DLL %wZ was redirected to %wZ by %s\n",
                      &v224,
                      &v222,
                      v125);
                  }
                  v34 = v145 | 0x200;
                  v145 |= 0x200u;
                  if ( v143 )
                  {
                    v34 |= 4u;
                    v145 = v34;
                  }
                  v99 = &v222;
                  v205 = &v222;
                }
                else
                {
                  v114 = (char *)v225 + (unsigned __int16)v224;
                  v206 = v114;
                  do
                  {
                    v206 = --v114;
                    if ( v114 < v225 )
                    {
                      v149 = 1;
                      v34 = v145 | 0x20;
                      v145 |= 0x20u;
                      appended = LdrpAppendUnicodeStringToFilenameBuffer(&v222, &v224);
LABEL_234:
                      v156 = appended;
                      FullPath = appended;
                      goto LABEL_190;
                    }
                  }
                  while ( *v114 != 92 && *v114 != 47 );
                  v149 = 0;
                  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(&v224) == 5 )
                  {
                    appended = LdrpAppendUnicodeStringToFilenameBuffer(&v222, &v224);
                    v34 = v145;
                    goto LABEL_234;
                  }
                  FullPath = LdrpGetFullPath((__int64)&v224, (__int64)&v222);
                  v156 = FullPath;
                  v34 = v145;
                  if ( FullPath >= 0 )
                  {
                    v34 = v145 | 0x600;
                    v145 |= 0x600u;
                  }
                }
LABEL_190:
                if ( FullPath < 0 )
                {
LABEL_313:
                  if ( (LdrpDebugFlags & 3) != 0 )
                  {
                    LODWORD(NewFlags) = FullPath;
                    LdrpLogDbgPrint(
                      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                      2623,
                      (unsigned int)"LdrpPreprocessDllName",
                      0,
                      (__int64)"LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
                      &v224,
                      NewFlags);
                  }
                  if ( (LdrpDebugFlags & 0x10) != 0 )
                    __debugbreak();
LABEL_202:
                  v154 = FullPath;
                  if ( FullPath < 0 )
                  {
LABEL_362:
                    v9 = (PVOID *)v158;
                    goto LABEL_363;
                  }
                  v37 = v182;
                  if ( !*v182 )
                  {
                    v196 = NtdllBaseTag + 2621440;
                    Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2621440, 0x20uLL);
                    *v182 = Heap;
                    if ( !Heap )
                    {
                      FullPath = -1073741801;
                      v154 = -1073741801;
                      goto LABEL_362;
                    }
                  }
                  v35 = *(_QWORD *)(v170 + 32);
                  v189 = v35;
                  v104 = v34;
                  v36 = *(_QWORD *)(v170 + 16);
                  v173 = v36;
                  v63 = (__int64 *)v158;
                  *(_QWORD *)v158 = 0LL;
                  if ( (v34 & 0x20) != 0 )
                  {
                    FullPath = LdrpFindLoadedDllByName(&v222, 0LL, 0LL);
                    v157 = FullPath;
                    goto LABEL_47;
                  }
                  if ( (v34 & 0x200) == 0 )
                  {
                    v157 = -1073741515;
                    goto LABEL_102;
                  }
                  v105 = (wchar_t *)((char *)v222.Buffer + v222.Length);
                  v188 = v105;
                  while ( 1 )
                  {
                    v188 = --v105;
                    if ( v105 <= v222.Buffer )
                      break;
                    if ( *v105 == 92 || *v105 == 47 )
                    {
                      v188 = ++v105;
                      break;
                    }
                  }
                  String1.Buffer = v105;
                  String1.Length = v222.Length - ((_WORD)v105 - LOWORD(v222.Buffer));
                  String1.MaximumLength = v222.MaximumLength - ((_WORD)v105 - LOWORD(v222.Buffer));
                  v106 = 0;
                  v178 = 0;
                  v209 = v105;
                  v161 = 0;
                  v107 = (unsigned __int64)String1.Length >> 1;
                  v177 = v107;
                  while ( 1 )
                  {
                    v108 = v107;
                    LODWORD(v107) = v107 - 1;
                    v177 = v107;
                    if ( !v108 )
                      break;
                    v109 = *v105++;
                    v209 = v105;
                    if ( v109 < 0x61u )
                    {
                      v110 = v109;
                    }
                    else if ( v109 > 0x7Au )
                    {
                      v110 = (unsigned __int16)(v109
                                              + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                         + 2LL
                                                         * ((v109 & 0xF)
                                                          + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                              + 2LL
                                                                                              * (((v109 >> 4) & 0xF)
                                                                                               + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v109 >> 8)))))));
                    }
                    else
                    {
                      v110 = v109 - 32;
                    }
                    v106 = v110 + 65599 * v106;
                    v178 = v106;
                  }
                  v161 = v106;
                  v21 = v106;
                  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                  v22 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v21 & 0x1F));
                  v23 = 0;
                  v144 = 0;
                  v24 = *v22;
                  Buffer = v222.Buffer;
                  v26 = Nls844UnicodeUpcaseTable;
                  while ( v24 != v22 )
                  {
                    v27 = v24 - 14;
                    if ( v21 == *((_DWORD *)v24 + 38) && ((v104 & 8) == 0 || (v27[13] & 1) != 0) )
                    {
                      if ( &v138 == (__int64 *)-800LL )
                      {
                        v23 = (v27[13] & 0x10000000) == 0
                           && RtlEqualUnicodeString(&String1, (PUNICODE_STRING)(v27 + 11), 1u);
                        v144 = v23;
                        if ( v23 )
                          goto LABEL_36;
                      }
                      else
                      {
                        if ( v222.Length == *((unsigned __int16 *)v27 + 36) )
                        {
                          v28 = Buffer;
                          v210 = Buffer;
                          v29 = (unsigned __int16 *)v27[10];
                          v211 = v29;
                          while ( v28 < (wchar_t *)((char *)Buffer + v222.Length) )
                          {
                            v30 = *v28;
                            v215 = v30;
                            v31 = *v29;
                            LODWORD(v183) = v31;
                            if ( v30 != v31 )
                            {
                              if ( v30 >= 0x61 )
                              {
                                if ( v30 > 0x7A )
                                  v30 = (unsigned __int16)(v30
                                                         + *(_WORD *)(v26
                                                                    + 2LL
                                                                    * ((v30 & 0xF)
                                                                     + *(unsigned __int16 *)(v26
                                                                                           + 2LL
                                                                                           * (((unsigned __int8)v30 >> 4)
                                                                                            + (unsigned int)*(unsigned __int16 *)(v26 + 2LL * BYTE1(v30)))))));
                                else
                                  v30 -= 32;
                              }
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
                              if ( v30 != v31 )
                                goto LABEL_110;
                            }
                            v210 = ++v28;
                            v211 = ++v29;
                          }
                          v23 = 1;
                          v144 = 1;
LABEL_36:
                          v32 = v27[19];
                          if ( *(_DWORD *)(v32 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v32 - 56LL) & 0x20) != 0 )
                          {
                            v151 = 1;
                          }
                          else
                          {
                            v151 = 0;
                            _InterlockedIncrement((volatile signed __int32 *)v27 + 69);
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
                  v33 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
                  if ( v33 != 1 )
                  {
                    do
                    {
                      if ( (v33 & 6) == 2 )
                        v67 = 3LL;
                      else
                        v67 = -1LL;
                      v68 = v67 + v33;
                      v69 = v33;
                      v33 = _InterlockedCompareExchange64(
                              (volatile signed __int64 *)&LdrpModuleDatatableLock,
                              v67 + v33,
                              v33);
                    }
                    while ( v69 != v33 );
                    if ( v67 == 3 )
                      RtlpWakeSRWLock(&LdrpModuleDatatableLock, v68, 0LL);
                  }
                  if ( &v222 )
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
                    NewName = 0LL;
                    DynamicString = &v222;
                    v126 = (unsigned __int8)v167;
                  }
                  else
                  {
                    v127 = 3;
                    if ( FullPath >= 0 )
                      v127 = 0;
                    v179 = v127;
                    if ( !MEMORY[0x7FFE0384]
                      || (NtCurrentPeb()->TracingFlags & 4) == 0
                      || (MEMORY[0x7FFE0385] & 0x20) == 0 )
                    {
                      goto LABEL_46;
                    }
                    NewName = 0LL;
                    DynamicString = &String1;
                    v126 = (unsigned __int8)v179;
                  }
                  LdrpLogEtwEvent(5280, 0, 0, v126, (__int64)DynamicString, (__int64)NewName);
LABEL_46:
                  v157 = FullPath;
                  LOWORD(v34) = v145;
                  v35 = v189;
                  v36 = v173;
                  v37 = v182;
LABEL_47:
                  if ( FullPath != -1073741515 )
                  {
                    v9 = (PVOID *)v158;
                    v38 = *(_QWORD *)v158;
                    v180 = 0;
                    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                    v39 = *(_QWORD *)(v38 + 152);
                    v40 = *(_DWORD *)(v39 + 24);
                    if ( v40 != -1 )
                    {
                      if ( v40 )
                      {
                        *(_DWORD *)(v39 + 24) = v40 + 1;
                      }
                      else
                      {
                        v220 = NtCurrentTeb();
                        if ( (v220->SameTebFlags & 0x1000) != 0 )
                          ++*(_DWORD *)(v39 + 28);
                        else
                          v180 = -1073741515;
                      }
                    }
                    v41 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
                    if ( v41 != 1 )
                    {
                      do
                      {
                        v70 = -1LL;
                        if ( (v41 & 6) == 2 )
                          v70 = 3LL;
                        v71 = v70 + v41;
                        v72 = v41;
                        v41 = _InterlockedCompareExchange64(
                                (volatile signed __int64 *)&LdrpModuleDatatableLock,
                                v70 + v41,
                                v41);
                      }
                      while ( v72 != v41 );
                      if ( v70 == 3 )
                        RtlpWakeSRWLock(&LdrpModuleDatatableLock, v71, 0LL);
                    }
                    LOWORD(v34) = v145;
                    goto LABEL_51;
                  }
                  v63 = (__int64 *)v158;
LABEL_102:
                  FullPath = LdrpAllocatePlaceHolder((const void **)&v222, v36, v104, v181, v169, v63, v35);
                  v157 = FullPath;
                  v9 = (PVOID *)v158;
                  if ( FullPath >= 0 )
                  {
                    FullPath = LdrpLoadKnownDll(*(_BYTE **)(*(_QWORD *)v158 + 176LL));
                    v157 = FullPath;
                  }
LABEL_51:
                  v154 = FullPath;
                  if ( !*v9 )
                    goto LABEL_363;
                  v42 = v34 & 0x400;
                  if ( v42 && FullPath == -1073741515 )
                  {
                    LdrpProcessWork(*((_QWORD *)*v9 + 22), 1);
                    FullPath = **(_DWORD **)(*((_QWORD *)*v9 + 22) + 32LL);
                    v154 = FullPath;
                  }
                  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                  v43 = (char *)*v9;
                  v44 = v43;
                  v212 = *v9;
                  if ( v43 )
                  {
                    v45 = *((_QWORD *)v43 + 22);
                    if ( v45 )
                    {
                      if ( (*(_DWORD *)(v45 + 24) & 0x80000) == 0 && *(char **)(v45 + 48) != v43 )
                      {
                        v44 = *(char **)(v45 + 48);
                        v212 = v44;
                        *(_QWORD *)(v45 + 48) = v43;
                      }
                    }
                  }
                  v214 = v44;
                  *(_DWORD *)(*v37 + 24LL) &= ~1u;
                  v46 = (_DWORD *)*v37;
                  v191 = (_DWORD *)*v37;
                  v47 = *((_QWORD *)v44 + 19);
                  v48 = *(_QWORD *)(*(_QWORD *)(v170 + 48) + 152LL);
                  if ( v48 == v47 )
                    goto LABEL_59;
                  if ( *(_DWORD *)(v47 + 56) == 9 )
                  {
                    if ( *(_DWORD *)(v47 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v47 - 56LL) & 0x20) != 0 )
                    {
                      v152 = 1;
                      goto LABEL_59;
                    }
                    v152 = 0;
                  }
                  v56 = *(_QWORD **)(v48 + 40);
                  if ( !v56 )
                  {
LABEL_84:
                    v147 = 0;
                    if ( !v46 )
                    {
                      v201 = NtdllBaseTag + 2359296;
                      v128 = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 0x20uLL);
                      v46 = v128;
                      v191 = v128;
                      if ( !v128 )
                      {
                        MEMORY[0] = -1073741801;
                        v46 = 0LL;
                        goto LABEL_61;
                      }
                      v128[6] |= 1u;
                    }
                    v58 = *(_QWORD **)(v48 + 40);
                    if ( v58 )
                    {
                      *(_QWORD *)v46 = *v58;
                      *v58 = v46;
                    }
                    else
                    {
                      *(_QWORD *)v46 = v46;
                    }
                    *(_QWORD *)(v48 + 40) = v46;
                    *((_QWORD *)v46 + 1) = v47;
                    v59 = v46 + 4;
                    v60 = *(_QWORD **)(v47 + 48);
                    if ( v60 )
                    {
                      *v59 = *v60;
                      *v60 = v59;
                    }
                    else
                    {
                      *v59 = v59;
                    }
                    *(_QWORD *)(v47 + 48) = v59;
                    v61 = (v46[6] & 1) == 0;
                    v62 = v46[6] & 1;
                    *((_QWORD *)v46 + 3) = v48;
                    if ( !v61 )
                    {
                      v46[6] &= ~1u;
                      v46[6] |= v62 & 1;
                    }
                    v46 = 0LL;
                    v191 = 0LL;
LABEL_61:
                    v213 = v46;
                    v50 = v182;
                    *v182 = v46;
                    if ( FullPath != -1073741515 || v42 )
                    {
                      if ( FullPath < 0 )
                      {
LABEL_66:
                        v53 = *((_QWORD *)v44 + 19);
                        if ( *(_DWORD *)(v53 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v53 - 56LL) & 0x20) != 0 )
                        {
                          v153 = 1;
                        }
                        else
                        {
                          v153 = 0;
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v44 + 69, 0xFFFFFFFF) == 1 )
                          {
                            RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                            v129 = (char **)*((_QWORD *)v44 + 20);
                            v130 = (PVOID *)*((_QWORD *)v44 + 21);
                            if ( v129[1] != v44 + 160 || *v130 != v44 + 160 )
                              __fastfail(3u);
                            *v130 = v129;
                            v129[1] = (char *)v130;
                            v131 = (_QWORD *)*((_QWORD *)v44 + 19);
                            v132 = *v131 == (_QWORD)v131;
                            RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
                            if ( *((_WORD *)v44 + 55) )
                              LdrpReleaseTlsEntry(v44, 0LL);
                            if ( (*((_DWORD *)v44 + 26) & 0x200) != 0 )
                              RtlRemoveInvertedFunctionTable(*((_QWORD *)v44 + 6));
                            v133 = (void *)*((_QWORD *)v44 + 6);
                            if ( v133 )
                              NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v133);
                            v134 = (_ACTIVATION_CONTEXT *)*((_QWORD *)v44 + 17);
                            if ( (unsigned __int64)&v134[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
                              RtlReleaseActivationContext(v134);
                            if ( *((_QWORD *)v44 + 10) )
                              LdrpFreeUnicodeString((__int64)(v44 + 72));
                            RtlFreeHeap(LdrpHeap, 0, v44);
                            if ( v132 )
                              LdrpDestroyNode(v131);
                          }
                        }
                        v54 = _InterlockedCompareExchange64(
                                (volatile signed __int64 *)&LdrpModuleDatatableLock,
                                0LL,
                                1LL);
                        if ( v54 != 1 )
                        {
                          do
                          {
                            if ( (v54 & 6) == 2 )
                              v64 = 3LL;
                            else
                              v64 = -1LL;
                            v65 = v64 + v54;
                            v66 = v54;
                            v54 = _InterlockedCompareExchange64(
                                    (volatile signed __int64 *)&LdrpModuleDatatableLock,
                                    v64 + v54,
                                    v54);
                          }
                          while ( v66 != v54 );
                          if ( v64 == 3 )
                            RtlpWakeSRWLock(&LdrpModuleDatatableLock, v65, 0LL);
                        }
                        v55 = v214;
                        if ( v214 != *v9 )
                        {
                          LdrpFreeReplacedModule(*v9);
                          *v9 = v55;
                        }
                        FullPath = v154;
LABEL_363:
                        RtlDeactivateActivationContextUnsafeFast(&v216);
                        v7 = v170;
                        if ( FullPath >= 0 )
                          goto LABEL_364;
                        goto LABEL_385;
                      }
                    }
                    else
                    {
                      LdrpQueueWork(*((_QWORD *)v44 + 22));
                      v154 = 0;
                    }
                    v51 = v170;
                    v52 = *(_DWORD *)(v170 + 92);
                    if ( v52 )
                    {
                      if ( *v50 || *(int *)(*((_QWORD *)v44 + 19) + 56LL) >= 2 )
                        *(_DWORD *)(v170 + 92) = v52 - 1;
                    }
                    else if ( *(int *)(*((_QWORD *)v44 + 19) + 56LL) < 2 )
                    {
                      *(_QWORD *)(v170 + 72) = v44;
                      *(_DWORD *)(v51 + 92) = 1;
                      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 48) + 152LL) + 56LL) = 3;
                      v154 = 259;
                    }
                    goto LABEL_66;
                  }
                  v57 = *(_QWORD **)(v48 + 40);
                  while ( 1 )
                  {
                    v57 = (_QWORD *)*v57;
                    if ( v57[1] == v47 )
                      break;
                    if ( v57 == v56 )
                      goto LABEL_84;
                  }
LABEL_59:
                  v147 = 1;
                  v49 = *(_DWORD *)(v47 + 24);
                  if ( (unsigned int)(v49 - 2) <= 0xFFFFFFFC )
                    *(_DWORD *)(v47 + 24) = v49 - 1;
                  goto LABEL_61;
                }
                v100 = v99->Buffer;
                v101 = (wchar_t *)((char *)v100 + v99->Length);
                v207 = v101;
                v150 = 0;
                while ( 1 )
                {
                  v207 = --v101;
                  if ( v101 < v100 )
                  {
LABEL_238:
                    FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&v222, &LdrpDefaultExtension);
                    v156 = FullPath;
                    goto LABEL_201;
                  }
                  v102 = *v101;
                  if ( *v101 == 46 )
                    break;
                  if ( v102 == 47 || v102 == 92 )
                    goto LABEL_238;
                }
                v150 = 1;
                v103 = (wchar_t *)((char *)v222.Buffer + v222.Length);
                v208 = v103;
                while ( 1 )
                {
                  v208 = --v103;
                  if ( v103 < v222.Buffer || *v103 != 46 )
                    break;
                  v222.Length -= 2;
                }
                v103[1] = 0;
              }
LABEL_201:
              if ( FullPath >= 0 )
                goto LABEL_202;
              goto LABEL_313;
            }
            ProcessParameters = v19->ProcessParameters;
            LOBYTE(v6) = ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0;
            v148 = v6;
            v18 = &v222;
            OriginalName = &v222;
          }
          if ( (_BYTE)v6 && !LdrpIsSecureProcess )
          {
            v112 = RtlDosApplyFileIsolationRedirection_Ustr(
                     1u,
                     v18,
                     (PUNICODE_STRING)&LdrpDefaultExtension,
                     0LL,
                     &v219,
                     0LL,
                     0LL,
                     0LL,
                     0LL);
            if ( v112 >= 0 )
            {
              v143 = 1;
              LdrpGetFullPath((__int64)&v219, (__int64)&v222);
              LdrpFreeUnicodeString((__int64)&v219);
            }
            if ( v112 != -1072365560 )
            {
              FullPath = v112;
              v160 = v112;
            }
          }
          goto LABEL_184;
        }
        v113 = 5330;
      }
      else
      {
        v113 = 5331;
      }
      LdrpLogDllState(0, (__int64)v18, v113);
      goto LABEL_162;
    }
    ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)v218;
    goto LABEL_15;
  }
LABEL_385:
  *v9 = 0LL;
  **(_DWORD **)(v7 + 32) = FullPath;
LABEL_364:
  if ( v226 != v225 )
    NtdllpFreeStringRoutine(v225);
  v225 = v226;
  v224 = 0x1000000;
  v226[0] = 0;
  if ( v223 != v222.Buffer )
    NtdllpFreeStringRoutine(v222.Buffer);
  return (unsigned int)FullPath;
}

/*
 * XREFs of LdrpLoadDependentModule @ 0x180013200
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180012FB8 (LdrpMapAndSnapDependency.c)
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 * Callees:
 *     LdrpProcessWork @ 0x18000928C (LdrpProcessWork.c)
 *     LdrpFreeUnicodeString @ 0x18000A308 (LdrpFreeUnicodeString.c)
 *     LdrpGetFullPath @ 0x18000C3E0 (LdrpGetFullPath.c)
 *     RtlReleaseActivationContext @ 0x18000CC70 (RtlReleaseActivationContext.c)
 *     LdrpAllocatePlaceHolder @ 0x18000FCC4 (LdrpAllocatePlaceHolder.c)
 *     LdrpLoadKnownDll @ 0x1800105C0 (LdrpLoadKnownDll.c)
 *     ApiSetpSearchForApiSetHost @ 0x180011C78 (ApiSetpSearchForApiSetHost.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180012044 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpLogDllState @ 0x180012678 (LdrpLogDllState.c)
 *     RtlAnsiStringToUnicodeString @ 0x180014B30 (RtlAnsiStringToUnicodeString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180014F90 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlEqualUnicodeString @ 0x1800150E0 (RtlEqualUnicodeString.c)
 *     LdrpFindLoadedDllByName @ 0x180015388 (LdrpFindLoadedDllByName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800155C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180017C70 (RtlDetermineDosPathNameType_Ustr.c)
 *     NtdllpAllocateStringRoutine @ 0x180018174 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlRaiseException @ 0x180036970 (RtlRaiseException.c)
 *     LdrpFreeReplacedModule @ 0x18006E7CC (LdrpFreeReplacedModule.c)
 *     LdrpDestroyNode @ 0x180074C74 (LdrpDestroyNode.c)
 *     RtlpWakeSRWLock @ 0x1800755AC (RtlpWakeSRWLock.c)
 *     LdrpQueueWork @ 0x1800767BC (LdrpQueueWork.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007881C (RtlRemoveInvertedFunctionTable.c)
 *     LdrpReleaseTlsEntry @ 0x18007F9B0 (LdrpReleaseTlsEntry.c)
 *     RtlxOemStringToUnicodeSize @ 0x180083120 (RtlxOemStringToUnicodeSize.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800CA054 (LdrpLogEtwEvent.c)
 *     NtdllpReallocateStringRoutine @ 0x1800CB35C (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpLoadDependentModule(
        PCANSI_STRING SourceString,
        _QWORD *a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v6; // r9
  _QWORD *v7; // r13
  __int64 *v9; // r12
  unsigned __int16 v10; // si
  unsigned int v11; // ebx
  int FullPath; // edi
  unsigned int v13; // eax
  void *StringRoutine; // rax
  void *v15; // r14
  __int64 v16; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  unsigned __int64 ActiveFrame; // rcx
  unsigned __int64 *v19; // rax
  int *v20; // rsi
  _DWORD *ApiSetMap; // r13
  char v22; // dl
  unsigned __int64 v23; // rcx
  unsigned __int16 *v24; // rsi
  unsigned int v25; // r8d
  _WORD *v26; // rax
  unsigned __int16 v27; // r8
  unsigned int v28; // ebx
  unsigned int v29; // r9d
  unsigned __int16 *v30; // r10
  unsigned __int16 v31; // dx
  unsigned int *v32; // r14
  int v33; // r11d
  int v34; // r10d
  int v35; // r9d
  unsigned int *v36; // rcx
  unsigned __int16 *v37; // r10
  __int64 v38; // rax
  int v39; // r15d
  int v40; // r12d
  unsigned int v41; // r8d
  unsigned int v42; // r9d
  unsigned int v43; // r8d
  __int64 v44; // rcx
  char v45; // bl
  unsigned __int16 v46; // r8
  __int64 v47; // rbx
  unsigned __int64 v48; // rbx
  unsigned int v49; // esi
  unsigned int v50; // esi
  void *v51; // r14
  unsigned int v52; // ebx
  unsigned int v53; // ebx
  void *v54; // rsi
  char *v55; // rcx
  unsigned int v56; // ebx
  unsigned int v57; // ebx
  void *v58; // rsi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  bool v60; // zf
  char v61; // al
  const void **v62; // rdx
  int v63; // ebx
  int *v64; // rbx
  const char *v65; // rax
  int v66; // esi
  _WORD *v67; // rax
  int appended; // eax
  unsigned __int64 v69; // rdx
  _WORD *v70; // rax
  __int16 v71; // cx
  _WORD *v72; // rcx
  __int64 Heap; // rax
  __int64 v74; // r12
  int v75; // r15d
  __int64 v76; // r13
  __int64 *v77; // r14
  unsigned __int16 *v78; // r8
  int v79; // r10d
  unsigned __int64 v80; // r11
  int v81; // eax
  unsigned __int16 v82; // r9
  int v83; // eax
  int v84; // r14d
  __int64 v85; // r8
  __int64 v86; // r9
  _QWORD **v87; // rsi
  char v88; // cl
  _QWORD *i; // rdi
  volatile signed __int32 *v90; // rbx
  __int64 v91; // rax
  signed __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rdx
  signed __int64 v95; // rtt
  int v96; // eax
  int v97; // r9d
  __int64 v98; // rbx
  __int64 v99; // rdx
  int v100; // eax
  signed __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rdx
  signed __int64 v104; // rtt
  int v105; // esi
  __int64 v106; // rax
  __int64 v107; // rbx
  __int64 v108; // rcx
  __int64 *v109; // r12
  __int64 v110; // rcx
  __int64 v111; // r14
  __int64 v112; // r15
  _QWORD *v113; // rdx
  _QWORD *v114; // rax
  __int64 v115; // rax
  __int64 *v116; // rdx
  _QWORD *v117; // rdx
  _QWORD *v118; // r8
  int v119; // eax
  int v120; // edx
  int v121; // ecx
  __int64 v122; // rax
  __int64 v123; // rdx
  _QWORD *v124; // rcx
  _QWORD *v125; // rdi
  bool v126; // si
  __int64 v127; // rdx
  volatile signed __int32 *v128; // rcx
  signed __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rdx
  signed __int64 v132; // rtt
  __int64 *v133; // r14
  __int64 v134; // rbx
  _BYTE v136[32]; // [rsp+0h] [rbp-568h] BYREF
  const void **v137; // [rsp+20h] [rbp-548h]
  int *v138; // [rsp+28h] [rbp-540h]
  const void **v139; // [rsp+30h] [rbp-538h]
  const char *v140; // [rsp+38h] [rbp-530h]
  char v141; // [rsp+50h] [rbp-518h]
  char v142; // [rsp+51h] [rbp-517h]
  int v143; // [rsp+54h] [rbp-514h]
  char v144; // [rsp+58h] [rbp-510h]
  char v145; // [rsp+59h] [rbp-50Fh]
  char v146; // [rsp+5Ah] [rbp-50Eh]
  int v147; // [rsp+5Ch] [rbp-50Ch]
  char v148; // [rsp+60h] [rbp-508h]
  unsigned int v149; // [rsp+68h] [rbp-500h]
  int v150; // [rsp+70h] [rbp-4F8h]
  int v151; // [rsp+74h] [rbp-4F4h]
  int v152; // [rsp+78h] [rbp-4F0h]
  int v153; // [rsp+7Ch] [rbp-4ECh]
  int *v154; // [rsp+80h] [rbp-4E8h]
  unsigned __int16 v155; // [rsp+88h] [rbp-4E0h]
  int v156; // [rsp+8Ch] [rbp-4DCh]
  int v157; // [rsp+90h] [rbp-4D8h]
  __int64 *v158; // [rsp+98h] [rbp-4D0h]
  int v159; // [rsp+A0h] [rbp-4C8h]
  unsigned int v160; // [rsp+A8h] [rbp-4C0h]
  _QWORD *v161; // [rsp+B0h] [rbp-4B8h]
  __int64 v162; // [rsp+B8h] [rbp-4B0h]
  void *v163; // [rsp+C0h] [rbp-4A8h]
  __int64 v164; // [rsp+C8h] [rbp-4A0h]
  __int64 v165; // [rsp+D0h] [rbp-498h]
  int v166; // [rsp+D8h] [rbp-490h]
  unsigned int v167; // [rsp+DCh] [rbp-48Ch]
  int v168; // [rsp+E0h] [rbp-488h]
  int v169; // [rsp+E4h] [rbp-484h]
  int v170; // [rsp+E8h] [rbp-480h]
  int v171; // [rsp+ECh] [rbp-47Ch]
  int v172; // [rsp+F0h] [rbp-478h]
  int v173; // [rsp+F4h] [rbp-474h]
  unsigned int v174; // [rsp+F8h] [rbp-470h]
  int v175; // [rsp+FCh] [rbp-46Ch]
  unsigned __int16 *v176; // [rsp+100h] [rbp-468h]
  unsigned int v177; // [rsp+108h] [rbp-460h]
  int v178; // [rsp+10Ch] [rbp-45Ch]
  int v179; // [rsp+110h] [rbp-458h]
  unsigned int v180; // [rsp+114h] [rbp-454h]
  int v181; // [rsp+118h] [rbp-450h]
  __int64 v182; // [rsp+120h] [rbp-448h]
  __int64 v183; // [rsp+128h] [rbp-440h]
  _WORD v184[4]; // [rsp+130h] [rbp-438h] BYREF
  unsigned __int16 *v185; // [rsp+138h] [rbp-430h]
  UNICODE_STRING DestinationString; // [rsp+140h] [rbp-428h] BYREF
  int v187; // [rsp+150h] [rbp-418h]
  __int64 v188; // [rsp+158h] [rbp-410h]
  __int64 v189; // [rsp+160h] [rbp-408h] BYREF
  int v190; // [rsp+168h] [rbp-400h]
  unsigned __int64 v191; // [rsp+170h] [rbp-3F8h] BYREF
  __int64 v192; // [rsp+178h] [rbp-3F0h]
  __int64 v193; // [rsp+180h] [rbp-3E8h]
  unsigned __int64 v194; // [rsp+188h] [rbp-3E0h]
  __int64 v195; // [rsp+190h] [rbp-3D8h]
  void *v196; // [rsp+198h] [rbp-3D0h]
  __int64 v197; // [rsp+1A0h] [rbp-3C8h]
  int v198; // [rsp+1B0h] [rbp-3B8h]
  __int64 v199; // [rsp+1B8h] [rbp-3B0h]
  unsigned __int64 v200; // [rsp+1C0h] [rbp-3A8h]
  __int64 v201; // [rsp+1C8h] [rbp-3A0h]
  void *v202; // [rsp+1D0h] [rbp-398h]
  void *v203; // [rsp+1D8h] [rbp-390h]
  unsigned __int16 *v204; // [rsp+1E0h] [rbp-388h]
  void *v205; // [rsp+1E8h] [rbp-380h]
  _WORD *v206; // [rsp+1F0h] [rbp-378h]
  struct _PEB *v207; // [rsp+1F8h] [rbp-370h]
  _WORD *v208; // [rsp+200h] [rbp-368h]
  int v209; // [rsp+208h] [rbp-360h]
  __int64 v210; // [rsp+210h] [rbp-358h]
  _WORD *v211; // [rsp+218h] [rbp-350h]
  _WORD *v212; // [rsp+220h] [rbp-348h]
  unsigned __int16 *v213; // [rsp+228h] [rbp-340h]
  int *v214; // [rsp+230h] [rbp-338h]
  unsigned __int16 *v215; // [rsp+238h] [rbp-330h]
  unsigned __int16 *v216; // [rsp+240h] [rbp-328h]
  _BYTE v217[16]; // [rsp+248h] [rbp-320h] BYREF
  struct _TEB *v218; // [rsp+258h] [rbp-310h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+260h] [rbp-308h] BYREF
  const void *v220; // [rsp+300h] [rbp-268h] BYREF
  void *v221; // [rsp+308h] [rbp-260h]
  _WORD v222[128]; // [rsp+310h] [rbp-258h] BYREF
  int v223; // [rsp+410h] [rbp-158h] BYREF
  void *Src; // [rsp+418h] [rbp-150h]
  _WORD v225[128]; // [rsp+420h] [rbp-148h] BYREF
  void *retaddr; // [rsp+568h] [rbp+0h]

  v179 = a4;
  v6 = a3;
  v165 = a3;
  v7 = a2;
  v161 = a2;
  v9 = a5;
  v158 = a5;
  v182 = a6;
  v221 = v222;
  LODWORD(v220) = 0x1000000;
  v222[0] = 0;
  Src = v225;
  v10 = 0;
  v223 = 0x1000000;
  LOWORD(v11) = 256;
  v225[0] = 0;
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
        v15 = StringRoutine;
        v10 = v223;
        if ( StringRoutine && (_WORD)v223 )
        {
          memmove(StringRoutine, Src, (unsigned __int16)v223);
          v10 = v223;
        }
        if ( v15 )
        {
          Src = v15;
          HIWORD(v223) = v11;
        }
        else
        {
          FullPath = -1073741801;
          LOWORD(v11) = HIWORD(v223);
        }
      }
      else
      {
        FullPath = -1073741562;
      }
    }
    if ( FullPath >= 0 )
    {
      DestinationString.Buffer = (unsigned __int16 *)((char *)Src + v10);
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v11 - v10;
      RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
      LOWORD(v223) = DestinationString.Length + v223;
    }
    v6 = v165;
  }
  if ( FullPath >= 0 )
  {
    v189 = 72LL;
    v190 = 1;
    v191 = 0LL;
    v192 = 0LL;
    v193 = 0LL;
    v194 = 0LL;
    v195 = 0LL;
    v196 = 0LL;
    v197 = 0LL;
    v16 = *(_QWORD *)(v6 + 136);
    ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
    if ( ActivationContextStackPointer )
      ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
    else
      ActiveFrame = 0LL;
    v194 = ~ActiveFrame;
    v195 = ~v16;
    LODWORD(v19) = (_DWORD)retaddr;
    v196 = retaddr;
    if ( ActiveFrame )
    {
      LODWORD(v19) = *(_DWORD *)(ActiveFrame + 16);
      if ( ((unsigned __int8)v19 & 0x70) != 0x20 )
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
        v6 = v165;
LABEL_33:
        v143 = 0;
        v151 = 0;
        v20 = &v223;
        v154 = &v223;
        v207 = NtCurrentPeb();
        v141 = 0;
        LOBYTE(v19) = 1;
        v149 = (unsigned int)v19;
        v148 = 1;
        v164 = v6 + 88;
        ApiSetMap = v207->ApiSetMap;
        if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
          LdrpLogEtwEvent(5328, 0, 0, 0, (__int64)&v223);
        v162 = 0LL;
        v163 = 0LL;
        FullPath = 0;
        v22 = 0;
        v144 = 0;
        if ( (unsigned __int16)v223 < 8u
          || (v23 = *(_QWORD *)Src & 0xFFFFFFDFFFDFFFDFuLL, v23 != 0x2D004900500041LL) && v23 != 0x2D005400580045LL )
        {
LABEL_82:
          v45 = v22;
          v142 = v22;
          if ( v22 )
          {
            if ( (_WORD)v162 )
            {
              if ( MEMORY[0x7FFE0384] )
              {
                if ( (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
                  LdrpLogEtwEvent(5329, 0, 0, 0, (__int64)v20);
                v45 = v142;
              }
              goto LABEL_92;
            }
            v46 = 5330;
          }
          else
          {
            v46 = 5331;
          }
          LdrpLogDllState(0, (__int64)v20, v46);
LABEL_92:
          v150 = 0;
          if ( !v45 )
            goto LABEL_151;
          if ( !(_WORD)v162 )
          {
            FullPath = -1073740671;
            goto LABEL_159;
          }
          v187 = 0;
          v188 = 2147352624LL;
          v47 = -1LL;
          do
            ++v47;
          while ( *(_WORD *)(2 * v47 + 0x7FFE0030) );
          v48 = 2 * v47;
          v200 = v48;
          if ( v48 >= 0xFFFE )
            v48 = 65532LL;
          v200 = v48;
          LOWORD(v187) = v48;
          HIWORD(v187) = v48 + 2;
          FullPath = 0;
          v168 = 0;
          if ( (_WORD)v48 )
          {
            v49 = (unsigned __int16)v48 + (unsigned __int16)v220 + 2;
            v160 = v49;
            v159 = 0;
            if ( v49 > WORD1(v220) )
            {
              if ( v49 <= 0xFFFE )
              {
                v50 = (v49 + 63) & 0xFFFFFFC0;
                v160 = v50;
                if ( v50 > 0xFFFE )
                  v50 = 65534;
                v160 = v50;
                if ( v221 == v222 )
                {
                  v51 = (void *)NtdllpAllocateStringRoutine(v50);
                  v203 = v51;
                  if ( v51 && (_WORD)v220 )
                    memmove(v51, v221, (unsigned __int16)v220);
                }
                else
                {
                  v51 = (void *)NtdllpReallocateStringRoutine(v50);
                  v203 = v51;
                }
                if ( v51 )
                {
                  v221 = v51;
                  WORD1(v220) = v50;
                }
                else
                {
                  FullPath = -1073741801;
                  v159 = -1073741801;
                }
              }
              else
              {
                FullPath = -1073741562;
                v159 = -1073741562;
              }
            }
            v168 = FullPath;
            if ( FullPath >= 0 )
            {
              memmove((char *)v221 + (unsigned __int16)v220, (const void *)0x7FFE0030, (unsigned __int16)v48);
              LOWORD(v220) = v48 + (_WORD)v220;
              *((_WORD *)v221 + ((unsigned __int64)(unsigned __int16)v220 >> 1)) = 0;
            }
          }
          v150 = FullPath;
          if ( FullPath < 0 )
            goto LABEL_151;
          v181 = 0;
          v52 = (unsigned __int16)v220 + 22;
          LODWORD(v164) = v52;
          FullPath = 0;
          v156 = 0;
          if ( v52 > WORD1(v220) )
          {
            if ( v52 <= 0xFFFE )
            {
              v53 = ((unsigned __int16)v220 + 85) & 0xFFFFFFC0;
              LODWORD(v164) = v53;
              if ( v53 > 0xFFFE )
                v53 = 65534;
              LODWORD(v164) = v53;
              if ( v221 == v222 )
              {
                v54 = (void *)NtdllpAllocateStringRoutine(v53);
                v202 = v54;
                if ( v54 && (_WORD)v220 )
                  memmove(v54, v221, (unsigned __int16)v220);
              }
              else
              {
                v54 = (void *)NtdllpReallocateStringRoutine(v53);
                v202 = v54;
              }
              if ( v54 )
              {
                v221 = v54;
                WORD1(v220) = v53;
              }
              else
              {
                FullPath = -1073741801;
                v156 = -1073741801;
              }
            }
            else
            {
              FullPath = -1073741562;
              v156 = -1073741562;
            }
          }
          v181 = FullPath;
          if ( FullPath >= 0 )
          {
            v55 = (char *)v221 + (unsigned __int16)v220;
            *(_OWORD *)v55 = *(_OWORD *)L"\\SYSTEM32\\";
            *((_DWORD *)v55 + 4) = *(_DWORD *)L"2\\";
            LOWORD(v220) = (_WORD)v220 + 20;
            *((_WORD *)v221 + ((unsigned __int64)(unsigned __int16)v220 >> 1)) = 0;
          }
          v150 = FullPath;
          if ( FullPath >= 0 )
          {
            v170 = 0;
            v56 = (unsigned __int16)v162 + (unsigned __int16)v220 + 2;
            v149 = v56;
            FullPath = 0;
            v157 = 0;
            if ( v56 > WORD1(v220) )
            {
              if ( v56 <= 0xFFFE )
              {
                v57 = (v56 + 63) & 0xFFFFFFC0;
                v149 = v57;
                if ( v57 > 0xFFFE )
                  v57 = 65534;
                v149 = v57;
                if ( v221 == v222 )
                {
                  v58 = (void *)NtdllpAllocateStringRoutine(v57);
                  v205 = v58;
                  if ( v58 && (_WORD)v220 )
                    memmove(v58, v221, (unsigned __int16)v220);
                }
                else
                {
                  v58 = (void *)NtdllpReallocateStringRoutine(v57);
                  v205 = v58;
                }
                if ( v58 )
                {
                  v221 = v58;
                  WORD1(v220) = v57;
                }
                else
                {
                  FullPath = -1073741801;
                  v157 = -1073741801;
                }
              }
              else
              {
                FullPath = -1073741562;
                v157 = -1073741562;
              }
            }
            v170 = FullPath;
            if ( FullPath >= 0 )
            {
              memmove((char *)v221 + (unsigned __int16)v220, v163, (unsigned __int16)v162);
              LOWORD(v220) = v162 + (_WORD)v220;
              *((_WORD *)v221 + ((unsigned __int64)(unsigned __int16)v220 >> 1)) = 0;
            }
            v150 = FullPath;
            ProcessParameters = v207->ProcessParameters;
            if ( !ProcessParameters || (v60 = (ProcessParameters->Flags & 0x1000) == 0, v61 = 1, v60) )
              v61 = 0;
            v148 = v61;
            v62 = &v220;
            v154 = (int *)&v220;
          }
          else
          {
LABEL_151:
            LODWORD(v62) = (_DWORD)v154;
            v61 = v149;
          }
          if ( FullPath < 0 || !v61 || LdrpIsSecureProcess )
          {
LABEL_160:
            v151 = FullPath;
            if ( FullPath < 0 )
            {
              v66 = v143;
            }
            else
            {
              v64 = &v223;
              v214 = &v223;
              if ( (_WORD)v220 )
              {
                if ( (LdrpDebugFlags & 5) != 0 )
                {
                  v65 = "SxS";
                  if ( !v141 )
                    v65 = "API set";
                  v140 = v65;
                  v139 = &v220;
                  v138 = &v223;
                  LdrpLogDbgPrint(
                    (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                    2598,
                    (unsigned int)"LdrpPreprocessDllName",
                    2,
                    (__int64)"DLL %wZ was redirected to %wZ by %s\n");
                }
                v66 = v143 | 0x200;
                v143 |= 0x200u;
                if ( v141 )
                {
                  v66 |= 4u;
                  v143 = v66;
                }
                v64 = (int *)&v220;
                v214 = (int *)&v220;
              }
              else
              {
                v67 = (char *)Src + (unsigned __int16)v223;
                v206 = v67;
                do
                {
                  v206 = --v67;
                  if ( v67 < Src )
                  {
                    v66 = v143 | 0x20;
                    v143 |= 0x20u;
                    appended = LdrpAppendUnicodeStringToFilenameBuffer(
                                 (unsigned __int16 *)&v220,
                                 (unsigned __int16 *)&v223);
                    goto LABEL_178;
                  }
                }
                while ( *v67 != 92 && *v67 != 47 );
                if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(&v223) == 5 )
                {
                  appended = LdrpAppendUnicodeStringToFilenameBuffer(
                               (unsigned __int16 *)&v220,
                               (unsigned __int16 *)&v223);
                  v66 = v143;
LABEL_178:
                  v151 = appended;
                  FullPath = appended;
                  goto LABEL_179;
                }
                FullPath = LdrpGetFullPath((__int64)&v223, (__int64)&v220);
                v151 = FullPath;
                v66 = v143;
                if ( FullPath >= 0 )
                {
                  v66 = v143 | 0x600;
                  v143 |= 0x600u;
                }
              }
LABEL_179:
              if ( FullPath < 0 )
              {
LABEL_193:
                if ( (LdrpDebugFlags & 3) != 0 )
                {
                  LODWORD(v139) = FullPath;
                  v138 = &v223;
                  LdrpLogDbgPrint(
                    (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                    2653,
                    (unsigned int)"LdrpPreprocessDllName",
                    0,
                    (__int64)"LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n");
                }
                if ( (LdrpDebugFlags & 0x10) != 0 )
                  __debugbreak();
LABEL_197:
                v147 = FullPath;
                if ( FullPath < 0 )
                {
LABEL_354:
                  v7 = v161;
                  goto LABEL_355;
                }
                if ( !*(_QWORD *)v182 )
                {
                  v198 = NtdllBaseTag + 2621440;
                  Heap = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 2621440), 32LL);
                  *(_QWORD *)v182 = Heap;
                  if ( !Heap )
                  {
                    FullPath = -1073741801;
                    v147 = -1073741801;
                    goto LABEL_354;
                  }
                }
                v74 = v161[4];
                v75 = v66;
                v76 = v161[2];
                v77 = v158;
                *v158 = 0LL;
                if ( (v66 & 0x20) != 0 )
                {
                  FullPath = LdrpFindLoadedDllByName((unsigned int)&v220, 0, v66, (_DWORD)v77, 0LL);
                  v152 = FullPath;
                  goto LABEL_262;
                }
                if ( (v66 & 0x200) == 0 )
                {
                  v152 = -1073741515;
                  goto LABEL_280;
                }
                v78 = (unsigned __int16 *)((char *)v221 + (unsigned __int16)v220);
                v176 = v78;
                while ( 1 )
                {
                  v176 = --v78;
                  if ( v78 <= v221 )
                    break;
                  if ( *v78 == 92 || *v78 == 47 )
                  {
                    v176 = ++v78;
                    break;
                  }
                }
                v185 = v78;
                v184[0] = (_WORD)v220 - ((_WORD)v78 - (_WORD)v221);
                v184[1] = WORD1(v220) - ((_WORD)v78 - (_WORD)v221);
                v79 = 0;
                v172 = 0;
                v216 = v78;
                v153 = 0;
                v80 = (unsigned __int64)v184[0] >> 1;
                v171 = v80;
                while ( 1 )
                {
                  v81 = v80;
                  LODWORD(v80) = v80 - 1;
                  v171 = v80;
                  if ( !v81 )
                    break;
                  v82 = *v78++;
                  v216 = v78;
                  if ( v82 >= 0x61u )
                  {
                    if ( v82 > 0x7Au )
                      v83 = (unsigned __int16)(v82
                                             + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                        + 2LL
                                                        * ((v82 & 0xF)
                                                         + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                             + 2LL
                                                                                             * (((v82 >> 4) & 0xF)
                                                                                              + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v82 >> 8)))))));
                    else
                      v83 = v82 - 32;
                  }
                  else
                  {
                    v83 = v82;
                  }
                  v79 = v83 + 65599 * v79;
                  v172 = v79;
                }
                v153 = v79;
                v84 = v79;
                RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                v87 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v84 & 0x1F));
                v88 = 0;
                v145 = 0;
                for ( i = *v87; ; i = (_QWORD *)*i )
                {
                  if ( i == v87 )
                  {
                    v77 = v158;
                    goto LABEL_236;
                  }
                  v90 = (volatile signed __int32 *)(i - 14);
                  if ( v84 == *((_DWORD *)i + 38) && ((v75 & 8) == 0 || (v90[26] & 1) != 0) )
                  {
                    if ( v136 == (_BYTE *)-768LL )
                    {
                      v88 = 0;
                      if ( (v90[26] & 0x10000000) == 0 )
                      {
                        LOBYTE(v85) = 1;
                        if ( (unsigned __int8)RtlEqualUnicodeString(v184, v90 + 22, v85, v86) )
                          v88 = 1;
                      }
                      v145 = v88;
                    }
                    else
                    {
                      LOBYTE(v85) = 1;
                      v88 = RtlEqualUnicodeString(&v220, v90 + 18, v85, v86);
                      v145 = v88;
                    }
                    if ( v88 )
                      break;
                  }
                }
                v91 = *((_QWORD *)v90 + 19);
                if ( *(_DWORD *)(v91 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v91 - 56LL) & 0x20) == 0 )
                  _InterlockedIncrement(v90 + 69);
                v77 = v158;
                *v158 = (__int64)v90;
LABEL_236:
                FullPath = -1073741515;
                if ( v88 )
                  FullPath = 0;
                v92 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
                if ( v92 != 1 )
                {
                  do
                  {
                    if ( (v92 & 4) != 0 || (v92 & 2) == 0 )
                      v93 = -1LL;
                    else
                      v93 = 3LL;
                    v94 = v93 + v92;
                    v95 = v92;
                    v92 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v93 + v92, v92);
                  }
                  while ( v95 != v92 );
                  if ( v93 == 3 )
                    RtlpWakeSRWLock(&LdrpModuleDatatableLock, v94, 0LL);
                }
                v96 = 3;
                if ( v136 == (_BYTE *)-768LL )
                {
                  if ( FullPath >= 0 )
                    v96 = 0;
                  v178 = v96;
                  if ( !MEMORY[0x7FFE0384]
                    || (NtCurrentPeb()->TracingFlags & 4) == 0
                    || (MEMORY[0x7FFE0385] & 0x20) == 0 )
                  {
                    goto LABEL_261;
                  }
                  v137 = (const void **)v184;
                  v97 = (unsigned __int8)v178;
                }
                else
                {
                  if ( FullPath >= 0 )
                    v96 = 0;
                  v173 = v96;
                  if ( !MEMORY[0x7FFE0384]
                    || (NtCurrentPeb()->TracingFlags & 4) == 0
                    || (MEMORY[0x7FFE0385] & 0x20) == 0 )
                  {
                    goto LABEL_261;
                  }
                  v137 = &v220;
                  v97 = (unsigned __int8)v173;
                }
                LdrpLogEtwEvent(5280, 0, 0, v97, (__int64)v137);
LABEL_261:
                v152 = FullPath;
                LOWORD(v66) = v143;
LABEL_262:
                if ( FullPath != -1073741515 )
                {
                  v98 = *v77;
                  v175 = 0;
                  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                  v99 = *(_QWORD *)(v98 + 152);
                  v100 = *(_DWORD *)(v99 + 24);
                  if ( v100 != -1 )
                  {
                    if ( v100 )
                    {
                      *(_DWORD *)(v99 + 24) = v100 + 1;
                    }
                    else
                    {
                      v218 = NtCurrentTeb();
                      if ( (v218->SameTebFlags & 0x1000) != 0 )
                        ++*(_DWORD *)(v99 + 28);
                      else
                        v175 = -1073741515;
                    }
                  }
                  v101 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
                  if ( v101 != 1 )
                  {
                    do
                    {
                      if ( (v101 & 4) != 0 || (v101 & 2) == 0 )
                        v102 = -1LL;
                      else
                        v102 = 3LL;
                      v103 = v102 + v101;
                      v104 = v101;
                      v101 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v102 + v101, v101);
                    }
                    while ( v104 != v101 );
                    if ( v102 == 3 )
                      RtlpWakeSRWLock(&LdrpModuleDatatableLock, v103, 0LL);
                  }
                  LOWORD(v66) = v143;
                  goto LABEL_282;
                }
LABEL_280:
                FullPath = LdrpAllocatePlaceHolder(&v220, v76, v75, v179, v165, v77, v74);
                v152 = FullPath;
                if ( FullPath >= 0 )
                {
                  FullPath = LdrpLoadKnownDll(*(_BYTE **)(*v77 + 176));
                  v152 = FullPath;
                }
LABEL_282:
                v147 = FullPath;
                if ( !*v77 )
                  goto LABEL_354;
                v105 = v66 & 0x400;
                if ( v105 && FullPath == -1073741515 )
                {
                  LdrpProcessWork(*(_QWORD *)(*v77 + 176), 1);
                  FullPath = **(_DWORD **)(*(_QWORD *)(*v77 + 176) + 32LL);
                  v147 = FullPath;
                }
                RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                v106 = *v77;
                v107 = v106;
                v210 = *v77;
                if ( v106 )
                {
                  v108 = *(_QWORD *)(v106 + 176);
                  if ( v108 )
                  {
                    if ( (*(_DWORD *)(v108 + 24) & 0x80000) == 0 && *(_QWORD *)(v108 + 48) != v106 )
                    {
                      v107 = *(_QWORD *)(v108 + 48);
                      v210 = v107;
                      *(_QWORD *)(v108 + 48) = v106;
                    }
                  }
                }
                v201 = v107;
                v109 = (__int64 *)v182;
                *(_DWORD *)(*(_QWORD *)v182 + 24LL) &= ~1u;
                v110 = *v109;
                v183 = *v109;
                v7 = v161;
                v111 = *(_QWORD *)(v107 + 152);
                v112 = *(_QWORD *)(v161[6] + 152LL);
                if ( v112 != v111
                  && (*(_DWORD *)(v111 + 56) != 9
                   || *(_DWORD *)(v111 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v111 - 56LL) & 0x20) == 0) )
                {
                  v113 = *(_QWORD **)(v112 + 40);
                  if ( !v113 )
                  {
LABEL_299:
                    if ( !v110 )
                    {
                      v209 = NtdllBaseTag + 2359296;
                      v115 = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 2359296), 32LL);
                      v110 = v115;
                      v183 = v115;
                      if ( !v115 )
                      {
                        MEMORY[0] = -1073741801;
                        v110 = 0LL;
                        goto LABEL_314;
                      }
                      *(_DWORD *)(v115 + 24) |= 1u;
                    }
                    v116 = *(__int64 **)(v112 + 40);
                    if ( v116 )
                    {
                      *(_QWORD *)v110 = *v116;
                      *v116 = v110;
                    }
                    else
                    {
                      *(_QWORD *)v110 = v110;
                    }
                    *(_QWORD *)(v112 + 40) = v110;
                    *(_QWORD *)(v110 + 8) = v111;
                    v117 = (_QWORD *)(v110 + 16);
                    v118 = *(_QWORD **)(v111 + 48);
                    if ( v118 )
                    {
                      *v117 = *v118;
                      *v118 = v117;
                    }
                    else
                    {
                      *v117 = v117;
                    }
                    *(_QWORD *)(v111 + 48) = v117;
                    v60 = (*(_DWORD *)(v110 + 24) & 1) == 0;
                    v119 = *(_DWORD *)(v110 + 24) & 1;
                    *(_QWORD *)(v110 + 24) = v112;
                    if ( !v60 )
                    {
                      *(_DWORD *)(v110 + 24) &= ~1u;
                      *(_DWORD *)(v110 + 24) |= v119 & 1;
                    }
                    v110 = 0LL;
                    v183 = 0LL;
LABEL_314:
                    v199 = v110;
                    *v109 = v110;
                    if ( FullPath != -1073741515 || v105 )
                    {
                      if ( FullPath < 0 )
                      {
LABEL_324:
                        v122 = *(_QWORD *)(v107 + 152);
                        if ( *(_DWORD *)(v122 + 24) != -1
                          && (*(_BYTE *)(*(_QWORD *)v122 - 56LL) & 0x20) == 0
                          && _InterlockedExchangeAdd((volatile signed __int32 *)(v107 + 276), 0xFFFFFFFF) == 1 )
                        {
                          RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                          v123 = *(_QWORD *)(v107 + 160);
                          v124 = *(_QWORD **)(v107 + 168);
                          if ( *(_QWORD *)(v123 + 8) != v107 + 160 || *v124 != v107 + 160 )
                            __fastfail(3u);
                          *v124 = v123;
                          *(_QWORD *)(v123 + 8) = v124;
                          v125 = *(_QWORD **)(v107 + 152);
                          v126 = *v125 == (_QWORD)v125;
                          RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
                          if ( *(_WORD *)(v107 + 110) )
                            LdrpReleaseTlsEntry(v107, 0LL);
                          if ( (*(_DWORD *)(v107 + 104) & 0x200) != 0 )
                            RtlRemoveInvertedFunctionTable(*(_QWORD *)(v107 + 48));
                          v127 = *(_QWORD *)(v107 + 48);
                          if ( v127 )
                            NtUnmapViewOfSection(-1LL, v127);
                          v128 = *(volatile signed __int32 **)(v107 + 136);
                          if ( (unsigned __int64)v128 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
                            RtlReleaseActivationContext(v128);
                          if ( *(_QWORD *)(v107 + 80) )
                            LdrpFreeUnicodeString(v107 + 72);
                          RtlFreeHeap(LdrpHeap, 0LL, v107);
                          if ( v126 )
                            LdrpDestroyNode(v125);
                        }
                        v129 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
                        if ( v129 != 1 )
                        {
                          do
                          {
                            if ( (v129 & 4) != 0 || (v129 & 2) == 0 )
                              v130 = -1LL;
                            else
                              v130 = 3LL;
                            v131 = v130 + v129;
                            v132 = v129;
                            v129 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v130 + v129, v129);
                          }
                          while ( v132 != v129 );
                          if ( v130 == 3 )
                            RtlpWakeSRWLock(&LdrpModuleDatatableLock, v131, 0LL);
                        }
                        v133 = v158;
                        v134 = v201;
                        if ( v201 != *v158 )
                        {
                          LdrpFreeReplacedModule();
                          *v133 = v134;
                        }
                        FullPath = v147;
LABEL_355:
                        RtlDeactivateActivationContextUnsafeFast(&v189);
                        v9 = v158;
                        if ( FullPath >= 0 )
                          goto LABEL_357;
                        goto LABEL_356;
                      }
                    }
                    else
                    {
                      LdrpQueueWork(*(_QWORD *)(v107 + 176));
                      v147 = 0;
                    }
                    v121 = *((_DWORD *)v7 + 23);
                    if ( v121 )
                    {
                      if ( *v109 || *(int *)(*(_QWORD *)(v107 + 152) + 56LL) >= 2 )
                        *((_DWORD *)v7 + 23) = v121 - 1;
                    }
                    else if ( *(int *)(*(_QWORD *)(v107 + 152) + 56LL) < 2 )
                    {
                      v7[9] = v107;
                      *((_DWORD *)v7 + 23) = 1;
                      *(_DWORD *)(*(_QWORD *)(v7[6] + 152LL) + 56LL) = 3;
                      v147 = 259;
                    }
                    goto LABEL_324;
                  }
                  v114 = *(_QWORD **)(v112 + 40);
                  while ( 1 )
                  {
                    v114 = (_QWORD *)*v114;
                    if ( v114[1] == v111 )
                      break;
                    if ( v114 == v113 )
                      goto LABEL_299;
                  }
                }
                v120 = *(_DWORD *)(v111 + 24);
                if ( (unsigned int)(v120 - 2) <= 0xFFFFFFFC )
                  *(_DWORD *)(v111 + 24) = v120 - 1;
                goto LABEL_314;
              }
              v69 = *((_QWORD *)v64 + 1);
              v70 = (_WORD *)(v69 + *(unsigned __int16 *)v64);
              v212 = v70;
              v146 = 0;
              while ( 1 )
              {
                v212 = --v70;
                if ( (unsigned __int64)v70 < v69 )
                {
LABEL_186:
                  FullPath = LdrpAppendUnicodeStringToFilenameBuffer((unsigned __int16 *)&v220, L"\b\n");
                  v151 = FullPath;
                  goto LABEL_192;
                }
                v71 = *v70;
                if ( *v70 == 46 )
                  break;
                if ( v71 == 47 || v71 == 92 )
                  goto LABEL_186;
              }
              v146 = 1;
              v72 = (char *)v221 + (unsigned __int16)v220;
              v208 = v72;
              while ( 1 )
              {
                v208 = --v72;
                if ( v72 < v221 || *v72 != 46 )
                  break;
                LOWORD(v220) = (_WORD)v220 - 2;
              }
              v72[1] = 0;
            }
LABEL_192:
            if ( FullPath >= 0 )
              goto LABEL_197;
            goto LABEL_193;
          }
          v63 = RtlDosApplyFileIsolationRedirection_Ustr(
                  1,
                  (_DWORD)v62,
                  (unsigned int)L"\b\n",
                  0,
                  (__int64)v217,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
          if ( v63 >= 0 )
          {
            v141 = 1;
            LdrpGetFullPath((__int64)v217, (__int64)&v220);
            LdrpFreeUnicodeString((__int64)v217);
          }
          if ( v63 != -1072365560 )
            FullPath = v63;
LABEL_159:
          v150 = FullPath;
          goto LABEL_160;
        }
        v24 = (unsigned __int16 *)Src;
        v25 = (unsigned __int16)v223;
        v26 = (char *)Src + (unsigned __int16)v223;
        v211 = v26;
        v177 = (unsigned __int16)v223;
        do
        {
          if ( v25 <= 1 )
            break;
          v25 -= 2;
          v177 = v25;
          v211 = --v26;
        }
        while ( *v26 != 45 );
        v27 = (unsigned __int16)v25 >> 1;
        if ( !v27 )
        {
LABEL_81:
          v20 = v154;
          goto LABEL_82;
        }
        v28 = 0;
        v29 = 0;
        v167 = 0;
        v30 = (unsigned __int16 *)Src;
        v213 = (unsigned __int16 *)Src;
        while ( v29 < v27 )
        {
          v155 = *v30;
          v31 = v155;
          if ( (unsigned __int16)(v155 - 65) <= 0x19u )
          {
            v31 = v155 + 32;
            v155 += 32;
          }
          v28 = v31 + v28 * ApiSetMap[6];
          v167 = ++v29;
          v213 = ++v30;
        }
        v32 = 0LL;
        v33 = 0;
        v166 = 0;
        v34 = ApiSetMap[3] - 1;
        v169 = v34;
        while ( v33 <= v34 )
        {
          v35 = (v34 + v33) >> 1;
          v36 = (_DWORD *)((char *)&ApiSetMap[2 * v35] + (unsigned int)ApiSetMap[5]);
          if ( v28 >= *v36 )
          {
            if ( v28 <= *v36 )
            {
              v32 = (_DWORD *)((char *)&ApiSetMap[6 * v36[1]] + (unsigned int)ApiSetMap[4]);
              break;
            }
            v33 = v35 + 1;
            v166 = v35 + 1;
          }
          else
          {
            v34 = v35 - 1;
            v169 = v35 - 1;
          }
        }
        if ( v32 )
        {
          v37 = (unsigned __int16 *)((char *)ApiSetMap + v32[1]);
          v38 = v32[3] >> 1;
          v215 = (unsigned __int16 *)Src;
          v204 = v37;
          v39 = v27;
          v40 = v38;
          if ( v27 <= (unsigned __int64)(unsigned int)v38 )
            v38 = v27;
          while ( v24 < (unsigned __int16 *)((char *)Src + 2 * v38) )
          {
            v41 = *v24;
            v174 = v41;
            v42 = *v37;
            v180 = v42;
            if ( v41 != v42 )
            {
              if ( v41 >= 0x61 )
              {
                if ( v41 > 0x7A )
                  v41 = (unsigned __int16)(v41
                                         + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                    + 2LL
                                                    * ((v41 & 0xF)
                                                     + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                           + 2LL
                                                                           * (((unsigned __int8)v41 >> 4)
                                                                            + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v41)))))));
                else
                  v41 -= 32;
              }
              v174 = v41;
              if ( v42 >= 0x61 )
              {
                if ( v42 > 0x7A )
                  v42 = (unsigned __int16)(v42
                                         + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                    + 2LL
                                                    * ((v42 & 0xF)
                                                     + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                           + 2LL
                                                                           * (((unsigned __int8)v42 >> 4)
                                                                            + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v42)))))));
                else
                  v42 -= 32;
              }
              v180 = v42;
              if ( v41 != v42 )
              {
                v43 = v41 - v42;
                goto LABEL_73;
              }
            }
            v215 = ++v24;
            v204 = ++v37;
          }
          v43 = v39 - v40;
LABEL_73:
          if ( !v43 )
          {
            if ( v164 && v32[5] > 1 )
            {
              v44 = ApiSetpSearchForApiSetHost(
                      (__int64)v32,
                      *(_QWORD *)(v164 + 8),
                      *(_WORD *)v164 >> 1,
                      (__int64)ApiSetMap);
LABEL_79:
              v163 = (char *)ApiSetMap + *(unsigned int *)(v44 + 12);
              WORD1(v162) = *(_WORD *)(v44 + 16);
              LOWORD(v162) = WORD1(v162);
              v22 = 1;
              v144 = 1;
              goto LABEL_81;
            }
            if ( v32[5] )
            {
              v44 = (__int64)ApiSetMap + v32[4];
              goto LABEL_79;
            }
          }
        }
        v22 = v144;
        goto LABEL_81;
      }
    }
    v191 = ActiveFrame;
    v192 = v16;
    LODWORD(v193) = 32;
    if ( ActiveFrame )
    {
      if ( *(_QWORD *)(ActiveFrame + 8) != v16 )
      {
LABEL_32:
        v19 = &v191;
        ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v191;
        goto LABEL_33;
      }
    }
    else if ( v16 )
    {
      goto LABEL_32;
    }
    LODWORD(v193) = 48;
    goto LABEL_33;
  }
LABEL_356:
  *v9 = 0LL;
  *(_DWORD *)v7[4] = FullPath;
LABEL_357:
  if ( v225 != Src )
    NtdllpFreeStringRoutine(Src, a2, a3, v6);
  Src = v225;
  v223 = 0x1000000;
  v225[0] = 0;
  if ( v222 != v221 )
    NtdllpFreeStringRoutine(v221, a2, a3, v6);
  return (unsigned int)FullPath;
}

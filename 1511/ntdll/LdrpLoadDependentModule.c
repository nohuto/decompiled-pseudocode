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
        PVOID *a5,
        __int64 a6)
{
  __int64 v6; // r9
  _QWORD *v7; // r13
  PVOID *v9; // r12
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
  PUNICODE_STRING v20; // rsi
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
  _UNICODE_STRING *p_String1; // rdx
  NTSTATUS v63; // ebx
  _UNICODE_STRING *v64; // rbx
  char *v65; // rax
  int v66; // esi
  _WORD *v67; // rax
  int appended; // eax
  unsigned __int16 *Buffer; // rdx
  unsigned __int16 *v70; // rax
  unsigned __int16 v71; // cx
  unsigned __int16 *v72; // rcx
  PVOID Heap; // rax
  __int64 v74; // r12
  int v75; // r15d
  __int64 v76; // r13
  char **v77; // r14
  unsigned __int16 *v78; // r8
  int v79; // r10d
  unsigned __int64 v80; // r11
  int v81; // eax
  unsigned __int16 v82; // r9
  int v83; // eax
  int v84; // r14d
  _QWORD **v85; // rsi
  char v86; // cl
  _QWORD *i; // rdi
  _QWORD *v88; // rbx
  __int64 v89; // rax
  signed __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rdx
  signed __int64 v93; // rtt
  int v94; // eax
  int v95; // r9d
  char *v96; // rbx
  __int64 v97; // rdx
  int v98; // eax
  signed __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rdx
  signed __int64 v102; // rtt
  int v103; // esi
  char *v104; // rax
  char *v105; // rbx
  __int64 v106; // rcx
  _QWORD *v107; // r12
  _DWORD *v108; // rcx
  __int64 v109; // r14
  __int64 v110; // r15
  _QWORD *v111; // rdx
  _QWORD *v112; // rax
  _DWORD *v113; // rax
  _QWORD *v114; // rdx
  _QWORD *v115; // rdx
  _QWORD *v116; // r8
  int v117; // eax
  int v118; // edx
  int v119; // ecx
  __int64 v120; // rax
  __int64 v121; // rdx
  char **v122; // rcx
  _QWORD *v123; // rdi
  bool v124; // si
  void *v125; // rdx
  _ACTIVATION_CONTEXT *v126; // rcx
  signed __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rdx
  signed __int64 v130; // rtt
  PVOID *v131; // r14
  char *v132; // rbx
  _BYTE v134[32]; // [rsp+0h] [rbp-568h] BYREF
  PUNICODE_STRING DynamicString; // [rsp+20h] [rbp-548h]
  PUNICODE_STRING *NewName; // [rsp+28h] [rbp-540h]
  PULONG NewFlags; // [rsp+30h] [rbp-538h]
  PSIZE_T FileNameSize; // [rsp+38h] [rbp-530h]
  char v139; // [rsp+50h] [rbp-518h]
  char v140; // [rsp+51h] [rbp-517h]
  int v141; // [rsp+54h] [rbp-514h]
  char v142; // [rsp+58h] [rbp-510h]
  char v143; // [rsp+59h] [rbp-50Fh]
  char v144; // [rsp+5Ah] [rbp-50Eh]
  int v145; // [rsp+5Ch] [rbp-50Ch]
  char v146; // [rsp+60h] [rbp-508h]
  unsigned int v147; // [rsp+68h] [rbp-500h]
  int v148; // [rsp+70h] [rbp-4F8h]
  int v149; // [rsp+74h] [rbp-4F4h]
  int v150; // [rsp+78h] [rbp-4F0h]
  int v151; // [rsp+7Ch] [rbp-4ECh]
  PUNICODE_STRING OriginalName; // [rsp+80h] [rbp-4E8h]
  unsigned __int16 v153; // [rsp+88h] [rbp-4E0h]
  int v154; // [rsp+8Ch] [rbp-4DCh]
  int v155; // [rsp+90h] [rbp-4D8h]
  PVOID *v156; // [rsp+98h] [rbp-4D0h]
  int v157; // [rsp+A0h] [rbp-4C8h]
  unsigned int v158; // [rsp+A8h] [rbp-4C0h]
  _QWORD *v159; // [rsp+B0h] [rbp-4B8h]
  __int64 v160; // [rsp+B8h] [rbp-4B0h]
  void *v161; // [rsp+C0h] [rbp-4A8h]
  __int64 v162; // [rsp+C8h] [rbp-4A0h]
  __int64 v163; // [rsp+D0h] [rbp-498h]
  int v164; // [rsp+D8h] [rbp-490h]
  unsigned int v165; // [rsp+DCh] [rbp-48Ch]
  int v166; // [rsp+E0h] [rbp-488h]
  int v167; // [rsp+E4h] [rbp-484h]
  int v168; // [rsp+E8h] [rbp-480h]
  int v169; // [rsp+ECh] [rbp-47Ch]
  int v170; // [rsp+F0h] [rbp-478h]
  int v171; // [rsp+F4h] [rbp-474h]
  unsigned int v172; // [rsp+F8h] [rbp-470h]
  int v173; // [rsp+FCh] [rbp-46Ch]
  unsigned __int16 *v174; // [rsp+100h] [rbp-468h]
  unsigned int v175; // [rsp+108h] [rbp-460h]
  int v176; // [rsp+10Ch] [rbp-45Ch]
  int v177; // [rsp+110h] [rbp-458h]
  unsigned int v178; // [rsp+114h] [rbp-454h]
  int v179; // [rsp+118h] [rbp-450h]
  __int64 v180; // [rsp+120h] [rbp-448h]
  _DWORD *v181; // [rsp+128h] [rbp-440h]
  _UNICODE_STRING v182; // [rsp+130h] [rbp-438h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+140h] [rbp-428h] BYREF
  int v184; // [rsp+150h] [rbp-418h]
  __int64 v185; // [rsp+158h] [rbp-410h]
  __int64 v186; // [rsp+160h] [rbp-408h] BYREF
  int v187; // [rsp+168h] [rbp-400h]
  unsigned __int64 v188; // [rsp+170h] [rbp-3F8h] BYREF
  __int64 v189; // [rsp+178h] [rbp-3F0h]
  __int64 v190; // [rsp+180h] [rbp-3E8h]
  unsigned __int64 v191; // [rsp+188h] [rbp-3E0h]
  __int64 v192; // [rsp+190h] [rbp-3D8h]
  void *v193; // [rsp+198h] [rbp-3D0h]
  __int64 v194; // [rsp+1A0h] [rbp-3C8h]
  ULONG v195; // [rsp+1B0h] [rbp-3B8h]
  _DWORD *v196; // [rsp+1B8h] [rbp-3B0h]
  unsigned __int64 v197; // [rsp+1C0h] [rbp-3A8h]
  char *v198; // [rsp+1C8h] [rbp-3A0h]
  void *v199; // [rsp+1D0h] [rbp-398h]
  void *v200; // [rsp+1D8h] [rbp-390h]
  unsigned __int16 *v201; // [rsp+1E0h] [rbp-388h]
  void *v202; // [rsp+1E8h] [rbp-380h]
  _WORD *v203; // [rsp+1F0h] [rbp-378h]
  struct _PEB *v204; // [rsp+1F8h] [rbp-370h]
  unsigned __int16 *v205; // [rsp+200h] [rbp-368h]
  ULONG v206; // [rsp+208h] [rbp-360h]
  char *v207; // [rsp+210h] [rbp-358h]
  _WORD *v208; // [rsp+218h] [rbp-350h]
  unsigned __int16 *v209; // [rsp+220h] [rbp-348h]
  unsigned __int16 *v210; // [rsp+228h] [rbp-340h]
  _UNICODE_STRING *v211; // [rsp+230h] [rbp-338h]
  unsigned __int16 *v212; // [rsp+238h] [rbp-330h]
  unsigned __int16 *v213; // [rsp+240h] [rbp-328h]
  _UNICODE_STRING v214; // [rsp+248h] [rbp-320h] BYREF
  struct _TEB *v215; // [rsp+258h] [rbp-310h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+260h] [rbp-308h] BYREF
  _UNICODE_STRING String1; // [rsp+300h] [rbp-268h] BYREF
  _WORD v218[128]; // [rsp+310h] [rbp-258h] BYREF
  int v219; // [rsp+410h] [rbp-158h] BYREF
  void *Src; // [rsp+418h] [rbp-150h]
  _WORD v221[128]; // [rsp+420h] [rbp-148h] BYREF
  void *retaddr; // [rsp+568h] [rbp+0h]

  v177 = a4;
  v6 = a3;
  v163 = a3;
  v7 = a2;
  v159 = a2;
  v9 = a5;
  v156 = a5;
  v180 = a6;
  String1.Buffer = v218;
  *(_DWORD *)&String1.Length = 0x1000000;
  v218[0] = 0;
  Src = v221;
  v10 = 0;
  v219 = 0x1000000;
  LOWORD(v11) = 256;
  v221[0] = 0;
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
        v10 = v219;
        if ( StringRoutine && (_WORD)v219 )
        {
          memmove(StringRoutine, Src, (unsigned __int16)v219);
          v10 = v219;
        }
        if ( v15 )
        {
          Src = v15;
          HIWORD(v219) = v11;
        }
        else
        {
          FullPath = -1073741801;
          LOWORD(v11) = HIWORD(v219);
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
      LOWORD(v219) = DestinationString.Length + v219;
    }
    v6 = v163;
  }
  if ( FullPath >= 0 )
  {
    v186 = 72LL;
    v187 = 1;
    v188 = 0LL;
    v189 = 0LL;
    v190 = 0LL;
    v191 = 0LL;
    v192 = 0LL;
    v193 = 0LL;
    v194 = 0LL;
    v16 = *(_QWORD *)(v6 + 136);
    ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
    if ( ActivationContextStackPointer )
      ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
    else
      ActiveFrame = 0LL;
    v191 = ~ActiveFrame;
    v192 = ~v16;
    LODWORD(v19) = (_DWORD)retaddr;
    v193 = retaddr;
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
        v6 = v163;
LABEL_33:
        v141 = 0;
        v149 = 0;
        v20 = (PUNICODE_STRING)&v219;
        OriginalName = (PUNICODE_STRING)&v219;
        v204 = NtCurrentPeb();
        v139 = 0;
        LOBYTE(v19) = 1;
        v147 = (unsigned int)v19;
        v146 = 1;
        v162 = v6 + 88;
        ApiSetMap = v204->ApiSetMap;
        if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
          LdrpLogEtwEvent(5328, 0, 0, 0, (__int64)&v219);
        v160 = 0LL;
        v161 = 0LL;
        FullPath = 0;
        v22 = 0;
        v142 = 0;
        if ( (unsigned __int16)v219 < 8u
          || (v23 = *(_QWORD *)Src & 0xFFFFFFDFFFDFFFDFuLL, v23 != 0x2D004900500041LL) && v23 != 0x2D005400580045LL )
        {
LABEL_82:
          v45 = v22;
          v140 = v22;
          if ( v22 )
          {
            if ( (_WORD)v160 )
            {
              if ( MEMORY[0x7FFE0384] )
              {
                if ( (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
                  LdrpLogEtwEvent(5329, 0, 0, 0, (__int64)v20);
                v45 = v140;
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
          v148 = 0;
          if ( !v45 )
            goto LABEL_151;
          if ( !(_WORD)v160 )
          {
            FullPath = -1073740671;
            goto LABEL_159;
          }
          v184 = 0;
          v185 = 2147352624LL;
          v47 = -1LL;
          do
            ++v47;
          while ( *(_WORD *)(2 * v47 + 0x7FFE0030) );
          v48 = 2 * v47;
          v197 = v48;
          if ( v48 >= 0xFFFE )
            v48 = 65532LL;
          v197 = v48;
          LOWORD(v184) = v48;
          HIWORD(v184) = v48 + 2;
          FullPath = 0;
          v166 = 0;
          if ( (_WORD)v48 )
          {
            v49 = (unsigned __int16)v48 + String1.Length + 2;
            v158 = v49;
            v157 = 0;
            if ( v49 > String1.MaximumLength )
            {
              if ( v49 <= 0xFFFE )
              {
                v50 = (v49 + 63) & 0xFFFFFFC0;
                v158 = v50;
                if ( v50 > 0xFFFE )
                  v50 = 65534;
                v158 = v50;
                if ( String1.Buffer == v218 )
                {
                  v51 = (void *)NtdllpAllocateStringRoutine(v50);
                  v200 = v51;
                  if ( v51 && String1.Length )
                    memmove(v51, String1.Buffer, String1.Length);
                }
                else
                {
                  v51 = (void *)NtdllpReallocateStringRoutine(v50);
                  v200 = v51;
                }
                if ( v51 )
                {
                  String1.Buffer = (unsigned __int16 *)v51;
                  String1.MaximumLength = v50;
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
            v166 = FullPath;
            if ( FullPath >= 0 )
            {
              memmove((char *)String1.Buffer + String1.Length, (const void *)0x7FFE0030, (unsigned __int16)v48);
              String1.Length += v48;
              String1.Buffer[(unsigned __int64)String1.Length >> 1] = 0;
            }
          }
          v148 = FullPath;
          if ( FullPath < 0 )
            goto LABEL_151;
          v179 = 0;
          v52 = String1.Length + 22;
          LODWORD(v162) = v52;
          FullPath = 0;
          v154 = 0;
          if ( v52 > String1.MaximumLength )
          {
            if ( v52 <= 0xFFFE )
            {
              v53 = (String1.Length + 85) & 0xFFFFFFC0;
              LODWORD(v162) = v53;
              if ( v53 > 0xFFFE )
                v53 = 65534;
              LODWORD(v162) = v53;
              if ( String1.Buffer == v218 )
              {
                v54 = (void *)NtdllpAllocateStringRoutine(v53);
                v199 = v54;
                if ( v54 && String1.Length )
                  memmove(v54, String1.Buffer, String1.Length);
              }
              else
              {
                v54 = (void *)NtdllpReallocateStringRoutine(v53);
                v199 = v54;
              }
              if ( v54 )
              {
                String1.Buffer = (unsigned __int16 *)v54;
                String1.MaximumLength = v53;
              }
              else
              {
                FullPath = -1073741801;
                v154 = -1073741801;
              }
            }
            else
            {
              FullPath = -1073741562;
              v154 = -1073741562;
            }
          }
          v179 = FullPath;
          if ( FullPath >= 0 )
          {
            v55 = (char *)String1.Buffer + String1.Length;
            *(_OWORD *)v55 = *(_OWORD *)SlashSystem32SlashString.Buffer;
            *((_DWORD *)v55 + 4) = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
            String1.Length += 20;
            String1.Buffer[(unsigned __int64)String1.Length >> 1] = 0;
          }
          v148 = FullPath;
          if ( FullPath >= 0 )
          {
            v168 = 0;
            v56 = (unsigned __int16)v160 + String1.Length + 2;
            v147 = v56;
            FullPath = 0;
            v155 = 0;
            if ( v56 > String1.MaximumLength )
            {
              if ( v56 <= 0xFFFE )
              {
                v57 = (v56 + 63) & 0xFFFFFFC0;
                v147 = v57;
                if ( v57 > 0xFFFE )
                  v57 = 65534;
                v147 = v57;
                if ( String1.Buffer == v218 )
                {
                  v58 = (void *)NtdllpAllocateStringRoutine(v57);
                  v202 = v58;
                  if ( v58 && String1.Length )
                    memmove(v58, String1.Buffer, String1.Length);
                }
                else
                {
                  v58 = (void *)NtdllpReallocateStringRoutine(v57);
                  v202 = v58;
                }
                if ( v58 )
                {
                  String1.Buffer = (unsigned __int16 *)v58;
                  String1.MaximumLength = v57;
                }
                else
                {
                  FullPath = -1073741801;
                  v155 = -1073741801;
                }
              }
              else
              {
                FullPath = -1073741562;
                v155 = -1073741562;
              }
            }
            v168 = FullPath;
            if ( FullPath >= 0 )
            {
              memmove((char *)String1.Buffer + String1.Length, v161, (unsigned __int16)v160);
              String1.Length += v160;
              String1.Buffer[(unsigned __int64)String1.Length >> 1] = 0;
            }
            v148 = FullPath;
            ProcessParameters = v204->ProcessParameters;
            if ( !ProcessParameters || (v60 = (ProcessParameters->Flags & 0x1000) == 0, v61 = 1, v60) )
              v61 = 0;
            v146 = v61;
            p_String1 = &String1;
            OriginalName = &String1;
          }
          else
          {
LABEL_151:
            p_String1 = OriginalName;
            v61 = v147;
          }
          if ( FullPath < 0 || !v61 || LdrpIsSecureProcess )
          {
LABEL_160:
            v149 = FullPath;
            if ( FullPath < 0 )
            {
              v66 = v141;
            }
            else
            {
              v64 = (_UNICODE_STRING *)&v219;
              v211 = (_UNICODE_STRING *)&v219;
              if ( String1.Length )
              {
                if ( (LdrpDebugFlags & 5) != 0 )
                {
                  v65 = "SxS";
                  if ( !v139 )
                    v65 = "API set";
                  FileNameSize = (PSIZE_T)v65;
                  NewFlags = (PULONG)&String1;
                  NewName = (PUNICODE_STRING *)&v219;
                  LdrpLogDbgPrint(
                    (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                    2598,
                    (unsigned int)"LdrpPreprocessDllName",
                    2,
                    (__int64)"DLL %wZ was redirected to %wZ by %s\n");
                }
                v66 = v141 | 0x200;
                v141 |= 0x200u;
                if ( v139 )
                {
                  v66 |= 4u;
                  v141 = v66;
                }
                v64 = &String1;
                v211 = &String1;
              }
              else
              {
                v67 = (char *)Src + (unsigned __int16)v219;
                v203 = v67;
                do
                {
                  v203 = --v67;
                  if ( v67 < Src )
                  {
                    v66 = v141 | 0x20;
                    v141 |= 0x20u;
                    appended = LdrpAppendUnicodeStringToFilenameBuffer(&String1.Length, (unsigned __int16 *)&v219);
                    goto LABEL_178;
                  }
                }
                while ( *v67 != 92 && *v67 != 47 );
                if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(&v219) == 5 )
                {
                  appended = LdrpAppendUnicodeStringToFilenameBuffer(&String1.Length, (unsigned __int16 *)&v219);
                  v66 = v141;
LABEL_178:
                  v149 = appended;
                  FullPath = appended;
                  goto LABEL_179;
                }
                FullPath = LdrpGetFullPath((__int64)&v219, (__int64)&String1);
                v149 = FullPath;
                v66 = v141;
                if ( FullPath >= 0 )
                {
                  v66 = v141 | 0x600;
                  v141 |= 0x600u;
                }
              }
LABEL_179:
              if ( FullPath < 0 )
              {
LABEL_193:
                if ( (LdrpDebugFlags & 3) != 0 )
                {
                  LODWORD(NewFlags) = FullPath;
                  NewName = (PUNICODE_STRING *)&v219;
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
                v145 = FullPath;
                if ( FullPath < 0 )
                {
LABEL_354:
                  v7 = v159;
                  goto LABEL_355;
                }
                if ( !*(_QWORD *)v180 )
                {
                  v195 = NtdllBaseTag + 2621440;
                  Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2621440, 0x20uLL);
                  *(_QWORD *)v180 = Heap;
                  if ( !Heap )
                  {
                    FullPath = -1073741801;
                    v145 = -1073741801;
                    goto LABEL_354;
                  }
                }
                v74 = v159[4];
                v75 = v66;
                v76 = v159[2];
                v77 = (char **)v156;
                *v156 = 0LL;
                if ( (v66 & 0x20) != 0 )
                {
                  FullPath = LdrpFindLoadedDllByName(&String1, 0LL, 0LL);
                  v150 = FullPath;
                  goto LABEL_262;
                }
                if ( (v66 & 0x200) == 0 )
                {
                  v150 = -1073741515;
                  goto LABEL_280;
                }
                v78 = (unsigned __int16 *)((char *)String1.Buffer + String1.Length);
                v174 = v78;
                while ( 1 )
                {
                  v174 = --v78;
                  if ( v78 <= String1.Buffer )
                    break;
                  if ( *v78 == 92 || *v78 == 47 )
                  {
                    v174 = ++v78;
                    break;
                  }
                }
                v182.Buffer = v78;
                v182.Length = String1.Length - ((_WORD)v78 - LOWORD(String1.Buffer));
                v182.MaximumLength = String1.MaximumLength - ((_WORD)v78 - LOWORD(String1.Buffer));
                v79 = 0;
                v170 = 0;
                v213 = v78;
                v151 = 0;
                v80 = (unsigned __int64)v182.Length >> 1;
                v169 = v80;
                while ( 1 )
                {
                  v81 = v80;
                  LODWORD(v80) = v80 - 1;
                  v169 = v80;
                  if ( !v81 )
                    break;
                  v82 = *v78++;
                  v213 = v78;
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
                  v170 = v79;
                }
                v151 = v79;
                v84 = v79;
                RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                v85 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v84 & 0x1F));
                v86 = 0;
                v143 = 0;
                for ( i = *v85; ; i = (_QWORD *)*i )
                {
                  if ( i == v85 )
                  {
                    v77 = (char **)v156;
                    goto LABEL_236;
                  }
                  v88 = i - 14;
                  if ( v84 == *((_DWORD *)i + 38) && ((v75 & 8) == 0 || (v88[13] & 1) != 0) )
                  {
                    if ( v134 == (_BYTE *)-768LL )
                    {
                      v86 = (v88[13] & 0x10000000) == 0 && RtlEqualUnicodeString(&v182, (PUNICODE_STRING)(v88 + 11), 1u);
                      v143 = v86;
                    }
                    else
                    {
                      v86 = RtlEqualUnicodeString(&String1, (PUNICODE_STRING)(v88 + 9), 1u);
                      v143 = v86;
                    }
                    if ( v86 )
                      break;
                  }
                }
                v89 = v88[19];
                if ( *(_DWORD *)(v89 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v89 - 56LL) & 0x20) == 0 )
                  _InterlockedIncrement((volatile signed __int32 *)v88 + 69);
                v77 = (char **)v156;
                *v156 = v88;
LABEL_236:
                FullPath = -1073741515;
                if ( v86 )
                  FullPath = 0;
                v90 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
                if ( v90 != 1 )
                {
                  do
                  {
                    if ( (v90 & 4) != 0 || (v90 & 2) == 0 )
                      v91 = -1LL;
                    else
                      v91 = 3LL;
                    v92 = v91 + v90;
                    v93 = v90;
                    v90 = _InterlockedCompareExchange64(
                            (volatile signed __int64 *)&LdrpModuleDatatableLock,
                            v91 + v90,
                            v90);
                  }
                  while ( v93 != v90 );
                  if ( v91 == 3 )
                    RtlpWakeSRWLock(&LdrpModuleDatatableLock, v92, 0LL);
                }
                v94 = 3;
                if ( v134 == (_BYTE *)-768LL )
                {
                  if ( FullPath >= 0 )
                    v94 = 0;
                  v176 = v94;
                  if ( !MEMORY[0x7FFE0384]
                    || (NtCurrentPeb()->TracingFlags & 4) == 0
                    || (MEMORY[0x7FFE0385] & 0x20) == 0 )
                  {
                    goto LABEL_261;
                  }
                  DynamicString = &v182;
                  v95 = (unsigned __int8)v176;
                }
                else
                {
                  if ( FullPath >= 0 )
                    v94 = 0;
                  v171 = v94;
                  if ( !MEMORY[0x7FFE0384]
                    || (NtCurrentPeb()->TracingFlags & 4) == 0
                    || (MEMORY[0x7FFE0385] & 0x20) == 0 )
                  {
                    goto LABEL_261;
                  }
                  DynamicString = &String1;
                  v95 = (unsigned __int8)v171;
                }
                LdrpLogEtwEvent(5280, 0, 0, v95, (__int64)DynamicString);
LABEL_261:
                v150 = FullPath;
                LOWORD(v66) = v141;
LABEL_262:
                if ( FullPath != -1073741515 )
                {
                  v96 = *v77;
                  v173 = 0;
                  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                  v97 = *((_QWORD *)v96 + 19);
                  v98 = *(_DWORD *)(v97 + 24);
                  if ( v98 != -1 )
                  {
                    if ( v98 )
                    {
                      *(_DWORD *)(v97 + 24) = v98 + 1;
                    }
                    else
                    {
                      v215 = NtCurrentTeb();
                      if ( (v215->SameTebFlags & 0x1000) != 0 )
                        ++*(_DWORD *)(v97 + 28);
                      else
                        v173 = -1073741515;
                    }
                  }
                  v99 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
                  if ( v99 != 1 )
                  {
                    do
                    {
                      if ( (v99 & 4) != 0 || (v99 & 2) == 0 )
                        v100 = -1LL;
                      else
                        v100 = 3LL;
                      v101 = v100 + v99;
                      v102 = v99;
                      v99 = _InterlockedCompareExchange64(
                              (volatile signed __int64 *)&LdrpModuleDatatableLock,
                              v100 + v99,
                              v99);
                    }
                    while ( v102 != v99 );
                    if ( v100 == 3 )
                      RtlpWakeSRWLock(&LdrpModuleDatatableLock, v101, 0LL);
                  }
                  LOWORD(v66) = v141;
                  goto LABEL_282;
                }
LABEL_280:
                FullPath = LdrpAllocatePlaceHolder((const void **)&String1, v76, v75, v177, v163, v77, v74);
                v150 = FullPath;
                if ( FullPath >= 0 )
                {
                  FullPath = LdrpLoadKnownDll(*((UNICODE_STRING **)*v77 + 22));
                  v150 = FullPath;
                }
LABEL_282:
                v145 = FullPath;
                if ( !*v77 )
                  goto LABEL_354;
                v103 = v66 & 0x400;
                if ( v103 && FullPath == -1073741515 )
                {
                  LdrpProcessWork(*((_QWORD *)*v77 + 22), 1);
                  FullPath = **(_DWORD **)(*((_QWORD *)*v77 + 22) + 32LL);
                  v145 = FullPath;
                }
                RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                v104 = *v77;
                v105 = v104;
                v207 = *v77;
                if ( v104 )
                {
                  v106 = *((_QWORD *)v104 + 22);
                  if ( v106 )
                  {
                    if ( (*(_DWORD *)(v106 + 24) & 0x80000) == 0 && *(char **)(v106 + 48) != v104 )
                    {
                      v105 = *(char **)(v106 + 48);
                      v207 = v105;
                      *(_QWORD *)(v106 + 48) = v104;
                    }
                  }
                }
                v198 = v105;
                v107 = (_QWORD *)v180;
                *(_DWORD *)(*(_QWORD *)v180 + 24LL) &= ~1u;
                v108 = (_DWORD *)*v107;
                v181 = (_DWORD *)*v107;
                v7 = v159;
                v109 = *((_QWORD *)v105 + 19);
                v110 = *(_QWORD *)(v159[6] + 152LL);
                if ( v110 != v109
                  && (*(_DWORD *)(v109 + 56) != 9
                   || *(_DWORD *)(v109 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v109 - 56LL) & 0x20) == 0) )
                {
                  v111 = *(_QWORD **)(v110 + 40);
                  if ( !v111 )
                  {
LABEL_299:
                    if ( !v108 )
                    {
                      v206 = NtdllBaseTag + 2359296;
                      v113 = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 0x20uLL);
                      v108 = v113;
                      v181 = v113;
                      if ( !v113 )
                      {
                        MEMORY[0] = -1073741801;
                        v108 = 0LL;
                        goto LABEL_314;
                      }
                      v113[6] |= 1u;
                    }
                    v114 = *(_QWORD **)(v110 + 40);
                    if ( v114 )
                    {
                      *(_QWORD *)v108 = *v114;
                      *v114 = v108;
                    }
                    else
                    {
                      *(_QWORD *)v108 = v108;
                    }
                    *(_QWORD *)(v110 + 40) = v108;
                    *((_QWORD *)v108 + 1) = v109;
                    v115 = v108 + 4;
                    v116 = *(_QWORD **)(v109 + 48);
                    if ( v116 )
                    {
                      *v115 = *v116;
                      *v116 = v115;
                    }
                    else
                    {
                      *v115 = v115;
                    }
                    *(_QWORD *)(v109 + 48) = v115;
                    v60 = (v108[6] & 1) == 0;
                    v117 = v108[6] & 1;
                    *((_QWORD *)v108 + 3) = v110;
                    if ( !v60 )
                    {
                      v108[6] &= ~1u;
                      v108[6] |= v117 & 1;
                    }
                    v108 = 0LL;
                    v181 = 0LL;
LABEL_314:
                    v196 = v108;
                    *v107 = v108;
                    if ( FullPath != -1073741515 || v103 )
                    {
                      if ( FullPath < 0 )
                      {
LABEL_324:
                        v120 = *((_QWORD *)v105 + 19);
                        if ( *(_DWORD *)(v120 + 24) != -1
                          && (*(_BYTE *)(*(_QWORD *)v120 - 56LL) & 0x20) == 0
                          && _InterlockedExchangeAdd((volatile signed __int32 *)v105 + 69, 0xFFFFFFFF) == 1 )
                        {
                          RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                          v121 = *((_QWORD *)v105 + 20);
                          v122 = (char **)*((_QWORD *)v105 + 21);
                          if ( *(char **)(v121 + 8) != v105 + 160 || *v122 != v105 + 160 )
                            __fastfail(3u);
                          *v122 = (char *)v121;
                          *(_QWORD *)(v121 + 8) = v122;
                          v123 = (_QWORD *)*((_QWORD *)v105 + 19);
                          v124 = *v123 == (_QWORD)v123;
                          RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
                          if ( *((_WORD *)v105 + 55) )
                            LdrpReleaseTlsEntry(v105, 0LL);
                          if ( (*((_DWORD *)v105 + 26) & 0x200) != 0 )
                            RtlRemoveInvertedFunctionTable(*((_QWORD *)v105 + 6));
                          v125 = (void *)*((_QWORD *)v105 + 6);
                          if ( v125 )
                            NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v125);
                          v126 = (_ACTIVATION_CONTEXT *)*((_QWORD *)v105 + 17);
                          if ( (unsigned __int64)&v126[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
                            RtlReleaseActivationContext(v126);
                          if ( *((_QWORD *)v105 + 10) )
                            LdrpFreeUnicodeString((__int64)(v105 + 72));
                          RtlFreeHeap(LdrpHeap, 0, v105);
                          if ( v124 )
                            LdrpDestroyNode(v123);
                        }
                        v127 = _InterlockedCompareExchange64(
                                 (volatile signed __int64 *)&LdrpModuleDatatableLock,
                                 0LL,
                                 1LL);
                        if ( v127 != 1 )
                        {
                          do
                          {
                            if ( (v127 & 4) != 0 || (v127 & 2) == 0 )
                              v128 = -1LL;
                            else
                              v128 = 3LL;
                            v129 = v128 + v127;
                            v130 = v127;
                            v127 = _InterlockedCompareExchange64(
                                     (volatile signed __int64 *)&LdrpModuleDatatableLock,
                                     v128 + v127,
                                     v127);
                          }
                          while ( v130 != v127 );
                          if ( v128 == 3 )
                            RtlpWakeSRWLock(&LdrpModuleDatatableLock, v129, 0LL);
                        }
                        v131 = v156;
                        v132 = v198;
                        if ( v198 != *v156 )
                        {
                          LdrpFreeReplacedModule(*v156);
                          *v131 = v132;
                        }
                        FullPath = v145;
LABEL_355:
                        RtlDeactivateActivationContextUnsafeFast(&v186);
                        v9 = v156;
                        if ( FullPath >= 0 )
                          goto LABEL_357;
                        goto LABEL_356;
                      }
                    }
                    else
                    {
                      LdrpQueueWork(*((_QWORD *)v105 + 22));
                      v145 = 0;
                    }
                    v119 = *((_DWORD *)v7 + 23);
                    if ( v119 )
                    {
                      if ( *v107 || *(int *)(*((_QWORD *)v105 + 19) + 56LL) >= 2 )
                        *((_DWORD *)v7 + 23) = v119 - 1;
                    }
                    else if ( *(int *)(*((_QWORD *)v105 + 19) + 56LL) < 2 )
                    {
                      v7[9] = v105;
                      *((_DWORD *)v7 + 23) = 1;
                      *(_DWORD *)(*(_QWORD *)(v7[6] + 152LL) + 56LL) = 3;
                      v145 = 259;
                    }
                    goto LABEL_324;
                  }
                  v112 = *(_QWORD **)(v110 + 40);
                  while ( 1 )
                  {
                    v112 = (_QWORD *)*v112;
                    if ( v112[1] == v109 )
                      break;
                    if ( v112 == v111 )
                      goto LABEL_299;
                  }
                }
                v118 = *(_DWORD *)(v109 + 24);
                if ( (unsigned int)(v118 - 2) <= 0xFFFFFFFC )
                  *(_DWORD *)(v109 + 24) = v118 - 1;
                goto LABEL_314;
              }
              Buffer = v64->Buffer;
              v70 = (unsigned __int16 *)((char *)Buffer + v64->Length);
              v209 = v70;
              v144 = 0;
              while ( 1 )
              {
                v209 = --v70;
                if ( v70 < Buffer )
                {
LABEL_186:
                  FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&String1.Length, &LdrpDefaultExtension.Length);
                  v149 = FullPath;
                  goto LABEL_192;
                }
                v71 = *v70;
                if ( *v70 == 46 )
                  break;
                if ( v71 == 47 || v71 == 92 )
                  goto LABEL_186;
              }
              v144 = 1;
              v72 = (unsigned __int16 *)((char *)String1.Buffer + String1.Length);
              v205 = v72;
              while ( 1 )
              {
                v205 = --v72;
                if ( v72 < String1.Buffer || *v72 != 46 )
                  break;
                String1.Length -= 2;
              }
              v72[1] = 0;
            }
LABEL_192:
            if ( FullPath >= 0 )
              goto LABEL_197;
            goto LABEL_193;
          }
          v63 = RtlDosApplyFileIsolationRedirection_Ustr(
                  1u,
                  p_String1,
                  (PUNICODE_STRING)&LdrpDefaultExtension,
                  0LL,
                  &v214,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
          if ( v63 >= 0 )
          {
            v139 = 1;
            LdrpGetFullPath((__int64)&v214, (__int64)&String1);
            LdrpFreeUnicodeString((__int64)&v214);
          }
          if ( v63 != -1072365560 )
            FullPath = v63;
LABEL_159:
          v148 = FullPath;
          goto LABEL_160;
        }
        v24 = (unsigned __int16 *)Src;
        v25 = (unsigned __int16)v219;
        v26 = (char *)Src + (unsigned __int16)v219;
        v208 = v26;
        v175 = (unsigned __int16)v219;
        do
        {
          if ( v25 <= 1 )
            break;
          v25 -= 2;
          v175 = v25;
          v208 = --v26;
        }
        while ( *v26 != 45 );
        v27 = (unsigned __int16)v25 >> 1;
        if ( !v27 )
        {
LABEL_81:
          v20 = OriginalName;
          goto LABEL_82;
        }
        v28 = 0;
        v29 = 0;
        v165 = 0;
        v30 = (unsigned __int16 *)Src;
        v210 = (unsigned __int16 *)Src;
        while ( v29 < v27 )
        {
          v153 = *v30;
          v31 = v153;
          if ( (unsigned __int16)(v153 - 65) <= 0x19u )
          {
            v31 = v153 + 32;
            v153 += 32;
          }
          v28 = v31 + v28 * ApiSetMap[6];
          v165 = ++v29;
          v210 = ++v30;
        }
        v32 = 0LL;
        v33 = 0;
        v164 = 0;
        v34 = ApiSetMap[3] - 1;
        v167 = v34;
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
            v164 = v35 + 1;
          }
          else
          {
            v34 = v35 - 1;
            v167 = v35 - 1;
          }
        }
        if ( v32 )
        {
          v37 = (unsigned __int16 *)((char *)ApiSetMap + v32[1]);
          v38 = v32[3] >> 1;
          v212 = (unsigned __int16 *)Src;
          v201 = v37;
          v39 = v27;
          v40 = v38;
          if ( v27 <= (unsigned __int64)(unsigned int)v38 )
            v38 = v27;
          while ( v24 < (unsigned __int16 *)((char *)Src + 2 * v38) )
          {
            v41 = *v24;
            v172 = v41;
            v42 = *v37;
            v178 = v42;
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
              v172 = v41;
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
              v178 = v42;
              if ( v41 != v42 )
              {
                v43 = v41 - v42;
                goto LABEL_73;
              }
            }
            v212 = ++v24;
            v201 = ++v37;
          }
          v43 = v39 - v40;
LABEL_73:
          if ( !v43 )
          {
            if ( v162 && v32[5] > 1 )
            {
              v44 = ApiSetpSearchForApiSetHost(
                      (__int64)v32,
                      *(const WCHAR **)(v162 + 8),
                      *(_WORD *)v162 >> 1,
                      (__int64)ApiSetMap);
LABEL_79:
              v161 = (char *)ApiSetMap + *(unsigned int *)(v44 + 12);
              WORD1(v160) = *(_WORD *)(v44 + 16);
              LOWORD(v160) = WORD1(v160);
              v22 = 1;
              v142 = 1;
              goto LABEL_81;
            }
            if ( v32[5] )
            {
              v44 = (__int64)ApiSetMap + v32[4];
              goto LABEL_79;
            }
          }
        }
        v22 = v142;
        goto LABEL_81;
      }
    }
    v188 = ActiveFrame;
    v189 = v16;
    LODWORD(v190) = 32;
    if ( ActiveFrame )
    {
      if ( *(_QWORD *)(ActiveFrame + 8) != v16 )
      {
LABEL_32:
        v19 = &v188;
        ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v188;
        goto LABEL_33;
      }
    }
    else if ( v16 )
    {
      goto LABEL_32;
    }
    LODWORD(v190) = 48;
    goto LABEL_33;
  }
LABEL_356:
  *v9 = 0LL;
  *(_DWORD *)v7[4] = FullPath;
LABEL_357:
  if ( v221 != Src )
    NtdllpFreeStringRoutine(Src, a2, a3, v6);
  Src = v221;
  v219 = 0x1000000;
  v221[0] = 0;
  if ( v218 != String1.Buffer )
    NtdllpFreeStringRoutine(String1.Buffer, a2, a3, v6);
  return (unsigned int)FullPath;
}

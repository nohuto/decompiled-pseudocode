/*
 * XREFs of ParseTerm @ 0x1C0015B30
 * Callers:
 *     <none>
 * Callees:
 *     FreeData @ 0x1C00036A4 (FreeData.c)
 *     NewGlobalHeap @ 0x1C00059D0 (NewGlobalHeap.c)
 *     PerformMutexDriverCallbacks @ 0x1C0007554 (PerformMutexDriverCallbacks.c)
 *     ParseString @ 0x1C001373C (ParseString.c)
 *     RtlStringCchCopyA @ 0x1C00137F8 (RtlStringCchCopyA.c)
 *     ParseIntObj @ 0x1C0014BB0 (ParseIntObj.c)
 *     ReadField @ 0x1C0015220 (ReadField.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0017B60 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0017D40 (ParseSuperName.c)
 *     PushTerm @ 0x1C0018668 (PushTerm.c)
 *     HeapInsertFreeList @ 0x1C0019890 (HeapInsertFreeList.c)
 *     PushCall @ 0x1C0019B5C (PushCall.c)
 *     FreeNameSpaceObjects @ 0x1C0019DC0 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     HeapFree @ 0x1C001B8A0 (HeapFree.c)
 *     NewLocalHeap @ 0x1C002039C (NewLocalHeap.c)
 *     FindOpcodeTerm @ 0x1C00207B4 (FindOpcodeTerm.c)
 *     ParseNameTail @ 0x1C00234A0 (ParseNameTail.c)
 *     IsCompatableDSDTRevision @ 0x1C002563C (IsCompatableDSDTRevision.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     ParseInteger @ 0x1C00283B8 (ParseInteger.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     AMLIDebugger @ 0x1C005A948 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 *     PrintIndent @ 0x1C005B420 (PrintIndent.c)
 *     PrintObject @ 0x1C005B45C (PrintObject.c)
 *     GetObjectTypeName @ 0x1C005C1C8 (GetObjectTypeName.c)
 */

__int64 __fastcall ParseTerm(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  __int64 v4; // r9
  __int64 v5; // rdi
  unsigned __int64 v6; // r8
  __int64 v7; // r15
  int v8; // r11d
  int v9; // eax
  unsigned int v10; // r12d
  const void **v11; // r10
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r14
  int v16; // ebx
  const void **v17; // rax
  __int64 v18; // rdx
  unsigned __int8 *v19; // rsi
  __int64 OpcodeTerm; // r13
  int v21; // eax
  __int64 v22; // rbx
  char v23; // al
  int v24; // r14d
  unsigned int v25; // esi
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // r8
  char v29; // al
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  size_t v34; // rbx
  _BYTE *PoolWithTag; // rsi
  KIRQL v36; // bl
  __int64 m; // r12
  __int64 n; // rsi
  __int16 v39; // ax
  __int64 (__fastcall *v40)(__int64, __int64, unsigned __int64, __int64); // rax
  __int64 v41; // r10
  __int64 (__fastcall *v42)(__int64, __int64, _QWORD, __int64, _DWORD, __int64); // r11
  __int64 v43; // rbx
  unsigned int v44; // r14d
  unsigned int v45; // esi
  __int64 *v46; // rbx
  __int64 v47; // rbx
  __int64 v48; // r9
  _QWORD *v49; // rax
  _QWORD *j; // r8
  __int64 *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r10
  _QWORD *v54; // rax
  __int64 v55; // r10
  _QWORD *v56; // rbx
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 *v61; // rbx
  __int64 v62; // r9
  __int64 *v63; // rax
  __int64 *k; // r8
  __int64 **v65; // rcx
  __int64 *v66; // rdx
  __int64 v67; // r10
  __int64 *v68; // rax
  __int64 *v69; // r10
  _QWORD *v70; // rbx
  __int64 v71; // rcx
  _QWORD *v72; // rax
  unsigned __int64 *v74; // rbx
  unsigned __int8 *v75; // rax
  unsigned int v76; // r8d
  unsigned __int8 *v77; // r9
  unsigned __int8 v78; // dl
  unsigned __int64 v79; // rax
  __int64 v80; // r14
  __int64 v81; // r15
  __int64 v82; // rbx
  __int64 v83; // rsi
  _QWORD *v84; // rcx
  __int64 v85; // r12
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // r15
  unsigned int v89; // eax
  __int64 v90; // rbx
  __int64 v91; // r13
  unsigned int v92; // ecx
  unsigned int v93; // r14d
  __int64 v94; // rsi
  _QWORD *v95; // rcx
  void *v96; // rcx
  __int64 v97; // r15
  __int64 v98; // r9
  _QWORD *v99; // rax
  _QWORD *i; // r8
  __int64 *v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // r10
  __int64 v104; // rcx
  _QWORD *v105; // rax
  __int64 v106; // r10
  __int64 v107; // rdx
  __int64 v108; // rax
  __int64 v109; // rbx
  char v110; // al
  int v111; // esi
  unsigned int v112; // r14d
  __int64 v113; // rdx
  __int64 v114; // r9
  __int64 v115; // r8
  char v116; // al
  __int64 v117; // rax
  unsigned int v118; // eax
  __int64 v119; // rsi
  __int64 v120; // r14
  unsigned int v121; // ecx
  unsigned int v122; // r15d
  __int64 v123; // rbx
  _QWORD *v124; // rcx
  __int64 v125; // rdx
  _QWORD *v126; // rcx
  void *v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // rcx
  int v130; // ecx
  _QWORD *v131; // r10
  __int64 v132; // rcx
  _QWORD *v133; // rax
  __int64 v134; // rcx
  int v135; // ecx
  _QWORD *v136; // r10
  __int64 v137; // rcx
  _QWORD *v138; // rax
  __int64 v139; // r15
  __int64 v140; // rbx
  __int64 v141; // r13
  __int64 v142; // r14
  _QWORD *v143; // rcx
  __int64 v144; // rbx
  __int64 v145; // rcx
  unsigned __int8 *v146; // rdx
  unsigned int v147; // eax
  __int64 v148; // rcx
  unsigned __int8 v149; // r10
  int v150; // eax
  int v151; // ecx
  __int64 v152; // rdx
  __int64 v153; // rbx
  __int64 v154; // rdx
  __int64 v155; // r8
  __int64 v156; // rdx
  _QWORD *v157; // r15
  __int64 v158; // rcx
  _QWORD *v159; // rax
  __int64 v160; // rdx
  _QWORD *v161; // rcx
  int v162; // eax
  __int64 v163; // rdx
  _QWORD *v164; // rcx
  __int64 v165; // rdx
  unsigned int v166; // eax
  __int64 v167; // rdx
  unsigned int v168; // eax
  int v169; // ecx
  _QWORD *v170; // r10
  __int64 v171; // rcx
  _QWORD *v172; // rax
  __int64 v173; // rdx
  _QWORD *v174; // rcx
  int v175; // eax
  int v176; // eax
  _QWORD *v177; // rdx
  int v178; // eax
  _BYTE **v179; // r9
  char *v180; // rdx
  unsigned int v181; // ecx
  _BYTE *v182; // rax
  __int64 v183; // rax
  __int64 v184; // rcx
  _QWORD *v185; // rcx
  _QWORD *v186; // rax
  int v187; // eax
  char *v188; // rdx
  _BYTE *v189; // rcx
  __int64 v190; // rax
  int v191; // eax
  __int64 (__fastcall *v192)(__int64, __int64, _QWORD, __int64, _DWORD, __int64); // rax
  unsigned int v193; // eax
  __int64 v194; // rcx
  __int64 v195; // rcx
  int ObjectTypeName; // eax
  _QWORD *v197; // rcx
  _QWORD *v198; // rax
  __int64 *v199; // rcx
  __int64 **v200; // rax
  unsigned int NameSpaceObjectNoLock; // [rsp+40h] [rbp-C0h]
  int Field; // [rsp+40h] [rbp-C0h]
  char *v204; // [rsp+48h] [rbp-B8h]
  __int64 v205; // [rsp+50h] [rbp-B0h]
  __int64 v206; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v207; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v208; // [rsp+68h] [rbp-98h]
  __int64 v209; // [rsp+70h] [rbp-90h] BYREF
  __int64 v210; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v211; // [rsp+80h] [rbp-80h]
  unsigned __int8 *v212; // [rsp+88h] [rbp-78h]
  __int64 v213; // [rsp+90h] [rbp-70h]
  char pszDest; // [rsp+A0h] [rbp-60h] BYREF
  char v215; // [rsp+A1h] [rbp-5Fh] BYREF
  char Src; // [rsp+1A0h] [rbp+A0h] BYREF
  char v217; // [rsp+1A1h] [rbp+A1h] BYREF
  _BYTE P[128]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v3 = 0LL;
  v204 = (char *)a1;
  v4 = -1LL;
  v5 = a2;
  v6 = 0x1C0000000uLL;
  v7 = a1;
  v8 = 2;
  if ( a3 )
  {
    v9 = 5;
  }
  else
  {
    a1 = *(unsigned int *)(a2 + 16);
    v9 = *(_DWORD *)(a2 + 16) & 0xF;
    if ( !v9 )
    {
      *(_DWORD *)(a2 + 16) = a1 + 1;
      if ( (gDebugger & 0xD0) != 0 )
      {
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) - 18) <= 1 )
        {
          ++dword_1C0074594;
          PrintIndent(v7);
        }
        ConPrintf("%s");
        if ( *(_DWORD *)(v5 + 76) )
          ConPrintf("(");
        v4 = -1LL;
        v6 = 0x1C0000000uLL;
        v8 = 2;
      }
      a1 = *(unsigned int *)(*(_QWORD *)(v5 + 56) + 28LL);
      if ( (a1 & 1) != 0 )
      {
        v74 = (unsigned __int64 *)(v5 + 40);
        if ( v5 != -40 )
          *v74 = *(_QWORD *)(v7 + 120);
        v75 = *(unsigned __int8 **)(v7 + 120);
        v76 = *v75;
        v77 = v75 + 1;
        *(_QWORD *)(v7 + 120) = v75 + 1;
        v78 = (v76 >> 6) & 3;
        if ( v78 )
        {
          v76 &= 0xFu;
          v149 = 0;
          do
          {
            v150 = *v77++;
            v151 = v149++;
            *(_QWORD *)(v7 + 120) = v77;
            a1 = (unsigned int)(8 * v151 + 4);
            v76 |= v150 << a1;
          }
          while ( v149 < v78 );
        }
        if ( v5 != -40 )
          *v74 += v76;
        if ( (gOverrideFlags & 4) == 0 )
        {
          v79 = *(_QWORD *)(v5 + 48);
          if ( v79 )
          {
            if ( *v74 > v79 )
            {
              LogError(3222536207LL);
              v10 = -1072431089;
              AcpiDiagTraceAmlError(v7, 3222536207LL);
              PrintDebugMessage(143, *v74, *(_QWORD *)(v5 + 48), 0, 0LL);
              return v10;
            }
          }
        }
        v4 = -1LL;
        v6 = 0x1C0000000uLL;
      }
      goto LABEL_5;
    }
  }
  v30 = v9 - 1;
  if ( v30 )
  {
    v31 = v30 - 1;
    if ( !v31 )
    {
      v10 = a3;
      goto LABEL_88;
    }
    v32 = v31 - 1;
    if ( !v32 )
    {
      v10 = a3;
      goto LABEL_89;
    }
    v33 = v32 - 1;
    if ( v33 )
    {
      if ( v33 != 1 )
        return a3;
      goto LABEL_43;
    }
    v10 = a3;
LABEL_93:
    ++*(_DWORD *)(v5 + 16);
    if ( (gDebugger & 0xD0) != 0 )
    {
      a2 = *(_QWORD *)(v5 + 56);
      if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 17) > 2 && *(_DWORD *)(a2 + 24) == 4 )
      {
        ConPrintf("=");
        PrintObject(*(_QWORD *)(v5 + 88));
      }
    }
    if ( (gDebugger & 0x40) != 0 )
    {
      _InterlockedAnd(&gDebugger, 0xFFFFFFBF);
      AMLIDebugger(a1, a2, v6, v4);
    }
    else
    {
      v41 = *(_QWORD *)(v5 + 56);
      v42 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(v41 + 32);
      if ( !v42 )
        goto LABEL_96;
      if ( *(int *)(v41 + 28) < 0 )
      {
        a3 = v42(12LL, 2LL, *(unsigned int *)(v41 + 8), *(_QWORD *)(v5 + 64) + 120LL, *(_DWORD *)(v41 + 40), v7);
        if ( a3 == 259 )
          return 32772;
LABEL_43:
        v10 = a3;
        goto LABEL_96;
      }
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(v41 + 32))(
        1LL,
        *(unsigned int *)(v41 + 8),
        *(_QWORD *)(v5 + 64) + 120LL,
        *(unsigned int *)(v41 + 40));
    }
LABEL_96:
    if ( (gDebugger & 0xD0) != 0 && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v5 + 56) + 8LL) - 18) <= 1 )
      --dword_1C0074594;
    v43 = *(_QWORD *)(v5 + 80);
    if ( v43 )
    {
      v44 = *(_DWORD *)(v5 + 76);
      v45 = 0;
      if ( v44 )
      {
        v46 = (__int64 *)(v43 + 32);
        do
        {
          if ( (*(_BYTE *)(v46 - 4) & 1) != 0 )
          {
            v145 = *(v46 - 3);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v145 + 8), 0xFFFFFFFF) == 1
              && (*(_BYTE *)v145 & 8) != 0 )
            {
              FreeData((_QWORD *)v145);
            }
          }
          else if ( *v46 )
          {
            if ( *((int *)v46 - 6) > 0 )
            {
              *((_WORD *)v46 - 16) |= 8u;
            }
            else
            {
              if ( *((_WORD *)v46 - 15) == 4 )
                FreeDataBuffs(*v46 + 8, *(unsigned int *)*v46);
              if ( *((_WORD *)v46 - 15) == 2 )
              {
                v97 = *v46 - 16;
                *(_DWORD *)v97 = 0;
                byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
                v98 = *(_QWORD *)(v97 + 8);
                v99 = *(_QWORD **)(v98 + 40);
                for ( i = (_QWORD *)(v98 + 40); v99 != i; v99 = (_QWORD *)*v99 )
                {
                  if ( v97 + 16 < (unsigned __int64)v99 )
                    break;
                }
                v101 = (__int64 *)v99[1];
                v102 = v97 + 16;
                if ( (_QWORD *)*v101 != v99 )
                  __fastfail(3u);
                *(_QWORD *)v102 = v99;
                *(_QWORD *)(v97 + 24) = v101;
                *v101 = v102;
                v99[1] = v102;
                v103 = *(_QWORD *)v102 - 16LL;
                if ( *(_QWORD **)v102 != i )
                {
                  v104 = *(unsigned int *)(v97 + 4);
                  if ( v103 == v97 + v104 )
                  {
                    v169 = *(_DWORD *)(v103 + 4) + v104;
                    v170 = *(_QWORD **)v102;
                    *(_DWORD *)(v97 + 4) = v169;
                    v171 = *v170;
                    v172 = (_QWORD *)v170[1];
                    if ( *(_QWORD **)(*v170 + 8LL) != v170 || (_QWORD *)*v172 != v170 )
                      __fastfail(3u);
                    *v172 = v171;
                    *(_QWORD *)(v171 + 8) = v172;
                  }
                }
                v105 = *(_QWORD **)(v97 + 24);
                v106 = (__int64)(v105 - 2);
                if ( v105 != i )
                {
                  v184 = *(unsigned int *)(v106 + 4);
                  if ( v97 == v106 + v184 )
                  {
                    *(_DWORD *)(v106 + 4) = *(_DWORD *)(v97 + 4) + v184;
                    v185 = *(_QWORD **)v102;
                    v186 = *(_QWORD **)(v97 + 24);
                    if ( *(_QWORD *)(*(_QWORD *)v102 + 8LL) != v102 || *v186 != v102 )
                      __fastfail(3u);
                    *v186 = v185;
                    v97 = v106;
                    v185[1] = v186;
                  }
                }
                if ( *(_QWORD *)(v98 + 32) <= v97 + (unsigned __int64)*(unsigned int *)(v97 + 4) )
                {
                  *(_QWORD *)(v98 + 32) = v97;
                  v157 = (_QWORD *)(v97 + 16);
                  v158 = *v157;
                  v159 = (_QWORD *)v157[1];
                  if ( *(_QWORD **)(*v157 + 8LL) != v157 || (_QWORD *)*v159 != v157 )
                    __fastfail(3u);
                  *v159 = v158;
                  *(_QWORD *)(v158 + 8) = v159;
                }
                KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
              }
              else
              {
                switch ( *((_WORD *)v46 - 15) )
                {
                  case 3:
                  case 4:
                  case 7:
                  case 8:
                  case 0xA:
                  case 0xB:
                  case 0xC:
                  case 0xE:
                    goto LABEL_331;
                  case 5:
                    v194 = *(_QWORD *)*v46;
                    if ( v194 )
                      goto LABEL_490;
                    goto LABEL_331;
                  case 9:
                    PerformMutexDriverCallbacks(1, *v46, 0LL, 0LL, 0);
                    HeapFree(*v46);
                    break;
                  case 0x82:
                    v195 = *(_QWORD *)*v46;
                    if ( v195 )
                      goto LABEL_494;
                    goto LABEL_495;
                  case 0x83:
                    v194 = *(_QWORD *)*v46;
                    if ( v194 )
                      goto LABEL_490;
                    goto LABEL_331;
                  case 0x84:
                    v195 = *(_QWORD *)*v46;
                    if ( v195 )
LABEL_494:
                      DereferenceObjectEx(v195, 0LL);
LABEL_495:
                    v194 = *(_QWORD *)(*v46 + 8);
                    if ( v194 )
LABEL_490:
                      DereferenceObjectEx(v194, 0LL);
LABEL_331:
                    HeapFree(*v46);
                    break;
                  default:
                    LogError(3222536195LL);
                    AcpiDiagTraceAmlError(0LL, 3222536195LL);
                    ObjectTypeName = GetObjectTypeName(*((unsigned __int16 *)v46 - 15));
                    PrintDebugMessage(54, ObjectTypeName, 0, 0, 0LL);
                    break;
                }
              }
            }
          }
          ++v45;
          *(v46 - 4) = 0LL;
          *(v46 - 3) = 0LL;
          *(v46 - 2) = 0LL;
          *(v46 - 1) = 0LL;
          *v46 = 0LL;
          v46 += 5;
        }
        while ( v45 < v44 );
        v7 = (__int64)v204;
      }
      v47 = *(_QWORD *)(v5 + 80) - 16LL;
      *(_DWORD *)v47 = 0;
      byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v48 = *(_QWORD *)(v47 + 8);
      v49 = *(_QWORD **)(v48 + 40);
      for ( j = (_QWORD *)(v48 + 40); v49 != j; v49 = (_QWORD *)*v49 )
      {
        if ( v47 + 16 < (unsigned __int64)v49 )
          break;
      }
      v51 = (__int64 *)v49[1];
      v52 = v47 + 16;
      if ( (_QWORD *)*v51 != v49 )
        __fastfail(3u);
      *(_QWORD *)v52 = v49;
      *(_QWORD *)(v47 + 24) = v51;
      *v51 = v52;
      v49[1] = v52;
      v53 = *(_QWORD *)v52 - 16LL;
      if ( *(_QWORD **)v52 != j )
      {
        v129 = *(unsigned int *)(v47 + 4);
        if ( v53 == v47 + v129 )
        {
          v130 = *(_DWORD *)(v53 + 4) + v129;
          v131 = *(_QWORD **)v52;
          *(_DWORD *)(v47 + 4) = v130;
          v132 = *v131;
          v133 = (_QWORD *)v131[1];
          if ( *(_QWORD **)(*v131 + 8LL) != v131 || (_QWORD *)*v133 != v131 )
            __fastfail(3u);
          *v133 = v132;
          *(_QWORD *)(v132 + 8) = v133;
        }
      }
      v54 = *(_QWORD **)(v47 + 24);
      v55 = (__int64)(v54 - 2);
      if ( v54 != j )
      {
        v128 = *(unsigned int *)(v55 + 4);
        if ( v47 == v55 + v128 )
        {
          *(_DWORD *)(v55 + 4) = *(_DWORD *)(v47 + 4) + v128;
          v197 = *(_QWORD **)v52;
          v198 = *(_QWORD **)(v47 + 24);
          if ( *(_QWORD *)(*(_QWORD *)v52 + 8LL) != v52 || *v198 != v52 )
            __fastfail(3u);
          *v198 = v197;
          v47 = v55;
          v197[1] = v198;
        }
      }
      if ( *(_QWORD *)(v48 + 32) <= v47 + (unsigned __int64)*(unsigned int *)(v47 + 4) )
      {
        *(_QWORD *)(v48 + 32) = v47;
        v56 = (_QWORD *)(v47 + 16);
        v57 = *v56;
        v58 = (_QWORD *)v56[1];
        if ( *(_QWORD **)(*v56 + 8LL) != v56 || (_QWORD *)*v58 != v56 )
          __fastfail(3u);
        *v58 = v57;
        *(_QWORD *)(v57 + 8) = v58;
      }
      KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
    }
    v59 = *(_QWORD *)(v5 + 64);
    if ( v59 )
    {
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v59 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v59 + 64) |= 4u;
        if ( (*(_WORD *)(v59 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects();
      }
      *(_QWORD *)(v5 + 64) = 0LL;
    }
    v60 = *(_QWORD *)(v7 + 416);
    v61 = (__int64 *)(v60 - 16);
    *(_QWORD *)(v7 + 416) = *(_QWORD *)(v60 + 8);
    *(_DWORD *)(v60 - 16) = 0;
    byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v62 = v61[1];
    v63 = *(__int64 **)(v62 + 40);
    for ( k = (__int64 *)(v62 + 40); v63 != k; v63 = (__int64 *)*v63 )
    {
      if ( v61 + 2 < v63 )
        break;
    }
    v65 = (__int64 **)v63[1];
    v66 = v61 + 2;
    if ( *v65 != v63 )
      __fastfail(3u);
    *v66 = (__int64)v63;
    v61[3] = (__int64)v65;
    *v65 = v66;
    v63[1] = (__int64)v66;
    v67 = *v66 - 16;
    if ( (__int64 *)*v66 != k )
    {
      v134 = *((unsigned int *)v61 + 1);
      if ( (__int64 *)v67 == (__int64 *)((char *)v61 + v134) )
      {
        v135 = *(_DWORD *)(v67 + 4) + v134;
        v136 = (_QWORD *)*v66;
        *((_DWORD *)v61 + 1) = v135;
        v137 = *v136;
        v138 = (_QWORD *)v136[1];
        if ( *(_QWORD **)(*v136 + 8LL) != v136 || (_QWORD *)*v138 != v136 )
          __fastfail(3u);
        *v138 = v137;
        *(_QWORD *)(v137 + 8) = v138;
      }
    }
    v68 = (__int64 *)v61[3];
    v69 = v68 - 2;
    if ( v68 != k )
    {
      v148 = *((unsigned int *)v69 + 1);
      if ( v61 == (__int64 *)((char *)v69 + v148) )
      {
        *((_DWORD *)v69 + 1) = *((_DWORD *)v61 + 1) + v148;
        v199 = (__int64 *)*v66;
        v200 = (__int64 **)v61[3];
        if ( *(__int64 **)(*v66 + 8) != v66 || *v200 != v66 )
          __fastfail(3u);
        *v200 = v199;
        v61 = v69;
        v199[1] = (__int64)v200;
      }
    }
    if ( *(_QWORD *)(v62 + 32) <= (unsigned __int64)v61 + *((unsigned int *)v61 + 1) )
    {
      *(_QWORD *)(v62 + 32) = v61;
      v70 = v61 + 2;
      v71 = *v70;
      v72 = (_QWORD *)v70[1];
      if ( *(_QWORD **)(*v70 + 8LL) != v70 || (_QWORD *)*v72 != v70 )
        __fastfail(3u);
      *v72 = v71;
      *(_QWORD *)(v71 + 8) = v72;
    }
    KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
    return v10;
  }
LABEL_5:
  v10 = a3;
  v11 = (const void **)(v7 + 120);
  v211 = (_QWORD *)(v7 + 120);
  while ( 1 )
  {
    if ( *(_DWORD *)(v5 + 72) < *(_DWORD *)(v5 + 76) )
    {
      while ( 1 )
      {
        v12 = *(unsigned int *)(v5 + 72);
        *(_DWORD *)(v5 + 72) = v12 + 1;
        if ( (gDebugger & 0xD0) != 0 && (_DWORD)v12 )
        {
          ConPrintf(",");
          v11 = (const void **)(v7 + 120);
          v8 = 2;
          v4 = -1LL;
          v6 = 0x1C0000000uLL;
        }
        v13 = *(_QWORD *)(v5 + 80);
        v14 = *(_QWORD *)(v5 + 48);
        v213 = v14;
        v15 = v13 + 40 * v12;
        v205 = v15;
        a1 = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 16LL);
        v16 = *(char *)(v12 + a1);
        if ( v16 != 67 )
          break;
        v17 = (const void **)&unk_1C00745D0;
        v18 = 0LL;
        a1 = 0LL;
        do
        {
          if ( *v11 == *v17 )
            break;
          v18 = (unsigned int)(v18 + 1);
          ++a1;
          v17 += 2;
        }
        while ( (__int64)v17 < (__int64)&::P );
        if ( (_DWORD)v18 != 10 )
        {
          a1 *= 2LL;
          if ( (dword_1C00745C8[2 * a1] & 1) != 0 && (_DWORD)v18 != -1 )
          {
            ConPrintf("\nHit Breakpoint %d.\n");
            ((void (*)(void))AMLIDebugger)();
            v11 = (const void **)(v7 + 120);
            v8 = 2;
            v4 = -1LL;
          }
        }
        v19 = (unsigned __int8 *)*v11;
        v212 = v19;
        if ( *v19 == 91 )
        {
          *v11 = v19 + 1;
          OpcodeTerm = FindOpcodeTerm(v19[1], v18, 0x1C0000000uLL, -1LL);
        }
        else
        {
          OpcodeTerm = (__int64)*(&OpcodeTable + *v19);
        }
        if ( !OpcodeTerm )
        {
          LogError(3222536193LL);
          AcpiDiagTraceAmlError(v7, 3222536193LL);
          PrintDebugMessage(134, **(unsigned __int8 **)(v7 + 120), *(_QWORD *)(v7 + 120), 0, 0LL);
          v10 = -1072431103;
          goto LABEL_80;
        }
        v21 = *(_DWORD *)(OpcodeTerm + 28);
        if ( (v21 & 8) != 0 )
        {
          a1 = *(unsigned __int8 *)*v11;
          *v11 = (char *)*v11 + 1;
          *(_WORD *)(v15 + 2) = 1;
          *(_QWORD *)(v15 + 16) = 0LL;
          if ( (_DWORD)a1 == 10 )
          {
            a1 = *(unsigned __int8 *)*v11;
            *(_BYTE *)(v15 + 16) = a1;
            *v11 = (char *)*v11 + 1;
            goto LABEL_181;
          }
          if ( (_DWORD)a1 == 12 )
          {
            a1 = *(unsigned int *)*v11;
            *(_DWORD *)(v15 + 16) = a1;
            *v11 = (char *)*v11 + 4;
            goto LABEL_181;
          }
          if ( (int)a1 > 12 )
          {
            if ( (_DWORD)a1 == 255 )
            {
              if ( (unsigned __int8)IsCompatableDSDTRevision(a1, (unsigned int)a1, 1LL, v4) )
                v183 = -1LL;
              else
                v183 = 0xFFFFFFFFLL;
              *(_QWORD *)(v15 + 16) = v183;
              if ( (gDebugger & 0xD0) != 0 )
              {
                ConPrintf("Ones");
                v10 = 0;
                goto LABEL_80;
              }
              goto LABEL_182;
            }
            if ( (_DWORD)a1 == 14 )
            {
              a1 = *(_QWORD *)*v11;
              *(_QWORD *)(v15 + 16) = a1;
              *v11 = (char *)*v11 + 8;
              goto LABEL_181;
            }
          }
          else
          {
            if ( !(_BYTE)a1 )
            {
              *(_QWORD *)(v15 + 16) = 0LL;
              if ( (gDebugger & 0xD0) != 0 )
                ConPrintf("Zero");
              goto LABEL_182;
            }
            if ( (_DWORD)a1 == 1 )
            {
              *(_QWORD *)(v15 + 16) = 1LL;
              if ( (gDebugger & 0xD0) != 0 )
              {
                ConPrintf("One");
                v10 = 0;
                goto LABEL_80;
              }
              goto LABEL_182;
            }
            if ( (_DWORD)a1 == 11 )
            {
              a1 = *(unsigned __int16 *)*v11;
              *(_WORD *)(v15 + 16) = a1;
              *v11 = (char *)*v11 + 2;
LABEL_181:
              if ( (gDebugger & 0xD0) != 0 )
              {
                ConPrintf("0x%I64x");
                v10 = 0;
                goto LABEL_80;
              }
LABEL_182:
              v10 = 0;
              goto LABEL_80;
            }
          }
          *v11 = (char *)*v11 - 1;
          LogError(3222536193LL);
          AcpiDiagTraceAmlError(v7, 3222536193LL);
          PrintDebugMessage(128, **(unsigned __int8 **)(v7 + 120), *(_QWORD *)(v7 + 120), 0, 0LL);
          v10 = -1072431103;
          goto LABEL_80;
        }
        if ( (v21 & 0x10) != 0 )
        {
          v10 = ParseString(v7, v11, v15, 0);
          goto LABEL_80;
        }
        if ( (v21 & 2) != 0 )
        {
          v152 = *(_QWORD *)(v7 + 96);
          Field = 0;
          v153 = (unsigned int)*(unsigned __int8 *)*v11 - 104;
          if ( (unsigned int)v153 < *(_DWORD *)(v152 + 60) )
          {
            a1 = 5 * v153;
            v154 = *(_QWORD *)(v152 + 64) + 40 * v153;
            if ( v15 != v154 )
            {
              *(_OWORD *)v15 = *(_OWORD *)v154;
              *(_OWORD *)(v15 + 16) = *(_OWORD *)(v154 + 16);
              *(_QWORD *)(v15 + 32) = *(_QWORD *)(v154 + 32);
              if ( (*(_BYTE *)v154 & 1) != 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v154 + 8) + 8LL));
              }
              else if ( *(_QWORD *)(v154 + 32) )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v154 + 8));
                *(_WORD *)v15 |= 1u;
                *(_QWORD *)(v15 + 8) = v154;
              }
            }
            *v11 = (char *)*v11 + 1;
            if ( (gDebugger & 0xD0) != 0 )
            {
              ConPrintf("Arg%d=");
              PrintObject(v15);
            }
            goto LABEL_79;
          }
          LogError(3222536197LL);
          AcpiDiagTraceAmlError(v7, 3222536197LL);
          PrintDebugMessage(122, v153, 0, 0, 0LL);
          v10 = -1072431099;
          goto LABEL_80;
        }
        if ( (v21 & 4) != 0 )
        {
          v155 = (unsigned int)*(unsigned __int8 *)*v11 - 96;
          v156 = *(_QWORD *)(v7 + 96) + 8 * (v155 + 4 * v155 + 9);
          if ( v15 != v156 )
          {
            *(_OWORD *)v15 = *(_OWORD *)v156;
            *(_OWORD *)(v15 + 16) = *(_OWORD *)(v156 + 16);
            *(_QWORD *)(v15 + 32) = *(_QWORD *)(v156 + 32);
            if ( (*(_BYTE *)v156 & 1) != 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v156 + 8) + 8LL));
            }
            else if ( *(_QWORD *)(v156 + 32) )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v156 + 8));
              *(_WORD *)v15 |= 1u;
              *(_QWORD *)(v15 + 8) = v156;
            }
          }
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("Local%d=");
            PrintObject(v15);
            v11 = (const void **)(v7 + 120);
          }
          *v11 = (char *)*v11 + 1;
          v10 = 0;
          goto LABEL_80;
        }
        if ( (v21 & 0x20) == 0 )
        {
          if ( (v21 & 0x40) != 0 )
          {
            LogError(3222536198LL);
            AcpiDiagTraceAmlError(v7, 3222536198LL);
            PrintDebugMessage(133, 0, 0, 0, 0LL);
            v10 = -1072431098;
            goto LABEL_80;
          }
          *v11 = (char *)*v11 + 1;
          v80 = v7 + 440;
          Field = 0;
          v81 = 0LL;
          v82 = 0LL;
          byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          if ( (unsigned int)(*(_DWORD *)(v80 + 8) - v80 - 56) >= 0x70 )
          {
            v83 = v80;
            v209 = v80;
            while ( 1 )
            {
              v82 = *(_QWORD *)(v83 + 40) - 16LL;
              v84 = *(_QWORD **)(v83 + 40);
              if ( (_QWORD *)(v83 + 40) == v84 )
              {
LABEL_148:
                v82 = 0LL;
              }
              else
              {
                while ( *(_DWORD *)(v82 + 4) < 0x70u )
                {
                  v82 = *v84 - 16LL;
                  v84 = (_QWORD *)*v84;
                  if ( (_QWORD *)(v83 + 40) == v84 )
                    goto LABEL_148;
                }
              }
              if ( v82 )
                break;
              if ( (unsigned int)(*(_DWORD *)(v83 + 8) - *(_DWORD *)(v83 + 32)) >= 0x70 )
              {
                v82 = *(_QWORD *)(v83 + 32);
                *(_QWORD *)(v83 + 32) = v82 + 112;
                *(_DWORD *)(v82 + 4) = 112;
                goto LABEL_152;
              }
              v81 = v83;
              v83 = *(_QWORD *)(v83 + 24);
              v209 = v83;
              if ( !v83 )
                goto LABEL_152;
            }
            v173 = *(_QWORD *)(v82 + 16);
            v174 = *(_QWORD **)(v82 + 24);
            if ( *(_QWORD *)(v173 + 8) != v82 + 16 || *v174 != v82 + 16 )
              __fastfail(3u);
            *v174 = v173;
            *(_QWORD *)(v173 + 8) = v174;
            if ( *(_DWORD *)(v82 + 4) >= 0x90u )
            {
              *(_DWORD *)(v82 + 112) = 0;
              v175 = *(_DWORD *)(v82 + 4) - 112;
              *(_QWORD *)(v82 + 120) = v83;
              *(_DWORD *)(v82 + 116) = v175;
              *(_DWORD *)(v82 + 4) = 112;
              HeapInsertFreeList(v83);
            }
LABEL_152:
            if ( v82 )
            {
LABEL_153:
              *(_DWORD *)v82 = 1297237576;
              *(_QWORD *)(v82 + 8) = v83;
              memset((void *)(v82 + 16), 0, 0x60uLL);
            }
            else
            {
              if ( v80 == gpheapGlobal )
                v176 = NewGlobalHeap(&v209);
              else
                v176 = NewLocalHeap(&v209);
              if ( !v176 )
              {
                v83 = v209;
                *(_QWORD *)(v209 + 16) = v80;
                *(_QWORD *)(v81 + 24) = v83;
                v82 = *(_QWORD *)(v83 + 32);
                *(_QWORD *)(v83 + 32) = v82 + 112;
                *(_DWORD *)(v82 + 4) = 112;
                goto LABEL_153;
              }
            }
            v19 = v212;
          }
          KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
          if ( !v82 || (v85 = v82 + 16, v82 == -16) )
          {
            LogError(3222536194LL);
            v7 = (__int64)v204;
            AcpiDiagTraceAmlError(v204, 3222536194LL);
            PrintDebugMessage(153, 0, 0, 0, 0LL);
            v10 = -1072431102;
            goto LABEL_80;
          }
          v7 = (__int64)v204;
          *(_QWORD *)(v82 + 24) = *((_QWORD *)v204 + 52);
          *((_QWORD *)v204 + 52) = v85;
          *(_QWORD *)(v82 + 40) = ParseTerm;
          v86 = v213;
          *(_DWORD *)v85 = 1297237332;
          *(_QWORD *)(v82 + 48) = v19;
          *(_QWORD *)(v82 + 64) = v86;
          *(_QWORD *)(v82 + 72) = OpcodeTerm;
          *(_QWORD *)(v82 + 104) = v205;
          a1 = *(_QWORD *)(OpcodeTerm + 16);
          if ( a1 )
          {
            v87 = -1LL;
            do
              ++v87;
            while ( *(_BYTE *)(a1 + v87) );
          }
          else
          {
            LODWORD(v87) = 0;
          }
          *(_DWORD *)(v82 + 92) = v87;
          if ( !(_DWORD)v87 )
            goto LABEL_79;
          v88 = *((_QWORD *)v204 + 40);
          v89 = 40 * v87;
          v90 = 0LL;
          v91 = 0LL;
          v92 = v89 + 16;
          if ( v89 + 16 < v89 )
            goto LABEL_463;
          if ( v92 < 0x20 )
            v92 = 32;
          if ( v92 + 7 < v92 )
            goto LABEL_463;
          v93 = (v92 + 7) & 0xFFFFFFF8;
          byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          if ( v93 <= *(_DWORD *)(v88 + 8) - (int)v88 - 56 )
          {
            v94 = v88;
            v210 = v88;
            while ( 1 )
            {
              v90 = *(_QWORD *)(v94 + 40) - 16LL;
              v95 = *(_QWORD **)(v94 + 40);
              if ( (_QWORD *)(v94 + 40) == v95 )
              {
LABEL_168:
                v90 = 0LL;
              }
              else
              {
                while ( v93 > *(_DWORD *)(v90 + 4) )
                {
                  v90 = *v95 - 16LL;
                  v95 = (_QWORD *)*v95;
                  if ( (_QWORD *)(v94 + 40) == v95 )
                    goto LABEL_168;
                }
              }
              if ( v90 )
                break;
              if ( v93 <= *(_DWORD *)(v94 + 8) - *(_DWORD *)(v94 + 32) )
              {
                v90 = *(_QWORD *)(v94 + 32);
                *(_QWORD *)(v94 + 32) = v90 + v93;
                *(_DWORD *)(v90 + 4) = v93;
                goto LABEL_172;
              }
              v91 = v94;
              v94 = *(_QWORD *)(v94 + 24);
              v210 = v94;
              if ( !v94 )
                goto LABEL_172;
            }
            v163 = *(_QWORD *)(v90 + 16);
            v164 = *(_QWORD **)(v90 + 24);
            if ( *(_QWORD *)(v163 + 8) != v90 + 16 || *v164 != v90 + 16 )
              __fastfail(3u);
            *v164 = v163;
            *(_QWORD *)(v163 + 8) = v164;
            if ( *(unsigned int *)(v90 + 4) >= (unsigned __int64)v93 + 32 )
            {
              v165 = v90 + v93;
              *(_DWORD *)v165 = 0;
              v166 = *(_DWORD *)(v90 + 4) - v93;
              *(_QWORD *)(v165 + 8) = v94;
              *(_DWORD *)(v165 + 4) = v166;
              *(_DWORD *)(v90 + 4) = v93;
              HeapInsertFreeList(v94);
            }
LABEL_172:
            if ( v90 )
            {
LABEL_173:
              *(_DWORD *)v90 = 1413563464;
              *(_QWORD *)(v90 + 8) = v94;
              memset((void *)(v90 + 16), 0, v93 - 16LL);
            }
            else
            {
              if ( v88 == gpheapGlobal )
                v178 = NewGlobalHeap(&v210);
              else
                v178 = NewLocalHeap(&v210);
              if ( !v178 )
              {
                v94 = v210;
                *(_QWORD *)(v210 + 16) = v88;
                *(_QWORD *)(v91 + 24) = v94;
                v90 = *(_QWORD *)(v94 + 32);
                *(_QWORD *)(v94 + 32) = v90 + v93;
                *(_DWORD *)(v90 + 4) = v93;
                goto LABEL_173;
              }
            }
          }
          KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
          if ( v90 )
            v96 = (void *)(v90 + 16);
          else
LABEL_463:
            v96 = 0LL;
          *(_QWORD *)(v85 + 80) = v96;
          if ( !v96 )
          {
            LogError(3221225626LL);
            v7 = (__int64)v204;
            AcpiDiagTraceAmlError(v204, 3221225626LL);
            PrintDebugMessage(154, 0, 0, 0, 0LL);
            v10 = -1073741670;
            goto LABEL_80;
          }
          memset(v96, 0, 40LL * *(unsigned int *)(v85 + 76));
          v7 = (__int64)v204;
          goto LABEL_79;
        }
        a1 = (__int64)*v11;
        v208 = 0LL;
        if ( *(_BYTE *)a1 == 92 )
        {
          RtlStringCchCopyA(&Src, 0x100uLL, "\\");
          v177 = v211;
          ++*v211;
          v10 = ParseNameTail(v204, v177, &Src);
          goto LABEL_50;
        }
        if ( *(_BYTE *)a1 == 94 )
        {
          RtlStringCchCopyA(&Src, 0x100uLL, "^");
          v179 = (_BYTE **)v211;
          v180 = &v217;
          v181 = 1;
          ++*v211;
          v182 = *v179;
          do
          {
            if ( *v182 != 94 )
              break;
            ++v182;
            *v180++ = 94;
            *v179 = v182;
            ++v181;
          }
          while ( v181 < 0xFF );
          *(&Src + v181) = 0;
          if ( **v179 != 94 )
          {
            v10 = ParseNameTail(v204, v179, &Src);
            goto LABEL_50;
          }
          LogError(3221225734LL);
          v7 = (__int64)v204;
          AcpiDiagTraceAmlError(v204, 3221225734LL);
          PrintDebugMessage(129, (unsigned int)&Src, 0, 0, 0LL);
          v10 = -1073741562;
          goto LABEL_61;
        }
        Src = 0;
        v22 = v4;
        do
          ++v22;
        while ( *(&Src + v22) );
        v23 = *(_BYTE *)a1;
        if ( !*(_BYTE *)a1 )
        {
          v10 = 0;
          *v11 = (const void *)(a1 + 1);
          goto LABEL_50;
        }
        if ( v23 == 47 )
        {
          *v11 = (const void *)(a1 + 1);
          v24 = *(unsigned __int8 *)(a1 + 1);
          *v11 = (const void *)(a1 + 2);
          if ( !v24 )
          {
LABEL_49:
            v10 = 0;
            goto LABEL_50;
          }
        }
        else if ( v23 == 46 )
        {
          v24 = v8;
          *v11 = (const void *)(a1 + 1);
        }
        else
        {
          v24 = 1;
        }
        v25 = v22 + 1;
        while ( (unsigned __int64)(unsigned int)v22 + 4 < 0x100 )
        {
          a1 = (__int64)(&Src + (unsigned int)v22);
          v26 = (unsigned int)(256 - v22);
          if ( (unsigned __int64)(v26 - 1) <= 0x7FFFFFFE )
          {
            v27 = 4 - v26;
            v28 = (__int64)*v11 - a1;
            while ( v27 + v26 )
            {
              v29 = *(_BYTE *)(v28 + a1);
              if ( !v29 )
                break;
              *(_BYTE *)a1++ = v29;
              if ( !--v26 )
                goto LABEL_436;
            }
            if ( v26 )
              goto LABEL_47;
LABEL_436:
            --a1;
LABEL_47:
            *(_BYTE *)a1 = 0;
            goto LABEL_48;
          }
          if ( 256 != (_DWORD)v22 )
            goto LABEL_47;
LABEL_48:
          *v11 = (char *)*v11 + 4;
          LODWORD(v22) = v22 + 4;
          v25 += 4;
          if ( !--v24 )
            goto LABEL_49;
          if ( v25 < 0x100 )
          {
            RtlStringCchCopyA(&Src + (unsigned int)v22, (unsigned int)(256 - v22), ".");
            v11 = (const void **)v211;
            LODWORD(v22) = v22 + 1;
            ++v25;
          }
        }
        LogError(3221225734LL);
        AcpiDiagTraceAmlError(v204, 3221225734LL);
        PrintDebugMessage(130, (unsigned int)&Src, 0, 0, 0LL);
        v10 = -1073741562;
LABEL_50:
        if ( v10 )
          goto LABEL_60;
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf("%s");
        v34 = -1LL;
        do
          ++v34;
        while ( *(&Src + v34) );
        if ( v34 + 1 < 0x80 )
        {
          PoolWithTag = P;
          goto LABEL_57;
        }
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v34 + 1, 0x69706341u);
        if ( !PoolWithTag )
        {
          v7 = (__int64)v204;
          v10 = -1073741670;
          goto LABEL_80;
        }
LABEL_57:
        memmove(PoolWithTag, &Src, v34);
        PoolWithTag[v34] = 0;
        v36 = ExAcquireSpinLockShared(&ACPINamespaceLock);
        NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag);
        ExReleaseSpinLockShared(&ACPINamespaceLock, v36);
        if ( P != PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        v10 = NameSpaceObjectNoLock;
        if ( NameSpaceObjectNoLock == -1073741772 )
        {
          LogError(3221225524LL);
          v7 = (__int64)v204;
          AcpiDiagTraceAmlError(v204, 3221225524LL);
          PrintDebugMessage(120, (unsigned int)&Src, 0, 0, 0LL);
        }
        else
        {
LABEL_60:
          v7 = (__int64)v204;
        }
LABEL_61:
        if ( v10 )
          goto LABEL_80;
        for ( m = v208; *(_WORD *)(m + 66) == 128; m = *(_QWORD *)(m + 80) )
          ;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(m + 112));
        if ( *(_WORD *)(m + 66) == 8 )
        {
          Field = PushCall(v7, m, v205);
          goto LABEL_77;
        }
        Field = 0;
        for ( n = m + 64; ; n = *(_QWORD *)(n + 16) )
        {
          while ( 1 )
          {
            v39 = *(_WORD *)(n + 2);
            if ( v39 != 128 )
              break;
            n = *(_QWORD *)(n + 16) + 64LL;
          }
          if ( v39 != 129 )
            break;
        }
        if ( v39 == 5 )
        {
          Field = 0;
          v139 = v7 + 440;
          v140 = 0LL;
          v141 = 0LL;
          byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          if ( (unsigned int)(*(_DWORD *)(v139 + 8) - v139 - 56) >= 0x40 )
          {
            v142 = v139;
            v207 = v139;
            while ( 1 )
            {
              v140 = *(_QWORD *)(v142 + 40) - 16LL;
              v143 = *(_QWORD **)(v142 + 40);
              if ( (_QWORD *)(v142 + 40) == v143 )
              {
LABEL_276:
                v140 = 0LL;
              }
              else
              {
                while ( *(_DWORD *)(v140 + 4) < 0x40u )
                {
                  v140 = *v143 - 16LL;
                  v143 = (_QWORD *)*v143;
                  if ( (_QWORD *)(v142 + 40) == v143 )
                    goto LABEL_276;
                }
              }
              if ( v140 )
                break;
              if ( (unsigned int)(*(_DWORD *)(v142 + 8) - *(_DWORD *)(v142 + 32)) >= 0x40 )
              {
                v140 = *(_QWORD *)(v142 + 32);
                *(_QWORD *)(v142 + 32) = v140 + 64;
                *(_DWORD *)(v140 + 4) = 64;
                goto LABEL_280;
              }
              v141 = v142;
              v142 = *(_QWORD *)(v142 + 24);
              v207 = v142;
              if ( !v142 )
                goto LABEL_280;
            }
            v160 = *(_QWORD *)(v140 + 16);
            v161 = *(_QWORD **)(v140 + 24);
            if ( *(_QWORD *)(v160 + 8) != v140 + 16 || *v161 != v140 + 16 )
              __fastfail(3u);
            *v161 = v160;
            *(_QWORD *)(v160 + 8) = v161;
            if ( *(_DWORD *)(v140 + 4) >= 0x60u )
            {
              *(_DWORD *)(v140 + 64) = 0;
              v162 = *(_DWORD *)(v140 + 4) - 64;
              *(_QWORD *)(v140 + 72) = v142;
              *(_DWORD *)(v140 + 68) = v162;
              *(_DWORD *)(v140 + 4) = 64;
              HeapInsertFreeList(v142);
            }
LABEL_280:
            if ( v140 )
            {
LABEL_281:
              *(_DWORD *)v140 = 1297237576;
              *(_QWORD *)(v140 + 8) = v142;
              memset((void *)(v140 + 16), 0, 0x30uLL);
            }
            else
            {
              if ( v139 == gpheapGlobal )
                v187 = NewGlobalHeap(&v207);
              else
                v187 = NewLocalHeap(&v207);
              if ( !v187 )
              {
                v142 = v207;
                *(_QWORD *)(v207 + 16) = v139;
                *(_QWORD *)(v141 + 24) = v142;
                v140 = *(_QWORD *)(v142 + 32);
                *(_QWORD *)(v142 + 32) = v140 + 64;
                *(_DWORD *)(v140 + 4) = 64;
                goto LABEL_281;
              }
            }
          }
          KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
          if ( v140 && (v144 = v140 + 16) != 0 )
          {
            v7 = (__int64)v204;
            *(_QWORD *)(v144 + 8) = *((_QWORD *)v204 + 52);
            *((_QWORD *)v204 + 52) = v144;
            *(_QWORD *)(v144 + 24) = AccFieldUnit;
            *(_DWORD *)v144 = 1430668097;
            *(_QWORD *)(v144 + 32) = n;
            *(_DWORD *)(v144 + 16) = 0x10000;
            *(_QWORD *)(v144 + 40) = v205;
          }
          else
          {
            LogError(3222536194LL);
            v7 = (__int64)v204;
            AcpiDiagTraceAmlError(v204, 3222536194LL);
            PrintDebugMessage(153, 0, 0, 0, 0LL);
            Field = -1072431102;
          }
          goto LABEL_77;
        }
        if ( v39 == 14 )
        {
          Field = ReadField(v7, n, (_DWORD *)(*(_QWORD *)(n + 32) + 12LL), v205);
        }
        else
        {
          if ( v205 != n )
          {
            *(_OWORD *)v205 = *(_OWORD *)n;
            *(_OWORD *)(v205 + 16) = *(_OWORD *)(n + 16);
            *(_QWORD *)(v205 + 32) = *(_QWORD *)(n + 32);
            if ( (*(_BYTE *)n & 1) != 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(n + 8) + 8LL));
            }
            else if ( *(_QWORD *)(n + 32) )
            {
              _InterlockedIncrement((volatile signed __int32 *)(n + 8));
              *(_WORD *)v205 |= 1u;
              *(_QWORD *)(v205 + 8) = n;
            }
          }
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("=");
            PrintObject(v205);
          }
        }
LABEL_77:
        if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(m + 112), 0xFFFFFFFF) == 1 )
        {
          *(_WORD *)(m + 64) |= 4u;
          if ( (*(_WORD *)(m + 64) & 0x40) == 0 )
            FreeNameSpaceObjects();
        }
        if ( (gdwfAMLI & 4) != 0 )
        {
          a1 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v208 + 112), 0xFFFFFFFF);
          if ( (_DWORD)a1 == 1 )
          {
            a1 = v208;
            *(_WORD *)(v208 + 64) |= 4u;
            if ( (*(_WORD *)(a1 + 64) & 0x40) == 0 )
              FreeNameSpaceObjects();
          }
        }
LABEL_79:
        v10 = Field;
LABEL_80:
        v11 = (const void **)(v7 + 120);
LABEL_81:
        if ( v10 )
          return v10;
        v3 = 0LL;
        v8 = 2;
        v6 = 0x1C0000000uLL;
LABEL_83:
        if ( v5 != *(_QWORD *)(v7 + 416) )
          return v10;
        v4 = -1LL;
        if ( *(_DWORD *)(v5 + 72) >= *(_DWORD *)(v5 + 76) )
          goto LABEL_85;
      }
      switch ( v16 )
      {
        case 'B':
          *(_QWORD *)(v15 + 16) = 0LL;
          *(_WORD *)(v15 + 2) = 1;
          *(_BYTE *)(v15 + 16) = *(_BYTE *)*v11;
          *v11 = (char *)*v11 + 1;
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("0x%I64x");
            v11 = (const void **)(v7 + 120);
            v8 = 2;
            v6 = 0x1C0000000uLL;
          }
          v10 = 0;
          goto LABEL_83;
        case 'D':
          v10 = ParseInteger(v11, v15, 4LL, -1LL);
          goto LABEL_80;
        case 'N':
          a1 = (__int64)*v11;
          v107 = *(unsigned __int8 *)*v11;
          v108 = (__int64)*(&OpcodeTable + v107);
          if ( !v108 || (*(_DWORD *)(v108 + 28) & 0x20) == 0 )
          {
            LogError(3222536193LL);
            AcpiDiagTraceAmlError(v7, 3222536193LL);
            PrintDebugMessage(132, **(unsigned __int8 **)(v7 + 120), *(_QWORD *)(v7 + 120), 0, 0LL);
            v10 = -1072431103;
            goto LABEL_80;
          }
          if ( (_BYTE)v107 == 92 )
          {
            RtlStringCchCopyA(&pszDest, 0x100uLL, "\\");
            ++*(_QWORD *)(v7 + 120);
          }
          else
          {
            if ( (_BYTE)v107 != 94 )
            {
              pszDest = 0;
              v10 = 0;
              v109 = -1LL;
              do
                ++v109;
              while ( *(&pszDest + v109) );
              v110 = *(_BYTE *)a1;
              if ( *(_BYTE *)a1 )
              {
                if ( v110 != 47 )
                {
                  if ( v110 == 46 )
                  {
                    v111 = 2;
                    *v11 = (const void *)(a1 + 1);
                  }
                  else
                  {
                    v111 = 1;
                  }
                  goto LABEL_211;
                }
                *v11 = (const void *)(a1 + 1);
                v111 = *(unsigned __int8 *)(a1 + 1);
                *v11 = (const void *)(a1 + 2);
                if ( v111 )
                {
LABEL_211:
                  v112 = v109 + 1;
                  while ( 1 )
                  {
                    if ( (unsigned __int64)(unsigned int)v109 + 4 >= 0x100 )
                    {
                      LogError(3221225734LL);
                      AcpiDiagTraceAmlError(v7, 3221225734LL);
                      PrintDebugMessage(130, (unsigned int)&pszDest, 0, 0, 0LL);
                      v10 = -1073741562;
LABEL_222:
                      v15 = v205;
                      goto LABEL_223;
                    }
                    a1 = (__int64)(&pszDest + (unsigned int)v109);
                    v113 = (unsigned int)(256 - v109);
                    if ( (unsigned __int64)(v113 - 1) <= 0x7FFFFFFE )
                      break;
                    if ( 256 != (_DWORD)v109 )
                      goto LABEL_220;
LABEL_221:
                    *v11 = (char *)*v11 + 4;
                    LODWORD(v109) = v109 + 4;
                    v112 += 4;
                    if ( !--v111 )
                      goto LABEL_222;
                    if ( v112 < 0x100 )
                    {
                      RtlStringCchCopyA(&pszDest + (unsigned int)v109, (unsigned int)(256 - v109), ".");
                      LODWORD(v109) = v109 + 1;
                      v11 = (const void **)(v7 + 120);
                      ++v112;
                    }
                  }
                  v114 = 4 - v113;
                  v115 = (__int64)*v11 - a1;
                  while ( v114 + v113 )
                  {
                    v116 = *(_BYTE *)(v115 + a1);
                    if ( !v116 )
                      break;
                    *(_BYTE *)a1++ = v116;
                    if ( !--v113 )
                      goto LABEL_409;
                  }
                  if ( !v113 )
LABEL_409:
                    --a1;
LABEL_220:
                  *(_BYTE *)a1 = 0;
                  goto LABEL_221;
                }
              }
              else
              {
                *v11 = (const void *)(a1 + 1);
              }
LABEL_223:
              if ( v10 )
                goto LABEL_80;
              if ( (gDebugger & 0xD0) != 0 )
                ConPrintf("%s");
              *(_WORD *)(v15 + 2) = 2;
              v117 = -1LL;
              do
                ++v117;
              while ( *(&pszDest + v117) );
              v118 = v117 + 1;
              v119 = 0LL;
              *(_DWORD *)(v15 + 24) = v118;
              v120 = gpheapGlobal;
              v121 = v118 + 16;
              if ( v118 + 16 < v118 )
                goto LABEL_418;
              if ( v121 < 0x20 )
                v121 = 32;
              if ( v121 + 7 < v121 )
                goto LABEL_418;
              v122 = (v121 + 7) & 0xFFFFFFF8;
              byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
              if ( v122 <= *(_DWORD *)(v120 + 8) - (int)v120 - 56 )
              {
                v123 = v120;
                v206 = v120;
                while ( 1 )
                {
                  v119 = *(_QWORD *)(v123 + 40) - 16LL;
                  v124 = *(_QWORD **)(v123 + 40);
                  if ( (_QWORD *)(v123 + 40) == v124 )
                  {
LABEL_383:
                    v119 = 0LL;
                  }
                  else
                  {
                    while ( v122 > *(_DWORD *)(v119 + 4) )
                    {
                      v119 = *v124 - 16LL;
                      v124 = (_QWORD *)*v124;
                      if ( (_QWORD *)(v123 + 40) == v124 )
                        goto LABEL_383;
                    }
                  }
                  if ( v119 )
                    break;
                  if ( v122 <= *(_DWORD *)(v123 + 8) - *(_DWORD *)(v123 + 32) )
                  {
                    v119 = *(_QWORD *)(v123 + 32);
                    *(_QWORD *)(v123 + 32) = v119 + v122;
                    *(_DWORD *)(v119 + 4) = v122;
                    goto LABEL_241;
                  }
                  v3 = v123;
                  v123 = *(_QWORD *)(v123 + 24);
                  v206 = v123;
                  if ( !v123 )
                    goto LABEL_241;
                }
                v125 = *(_QWORD *)(v119 + 16);
                v126 = *(_QWORD **)(v119 + 24);
                if ( *(_QWORD *)(v125 + 8) != v119 + 16 || *v126 != v119 + 16 )
                  __fastfail(3u);
                *v126 = v125;
                *(_QWORD *)(v125 + 8) = v126;
                if ( *(unsigned int *)(v119 + 4) >= (unsigned __int64)v122 + 32 )
                {
                  v167 = v119 + v122;
                  *(_DWORD *)v167 = 0;
                  v168 = *(_DWORD *)(v119 + 4) - v122;
                  *(_QWORD *)(v167 + 8) = v123;
                  *(_DWORD *)(v167 + 4) = v168;
                  *(_DWORD *)(v119 + 4) = v122;
                  HeapInsertFreeList(v123);
                }
LABEL_241:
                if ( v119 )
                  goto LABEL_242;
                if ( v120 == gpheapGlobal )
                  v191 = NewGlobalHeap(&v206);
                else
                  v191 = NewLocalHeap(&v206);
                if ( !v191 )
                {
                  v123 = v206;
                  *(_QWORD *)(v206 + 16) = v120;
                  *(_QWORD *)(v3 + 24) = v123;
                  v119 = *(_QWORD *)(v123 + 32);
                  *(_QWORD *)(v123 + 32) = v119 + v122;
                  *(_DWORD *)(v119 + 4) = v122;
LABEL_242:
                  *(_DWORD *)v119 = 1381258056;
                  *(_QWORD *)(v119 + 8) = v123;
                  memset((void *)(v119 + 16), 0, v122 - 16LL);
                }
              }
              KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
              if ( v119 )
              {
                v127 = (void *)(v119 + 16);
                goto LABEL_245;
              }
LABEL_418:
              v127 = 0LL;
LABEL_245:
              *(_QWORD *)(v205 + 32) = v127;
              if ( v127 )
              {
                memmove(v127, &pszDest, *(unsigned int *)(v205 + 24));
                v7 = (__int64)v204;
              }
              else
              {
                LogError(3221225626LL);
                v7 = (__int64)v204;
                AcpiDiagTraceAmlError(v204, 3221225626LL);
                PrintDebugMessage(131, (unsigned int)&pszDest, 0, 0, 0LL);
                v10 = -1073741670;
              }
              goto LABEL_80;
            }
            RtlStringCchCopyA(&pszDest, 0x100uLL, "^");
            ++*(_QWORD *)(v7 + 120);
            v188 = &v215;
            v189 = *(_BYTE **)(v7 + 120);
            v190 = 1LL;
            do
            {
              if ( *v189 != 94 )
                break;
              ++v189;
              *v188++ = 94;
              *(_QWORD *)(v7 + 120) = v189;
              v190 = (unsigned int)(v190 + 1);
            }
            while ( (unsigned int)v190 < 0xFF );
            *(&pszDest + v190) = 0;
            if ( **(_BYTE **)(v7 + 120) == 94 )
            {
              LogError(3221225734LL);
              AcpiDiagTraceAmlError(v7, 3221225734LL);
              PrintDebugMessage(129, (unsigned int)&pszDest, 0, 0, 0LL);
              v10 = -1073741562;
              goto LABEL_80;
            }
          }
          v10 = ParseNameTail(v7, v7 + 120, &pszDest);
          goto LABEL_223;
        case 'O':
          v10 = ParseIntObj(v7, (_WORD **)v11, v15, 1);
          if ( v10 != -1072431103 )
            goto LABEL_80;
          v10 = ParseString(v7, (const void **)(v7 + 120), v15, 1);
          if ( v10 != -1072431103 )
            goto LABEL_80;
          v146 = *(unsigned __int8 **)(v7 + 120);
          a1 = *v146;
          if ( (unsigned __int8)(a1 - 17) > 2u )
            goto LABEL_80;
          v147 = PushTerm(v7, (_DWORD)v146, v14, (unsigned int)*(&OpcodeTable + (unsigned __int8)a1), v15);
          ++*(_QWORD *)(v7 + 120);
          v11 = (const void **)(v7 + 120);
          v10 = v147;
          goto LABEL_81;
        case 'S':
          v10 = ParseSuperName(v7, v15, 0LL, v14);
          goto LABEL_80;
        case 'W':
          v10 = ParseInteger(v11, v15, 2LL, -1LL);
          goto LABEL_80;
        case 's':
          LOBYTE(v6) = 1;
          v10 = ParseSuperName(v7, v15, v6, v14);
          goto LABEL_80;
        default:
          LogError(3222536195LL);
          AcpiDiagTraceAmlError(v7, 3222536195LL);
          PrintDebugMessage(121, (char)v16, 0, 0, 0LL);
          v10 = -1072431101;
          goto LABEL_80;
      }
    }
    if ( v10 )
      return v10;
LABEL_85:
    if ( v5 != *(_QWORD *)(v7 + 416) )
      return v10;
    if ( *(_DWORD *)(v5 + 72) >= *(_DWORD *)(v5 + 76) )
      break;
    v4 = -1LL;
  }
  ++*(_DWORD *)(v5 + 16);
LABEL_88:
  ++*(_DWORD *)(v5 + 16);
  a2 = *(_QWORD *)(v5 + 56);
  if ( *(int *)(a2 + 28) >= 0
    || (v192 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(a2 + 32)) == 0LL )
  {
LABEL_89:
    ++*(_DWORD *)(v5 + 16);
    if ( (gDebugger & 0xD0) != 0 && *(_DWORD *)(v5 + 76) )
      ConPrintf(")");
    v40 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v5 + 56) + 48LL);
    if ( v40 )
    {
      v10 = v40(v7, v5, v6, v4);
      if ( v10 || v5 != *(_QWORD *)(v7 + 416) )
        return v10;
    }
    goto LABEL_93;
  }
  v193 = v192(12LL, 1LL, *(unsigned int *)(a2 + 8), *(_QWORD *)(v5 + 64) + 120LL, *(_DWORD *)(a2 + 40), v7);
  if ( v193 != 259 )
  {
    v10 = v193;
    goto LABEL_89;
  }
  return 32772;
}

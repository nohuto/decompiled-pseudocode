/*
 * XREFs of ParseTerm @ 0x1C000E250
 * Callers:
 *     <none>
 * Callees:
 *     FreeData @ 0x1C0003AE4 (FreeData.c)
 *     NewGlobalHeap @ 0x1C0005D90 (NewGlobalHeap.c)
 *     ParseString @ 0x1C000C8B4 (ParseString.c)
 *     ParseNameTail @ 0x1C000C990 (ParseNameTail.c)
 *     RtlStringCchCopyA @ 0x1C000CB20 (RtlStringCchCopyA.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     GetNameSpaceObjectNoLock @ 0x1C000FF00 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C00100D0 (ParseSuperName.c)
 *     FreeObjData @ 0x1C0010360 (FreeObjData.c)
 *     CopyObjData @ 0x1C0010728 (CopyObjData.c)
 *     ListRemoveEntry @ 0x1C0010770 (ListRemoveEntry.c)
 *     ParseIntObj @ 0x1C0010B60 (ParseIntObj.c)
 *     FreeNameSpaceObjects @ 0x1C0011A80 (FreeNameSpaceObjects.c)
 *     PushCall @ 0x1C0012168 (PushCall.c)
 *     PushTerm @ 0x1C0013334 (PushTerm.c)
 *     HeapInsertFreeList @ 0x1C0013620 (HeapInsertFreeList.c)
 *     ReadField @ 0x1C0015DD0 (ReadField.c)
 *     NewLocalHeap @ 0x1C00186B8 (NewLocalHeap.c)
 *     IsCompatableDSDTRevision @ 0x1C001875C (IsCompatableDSDTRevision.c)
 *     FindOpcodeTerm @ 0x1C0018C54 (FindOpcodeTerm.c)
 *     ParseInteger @ 0x1C0020D14 (ParseInteger.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     AMLIDebugger @ 0x1C0043858 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintIndent @ 0x1C00443A0 (PrintIndent.c)
 *     PrintObject @ 0x1C00443DC (PrintObject.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ParseTerm(char **a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  char **v4; // r14
  __int64 v5; // r11
  __int64 v6; // r9
  int v7; // eax
  unsigned int NameSpaceObjectNoLock; // r12d
  char **v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r10
  int v14; // ebx
  char *v15; // r8
  char **v16; // rax
  int v17; // edx
  __int64 v18; // rcx
  char *v19; // r13
  unsigned __int8 v20; // al
  __int64 OpcodeTerm; // r15
  int v22; // eax
  char *v23; // rcx
  const void **v24; // r10
  __int64 v25; // rbx
  char v26; // al
  int v27; // r14d
  unsigned int v28; // esi
  char *v29; // rcx
  __int64 v30; // rdx
  signed __int64 v31; // r8
  char v32; // al
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  size_t v37; // rbx
  _BYTE *PoolWithTag; // rsi
  KIRQL v39; // bl
  __int64 v40; // r13
  __int64 v41; // rbx
  __int16 v42; // ax
  __int64 (__fastcall *v43)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v44; // r10
  __int64 (__fastcall *v45)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // r11
  __int64 v46; // rbx
  unsigned int v47; // eax
  __int64 v48; // rsi
  __int64 v49; // rbx
  __int64 v50; // r9
  __int64 *v51; // r8
  __int64 v52; // r11
  __int64 *v53; // rax
  __int64 v54; // rcx
  _QWORD **v55; // rdx
  __int64 v56; // r10
  __int64 v57; // rcx
  _QWORD **v58; // rbx
  __int64 v59; // rcx
  char *v60; // rcx
  char *v61; // rbx
  __int64 v62; // r9
  __int64 *v63; // r8
  __int64 v64; // r11
  __int64 *v65; // rax
  __int64 v66; // rcx
  char *v67; // rdx
  __int64 v68; // r10
  __int64 v69; // rcx
  _QWORD **v70; // rbx
  const void **v72; // rbx
  __int64 v73; // rcx
  unsigned __int64 *v74; // rbx
  char *v75; // rax
  unsigned int v76; // r8d
  char *v77; // r9
  unsigned __int8 v78; // dl
  unsigned __int64 v79; // rax
  __int64 *v80; // rcx
  _QWORD *v81; // rsi
  __int64 v82; // rbx
  _QWORD *v83; // r14
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  _QWORD *v87; // r11
  __int64 v88; // rcx
  __int64 v89; // r12
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rax
  char *v93; // r14
  unsigned int v94; // eax
  __int64 v95; // rbx
  char *v96; // r15
  unsigned int v97; // ecx
  unsigned int v98; // esi
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  char *v102; // r11
  __int64 v103; // rcx
  void *v104; // rcx
  __int64 *v105; // rcx
  __int64 v106; // rax
  char *v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rbx
  char v111; // al
  int v112; // esi
  unsigned int v113; // r14d
  char *v114; // rcx
  __int64 v115; // rdx
  signed __int64 v116; // r8
  char v117; // al
  __int64 v118; // rax
  unsigned int v119; // eax
  __int64 v120; // rbx
  __int64 v121; // r15
  __int64 v122; // r14
  unsigned int v123; // ecx
  unsigned int v124; // esi
  __int64 v125; // rdx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // r11
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rdx
  void *v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rsi
  _QWORD *v139; // r15
  _QWORD *v140; // r14
  __int64 v141; // rdx
  __int64 v142; // r8
  _QWORD *v143; // r11
  __int64 v144; // r9
  __int64 v145; // rax
  __int64 v146; // rsi
  __int64 v147; // rcx
  __int64 v148; // rax
  unsigned __int8 v149; // cl
  unsigned int v150; // eax
  __int64 v151; // rax
  unsigned __int8 i; // r10
  int v153; // eax
  unsigned __int8 v154; // cl
  __int64 v155; // r9
  char *v156; // rdx
  __int64 v157; // rbx
  __int64 v158; // rcx
  bool v159; // cf
  int v160; // eax
  __int64 v161; // rdx
  unsigned int v162; // eax
  __int64 v163; // rdx
  unsigned int v164; // eax
  int v165; // eax
  int v166; // eax
  int v167; // eax
  char *v168; // rdx
  char *v169; // rax
  unsigned int j; // ecx
  __int64 v171; // rax
  int v172; // eax
  char *v173; // rdx
  char *v174; // rcx
  __int64 v175; // rax
  int v176; // eax
  __int64 (__fastcall *v177)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  __int64 v178; // r10
  char *v179; // r10
  unsigned int v180; // [rsp+40h] [rbp-C0h]
  __int64 v181; // [rsp+48h] [rbp-B8h]
  char *v183; // [rsp+60h] [rbp-A0h] BYREF
  const void **v184; // [rsp+68h] [rbp-98h]
  _QWORD *v185; // [rsp+70h] [rbp-90h] BYREF
  __int64 v186; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v187; // [rsp+80h] [rbp-80h] BYREF
  __int64 v188; // [rsp+88h] [rbp-78h]
  char pszDest; // [rsp+90h] [rbp-70h] BYREF
  char v190; // [rsp+91h] [rbp-6Fh] BYREF
  char Src; // [rsp+190h] [rbp+90h] BYREF
  char v192; // [rsp+191h] [rbp+91h] BYREF
  _BYTE P[128]; // [rsp+290h] [rbp+190h] BYREF

  v180 = a3;
  v3 = a2;
  v4 = a1;
  v5 = 1LL;
  v6 = 2LL;
  if ( (_DWORD)a3 )
  {
    v7 = 5;
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 16) & 0xF;
    if ( !v7 )
    {
      ++*(_DWORD *)(a2 + 16);
      if ( (gDebugger & 0xD0) != 0 )
      {
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) - 18) <= 1 )
        {
          ++dword_1C005A114;
          PrintIndent(a1);
        }
        ConPrintf("%s");
        if ( *(_DWORD *)(v3 + 76) )
          ConPrintf("(");
        v6 = 2LL;
        v5 = 1LL;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v3 + 56) + 28LL) & 1) != 0 )
      {
        v74 = (unsigned __int64 *)(v3 + 40);
        if ( v3 != -40 )
          *v74 = (unsigned __int64)v4[15];
        v75 = v4[15];
        v76 = (unsigned __int8)*v75;
        v77 = v75 + 1;
        v4[15] = v75 + 1;
        v78 = (v76 >> 6) & 3;
        if ( v78 )
        {
          v76 &= 0xFu;
          for ( i = 0; i < v78; ++i )
          {
            v153 = (unsigned __int8)*v77++;
            v154 = i;
            v4[15] = v77;
            v76 |= v153 << (8 * v154 + 4);
          }
        }
        if ( v3 != -40 )
          *v74 += v76;
        if ( (gOverrideFlags & 4) == 0 )
        {
          v79 = *(_QWORD *)(v3 + 48);
          if ( v79 )
          {
            if ( *v74 > v79 )
            {
              NameSpaceObjectNoLock = -1072431089;
              LogError(3222536207LL);
              PrintDebugMessage(143, *v74, *(_QWORD *)(v3 + 48), 0, 0LL);
              return NameSpaceObjectNoLock;
            }
          }
        }
        v6 = 2LL;
      }
      goto LABEL_5;
    }
  }
  v33 = v7 - 1;
  if ( v33 )
  {
    NameSpaceObjectNoLock = a3;
    v34 = v33 - 1;
    if ( v34 )
    {
      v35 = v34 - 1;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          if ( v36 != 1 )
            return NameSpaceObjectNoLock;
          goto LABEL_98;
        }
        goto LABEL_95;
      }
    }
    else
    {
LABEL_90:
      ++*(_DWORD *)(v3 + 16);
      a2 = *(_QWORD *)(v3 + 56);
      if ( *(int *)(a2 + 28) < 0 )
      {
        v177 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(a2 + 32);
        if ( v177 )
        {
          NameSpaceObjectNoLock = v177(
                                    12LL,
                                    1LL,
                                    *(unsigned int *)(a2 + 8),
                                    *(_QWORD *)(v3 + 64) + 112LL,
                                    *(_DWORD *)(a2 + 40),
                                    v4);
          if ( NameSpaceObjectNoLock == 259 )
            return 32772;
        }
      }
    }
    ++*(_DWORD *)(v3 + 16);
    if ( (gDebugger & 0xD0) != 0 && *(_DWORD *)(v3 + 76) )
      ConPrintf(")");
    v43 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v3 + 56) + 48LL);
    if ( v43 )
    {
      NameSpaceObjectNoLock = v43(v4, v3, a3, v6);
      if ( NameSpaceObjectNoLock || (char *)v3 != v4[52] )
        return NameSpaceObjectNoLock;
    }
LABEL_95:
    ++*(_DWORD *)(v3 + 16);
    if ( (gDebugger & 0xD0) != 0 )
    {
      a2 = *(_QWORD *)(v3 + 56);
      if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 17) > 2 && *(_DWORD *)(a2 + 24) == 4 )
      {
        ConPrintf("=");
        PrintObject(*(_QWORD *)(v3 + 88));
      }
    }
    if ( (gDebugger & 0x40) != 0 )
    {
      _InterlockedAnd(&gDebugger, 0xFFFFFFBF);
      AMLIDebugger(2LL, a2, a3, v6);
      goto LABEL_98;
    }
    v44 = *(_QWORD *)(v3 + 56);
    v45 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(v44 + 32);
    if ( !v45 )
      goto LABEL_98;
    if ( *(int *)(v44 + 28) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(v44 + 32))(
        1LL,
        *(unsigned int *)(v44 + 8),
        *(_QWORD *)(v3 + 64) + 112LL,
        *(unsigned int *)(v44 + 40));
      goto LABEL_98;
    }
    NameSpaceObjectNoLock = v45(
                              12LL,
                              2LL,
                              *(unsigned int *)(v44 + 8),
                              *(_QWORD *)(v3 + 64) + 112LL,
                              *(_DWORD *)(v44 + 40),
                              v4);
    if ( NameSpaceObjectNoLock != 259 )
    {
LABEL_98:
      if ( (gDebugger & 0xD0) != 0 && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v3 + 56) + 8LL) - 18) <= 1 )
        --dword_1C005A114;
      v46 = *(_QWORD *)(v3 + 80);
      if ( !v46 )
        goto LABEL_115;
      v47 = *(_DWORD *)(v3 + 76);
      if ( v47 )
      {
        v48 = v47;
        do
        {
          if ( (*(_BYTE *)v46 & 1) != 0 )
          {
            v147 = *(_QWORD *)(v46 + 8);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v147 + 8), 0xFFFFFFFF) == 1
              && (*(_BYTE *)v147 & 8) != 0 )
            {
              FreeData((_QWORD *)v147);
            }
          }
          else if ( *(_QWORD *)(v46 + 32) )
          {
            if ( *(int *)(v46 + 8) > 0 )
            {
              *(_WORD *)v46 |= 8u;
            }
            else
            {
              if ( *(_WORD *)(v46 + 2) == 4 )
                FreeDataBuffs(*(_QWORD *)(v46 + 32) + 8LL, **(_DWORD **)(v46 + 32));
              FreeObjData(v46);
            }
          }
          *(_QWORD *)v46 = 0LL;
          *(_QWORD *)(v46 + 8) = 0LL;
          *(_QWORD *)(v46 + 16) = 0LL;
          *(_QWORD *)(v46 + 24) = 0LL;
          *(_QWORD *)(v46 + 32) = 0LL;
          v46 += 40LL;
          --v48;
        }
        while ( v48 );
      }
      v49 = *(_QWORD *)(v3 + 80) - 16LL;
      *(_DWORD *)v49 = 0;
      byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v51 = (__int64 *)(v49 + 16);
      v52 = *(_QWORD *)(v49 + 8);
      v53 = *(__int64 **)(v52 + 40);
      if ( v53 )
      {
        v80 = *(__int64 **)(v52 + 40);
        while ( v51 >= v80 )
        {
          v80 = (__int64 *)v80[1];
          if ( v80 == v53 )
          {
            if ( v51 >= v80 )
            {
              *(_QWORD *)(v49 + 24) = v53;
              *v51 = **(_QWORD **)(v52 + 40);
              *(_QWORD *)(**(_QWORD **)(v52 + 40) + 8LL) = v51;
              **(_QWORD **)(v52 + 40) = v51;
              goto LABEL_108;
            }
            break;
          }
        }
        *(_QWORD *)(v49 + 24) = v80;
        v133 = *v80;
        *v51 = *v80;
        *(_QWORD *)(v133 + 8) = v51;
        **(_QWORD **)(v49 + 24) = v51;
        if ( *(__int64 **)(v52 + 40) != v80 )
          goto LABEL_108;
      }
      else
      {
        *(_QWORD *)(v52 + 40) = v51;
        *(_QWORD *)(v49 + 24) = v49 + 16;
        *v51 = (__int64)v51;
      }
      *(_QWORD *)(v52 + 40) = v51;
LABEL_108:
      v54 = *(unsigned int *)(v49 + 4);
      v55 = (_QWORD **)(v54 + v49 + 16);
      if ( *(_QWORD ***)(v49 + 24) == v55 )
      {
        *(_DWORD *)(v49 + 4) = *(_DWORD *)(v54 + v49 + 4) + v54;
        if ( v55[1] == v55 )
        {
          *(_QWORD *)(v52 + 40) = 0LL;
        }
        else
        {
          v136 = *(_QWORD *)(v52 + 40);
          if ( v55 == (_QWORD **)v136 )
            *(_QWORD *)(v52 + 40) = *(_QWORD *)(v136 + 8);
          *v55[1] = *v55;
          (*v55)[1] = v55[1];
        }
      }
      v56 = *v51 - 16;
      v57 = *(unsigned int *)(v56 + 4);
      if ( v49 == v56 + v57 )
      {
        *(_DWORD *)(v56 + 4) = v57 + *(_DWORD *)(v49 + 4);
        ListRemoveEntry(v49 + 16, v52 + 40, v51, v50);
        v49 = v178;
      }
      if ( *(_QWORD *)(v52 + 32) <= v49 + (unsigned __int64)*(unsigned int *)(v49 + 4) )
      {
        *(_QWORD *)(v52 + 32) = v49;
        v58 = (_QWORD **)(v49 + 16);
        if ( v58[1] == v58 )
        {
          *(_QWORD *)(v52 + 40) = 0LL;
        }
        else
        {
          v151 = *(_QWORD *)(v52 + 40);
          if ( v58 == (_QWORD **)v151 )
            *(_QWORD *)(v52 + 40) = *(_QWORD *)(v151 + 8);
          *v58[1] = *v58;
          (*v58)[1] = v58[1];
        }
      }
      KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
LABEL_115:
      v59 = *(_QWORD *)(v3 + 64);
      if ( v59 )
      {
        if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v59 + 104), 0xFFFFFFFF) == 1 )
        {
          *(_WORD *)(v59 + 56) |= 4u;
          if ( (*(_WORD *)(v59 + 56) & 0x40) == 0 )
            FreeNameSpaceObjects();
        }
        *(_QWORD *)(v3 + 64) = 0LL;
      }
      v60 = v4[52];
      v61 = v60 - 16;
      v4[52] = (char *)*((_QWORD *)v60 + 1);
      *((_DWORD *)v60 - 4) = 0;
      byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v63 = (__int64 *)(v61 + 16);
      v64 = *((_QWORD *)v61 + 1);
      v65 = *(__int64 **)(v64 + 40);
      if ( v65 )
      {
        v105 = *(__int64 **)(v64 + 40);
        while ( v63 >= v105 )
        {
          v105 = (__int64 *)v105[1];
          if ( v105 == v65 )
          {
            if ( v63 >= v105 )
            {
              *((_QWORD *)v61 + 3) = v65;
              *v63 = **(_QWORD **)(v64 + 40);
              *(_QWORD *)(**(_QWORD **)(v64 + 40) + 8LL) = v63;
              **(_QWORD **)(v64 + 40) = v63;
              goto LABEL_119;
            }
            break;
          }
        }
        *((_QWORD *)v61 + 3) = v105;
        v106 = *v105;
        *v63 = *v105;
        *(_QWORD *)(v106 + 8) = v63;
        **((_QWORD **)v61 + 3) = v63;
        if ( *(__int64 **)(v64 + 40) == v105 )
          goto LABEL_118;
      }
      else
      {
        *(_QWORD *)(v64 + 40) = v63;
        *((_QWORD *)v61 + 3) = v61 + 16;
        *v63 = (__int64)v63;
LABEL_118:
        *(_QWORD *)(v64 + 40) = v63;
      }
LABEL_119:
      v66 = *((unsigned int *)v61 + 1);
      v67 = (_QWORD **)&v61[v66 + 16];
      if ( *((_QWORD ***)v61 + 3) == v67 )
      {
        *((_DWORD *)v61 + 1) = *(_DWORD *)&v61[v66 + 4] + v66;
        if ( v67[1] == v67 )
        {
          *(_QWORD *)(v64 + 40) = 0LL;
        }
        else
        {
          v137 = *(_QWORD *)(v64 + 40);
          if ( v67 == (_QWORD **)v137 )
            *(_QWORD *)(v64 + 40) = *(_QWORD *)(v137 + 8);
          *v67[1] = *v67;
          (*v67)[1] = v67[1];
        }
      }
      v68 = *v63 - 16;
      v69 = *(unsigned int *)(v68 + 4);
      if ( v61 == (char *)(v68 + v69) )
      {
        *(_DWORD *)(v68 + 4) = v69 + *((_DWORD *)v61 + 1);
        ListRemoveEntry(v61 + 16, v64 + 40, v63, v62);
        v61 = v179;
      }
      if ( *(_QWORD *)(v64 + 32) <= (unsigned __int64)&v61[*((unsigned int *)v61 + 1)] )
      {
        *(_QWORD *)(v64 + 32) = v61;
        v70 = (_QWORD **)(v61 + 16);
        if ( v70[1] == v70 )
        {
          *(_QWORD *)(v64 + 40) = 0LL;
        }
        else
        {
          v148 = *(_QWORD *)(v64 + 40);
          if ( v70 == (_QWORD **)v148 )
            *(_QWORD *)(v64 + 40) = *(_QWORD *)(v148 + 8);
          *v70[1] = *v70;
          (*v70)[1] = v70[1];
        }
      }
      KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
      return NameSpaceObjectNoLock;
    }
    return 32772;
  }
LABEL_5:
  NameSpaceObjectNoLock = v180;
  v9 = v4 + 15;
  v184 = (const void **)(v4 + 15);
  a3 = 0x1C0000000uLL;
  while ( *(_DWORD *)(v3 + 72) < *(_DWORD *)(v3 + 76) )
  {
    while ( 1 )
    {
      v10 = *(unsigned int *)(v3 + 72);
      *(_DWORD *)(v3 + 72) = v10 + 1;
      if ( (gDebugger & 0xD0) != 0 && (_DWORD)v10 )
      {
        ConPrintf(",");
        v5 = 1LL;
        a3 = 0x1C0000000uLL;
        v6 = 2LL;
      }
      v11 = *(_QWORD *)(v3 + 80);
      v12 = *(_QWORD *)(v3 + 48);
      v188 = v12;
      v13 = v11 + 40 * v10;
      v181 = v13;
      v14 = *(char *)(v10 + *(_QWORD *)(*(_QWORD *)(v3 + 56) + 16LL));
      if ( v14 != 67 )
      {
        switch ( v14 )
        {
          case 'B':
            *(_WORD *)(v13 + 2) = 1;
            *(_QWORD *)(v13 + 16) = 0LL;
            *(_BYTE *)(v13 + 16) = *(*v9)++;
            if ( (gDebugger & 0xD0) != 0 )
            {
              ConPrintf("0x%I64x");
              v5 = 1LL;
              a3 = 0x1C0000000uLL;
            }
            NameSpaceObjectNoLock = 0;
            goto LABEL_85;
          case 'D':
            NameSpaceObjectNoLock = ParseInteger(v9, v13, 4LL);
            goto LABEL_83;
          case 'N':
            v107 = *v9;
            v108 = (unsigned __int8)**v9;
            v109 = (__int64)*(&OpcodeTable + v108);
            if ( !v109 || (*(_DWORD *)(v109 + 28) & 0x20) == 0 )
            {
              LogError(3222536193LL);
              PrintDebugMessage(132, (unsigned __int8)**v9, (unsigned int)*v9, 0, 0LL);
              NameSpaceObjectNoLock = -1072431103;
              goto LABEL_82;
            }
            if ( (_BYTE)v108 == 92 )
            {
              RtlStringCchCopyA(&pszDest, 0x100uLL, "\\");
              ++*v9;
            }
            else
            {
              if ( (_BYTE)v108 != 94 )
              {
                pszDest = 0;
                NameSpaceObjectNoLock = 0;
                v110 = -1LL;
                do
                  ++v110;
                while ( *(&pszDest + v110) );
                v111 = *v107;
                if ( *v107 )
                {
                  if ( v111 != 47 )
                  {
                    if ( v111 == 46 )
                    {
                      v112 = 2;
                      *v9 = v107 + 1;
                    }
                    else
                    {
                      v112 = 1;
                    }
                    goto LABEL_203;
                  }
                  *v9 = v107 + 1;
                  v112 = (unsigned __int8)v107[1];
                  *v9 = v107 + 2;
                  if ( v112 )
                  {
LABEL_203:
                    v113 = v110 + 1;
                    while ( 1 )
                    {
                      if ( (unsigned __int64)(unsigned int)v110 + 4 >= 0x100 )
                      {
                        LogError(3221225734LL);
                        PrintDebugMessage(130, (unsigned int)&pszDest, 0, 0, 0LL);
                        NameSpaceObjectNoLock = -1073741562;
                        goto LABEL_214;
                      }
                      v114 = &pszDest + (unsigned int)v110;
                      v115 = (unsigned int)(256 - v110);
                      if ( (unsigned __int64)(v115 - 1) <= 0x7FFFFFFE )
                        break;
                      if ( 256 != (_DWORD)v110 )
                        goto LABEL_212;
LABEL_213:
                      *v9 += 4;
                      LODWORD(v110) = v110 + 4;
                      v113 += 4;
                      if ( !--v112 )
                        goto LABEL_214;
                      if ( v113 < 0x100 )
                      {
                        RtlStringCchCopyA(&pszDest + (unsigned int)v110, (unsigned int)(256 - v110), ".");
                        LODWORD(v110) = v110 + 1;
                        ++v113;
                      }
                    }
                    v6 = 4 - v115;
                    v116 = *v9 - v114;
                    while ( v115 + v6 )
                    {
                      v117 = v114[v116];
                      if ( !v117 )
                        break;
                      *v114++ = v117;
                      if ( !--v115 )
                        goto LABEL_390;
                    }
                    if ( !v115 )
LABEL_390:
                      --v114;
LABEL_212:
                    *v114 = 0;
                    goto LABEL_213;
                  }
                }
                else
                {
                  *v9 = v107 + 1;
                }
LABEL_215:
                if ( NameSpaceObjectNoLock )
                  goto LABEL_82;
                if ( (gDebugger & 0xD0) != 0 )
                {
                  ConPrintf("%s");
                  v13 = v181;
                }
                *(_WORD *)(v13 + 2) = 2;
                v118 = -1LL;
                do
                  ++v118;
                while ( *(&pszDest + v118) );
                v119 = v118 + 1;
                v120 = 0LL;
                *(_DWORD *)(v13 + 24) = v119;
                v121 = 0LL;
                v122 = gpheapGlobal;
                v123 = v119 + 16;
                if ( v119 + 16 < v119 )
                  goto LABEL_401;
                if ( v123 < 0x20 )
                  v123 = 32;
                if ( v123 + 7 < v123 )
                  goto LABEL_401;
                v124 = (v123 + 7) & 0xFFFFFFF8;
                byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
                if ( v124 <= *(_DWORD *)(v122 + 8) - (int)v122 - 48 )
                {
                  v128 = v122;
                  v186 = v122;
                  while ( 1 )
                  {
                    v129 = *(_QWORD *)(v128 + 40);
                    v120 = 0LL;
                    if ( v129 )
                    {
                      v130 = *(_QWORD *)(v128 + 40);
                      do
                      {
                        v120 = v130 - 16;
                        if ( v124 <= *(_DWORD *)(v130 - 12) )
                          goto LABEL_229;
                        v130 = *(_QWORD *)(v130 + 8);
                      }
                      while ( v130 != v129 );
                      if ( v124 > *(_DWORD *)(v120 + 4) )
                        v120 = 0LL;
                    }
LABEL_229:
                    if ( v120 )
                      break;
                    if ( v124 <= *(_DWORD *)(v128 + 8) - *(_DWORD *)(v128 + 32) )
                    {
                      v120 = *(_QWORD *)(v128 + 32);
                      *(_QWORD *)(v128 + 32) = v120 + v124;
                      *(_DWORD *)(v120 + 4) = v124;
                      goto LABEL_236;
                    }
                    v121 = v128;
                    v128 = *(_QWORD *)(v128 + 24);
                    v186 = v128;
                    if ( !v128 )
                      goto LABEL_236;
                  }
                  v131 = v120 + 16;
                  if ( *(_QWORD *)(v120 + 24) == v120 + 16 )
                  {
                    *(_QWORD *)(v128 + 40) = 0LL;
                  }
                  else
                  {
                    if ( v131 == v129 )
                      *(_QWORD *)(v128 + 40) = *(_QWORD *)(v129 + 8);
                    **(_QWORD **)(v120 + 24) = *(_QWORD *)(v120 + 16);
                    *(_QWORD *)(*(_QWORD *)v131 + 8LL) = *(_QWORD *)(v120 + 24);
                  }
                  v125 = v124;
                  if ( *(unsigned int *)(v120 + 4) >= (unsigned __int64)v124 + 32 )
                  {
                    v163 = v120 + v124;
                    *(_DWORD *)v163 = 0;
                    v164 = *(_DWORD *)(v120 + 4) - v124;
                    *(_QWORD *)(v163 + 8) = v128;
                    *(_DWORD *)(v163 + 4) = v164;
                    *(_DWORD *)(v120 + 4) = v124;
                    HeapInsertFreeList(v128);
                  }
LABEL_236:
                  if ( v120 )
                    goto LABEL_237;
                  if ( v122 == gpheapGlobal )
                    v176 = NewGlobalHeap(&v186);
                  else
                    v176 = NewLocalHeap(&v186, v125, v126, v127);
                  if ( !v176 )
                  {
                    v128 = v186;
                    *(_QWORD *)(v186 + 16) = v122;
                    *(_QWORD *)(v121 + 24) = v128;
                    v120 = *(_QWORD *)(v128 + 32);
                    *(_QWORD *)(v128 + 32) = v120 + v124;
                    *(_DWORD *)(v120 + 4) = v124;
LABEL_237:
                    *(_DWORD *)v120 = 1381258056;
                    *(_QWORD *)(v120 + 8) = v128;
                    memset((void *)(v120 + 16), 0, v124 - 16LL);
                  }
                }
                KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
                if ( v120 )
                {
                  v132 = (void *)(v120 + 16);
                  goto LABEL_240;
                }
LABEL_401:
                v132 = 0LL;
LABEL_240:
                *(_QWORD *)(v181 + 32) = v132;
                if ( v132 )
                {
                  memmove(v132, &pszDest, *(unsigned int *)(v181 + 24));
                }
                else
                {
                  LogError(3221225626LL);
                  PrintDebugMessage(131, (unsigned int)&pszDest, 0, 0, 0LL);
                  NameSpaceObjectNoLock = -1073741670;
                }
                goto LABEL_82;
              }
              RtlStringCchCopyA(&pszDest, 0x100uLL, "^");
              ++*v9;
              v173 = &v190;
              v174 = *v9;
              v175 = 1LL;
              do
              {
                if ( *v174 != 94 )
                  break;
                ++v174;
                *v173++ = 94;
                *v9 = v174;
                v175 = (unsigned int)(v175 + 1);
              }
              while ( (unsigned int)v175 < 0xFF );
              *(&pszDest + v175) = 0;
              if ( **v9 == 94 )
              {
                LogError(3221225734LL);
                PrintDebugMessage(129, (unsigned int)&pszDest, 0, 0, 0LL);
                NameSpaceObjectNoLock = -1073741562;
                goto LABEL_82;
              }
            }
            NameSpaceObjectNoLock = ParseNameTail(v9, (__int64)&pszDest);
LABEL_214:
            v13 = v181;
            goto LABEL_215;
          case 'O':
            LOBYTE(a3) = 1;
            NameSpaceObjectNoLock = ParseIntObj(v9, v13, a3);
            if ( NameSpaceObjectNoLock == -1072431103 )
            {
              NameSpaceObjectNoLock = ParseString((const void **)v9, v181, 1);
              if ( NameSpaceObjectNoLock == -1072431103 )
              {
                v149 = **v9;
                if ( (unsigned __int8)(v149 - 17) <= 2u )
                {
                  v150 = PushTerm((_DWORD)v4, (unsigned int)*v9, v12, (unsigned int)*(&OpcodeTable + v149), v181);
                  ++*v9;
                  NameSpaceObjectNoLock = v150;
                }
              }
            }
            goto LABEL_83;
          case 'S':
            NameSpaceObjectNoLock = ParseSuperName(v4, v13, 0LL);
            goto LABEL_83;
          case 'W':
            NameSpaceObjectNoLock = ParseInteger(v9, v13, 2LL);
            goto LABEL_83;
          case 's':
            LOBYTE(a3) = 1;
            NameSpaceObjectNoLock = ParseSuperName(v4, v13, a3);
            goto LABEL_83;
          default:
            LogError(3222536195LL);
            PrintDebugMessage(121, (char)v14, 0, 0, 0LL);
            NameSpaceObjectNoLock = -1072431101;
            goto LABEL_83;
        }
      }
      v15 = *v9;
      v16 = (char **)&unk_1C005A150;
      v17 = 0;
      v18 = 0LL;
      do
      {
        if ( v15 == *v16 )
          break;
        ++v17;
        ++v18;
        v16 += 2;
      }
      while ( (__int64)v16 < (__int64)&::P );
      if ( v17 != 10 && (dword_1C005A148[4 * v18] & 1) != 0 && v17 != -1 )
      {
        ConPrintf("\nHit Breakpoint %d.\n");
        ((void (*)(void))AMLIDebugger)();
        v13 = v181;
        v5 = 1LL;
        v6 = 2LL;
      }
      v19 = *v9;
      v20 = **v9;
      if ( v20 == 91 )
      {
        *v9 = v19 + 1;
        OpcodeTerm = FindOpcodeTerm((unsigned __int8)v19[1]);
      }
      else
      {
        OpcodeTerm = (__int64)*(&OpcodeTable + v20);
      }
      if ( !OpcodeTerm )
      {
        LogError(3222536193LL);
        PrintDebugMessage(134, *(unsigned __int8 *)*v184, (unsigned int)*v184, 0, 0LL);
        NameSpaceObjectNoLock = -1072431103;
        goto LABEL_82;
      }
      v22 = *(_DWORD *)(OpcodeTerm + 28);
      if ( (v22 & 8) != 0 )
      {
        v72 = v184;
        NameSpaceObjectNoLock = 0;
        v73 = *(unsigned __int8 *)*v184;
        *v184 = (char *)*v184 + 1;
        *(_WORD *)(v13 + 2) = v5;
        *(_QWORD *)(v13 + 16) = 0LL;
        if ( (_DWORD)v73 == 10 )
        {
          *(_BYTE *)(v13 + 16) = *(_BYTE *)*v72;
          *v72 = (char *)*v72 + 1;
        }
        else if ( (_DWORD)v73 == 12 )
        {
          *(_DWORD *)(v13 + 16) = *(_DWORD *)*v72;
          *v72 = (char *)*v72 + 4;
        }
        else
        {
          if ( (int)v73 <= 12 )
          {
            if ( !(_BYTE)v73 )
            {
              *(_QWORD *)(v13 + 16) = 0LL;
              if ( (gDebugger & 0xD0) != 0 )
                ConPrintf("Zero");
              goto LABEL_82;
            }
            if ( (_DWORD)v73 == 1 )
            {
              *(_QWORD *)(v13 + 16) = v5;
              if ( (gDebugger & 0xD0) != 0 )
                ConPrintf("One");
              goto LABEL_82;
            }
            if ( (_DWORD)v73 == 11 )
            {
              *(_WORD *)(v13 + 16) = *(_WORD *)*v72;
              *v72 = (char *)*v72 + 2;
              goto LABEL_181;
            }
LABEL_409:
            *v72 = (char *)*v72 - 1;
            LogError(3222536193LL);
            PrintDebugMessage(128, *(unsigned __int8 *)*v72, (unsigned int)*v72, 0, 0LL);
            NameSpaceObjectNoLock = -1072431103;
            goto LABEL_82;
          }
          if ( (_DWORD)v73 == 255 )
          {
            if ( (unsigned __int8)IsCompatableDSDTRevision(v73, (unsigned int)v73, v15, v6) )
              v171 = -1LL;
            else
              v171 = 0xFFFFFFFFLL;
            *(_QWORD *)(v181 + 16) = v171;
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("Ones");
            goto LABEL_82;
          }
          if ( (_DWORD)v73 != 14 )
            goto LABEL_409;
          *(_QWORD *)(v13 + 16) = *(_QWORD *)*v72;
          *v72 = (char *)*v72 + 8;
        }
LABEL_181:
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf("0x%I64x");
        goto LABEL_82;
      }
      if ( (v22 & 0x10) != 0 )
      {
        NameSpaceObjectNoLock = ParseString(v184, v13, 0);
        goto LABEL_82;
      }
      if ( (v22 & 2) != 0 )
      {
        v156 = v4[12];
        NameSpaceObjectNoLock = 0;
        v157 = (unsigned int)(unsigned __int8)*v4[15] - 104;
        if ( (unsigned int)v157 >= *((_DWORD *)v156 + 15) )
        {
          LogError(3222536197LL);
          PrintDebugMessage(122, v157, 0, 0, 0LL);
          NameSpaceObjectNoLock = -1072431099;
        }
        else
        {
          CopyObjData(v13, *((_QWORD *)v156 + 8) + 40 * v157, v15, v6);
          ++v4[15];
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("Arg%d=");
            PrintObject(v181);
          }
        }
        goto LABEL_82;
      }
      if ( (v22 & 4) != 0 )
      {
        v155 = (unsigned int)(unsigned __int8)*v4[15] - 96;
        CopyObjData(v13, &v4[12][32 * v155 + 72 + 8 * v155], v15, v155);
        if ( (gDebugger & 0xD0) != 0 )
        {
          ConPrintf("Local%d=");
          PrintObject(v181);
        }
        ++v4[15];
        NameSpaceObjectNoLock = 0;
        goto LABEL_82;
      }
      if ( (v22 & 0x20) == 0 )
      {
        if ( (v22 & 0x40) != 0 )
        {
          LogError(3222536198LL);
          PrintDebugMessage(133, 0, 0, 0, 0LL);
          NameSpaceObjectNoLock = -1072431098;
          goto LABEL_82;
        }
        ++v4[15];
        v81 = v4 + 54;
        v82 = 0LL;
        v83 = 0LL;
        byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        if ( (unsigned int)(*((_DWORD *)v81 + 2) - (_DWORD)v81 - 48) >= 0x70 )
        {
          v87 = v81;
          v185 = v81;
          while ( 1 )
          {
            v88 = v87[5];
            v82 = 0LL;
            if ( v88 )
            {
              v135 = v87[5];
              do
              {
                v82 = v135 - 16;
                if ( *(_DWORD *)(v135 - 12) >= 0x70u )
                  goto LABEL_152;
                v135 = *(_QWORD *)(v135 + 8);
              }
              while ( v135 != v88 );
              if ( *(_DWORD *)(v82 + 4) < 0x70u )
                v82 = 0LL;
            }
LABEL_152:
            if ( v82 )
              break;
            if ( (unsigned int)(*((_DWORD *)v87 + 2) - *((_DWORD *)v87 + 8)) >= 0x70 )
            {
              v82 = v87[4];
              v87[4] = v82 + 112;
              *(_DWORD *)(v82 + 4) = 112;
              goto LABEL_155;
            }
            v83 = v87;
            v87 = (_QWORD *)v87[3];
            v185 = v87;
            if ( !v87 )
              goto LABEL_155;
          }
          ListRemoveEntry(v82 + 16, v87 + 5, v85, v86);
          if ( *(_DWORD *)(v82 + 4) >= 0x90u )
          {
            *(_DWORD *)(v82 + 112) = 0;
            v165 = *(_DWORD *)(v82 + 4) - 112;
            *(_QWORD *)(v82 + 120) = v87;
            *(_DWORD *)(v82 + 116) = v165;
            *(_DWORD *)(v82 + 4) = 112;
            HeapInsertFreeList(v87);
          }
LABEL_155:
          if ( v82 )
          {
LABEL_156:
            *(_DWORD *)v82 = 1297237576;
            *(_QWORD *)(v82 + 8) = v87;
            memset((void *)(v82 + 16), 0, 0x60uLL);
          }
          else
          {
            if ( v81 == (_QWORD *)gpheapGlobal )
              v166 = NewGlobalHeap(&v185);
            else
              v166 = NewLocalHeap(&v185, v84, v85, v86);
            if ( !v166 )
            {
              v87 = v185;
              v185[2] = v81;
              v83[3] = v87;
              v82 = v87[4];
              v87[4] = v82 + 112;
              *(_DWORD *)(v82 + 4) = 112;
              goto LABEL_156;
            }
          }
        }
        KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
        if ( !v82 || (v89 = v82 + 16, v82 == -16) )
        {
          LogError(3222536194LL);
          PrintDebugMessage(153, 0, 0, 0, 0LL);
          NameSpaceObjectNoLock = -1072431102;
          goto LABEL_82;
        }
        *(_QWORD *)(v82 + 24) = a1[52];
        a1[52] = (char *)v89;
        *(_QWORD *)(v82 + 40) = ParseTerm;
        v90 = v188;
        *(_DWORD *)v89 = 1297237332;
        *(_QWORD *)(v82 + 48) = v19;
        *(_QWORD *)(v82 + 64) = v90;
        *(_QWORD *)(v82 + 72) = OpcodeTerm;
        *(_QWORD *)(v82 + 104) = v181;
        v91 = *(_QWORD *)(OpcodeTerm + 16);
        if ( v91 )
        {
          v92 = -1LL;
          do
            ++v92;
          while ( *(_BYTE *)(v91 + v92) );
        }
        else
        {
          LODWORD(v92) = 0;
        }
        *(_DWORD *)(v82 + 92) = v92;
        if ( (_DWORD)v92 )
        {
          v93 = a1[40];
          v94 = 40 * v92;
          v95 = 0LL;
          v96 = 0LL;
          v97 = v94 + 16;
          if ( v94 + 16 < v94 )
            goto LABEL_441;
          if ( v97 < 0x20 )
            v97 = 32;
          if ( v97 + 7 < v97 )
            goto LABEL_441;
          v98 = (v97 + 7) & 0xFFFFFFF8;
          byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          if ( v98 <= *((_DWORD *)v93 + 2) - (int)v93 - 48 )
          {
            v102 = (__int64)v93;
            v183 = v93;
            while ( 1 )
            {
              v103 = *(_QWORD *)(v102 + 40);
              v95 = 0LL;
              if ( v103 )
              {
                v134 = *(_QWORD *)(v102 + 40);
                do
                {
                  v95 = v134 - 16;
                  if ( v98 <= *(_DWORD *)(v134 - 12) )
                    goto LABEL_170;
                  v134 = *(_QWORD *)(v134 + 8);
                }
                while ( v134 != v103 );
                if ( v98 > *(_DWORD *)(v95 + 4) )
                  v95 = 0LL;
              }
LABEL_170:
              if ( v95 )
                break;
              if ( v98 <= *(_DWORD *)(v102 + 8) - *(_DWORD *)(v102 + 32) )
              {
                v95 = *(_QWORD *)(v102 + 32);
                *(_QWORD *)(v102 + 32) = v95 + v98;
                *(_DWORD *)(v95 + 4) = v98;
                goto LABEL_173;
              }
              v96 = v102;
              v102 = *(_QWORD *)(v102 + 24);
              v183 = (char *)v102;
              if ( !v102 )
                goto LABEL_173;
            }
            ListRemoveEntry(v95 + 16, v102 + 40, v100, v101);
            v99 = v98;
            if ( *(unsigned int *)(v95 + 4) >= (unsigned __int64)v98 + 32 )
            {
              v161 = v95 + v98;
              *(_DWORD *)v161 = 0;
              v162 = *(_DWORD *)(v95 + 4) - v98;
              *(_QWORD *)(v161 + 8) = v102;
              *(_DWORD *)(v161 + 4) = v162;
              *(_DWORD *)(v95 + 4) = v98;
              HeapInsertFreeList((char *)v102);
            }
LABEL_173:
            if ( v95 )
            {
LABEL_174:
              *(_DWORD *)v95 = 1413563464;
              *(_QWORD *)(v95 + 8) = v102;
              memset((void *)(v95 + 16), 0, v98 - 16LL);
            }
            else
            {
              if ( v93 == (char *)gpheapGlobal )
                v167 = NewGlobalHeap(&v183);
              else
                v167 = NewLocalHeap(&v183, v99, v100, v101);
              if ( !v167 )
              {
                v102 = (__int64)v183;
                *((_QWORD *)v183 + 2) = v93;
                *(_QWORD *)(v96 + 24) = v102;
                v95 = *(_QWORD *)(v102 + 32);
                *(_QWORD *)(v102 + 32) = v95 + v98;
                *(_DWORD *)(v95 + 4) = v98;
                goto LABEL_174;
              }
            }
          }
          KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
          if ( v95 )
            v104 = (void *)(v95 + 16);
          else
LABEL_441:
            v104 = 0LL;
          *(_QWORD *)(v89 + 80) = v104;
          if ( !v104 )
          {
            LogError(3221225626LL);
            PrintDebugMessage(154, 0, 0, 0, 0LL);
            NameSpaceObjectNoLock = -1073741670;
            goto LABEL_82;
          }
          memset(v104, 0, 40LL * *(unsigned int *)(v89 + 76));
        }
        NameSpaceObjectNoLock = 0;
        goto LABEL_82;
      }
      v23 = v4[15];
      v24 = (const void **)(v4 + 15);
      if ( *v23 == 92 )
      {
        RtlStringCchCopyA(&Src, 0x100uLL, "\\");
        ++v4[15];
        goto LABEL_334;
      }
      if ( *v23 == 94 )
      {
        RtlStringCchCopyA(&Src, 0x100uLL, "^");
        ++v4[15];
        v168 = &v192;
        v169 = v4[15];
        for ( j = 1; j < 0xFF; ++j )
        {
          if ( *v169 != 94 )
            break;
          ++v169;
          *v168++ = 94;
          v4[15] = v169;
        }
        *(&Src + j) = 0;
        if ( *v4[15] == 94 )
        {
          LogError(3221225734LL);
          PrintDebugMessage(129, (unsigned int)&Src, 0, 0, 0LL);
          NameSpaceObjectNoLock = -1073741562;
          goto LABEL_64;
        }
LABEL_334:
        NameSpaceObjectNoLock = ParseNameTail(v4 + 15, (__int64)&Src);
        goto LABEL_53;
      }
      Src = 0;
      NameSpaceObjectNoLock = 0;
      v25 = -1LL;
      do
        ++v25;
      while ( *(&Src + v25) );
      v26 = *v23;
      if ( !*v23 )
      {
        *v24 = v23 + 1;
        goto LABEL_53;
      }
      if ( v26 == 47 )
      {
        *v24 = v23 + 1;
        v27 = (unsigned __int8)v23[1];
        *v24 = v23 + 2;
        if ( !v27 )
          goto LABEL_52;
      }
      else if ( v26 == 46 )
      {
        v27 = v6;
        *v24 = v23 + 1;
      }
      else
      {
        v27 = v5;
      }
      v28 = v25 + 1;
      while ( (unsigned __int64)(unsigned int)v25 + 4 < 0x100 )
      {
        v29 = &Src + (unsigned int)v25;
        v30 = (unsigned int)(256 - v25);
        if ( (unsigned __int64)(v30 - 1) <= 0x7FFFFFFE )
        {
          v6 = 4 - v30;
          v31 = (_BYTE *)*v24 - v29;
          while ( v30 + v6 )
          {
            v32 = v29[v31];
            if ( !v32 )
              break;
            *v29++ = v32;
            if ( !--v30 )
              goto LABEL_416;
          }
          if ( v30 )
            goto LABEL_50;
LABEL_416:
          --v29;
LABEL_50:
          *v29 = 0;
          goto LABEL_51;
        }
        if ( 256 != (_DWORD)v25 )
          goto LABEL_50;
LABEL_51:
        *v24 = (char *)*v24 + 4;
        LODWORD(v25) = v25 + 4;
        v28 += 4;
        if ( !--v27 )
          goto LABEL_52;
        if ( v28 < 0x100 )
        {
          RtlStringCchCopyA(&Src + (unsigned int)v25, (unsigned int)(256 - v25), ".");
          v24 = v184;
          LODWORD(v25) = v25 + 1;
          ++v28;
        }
      }
      LogError(3221225734LL);
      PrintDebugMessage(130, (unsigned int)&Src, 0, 0, 0LL);
      NameSpaceObjectNoLock = -1073741562;
LABEL_52:
      v4 = a1;
LABEL_53:
      if ( !NameSpaceObjectNoLock )
      {
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf("%s");
        v37 = -1LL;
        do
          ++v37;
        while ( *(&Src + v37) );
        if ( v37 + 1 < 0x80 )
        {
          PoolWithTag = P;
          goto LABEL_60;
        }
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v37 + 1, 0x69706341u);
        if ( !PoolWithTag )
        {
          NameSpaceObjectNoLock = -1073741670;
          goto LABEL_82;
        }
LABEL_60:
        memmove(PoolWithTag, &Src, v37);
        PoolWithTag[v37] = 0;
        v39 = ExAcquireSpinLockShared(&ACPINamespaceLock);
        NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag);
        ExReleaseSpinLockShared(&ACPINamespaceLock, v39);
        if ( P != PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        if ( NameSpaceObjectNoLock == -1073741772 )
        {
          LogError(3221225524LL);
          PrintDebugMessage(120, (unsigned int)&Src, 0, 0, 0LL);
        }
      }
LABEL_64:
      if ( !NameSpaceObjectNoLock )
      {
        v40 = 0LL;
        if ( MEMORY[0x3A] == 128 )
        {
          do
            v40 = *(_QWORD *)(v40 + 72);
          while ( *(_WORD *)(v40 + 58) == 128 );
        }
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v40 + 104));
        if ( *(_WORD *)(v40 + 58) == 8 )
        {
          NameSpaceObjectNoLock = PushCall(v4, v40, v181);
        }
        else
        {
          v41 = v40 + 56;
          NameSpaceObjectNoLock = 0;
          while ( 1 )
          {
            while ( 1 )
            {
              v42 = *(_WORD *)(v41 + 2);
              if ( v42 != 128 )
                break;
              v41 = *(_QWORD *)(v41 + 16) + 56LL;
            }
            if ( v42 != 129 )
              break;
            v41 = *(_QWORD *)(v41 + 16);
          }
          if ( v42 != 5 )
          {
            if ( v42 == 14 )
            {
              NameSpaceObjectNoLock = ReadField(v4, v41, *(_QWORD *)(v41 + 32) + 12LL, v181);
            }
            else
            {
              if ( v181 != v41 )
              {
                *(_OWORD *)v181 = *(_OWORD *)v41;
                *(_OWORD *)(v181 + 16) = *(_OWORD *)(v41 + 16);
                *(_QWORD *)(v181 + 32) = *(_QWORD *)(v41 + 32);
                if ( (*(_BYTE *)v41 & 1) != 0 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v41 + 8) + 8LL));
                }
                else if ( *(_QWORD *)(v41 + 32) )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v41 + 8));
                  *(_WORD *)v181 |= 1u;
                  *(_QWORD *)(v181 + 8) = v41;
                }
              }
              if ( (gDebugger & 0xD0) != 0 )
              {
                ConPrintf("=");
                PrintObject(v181);
              }
            }
            goto LABEL_80;
          }
          v138 = 0LL;
          v139 = 0LL;
          v140 = v4 + 54;
          byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          if ( (unsigned int)(*((_DWORD *)v140 + 2) - (_DWORD)v140 - 48) >= 0x40 )
          {
            v143 = v140;
            v187 = v140;
            v144 = 0LL;
            while ( 1 )
            {
              v145 = v143[5];
              v138 = 0LL;
              if ( v145 )
              {
                v158 = v143[5];
                while ( 1 )
                {
                  v159 = *(_DWORD *)(v158 - 12) < 0x40u;
                  v138 = v158 - 16;
                  if ( *(_DWORD *)(v158 - 12) >= 0x40u )
                    break;
                  v158 = *(_QWORD *)(v158 + 8);
                  if ( v158 == v145 )
                  {
                    v159 = *(_DWORD *)(v138 + 4) < 0x40u;
                    break;
                  }
                }
                if ( v159 )
                  v138 = 0LL;
              }
              if ( v138 )
                break;
              if ( (unsigned int)(*((_DWORD *)v143 + 2) - *((_DWORD *)v143 + 8)) >= 0x40 )
              {
                v138 = v143[4];
                v143[4] = v138 + 64;
                *(_DWORD *)(v138 + 4) = 64;
                goto LABEL_279;
              }
              v139 = v143;
              v143 = (_QWORD *)v143[3];
              v187 = v143;
              if ( !v143 )
                goto LABEL_279;
            }
            ListRemoveEntry(v138 + 16, v143 + 5, v142, 0LL);
            if ( *(_DWORD *)(v138 + 4) >= 0x60u )
            {
              *(_DWORD *)(v138 + 64) = v144;
              v160 = *(_DWORD *)(v138 + 4) - 64;
              *(_QWORD *)(v138 + 72) = v143;
              *(_DWORD *)(v138 + 68) = v160;
              *(_DWORD *)(v138 + 4) = 64;
              HeapInsertFreeList(v143);
            }
LABEL_279:
            if ( v138 )
            {
LABEL_280:
              *(_DWORD *)v138 = 1297237576;
              *(_QWORD *)(v138 + 8) = v143;
              memset((void *)(v138 + 16), 0, 0x30uLL);
            }
            else
            {
              if ( v140 == (_QWORD *)gpheapGlobal )
                v172 = NewGlobalHeap(&v187);
              else
                v172 = NewLocalHeap(&v187, v141, v142, v144);
              if ( !v172 )
              {
                v143 = v187;
                v187[2] = v140;
                v139[3] = v143;
                v138 = v143[4];
                v143[4] = v138 + 64;
                *(_DWORD *)(v138 + 4) = 64;
                goto LABEL_280;
              }
            }
          }
          KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
          if ( v138 && (v146 = v138 + 16) != 0 )
          {
            *(_QWORD *)(v146 + 8) = a1[52];
            a1[52] = (char *)v146;
            *(_QWORD *)(v146 + 24) = AccFieldUnit;
            *(_DWORD *)v146 = 1430668097;
            *(_QWORD *)(v146 + 32) = v41;
            *(_DWORD *)(v146 + 16) = 0x10000;
            *(_QWORD *)(v146 + 40) = v181;
          }
          else
          {
            LogError(3222536194LL);
            PrintDebugMessage(153, 0, 0, 0, 0LL);
            NameSpaceObjectNoLock = -1072431102;
          }
        }
LABEL_80:
        if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 104), 0xFFFFFFFF) == 1 )
        {
          *(_WORD *)(v40 + 56) |= 4u;
          if ( (*(_WORD *)(v40 + 56) & 0x40) == 0 )
            FreeNameSpaceObjects();
        }
        if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)0x68, 0xFFFFFFFF) == 1 )
        {
          MEMORY[0x38] |= 4u;
          if ( (MEMORY[0x38] & 0x40) == 0 )
            FreeNameSpaceObjects();
        }
      }
LABEL_82:
      v4 = a1;
LABEL_83:
      if ( NameSpaceObjectNoLock )
        return NameSpaceObjectNoLock;
      v9 = v4 + 15;
      v5 = 1LL;
      a3 = 0x1C0000000uLL;
LABEL_85:
      if ( (char *)v3 != v4[52] )
        return NameSpaceObjectNoLock;
      if ( *(_DWORD *)(v3 + 72) >= *(_DWORD *)(v3 + 76) )
        break;
      v6 = 2LL;
    }
LABEL_87:
    if ( (char *)v3 != v4[52] )
      return NameSpaceObjectNoLock;
    if ( *(_DWORD *)(v3 + 72) >= *(_DWORD *)(v3 + 76) )
    {
      ++*(_DWORD *)(v3 + 16);
      goto LABEL_90;
    }
    v6 = 2LL;
  }
  if ( !NameSpaceObjectNoLock )
    goto LABEL_87;
  return NameSpaceObjectNoLock;
}

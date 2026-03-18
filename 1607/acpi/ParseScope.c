/*
 * XREFs of ParseScope @ 0x1C001F120
 * Callers:
 *     <none>
 * Callees:
 *     FreeData @ 0x1C00036A4 (FreeData.c)
 *     NewGlobalHeap @ 0x1C00059D0 (NewGlobalHeap.c)
 *     ParseString @ 0x1C001373C (ParseString.c)
 *     ParseIntObj @ 0x1C0014BB0 (ParseIntObj.c)
 *     FreeNameSpaceObjects @ 0x1C0019DC0 (FreeNameSpaceObjects.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C001B600 (FreeObjData.c)
 *     ParseNameObj @ 0x1C001DEBC (ParseNameObj.c)
 *     CopyObjData @ 0x1C001ED78 (CopyObjData.c)
 *     NewLocalHeap @ 0x1C002039C (NewLocalHeap.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     AMLIDebugger @ 0x1C005A948 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 *     PrintIndent @ 0x1C005B420 (PrintIndent.c)
 *     PrintObject @ 0x1C005B45C (PrintObject.c)
 */

__int64 __fastcall ParseScope(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r15d
  __int64 v4; // rdi
  __int64 v5; // rbp
  int v6; // eax
  int v7; // eax
  unsigned __int64 *v8; // rbx
  __int64 v9; // r14
  unsigned __int8 *v10; // rax
  __int64 v11; // rbx
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r13
  PVOID v15; // r8
  PVOID *v16; // rax
  unsigned __int64 v17; // r12
  unsigned __int8 v18; // al
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rbp
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  unsigned int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rbp
  unsigned int v32; // ecx
  unsigned int v33; // edi
  __int64 v34; // rdx
  _QWORD *v35; // rax
  void *v36; // rcx
  __int64 v38; // r8
  _QWORD *v39; // rcx
  __int64 v40; // r8
  _QWORD *v41; // r10
  unsigned int v42; // eax
  _QWORD *v43; // rax
  __int64 *v44; // rcx
  __int64 v45; // r9
  __int64 v46; // r11
  _QWORD *v47; // rax
  __int64 v48; // r11
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned int *v53; // rbx
  __int64 v54; // r9
  unsigned int *v55; // rax
  unsigned int *i; // r8
  __int64 **v57; // rcx
  __int64 *v58; // rdx
  __int64 v59; // r10
  unsigned int *v60; // rax
  unsigned int *v61; // r10
  _QWORD *v62; // rbx
  __int64 v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // r8
  _QWORD *v66; // rcx
  __int64 v67; // r8
  _QWORD *v68; // r10
  int v69; // eax
  _QWORD *v70; // rax
  __int64 *v71; // rcx
  __int64 v72; // r9
  __int64 v73; // r11
  _QWORD *v74; // rax
  __int64 v75; // r11
  _QWORD *v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  unsigned int v79; // ecx
  _QWORD *v80; // r10
  __int64 v81; // rcx
  _QWORD *v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  int v86; // eax
  int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // rcx
  bool v90; // zf
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rbx
  __int64 v98; // r9
  int v99; // ecx
  _QWORD *v100; // r11
  __int64 v101; // rcx
  _QWORD *v102; // rax
  _QWORD *v103; // rcx
  _QWORD *v104; // rax
  _QWORD *v105; // r8
  __int64 v106; // rcx
  _QWORD *v107; // rax
  int v108; // ecx
  _QWORD *v109; // r11
  __int64 v110; // rcx
  _QWORD *v111; // rax
  _QWORD *v112; // rcx
  _QWORD *v113; // rax
  _QWORD *v114; // r8
  __int64 v115; // rcx
  _QWORD *v116; // rax
  __int64 *v117; // rcx
  __int64 **v118; // rax
  __int64 v119; // [rsp+30h] [rbp-58h] BYREF
  __int64 v120; // [rsp+38h] [rbp-50h]
  __int64 v121; // [rsp+90h] [rbp+8h]
  __int64 v123; // [rsp+A8h] [rbp+20h] BYREF

  v121 = a1;
  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( !(_DWORD)a3 || (_DWORD)a3 == 32769 || (_DWORD)a3 == 32774 )
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  else
    v6 = 2;
  if ( !v6 )
  {
    if ( (gDebugger & 0xD0) != 0 )
    {
      PrintIndent(a1);
      ConPrintf("{");
      ++dword_1C0074594;
      *(_DWORD *)(v4 + 16) |= 0x10000u;
    }
    ++*(_DWORD *)(v4 + 16);
LABEL_5:
    v8 = (unsigned __int64 *)(v5 + 120);
    v9 = 0LL;
LABEL_6:
    v10 = *(unsigned __int8 **)(v4 + 32);
    if ( v3 == 32769 )
    {
      *v8 = (unsigned __int64)v10;
      v90 = (*(_DWORD *)(v4 + 16) & 0x20000) == 0;
      *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 32);
      if ( v90 )
        goto LABEL_120;
      goto LABEL_170;
    }
    if ( v3 == 32774 )
    {
      *v8 = (unsigned __int64)v10;
      goto LABEL_231;
    }
    if ( *v8 >= (unsigned __int64)v10 )
      goto LABEL_114;
    while ( 1 )
    {
      qword_1C00745A0 = *v8;
      if ( (gDebugger & 0xD0) != 0 )
      {
        v91 = *(_DWORD *)(v4 + 16);
        if ( (v91 & 0x10000) != 0 )
        {
          *(_DWORD *)(v4 + 16) = v91 & 0xFFFEFFFF;
        }
        else if ( (gDebugger & 0x80u) != 0 )
        {
          _InterlockedAnd(&gDebugger, 0xFFFFFF7F);
          AMLIDebugger(a1, -1LL, a3, &P);
        }
      }
      if ( (gDebugger & 0xD0) != 0 && (unsigned __int8)(*(_BYTE *)*v8 - 18) > 1u )
        PrintIndent(v5);
      v11 = *(_QWORD *)(v4 + 72);
      if ( (*(_BYTE *)v11 & 1) != 0 )
      {
        v88 = *(_QWORD *)(v11 + 8);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v88 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v88 & 8) != 0 )
          FreeData((_QWORD *)v88);
      }
      else if ( *(_QWORD *)(v11 + 32) )
      {
        if ( *(int *)(v11 + 8) > 0 )
        {
          *(_WORD *)v11 |= 8u;
        }
        else
        {
          if ( *(_WORD *)(v11 + 2) == 4 )
            FreeDataBuffs(*(_QWORD *)(v11 + 32) + 8LL, **(_DWORD **)(v11 + 32));
          FreeObjData(v11);
        }
      }
      v12 = v9;
      *(_QWORD *)v11 = 0LL;
      v13 = v9;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_QWORD *)(v11 + 24) = 0LL;
      *(_QWORD *)(v11 + 32) = 0LL;
      v8 = (unsigned __int64 *)(v5 + 120);
      v14 = *(_QWORD *)(v4 + 72);
      v15 = *(PVOID *)(v5 + 120);
      v120 = *(_QWORD *)(v4 + 32);
      v16 = (PVOID *)&unk_1C00745D0;
      do
      {
        if ( v15 == *v16 )
          break;
        ++v12;
        ++v13;
        v16 += 2;
      }
      while ( (__int64)v16 < (__int64)&P );
      if ( v12 != 10 && (dword_1C00745C8[4 * v13] & 1) != 0 && v12 != -1 )
      {
        ConPrintf("\nHit Breakpoint %d.\n");
        AMLIDebugger(v93, v92, v94, v95);
      }
      v17 = *v8;
      v18 = *(_BYTE *)*v8;
      if ( v18 == 91 )
      {
        v19 = v9;
        *v8 = v17 + 1;
        v76 = &ExOpcodeTable;
        if ( &atMutex )
        {
          while ( *(unsigned __int8 *)(v17 + 1) != *(_DWORD *)v76 )
          {
            v76 += 2;
            if ( !v76[1] )
              goto LABEL_19;
          }
          v19 = v76[1];
        }
      }
      else
      {
        v19 = (__int64)*(&OpcodeTable + v18);
      }
LABEL_19:
      if ( !v19 )
      {
        LogError(3222536193LL);
        AcpiDiagTraceAmlError(v5, 3222536193LL);
        PrintDebugMessage(134, *(unsigned __int8 *)*v8, *v8, 0, v9);
        v3 = -1072431103;
LABEL_114:
        if ( v3 == 32769 )
        {
          *v8 = *(_QWORD *)(v4 + 32);
          *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 32);
LABEL_231:
          if ( (*(_DWORD *)(v4 + 16) & 0x20000) == 0 )
            goto LABEL_120;
LABEL_170:
          v3 = v9;
          goto LABEL_120;
        }
        if ( v3 != 32774 )
        {
          if ( v3 == 32772 )
            return v3;
LABEL_117:
          if ( v4 != *(_QWORD *)(v5 + 416) )
            return v3;
          if ( v3 || *v8 >= *(_QWORD *)(v4 + 32) )
            goto LABEL_120;
          goto LABEL_6;
        }
        *v8 = *(_QWORD *)(v4 + 32);
        if ( (*(_DWORD *)(v4 + 16) & 0x20000) != 0 )
          v3 = v9;
LABEL_120:
        ++*(_DWORD *)(v4 + 16);
LABEL_91:
        if ( (gDebugger & 0xD0) != 0 )
        {
          --dword_1C0074594;
          PrintIndent(v5);
          ConPrintf("}");
        }
        v49 = *(_QWORD *)(v5 + 80);
        if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 112), 0xFFFFFFFF) == 1 )
        {
          *(_WORD *)(v49 + 64) |= 4u;
          if ( (*(_WORD *)(v49 + 64) & 0x40) == 0 )
            FreeNameSpaceObjects((_QWORD *)v49);
        }
        *(_QWORD *)(v5 + 80) = *(_QWORD *)(v4 + 48);
        v50 = *(_QWORD *)(v4 + 56);
        *(_QWORD *)(v4 + 48) = v9;
        *(_QWORD *)(v5 + 88) = v50;
        *(_QWORD *)(v5 + 320) = *(_QWORD *)(v4 + 64);
        v51 = *(_QWORD *)(v4 + 40);
        if ( v51 )
          *(_QWORD *)(v5 + 120) = v51;
        v52 = *(_QWORD *)(v5 + 416);
        v53 = (unsigned int *)(v52 - 16);
        *(_QWORD *)(v5 + 416) = *(_QWORD *)(v52 + 8);
        *(_DWORD *)(v52 - 16) = v9;
        byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        v54 = *((_QWORD *)v53 + 1);
        v55 = *(unsigned int **)(v54 + 40);
        for ( i = (unsigned int *)(v54 + 40); v55 != i; v55 = *(unsigned int **)v55 )
        {
          if ( v53 + 4 < v55 )
            break;
        }
        v57 = (__int64 **)*((_QWORD *)v55 + 1);
        v58 = (__int64 *)(v53 + 4);
        if ( *v57 != (__int64 *)v55 )
          __fastfail(3u);
        *v58 = (__int64)v55;
        *((_QWORD *)v53 + 3) = v57;
        *v57 = v58;
        *((_QWORD *)v55 + 1) = v58;
        v59 = *v58 - 16;
        if ( (unsigned int *)*v58 != i )
        {
          v78 = v53[1];
          if ( (unsigned int *)v59 == (unsigned int *)((char *)v53 + v78) )
          {
            v79 = *(_DWORD *)(v59 + 4) + v78;
            v80 = (_QWORD *)*v58;
            v53[1] = v79;
            v81 = *v80;
            v82 = (_QWORD *)v80[1];
            if ( *(_QWORD **)(*v80 + 8LL) != v80 || (_QWORD *)*v82 != v80 )
              __fastfail(3u);
            *v82 = v81;
            *(_QWORD *)(v81 + 8) = v82;
          }
        }
        v60 = (unsigned int *)*((_QWORD *)v53 + 3);
        v61 = v60 - 4;
        if ( v60 != i )
        {
          v84 = v61[1];
          if ( v53 == (unsigned int *)((char *)v61 + v84) )
          {
            v61[1] = v53[1] + v84;
            v117 = (__int64 *)*v58;
            v118 = (__int64 **)*((_QWORD *)v53 + 3);
            if ( *(__int64 **)(*v58 + 8) != v58 || *v118 != v58 )
              __fastfail(3u);
            *v118 = v117;
            v53 = v61;
            v117[1] = (__int64)v118;
          }
        }
        if ( *(_QWORD *)(v54 + 32) <= (unsigned __int64)v53 + v53[1] )
        {
          *(_QWORD *)(v54 + 32) = v53;
          v62 = v53 + 4;
          v63 = *v62;
          v64 = (_QWORD *)v62[1];
          if ( *(_QWORD **)(*v62 + 8LL) != v62 || (_QWORD *)*v64 != v62 )
            __fastfail(3u);
          *v64 = v63;
          *(_QWORD *)(v63 + 8) = v64;
        }
        KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
        return v3;
      }
      v20 = *(_DWORD *)(v19 + 28);
      if ( (v20 & 8) != 0 )
      {
        v3 = ParseIntObj(v5, (_WORD **)(v5 + 120), v14, 0);
        goto LABEL_66;
      }
      if ( (v20 & 0x10) != 0 )
        break;
      if ( (v20 & 2) != 0 )
      {
        v3 = v9;
        v96 = *(_QWORD *)(v5 + 96);
        v97 = (unsigned int)*(unsigned __int8 *)*v8 - 104;
        if ( (unsigned int)v97 < *(_DWORD *)(v96 + 60) )
        {
          CopyObjData(v14, *(_QWORD *)(v96 + 64) + 40 * v97);
          ++*(_QWORD *)(v5 + 120);
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("Arg%d=");
            PrintObject(v14);
          }
        }
        else
        {
          LogError(3222536197LL);
          AcpiDiagTraceAmlError(v5, 3222536197LL);
          PrintDebugMessage(122, v97, 0, 0, v9);
          v3 = -1072431099;
        }
        goto LABEL_65;
      }
      if ( (v20 & 4) == 0 )
      {
        if ( (v20 & 0x20) != 0 )
        {
          v3 = ParseNameObj((_QWORD *)v5, v14);
        }
        else
        {
          if ( (v20 & 0x40) != 0 )
          {
            LogError(3222536198LL);
            AcpiDiagTraceAmlError(v5, 3222536198LL);
            PrintDebugMessage(133, 0, 0, 0, v9);
            v3 = -1072431098;
            goto LABEL_114;
          }
          ++*v8;
          v21 = v5 + 440;
          v22 = v9;
          v23 = v9;
          v3 = v9;
          byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          if ( (unsigned int)(*(_DWORD *)(v21 + 8) - v21 - 56) >= 0x70 )
          {
            v24 = v21;
            v123 = v21;
            while ( 1 )
            {
              v22 = *(_QWORD *)(v24 + 40) - 16LL;
              v25 = *(_QWORD **)(v24 + 40);
              if ( (_QWORD *)(v24 + 40) == v25 )
              {
LABEL_29:
                v22 = v9;
              }
              else
              {
                while ( *(_DWORD *)(v22 + 4) < 0x70u )
                {
                  v22 = *v25 - 16LL;
                  v25 = (_QWORD *)*v25;
                  if ( (_QWORD *)(v24 + 40) == v25 )
                    goto LABEL_29;
                }
              }
              if ( v22 )
                break;
              if ( (unsigned int)(*(_DWORD *)(v24 + 8) - *(_DWORD *)(v24 + 32)) >= 0x70 )
              {
                v22 = *(_QWORD *)(v24 + 32);
                *(_QWORD *)(v24 + 32) = v22 + 112;
                *(_DWORD *)(v22 + 4) = 112;
                goto LABEL_33;
              }
              v23 = v24;
              v24 = *(_QWORD *)(v24 + 24);
              v123 = v24;
              if ( !v24 )
                goto LABEL_33;
            }
            v65 = *(_QWORD *)(v22 + 16);
            v66 = *(_QWORD **)(v22 + 24);
            if ( *(_QWORD *)(v65 + 8) != v22 + 16 || *v66 != v22 + 16 )
              __fastfail(3u);
            *v66 = v65;
            *(_QWORD *)(v65 + 8) = v66;
            if ( *(_DWORD *)(v22 + 4) >= 0x90u )
            {
              v67 = v22 + 112;
              *(_DWORD *)(v22 + 112) = v9;
              v68 = (_QWORD *)(v24 + 40);
              v69 = *(_DWORD *)(v22 + 4) - 112;
              *(_QWORD *)(v22 + 120) = v24;
              *(_DWORD *)(v22 + 116) = v69;
              *(_DWORD *)(v22 + 4) = 112;
              v70 = *(_QWORD **)(v24 + 40);
              if ( v70 != (_QWORD *)(v24 + 40) )
              {
                do
                {
                  if ( v22 + 128 < (unsigned __int64)v70 )
                    break;
                  v70 = (_QWORD *)*v70;
                }
                while ( v70 != v68 );
              }
              v71 = (__int64 *)v70[1];
              v72 = v22 + 128;
              if ( (_QWORD *)*v71 != v70 )
                __fastfail(3u);
              *(_QWORD *)v72 = v70;
              *(_QWORD *)(v22 + 136) = v71;
              *v71 = v72;
              v70[1] = v72;
              v73 = *(_QWORD *)v72 - 16LL;
              if ( *(_QWORD **)v72 != v68 )
              {
                v85 = *(unsigned int *)(v22 + 116);
                if ( v73 == v67 + v85 )
                {
                  v99 = *(_DWORD *)(v73 + 4) + v85;
                  v100 = *(_QWORD **)v72;
                  *(_DWORD *)(v22 + 116) = v99;
                  v101 = *v100;
                  v102 = (_QWORD *)v100[1];
                  if ( *(_QWORD **)(*v100 + 8LL) != v100 || (_QWORD *)*v102 != v100 )
                    __fastfail(3u);
                  *v102 = v101;
                  *(_QWORD *)(v101 + 8) = v102;
                }
              }
              v74 = *(_QWORD **)(v22 + 136);
              v75 = (__int64)(v74 - 2);
              if ( v74 != v68 )
              {
                v89 = *(unsigned int *)(v75 + 4);
                if ( v67 == v75 + v89 )
                {
                  *(_DWORD *)(v75 + 4) = *(_DWORD *)(v22 + 116) + v89;
                  v103 = *(_QWORD **)v72;
                  v104 = *(_QWORD **)(v22 + 136);
                  if ( *(_QWORD *)(*(_QWORD *)v72 + 8LL) != v72 || *v104 != v72 )
                    __fastfail(3u);
                  *v104 = v103;
                  v67 = v75;
                  v103[1] = v104;
                }
              }
              if ( *(_QWORD *)(v24 + 32) <= v67 + (unsigned __int64)*(unsigned int *)(v67 + 4) )
              {
                *(_QWORD *)(v24 + 32) = v67;
                v105 = (_QWORD *)(v67 + 16);
                v106 = *v105;
                v107 = (_QWORD *)v105[1];
                if ( *(_QWORD **)(*v105 + 8LL) != v105 || (_QWORD *)*v107 != v105 )
                  __fastfail(3u);
                *v107 = v106;
                *(_QWORD *)(v106 + 8) = v107;
              }
            }
LABEL_33:
            if ( v22 )
            {
LABEL_34:
              *(_QWORD *)(v22 + 8) = v24;
              *(_DWORD *)v22 = 1297237576;
              memset((void *)(v22 + 16), 0, 0x60uLL);
            }
            else
            {
              if ( v21 == gpheapGlobal )
                v86 = NewGlobalHeap(&v123);
              else
                v86 = NewLocalHeap(&v123);
              if ( !v86 )
              {
                v24 = v123;
                *(_QWORD *)(v123 + 16) = v21;
                *(_QWORD *)(v23 + 24) = v24;
                v22 = *(_QWORD *)(v24 + 32);
                *(_QWORD *)(v24 + 32) = v22 + 112;
                *(_DWORD *)(v22 + 4) = 112;
                goto LABEL_34;
              }
            }
          }
          KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
          if ( !v22 || (v9 = v22 + 16, v22 == -16) )
          {
            LogError(3222536194LL);
            v5 = v121;
            AcpiDiagTraceAmlError(v121, 3222536194LL);
            PrintDebugMessage(153, 0, 0, 0, v9);
            v3 = -1072431102;
          }
          else
          {
            v5 = v121;
            *(_QWORD *)(v22 + 24) = *(_QWORD *)(v121 + 416);
            *(_QWORD *)(v121 + 416) = v9;
            *(_QWORD *)(v22 + 40) = ParseTerm;
            v26 = v120;
            *(_DWORD *)v9 = 1297237332;
            *(_QWORD *)(v22 + 48) = v17;
            *(_QWORD *)(v22 + 64) = v26;
            *(_QWORD *)(v22 + 72) = v19;
            *(_QWORD *)(v22 + 104) = v14;
            a1 = *(_QWORD *)(v19 + 16);
            if ( a1 )
            {
              v27 = -1LL;
              do
                ++v27;
              while ( *(_BYTE *)(a1 + v27) );
            }
            else
            {
              LODWORD(v27) = 0;
            }
            *(_DWORD *)(v22 + 92) = v27;
            if ( (_DWORD)v27 )
            {
              v28 = *(_QWORD *)(v121 + 320);
              v29 = 40 * v27;
              v30 = 0LL;
              v31 = 0LL;
              v32 = v29 + 16;
              if ( v29 + 16 < v29 )
                goto LABEL_210;
              if ( v32 < 0x20 )
                v32 = 32;
              if ( v32 + 7 < v32 )
                goto LABEL_210;
              v33 = (v32 + 7) & 0xFFFFFFF8;
              byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
              if ( v33 <= *(_DWORD *)(v28 + 8) - (int)v28 - 56 )
              {
                v34 = v28;
                v119 = v28;
                while ( 1 )
                {
                  v30 = *(_QWORD *)(v34 + 40) - 16LL;
                  v35 = *(_QWORD **)(v34 + 40);
                  if ( (_QWORD *)(v34 + 40) == v35 )
                  {
LABEL_48:
                    v30 = 0LL;
                  }
                  else
                  {
                    while ( v33 > *(_DWORD *)(v30 + 4) )
                    {
                      v30 = *v35 - 16LL;
                      v35 = (_QWORD *)*v35;
                      if ( (_QWORD *)(v34 + 40) == v35 )
                        goto LABEL_48;
                    }
                  }
                  if ( v30 )
                    break;
                  if ( v33 <= *(_DWORD *)(v34 + 8) - *(_DWORD *)(v34 + 32) )
                  {
                    v30 = *(_QWORD *)(v34 + 32);
                    *(_QWORD *)(v34 + 32) = v30 + v33;
                    *(_DWORD *)(v30 + 4) = v33;
                    goto LABEL_57;
                  }
                  v31 = v34;
                  v34 = *(_QWORD *)(v34 + 24);
                  v119 = v34;
                  if ( !v34 )
                    goto LABEL_57;
                }
                v38 = *(_QWORD *)(v30 + 16);
                v39 = *(_QWORD **)(v30 + 24);
                if ( *(_QWORD *)(v38 + 8) != v30 + 16 || *v39 != v30 + 16 )
                  __fastfail(3u);
                *v39 = v38;
                *(_QWORD *)(v38 + 8) = v39;
                if ( *(unsigned int *)(v30 + 4) >= (unsigned __int64)v33 + 32 )
                {
                  v40 = v30 + v33;
                  v41 = (_QWORD *)(v34 + 40);
                  *(_DWORD *)v40 = 0;
                  v42 = *(_DWORD *)(v30 + 4) - v33;
                  *(_QWORD *)(v40 + 8) = v34;
                  *(_DWORD *)(v40 + 4) = v42;
                  *(_DWORD *)(v30 + 4) = v33;
                  v43 = *(_QWORD **)(v34 + 40);
                  if ( v43 != (_QWORD *)(v34 + 40) )
                  {
                    do
                    {
                      if ( v40 + 16 < (unsigned __int64)v43 )
                        break;
                      v43 = (_QWORD *)*v43;
                    }
                    while ( v43 != v41 );
                  }
                  v44 = (__int64 *)v43[1];
                  v45 = v40 + 16;
                  if ( (_QWORD *)*v44 != v43 )
                    __fastfail(3u);
                  *(_QWORD *)v45 = v43;
                  *(_QWORD *)(v40 + 24) = v44;
                  *v44 = v45;
                  v43[1] = v45;
                  v46 = *(_QWORD *)v45 - 16LL;
                  if ( *(_QWORD **)v45 != v41 )
                  {
                    v83 = *(unsigned int *)(v40 + 4);
                    if ( v46 == v40 + v83 )
                    {
                      v108 = *(_DWORD *)(v46 + 4) + v83;
                      v109 = *(_QWORD **)v45;
                      *(_DWORD *)(v40 + 4) = v108;
                      v110 = *v109;
                      v111 = (_QWORD *)v109[1];
                      if ( *(_QWORD **)(*v109 + 8LL) != v109 || (_QWORD *)*v111 != v109 )
                        __fastfail(3u);
                      *v111 = v110;
                      *(_QWORD *)(v110 + 8) = v111;
                    }
                  }
                  v47 = *(_QWORD **)(v40 + 24);
                  v48 = (__int64)(v47 - 2);
                  if ( v47 != v41 )
                  {
                    v77 = *(unsigned int *)(v48 + 4);
                    if ( v40 == v48 + v77 )
                    {
                      *(_DWORD *)(v48 + 4) = *(_DWORD *)(v40 + 4) + v77;
                      v112 = *(_QWORD **)v45;
                      v113 = *(_QWORD **)(v40 + 24);
                      if ( *(_QWORD *)(*(_QWORD *)v45 + 8LL) != v45 || *v113 != v45 )
                        __fastfail(3u);
                      *v113 = v112;
                      v40 = v48;
                      v112[1] = v113;
                    }
                  }
                  if ( *(_QWORD *)(v34 + 32) <= v40 + (unsigned __int64)*(unsigned int *)(v40 + 4) )
                  {
                    *(_QWORD *)(v34 + 32) = v40;
                    v114 = (_QWORD *)(v40 + 16);
                    v115 = *v114;
                    v116 = (_QWORD *)v114[1];
                    if ( *(_QWORD **)(*v114 + 8LL) != v114 || (_QWORD *)*v116 != v114 )
                      __fastfail(3u);
                    *v116 = v115;
                    *(_QWORD *)(v115 + 8) = v116;
                  }
                }
LABEL_57:
                if ( v30 )
                {
LABEL_58:
                  *(_QWORD *)(v30 + 8) = v34;
                  *(_DWORD *)v30 = 1413563464;
                  memset((void *)(v30 + 16), 0, v33 - 16LL);
                }
                else
                {
                  if ( v28 == gpheapGlobal )
                    v87 = NewGlobalHeap(&v119);
                  else
                    v87 = NewLocalHeap(&v119);
                  if ( !v87 )
                  {
                    v34 = v119;
                    *(_QWORD *)(v119 + 16) = v28;
                    *(_QWORD *)(v31 + 24) = v34;
                    v30 = *(_QWORD *)(v34 + 32);
                    *(_QWORD *)(v34 + 32) = v30 + v33;
                    *(_DWORD *)(v30 + 4) = v33;
                    goto LABEL_58;
                  }
                }
              }
              KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
              if ( v30 )
                v36 = (void *)(v30 + 16);
              else
LABEL_210:
                v36 = 0LL;
              *(_QWORD *)(v9 + 80) = v36;
              if ( v36 )
              {
                memset(v36, 0, 40LL * *(unsigned int *)(v9 + 76));
                v5 = v121;
                goto LABEL_63;
              }
              LogError(3221225626LL);
              v5 = v121;
              AcpiDiagTraceAmlError(v121, 3221225626LL);
              v9 = 0LL;
              PrintDebugMessage(154, 0, 0, 0, 0LL);
              v3 = -1073741670;
            }
            else
            {
LABEL_63:
              v9 = 0LL;
            }
          }
          v4 = a2;
LABEL_65:
          v8 = (unsigned __int64 *)(v5 + 120);
        }
LABEL_66:
        if ( v3 )
          goto LABEL_114;
        goto LABEL_67;
      }
      v98 = (unsigned int)*(unsigned __int8 *)*v8 - 96;
      CopyObjData(v14, *(_QWORD *)(v5 + 96) + 8 * (v98 + 4 * v98 + 9));
      a1 = (unsigned int)gDebugger;
      if ( (gDebugger & 0xD0) != 0 )
      {
        ConPrintf("Local%d=");
        PrintObject(v14);
      }
      ++*v8;
      v3 = v9;
LABEL_67:
      if ( v4 != *(_QWORD *)(v5 + 416) )
        return v3;
      if ( *v8 >= *(_QWORD *)(v4 + 32) )
        goto LABEL_117;
    }
    v3 = ParseString(v5, (const void **)(v5 + 120), v14, 0);
    goto LABEL_66;
  }
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_5;
  if ( v7 == 1 )
  {
    v9 = 0LL;
    goto LABEL_91;
  }
  return v3;
}

/*
 * XREFs of ParseScope @ 0x1C0017240
 * Callers:
 *     <none>
 * Callees:
 *     FreeData @ 0x1C0003AE4 (FreeData.c)
 *     NewGlobalHeap @ 0x1C0005D90 (NewGlobalHeap.c)
 *     ParseString @ 0x1C000C8B4 (ParseString.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0010360 (FreeObjData.c)
 *     CopyObjData @ 0x1C0010728 (CopyObjData.c)
 *     ListRemoveEntry @ 0x1C0010770 (ListRemoveEntry.c)
 *     ParseIntObj @ 0x1C0010B60 (ParseIntObj.c)
 *     FreeNameSpaceObjects @ 0x1C0011A80 (FreeNameSpaceObjects.c)
 *     ParseNameObj @ 0x1C0015A18 (ParseNameObj.c)
 *     ListInsertTail @ 0x1C0017CB4 (ListInsertTail.c)
 *     NewLocalHeap @ 0x1C00186B8 (NewLocalHeap.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     AMLIDebugger @ 0x1C0043858 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintIndent @ 0x1C00443A0 (PrintIndent.c)
 *     PrintObject @ 0x1C00443DC (PrintObject.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ParseScope(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rbp
  _QWORD *v5; // r10
  int v6; // eax
  int v7; // eax
  unsigned __int64 *v8; // r15
  __int64 v9; // r14
  unsigned __int8 *v10; // rax
  __int64 v11; // rbx
  int v12; // edx
  __int64 v13; // rcx
  PVOID *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r13
  unsigned __int8 v19; // al
  int v20; // eax
  _QWORD *v21; // rbp
  __int64 v22; // rbx
  _QWORD *v23; // r15
  __int64 v24; // rdx
  _QWORD *v25; // r9
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rbp
  unsigned int v31; // eax
  __int64 v32; // rbx
  __int64 v33; // r13
  unsigned int v34; // ecx
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rax
  bool v41; // cc
  void *v42; // rcx
  __int64 v44; // rcx
  bool v45; // cf
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rbx
  _QWORD **v51; // r9
  __int64 v52; // rdi
  _QWORD *v53; // rax
  __int64 v54; // rdx
  _QWORD **v55; // rcx
  __int64 v56; // r11
  __int64 v57; // rcx
  _QWORD **v58; // rbx
  __int64 v59; // r10
  __int64 *v60; // rsi
  int v61; // eax
  __int64 *v62; // rax
  _QWORD **v63; // rcx
  __int64 v64; // r11
  __int64 v65; // rcx
  __int64 v66; // r10
  _QWORD **v67; // r11
  int v68; // eax
  _QWORD *v69; // rax
  _QWORD **v70; // rcx
  __int64 v71; // rsi
  __int64 v72; // rcx
  _QWORD *v73; // rcx
  _QWORD *v74; // rax
  __int64 *v75; // rcx
  _QWORD *v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  unsigned int v79; // eax
  unsigned int v80; // eax
  int v81; // eax
  _QWORD *v82; // rcx
  _QWORD *v83; // rax
  __int64 v84; // rcx
  bool v85; // zf
  int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  unsigned int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rbx
  __int64 v94; // r9
  int v95; // eax
  __int64 v96; // r11
  __int64 v97; // r11
  _QWORD v98[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v99; // [rsp+40h] [rbp-58h]
  _QWORD *v100; // [rsp+A0h] [rbp+8h]
  _QWORD *v102; // [rsp+B8h] [rbp+20h] BYREF

  v100 = (_QWORD *)a1;
  v3 = a3;
  v4 = a2;
  v5 = (_QWORD *)a1;
  if ( !(_DWORD)a3 || (_DWORD)a3 == 32769 || (_DWORD)a3 == 32774 )
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  else
    v6 = 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        goto LABEL_91;
      return v3;
    }
  }
  else
  {
    if ( (gDebugger & 0xD0) != 0 )
    {
      PrintIndent(a1);
      ConPrintf("{");
      ++dword_1C005A114;
      *(_DWORD *)(v4 + 16) |= 0x10000u;
      v5 = v100;
    }
    ++*(_DWORD *)(v4 + 16);
  }
  v8 = v5 + 15;
  v9 = 0LL;
  while ( 2 )
  {
    v10 = *(unsigned __int8 **)(v4 + 32);
    if ( v3 == 32769 )
    {
      *v8 = (unsigned __int64)v10;
      v85 = (*(_DWORD *)(v4 + 16) & 0x20000) == 0;
      *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 32);
      if ( v85 )
        goto LABEL_139;
      goto LABEL_190;
    }
    if ( v3 == 32774 )
    {
      *v8 = (unsigned __int64)v10;
      if ( (*(_DWORD *)(v4 + 16) & 0x20000) == 0 )
        goto LABEL_139;
LABEL_190:
      v3 = 0;
      goto LABEL_139;
    }
    if ( *v8 >= (unsigned __int64)v10 )
      goto LABEL_133;
    while ( 1 )
    {
      qword_1C005A120 = *v8;
      if ( (gDebugger & 0xD0) != 0 )
      {
        v86 = *(_DWORD *)(v4 + 16);
        if ( (v86 & 0x10000) != 0 )
        {
          *(_DWORD *)(v4 + 16) = v86 & 0xFFFEFFFF;
        }
        else if ( (gDebugger & 0x80u) != 0 )
        {
          _InterlockedAnd(&gDebugger, 0xFFFFFF7F);
          AMLIDebugger(a1, -1LL, a3, &P);
          v5 = v100;
        }
      }
      if ( (gDebugger & 0xD0) != 0 && (unsigned __int8)(*(_BYTE *)*v8 - 18) > 1u )
      {
        PrintIndent(v5);
        v5 = v100;
      }
      v11 = *(_QWORD *)(v4 + 72);
      if ( (*(_BYTE *)v11 & 1) != 0 )
      {
        v84 = *(_QWORD *)(v11 + 8);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v84 + 8), 0xFFFFFFFF) != 1 || (*(_BYTE *)v84 & 8) == 0 )
          goto LABEL_13;
        FreeData((_QWORD *)v84);
LABEL_184:
        v5 = v100;
        goto LABEL_13;
      }
      if ( *(_QWORD *)(v11 + 32) )
      {
        if ( *(int *)(v11 + 8) > 0 )
        {
          *(_WORD *)v11 |= 8u;
          goto LABEL_13;
        }
        if ( *(_WORD *)(v11 + 2) == 4 )
          FreeDataBuffs(*(_QWORD *)(v11 + 32) + 8LL, **(_DWORD **)(v11 + 32));
        FreeObjData(v11);
        goto LABEL_184;
      }
LABEL_13:
      v12 = 0;
      *(_QWORD *)v11 = 0LL;
      v13 = 0LL;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_QWORD *)(v11 + 24) = 0LL;
      *(_QWORD *)(v11 + 32) = 0LL;
      v14 = (PVOID *)&unk_1C005A150;
      v15 = *(_QWORD *)(v4 + 32);
      v16 = *(_QWORD *)(v4 + 72);
      v17 = *v8;
      v99 = v15;
      do
      {
        if ( (PVOID)v17 == *v14 )
          break;
        ++v12;
        ++v13;
        v14 += 2;
      }
      while ( (__int64)v14 < (__int64)&P );
      if ( v12 != 10 && (dword_1C005A148[4 * v13] & 1) != 0 && v12 != -1 )
      {
        ConPrintf("\nHit Breakpoint %d.\n");
        AMLIDebugger(v88, v87, v89, v90);
        v5 = v100;
      }
      v18 = *v8;
      v19 = *(_BYTE *)*v8;
      if ( v19 == 91 )
      {
        *v8 = v18 + 1;
        v76 = &ExOpcodeTable;
        if ( &atMutex )
        {
          while ( *(unsigned __int8 *)(v18 + 1) != *(_DWORD *)v76 )
          {
            v76 += 2;
            if ( !v76[1] )
              goto LABEL_19;
          }
          v9 = v76[1];
        }
      }
      else
      {
        v9 = (__int64)*(&OpcodeTable + v19);
      }
LABEL_19:
      if ( !v9 )
        break;
      v20 = *(_DWORD *)(v9 + 28);
      if ( (v20 & 8) != 0 )
      {
        v80 = ParseIntObj((_WORD **)v8, v16, 0LL);
        v5 = v100;
        v3 = v80;
        v9 = 0LL;
        goto LABEL_68;
      }
      if ( (v20 & 0x10) != 0 )
      {
        v91 = ParseString((const void **)v8, v16, 0);
        v5 = v100;
        v3 = v91;
        v9 = 0LL;
        goto LABEL_68;
      }
      if ( (v20 & 2) != 0 )
      {
        v9 = 0LL;
        v92 = v5[12];
        v3 = 0;
        v93 = (unsigned int)*(unsigned __int8 *)*v8 - 104;
        if ( (unsigned int)v93 < *(_DWORD *)(v92 + 60) )
        {
          CopyObjData(v16, *(_QWORD *)(v92 + 64) + 40 * v93);
          ++*v8;
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("Arg%d=");
            PrintObject(v16);
            v5 = v100;
          }
        }
        else
        {
          LogError(3222536197LL);
          PrintDebugMessage(122, v93, 0, 0, 0LL);
          v5 = v100;
          v3 = -1072431099;
        }
        goto LABEL_68;
      }
      if ( (v20 & 4) == 0 )
      {
        if ( (v20 & 0x20) == 0 )
        {
          if ( (v20 & 0x40) != 0 )
          {
            LogError(3222536198LL);
            v9 = 0LL;
            PrintDebugMessage(133, 0, 0, 0, 0LL);
            v3 = -1072431098;
            goto LABEL_220;
          }
          ++*v8;
          v21 = v5 + 54;
          v3 = 0;
          v22 = 0LL;
          v23 = 0LL;
          byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          if ( (unsigned int)(*((_DWORD *)v21 + 2) - (_DWORD)v21 - 48) >= 0x70 )
          {
            v25 = v21;
            v102 = v21;
            v26 = 0LL;
            while ( 1 )
            {
              v27 = v25[5];
              v22 = 0LL;
              if ( v27 )
              {
                v44 = v25[5];
                while ( 1 )
                {
                  v45 = *(_DWORD *)(v44 - 12) < 0x70u;
                  v22 = v44 - 16;
                  if ( *(_DWORD *)(v44 - 12) >= 0x70u )
                    break;
                  v44 = *(_QWORD *)(v44 + 8);
                  if ( v44 == v27 )
                  {
                    v45 = *(_DWORD *)(v22 + 4) < 0x70u;
                    break;
                  }
                }
                if ( v45 )
                  v22 = 0LL;
              }
              if ( v22 )
                break;
              if ( (unsigned int)(*((_DWORD *)v25 + 2) - *((_DWORD *)v25 + 8)) >= 0x70 )
              {
                v22 = v25[4];
                v25[4] = v22 + 112;
                *(_DWORD *)(v22 + 4) = 112;
                goto LABEL_32;
              }
              v23 = v25;
              v25 = (_QWORD *)v25[3];
              v102 = v25;
              if ( !v25 )
                goto LABEL_32;
            }
            v24 = v22 + 16;
            if ( *(_QWORD *)(v22 + 24) == v22 + 16 )
            {
              v25[5] = 0LL;
            }
            else
            {
              if ( v24 == v27 )
                v25[5] = *(_QWORD *)(v27 + 8);
              **(_QWORD **)(v22 + 24) = *(_QWORD *)(v22 + 16);
              *(_QWORD *)(*(_QWORD *)v24 + 8LL) = *(_QWORD *)(v22 + 24);
            }
            if ( *(_DWORD *)(v22 + 4) >= 0x90u )
            {
              v66 = v22 + 112;
              *(_DWORD *)(v22 + 112) = 0;
              v67 = (_QWORD **)(v22 + 128);
              v68 = *(_DWORD *)(v22 + 4) - 112;
              *(_QWORD *)(v22 + 120) = v25;
              *(_DWORD *)(v22 + 116) = v68;
              *(_DWORD *)(v22 + 4) = 112;
              v69 = (_QWORD *)v25[5];
              if ( v69 )
              {
                v82 = (_QWORD *)v25[5];
                while ( v67 >= v82 )
                {
                  v82 = (_QWORD *)v82[1];
                  if ( v82 == v69 )
                  {
                    if ( v67 >= v82 )
                    {
                      ListInsertTail(v22 + 128, v25 + 5);
                      goto LABEL_125;
                    }
                    break;
                  }
                }
                *(_QWORD *)(v22 + 136) = v82;
                v83 = (_QWORD *)*v82;
                *v67 = (_QWORD *)*v82;
                v83[1] = v67;
                **(_QWORD **)(v22 + 136) = v67;
                if ( (_QWORD *)v25[5] == v82 )
                  goto LABEL_124;
              }
              else
              {
                v25[5] = v67;
                *(_QWORD *)(v22 + 136) = v22 + 128;
                *v67 = v67;
LABEL_124:
                v25[5] = v67;
              }
LABEL_125:
              v24 = *(unsigned int *)(v66 + 4);
              v70 = (_QWORD **)(v24 + v66 + 16);
              if ( *(_QWORD ***)(v66 + 24) == v70 )
              {
                *(_DWORD *)(v66 + 4) = *(_DWORD *)(v24 + v66 + 4) + v24;
                ListRemoveEntry(v70, (__int64)(v25 + 5));
              }
              v71 = (__int64)(*v67 - 2);
              v72 = *(unsigned int *)(v71 + 4);
              if ( v66 == v71 + v72 )
              {
                *(_DWORD *)(v71 + 4) = v72 + *(_DWORD *)(v66 + 4);
                ListRemoveEntry(v67, (__int64)(v25 + 5));
                v66 = v71;
              }
              if ( v25[4] <= v66 + (unsigned __int64)*(unsigned int *)(v66 + 4) )
              {
                v25[4] = v66;
                ListRemoveEntry((_QWORD **)(v66 + 16), (__int64)(v25 + 5));
              }
              v15 = v99;
            }
LABEL_32:
            if ( v22 )
              goto LABEL_33;
            if ( v21 == (_QWORD *)gpheapGlobal )
              v95 = NewGlobalHeap(&v102);
            else
              v95 = NewLocalHeap(&v102, v24, v26, v25);
            if ( !v95 )
            {
              v25 = v102;
              v102[2] = v21;
              v23[3] = v25;
              v22 = v25[4];
              v25[4] = v22 + 112;
              *(_DWORD *)(v22 + 4) = 112;
LABEL_33:
              *(_DWORD *)v22 = 1297237576;
              *(_QWORD *)(v22 + 8) = v25;
              memset((void *)(v22 + 16), 0, 0x60uLL);
            }
          }
          KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
          if ( !v22 || (v28 = v22 + 16, v22 == -16) )
          {
            LogError(3222536194LL);
            v9 = 0LL;
            PrintDebugMessage(153, 0, 0, 0, 0LL);
            v3 = -1072431102;
LABEL_66:
            v5 = v100;
LABEL_67:
            v4 = a2;
            v8 = v5 + 15;
            goto LABEL_68;
          }
          v5 = v100;
          *(_QWORD *)(v22 + 24) = v100[52];
          v100[52] = v28;
          *(_QWORD *)(v22 + 40) = ParseTerm;
          *(_DWORD *)v28 = 1297237332;
          *(_QWORD *)(v22 + 48) = v18;
          *(_QWORD *)(v22 + 64) = v15;
          *(_QWORD *)(v22 + 72) = v9;
          *(_QWORD *)(v22 + 104) = v16;
          a1 = *(_QWORD *)(v9 + 16);
          if ( a1 )
          {
            v29 = -1LL;
            do
              ++v29;
            while ( *(_BYTE *)(a1 + v29) );
            v9 = 0LL;
          }
          else
          {
            v9 = 0LL;
            LODWORD(v29) = 0;
          }
          *(_DWORD *)(v22 + 92) = v29;
          if ( !(_DWORD)v29 )
            goto LABEL_67;
          v30 = v100[40];
          v31 = 40 * v29;
          v32 = 0LL;
          v33 = 0LL;
          v34 = v31 + 16;
          if ( v31 + 16 < v31 )
            goto LABEL_215;
          if ( v34 < 0x20 )
            v34 = 32;
          if ( v34 + 7 < v34 )
            goto LABEL_215;
          v35 = (v34 + 7) & 0xFFFFFFF8;
          byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          if ( (unsigned int)v35 > *(_DWORD *)(v30 + 8) - (int)v30 - 48 )
            goto LABEL_62;
          v38 = v30;
          v98[0] = v30;
          while ( 1 )
          {
            v39 = *(_QWORD *)(v38 + 40);
            v32 = 0LL;
            if ( v39 )
            {
              v40 = *(_QWORD *)(v38 + 40);
              while ( 1 )
              {
                v41 = (unsigned int)v35 <= *(_DWORD *)(v40 - 12);
                v32 = v40 - 16;
                if ( (unsigned int)v35 <= *(_DWORD *)(v40 - 12) )
                  break;
                v40 = *(_QWORD *)(v40 + 8);
                if ( v40 == v39 )
                {
                  v41 = (unsigned int)v35 <= *(_DWORD *)(v32 + 4);
                  break;
                }
              }
              if ( !v41 )
                v32 = 0LL;
            }
            if ( v32 )
              break;
            if ( (unsigned int)v35 <= *(_DWORD *)(v38 + 8) - *(_DWORD *)(v38 + 32) )
            {
              v32 = *(_QWORD *)(v38 + 32);
              *(_QWORD *)(v38 + 32) = v32 + (unsigned int)v35;
              *(_DWORD *)(v32 + 4) = v35;
              goto LABEL_60;
            }
            v33 = v38;
            v38 = *(_QWORD *)(v38 + 24);
            v98[0] = v38;
            if ( !v38 )
              goto LABEL_60;
          }
          v36 = v32 + 16;
          if ( *(_QWORD *)(v32 + 24) == v32 + 16 )
          {
            v37 = 0LL;
            *(_QWORD *)(v38 + 40) = 0LL;
          }
          else
          {
            if ( v36 == v39 )
              *(_QWORD *)(v38 + 40) = *(_QWORD *)(v39 + 8);
            v37 = 0LL;
            **(_QWORD **)(v32 + 24) = *(_QWORD *)(v32 + 16);
            *(_QWORD *)(*(_QWORD *)v36 + 8LL) = *(_QWORD *)(v32 + 24);
          }
          if ( *(unsigned int *)(v32 + 4) < (unsigned __int64)(unsigned int)v35 + 32 )
          {
LABEL_74:
            v9 = 0LL;
LABEL_60:
            if ( v32 )
              goto LABEL_61;
            if ( v30 == gpheapGlobal )
              v81 = NewGlobalHeap(v98);
            else
              v81 = NewLocalHeap(v98, v36, v37, v38);
            if ( !v81 )
            {
              v38 = v98[0];
              *(_QWORD *)(v98[0] + 16LL) = v30;
              *(_QWORD *)(v33 + 24) = v38;
              v32 = *(_QWORD *)(v38 + 32);
              *(_QWORD *)(v38 + 32) = v32 + (unsigned int)v35;
              *(_DWORD *)(v32 + 4) = v35;
LABEL_61:
              *(_DWORD *)v32 = 1413563464;
              *(_QWORD *)(v32 + 8) = v38;
              memset((void *)(v32 + 16), 0, (unsigned int)v35 - 16LL);
            }
LABEL_62:
            KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
            if ( v32 )
            {
              v42 = (void *)(v32 + 16);
              goto LABEL_64;
            }
LABEL_215:
            v42 = 0LL;
LABEL_64:
            *(_QWORD *)(v28 + 80) = v42;
            if ( v42 )
            {
              memset(v42, 0, 40LL * *(unsigned int *)(v28 + 76));
            }
            else
            {
              LogError(3221225626LL);
              PrintDebugMessage(154, 0, 0, 0, 0LL);
              v3 = -1073741670;
            }
            goto LABEL_66;
          }
          v59 = (unsigned int)v35 + v32;
          *(_DWORD *)v59 = 0;
          v60 = (__int64 *)(v59 + 16);
          v61 = *(_DWORD *)(v32 + 4) - v35;
          *(_QWORD *)(v59 + 8) = v38;
          *(_DWORD *)(v59 + 4) = v61;
          *(_DWORD *)(v32 + 4) = v35;
          v62 = *(__int64 **)(v38 + 40);
          if ( v62 )
          {
            v75 = *(__int64 **)(v38 + 40);
            while ( v60 >= v75 )
            {
              v75 = (__int64 *)v75[1];
              if ( v75 == v62 )
              {
                if ( v60 >= v75 )
                {
                  ListInsertTail(v35 + v32 + 16, v38 + 40);
                  goto LABEL_113;
                }
                break;
              }
            }
            *(_QWORD *)(v59 + 24) = v75;
            v77 = *v75;
            *v60 = *v75;
            *(_QWORD *)(v77 + 8) = v60;
            **(_QWORD **)(v59 + 24) = v60;
            if ( *(__int64 **)(v38 + 40) != v75 )
              goto LABEL_113;
          }
          else
          {
            *(_QWORD *)(v38 + 40) = v60;
            *(_QWORD *)(v35 + v32 + 24) = v35 + v32 + 16;
            *v60 = (__int64)v60;
          }
          *(_QWORD *)(v38 + 40) = v60;
LABEL_113:
          v36 = *(unsigned int *)(v59 + 4);
          v63 = (_QWORD **)(v36 + v59 + 16);
          if ( *(_QWORD ***)(v59 + 24) == v63 )
          {
            *(_DWORD *)(v59 + 4) = *(_DWORD *)(v36 + v59 + 4) + v36;
            ListRemoveEntry(v63, v38 + 40);
          }
          v64 = *v60 - 16;
          v65 = *(unsigned int *)(v64 + 4);
          if ( v59 == v64 + v65 )
          {
            *(_DWORD *)(v64 + 4) = v65 + *(_DWORD *)(v59 + 4);
            ListRemoveEntry((_QWORD **)(v35 + v32 + 16), v38 + 40);
            v59 = v96;
          }
          if ( *(_QWORD *)(v38 + 32) <= v59 + (unsigned __int64)*(unsigned int *)(v59 + 4) )
          {
            *(_QWORD *)(v38 + 32) = v59;
            ListRemoveEntry((_QWORD **)(v59 + 16), v38 + 40);
          }
          goto LABEL_74;
        }
        v79 = ParseNameObj(v5, v16);
        v5 = v100;
        v3 = v79;
        v9 = 0LL;
LABEL_68:
        if ( v3 )
          goto LABEL_133;
        goto LABEL_69;
      }
      v94 = (unsigned int)*(unsigned __int8 *)*v8 - 96;
      CopyObjData(v16, v5[12] + 8 * (v94 + 4 * v94 + 9));
      a1 = (unsigned int)gDebugger;
      if ( (gDebugger & 0xD0) != 0 )
      {
        ConPrintf("Local%d=");
        PrintObject(v16);
        v5 = v100;
      }
      ++*v8;
      v9 = 0LL;
      v3 = 0;
LABEL_69:
      if ( v4 != v5[52] )
        return v3;
      if ( *v8 >= *(_QWORD *)(v4 + 32) )
        goto LABEL_136;
    }
    LogError(3222536193LL);
    v9 = 0LL;
    PrintDebugMessage(134, *(unsigned __int8 *)*v8, *v8, 0, 0LL);
    v3 = -1072431103;
LABEL_220:
    v5 = v100;
LABEL_133:
    if ( v3 == 32769 )
    {
      *v8 = *(_QWORD *)(v4 + 32);
      v85 = (*(_DWORD *)(v4 + 16) & 0x20000) == 0;
      *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 32);
      if ( v85 )
        goto LABEL_139;
      goto LABEL_190;
    }
    if ( v3 != 32774 )
    {
      if ( v3 == 32772 )
        return v3;
LABEL_136:
      if ( v4 != v5[52] )
        return v3;
      if ( v3 || *v8 >= *(_QWORD *)(v4 + 32) )
        goto LABEL_139;
      continue;
    }
    break;
  }
  *v8 = *(_QWORD *)(v4 + 32);
  if ( (*(_DWORD *)(v4 + 16) & 0x20000) != 0 )
    v3 = 0;
LABEL_139:
  ++*(_DWORD *)(v4 + 16);
LABEL_91:
  if ( (gDebugger & 0xD0) != 0 )
  {
    --dword_1C005A114;
    PrintIndent(v5);
    ConPrintf("}");
    v5 = v100;
  }
  v46 = v5[10];
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 104), 0xFFFFFFFF) == 1 )
  {
    *(_WORD *)(v46 + 56) |= 4u;
    if ( (*(_WORD *)(v46 + 56) & 0x40) == 0 )
    {
      FreeNameSpaceObjects(v46);
      v5 = v100;
    }
  }
  v5[10] = *(_QWORD *)(v4 + 48);
  v47 = *(_QWORD *)(v4 + 56);
  *(_QWORD *)(v4 + 48) = 0LL;
  v5[11] = v47;
  v5[40] = *(_QWORD *)(v4 + 64);
  v48 = *(_QWORD *)(v4 + 40);
  if ( v48 )
    v5[15] = v48;
  v49 = v5[52];
  v50 = v49 - 16;
  v5[52] = *(_QWORD *)(v49 + 8);
  *(_DWORD *)(v49 - 16) = 0;
  byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v51 = (_QWORD **)(v50 + 16);
  v52 = *(_QWORD *)(v50 + 8);
  v53 = *(_QWORD **)(v52 + 40);
  if ( v53 )
  {
    v73 = *(_QWORD **)(v52 + 40);
    while ( v51 >= v73 )
    {
      v73 = (_QWORD *)v73[1];
      if ( v73 == v53 )
      {
        if ( v51 >= v73 )
        {
          ListInsertTail(v50 + 16, v52 + 40);
          goto LABEL_99;
        }
        break;
      }
    }
    *(_QWORD *)(v50 + 24) = v73;
    v74 = (_QWORD *)*v73;
    *v51 = (_QWORD *)*v73;
    v74[1] = v51;
    **(_QWORD **)(v50 + 24) = v51;
    if ( *(_QWORD **)(v52 + 40) == v73 )
      goto LABEL_98;
  }
  else
  {
    *(_QWORD *)(v52 + 40) = v51;
    *(_QWORD *)(v50 + 24) = v50 + 16;
    *v51 = v51;
LABEL_98:
    *(_QWORD *)(v52 + 40) = v51;
  }
LABEL_99:
  v54 = *(unsigned int *)(v50 + 4);
  v55 = (_QWORD **)(v54 + v50 + 16);
  if ( *(_QWORD ***)(v50 + 24) == v55 )
  {
    *(_DWORD *)(v50 + 4) = *(_DWORD *)(v54 + v50 + 4) + v54;
    ListRemoveEntry(v55, v52 + 40);
  }
  v56 = (__int64)(*v51 - 2);
  v57 = *(unsigned int *)(v56 + 4);
  if ( v50 == v56 + v57 )
  {
    *(_DWORD *)(v56 + 4) = v57 + *(_DWORD *)(v50 + 4);
    ListRemoveEntry(v51, v52 + 40);
    v50 = v97;
  }
  if ( *(_QWORD *)(v52 + 32) <= v50 + (unsigned __int64)*(unsigned int *)(v50 + 4) )
  {
    *(_QWORD *)(v52 + 32) = v50;
    v58 = (_QWORD **)(v50 + 16);
    if ( v58[1] == v58 )
    {
      *(_QWORD *)(v52 + 40) = 0LL;
    }
    else
    {
      v78 = *(_QWORD *)(v52 + 40);
      if ( v58 == (_QWORD **)v78 )
        *(_QWORD *)(v52 + 40) = *(_QWORD *)(v78 + 8);
      *v58[1] = *v58;
      (*v58)[1] = v58[1];
    }
  }
  KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
  return v3;
}

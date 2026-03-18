/*
 * XREFs of ParseScope @ 0x1C0012370
 * Callers:
 *     <none>
 * Callees:
 *     FreeData @ 0x1C0003B14 (FreeData.c)
 *     NewGlobalHeap @ 0x1C0006190 (NewGlobalHeap.c)
 *     ParseString @ 0x1C000CDDC (ParseString.c)
 *     ParseArgObj @ 0x1C000E12C (ParseArgObj.c)
 *     CopyObjData @ 0x1C000E1CC (CopyObjData.c)
 *     ParseIntObj @ 0x1C000E4C0 (ParseIntObj.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C00113B0 (FreeObjData.c)
 *     ListRemoveEntry @ 0x1C0011778 (ListRemoveEntry.c)
 *     HeapInsertFreeList @ 0x1C0012D00 (HeapInsertFreeList.c)
 *     FreeNameSpaceObjects @ 0x1C0013710 (FreeNameSpaceObjects.c)
 *     ParseNameObj @ 0x1C0016A2C (ParseNameObj.c)
 *     ListInsertTail @ 0x1C0018288 (ListInsertTail.c)
 *     NewLocalHeap @ 0x1C0018C98 (NewLocalHeap.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     AMLIDebugger @ 0x1C0043278 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintIndent @ 0x1C0043DC0 (PrintIndent.c)
 *     PrintObject @ 0x1C0043DFC (PrintObject.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseScope(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rdi
  __int64 v5; // rbp
  int v6; // eax
  int v7; // eax
  unsigned __int64 *v8; // rbx
  __int64 v9; // r15
  PVOID *v10; // r9
  unsigned __int8 *v11; // rax
  char v12; // al
  __int64 v13; // rbx
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r13
  PVOID v17; // r8
  PVOID *v18; // rax
  unsigned __int64 v19; // r14
  unsigned __int8 v20; // al
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r11
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbp
  unsigned int v35; // eax
  __int64 v36; // rbx
  __int64 v37; // r13
  unsigned int v38; // ecx
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rax
  bool v45; // cc
  void *v46; // rcx
  __int64 v48; // r10
  __int64 *v49; // rsi
  int v50; // eax
  __int64 *v51; // rax
  _QWORD **v52; // rcx
  __int64 v53; // r11
  __int64 v54; // rcx
  __int64 v55; // rcx
  bool v56; // cf
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rbx
  _QWORD **v62; // r9
  __int64 v63; // rdi
  _QWORD *v64; // rax
  __int64 v65; // rdx
  _QWORD **v66; // rcx
  __int64 v67; // r11
  __int64 v68; // rcx
  _QWORD **v69; // rbx
  int v70; // eax
  _QWORD *v71; // rcx
  _QWORD *v72; // rax
  __int64 *v73; // rcx
  _QWORD *v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // eax
  __int64 v78; // rcx
  bool v79; // zf
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // r9
  int v86; // eax
  __int64 v87; // r11
  __int64 v88; // r11
  __int64 v89; // [rsp+30h] [rbp-58h] BYREF
  __int64 v90; // [rsp+38h] [rbp-50h]
  __int64 v93; // [rsp+A8h] [rbp+20h] BYREF

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
      ++dword_1C005A124;
      *(_DWORD *)(v4 + 16) |= 0x10000u;
    }
    ++*(_DWORD *)(v4 + 16);
LABEL_5:
    v8 = (unsigned __int64 *)(v5 + 120);
    v9 = 0LL;
LABEL_6:
    v10 = &P;
    v11 = *(unsigned __int8 **)(v4 + 32);
    if ( v3 == 32769 )
    {
      *v8 = (unsigned __int64)v11;
      v79 = (*(_DWORD *)(v4 + 16) & 0x20000) == 0;
      *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 32);
      if ( v79 )
        goto LABEL_128;
      goto LABEL_172;
    }
    if ( v3 == 32774 )
    {
      *v8 = (unsigned __int64)v11;
      if ( (*(_DWORD *)(v4 + 16) & 0x20000) == 0 )
        goto LABEL_128;
LABEL_172:
      v3 = v9;
      goto LABEL_128;
    }
    if ( *v8 >= (unsigned __int64)v11 )
      goto LABEL_122;
    while ( 1 )
    {
      qword_1C005A130 = *v8;
      v12 = gDebugger;
      if ( (gDebugger & 0xD0) == 0 )
        goto LABEL_10;
      v80 = *(unsigned int *)(v4 + 16);
      if ( (v80 & 0x10000) != 0 )
        break;
      if ( (gDebugger & 0x80u) != 0 )
      {
        _InterlockedAnd(&gDebugger, 0xFFFFFF7F);
        AMLIDebugger(v80, -1LL, a3, &P);
        v10 = &P;
        goto LABEL_178;
      }
LABEL_179:
      if ( (v12 & 0xD0) != 0 && (unsigned __int8)(*(_BYTE *)*v8 - 18) > 1u )
      {
        PrintIndent(v5);
        v10 = &P;
      }
LABEL_10:
      v13 = *(_QWORD *)(v4 + 72);
      if ( (*(_BYTE *)v13 & 1) != 0 )
      {
        v78 = *(_QWORD *)(v13 + 8);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v78 + 8), 0xFFFFFFFF) != 1 || (*(_BYTE *)v78 & 8) == 0 )
          goto LABEL_12;
        FreeData((_QWORD *)v78);
LABEL_169:
        v10 = &P;
        goto LABEL_12;
      }
      if ( *(_QWORD *)(v13 + 32) )
      {
        if ( *(int *)(v13 + 8) > 0 )
        {
          *(_WORD *)v13 |= 8u;
          goto LABEL_12;
        }
        if ( *(_WORD *)(v13 + 2) == 4 )
          FreeDataBuffs(*(_QWORD *)(v13 + 32) + 8LL, **(_DWORD **)(v13 + 32));
        FreeObjData(v13);
        goto LABEL_169;
      }
LABEL_12:
      v14 = v9;
      *(_QWORD *)v13 = 0LL;
      v15 = v9;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = 0LL;
      *(_QWORD *)(v13 + 24) = 0LL;
      *(_QWORD *)(v13 + 32) = 0LL;
      v8 = (unsigned __int64 *)(v5 + 120);
      v16 = *(_QWORD *)(v4 + 72);
      v17 = *(PVOID *)(v5 + 120);
      v90 = *(_QWORD *)(v4 + 32);
      v18 = (PVOID *)&unk_1C005A160;
      do
      {
        if ( v17 == *v18 )
          break;
        ++v14;
        ++v15;
        v18 += 2;
      }
      while ( (__int64)v18 < (__int64)&P );
      if ( v14 != 10 && (dword_1C005A158[4 * v15] & 1) != 0 && v14 != -1 )
      {
        ConPrintf("\nHit Breakpoint %d.\n");
        AMLIDebugger(v82, v81, v83, v84);
      }
      v19 = *v8;
      v20 = *(_BYTE *)*v8;
      if ( v20 == 91 )
      {
        v21 = v9;
        *v8 = v19 + 1;
        v74 = &ExOpcodeTable;
        if ( &atMutex )
        {
          while ( *(unsigned __int8 *)(v19 + 1) != *(_DWORD *)v74 )
          {
            v74 += 2;
            if ( !v74[1] )
              goto LABEL_18;
          }
          v21 = v74[1];
        }
      }
      else
      {
        v21 = (__int64)*(&OpcodeTable + v20);
      }
LABEL_18:
      if ( !v21 )
      {
        LogError(3222536193LL);
        PrintDebugMessage(134, *(unsigned __int8 *)*v8, *v8, 0, v9);
        v3 = -1072431103;
LABEL_122:
        if ( v3 == 32769 )
        {
          *v8 = *(_QWORD *)(v4 + 32);
          v79 = (*(_DWORD *)(v4 + 16) & 0x20000) == 0;
          *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 32);
          if ( v79 )
            goto LABEL_128;
          goto LABEL_172;
        }
        if ( v3 != 32774 )
        {
          if ( v3 == 32772 )
            return v3;
LABEL_125:
          if ( v4 != *(_QWORD *)(v5 + 416) )
            return v3;
          if ( v3 || *v8 >= *(_QWORD *)(v4 + 32) )
            goto LABEL_128;
          goto LABEL_6;
        }
        *v8 = *(_QWORD *)(v4 + 32);
        if ( (*(_DWORD *)(v4 + 16) & 0x20000) != 0 )
          v3 = v9;
LABEL_128:
        ++*(_DWORD *)(v4 + 16);
LABEL_99:
        if ( (gDebugger & 0xD0) != 0 )
        {
          --dword_1C005A124;
          PrintIndent(v5);
          ConPrintf("}");
        }
        v57 = *(_QWORD *)(v5 + 80);
        if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 104), 0xFFFFFFFF) == 1 )
        {
          *(_WORD *)(v57 + 56) |= 4u;
          if ( (*(_WORD *)(v57 + 56) & 0x40) == 0 )
            FreeNameSpaceObjects();
        }
        *(_QWORD *)(v5 + 80) = *(_QWORD *)(v4 + 48);
        v58 = *(_QWORD *)(v4 + 56);
        *(_QWORD *)(v4 + 48) = v9;
        *(_QWORD *)(v5 + 88) = v58;
        *(_QWORD *)(v5 + 320) = *(_QWORD *)(v4 + 64);
        v59 = *(_QWORD *)(v4 + 40);
        if ( v59 )
          *(_QWORD *)(v5 + 120) = v59;
        v60 = *(_QWORD *)(v5 + 416);
        v61 = v60 - 16;
        *(_QWORD *)(v5 + 416) = *(_QWORD *)(v60 + 8);
        *(_DWORD *)(v60 - 16) = v9;
        byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        v62 = (_QWORD **)(v61 + 16);
        v63 = *(_QWORD *)(v61 + 8);
        v64 = *(_QWORD **)(v63 + 40);
        if ( v64 )
        {
          v71 = *(_QWORD **)(v63 + 40);
          while ( v62 >= v71 )
          {
            v71 = (_QWORD *)v71[1];
            if ( v71 == v64 )
            {
              if ( v62 >= v71 )
              {
                ListInsertTail(v61 + 16, v63 + 40);
                goto LABEL_107;
              }
              break;
            }
          }
          *(_QWORD *)(v61 + 24) = v71;
          v72 = (_QWORD *)*v71;
          *v62 = (_QWORD *)*v71;
          v72[1] = v62;
          **(_QWORD **)(v61 + 24) = v62;
          if ( *(_QWORD **)(v63 + 40) == v71 )
            goto LABEL_106;
        }
        else
        {
          *(_QWORD *)(v63 + 40) = v62;
          *(_QWORD *)(v61 + 24) = v61 + 16;
          *v62 = v62;
LABEL_106:
          *(_QWORD *)(v63 + 40) = v62;
        }
LABEL_107:
        v65 = *(unsigned int *)(v61 + 4);
        v66 = (_QWORD **)(v65 + v61 + 16);
        if ( *(_QWORD ***)(v61 + 24) == v66 )
        {
          *(_DWORD *)(v61 + 4) = *(_DWORD *)(v65 + v61 + 4) + v65;
          ListRemoveEntry(v66, v63 + 40);
        }
        v67 = (__int64)(*v62 - 2);
        v68 = *(unsigned int *)(v67 + 4);
        if ( v61 == v67 + v68 )
        {
          *(_DWORD *)(v67 + 4) = v68 + *(_DWORD *)(v61 + 4);
          ListRemoveEntry(v62, v63 + 40);
          v61 = v88;
        }
        if ( *(_QWORD *)(v63 + 32) <= v61 + (unsigned __int64)*(unsigned int *)(v61 + 4) )
        {
          *(_QWORD *)(v63 + 32) = v61;
          v69 = (_QWORD **)(v61 + 16);
          if ( v69[1] == v69 )
          {
            *(_QWORD *)(v63 + 40) = v9;
          }
          else
          {
            v76 = *(_QWORD *)(v63 + 40);
            if ( v69 == (_QWORD **)v76 )
              *(_QWORD *)(v63 + 40) = *(_QWORD *)(v76 + 8);
            *v69[1] = *v69;
            (*v69)[1] = v69[1];
          }
        }
        KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
        return v3;
      }
      v22 = *(_DWORD *)(v21 + 28);
      if ( (v22 & 8) != 0 )
      {
        v3 = ParseIntObj((_WORD **)(v5 + 120), v16, 0);
      }
      else if ( (v22 & 0x10) != 0 )
      {
        v3 = ParseString((const void **)(v5 + 120), v16, 0);
      }
      else if ( (v22 & 2) != 0 )
      {
        v3 = ParseArgObj(v5, v16);
      }
      else
      {
        if ( (v22 & 4) != 0 )
        {
          v85 = (unsigned int)*(unsigned __int8 *)*v8 - 96;
          CopyObjData(v16, *(_QWORD *)(v5 + 96) + 8 * (v85 + 4 * v85 + 9));
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("Local%d=");
            PrintObject(v16);
          }
          ++*v8;
          v3 = v9;
          goto LABEL_67;
        }
        if ( (v22 & 0x20) == 0 )
        {
          if ( (v22 & 0x40) != 0 )
          {
            LogError(3222536198LL);
            PrintDebugMessage(133, 0, 0, 0, v9);
            v3 = -1072431098;
            goto LABEL_122;
          }
          ++*v8;
          v23 = v5 + 432;
          v24 = v9;
          v25 = v9;
          v3 = v9;
          byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          if ( (unsigned int)(*(_DWORD *)(v23 + 8) - v23 - 48) >= 0x70 )
          {
            v29 = v23;
            v93 = v23;
            while ( 1 )
            {
              v30 = *(_QWORD *)(v29 + 40);
              v24 = v9;
              if ( v30 )
              {
                v55 = *(_QWORD *)(v29 + 40);
                while ( 1 )
                {
                  v56 = *(_DWORD *)(v55 - 12) < 0x70u;
                  v24 = v55 - 16;
                  if ( *(_DWORD *)(v55 - 12) >= 0x70u )
                    break;
                  v55 = *(_QWORD *)(v55 + 8);
                  if ( v55 == v30 )
                  {
                    v56 = *(_DWORD *)(v24 + 4) < 0x70u;
                    break;
                  }
                }
                if ( v56 )
                  v24 = v9;
              }
              if ( v24 )
                break;
              if ( (unsigned int)(*(_DWORD *)(v29 + 8) - *(_DWORD *)(v29 + 32)) >= 0x70 )
              {
                v24 = *(_QWORD *)(v29 + 32);
                *(_QWORD *)(v29 + 32) = v24 + 112;
                *(_DWORD *)(v24 + 4) = 112;
                goto LABEL_31;
              }
              v25 = v29;
              v29 = *(_QWORD *)(v29 + 24);
              v93 = v29;
              if ( !v29 )
                goto LABEL_31;
            }
            v26 = v24 + 16;
            if ( *(_QWORD *)(v24 + 24) == v24 + 16 )
            {
              *(_QWORD *)(v29 + 40) = v9;
            }
            else
            {
              if ( v26 == v30 )
                *(_QWORD *)(v29 + 40) = *(_QWORD *)(v30 + 8);
              **(_QWORD **)(v24 + 24) = *(_QWORD *)(v24 + 16);
              *(_QWORD *)(*(_QWORD *)v26 + 8LL) = *(_QWORD *)(v24 + 24);
            }
            if ( *(_DWORD *)(v24 + 4) >= 0x90u )
            {
              *(_DWORD *)(v24 + 112) = v9;
              v70 = *(_DWORD *)(v24 + 4) - 112;
              *(_QWORD *)(v24 + 120) = v29;
              *(_DWORD *)(v24 + 116) = v70;
              *(_DWORD *)(v24 + 4) = 112;
              HeapInsertFreeList(v29);
            }
LABEL_31:
            if ( v24 )
            {
LABEL_32:
              *(_DWORD *)v24 = 1297237576;
              *(_QWORD *)(v24 + 8) = v29;
              memset((void *)(v24 + 16), 0, 0x60uLL);
            }
            else
            {
              if ( v23 == gpheapGlobal )
                v86 = NewGlobalHeap(&v93);
              else
                v86 = NewLocalHeap(&v93, v26, v27, v28);
              if ( !v86 )
              {
                v29 = v93;
                *(_QWORD *)(v93 + 16) = v23;
                *(_QWORD *)(v25 + 24) = v29;
                v24 = *(_QWORD *)(v29 + 32);
                *(_QWORD *)(v29 + 32) = v24 + 112;
                *(_DWORD *)(v24 + 4) = 112;
                goto LABEL_32;
              }
            }
          }
          KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
          if ( !v24 || (v9 = v24 + 16, v24 == -16) )
          {
            LogError(3222536194LL);
            PrintDebugMessage(153, 0, 0, 0, v9);
            v5 = a1;
            v3 = -1072431102;
          }
          else
          {
            v5 = a1;
            *(_QWORD *)(v24 + 24) = *(_QWORD *)(a1 + 416);
            *(_QWORD *)(a1 + 416) = v9;
            *(_QWORD *)(v24 + 40) = ParseTerm;
            v31 = v90;
            *(_DWORD *)v9 = 1297237332;
            *(_QWORD *)(v24 + 48) = v19;
            *(_QWORD *)(v24 + 64) = v31;
            *(_QWORD *)(v24 + 72) = v21;
            *(_QWORD *)(v24 + 104) = v16;
            v32 = *(_QWORD *)(v21 + 16);
            if ( v32 )
            {
              v33 = -1LL;
              do
                ++v33;
              while ( *(_BYTE *)(v32 + v33) );
            }
            else
            {
              LODWORD(v33) = 0;
            }
            *(_DWORD *)(v24 + 92) = v33;
            if ( (_DWORD)v33 )
            {
              v34 = *(_QWORD *)(a1 + 320);
              v35 = 40 * v33;
              v36 = 0LL;
              v37 = 0LL;
              v38 = v35 + 16;
              if ( v35 + 16 < v35 )
                goto LABEL_196;
              if ( v38 < 0x20 )
                v38 = 32;
              if ( v38 + 7 < v38 )
                goto LABEL_196;
              v39 = (v38 + 7) & 0xFFFFFFF8;
              byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
              if ( (unsigned int)v39 <= *(_DWORD *)(v34 + 8) - (int)v34 - 48 )
              {
                v42 = v34;
                v89 = v34;
                while ( 1 )
                {
                  v43 = *(_QWORD *)(v42 + 40);
                  v36 = 0LL;
                  if ( v43 )
                  {
                    v44 = *(_QWORD *)(v42 + 40);
                    while ( 1 )
                    {
                      v45 = (unsigned int)v39 <= *(_DWORD *)(v44 - 12);
                      v36 = v44 - 16;
                      if ( (unsigned int)v39 <= *(_DWORD *)(v44 - 12) )
                        break;
                      v44 = *(_QWORD *)(v44 + 8);
                      if ( v44 == v43 )
                      {
                        v45 = (unsigned int)v39 <= *(_DWORD *)(v36 + 4);
                        break;
                      }
                    }
                    if ( !v45 )
                      v36 = 0LL;
                  }
                  if ( v36 )
                    break;
                  if ( (unsigned int)v39 <= *(_DWORD *)(v42 + 8) - *(_DWORD *)(v42 + 32) )
                  {
                    v36 = *(_QWORD *)(v42 + 32);
                    *(_QWORD *)(v42 + 32) = v36 + (unsigned int)v39;
                    *(_DWORD *)(v36 + 4) = v39;
                    goto LABEL_58;
                  }
                  v37 = v42;
                  v42 = *(_QWORD *)(v42 + 24);
                  v89 = v42;
                  if ( !v42 )
                    goto LABEL_58;
                }
                v40 = v36 + 16;
                if ( *(_QWORD *)(v36 + 24) == v36 + 16 )
                {
                  *(_QWORD *)(v42 + 40) = 0LL;
                }
                else
                {
                  if ( v40 == v43 )
                    *(_QWORD *)(v42 + 40) = *(_QWORD *)(v43 + 8);
                  **(_QWORD **)(v36 + 24) = *(_QWORD *)(v36 + 16);
                  *(_QWORD *)(*(_QWORD *)v40 + 8LL) = *(_QWORD *)(v36 + 24);
                }
                if ( *(unsigned int *)(v36 + 4) >= (unsigned __int64)(unsigned int)v39 + 32 )
                {
                  v48 = (unsigned int)v39 + v36;
                  *(_DWORD *)v48 = 0;
                  v49 = (__int64 *)(v48 + 16);
                  v50 = *(_DWORD *)(v36 + 4) - v39;
                  *(_QWORD *)(v48 + 8) = v42;
                  *(_DWORD *)(v48 + 4) = v50;
                  *(_DWORD *)(v36 + 4) = v39;
                  v51 = *(__int64 **)(v42 + 40);
                  if ( !v51 )
                  {
                    *(_QWORD *)(v42 + 40) = v49;
                    *(_QWORD *)(v39 + v36 + 24) = v39 + v36 + 16;
                    *v49 = (__int64)v49;
                    goto LABEL_74;
                  }
                  v73 = *(__int64 **)(v42 + 40);
                  while ( v49 >= v73 )
                  {
                    v73 = (__int64 *)v73[1];
                    if ( v73 == v51 )
                    {
                      if ( v49 >= v73 )
                      {
                        ListInsertTail(v39 + v36 + 16, v42 + 40);
                        goto LABEL_75;
                      }
                      break;
                    }
                  }
                  *(_QWORD *)(v48 + 24) = v73;
                  v75 = *v73;
                  *v49 = *v73;
                  *(_QWORD *)(v75 + 8) = v49;
                  **(_QWORD **)(v48 + 24) = v49;
                  if ( *(__int64 **)(v42 + 40) == v73 )
LABEL_74:
                    *(_QWORD *)(v42 + 40) = v49;
LABEL_75:
                  v40 = *(unsigned int *)(v48 + 4);
                  v52 = (_QWORD **)(v40 + v48 + 16);
                  if ( *(_QWORD ***)(v48 + 24) == v52 )
                  {
                    *(_DWORD *)(v48 + 4) = *(_DWORD *)(v40 + v48 + 4) + v40;
                    ListRemoveEntry(v52, v42 + 40);
                  }
                  v53 = *v49 - 16;
                  v54 = *(unsigned int *)(v53 + 4);
                  if ( v48 == v53 + v54 )
                  {
                    *(_DWORD *)(v53 + 4) = v54 + *(_DWORD *)(v48 + 4);
                    ListRemoveEntry((_QWORD **)(v39 + v36 + 16), v42 + 40);
                    v48 = v87;
                  }
                  if ( *(_QWORD *)(v42 + 32) <= v48 + (unsigned __int64)*(unsigned int *)(v48 + 4) )
                  {
                    *(_QWORD *)(v42 + 32) = v48;
                    ListRemoveEntry((_QWORD **)(v48 + 16), v42 + 40);
                  }
                }
LABEL_58:
                if ( v36 )
                {
LABEL_59:
                  *(_DWORD *)v36 = 1413563464;
                  *(_QWORD *)(v36 + 8) = v42;
                  memset((void *)(v36 + 16), 0, (unsigned int)v39 - 16LL);
                }
                else
                {
                  if ( v34 == gpheapGlobal )
                    v77 = NewGlobalHeap(&v89);
                  else
                    v77 = NewLocalHeap(&v89, v40, v41, v42);
                  if ( !v77 )
                  {
                    v42 = v89;
                    *(_QWORD *)(v89 + 16) = v34;
                    *(_QWORD *)(v37 + 24) = v42;
                    v36 = *(_QWORD *)(v42 + 32);
                    *(_QWORD *)(v42 + 32) = v36 + (unsigned int)v39;
                    *(_DWORD *)(v36 + 4) = v39;
                    goto LABEL_59;
                  }
                }
              }
              KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
              if ( v36 )
                v46 = (void *)(v36 + 16);
              else
LABEL_196:
                v46 = 0LL;
              *(_QWORD *)(v9 + 80) = v46;
              if ( v46 )
              {
                memset(v46, 0, 40LL * *(unsigned int *)(v9 + 76));
                v5 = a1;
                goto LABEL_64;
              }
              LogError(3221225626LL);
              v9 = 0LL;
              PrintDebugMessage(154, 0, 0, 0, 0LL);
              v5 = a1;
              v3 = -1073741670;
            }
            else
            {
LABEL_64:
              v9 = 0LL;
            }
          }
          v4 = a2;
          v8 = (unsigned __int64 *)(v5 + 120);
          goto LABEL_66;
        }
        v3 = ParseNameObj(v5, v16, v17, v10);
      }
LABEL_66:
      if ( v3 )
        goto LABEL_122;
LABEL_67:
      if ( v4 != *(_QWORD *)(v5 + 416) )
        return v3;
      if ( *v8 >= *(_QWORD *)(v4 + 32) )
        goto LABEL_125;
      v10 = &P;
    }
    *(_DWORD *)(v4 + 16) = v80 & 0xFFFEFFFF;
LABEL_178:
    v12 = gDebugger;
    goto LABEL_179;
  }
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_5;
  if ( v7 == 1 )
  {
    v9 = 0LL;
    goto LABEL_99;
  }
  return v3;
}

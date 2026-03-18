/*
 * XREFs of ParseField @ 0x1C0015710
 * Callers:
 *     ParseFieldList @ 0x1C0015620 (ParseFieldList.c)
 * Callees:
 *     NewGlobalHeap @ 0x1C00059D0 (NewGlobalHeap.c)
 *     CreateNameSpaceObject @ 0x1C00175D0 (CreateNameSpaceObject.c)
 *     HeapInsertFreeList @ 0x1C0019890 (HeapInsertFreeList.c)
 *     FreeNameSpaceObjects @ 0x1C0019DC0 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     NewLocalHeap @ 0x1C002039C (NewLocalHeap.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 *     PrintIndent @ 0x1C005B420 (PrintIndent.c)
 *     ParseFieldConnection @ 0x1C00614D8 (ParseFieldConnection.c)
 */

__int64 __fastcall ParseField(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4, _BYTE *a5, __int64 a6)
{
  _DWORD *v7; // rsi
  unsigned int v8; // r15d
  _BYTE *v9; // r9
  char v10; // dl
  int v11; // ecx
  _BYTE *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  char v15; // r8
  unsigned __int8 *v16; // rax
  unsigned __int8 *v17; // r8
  unsigned int v18; // r12d
  unsigned __int8 v19; // dl
  __int64 v20; // r14
  unsigned int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // r13
  unsigned int v24; // ecx
  unsigned int v25; // edi
  __int64 v26; // rsi
  _QWORD *v27; // rcx
  void *v28; // rcx
  __int64 v29; // r9
  _DWORD *v30; // rax
  __int64 v31; // rbx
  _DWORD **v32; // rdx
  int v33; // ecx
  int v34; // ecx
  _BYTE *v35; // rax
  unsigned __int8 i; // r9
  int v38; // eax
  unsigned __int8 v39; // cl
  __int64 v40; // rdx
  _QWORD *v41; // rcx
  __int64 v42; // rdx
  unsigned int v43; // eax
  unsigned int v44; // eax
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rcx
  bool v48; // bl
  char v49; // cl
  _BYTE *v50; // rax
  int v52; // [rsp+38h] [rbp-A0h]
  __int64 v53; // [rsp+40h] [rbp-98h] BYREF
  __int64 v54; // [rsp+48h] [rbp-90h]
  _DWORD *v55; // [rsp+50h] [rbp-88h]
  __int64 v56; // [rsp+58h] [rbp-80h] BYREF
  _DWORD *v57; // [rsp+60h] [rbp-78h]
  _BYTE *v58; // [rsp+68h] [rbp-70h]
  __int64 v59; // [rsp+70h] [rbp-68h]
  _BYTE v60[8]; // [rsp+78h] [rbp-60h] BYREF

  v55 = a4;
  v7 = a4;
  v57 = (_DWORD *)a3;
  v8 = 0;
  v58 = a5;
  v59 = a6;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 112));
  v9 = (_BYTE *)a1[15];
  v10 = *v9;
  if ( ((*v9 - 1) & 0xFD) == 0 )
  {
    v48 = v10 == 3;
    a1[15] = v9 + 1;
    *(_DWORD *)a3 &= 0xFFFFFFF0;
    *(_DWORD *)a3 |= *(_BYTE *)a1[15] & 0xF;
    if ( v10 == 3 || (*(_BYTE *)a1[15] & 0xC0) == 0 )
    {
      ++a1[15];
      *(_BYTE *)(a3 + 1) = 0;
      *(_DWORD *)a3 |= *(unsigned __int8 *)a1[15]++ << 8;
      v50 = (_BYTE *)a1[15];
      if ( v10 != 3 )
      {
        *a5 = 0;
LABEL_91:
        if ( (gDebugger & 0xD0) != 0 )
        {
          PrintIndent(a1);
          ConPrintf("AccessAs(0x%x,0x%x");
          if ( v48 )
            ConPrintf(",0x%x)\n");
          else
            ConPrintf(")\n");
        }
        goto LABEL_97;
      }
    }
    else
    {
      *(_BYTE *)(a3 + 1) = 0;
      v49 = *(_BYTE *)a1[15] & 0xC0;
      if ( v49 == 64 )
      {
        *(_DWORD *)a3 |= 0xB00u;
      }
      else if ( v49 == (char)0x80 )
      {
        *(_DWORD *)a3 |= 0xE00u;
      }
      else
      {
        *(_DWORD *)a3 |= 0xF00u;
      }
      ++a1[15];
      v48 = 1;
      v50 = (_BYTE *)a1[15];
    }
    *a5 = *v50;
    ++a1[15];
    goto LABEL_91;
  }
  if ( v10 == 2 )
  {
    a1[15] = v9 + 1;
    v44 = ParseFieldConnection(a1, a6);
    v8 = v44;
    if ( v44 )
    {
      LogError(v44);
      AcpiDiagTraceAmlError(a1, v8);
      PrintDebugMessage(125, 0, 0, 0, 0LL);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)a6 + 4LL) = *v7;
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintIndent(a1);
        if ( **(_DWORD **)a6 == 1 )
          ConPrintf("Connection(%s)");
        else
          ConPrintf("Connection(%02x %02x %02x %02x ...)");
      }
    }
LABEL_97:
    v31 = a2;
    goto LABEL_41;
  }
  v11 = *(_DWORD *)a3 & 0xF;
  if ( (unsigned int)(v11 - 1) <= 3 )
    v52 = 1 << (v11 - 1);
  else
    v52 = 1;
  if ( v10 )
  {
    v12 = v60;
    v13 = 5LL;
    while ( 1 )
    {
      v14 = v13 - 1;
      if ( v13 == 1 )
        break;
      v15 = v12[v9 - v60];
      if ( !v15 )
        break;
      *v12 = v15;
      --v13;
      ++v12;
      if ( !v14 )
        goto LABEL_65;
    }
    if ( v13 )
      goto LABEL_14;
LABEL_65:
    --v12;
LABEL_14:
    *v12 = 0;
    v16 = v9 + 4;
  }
  else
  {
    v60[0] = 0;
    v16 = v9 + 1;
  }
  a1[15] = v16;
  v17 = v16 + 1;
  v18 = *v16;
  a1[15] = v16 + 1;
  v19 = (v18 >> 6) & 3;
  if ( v19 )
  {
    v18 &= 0xFu;
    for ( i = 0; i < v19; ++i )
    {
      v38 = *v17++;
      v39 = i;
      a1[15] = v17;
      v18 |= v38 << (8 * v39 + 4);
    }
  }
  if ( (gDebugger & 0xD0) != 0 )
  {
    PrintIndent(a1);
    if ( v60[0] )
    {
      ConPrintf("%s,%d");
    }
    else if ( v18 <= 0x20 || (((_BYTE)v18 + *(_BYTE *)v7) & 7) != 0 )
    {
      ConPrintf(",%d");
    }
    else
    {
      ConPrintf("Offset(0x%x)");
    }
  }
  v8 = CreateNameSpaceObject(a1[40], v60, a1[10], a1[11], &v56, 0);
  if ( v8 )
    goto LABEL_97;
  v20 = v56;
  *(_WORD *)(v56 + 66) = 5;
  *(_DWORD *)(v20 + 88) = 40;
  if ( *(_QWORD *)a6 )
    *(_DWORD *)(v20 + 88) = *(_DWORD *)(*(_QWORD *)a6 + 12LL) + 40;
  v21 = *(_DWORD *)(v20 + 88);
  v22 = 0LL;
  v23 = a1[40];
  v54 = 0LL;
  v24 = v21 + 16;
  if ( v21 + 16 < v21 )
    goto LABEL_77;
  if ( v24 < 0x20 )
    v24 = 32;
  if ( v24 + 7 < v24 )
    goto LABEL_77;
  v25 = (v24 + 7) & 0xFFFFFFF8;
  byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  if ( v25 > *(_DWORD *)(v23 + 8) - (int)v23 - 56 )
    goto LABEL_34;
  v26 = v23;
  v53 = v23;
  while ( 1 )
  {
    v22 = *(_QWORD *)(v26 + 40) - 16LL;
    v27 = *(_QWORD **)(v26 + 40);
    if ( (_QWORD *)(v26 + 40) == v27 )
    {
LABEL_27:
      v22 = 0LL;
    }
    else
    {
      while ( v25 > *(_DWORD *)(v22 + 4) )
      {
        v22 = *v27 - 16LL;
        v27 = (_QWORD *)*v27;
        if ( (_QWORD *)(v26 + 40) == v27 )
          goto LABEL_27;
      }
    }
    if ( v22 )
      break;
    if ( v25 <= *(_DWORD *)(v26 + 8) - *(_DWORD *)(v26 + 32) )
    {
      v22 = *(_QWORD *)(v26 + 32);
      *(_QWORD *)(v26 + 32) = v22 + v25;
      *(_DWORD *)(v22 + 4) = v25;
      goto LABEL_31;
    }
    v54 = v26;
    v26 = *(_QWORD *)(v26 + 24);
    v53 = v26;
    if ( !v26 )
      goto LABEL_31;
  }
  v40 = *(_QWORD *)(v22 + 16);
  v41 = *(_QWORD **)(v22 + 24);
  if ( *(_QWORD *)(v40 + 8) != v22 + 16 || *v41 != v22 + 16 )
    __fastfail(3u);
  *v41 = v40;
  *(_QWORD *)(v40 + 8) = v41;
  if ( *(unsigned int *)(v22 + 4) >= (unsigned __int64)v25 + 32 )
  {
    v42 = v22 + v25;
    *(_DWORD *)v42 = 0;
    v43 = *(_DWORD *)(v22 + 4) - v25;
    *(_QWORD *)(v42 + 8) = v26;
    *(_DWORD *)(v42 + 4) = v43;
    *(_DWORD *)(v22 + 4) = v25;
    HeapInsertFreeList(v26);
  }
LABEL_31:
  if ( !v22 )
  {
    if ( v23 == gpheapGlobal )
      v45 = NewGlobalHeap(&v53);
    else
      v45 = NewLocalHeap(&v53);
    if ( v45 )
      goto LABEL_33;
    v26 = v53;
    v46 = v54;
    *(_QWORD *)(v53 + 16) = v23;
    *(_QWORD *)(v46 + 24) = v26;
    v22 = *(_QWORD *)(v26 + 32);
    *(_QWORD *)(v26 + 32) = v22 + v25;
    *(_DWORD *)(v22 + 4) = v25;
  }
  *(_DWORD *)v22 = 1430537800;
  *(_QWORD *)(v22 + 8) = v26;
  memset((void *)(v22 + 16), 0, v25 - 16LL);
LABEL_33:
  v7 = v55;
LABEL_34:
  KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
  if ( !v22 )
  {
LABEL_77:
    v28 = 0LL;
    goto LABEL_36;
  }
  v28 = (void *)(v22 + 16);
LABEL_36:
  *(_QWORD *)(v20 + 96) = v28;
  if ( v28 )
  {
    memset(v28, 0, *(unsigned int *)(v20 + 88));
    v29 = *(_QWORD *)(v20 + 96);
    v30 = v57;
    *(_QWORD *)v29 = a2;
    v31 = 0LL;
    *(_DWORD *)(v29 + 20) = *v30;
    v32 = (_DWORD **)v59;
    LODWORD(v30) = v52 * (*v7 / (unsigned int)(8 * v52));
    *(_DWORD *)(v29 + 8) = (_DWORD)v30;
    v33 = *v7;
    *(_DWORD *)(v29 + 16) = v18;
    v34 = v33 - 8 * (_DWORD)v30;
    v35 = v58;
    *(_DWORD *)(v29 + 12) = v34;
    *(_BYTE *)(v29 + 24) = *v35;
    if ( *v32 )
    {
      *(_DWORD *)(v29 + 28) = **v32;
      *(_DWORD *)(v29 + 32) = (*v32)[1];
      *(_DWORD *)(v29 + 36) = (*v32)[3];
      memmove((void *)(v29 + 40), *v32 + 4, (unsigned int)(*v32)[3]);
    }
    *v7 += v18;
  }
  else
  {
    v8 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    PrintDebugMessage(124, 0, 0, 0, 0LL);
    v31 = a2;
  }
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 112), 0xFFFFFFFF) == 1 )
  {
    v47 = v56;
    *(_WORD *)(v56 + 64) |= 4u;
    if ( (*(_WORD *)(v47 + 64) & 0x40) == 0 )
      FreeNameSpaceObjects();
  }
LABEL_41:
  if ( v31 )
    DereferenceObjectEx(v31, 0LL);
  return v8;
}

/*
 * XREFs of ParseField @ 0x1C000EF50
 * Callers:
 *     ParseFieldList @ 0x1C000EE64 (ParseFieldList.c)
 * Callees:
 *     NewGlobalHeap @ 0x1C0006190 (NewGlobalHeap.c)
 *     CreateNameSpaceObject @ 0x1C0010A20 (CreateNameSpaceObject.c)
 *     ListRemoveEntry @ 0x1C0011778 (ListRemoveEntry.c)
 *     HeapInsertFreeList @ 0x1C0012D00 (HeapInsertFreeList.c)
 *     FreeNameSpaceObjects @ 0x1C0013710 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     NewLocalHeap @ 0x1C0018C98 (NewLocalHeap.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintIndent @ 0x1C0043DC0 (PrintIndent.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 *     ParseFieldConnection @ 0x1C0049A00 (ParseFieldConnection.c)
 */

__int64 __fastcall ParseField(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4, _BYTE *a5, __int64 a6)
{
  __int64 v8; // r13
  unsigned int v9; // r14d
  _BYTE *v10; // r9
  char v11; // dl
  int v12; // ecx
  _BYTE *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // r8
  unsigned __int8 *v17; // rax
  unsigned __int8 *v18; // r8
  unsigned int v19; // r15d
  unsigned __int8 v20; // dl
  __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // rbp
  __int64 v24; // rbx
  unsigned int v25; // ecx
  unsigned int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r11
  __int64 v31; // rax
  void *v32; // rcx
  __int64 v33; // r9
  _DWORD *v34; // rax
  __int64 v35; // rbx
  _DWORD **v36; // rdx
  int v37; // ecx
  int v38; // ecx
  _BYTE *v39; // rax
  __int64 v41; // rcx
  unsigned __int8 i; // r9
  int v43; // eax
  unsigned __int8 v44; // cl
  __int64 v45; // rdx
  unsigned int v46; // eax
  int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // rcx
  bool v50; // di
  char v51; // cl
  _BYTE *v52; // rax
  int v54; // [rsp+38h] [rbp-90h]
  __int64 v55; // [rsp+40h] [rbp-88h] BYREF
  __int64 v56; // [rsp+48h] [rbp-80h] BYREF
  _DWORD *v57; // [rsp+50h] [rbp-78h]
  _BYTE *v58; // [rsp+58h] [rbp-70h]
  __int64 v59; // [rsp+60h] [rbp-68h]
  _BYTE v60[8]; // [rsp+68h] [rbp-60h] BYREF

  v8 = 0LL;
  v9 = 0;
  v58 = a5;
  v57 = (_DWORD *)a3;
  v59 = a6;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
  v10 = (_BYTE *)a1[15];
  v11 = *v10;
  if ( ((*v10 - 1) & 0xFD) == 0 )
  {
    v50 = v11 == 3;
    a1[15] = v10 + 1;
    *(_DWORD *)a3 &= 0xFFFFFFF0;
    *(_DWORD *)a3 |= *(_BYTE *)a1[15] & 0xF;
    if ( v11 == 3 || (*(_BYTE *)a1[15] & 0xC0) == 0 )
    {
      ++a1[15];
      *(_BYTE *)(a3 + 1) = 0;
      *(_DWORD *)a3 |= *(unsigned __int8 *)a1[15]++ << 8;
      v52 = (_BYTE *)a1[15];
      if ( v11 != 3 )
      {
        *a5 = 0;
LABEL_88:
        if ( (gDebugger & 0xD0) != 0 )
        {
          PrintIndent(a1);
          ConPrintf("AccessAs(0x%x,0x%x");
          if ( v50 )
            ConPrintf(",0x%x)\n");
          else
            ConPrintf(")\n");
        }
        goto LABEL_94;
      }
    }
    else
    {
      *(_BYTE *)(a3 + 1) = 0;
      v51 = *(_BYTE *)a1[15] & 0xC0;
      if ( v51 == 64 )
      {
        *(_DWORD *)a3 |= 0xB00u;
      }
      else if ( v51 == (char)0x80 )
      {
        *(_DWORD *)a3 |= 0xE00u;
      }
      else
      {
        *(_DWORD *)a3 |= 0xF00u;
      }
      ++a1[15];
      v50 = 1;
      v52 = (_BYTE *)a1[15];
    }
    *a5 = *v52;
    ++a1[15];
    goto LABEL_88;
  }
  if ( v11 == 2 )
  {
    a1[15] = v10 + 1;
    v48 = ParseFieldConnection(a1, a6);
    v9 = v48;
    if ( v48 )
    {
      LogError(v48);
      PrintDebugMessage(125, 0, 0, 0, 0LL);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)a6 + 4LL) = *a4;
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintIndent(a1);
        if ( **(_DWORD **)a6 == 1 )
          ConPrintf("Connection(%s)");
        else
          ConPrintf("Connection(%02x %02x %02x %02x ...)");
      }
    }
LABEL_94:
    v35 = a2;
    goto LABEL_39;
  }
  v12 = *(_DWORD *)a3 & 0xF;
  if ( (unsigned int)(v12 - 1) <= 3 )
    v54 = 1 << (v12 - 1);
  else
    v54 = 1;
  if ( v11 )
  {
    v13 = v60;
    v14 = 5LL;
    while ( 1 )
    {
      v15 = v14 - 1;
      if ( v14 == 1 )
        break;
      v16 = v13[v10 - v60];
      if ( !v16 )
        break;
      *v13 = v16;
      --v14;
      ++v13;
      if ( !v15 )
        goto LABEL_67;
    }
    if ( v14 )
      goto LABEL_14;
LABEL_67:
    --v13;
LABEL_14:
    *v13 = 0;
    v17 = v10 + 4;
  }
  else
  {
    v60[0] = 0;
    v17 = v10 + 1;
  }
  a1[15] = v17;
  v18 = v17 + 1;
  v19 = *v17;
  a1[15] = v17 + 1;
  v20 = (v19 >> 6) & 3;
  if ( v20 )
  {
    v19 &= 0xFu;
    for ( i = 0; i < v20; ++i )
    {
      v43 = *v18++;
      v44 = i;
      a1[15] = v18;
      v19 |= v43 << (8 * v44 + 4);
    }
  }
  if ( (gDebugger & 0xD0) != 0 )
  {
    PrintIndent(a1);
    if ( v60[0] )
    {
      ConPrintf("%s,%d");
    }
    else if ( v19 <= 0x20 || (((_BYTE)v19 + *(_BYTE *)a4) & 7) != 0 )
    {
      ConPrintf(",%d");
    }
    else
    {
      ConPrintf("Offset(0x%x)");
    }
  }
  v9 = CreateNameSpaceObject(a1[40], v60, a1[10], a1[11], &v56, 0);
  if ( v9 )
    goto LABEL_94;
  v21 = v56;
  *(_WORD *)(v56 + 58) = 5;
  *(_DWORD *)(v21 + 80) = 40;
  if ( *(_QWORD *)a6 )
    *(_DWORD *)(v21 + 80) = *(_DWORD *)(*(_QWORD *)a6 + 12LL) + 40;
  v22 = *(_DWORD *)(v21 + 80);
  v23 = a1[40];
  v24 = 0LL;
  v25 = v22 + 16;
  if ( v22 + 16 < v22 )
    goto LABEL_74;
  if ( v25 < 0x20 )
    v25 = 32;
  if ( v25 + 7 < v25 )
    goto LABEL_74;
  v26 = (v25 + 7) & 0xFFFFFFF8;
  byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  if ( v26 > *(_DWORD *)(v23 + 8) - (int)v23 - 48 )
    goto LABEL_32;
  v30 = v23;
  v55 = v23;
  while ( 1 )
  {
    v31 = *(_QWORD *)(v30 + 40);
    v24 = 0LL;
    if ( v31 )
    {
      v41 = *(_QWORD *)(v30 + 40);
      while ( 1 )
      {
        v24 = v41 - 16;
        if ( v26 <= *(_DWORD *)(v41 - 12) )
          break;
        v41 = *(_QWORD *)(v41 + 8);
        if ( v41 == v31 )
        {
          if ( v26 > *(_DWORD *)(v24 + 4) )
            v24 = 0LL;
          break;
        }
      }
    }
    if ( v24 )
      break;
    if ( v26 <= *(_DWORD *)(v30 + 8) - *(_DWORD *)(v30 + 32) )
    {
      v24 = *(_QWORD *)(v30 + 32);
      *(_QWORD *)(v30 + 32) = v24 + v26;
      *(_DWORD *)(v24 + 4) = v26;
      goto LABEL_30;
    }
    v8 = v30;
    v30 = *(_QWORD *)(v30 + 24);
    v55 = v30;
    if ( !v30 )
      goto LABEL_30;
  }
  ListRemoveEntry(v24 + 16, v30 + 40, v28, v29);
  v27 = v26;
  if ( *(unsigned int *)(v24 + 4) >= (unsigned __int64)v26 + 32 )
  {
    v45 = v24 + v26;
    *(_DWORD *)v45 = 0;
    v46 = *(_DWORD *)(v24 + 4) - v26;
    *(_QWORD *)(v45 + 8) = v30;
    *(_DWORD *)(v45 + 4) = v46;
    *(_DWORD *)(v24 + 4) = v26;
    HeapInsertFreeList(v30);
  }
LABEL_30:
  if ( v24 )
    goto LABEL_31;
  if ( v23 == gpheapGlobal )
    v47 = NewGlobalHeap(&v55);
  else
    v47 = NewLocalHeap(&v55, v27, v28, v29);
  if ( !v47 )
  {
    v30 = v55;
    *(_QWORD *)(v55 + 16) = v23;
    *(_QWORD *)(v8 + 24) = v30;
    v24 = *(_QWORD *)(v30 + 32);
    *(_QWORD *)(v30 + 32) = v24 + v26;
    *(_DWORD *)(v24 + 4) = v26;
LABEL_31:
    *(_DWORD *)v24 = 1430537800;
    *(_QWORD *)(v24 + 8) = v30;
    memset((void *)(v24 + 16), 0, v26 - 16LL);
  }
LABEL_32:
  KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
  if ( !v24 )
  {
LABEL_74:
    v32 = 0LL;
    goto LABEL_34;
  }
  v32 = (void *)(v24 + 16);
LABEL_34:
  *(_QWORD *)(v21 + 88) = v32;
  if ( v32 )
  {
    memset(v32, 0, *(unsigned int *)(v21 + 80));
    v33 = *(_QWORD *)(v21 + 88);
    v34 = v57;
    *(_QWORD *)v33 = a2;
    v35 = 0LL;
    *(_DWORD *)(v33 + 20) = *v34;
    v36 = (_DWORD **)v59;
    LODWORD(v34) = v54 * (*a4 / (unsigned int)(8 * v54));
    *(_DWORD *)(v33 + 8) = (_DWORD)v34;
    v37 = *a4;
    *(_DWORD *)(v33 + 16) = v19;
    v38 = v37 - 8 * (_DWORD)v34;
    v39 = v58;
    *(_DWORD *)(v33 + 12) = v38;
    *(_BYTE *)(v33 + 24) = *v39;
    if ( *v36 )
    {
      *(_DWORD *)(v33 + 28) = **v36;
      *(_DWORD *)(v33 + 32) = (*v36)[1];
      *(_DWORD *)(v33 + 36) = (*v36)[3];
      memmove((void *)(v33 + 40), *v36 + 4, (unsigned int)(*v36)[3]);
    }
    *a4 += v19;
  }
  else
  {
    v9 = -1073741670;
    LogError(3221225626LL);
    PrintDebugMessage(124, 0, 0, 0, 0LL);
    v35 = a2;
  }
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 104), 0xFFFFFFFF) == 1 )
  {
    v49 = v56;
    *(_WORD *)(v56 + 56) |= 4u;
    if ( (*(_WORD *)(v49 + 56) & 0x40) == 0 )
      FreeNameSpaceObjects();
  }
LABEL_39:
  if ( v35 )
    DereferenceObjectEx(v35);
  return v9;
}

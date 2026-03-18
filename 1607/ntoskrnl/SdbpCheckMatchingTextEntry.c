/*
 * XREFs of SdbpCheckMatchingTextEntry @ 0x1406C2AE8
 * Callers:
 *     SdbpCheckMatchingText @ 0x1406C29D0 (SdbpCheckMatchingText.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     AslFileMappingDelete @ 0x140485350 (AslFileMappingDelete.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     AslFileMappingCreate @ 0x14049D54C (AslFileMappingCreate.c)
 *     AslFileNotFound @ 0x14057B46C (AslFileNotFound.c)
 *     SdbpInitializeSearchDBContext @ 0x1406C3824 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x1406C3A6C (SdbpResolveMatchingFile.c)
 *     AslStringSearchA @ 0x1406C549C (AslStringSearchA.c)
 *     AslStringSearchW @ 0x1406C552C (AslStringSearchW.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslFileMappingEnsureMappedAs @ 0x1406C5910 (AslFileMappingEnsureMappedAs.c)
 *     AslFileMappingGetViewBase @ 0x1406C5E18 (AslFileMappingGetViewBase.c)
 */

__int64 __fastcall SdbpCheckMatchingTextEntry(
        __int64 a1,
        int *a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int *a8,
        _DWORD *a9)
{
  unsigned int v9; // r10d
  _DWORD *v10; // rsi
  _QWORD *v11; // rbx
  __int64 v13; // r13
  int v14; // eax
  unsigned int v15; // r12d
  WCHAR *v16; // rdi
  int v17; // eax
  int *v18; // rbp
  int v19; // esi
  __int64 v20; // r9
  int v21; // eax
  int v22; // ecx
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  const WCHAR *ViewBase; // rax
  unsigned __int64 v27; // rdx
  int v28; // r8d
  unsigned int v29; // ebp
  unsigned int v30; // esi
  unsigned int v31; // r15d
  int v32; // r15d
  unsigned int v33; // r14d
  _QWORD *v34; // rax
  char *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  const char *v38; // r9
  int v39; // r8d
  __int64 v40; // [rsp+20h] [rbp-58h]
  WCHAR *v41; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v42; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v43; // [rsp+88h] [rbp+10h]
  unsigned __int16 *v44; // [rsp+90h] [rbp+18h]

  v44 = a3;
  v9 = 0;
  v10 = a9;
  v11 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v13 = a1;
  v14 = *a2;
  v43 = 0;
  v15 = 0;
  *a8 = 0;
  v16 = 0LL;
  *a9 = 0;
  if ( (v14 & 1) == 0 )
  {
    v17 = SdbpInitializeSearchDBContext(a2);
    v9 = 0;
    if ( !v17 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingTextEntry",
        1435,
        (unsigned int)"Failed to initialize SEARCHDBCONTEXT");
      goto LABEL_16;
    }
    a3 = v44;
  }
  v18 = (int *)*((_QWORD *)a2 + 9);
  v19 = 0;
  if ( *v18 <= 0 )
    goto LABEL_13;
  while ( 1 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a3[v20] );
    if ( !(unsigned int)SdbpResolveMatchingFile(v13, a2, a3, v20, &v18[12 * v19 + 2], &v41) )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingTextEntry",
        1459,
        (unsigned int)"Failed to resolve matching text file");
      v16 = v41;
      goto LABEL_15;
    }
    v16 = v41;
    v21 = AslFileMappingCreate((__int64 *)&v42, v41, 0LL, 0LL, 0LL);
    v11 = v42;
    v22 = v21;
    if ( v21 >= 0 )
      v22 = AslFileMappingEnsureMappedAs(v42);
    if ( !AslFileNotFound(v22) )
      break;
    AslFileMappingDelete((__int64)v11);
    v11 = 0LL;
    v42 = 0LL;
    AslFree(v23, v16);
    a3 = v44;
    v9 = 0;
    ++v19;
    v41 = 0LL;
    v16 = 0LL;
    if ( v19 >= *v18 )
      goto LABEL_13;
  }
  if ( (int)a1 < 0 )
  {
    LODWORD(v40) = a1;
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingTextEntry", 1491, (unsigned int)"Failed to map file [%x]", v40);
    goto LABEL_15;
  }
  if ( v19 > 0 )
    *a9 = 1;
  if ( !v11 )
    goto LABEL_13;
  ViewBase = (const WCHAR *)AslFileMappingGetViewBase(v11, v11[67], 1LL);
  v29 = a7;
  v30 = v9;
  v41 = (WCHAR *)ViewBase;
  if ( a7 >= v27 )
    v29 = v27;
  if ( a5 <= v29 )
  {
    v31 = v9;
    LOBYTE(v31) = a6 == 3;
    v32 = v28 + v31;
    if ( !v29 )
    {
LABEL_48:
      a1 = v43;
      *a8 = v43;
      goto LABEL_14;
    }
    while ( 1 )
    {
      if ( v30 > a5 )
        v30 += v32 - a5;
      v33 = v29 - v30;
      if ( v29 - v30 > 0x1000 )
        v33 = 4096;
      v34 = AslAlloc(4096LL, v33 + 2LL);
      v42 = v34;
      if ( !v34 )
        break;
      v35 = (char *)v41 + v30;
      if ( v35 < (char *)v41 )
      {
        v38 = "Overflow doing pointer addition";
        v39 = 1569;
        goto LABEL_50;
      }
      memmove(v34, v35, v33);
      if ( !a6 )
        goto LABEL_49;
      if ( a6 <= 2 )
      {
        v37 = AslStringSearchA(v42, v33, a4, a5);
        v36 = v43;
        if ( v37 )
          v36 = 1LL;
        v43 = v36;
      }
      else
      {
        if ( a6 != 3 )
        {
LABEL_49:
          v38 = "Unknown file encoding";
          v39 = 1603;
          goto LABEL_50;
        }
        if ( AslStringSearchW(v42, v33 >> 1, a4, a5 >> 1) )
          v43 = 1;
      }
      v30 += v33;
      AslFree(v36, v42);
      if ( v30 >= v29 )
        goto LABEL_48;
    }
    v38 = "Failed to allocate temp buffer";
    v39 = 1562;
LABEL_50:
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingTextEntry", v39, (_DWORD)v38);
  }
  else
  {
LABEL_13:
    *a8 = v9;
LABEL_14:
    v15 = 1;
  }
LABEL_15:
  v10 = a9;
LABEL_16:
  v24 = *v44;
  LOWORD(v24) = v24 - 37;
  if ( (unsigned __int16)v24 <= 0x37u )
  {
    a1 = 0x80000000000201LL;
    if ( _bittest64(&a1, v24) )
      *v10 = 1;
  }
  if ( v16 )
    AslFree(a1, v16);
  if ( v11 )
    AslFileMappingDelete((__int64)v11);
  return v15;
}

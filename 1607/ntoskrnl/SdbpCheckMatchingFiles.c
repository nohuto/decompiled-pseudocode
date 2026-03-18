/*
 * XREFs of SdbpCheckMatchingFiles @ 0x1406C21AC
 * Callers:
 *     <none>
 * Callees:
 *     AslFileMappingDelete @ 0x140485350 (AslFileMappingDelete.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslFileMappingCreate @ 0x14049D54C (AslFileMappingCreate.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x140573D10 (SdbGetStringTagPtr.c)
 *     AslFileNotFound @ 0x14057B46C (AslFileNotFound.c)
 *     SdbpInitializeSearchDBContext @ 0x1406C3824 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x1406C3A6C (SdbpResolveMatchingFile.c)
 *     SdbpCheckAllAttributes @ 0x1406C4A30 (SdbpCheckAllAttributes.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingFiles(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14
  unsigned int v7; // ebx
  int v9; // r15d
  WCHAR *v10; // rsi
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // r12
  int v13; // eax
  int v14; // ecx
  __int64 v15; // r13
  int *v16; // rdx
  int v17; // r15d
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // [rsp+20h] [rbp-30h]
  int v25; // [rsp+30h] [rbp-20h] BYREF
  WCHAR *v26; // [rsp+38h] [rbp-18h] BYREF
  __int64 v27; // [rsp+40h] [rbp-10h]
  int *v28; // [rsp+48h] [rbp-8h]
  int v31; // [rsp+A0h] [rbp+50h]

  v31 = a3;
  v6 = a6;
  v7 = 0;
  v25 = 0;
  v9 = a2;
  v26 = 0LL;
  v10 = 0LL;
  v27 = 0LL;
  if ( *(_QWORD *)(a6 + 88) )
  {
    v25 = 1;
    goto LABEL_28;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( FirstTag )
  {
    StringTagPtr = (_WORD *)SdbGetStringTagPtr(a3, FirstTag);
    if ( !StringTagPtr )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingFiles",
        2066,
        (unsigned int)"Failed to get the string from the database");
      goto LABEL_29;
    }
    if ( *(_QWORD *)(v6 + 8) && *StringTagPtr == 42 )
    {
      v13 = SdbpCheckAllAttributes((unsigned int)&v25, v9, a3, a5, *(_QWORD *)(v6 + 8));
      if ( AslFileNotFound(v13) || v14 >= 0 )
      {
        v7 = 1;
      }
      else
      {
        LODWORD(v24) = v14;
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckMatchingFiles",
          2091,
          (unsigned int)"Failed to check file attributes [%x]",
          v24);
      }
      goto LABEL_29;
    }
    v15 = -1LL;
    do
      ++v15;
    while ( StringTagPtr[v15] );
    if ( (*(_DWORD *)v6 & 1) == 0 && !(unsigned int)SdbpInitializeSearchDBContext(v6) )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingFiles",
        2117,
        (unsigned int)"Failed to initialize SEARCHDBCONTEXT");
      goto LABEL_29;
    }
    v16 = *(int **)(v6 + 72);
    v17 = 0;
    v28 = v16;
    if ( *v16 <= 0 )
      goto LABEL_25;
    while ( 1 )
    {
      if ( !(unsigned int)SdbpResolveMatchingFile(a2, v6, StringTagPtr, (unsigned int)v15, &v16[12 * v17 + 2], &v26) )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckMatchingFiles",
          2141,
          (unsigned int)"Failed to resolve matching file");
        v10 = v26;
        break;
      }
      v10 = v26;
      a6 = 0LL;
      if ( (int)AslFileMappingCreate(&a6, v26, 0LL, 0LL, 0LL) >= 0 )
      {
        v27 = a6;
        if ( (int)SdbpCheckAllAttributes((unsigned int)&v25, a2, v31, a5, a6) >= 0 )
        {
          if ( v17 > 0 )
            *(_DWORD *)(v6 + 80) = 1;
LABEL_25:
          v20 = (unsigned __int16)*StringTagPtr;
          LOWORD(v20) = v20 - 37;
          if ( (unsigned __int16)v20 <= 0x37u )
          {
            v21 = 0x80000000000201LL;
            if ( _bittest64(&v21, v20) )
              *(_DWORD *)(v6 + 80) = 1;
          }
LABEL_28:
          v7 = 1;
          break;
        }
        AslFileMappingDelete(v27);
        v27 = 0LL;
        AslFree(v19, v10);
      }
      else
      {
        AslFree(v18, v10);
        v27 = a6;
      }
      v16 = v28;
      ++v17;
      v26 = 0LL;
      v10 = 0LL;
      if ( v17 >= *v28 )
        goto LABEL_25;
    }
  }
LABEL_29:
  AslFileMappingDelete(v27);
  AslFree(v22, v10);
  *a1 = v25;
  return v7;
}

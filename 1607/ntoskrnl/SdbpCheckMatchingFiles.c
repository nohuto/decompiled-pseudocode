/*
 * XREFs of SdbpCheckMatchingFiles @ 0x1406C22E4
 * Callers:
 *     <none>
 * Callees:
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     AslFileMappingDelete @ 0x1405146D8 (AslFileMappingDelete.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     AslFileMappingCreate @ 0x1405153C4 (AslFileMappingCreate.c)
 *     SdbGetStringTagPtr @ 0x140574250 (SdbGetStringTagPtr.c)
 *     AslFileNotFound @ 0x14057B918 (AslFileNotFound.c)
 *     SdbpInitializeSearchDBContext @ 0x1406C395C (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x1406C3BA4 (SdbpResolveMatchingFile.c)
 *     SdbpCheckAllAttributes @ 0x1406C4B68 (SdbpCheckAllAttributes.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingFiles(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14
  unsigned int v7; // ebx
  int v9; // r15d
  WCHAR *v10; // rsi
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // r12
  const char *v13; // r9
  int v14; // r8d
  int v15; // eax
  int v16; // ecx
  __int64 v17; // r13
  int *v18; // rdx
  int v19; // r15d
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v26; // [rsp+30h] [rbp-20h] BYREF
  WCHAR *v27; // [rsp+38h] [rbp-18h] BYREF
  __int64 v28; // [rsp+40h] [rbp-10h]
  int *v29; // [rsp+48h] [rbp-8h]
  int v32; // [rsp+A0h] [rbp+50h]

  v32 = a3;
  v6 = a6;
  v7 = 0;
  v26 = 0;
  v9 = a2;
  v27 = 0LL;
  v10 = 0LL;
  v28 = 0LL;
  if ( *(_QWORD *)(a6 + 88) )
  {
    v26 = 1;
    goto LABEL_28;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( FirstTag )
  {
    StringTagPtr = (_WORD *)SdbGetStringTagPtr(a3, FirstTag);
    if ( StringTagPtr )
    {
      if ( *(_QWORD *)(v6 + 8) && *StringTagPtr == 42 )
      {
        v15 = SdbpCheckAllAttributes((unsigned int)&v26, v9, a3, a5, *(_QWORD *)(v6 + 8));
        if ( AslFileNotFound(v15) || v16 >= 0 )
          v7 = 1;
        else
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpCheckMatchingFiles",
            2091,
            (unsigned int)"Failed to check file attributes [%x]");
        goto LABEL_29;
      }
      v17 = -1LL;
      do
        ++v17;
      while ( StringTagPtr[v17] );
      if ( (*(_DWORD *)v6 & 1) != 0 || (unsigned int)SdbpInitializeSearchDBContext(v6) )
      {
        v18 = *(int **)(v6 + 72);
        v19 = 0;
        v29 = v18;
        if ( *v18 <= 0 )
          goto LABEL_25;
        while ( 1 )
        {
          if ( !(unsigned int)SdbpResolveMatchingFile(a2, v6, StringTagPtr, (unsigned int)v17, &v18[12 * v19 + 2], &v27) )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpCheckMatchingFiles",
              2141,
              (unsigned int)"Failed to resolve matching file");
            v10 = v27;
            goto LABEL_29;
          }
          v10 = v27;
          a6 = 0LL;
          if ( (int)AslFileMappingCreate(&a6, v27, 0LL, 0LL, 0LL) >= 0 )
          {
            v28 = a6;
            if ( (int)SdbpCheckAllAttributes((unsigned int)&v26, a2, v32, a5, a6) >= 0 )
            {
              if ( v19 > 0 )
                *(_DWORD *)(v6 + 80) = 1;
LABEL_25:
              v22 = (unsigned __int16)*StringTagPtr;
              LOWORD(v22) = v22 - 37;
              if ( (unsigned __int16)v22 <= 0x37u )
              {
                v23 = 0x80000000000201LL;
                if ( _bittest64(&v23, v22) )
                  *(_DWORD *)(v6 + 80) = 1;
              }
LABEL_28:
              v7 = 1;
              goto LABEL_29;
            }
            AslFileMappingDelete(v28);
            v28 = 0LL;
            AslFree(v21, v10);
          }
          else
          {
            AslFree(v20, v10);
            v28 = a6;
          }
          v18 = v29;
          ++v19;
          v27 = 0LL;
          v10 = 0LL;
          if ( v19 >= *v29 )
            goto LABEL_25;
        }
      }
      v13 = "Failed to initialize SEARCHDBCONTEXT";
      v14 = 2117;
    }
    else
    {
      v13 = "Failed to get the string from the database";
      v14 = 2066;
    }
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingFiles", v14, (_DWORD)v13);
  }
LABEL_29:
  AslFileMappingDelete(v28);
  AslFree(v24, v10);
  *a1 = v26;
  return v7;
}

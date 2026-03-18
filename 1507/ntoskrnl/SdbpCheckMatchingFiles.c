/*
 * XREFs of SdbpCheckMatchingFiles @ 0x1405AB79C
 * Callers:
 *     <none>
 * Callees:
 *     SdbFindFirstTag @ 0x140577C74 (SdbFindFirstTag.c)
 *     AslFileMappingDelete @ 0x140578388 (AslFileMappingDelete.c)
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     SdbpResolveMatchingFile @ 0x1405AA010 (SdbpResolveMatchingFile.c)
 *     AslFileMappingCreate @ 0x1405AAB1C (AslFileMappingCreate.c)
 *     AslFileNotFound @ 0x1405AB1A8 (AslFileNotFound.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbpInitializeSearchDBContext @ 0x1405AB940 (SdbpInitializeSearchDBContext.c)
 *     SdbGetStringTagPtr @ 0x1405ABAB8 (SdbGetStringTagPtr.c)
 *     SdbpCheckAllAttributes @ 0x140704904 (SdbpCheckAllAttributes.c)
 */

__int64 __fastcall SdbpCheckMatchingFiles(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14
  unsigned int v7; // ebx
  int v9; // r15d
  WCHAR *v10; // rsi
  unsigned int FirstTag; // eax
  unsigned __int16 *StringTagPtr; // r12
  __int64 v13; // r13
  int *v14; // rdx
  int v15; // r15d
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v21; // eax
  int v22; // ecx
  __int64 v23; // rcx
  int v24; // [rsp+30h] [rbp-20h] BYREF
  WCHAR *v25; // [rsp+38h] [rbp-18h] BYREF
  __int64 v26; // [rsp+40h] [rbp-10h]
  int *v27; // [rsp+48h] [rbp-8h]
  int v30; // [rsp+A0h] [rbp+50h]

  v30 = a3;
  v6 = a6;
  v7 = 0;
  v24 = 0;
  v9 = a2;
  v25 = 0LL;
  v10 = 0LL;
  v26 = 0LL;
  if ( *(_QWORD *)(a6 + 88) )
  {
    v24 = 1;
    goto LABEL_17;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( FirstTag )
  {
    StringTagPtr = (unsigned __int16 *)SdbGetStringTagPtr(a3, FirstTag);
    if ( !StringTagPtr )
      goto LABEL_20;
    if ( *(_QWORD *)(v6 + 8) && *StringTagPtr == 42 )
    {
      v21 = SdbpCheckAllAttributes((unsigned int)&v24, v9, a3, a5, *(_QWORD *)(v6 + 8));
      if ( AslFileNotFound(v21) || v22 >= 0 )
        v7 = 1;
      else
        AslLogCallPrintf(1LL);
      goto LABEL_18;
    }
    v13 = -1LL;
    do
      ++v13;
    while ( StringTagPtr[v13] );
    if ( (*(_DWORD *)v6 & 1) == 0 && !(unsigned int)SdbpInitializeSearchDBContext(v6) )
    {
LABEL_20:
      AslLogCallPrintf(1LL);
      goto LABEL_18;
    }
    v14 = *(int **)(v6 + 72);
    v15 = 0;
    v27 = v14;
    if ( *v14 <= 0 )
      goto LABEL_14;
    while ( 1 )
    {
      if ( !(unsigned int)SdbpResolveMatchingFile(a2, v6, StringTagPtr, v13, (__int64)&v14[12 * v15 + 2], &v25) )
      {
        AslLogCallPrintf(1LL);
        v10 = v25;
        break;
      }
      v10 = v25;
      a6 = 0LL;
      if ( (int)AslFileMappingCreate(&a6, v25, 0LL, 0LL, 0LL) >= 0 )
      {
        v26 = a6;
        if ( (int)SdbpCheckAllAttributes((unsigned int)&v24, a2, v30, a5, a6) >= 0 )
        {
          if ( v15 > 0 )
            *(_DWORD *)(v6 + 80) = 1;
LABEL_14:
          v17 = *StringTagPtr;
          LOWORD(v17) = v17 - 37;
          if ( (unsigned __int16)v17 <= 0x37u )
          {
            v18 = 0x80000000000201LL;
            if ( _bittest64(&v18, v17) )
              *(_DWORD *)(v6 + 80) = 1;
          }
LABEL_17:
          v7 = 1;
          break;
        }
        AslFileMappingDelete(v26);
        v26 = 0LL;
        AslFree(v23, v10);
      }
      else
      {
        AslFree(v16, v10);
        v26 = a6;
      }
      v14 = v27;
      ++v15;
      v25 = 0LL;
      v10 = 0LL;
      if ( v15 >= *v27 )
        goto LABEL_14;
    }
  }
LABEL_18:
  AslFileMappingDelete(v26);
  AslFree(v19, v10);
  *a1 = v24;
  return v7;
}

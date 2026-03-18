/*
 * XREFs of SdbpCheckMatchingTextEntry @ 0x14067DFA8
 * Callers:
 *     SdbpCheckMatchingText @ 0x14067DE90 (SdbpCheckMatchingText.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     AslFileMappingCreate @ 0x1403B6E64 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x1403B7DE0 (AslFileMappingDelete.c)
 *     AslFree @ 0x1403B7E1C (AslFree.c)
 *     AslAlloc @ 0x1403B8554 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     SdbpResolveMatchingFile @ 0x140535724 (SdbpResolveMatchingFile.c)
 *     SdbpInitializeSearchDBContext @ 0x140535E24 (SdbpInitializeSearchDBContext.c)
 *     AslFileNotFound @ 0x140546534 (AslFileNotFound.c)
 *     AslStringSearchA @ 0x1406803D0 (AslStringSearchA.c)
 *     AslStringSearchW @ 0x140680460 (AslStringSearchW.c)
 *     AslFileMappingEnsureMappedAs @ 0x14068081C (AslFileMappingEnsureMappedAs.c)
 *     AslFileMappingGetViewBase @ 0x140680D24 (AslFileMappingGetViewBase.c)
 */

__int64 __fastcall SdbpCheckMatchingTextEntry(
        __int64 a1,
        __int64 a2,
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
  wchar_t *v11; // rbx
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
  wchar_t *v34; // rax
  char *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  WCHAR *v38; // [rsp+30h] [rbp-48h] BYREF
  wchar_t *v39; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v40; // [rsp+88h] [rbp+10h]
  unsigned __int16 *v41; // [rsp+90h] [rbp+18h]

  v41 = a3;
  v9 = 0;
  v10 = a9;
  v11 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v13 = a1;
  v14 = *(_DWORD *)a2;
  v40 = 0;
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
      AslLogCallPrintf(1LL);
      goto LABEL_16;
    }
    a3 = v41;
  }
  v18 = *(int **)(a2 + 72);
  v19 = 0;
  if ( *v18 <= 0 )
    goto LABEL_13;
  while ( 1 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a3[v20] );
    if ( !(unsigned int)SdbpResolveMatchingFile(v13, a2, a3, v20, (__int64)&v18[12 * v19 + 2], &v38) )
    {
      AslLogCallPrintf(1LL);
      v16 = v38;
      goto LABEL_15;
    }
    v16 = v38;
    v21 = AslFileMappingCreate(&v39, v38, 0LL, 0LL, 0LL);
    v11 = v39;
    v22 = v21;
    if ( v21 >= 0 )
      v22 = AslFileMappingEnsureMappedAs(v39);
    if ( !AslFileNotFound(v22) )
      break;
    AslFileMappingDelete((__int64)v11);
    v11 = 0LL;
    v39 = 0LL;
    AslFree(v23, v16);
    a3 = v41;
    v9 = 0;
    ++v19;
    v38 = 0LL;
    v16 = 0LL;
    if ( v19 >= *v18 )
      goto LABEL_13;
  }
  if ( (int)a1 < 0 )
  {
LABEL_25:
    AslLogCallPrintf(1LL);
    goto LABEL_15;
  }
  if ( v19 > 0 )
    *a9 = 1;
  if ( !v11 )
    goto LABEL_13;
  ViewBase = (const WCHAR *)AslFileMappingGetViewBase(v11, *((_QWORD *)v11 + 67), 1LL);
  v29 = a7;
  v30 = v9;
  v38 = (WCHAR *)ViewBase;
  if ( a7 >= v27 )
    v29 = v27;
  if ( a5 <= v29 )
  {
    v31 = v9;
    LOBYTE(v31) = a6 == 3;
    v32 = v28 + v31;
    if ( v29 )
    {
      do
      {
        if ( v30 > a5 )
          v30 += v32 - a5;
        v33 = v29 - v30;
        if ( v29 - v30 > 0x1000 )
          v33 = 4096;
        v34 = (wchar_t *)AslAlloc(4096LL, v33 + 2LL);
        v39 = v34;
        if ( !v34 )
          goto LABEL_25;
        v35 = (char *)v38 + v30;
        if ( v35 < (char *)v38 )
          goto LABEL_25;
        memmove(v34, v35, v33);
        if ( !a6 )
          goto LABEL_25;
        if ( a6 <= 2 )
        {
          v37 = AslStringSearchA(v39, v33, a4, a5);
          v36 = v40;
          if ( v37 )
            v36 = 1LL;
          v40 = v36;
        }
        else
        {
          if ( a6 != 3 )
            goto LABEL_25;
          if ( AslStringSearchW(v39, v33 >> 1, a4, a5 >> 1) )
            v40 = 1;
        }
        v30 += v33;
        AslFree(v36, v39);
      }
      while ( v30 < v29 );
    }
    a1 = v40;
    *a8 = v40;
  }
  else
  {
LABEL_13:
    *a8 = v9;
  }
  v15 = 1;
LABEL_15:
  v10 = a9;
LABEL_16:
  v24 = *v41;
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

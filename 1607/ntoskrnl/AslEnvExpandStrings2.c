/*
 * XREFs of AslEnvExpandStrings2 @ 0x1406C6530
 * Callers:
 *     SdbpResolveMatchingFile @ 0x1406C3A6C (SdbpResolveMatchingFile.c)
 * Callees:
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslEnvExpandStrings @ 0x1406C6348 (AslEnvExpandStrings.c)
 *     AslEnvResolveVars @ 0x1406C66D4 (AslEnvResolveVars.c)
 */

__int64 __fastcall AslEnvExpandStrings2(__int64 a1, _WORD *a2, _WORD *a3, unsigned __int64 a4, _QWORD *a5, int a6)
{
  __int64 v7; // rsi
  __int64 v8; // rbx
  _WORD *v9; // rdi
  _WORD *v10; // rbp
  unsigned int v11; // ebx
  _QWORD *v12; // r15
  int v13; // r13d
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rax
  const char *v18; // r9
  int v19; // r8d
  int v20; // eax
  __int64 v22; // [rsp+20h] [rbp-48h]
  unsigned int v24; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp+20h]

  v25 = a4;
  v7 = -1LL;
  v24 = 0;
  v8 = -1LL;
  v9 = a2;
  v10 = 0LL;
  do
    ++v8;
  while ( a2[v8] );
  v11 = v8 + 1;
  if ( a3 )
    *a3 = 0;
  v12 = a5;
  if ( a5 )
    *a5 = 0LL;
  v13 = a6;
  if ( (unsigned int)AslEnvResolveVars(a2, v11, 0LL, 0LL, a6, &v24) != -1073741789 )
  {
    v15 = -1073741595;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslEnvExpandStrings2",
      717,
      (unsigned int)"AslEnvResolveVars failed to fail properly for null buffer");
    goto LABEL_23;
  }
  if ( v11 != v24 )
  {
    v10 = AslAlloc(v14, 2LL * v24);
    if ( !v10 )
    {
      v15 = -1073741801;
      AslLogCallPrintf(1LL, (unsigned int)"AslEnvExpandStrings2", 725, (unsigned int)"Out of memory");
      goto LABEL_23;
    }
    v17 = -1LL;
    do
      ++v17;
    while ( v9[v17] );
    v15 = AslEnvResolveVars(v9, (unsigned int)(v17 + 1), v10, v24, v13, &v24);
    if ( v15 < 0 )
    {
      v18 = "AslEnvResolveVars failed [%x]";
      v19 = 736;
LABEL_22:
      LODWORD(v22) = v15;
      AslLogCallPrintf(1LL, (unsigned int)"AslEnvExpandStrings2", v19, (_DWORD)v18, v22);
      goto LABEL_23;
    }
    v9 = v10;
  }
  do
    ++v7;
  while ( v9[v7] );
  v20 = AslEnvExpandStrings(a1, v9, v7, a3, v25, v12);
  v16 = 0x80000000LL;
  v15 = v20;
  if ( (int)(v20 + 0x80000000) >= 0 && v20 != -1073741789 )
  {
    v18 = "AslEnvExpandStrings failed [%x]";
    v19 = 751;
    goto LABEL_22;
  }
LABEL_23:
  AslFree(v16, v10);
  return (unsigned int)v15;
}

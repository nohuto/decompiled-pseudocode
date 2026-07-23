/*
 * XREFs of AslEnvExpandStrings2 @ 0x1406C6668
 * Callers:
 *     SdbpResolveMatchingFile @ 0x1406C3BA4 (SdbpResolveMatchingFile.c)
 * Callees:
 *     AslFree @ 0x140514714 (AslFree.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 *     AslEnvExpandStrings @ 0x1406C6480 (AslEnvExpandStrings.c)
 *     AslEnvResolveVars @ 0x1406C680C (AslEnvResolveVars.c)
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
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v21; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v22; // [rsp+88h] [rbp+20h]

  v22 = a4;
  v7 = -1LL;
  v21 = 0;
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
  if ( (unsigned int)AslEnvResolveVars(a2, v11, 0LL, 0LL, a6, &v21) != -1073741789 )
  {
    v15 = -1073741595;
LABEL_19:
    AslLogCallPrintf(1LL);
    goto LABEL_20;
  }
  if ( v11 != v21 )
  {
    v10 = AslAlloc(v14, 2LL * v21);
    if ( !v10 )
    {
      v15 = -1073741801;
      goto LABEL_19;
    }
    v16 = -1LL;
    do
      ++v16;
    while ( v9[v16] );
    v15 = AslEnvResolveVars(v9, (unsigned int)(v16 + 1), v10, v21, v13, &v21);
    if ( v15 < 0 )
      goto LABEL_19;
    v9 = v10;
  }
  do
    ++v7;
  while ( v9[v7] );
  v17 = AslEnvExpandStrings(a1, v9, v7, a3, v22, v12);
  v18 = 0x80000000LL;
  v15 = v17;
  if ( (int)(v17 + 0x80000000) >= 0 && v17 != -1073741789 )
    goto LABEL_19;
LABEL_20:
  AslFree(v18, v10);
  return (unsigned int)v15;
}

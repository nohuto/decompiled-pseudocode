/*
 * XREFs of AslEnvExpandStrings2 @ 0x140535920
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140535724 (SdbpResolveMatchingFile.c)
 * Callees:
 *     AslFree @ 0x1403B7E1C (AslFree.c)
 *     AslAlloc @ 0x1403B8554 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     AslEnvResolveVars @ 0x140535A6C (AslEnvResolveVars.c)
 *     AslEnvExpandStrings @ 0x140535BA4 (AslEnvExpandStrings.c)
 */

__int64 __fastcall AslEnvExpandStrings2(int a1, _WORD *a2, _WORD *a3, __int64 a4, _QWORD *a5, int a6)
{
  int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rbx
  _WORD *v9; // rdi
  _WORD *v10; // rbp
  unsigned int v11; // ebx
  __int64 v12; // r15
  int v13; // r13d
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v21; // [rsp+78h] [rbp+10h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h]

  v22 = a4;
  v6 = (int)a3;
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
  v12 = (__int64)a5;
  if ( a5 )
    *a5 = 0LL;
  v13 = a6;
  if ( (unsigned int)AslEnvResolveVars(a2, v11, 0LL, 0LL, a6, &v21) != -1073741789 )
  {
    v16 = -1073741595;
    goto LABEL_22;
  }
  if ( v11 != v21 )
  {
    v10 = AslAlloc(v14, 2LL * v21);
    if ( v10 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v9[v15] );
      v16 = AslEnvResolveVars(v9, (unsigned int)(v15 + 1), v10, v21, v13, &v21);
      if ( v16 >= 0 )
      {
        v9 = v10;
        goto LABEL_14;
      }
    }
    else
    {
      v16 = -1073741801;
    }
LABEL_22:
    AslLogCallPrintf(1LL);
    goto LABEL_16;
  }
  do
LABEL_14:
    ++v7;
  while ( v9[v7] );
  v17 = AslEnvExpandStrings(a1, (_DWORD)v9, v7, v6, v22, v12);
  v18 = 0x80000000LL;
  v16 = v17;
  if ( (int)(v17 + 0x80000000) >= 0 && v17 != -1073741789 )
    goto LABEL_22;
LABEL_16:
  AslFree(v18, v10);
  return (unsigned int)v16;
}

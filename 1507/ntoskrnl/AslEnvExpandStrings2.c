/*
 * XREFs of AslEnvExpandStrings2 @ 0x1405AA20C
 * Callers:
 *     SdbpResolveMatchingFile @ 0x1405AA010 (SdbpResolveMatchingFile.c)
 * Callees:
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     AslAlloc @ 0x1405783E4 (AslAlloc.c)
 *     AslEnvResolveVars @ 0x1405AA358 (AslEnvResolveVars.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     AslEnvExpandStrings @ 0x1405AB1E4 (AslEnvExpandStrings.c)
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
  const char *v20; // r9
  int v21; // r8d
  unsigned int v23; // [rsp+78h] [rbp+10h] BYREF
  __int64 v24; // [rsp+88h] [rbp+20h]

  v24 = a4;
  v6 = (int)a3;
  v7 = -1LL;
  v23 = 0;
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
  if ( (unsigned int)AslEnvResolveVars(a2, v11, 0LL, 0LL, a6, &v23) != -1073741789 )
  {
    v16 = -1073741595;
    v20 = "AslEnvResolveVars failed to fail properly for null buffer";
    v21 = 704;
    goto LABEL_22;
  }
  if ( v11 != v23 )
  {
    v10 = AslAlloc(v14, 2LL * v23);
    if ( !v10 )
    {
      v16 = -1073741801;
      v20 = "Out of memory";
      v21 = 712;
      goto LABEL_22;
    }
    v15 = -1LL;
    do
      ++v15;
    while ( v9[v15] );
    v16 = AslEnvResolveVars(v9, (unsigned int)(v15 + 1), v10, v23, v13, &v23);
    if ( v16 < 0 )
    {
      v20 = "AslEnvResolveVars failed [%x]";
      v21 = 723;
      goto LABEL_22;
    }
    v9 = v10;
  }
  do
    ++v7;
  while ( v9[v7] );
  v17 = AslEnvExpandStrings(a1, (_DWORD)v9, v7, v6, v24, v12);
  v18 = 0x80000000LL;
  v16 = v17;
  if ( (int)(v17 + 0x80000000) >= 0 && v17 != -1073741789 )
  {
    v20 = "AslEnvExpandStrings failed [%x]";
    v21 = 738;
LABEL_22:
    AslLogCallPrintf(1, (unsigned int)"AslEnvExpandStrings2", v21, (_DWORD)v20);
  }
  AslFree(v18, v10);
  return (unsigned int)v16;
}

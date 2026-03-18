/*
 * XREFs of SdbpResolveMatchingFile @ 0x140535724
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140535580 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x14067DFA8 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     _wcsnicmp @ 0x140144480 (_wcsnicmp.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     AslFree @ 0x1403B7E1C (AslFree.c)
 *     AslAlloc @ 0x1403B8554 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     AslEnvExpandStrings2 @ 0x140535920 (AslEnvExpandStrings2.c)
 *     AslPathToNetworkPathNt @ 0x1405361CC (AslPathToNetworkPathNt.c)
 *     AslPathClean @ 0x140536240 (AslPathClean.c)
 */

__int64 __fastcall SdbpResolveMatchingFile(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, __int64 a5, _QWORD *a6)
{
  unsigned int v8; // r12d
  int v9; // ecx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  SIZE_T v12; // rsi
  char *v13; // rax
  char *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // [rsp+30h] [rbp-48h] BYREF
  char *v22; // [rsp+38h] [rbp-40h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v8 = 0;
  *a6 = 0LL;
  if ( !a4 )
    goto LABEL_23;
  if ( *a3 == 37 )
  {
    v9 = AslEnvExpandStrings2(
           *(_QWORD *)(a2 + 56),
           (_DWORD)a3,
           0,
           0,
           (__int64)&v21,
           (*(unsigned __int8 *)(a1 + 544) >> 2) & 1);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741789 )
    {
LABEL_23:
      AslLogCallPrintf(1LL);
      return v8;
    }
    v10 = 2 * v21;
  }
  else
  {
    v19 = *(unsigned int *)(a5 + 8);
    v20 = v19 + a4;
    if ( v20 < v19 )
      goto LABEL_23;
    v10 = v20 + 1;
    if ( v20 + 1 < v20 )
      goto LABEL_23;
  }
  v11 = v10 + 20;
  if ( v10 + 20 < v10 )
    goto LABEL_23;
  v12 = 2 * v11;
  if ( !is_mul_ok(v11, 2uLL) )
    goto LABEL_23;
  v21 = 2 * v11;
  if ( v12 < 0x208 )
    v12 = 520LL;
  v13 = (char *)AslAlloc(v11, v12);
  v14 = v13;
  if ( !v13 )
    goto LABEL_23;
  if ( *a3 == 37 )
  {
    if ( (int)AslEnvExpandStrings2(
                *(_QWORD *)(a2 + 56),
                (_DWORD)a3,
                (_DWORD)v13,
                v12 >> 1,
                (__int64)&v21,
                (*(unsigned __int8 *)(a1 + 544) >> 2) & 1) < 0 )
      goto LABEL_29;
  }
  else
  {
    memmove(v13, *(const void **)a5, 2LL * *(unsigned int *)(a5 + 8));
    memmove(&v14[2 * *(unsigned int *)(a5 + 8)], a3, 2LL * (a4 + 1));
  }
  if ( (int)AslPathClean((wchar_t *)v14, v14) >= 0 )
  {
    if ( (int)AslPathToNetworkPathNt(&v22, v14) >= 0 )
    {
      AslFree(v15, v14);
      v14 = v22;
    }
    else if ( wcsnicmp((const wchar_t *)v14, L"\\??\\", 4uLL) )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *(_WORD *)&v14[2 * v17] );
      memmove(v14 + 8, v14, 2 * v17 + 2);
      memmove(v14, L"\\??\\", 8uLL);
    }
    *a6 = v14;
    v8 = 1;
    v14 = 0LL;
    goto LABEL_19;
  }
LABEL_29:
  AslLogCallPrintf(1LL);
LABEL_19:
  if ( v14 )
    AslFree(v16, v14);
  return v8;
}

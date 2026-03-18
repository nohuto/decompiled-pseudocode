/*
 * XREFs of SdbpResolveMatchingFile @ 0x1406C3A6C
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1406C21AC (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1406C2AE8 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     _wcsnicmp @ 0x14014D8A0 (_wcsnicmp.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslPathClean @ 0x1406C5EA4 (AslPathClean.c)
 *     AslPathToNetworkPathNt @ 0x1406C60B4 (AslPathToNetworkPathNt.c)
 *     AslEnvExpandStrings2 @ 0x1406C6530 (AslEnvExpandStrings2.c)
 */

__int64 __fastcall SdbpResolveMatchingFile(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, __int64 a5, _QWORD *a6)
{
  unsigned int v8; // r12d
  int v9; // ecx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  SIZE_T v14; // rsi
  char *v15; // rax
  char *v16; // rbx
  const char *v17; // r9
  int v18; // r8d
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+30h] [rbp-48h] BYREF
  char *v28; // [rsp+38h] [rbp-40h] BYREF

  v27 = 0LL;
  v28 = 0LL;
  v8 = 0;
  *a6 = 0LL;
  if ( !a4 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", 524, (unsigned int)"Invalid match file length");
    return v8;
  }
  if ( *a3 == 37 )
  {
    v9 = AslEnvExpandStrings2(
           *(_QWORD *)(a2 + 56),
           (_DWORD)a3,
           0,
           0,
           (__int64)&v27,
           (*(unsigned __int8 *)(a1 + 544) >> 2) & 1);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741789 )
    {
      LODWORD(v25) = v9;
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpResolveMatchingFile",
        550,
        (unsigned int)"AslEnvExpandStrings2 failed [%x]",
        v25);
      return v8;
    }
    v10 = 2 * v27;
  }
  else
  {
    v11 = *(unsigned int *)(a5 + 8);
    v12 = v11 + a4;
    if ( v12 < v11 )
    {
      v18 = 563;
      goto LABEL_35;
    }
    v10 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
      v18 = 568;
      goto LABEL_35;
    }
  }
  v13 = v10 + 20;
  if ( v10 + 20 < v10 )
  {
    v18 = 574;
LABEL_35:
    v17 = "Invalid path size";
    goto LABEL_36;
  }
  v14 = 2 * v13;
  if ( !is_mul_ok(v13, 2uLL) )
  {
    v17 = "Invalid buffer size";
    v18 = 579;
    goto LABEL_36;
  }
  v27 = 2 * v13;
  if ( v14 < 0x208 )
    v14 = 520LL;
  v15 = (char *)AslAlloc(v13, v14);
  v16 = v15;
  if ( !v15 )
  {
    v17 = "Out of memory";
    v18 = 587;
LABEL_36:
    AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", v18, (_DWORD)v17);
    return v8;
  }
  if ( *a3 != 37 )
  {
    memmove(v15, *(const void **)a5, 2LL * *(unsigned int *)(a5 + 8));
    memmove(&v16[2 * *(unsigned int *)(a5 + 8)], a3, 2LL * (a4 + 1));
LABEL_20:
    v21 = AslPathClean(v16, v16);
    if ( v21 >= 0 )
    {
      if ( (int)AslPathToNetworkPathNt(&v28, v16) < 0 )
      {
        if ( wcsnicmp((const wchar_t *)v16, L"\\??\\", 4uLL) )
        {
          v23 = -1LL;
          do
            ++v23;
          while ( *(_WORD *)&v16[2 * v23] );
          memmove(v16 + 8, v16, 2 * v23 + 2);
          memmove(v16, L"\\??\\", 8uLL);
        }
      }
      else
      {
        AslFree(v22, v16);
        v16 = v28;
      }
      *a6 = v16;
      v8 = 1;
      v16 = 0LL;
    }
    else
    {
      LODWORD(v25) = v21;
      AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", 629, (unsigned int)"AslPathClean failed [%x]", v25);
    }
    goto LABEL_29;
  }
  v19 = AslEnvExpandStrings2(
          *(_QWORD *)(a2 + 56),
          (_DWORD)a3,
          (_DWORD)v15,
          v14 >> 1,
          (__int64)&v27,
          (*(unsigned __int8 *)(a1 + 544) >> 2) & 1);
  if ( v19 >= 0 )
    goto LABEL_20;
  LODWORD(v26) = v19;
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpResolveMatchingFile",
    604,
    (unsigned int)"AslEnvExpandStrings2 failed to expand strings for %ws [%x]",
    a3,
    v26,
    v27);
LABEL_29:
  if ( v16 )
    AslFree(v20, v16);
  return v8;
}

/*
 * XREFs of SdbpResolveMatchingFile @ 0x1406C3BA4
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1406C22E4 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1406C2C20 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 *     AslPathClean @ 0x1406C5FDC (AslPathClean.c)
 *     AslPathToNetworkPathNt @ 0x1406C61EC (AslPathToNetworkPathNt.c)
 *     AslEnvExpandStrings2 @ 0x1406C6668 (AslEnvExpandStrings2.c)
 */

__int64 __fastcall SdbpResolveMatchingFile(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, __int64 a5, _QWORD *a6)
{
  unsigned int v8; // r12d
  const char *v9; // r9
  int v10; // r8d
  int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  SIZE_T v16; // rsi
  _WORD *v17; // rax
  _WORD *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  _WORD *v24; // [rsp+38h] [rbp-40h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  v8 = 0;
  *a6 = 0LL;
  if ( !a4 )
  {
    v9 = "Invalid match file length";
    v10 = 524;
LABEL_36:
    AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", v10, (_DWORD)v9);
    return v8;
  }
  if ( *a3 == 37 )
  {
    v11 = AslEnvExpandStrings2(
            *(_QWORD *)(a2 + 56),
            (_DWORD)a3,
            0,
            0,
            (__int64)&v23,
            (*(unsigned __int8 *)(a1 + 544) >> 2) & 1);
    if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741789 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpResolveMatchingFile",
        550,
        (unsigned int)"AslEnvExpandStrings2 failed [%x]");
      return v8;
    }
    v12 = 2 * v23;
  }
  else
  {
    v13 = *(unsigned int *)(a5 + 8);
    v14 = v13 + a4;
    if ( v14 < v13 )
    {
      v10 = 563;
      goto LABEL_35;
    }
    v12 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      v10 = 568;
      goto LABEL_35;
    }
  }
  v15 = v12 + 20;
  if ( v12 + 20 < v12 )
  {
    v10 = 574;
LABEL_35:
    v9 = "Invalid path size";
    goto LABEL_36;
  }
  v16 = 2 * v15;
  if ( !is_mul_ok(v15, 2uLL) )
  {
    v9 = "Invalid buffer size";
    v10 = 579;
    goto LABEL_36;
  }
  v23 = 2 * v15;
  if ( v16 < 0x208 )
    v16 = 520LL;
  v17 = AslAlloc(v15, v16);
  v18 = v17;
  if ( !v17 )
  {
    v9 = "Out of memory";
    v10 = 587;
    goto LABEL_36;
  }
  if ( *a3 != 37 )
  {
    memmove(v17, *(const void **)a5, 2LL * *(unsigned int *)(a5 + 8));
    memmove(&v18[*(unsigned int *)(a5 + 8)], a3, 2LL * (a4 + 1));
LABEL_20:
    if ( (int)AslPathClean(v18, v18) >= 0 )
    {
      if ( (int)AslPathToNetworkPathNt(&v24, v18) < 0 )
      {
        if ( wcsnicmp(v18, L"\\??\\", 4uLL) )
        {
          v21 = -1LL;
          do
            ++v21;
          while ( v18[v21] );
          memmove(v18 + 4, v18, 2 * v21 + 2);
          memmove(v18, L"\\??\\", 8uLL);
        }
      }
      else
      {
        AslFree(v20, v18);
        v18 = v24;
      }
      *a6 = v18;
      v8 = 1;
      v18 = 0LL;
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", 629, (unsigned int)"AslPathClean failed [%x]");
    }
    goto LABEL_29;
  }
  if ( (int)AslEnvExpandStrings2(
              *(_QWORD *)(a2 + 56),
              (_DWORD)a3,
              (_DWORD)v17,
              v16 >> 1,
              (__int64)&v23,
              (*(unsigned __int8 *)(a1 + 544) >> 2) & 1) >= 0 )
    goto LABEL_20;
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpResolveMatchingFile",
    604,
    (unsigned int)"AslEnvExpandStrings2 failed to expand strings for %ws [%x]");
LABEL_29:
  if ( v18 )
    AslFree(v19, v18);
  return v8;
}

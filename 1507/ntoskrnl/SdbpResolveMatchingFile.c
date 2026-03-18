/*
 * XREFs of SdbpResolveMatchingFile @ 0x1405AA010
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1405AB79C (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x140702DFC (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     _wcsnicmp @ 0x140172500 (_wcsnicmp.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     AslAlloc @ 0x1405783E4 (AslAlloc.c)
 *     AslEnvExpandStrings2 @ 0x1405AA20C (AslEnvExpandStrings2.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     AslPathToNetworkPathNt @ 0x1405ABCE8 (AslPathToNetworkPathNt.c)
 *     AslPathClean @ 0x1405ABD5C (AslPathClean.c)
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
  const char *v19; // r9
  int v20; // r8d
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  char *v24; // [rsp+38h] [rbp-40h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  v8 = 0;
  *a6 = 0LL;
  if ( !a4 )
  {
    v19 = "Invalid match file length";
    v20 = 519;
LABEL_37:
    AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", v20, (_DWORD)v19);
    return v8;
  }
  if ( *a3 == 37 )
  {
    v9 = AslEnvExpandStrings2(
           *(_QWORD *)(a2 + 56),
           (_DWORD)a3,
           0,
           0,
           (__int64)&v23,
           (*(unsigned __int8 *)(a1 + 544) >> 2) & 1);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741789 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpResolveMatchingFile",
        545,
        (unsigned int)"AslEnvExpandStrings2 failed [%x]");
      return v8;
    }
    v10 = 2 * v23;
  }
  else
  {
    v21 = *(unsigned int *)(a5 + 8);
    v22 = v21 + a4;
    if ( v22 < v21 )
    {
      v20 = 558;
      goto LABEL_36;
    }
    v10 = v22 + 1;
    if ( v22 + 1 < v22 )
    {
      v20 = 563;
LABEL_36:
      v19 = "Invalid path size";
      goto LABEL_37;
    }
  }
  v11 = v10 + 20;
  if ( v10 + 20 < v10 )
  {
    v20 = 569;
    goto LABEL_36;
  }
  v12 = 2 * v11;
  if ( !is_mul_ok(v11, 2uLL) )
  {
    v19 = "Invalid buffer size";
    v20 = 574;
    goto LABEL_37;
  }
  v23 = 2 * v11;
  if ( v12 < 0x208 )
    v12 = 520LL;
  v13 = (char *)AslAlloc(v11, v12);
  v14 = v13;
  if ( !v13 )
  {
    v19 = "Out of memory";
    v20 = 582;
    goto LABEL_37;
  }
  if ( *a3 != 37 )
  {
    memmove(v13, *(const void **)a5, 2LL * *(unsigned int *)(a5 + 8));
    memmove(&v14[2 * *(unsigned int *)(a5 + 8)], a3, 2LL * (a4 + 1));
LABEL_12:
    if ( (int)AslPathClean((wchar_t *)v14, v14) < 0 )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", 624, (unsigned int)"AslPathClean failed [%x]");
    }
    else
    {
      if ( (int)AslPathToNetworkPathNt(&v24, v14) >= 0 )
      {
        AslFree(v15, v14);
        v14 = v24;
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
    }
    goto LABEL_19;
  }
  if ( (int)AslEnvExpandStrings2(
              *(_QWORD *)(a2 + 56),
              (_DWORD)a3,
              (_DWORD)v13,
              v12 >> 1,
              (__int64)&v23,
              (*(unsigned __int8 *)(a1 + 544) >> 2) & 1) >= 0 )
    goto LABEL_12;
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpResolveMatchingFile",
    599,
    (unsigned int)"AslEnvExpandStrings2 failed to expand strings for %ws [%x]");
LABEL_19:
  if ( v14 )
    AslFree(v16, v14);
  return v8;
}

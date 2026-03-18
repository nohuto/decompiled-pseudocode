/*
 * XREFs of AslPathToNetworkPathNt @ 0x1405ABCE8
 * Callers:
 *     SdbpResolveMatchingFile @ 0x1405AA010 (SdbpResolveMatchingFile.c)
 * Callees:
 *     wcscat_s @ 0x140177CE8 (wcscat_s.c)
 *     wcscpy_s @ 0x140177D84 (wcscpy_s.c)
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     AslAlloc @ 0x1405783E4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathToNetworkPathNt(wchar_t **a1, _WORD *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  __int16 v7; // ax
  const wchar_t *v8; // r14
  __int16 v9; // ax
  __int16 v10; // ax
  __int64 v11; // rax
  rsize_t v12; // rsi
  wchar_t *v13; // rax
  wchar_t *v14; // rdi

  v2 = 0;
  v4 = -1LL;
  *a1 = 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  if ( v5 > 4
    && (*a2 == 92 || *a2 == 47)
    && ((v7 = a2[1], v7 == 47) || v7 == 92)
    && ((v8 = a2 + 2, v9 = a2[2], v9 != 46) && v9 != 63 || (v10 = a2[3], v10 != 47) && v10 && v10 != 92) )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( aUnc_0[v11] );
    do
      ++v4;
    while ( a2[v4] );
    v12 = v4 + v11 + 1;
    v13 = (wchar_t *)AslAlloc((__int64)a1, 2 * v12);
    v14 = v13;
    if ( v13 )
    {
      wcscpy_s(v13, v12, L"\\??\\UNC\\");
      wcscat_s(v14, v12, v8);
      *a1 = v14;
    }
    else
    {
      v2 = -1073741801;
      AslLogCallPrintf(1LL);
    }
  }
  else
  {
    v2 = -1073741811;
  }
  AslFree((__int64)a1, 0LL);
  return v2;
}

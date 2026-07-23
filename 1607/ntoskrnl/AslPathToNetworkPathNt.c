/*
 * XREFs of AslPathToNetworkPathNt @ 0x1406C61EC
 * Callers:
 *     SdbpResolveMatchingFile @ 0x1406C3BA4 (SdbpResolveMatchingFile.c)
 * Callees:
 *     wcscat_s @ 0x1401535B8 (wcscat_s.c)
 *     wcscpy_s @ 0x140153654 (wcscpy_s.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 *     AslpDetermineDosPathNameType @ 0x1406C63D0 (AslpDetermineDosPathNameType.c)
 */

__int64 __fastcall AslPathToNetworkPathNt(wchar_t **a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  rsize_t v8; // r14
  wchar_t *v9; // rax
  wchar_t *v10; // rdi

  v2 = 0;
  *a1 = 0LL;
  if ( (unsigned int)AslpDetermineDosPathNameType(a2) == 1 )
  {
    v6 = -1LL;
    v7 = -1LL;
    do
      ++v7;
    while ( aUnc_0[v7] );
    do
      ++v6;
    while ( *(_WORD *)(a2 + 2 * v6) );
    v8 = v7 + v6 + 1;
    v9 = (wchar_t *)AslAlloc(v5, 2 * v8);
    v10 = v9;
    if ( v9 )
    {
      wcscpy_s(v9, v8, L"\\??\\UNC\\");
      wcscat_s(v10, v8, (const wchar_t *)(a2 + 4));
      *a1 = v10;
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
  AslFree(v5, 0LL);
  return v2;
}

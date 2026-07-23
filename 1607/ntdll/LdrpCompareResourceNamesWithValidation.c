/*
 * XREFs of LdrpCompareResourceNamesWithValidation @ 0x1800DC310
 * Callers:
 *     ResourceEntryBinarySearch @ 0x180030F24 (ResourceEntryBinarySearch.c)
 *     LdrEnumResources @ 0x1800DBCF0 (LdrEnumResources.c)
 * Callees:
 *     wcsncmp @ 0x18009C6B0 (wcsncmp.c)
 */

__int64 __fastcall LdrpCompareResourceNamesWithValidation(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        int *a5,
        _BYTE *a6)
{
  char v7; // r11
  int v8; // r8d
  unsigned __int16 *v10; // rdi
  unsigned __int64 v11; // rax
  unsigned int v12; // r8d
  unsigned int v13; // edx
  __int64 v14; // rax

  if ( !a1 || (v7 = 1, !a2) )
    v7 = 0;
  *a6 = 1;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v8 = *a5;
    if ( *a5 >= 0 )
      return -1LL;
    if ( v7 && a4 + (unsigned __int64)(v8 & 0x7FFFFFFF) > a2 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)
      || (v10 = (unsigned __int16 *)(a4 + (v8 & 0x7FFFFFFF)), v7)
      && ((v11 = 2LL * *v10, v11 > 0xFFFFFFFF)
       || (v12 = v8 & 0x7FFFFFFF, (unsigned int)v11 + v12 < v12)
       || a4 + (unsigned __int64)((unsigned int)v11 + v12) > a2 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)) )
    {
      *a6 = 0;
      return -1LL;
    }
    v13 = wcsncmp(a3, v10 + 1, *v10);
    if ( !v13 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a3[v14] );
      if ( v14 != *v10 )
        return 1LL;
    }
    return v13;
  }
  else
  {
    if ( *a5 < 0 )
      return 1LL;
    return (unsigned int)((_DWORD)a3 - *a5);
  }
}

/*
 * XREFs of LdrpResCompareResourceNames @ 0x14051E54C
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x14051E630 (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     wcsncmp @ 0x14014F600 (wcsncmp.c)
 */

__int64 __fastcall LdrpResCompareResourceNames(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        unsigned __int64 a5,
        unsigned int *a6,
        __int16 a7,
        int *a8)
{
  unsigned int v9; // ebx
  __int64 v11; // rcx
  __int64 v13; // rcx
  unsigned __int16 *v14; // rdi
  int v15; // edx
  __int64 v16; // rcx

  v9 = 0;
  if ( a5 && a6 )
  {
    if ( ((unsigned __int64)a4 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v13 = *a6;
      if ( (int)v13 >= 0 )
      {
        *a8 = -1;
        return v9;
      }
      LODWORD(v13) = v13 & 0x7FFFFFFF;
      v14 = (unsigned __int16 *)(v13 + a5);
      if ( (a7 & 0x1000) != 0
        && ((unsigned __int64)v14 < a5 || (unsigned __int64)v14 > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL))
        || ((unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        return (unsigned int)-1073741701;
      }
      v15 = wcsncmp(a4, v14 + 1, *v14);
      if ( v15 )
        goto LABEL_18;
      v16 = -1LL;
      do
        ++v16;
      while ( a4[v16] );
      if ( v16 == *v14 )
      {
LABEL_18:
        *a8 = v15;
        return v9;
      }
    }
    else
    {
      v11 = *a6;
      if ( (int)v11 >= 0 )
      {
        if ( (a7 & 0x1000) == 0 || (v11 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
          *a8 = (_DWORD)a4 - v11;
          return v9;
        }
        return (unsigned int)-1073741701;
      }
      if ( (a7 & 0x1000) != 0 && (v11 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        return (unsigned int)-1073741701;
    }
    *a8 = 1;
    return v9;
  }
  return 3221225485LL;
}

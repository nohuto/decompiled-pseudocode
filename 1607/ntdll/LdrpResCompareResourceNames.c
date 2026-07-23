/*
 * XREFs of LdrpResCompareResourceNames @ 0x1800391A0
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x1800381CC (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     wcsncmp @ 0x18009C6B0 (wcsncmp.c)
 *     LdrpResReadFile @ 0x1800DD4C4 (LdrpResReadFile.c)
 */

__int64 __fastcall LdrpResCompareResourceNames(
        __int64 a1,
        void *a2,
        __int64 a3,
        const wchar_t *a4,
        unsigned __int64 a5,
        int *a6,
        __int16 a7,
        int *a8)
{
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v12; // rax
  char *v13; // rdi
  int v14; // edx
  __int64 v15; // rcx
  unsigned __int16 v16; // [rsp+20h] [rbp-258h]
  char v17; // [rsp+30h] [rbp-248h] BYREF

  if ( !a5 || !a6 )
    return 3221225485LL;
  v10 = 0;
  if ( ((unsigned __int64)a4 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( *a6 >= 0 )
    {
      if ( (a7 & 0x1000) == 0 || (*a6 & 0xFFFF0000) == 0 )
      {
        *a8 = (_DWORD)a4 - *a6;
        return v10;
      }
      return (unsigned int)-1073741701;
    }
    if ( (a7 & 0x1000) != 0 && (*a6 & 0xFFFF0000) == 0 )
      return (unsigned int)-1073741701;
LABEL_28:
    *a8 = 1;
    return v10;
  }
  v12 = (unsigned int)*a6;
  if ( (int)v12 >= 0 )
  {
    *a8 = -1;
    return v10;
  }
  LODWORD(v12) = v12 & 0x7FFFFFFF;
  v13 = (char *)(a5 + v12);
  if ( (a7 & 0x1000) != 0 && ((unsigned __int64)v13 < a5 || (unsigned __int64)v13 > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)) )
    return (unsigned int)-1073741701;
  if ( (a7 & 0x8800) != 0x8800 )
  {
LABEL_15:
    if ( ((unsigned __int64)(v13 + 2) & 0xFFFFFFFFFFFF0000uLL) == 0 )
      return (unsigned int)-1073741701;
    v14 = wcsncmp(a4, (const wchar_t *)v13 + 1, *(unsigned __int16 *)v13);
    if ( v14 )
      goto LABEL_17;
    v15 = -1LL;
    do
      ++v15;
    while ( a4[v15] );
    if ( v15 == *(unsigned __int16 *)v13 )
    {
LABEL_17:
      *a8 = v14;
      return v10;
    }
    goto LABEL_28;
  }
  result = LdrpResReadFile(a2);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int64)v16 + 3 > 0x104 )
      return (unsigned int)-1073741701;
    result = LdrpResReadFile(a2);
    v10 = result;
    if ( (int)result >= 0 )
    {
      v13 = &v17;
      goto LABEL_15;
    }
  }
  return result;
}

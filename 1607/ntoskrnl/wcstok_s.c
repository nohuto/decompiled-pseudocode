/*
 * XREFs of wcstok_s @ 0x140159860
 * Callers:
 *     GetOperatorIndexByName @ 0x1406CD658 (GetOperatorIndexByName.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 */

wchar_t *__cdecl wcstok_s(wchar_t *Str, const wchar_t *Delim, wchar_t **Context)
{
  wchar_t *result; // rax
  wchar_t v6; // ax
  wchar_t v7; // r10
  const wchar_t *v8; // rdx
  wchar_t v9; // r8
  const wchar_t *v10; // rdx
  wchar_t v11; // r8

  if ( Context && Delim && (Str || (Str = *Context) != 0LL) )
  {
    v6 = *Str;
    if ( *Str )
    {
      v7 = *Delim;
      do
      {
        v8 = Delim;
        if ( v7 )
        {
          v9 = v7;
          do
          {
            if ( v9 == v6 )
              break;
            v9 = *++v8;
          }
          while ( *v8 );
        }
        if ( !*v8 )
          break;
        v6 = *++Str;
      }
      while ( *Str );
    }
    result = Str;
    if ( *Str )
    {
      while ( 1 )
      {
        v10 = Delim;
        if ( *Delim )
        {
          v11 = *Delim;
          do
          {
            if ( v11 == *Str )
              break;
            v11 = *++v10;
          }
          while ( *v10 );
        }
        if ( *v10 )
          break;
        if ( !*++Str )
          goto LABEL_23;
      }
      *Str++ = 0;
    }
LABEL_23:
    *Context = Str;
    if ( result == Str )
      return 0LL;
  }
  else
  {
    xHalFreeMessageTarget();
    return 0LL;
  }
  return result;
}

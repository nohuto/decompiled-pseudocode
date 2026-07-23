/*
 * XREFs of wcstok_s @ 0x1800A2790
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 */

wchar_t *__cdecl wcstok_s(wchar_t *String, const wchar_t *Delimiter, wchar_t **Context)
{
  wchar_t *result; // rax
  wchar_t v6; // ax
  wchar_t v7; // r10
  const wchar_t *v8; // rdx
  wchar_t v9; // r8
  const wchar_t *v10; // rdx
  wchar_t v11; // r8

  if ( Context && Delimiter && (String || (String = *Context) != 0LL) )
  {
    v6 = *String;
    if ( *String )
    {
      v7 = *Delimiter;
      do
      {
        v8 = Delimiter;
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
        v6 = *++String;
      }
      while ( *String );
    }
    result = String;
    if ( *String )
    {
      while ( 1 )
      {
        v10 = Delimiter;
        if ( *Delimiter )
        {
          v11 = *Delimiter;
          do
          {
            if ( v11 == *String )
              break;
            v11 = *++v10;
          }
          while ( *v10 );
        }
        if ( *v10 )
          break;
        if ( !*++String )
          goto LABEL_23;
      }
      *String++ = 0;
    }
LABEL_23:
    *Context = String;
    if ( result == String )
      return 0LL;
  }
  else
  {
    invalid_parameter();
    return 0LL;
  }
  return result;
}

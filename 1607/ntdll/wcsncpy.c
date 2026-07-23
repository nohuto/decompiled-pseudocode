/*
 * XREFs of wcsncpy @ 0x18009C6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsncpy(wchar_t *Destination, const wchar_t *Source, size_t Count)
{
  wchar_t *v3; // r9
  signed __int64 v4; // rdx
  wchar_t v5; // ax
  size_t v6; // r8
  wchar_t *v7; // rdi
  size_t i; // rcx

  v3 = Destination;
  if ( Count )
  {
    v4 = (char *)Source - (char *)Destination;
    do
    {
      v5 = *(wchar_t *)((char *)Destination + v4);
      *Destination++ = v5;
      if ( !v5 )
        break;
      --Count;
    }
    while ( Count );
    if ( Count )
    {
      v6 = Count - 1;
      if ( v6 )
      {
        v7 = Destination;
        for ( i = v6; i; --i )
          *v7++ = 0;
      }
    }
  }
  return v3;
}

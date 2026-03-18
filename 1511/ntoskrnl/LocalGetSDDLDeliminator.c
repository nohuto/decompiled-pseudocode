/*
 * XREFs of LocalGetSDDLDeliminator @ 0x140686834
 * Callers:
 *     LocalGetAclForString @ 0x1406859BC (LocalGetAclForString.c)
 * Callees:
 *     wcschr @ 0x140145B68 (wcschr.c)
 *     FContainCallBackAce @ 0x140683FDC (FContainCallBackAce.c)
 */

__int64 __fastcall LocalGetSDDLDeliminator(wchar_t *Str, _QWORD *a2)
{
  BOOL v3; // ebp
  unsigned int v4; // ebx
  unsigned int v5; // esi
  const wchar_t *v6; // rdi

  v3 = 0;
  *a2 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = Str;
  if ( !(unsigned int)FContainCallBackAce(Str) )
  {
    *a2 = wcschr(v6, 0x3Au);
    return v5;
  }
  if ( !*v6 )
    return v5;
  while ( !*a2 && !v5 )
  {
    switch ( *v6 )
    {
      case '"':
        if ( v4 <= 1 )
        {
LABEL_19:
          v5 = 1336;
          break;
        }
        v3 = !v3;
        break;
      case '(':
        if ( !v3 )
          ++v4;
        break;
      case ')':
        if ( !v3 )
        {
          if ( !v4 )
            goto LABEL_19;
          --v4;
        }
        break;
      default:
        if ( *v6 == 58 && !v4 )
          *a2 = v6;
        break;
    }
    if ( !*++v6 )
      break;
  }
  if ( v3 || v4 )
    return 1336;
  return v5;
}

/*
 * XREFs of AslpFileStringTokenize @ 0x140233928
 * Callers:
 *     AslpFileVerQueryBlock @ 0x1406C91EC (AslpFileVerQueryBlock.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall AslpFileStringTokenize(_WORD *a1, __int64 a2, _QWORD *a3)
{
  _WORD *result; // rax
  const WCHAR *v5; // r8
  __int16 v6; // r9
  _WORD *v7; // r9
  const WCHAR *v8; // rdx
  __int16 v9; // r8

  result = 0LL;
  if ( a3 )
  {
    if ( a1 || (a1 = (_WORD *)*a3) != 0LL )
    {
      while ( *a1 )
      {
        v5 = L"\\";
        v6 = 92;
        do
        {
          if ( v6 == *a1 )
            break;
          v6 = *++v5;
        }
        while ( *v5 );
        if ( !*v5 )
          break;
        ++a1;
      }
      v7 = a1;
      while ( *a1 )
      {
        v8 = L"\\";
        v9 = 92;
        do
        {
          if ( v9 == *a1 )
            break;
          v9 = *++v8;
        }
        while ( *v8 );
        if ( *v8 )
        {
          *a1++ = 0;
          break;
        }
        ++a1;
      }
      *a3 = a1;
      if ( a1 != v7 )
        return v7;
    }
  }
  return result;
}

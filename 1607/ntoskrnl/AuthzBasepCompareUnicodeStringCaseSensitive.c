/*
 * XREFs of AuthzBasepCompareUnicodeStringCaseSensitive @ 0x140234908
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14023495C (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepCompareUnicodeStringCaseSensitive(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r10
  unsigned __int16 v3; // r11
  char *v4; // r8
  _WORD *v5; // r9
  int v6; // eax
  char *v7; // rcx
  int v8; // ecx
  int v9; // eax

  v2 = *a1;
  v3 = *a2;
  v4 = (char *)*((_QWORD *)a1 + 1);
  v5 = (_WORD *)*((_QWORD *)a2 + 1);
  v6 = *a1;
  if ( *a1 >= *a2 )
    v6 = v3;
  v7 = &v4[v6];
  while ( 1 )
  {
    if ( v4 >= v7 )
    {
      v8 = v3;
      v9 = v2;
      return (unsigned int)(v9 - v8);
    }
    if ( *(_WORD *)v4 != *v5 )
      break;
    v4 += 2;
    ++v5;
  }
  v8 = (unsigned __int16)*v5;
  v9 = *(unsigned __int16 *)v4;
  return (unsigned int)(v9 - v8);
}

/*
 * XREFs of SepSddlParseWideStringUlong @ 0x1C00E3F18
 * Callers:
 *     SepSddlGetAclForString @ 0x1C009D468 (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlParseWideStringUlong(unsigned __int16 *a1, unsigned __int16 **a2, unsigned int *a3)
{
  unsigned __int16 *v3; // r9
  unsigned __int16 *v4; // r10
  unsigned __int16 v6; // cx
  int v8; // edx
  unsigned int v9; // r8d
  int v10; // eax
  unsigned __int16 v11; // cx
  __int64 result; // rax

  *a2 = a1;
  v3 = a1;
  *a3 = 0;
  v4 = a1;
  v6 = *a1;
  if ( v6 != 48 || ((v4[1] - 88) & 0xFFDF) != 0 )
  {
    v8 = 16;
    if ( (unsigned __int16)(v6 - 48) <= 9u )
      v8 = 10;
  }
  else
  {
    v3 += 2;
    v8 = 16;
    v4 = v3;
  }
  v9 = 0;
  while ( 1 )
  {
    v11 = *v4;
    if ( !*v4 )
      break;
    if ( (unsigned __int16)(v11 - 48) > 9u )
    {
      if ( v8 != 16 )
        break;
      if ( (unsigned __int16)(v11 - 65) > 5u )
      {
        if ( (unsigned __int16)(v11 - 97) > 5u )
          break;
        v10 = v11 - 87;
      }
      else
      {
        v10 = v11 - 55;
      }
    }
    else
    {
      v10 = v11 - 48;
    }
    if ( v10 + v8 * v9 < v9 )
      return 0LL;
    v9 = v10 + v8 * v9;
    ++v4;
  }
  if ( v4 != v3 )
  {
    *a2 = v4;
    result = 1LL;
    *a3 = v9;
    return result;
  }
  return 0LL;
}
